#include "protos.h"

void f_00409890(void) /* BaccaratBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409890);
    /* 00409890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409891: mov ebp, esp */ r_ebp = r_esp;
    /* 00409893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409897: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0040989a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040989b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040989e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040989f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004098a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004098a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004098a6: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x4098abu); f_005cba10();
    /* 004098ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004098ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004098ae: ret 0xc */ FN_RET(0x00409890); r_esp += 16; return;
}

void f_00409ee0(void) /* BaccaratBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409ee0);
    /* 00409ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00409ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00409ee7: cmp dword ptr [0x7902f8], 0 */ {  u32 a = R32((u32)(0x7902f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409eee: je 0x409f08 */ if (fZ) goto L_00409f08;
L_00409ef0:; BB(0x00409ef0);
    /* 00409ef0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409ef3: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x409ef8u); f_005f5400();
    /* 00409ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409ef9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00409efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00409efd: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00409f03: call 0x402270 */ r_esp -= 4; W32(r_esp, 0x409f08u); f_00402270();
L_00409f08:; BB(0x00409f08);
    /* 00409f08: mov esp, ebp */ r_esp = r_ebp;
    /* 00409f0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409f0b: ret 8 */ FN_RET(0x00409ee0); r_esp += 12; return;
}

void f_00409f10(void) /* BaccaratBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00409f10);
    /* 00409f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00409f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00409f13: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00409f16: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00409f19: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00409f1c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x409f21u); f_005f5400();
    /* 00409f21: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409f24: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00409f29: mov ecx, dword ptr [eax + 0x10dc] */ r_ecx = R32((u32)(r_eax+0x10dcu));
    /* 00409f2f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00409f32: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409f36: jne 0x409f3f */ if (!fZ) goto L_00409f3f;
L_00409f38:; BB(0x00409f38);
    /* 00409f38: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409f3a: jmp 0x409fdd */ goto L_00409fdd;
L_00409f3f:; BB(0x00409f3f);
    /* 00409f3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00409f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409f43: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409f49: call 0x4081c0 */ r_esp -= 4; W32(r_esp, 0x409f4eu); f_004081c0();
    /* 00409f4e: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409f51: je 0x409f5a */ if (fZ) goto L_00409f5a;
L_00409f53:; BB(0x00409f53);
    /* 00409f53: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00409f55: jmp 0x409fdd */ goto L_00409fdd;
L_00409f5a:; BB(0x00409f5a);
    /* 00409f5a: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409f60: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x409f65u); f_00407bb0();
    /* 00409f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409f67: je 0x409fdb */ if (fZ) goto L_00409fdb;
L_00409f69:; BB(0x00409f69);
    /* 00409f69: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409f6f: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x409f74u); f_00407bb0();
    /* 00409f74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00409f77: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00409f7a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x409f7fu); f_0063aac0();
    /* 00409f7f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00409f81: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00409f84: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409f88: je 0x409fa6 */ if (fZ) goto L_00409fa6;
L_00409f8a:; BB(0x00409f8a);
    /* 00409f8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00409f8d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x409f92u); f_0063aac0();
    /* 00409f92: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00409f94: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00409f97: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409f9b: je 0x409fa6 */ if (fZ) goto L_00409fa6;
L_00409f9d:; BB(0x00409f9d);
    /* 00409f9d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00409fa4: jmp 0x409fad */ goto L_00409fad;
L_00409fa6:; BB(0x00409fa6);
    /* 00409fa6: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00409fad:; BB(0x00409fad);
    /* 00409fad: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00409fb1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409fb3: je 0x409fdb */ if (fZ) goto L_00409fdb;
L_00409fb5:; BB(0x00409fb5);
    /* 00409fb5: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00409fbb: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x409fc0u); f_00407bb0();
    /* 00409fc0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00409fc3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00409fc6: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 00409fcc: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 00409fcf: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00409fd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409fd5: jne 0x409fdb */ if (!fZ) goto L_00409fdb;
L_00409fd7:; BB(0x00409fd7);
    /* 00409fd7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00409fd9: jmp 0x409fdd */ goto L_00409fdd;
L_00409fdb:; BB(0x00409fdb);
    /* 00409fdb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00409fdd:; BB(0x00409fdd);
    /* 00409fdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00409fdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409fe0: ret  */ FN_RET(0x00409f10); r_esp += 4; return;
}

void f_0040a020(void) /* BaccaratBet::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040a020);
    /* 0040a020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040a021: mov ebp, esp */ r_ebp = r_esp;
    /* 0040a023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040a024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040a027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a02a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040a02c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040a02f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0040a035: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40a037u); call_ind(t); }
    /* 0040a037: mov esp, ebp */ r_esp = r_ebp;
    /* 0040a039: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040a03a: ret  */ FN_RET(0x0040a020); r_esp += 4; return;
}

void f_005cb6d0(void) /* BaccaratBet::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb6d0);
    /* 005cb6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb6d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cb6d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cb6da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cb6de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb6df: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005cb6e2: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cb6e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb6e8: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005cb6ec: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005cb6ef: lea ecx, [ecx + edx*8] */ r_ecx = (u32)(r_ecx+r_edx*8);
    /* 005cb6f2: call 0x64c760 */ r_esp -= 4; W32(r_esp, 0x5cb6f7u); f_0064c760();
    /* 005cb6f7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cb6fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb6fc: je 0x5cb739 */ if (fZ) goto L_005cb739;
L_005cb6fe:; BB(0x005cb6fe);
    /* 005cb6fe: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cb702: je 0x5cb739 */ if (fZ) goto L_005cb739;
L_005cb704:; BB(0x005cb704);
    /* 005cb704: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb706: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb707: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005cb70d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cb710: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb711: fld1  */ FPUSH(1.0);
    /* 005cb713: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cb716: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb718: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb71a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb71c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb71e: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb723: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cb729: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb72b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cb731: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005cb737: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb739u); call_ind(t); }
L_005cb739:; BB(0x005cb739);
    /* 005cb739: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005cb73c: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005cb73f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb742: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005cb746: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005cb749: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cb74c: mov dword ptr [eax + ecx*8], edx */ W32((u32)(r_eax+r_ecx*8), r_edx);
    /* 005cb74f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cb752: mov dword ptr [eax + ecx*8 + 4], edx */ W32((u32)(r_eax+r_ecx*8+0x4u), r_edx);
    /* 005cb756: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005cb759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb75a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005cb75d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb75e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb761: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cb763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb766: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 005cb76c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cb76eu); call_ind(t); }
    /* 005cb76e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb770: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb771: ret 0x10 */ FN_RET(0x005cb6d0); r_esp += 20; return;
}

void f_005cb780(void) /* BaccaratBet::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb780);
    /* 005cb780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb781: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb783: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb786: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cb789: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb78b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb78d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cb792u); f_0064c8a0();
    /* 005cb792: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb795: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cb798: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005cb79b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cb79e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb79f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cb7a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb7a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cb7a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb7a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cb7aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb7ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb7ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cb7b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb7b3: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005cb7b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cb7bbu); call_ind(t); }
    /* 005cb7bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb7bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb7be: ret 8 */ FN_RET(0x005cb780); r_esp += 12; return;
}

