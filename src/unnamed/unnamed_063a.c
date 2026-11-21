#include "protos.h"

void f_0063a040(void) /* sub_63A040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a040);
    /* 0063a040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a041: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a046: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063a049: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a04c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a051u); f_0063aac0();
    /* 0063a051: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063a053: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063a056: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a058: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a05c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063a05f: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0063a062: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a064: je 0x63a07d */ if (fZ) goto L_0063a07d;
L_0063a066:; BB(0x0063a066);
    /* 0063a066: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0063a06b: push 0x6bceec */ { u32 v = 0x6bceecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a070: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a075: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63a07au); f_005e9f20();
    /* 0063a07a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a07d:; BB(0x0063a07d);
    /* 0063a07d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a080: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a085u); f_0063aac0();
    /* 0063a085: mov eax, dword ptr [eax + 0x374] */ r_eax = R32((u32)(r_eax+0x374u));
    /* 0063a08b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a08d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a08e: ret  */ FN_RET(0x0063a040); r_esp += 4; return;
}

void f_0063a1c0(void) /* sub_63A1C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a1c0);
    /* 0063a1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a1c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a1c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1c8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063a1cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a1ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a1d1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0063a1d4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0063a1d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a1da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a1dd: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0063a1e0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0063a1e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063a1e6: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a1e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a1ed: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a1f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a1f1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63a1f6u); f_00686d8e();
    /* 0063a1f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a1f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a1fc: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a200: je 0x63a23b */ if (fZ) goto L_0063a23b;
L_0063a202:; BB(0x0063a202);
    /* 0063a202: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a205: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063a208: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063a20b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a20e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0063a211: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a215: je 0x63a22a */ if (fZ) goto L_0063a22a;
L_0063a217:; BB(0x0063a217);
    /* 0063a217: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a219: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a21c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a21e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a221: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a223: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a225u); call_ind(t); }
    /* 0063a225: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063a228: jmp 0x63a231 */ goto L_0063a231;
L_0063a22a:; BB(0x0063a22a);
    /* 0063a22a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0063a231:; BB(0x0063a231);
    /* 0063a231: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a234: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_0063a23b:; BB(0x0063a23b);
    /* 0063a23b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a23e: movsx eax, byte ptr [edx + 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x10u));
    /* 0063a242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a244: je 0x63a257 */ if (fZ) goto L_0063a257;
L_0063a246:; BB(0x0063a246);
    /* 0063a246: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a249: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a24c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a24d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a250: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x63a255u); f_0063ab10();
    /* 0063a255: jmp 0x63a28c */ goto L_0063a28c;
L_0063a257:; BB(0x0063a257);
    /* 0063a257: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a25a: call 0x63a2a0 */ r_esp -= 4; W32(r_esp, 0x63a25fu); f_0063a2a0();
    /* 0063a25f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0063a262: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0063a265: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a268: add edi, 0x28 */ {  u32 a = r_edi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0063a26b: mov ecx, 0xe1 */ r_ecx = 0xe1u;
    /* 0063a270: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0063a272: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a275: mov dword ptr [edx + 0x3a4], 0 */ W32((u32)(r_edx+0x3a4u), 0x0u);
    /* 0063a27f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a282: mov dword ptr [eax + 0x3a8], 0 */ W32((u32)(r_eax+0x3a8u), 0x0u);
L_0063a28c:; BB(0x0063a28c);
    /* 0063a28c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a28f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063a290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063a291: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a293: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a294: ret 4 */ FN_RET(0x0063a1c0); r_esp += 8; return;
}

void f_0063a2a0(void) /* sub_63A2A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a2a0);
    /* 0063a2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a2a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a2a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0063a2a9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a2ac: cmp dword ptr [eax + 0x3a4], 0 */ {  u32 a = R32((u32)(r_eax+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a2b3: je 0x63a2da */ if (fZ) goto L_0063a2da;
L_0063a2b5:; BB(0x0063a2b5);
    /* 0063a2b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a2b8: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 0063a2be: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063a2c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a2c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a2c5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63a2cau); f_00686cae();
    /* 0063a2ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a2cd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a2d0: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
L_0063a2da:; BB(0x0063a2da);
    /* 0063a2da: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a2dd: cmp dword ptr [edx + 0x3a8], 0 */ {  u32 a = R32((u32)(r_edx+0x3a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a2e4: je 0x63a381 */ if (fZ) goto L_0063a381;
L_0063a2ea:; BB(0x0063a2ea);
    /* 0063a2ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a2f1: jmp 0x63a2fc */ goto L_0063a2fc;
L_0063a2f3:; BB(0x0063a2f3);
    /* 0063a2f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a2f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a2f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063a2fc:; BB(0x0063a2fc);
    /* 0063a2fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a302: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a304: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a30a: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063a310: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a312u); call_ind(t); }
    /* 0063a312: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063a315: jge 0x63a35c */ if ((fS==fO)) goto L_0063a35c;
L_0063a317:; BB(0x0063a317);
    /* 0063a317: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a31a: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0063a320: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a323: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a327: je 0x63a347 */ if (fZ) goto L_0063a347;
L_0063a329:; BB(0x0063a329);
    /* 0063a329: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a32c: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0063a332: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a335: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063a338: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063a33b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a33e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a33f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63a344u); f_00686cae();
    /* 0063a344: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a347:; BB(0x0063a347);
    /* 0063a347: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a34a: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063a350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a353: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 0063a35a: jmp 0x63a2f3 */ goto L_0063a2f3;
L_0063a35c:; BB(0x0063a35c);
    /* 0063a35c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a35f: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063a365: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063a368: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a36b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a36c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63a371u); f_00686cae();
    /* 0063a371: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a374: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a377: mov dword ptr [eax + 0x3a8], 0 */ W32((u32)(r_eax+0x3a8u), 0x0u);
L_0063a381:; BB(0x0063a381);
    /* 0063a381: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a386: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a388: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a38b: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a38e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a38f: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63a394u); f_00686fa2();
    /* 0063a394: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a397: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a39a: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a39e: je 0x63a3d9 */ if (fZ) goto L_0063a3d9;
L_0063a3a0:; BB(0x0063a3a0);
    /* 0063a3a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a3a3: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0063a3a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0063a3a9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a3ac: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063a3af: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a3b3: je 0x63a3c8 */ if (fZ) goto L_0063a3c8;
L_0063a3b5:; BB(0x0063a3b5);
    /* 0063a3b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a3ba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a3bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a3bf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a3c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a3c3u); call_ind(t); }
    /* 0063a3c3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063a3c6: jmp 0x63a3cf */ goto L_0063a3cf;
L_0063a3c8:; BB(0x0063a3c8);
    /* 0063a3c8: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0063a3cf:; BB(0x0063a3cf);
    /* 0063a3cf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a3d2: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_0063a3d9:; BB(0x0063a3d9);
    /* 0063a3d9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063a3db: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a3dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a3de: ret  */ FN_RET(0x0063a2a0); r_esp += 4; return;
}

void f_0063a3e0(void) /* sub_63A3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a3e0);
    /* 0063a3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a3e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a3e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063a3e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a3ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a3ef: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0063a3f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a3f5: mov dword ptr [edx + 8], 0xffffffff */ W32((u32)(r_edx+0x8u), 0xffffffffu);
    /* 0063a3fc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a3ff: mov dword ptr [eax + 0xc], 0xffffffff */ W32((u32)(r_eax+0xcu), 0xffffffffu);
    /* 0063a406: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a409: mov byte ptr [ecx + 0x10], 0 */ W8((u32)(r_ecx+0x10u), 0x0u);
    /* 0063a40d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a410: call 0x63a4d0 */ r_esp -= 4; W32(r_esp, 0x63a415u); f_0063a4d0();
    /* 0063a415: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a418: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a41du); f_0063aac0();
    /* 0063a41d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0063a420: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0063a422: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a429: jmp 0x63a434 */ goto L_0063a434;
L_0063a42b:; BB(0x0063a42b);
    /* 0063a42b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a42e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a431: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063a434:; BB(0x0063a434);
    /* 0063a434: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a43a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a43c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a442: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063a448: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a44au); call_ind(t); }
    /* 0063a44a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063a44d: jge 0x63a45d */ if ((fS==fO)) goto L_0063a45d;
L_0063a44f:; BB(0x0063a44f);
    /* 0063a44f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a452: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a453: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a456: call 0x63a720 */ r_esp -= 4; W32(r_esp, 0x63a45bu); f_0063a720();
    /* 0063a45b: jmp 0x63a42b */ goto L_0063a42b;
L_0063a45d:; BB(0x0063a45d);
    /* 0063a45d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a460: cmp dword ptr [edx + 0x3a4], 0 */ {  u32 a = R32((u32)(r_edx+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a467: je 0x63a481 */ if (fZ) goto L_0063a481;
L_0063a469:; BB(0x0063a469);
    /* 0063a469: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a46c: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 0063a472: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063a475: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a479: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63a47eu); f_00686cae();
    /* 0063a47e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a481:; BB(0x0063a481);
    /* 0063a481: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063a486: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a488: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a48e: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063a494: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a496u); call_ind(t); }
    /* 0063a496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a497: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63a49cu); f_00686d82();
    /* 0063a49c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a49f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063a4a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a4a5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a4a8: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
    /* 0063a4ae: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a4b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a4b3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a4b6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0063a4b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a4bbu); call_ind(t); }
    /* 0063a4bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a4bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a4be: ret 8 */ FN_RET(0x0063a3e0); r_esp += 12; return;
}

void f_0063a4d0(void) /* sub_63A4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a4d0);
    /* 0063a4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a4d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4d5: push 0x6abb0e */ { u32 v = 0x6abb0eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a4e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4e1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a4e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063a4e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063a4eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a4ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063a4ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063a4f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063a4f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a4fb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a500u); f_0063aac0();
    /* 0063a500: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063a503: push 0x37c */ { u32 v = 0x37cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a508: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a50a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a50d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a50e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63a513u); f_00686fa2();
    /* 0063a513: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a516: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a519: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0063a51f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a522: mov byte ptr [edx + 4], 0 */ W8((u32)(r_edx+0x4u), 0x0u);
    /* 0063a526: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a529: mov byte ptr [eax + 0x38], 0 */ W8((u32)(r_eax+0x38u), 0x0u);
    /* 0063a52d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a530: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0063a537: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a53a: mov byte ptr [edx + 0x58], 1 */ W8((u32)(r_edx+0x58u), 0x1u);
    /* 0063a53e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a541: mov byte ptr [eax + 0x59], 1 */ W8((u32)(r_eax+0x59u), 0x1u);
    /* 0063a545: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a548: mov byte ptr [ecx + 0x5a], 1 */ W8((u32)(r_ecx+0x5au), 0x1u);
    /* 0063a54c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a54f: mov byte ptr [edx + 0x5b], 3 */ W8((u32)(r_edx+0x5bu), 0x3u);
    /* 0063a553: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a556: mov byte ptr [eax + 0x5c], 5 */ W8((u32)(r_eax+0x5cu), 0x5u);
    /* 0063a55a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a560: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a562: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a568: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0063a56e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a570u); call_ind(t); }
    /* 0063a570: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a573: mov byte ptr [ecx + 0x378], al */ W8((u32)(r_ecx+0x378u), (u8)r_eax);
    /* 0063a579: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a57c: mov byte ptr [edx + 0x25d], 1 */ W8((u32)(r_edx+0x25du), 0x1u);
    /* 0063a583: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a586: mov dword ptr [eax + 0x260], 5 */ W32((u32)(r_eax+0x260u), 0x5u);
    /* 0063a590: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a592: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a598: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a59a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a5a0: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0063a5a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a5a8u); call_ind(t); }
    /* 0063a5a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a5ab: mov dword ptr [ecx + 0x264], eax */ W32((u32)(r_ecx+0x264u), r_eax);
    /* 0063a5b1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a5b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a5b9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a5bf: mov edx, dword ptr [eax + 0x1a0] */ r_edx = R32((u32)(r_eax+0x1a0u));
    /* 0063a5c5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a5c7u); call_ind(t); }
    /* 0063a5c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a5ca: mov dword ptr [ecx + 0x36c], eax */ W32((u32)(r_ecx+0x36cu), r_eax);
    /* 0063a5d0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a5d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a5d8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a5de: mov edx, dword ptr [eax + 0x1b8] */ r_edx = R32((u32)(r_eax+0x1b8u));
    /* 0063a5e4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a5e6u); call_ind(t); }
    /* 0063a5e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a5e9: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
    /* 0063a5ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a5f2: mov dword ptr [edx + 0x374], 0xffffffff */ W32((u32)(r_edx+0x374u), 0xffffffffu);
    /* 0063a5fc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063a603: jmp 0x63a60e */ goto L_0063a60e;
L_0063a605:; BB(0x0063a605);
    /* 0063a605: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a608: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a60b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0063a60e:; BB(0x0063a60e);
    /* 0063a60e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a614: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a616: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a61c: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063a622: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a624u); call_ind(t); }
    /* 0063a624: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063a627: jge 0x63a65a */ if ((fS==fO)) goto L_0063a65a;
L_0063a629:; BB(0x0063a629);
    /* 0063a629: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a62c: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a62f: mov byte ptr [ecx + 0x268], 1 */ W8((u32)(r_ecx+0x268u), 0x1u);
    /* 0063a636: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a639: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a63a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063a63f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a641: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a647: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0063a64d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a64fu); call_ind(t); }
    /* 0063a64f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a652: add ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a655: mov byte ptr [ecx + 0x5d], al */ W8((u32)(r_ecx+0x5du), (u8)r_eax);
    /* 0063a658: jmp 0x63a605 */ goto L_0063a605;
L_0063a65a:; BB(0x0063a65a);
    /* 0063a65a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a65d: mov byte ptr [edx + 0x368], 0 */ W8((u32)(r_edx+0x368u), 0x0u);
    /* 0063a664: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063a669: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a66b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a671: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0063a677: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a679u); call_ind(t); }
    /* 0063a679: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063a67c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a67e: je 0x63a6d4 */ if (fZ) goto L_0063a6d4;
L_0063a680:; BB(0x0063a680);
    /* 0063a680: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a683: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a687: jne 0x63a6d4 */ if (!fZ) goto L_0063a6d4;
L_0063a689:; BB(0x0063a689);
    /* 0063a689: push 0xb04 */ { u32 v = 0xb04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a68e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63a693u); f_00686d82();
    /* 0063a693: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a696: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0063a699: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a6a0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a6a4: je 0x63a6b7 */ if (fZ) goto L_0063a6b7;
L_0063a6a6:; BB(0x0063a6a6);
    /* 0063a6a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a6a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a6aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063a6ad: call 0x66f8b0 */ r_esp -= 4; W32(r_esp, 0x63a6b2u); f_0066f8b0();
    /* 0063a6b2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063a6b5: jmp 0x63a6be */ goto L_0063a6be;
L_0063a6b7:; BB(0x0063a6b7);
    /* 0063a6b7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063a6be:; BB(0x0063a6be);
    /* 0063a6be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063a6c1: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0063a6c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063a6cb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063a6ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a6d1: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_0063a6d4:; BB(0x0063a6d4);
    /* 0063a6d4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063a6db: jmp 0x63a6e6 */ goto L_0063a6e6;
L_0063a6dd:; BB(0x0063a6dd);
    /* 0063a6dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a6e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a6e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063a6e6:; BB(0x0063a6e6);
    /* 0063a6e6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a6ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a6ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a6f4: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0063a6fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a6fcu); call_ind(t); }
    /* 0063a6fc: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063a6ff: jge 0x63a710 */ if ((fS==fO)) goto L_0063a710;
L_0063a701:; BB(0x0063a701);
    /* 0063a701: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a704: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063a707: mov byte ptr [eax + 0x15d], 0 */ W8((u32)(r_eax+0x15du), 0x0u);
    /* 0063a70e: jmp 0x63a6dd */ goto L_0063a6dd;
L_0063a710:; BB(0x0063a710);
    /* 0063a710: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a713: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063a71a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a71b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a71d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a71e: ret  */ FN_RET(0x0063a4d0); r_esp += 4; return;
}

void f_0063a720(void) /* sub_63A720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a720);
    /* 0063a720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a721: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a723: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a726: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063a729: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a72c: cmp dword ptr [eax + 0x3a8], 0 */ {  u32 a = R32((u32)(r_eax+0x3a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a733: jne 0x63a7a1 */ if (!fZ) goto L_0063a7a1;
L_0063a735:; BB(0x0063a735);
    /* 0063a735: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a73b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a73d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a743: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063a749: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a74bu); call_ind(t); }
    /* 0063a74b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a74d: mov edx, 4 */ r_edx = 0x4u;
    /* 0063a752: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0063a754: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0063a757: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a759: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063a75b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a75c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63a761u); f_00686d82();
    /* 0063a761: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a764: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063a767: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a76d: mov dword ptr [eax + 0x3a8], ecx */ W32((u32)(r_eax+0x3a8u), r_ecx);
    /* 0063a773: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a779: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a77b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a781: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 0063a787: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a789u); call_ind(t); }
    /* 0063a789: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0063a78c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a78f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a792: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063a798: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a799: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63a79eu); f_00686fa2();
    /* 0063a79e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063a7a1:; BB(0x0063a7a1);
    /* 0063a7a1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a7a4: mov eax, dword ptr [edx + 0x3a8] */ r_eax = R32((u32)(r_edx+0x3a8u));
    /* 0063a7aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a7ad: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a7b1: je 0x63a7e4 */ if (fZ) goto L_0063a7e4;
L_0063a7b3:; BB(0x0063a7b3);
    /* 0063a7b3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a7b6: mov eax, dword ptr [edx + 0x3a8] */ r_eax = R32((u32)(r_edx+0x3a8u));
    /* 0063a7bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a7bf: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063a7c2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063a7c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063a7c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a7c9: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63a7ceu); f_00686cae();
    /* 0063a7ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a7d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a7d4: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0063a7da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063a7dd: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
L_0063a7e4:; BB(0x0063a7e4);
    /* 0063a7e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a7e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a7e8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a7ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a7f0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a7f6: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 0063a7fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a7feu); call_ind(t); }
    /* 0063a7fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a7ff: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63a804u); f_00686d82();
    /* 0063a804: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a807: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063a80a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a80d: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063a813: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063a816: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a819: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0063a81c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a81f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a820: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a826: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a828: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a82e: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 0063a834: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a836u); call_ind(t); }
    /* 0063a836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a837: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a839: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a83c: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063a842: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063a845: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063a848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a849: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63a84eu); f_00686fa2();
    /* 0063a84e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a851: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a854: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0063a85a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063a85d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063a860: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a861: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063a864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a865: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a86b: call 0x635a40 */ r_esp -= 4; W32(r_esp, 0x63a870u); f_00635a40();
    /* 0063a870: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a872: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a873: ret 4 */ FN_RET(0x0063a720); r_esp += 8; return;
}

void f_0063a8d0(void) /* sub_63A8D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a8d0);
    /* 0063a8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a8d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8d5: push 0x6abb34 */ { u32 v = 0x6abb34u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8e1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a8e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063a8e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063a8eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063a8ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063a8f5: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0063a8f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063a8ff: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0063a906: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a90a: jne 0x63a917 */ if (!fZ) goto L_0063a917;
L_0063a90c:; BB(0x0063a90c);
    /* 0063a90c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063a911: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0063a914: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_0063a917:; BB(0x0063a917);
    /* 0063a917: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a91b: je 0x63a92b */ if (fZ) goto L_0063a92b;
L_0063a91d:; BB(0x0063a91d);
    /* 0063a91d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a920: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63a925u); f_0063aac0();
    /* 0063a925: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
L_0063a92b:; BB(0x0063a92b);
    /* 0063a92b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063a92e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a92f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a932: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x63a937u); f_0063b490();
    /* 0063a937: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a93a: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a93e: je 0x63a96f */ if (fZ) goto L_0063a96f;
L_0063a940:; BB(0x0063a940);
    /* 0063a940: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a943: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0063a946: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0063a949: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0063a94c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063a94f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a953: je 0x63a968 */ if (fZ) goto L_0063a968;
L_0063a955:; BB(0x0063a955);
    /* 0063a955: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a957: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063a95a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a95c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0063a95f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a961: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a963u); call_ind(t); }
    /* 0063a963: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0063a966: jmp 0x63a96f */ goto L_0063a96f;
L_0063a968:; BB(0x0063a968);
    /* 0063a968: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0063a96f:; BB(0x0063a96f);
    /* 0063a96f: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a971: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63a976u); f_00686d82();
    /* 0063a976: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a979: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0063a97c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a983: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a987: je 0x63a996 */ if (fZ) goto L_0063a996;
L_0063a989:; BB(0x0063a989);
    /* 0063a989: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0063a98c: call 0x6454f0 */ r_esp -= 4; W32(r_esp, 0x63a991u); f_006454f0();
    /* 0063a991: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0063a994: jmp 0x63a99d */ goto L_0063a99d;
L_0063a996:; BB(0x0063a996);
    /* 0063a996: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0063a99d:; BB(0x0063a99d);
    /* 0063a99d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0063a9a0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0063a9a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063a9aa: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a9ad: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063a9b0: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0063a9b3: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0063a9b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9b7: mov dl, byte ptr [ebp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0063a9ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9bb: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0063a9be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9bf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063a9c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9c3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a9c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9c7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063a9ca: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063a9cd: call 0x645820 */ r_esp -= 4; W32(r_esp, 0x63a9d2u); f_00645820();
    /* 0063a9d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9d4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a9da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063a9dc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a9e2: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0063a9e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63a9eau); call_ind(t); }
    /* 0063a9ea: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063a9ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a9ef: je 0x63aa6a */ if (fZ) goto L_0063aa6a;
L_0063a9f1:; BB(0x0063a9f1);
    /* 0063a9f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9f3: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0063a9f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a9f7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a9fd: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63aa02u); f_005f3bf0();
    /* 0063aa02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063aa03: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063aa08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063aa0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063aa10: mov eax, dword ptr [edx + 0x364] */ r_eax = R32((u32)(r_edx+0x364u));
    /* 0063aa16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63aa18u); call_ind(t); }
    /* 0063aa18: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063aa1b: cmp dword ptr [ecx + 4], -1 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063aa1f: jle 0x63aa6a */ if ((fZ||fS!=fO)) goto L_0063aa6a;
L_0063aa21:; BB(0x0063aa21);
    /* 0063aa21: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063aa24: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0063aa27: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063aa2a: jge 0x63aa6a */ if ((fS==fO)) goto L_0063aa6a;
L_0063aa2c:; BB(0x0063aa2c);
    /* 0063aa2c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063aa2f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0063aa32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aa33: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063aa38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063aa3a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063aa40: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0063aa46: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63aa48u); call_ind(t); }
    /* 0063aa48: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063aa4b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063aa4e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0063aa51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aa52: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0063aa57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063aa59: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063aa5f: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0063aa65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63aa67u); call_ind(t); }
    /* 0063aa67: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0063aa6a:; BB(0x0063aa6a);
    /* 0063aa6a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0063aa6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aa6e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063aa71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aa72: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063aa75: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063aa78: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x63aa7du); f_00646150();
    /* 0063aa7d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063aa83: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063aa85: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063aa8b: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0063aa91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63aa93u); call_ind(t); }
    /* 0063aa93: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063aa96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aa98: je 0x63aaaf */ if (fZ) goto L_0063aaaf;
L_0063aa9a:; BB(0x0063aa9a);
    /* 0063aa9a: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aa9e: je 0x63aaaf */ if (fZ) goto L_0063aaaf;
L_0063aaa0:; BB(0x0063aaa0);
    /* 0063aaa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aaa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aaa4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0063aaa7: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0063aaaa: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x63aaafu); f_006464d0();
L_0063aaaf:; BB(0x0063aaaf);
    /* 0063aaaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063aab2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063aab9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063aaba: mov esp, ebp */ r_esp = r_ebp;
    /* 0063aabc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063aabd: ret 0x14 */ FN_RET(0x0063a8d0); r_esp += 24; return;
}

void f_0063aae0(void) /* sub_63AAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063aae0);
    /* 0063aae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063aae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063aae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063aae7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aaeb: jne 0x63aafb */ if (!fZ) goto L_0063aafb;
L_0063aaed:; BB(0x0063aaed);
    /* 0063aaed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063aaf3: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63aaf8u); f_005f3bf0();
    /* 0063aaf8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0063aafb:; BB(0x0063aafb);
    /* 0063aafb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063aafe: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063ab04: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063ab07: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063ab0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ab0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ab0d: ret 4 */ FN_RET(0x0063aae0); r_esp += 8; return;
}

