#include "protos.h"

void f_006817a0(void) /* sub_6817A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006817a0);
    /* 006817a0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006817a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006817a6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006817a8: je 0x6817f7 */ if (fZ) goto L_006817f7;
L_006817aa:; BB(0x006817aa);
    /* 006817aa: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006817ad: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006817af: je 0x6817f7 */ if (fZ) goto L_006817f7;
L_006817b1:; BB(0x006817b1);
    /* 006817b1: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 006817b4: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006817b7: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006817ba: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006817bd: mov dword ptr [edx + 0x30], 1 */ W32((u32)(r_edx+0x30u), 0x1u);
    /* 006817c4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006817c6: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006817c9: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006817cc: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006817cf: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006817d2: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 006817d5: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 006817d8: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 006817db: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 006817de: lea ecx, [eax + 0x530] */ r_ecx = (u32)(r_eax+0x530u);
    /* 006817e4: mov dword ptr [eax + 0x14], 0x8000 */ W32((u32)(r_eax+0x14u), 0x8000u);
    /* 006817eb: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 006817ee: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 006817f1: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 006817f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006817f6: ret  */ FN_RET(0x006817a0); r_esp += 4; return;
L_006817f7:; BB(0x006817f7);
    /* 006817f7: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 006817fc: ret  */ FN_RET(0x006817a0); r_esp += 4; return;
}

void f_00681800(void) /* sub_681800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00681800);
    /* 00681800: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00681804: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00681805: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00681807: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681809: je 0x6818c4 */ if (fZ) goto L_006818c4;
L_0068180f:; BB(0x0068180f);
    /* 0068180f: cmp byte ptr [eax], 0x31 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00681812: jne 0x6818c4 */ if (!fZ) goto L_006818c4;
L_00681818:; BB(0x00681818);
    /* 00681818: cmp dword ptr [esp + 0x14], 0x38 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068181d: jne 0x6818c4 */ if (!fZ) goto L_006818c4;
L_00681823:; BB(0x00681823);
    /* 00681823: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00681824: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00681828: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068182a: je 0x6818bc */ if (fZ) goto L_006818bc;
L_00681830:; BB(0x00681830);
    /* 00681830: cmp dword ptr [esi + 0x20], edi */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681833: mov dword ptr [esi + 0x18], edi */ W32((u32)(r_esi+0x18u), r_edi);
    /* 00681836: jne 0x681842 */ if (!fZ) goto L_00681842;
L_00681838:; BB(0x00681838);
    /* 00681838: mov dword ptr [esi + 0x20], 0x683040 */ W32((u32)(r_esi+0x20u), 0x683040u);
    /* 0068183f: mov dword ptr [esi + 0x28], edi */ W32((u32)(r_esi+0x28u), r_edi);
L_00681842:; BB(0x00681842);
    /* 00681842: cmp dword ptr [esi + 0x24], edi */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681845: jne 0x68184e */ if (!fZ) goto L_0068184e;
L_00681847:; BB(0x00681847);
    /* 00681847: mov dword ptr [esi + 0x24], 0x683060 */ W32((u32)(r_esi+0x24u), 0x683060u);
L_0068184e:; BB(0x0068184e);
    /* 0068184e: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00681851: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00681854: push 0x2530 */ { u32 v = 0x2530u; r_esp -= 4; W32(r_esp, v); }
    /* 00681859: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068185b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068185c: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x68185eu); call_ind(t); }
    /* 0068185e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681861: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681863: jne 0x68186d */ if (!fZ) goto L_0068186d;
L_00681865:; BB(0x00681865);
    /* 00681865: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00681866: mov eax, 0xfffffffc */ r_eax = 0xfffffffcu;
    /* 0068186b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068186c: ret  */ FN_RET(0x00681800); r_esp += 4; return;
L_0068186d:; BB(0x0068186d);
    /* 0068186d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00681871: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00681873: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00681876: jge 0x68187f */ if ((fS==fO)) goto L_0068187f;
L_00681878:; BB(0x00681878);
    /* 00681878: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 0068187b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068187d: jmp 0x681892 */ goto L_00681892;
L_0068187f:; BB(0x0068187f);
    /* 0068187f: mov edx, ecx */ r_edx = r_ecx;
    /* 00681881: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00681884: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681887: cmp ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068188a: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0068188d: jge 0x681892 */ if ((fS==fO)) goto L_00681892;
L_0068188f:; BB(0x0068188f);
    /* 0068188f: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
L_00681892:; BB(0x00681892);
    /* 00681892: lea edx, [ecx - 8] */ r_edx = (u32)(r_ecx+0xfffffff8u);
    /* 00681895: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00681898: ja 0x6818ac */ if ((!fC&&!fZ)) goto L_006818ac;
L_0068189a:; BB(0x0068189a);
    /* 0068189a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068189b: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0068189e: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
    /* 006818a1: call 0x6817a0 */ r_esp -= 4; W32(r_esp, 0x6818a6u); f_006817a0();
    /* 006818a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006818a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006818aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006818ab: ret  */ FN_RET(0x00681800); r_esp += 4; return;
L_006818ac:; BB(0x006818ac);
    /* 006818ac: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006818af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006818b0: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006818b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006818b4: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x6818b6u); call_ind(t); }
    /* 006818b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006818b9: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
L_006818bc:; BB(0x006818bc);
    /* 006818bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006818bd: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 006818c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006818c3: ret  */ FN_RET(0x00681800); r_esp += 4; return;
L_006818c4:; BB(0x006818c4);
    /* 006818c4: mov eax, 0xfffffffa */ r_eax = 0xfffffffau;
    /* 006818c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006818ca: ret  */ FN_RET(0x00681800); r_esp += 4; return;
}

void f_006818d0(void) /* sub_6818D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006818d0);
    /* 006818d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006818d4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006818d8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006818dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006818dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006818de: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 006818e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006818e1: call 0x681800 */ r_esp -= 4; W32(r_esp, 0x6818e6u); f_00681800();
    /* 006818e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006818e9: ret  */ FN_RET(0x006818d0); r_esp += 4; return;
}

void f_006818f0(void) /* sub_6818F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006818f0);
    /* 006818f0: mov dword ptr [eax + 0x4c], 0x6e2350 */ W32((u32)(r_eax+0x4cu), 0x6e2350u);
    /* 006818f7: mov dword ptr [eax + 0x54], 9 */ W32((u32)(r_eax+0x54u), 0x9u);
    /* 006818fe: mov dword ptr [eax + 0x50], 0x6e2b50 */ W32((u32)(r_eax+0x50u), 0x6e2b50u);
    /* 00681905: mov dword ptr [eax + 0x58], 5 */ W32((u32)(r_eax+0x58u), 0x5u);
    /* 0068190c: ret  */ FN_RET(0x006818f0); r_esp += 4; return;
}

void f_00681910(void) /* sub_681910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00681910);
    /* 00681910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681911: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00681912: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00681915: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00681917: cmp dword ptr [esi + 0x34], ebp */ {  u32 a = R32((u32)(r_esi+0x34u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068191a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068191b: mov edi, eax */ r_edi = r_eax;
    /* 0068191d: jne 0x681948 */ if (!fZ) goto L_00681948;
L_0068191f:; BB(0x0068191f);
    /* 0068191f: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00681922: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00681925: mov eax, 1 */ r_eax = 0x1u;
    /* 0068192a: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068192c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0068192f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00681931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681933: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x681935u); call_ind(t); }
    /* 00681935: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681938: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068193a: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0068193d: jne 0x681948 */ if (!fZ) goto L_00681948;
L_0068193f:; BB(0x0068193f);
    /* 0068193f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00681940: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00681941: mov eax, 1 */ r_eax = 0x1u;
    /* 00681946: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681947: ret  */ FN_RET(0x00681910); r_esp += 4; return;
L_00681948:; BB(0x00681948);
    /* 00681948: cmp dword ptr [esi + 0x28], ebp */ {  u32 a = R32((u32)(r_esi+0x28u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068194b: jne 0x681960 */ if (!fZ) goto L_00681960;
L_0068194d:; BB(0x0068194d);
    /* 0068194d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00681950: mov eax, 1 */ r_eax = 0x1u;
    /* 00681955: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681957: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 0068195a: mov dword ptr [esi + 0x2c], ebp */ W32((u32)(r_esi+0x2cu), r_ebp);
    /* 0068195d: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
L_00681960:; BB(0x00681960);
    /* 00681960: sub edi, dword ptr [ebx + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00681963: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00681966: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681968: jb 0x68198c */ if (fC) goto L_0068198c;
L_0068196a:; BB(0x0068196a);
    /* 0068196a: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0068196d: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00681970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681971: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00681973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681974: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681975: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x68197au); f_00686fde();
    /* 0068197a: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0068197d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681980: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00681981: mov dword ptr [esi + 0x30], ebp */ W32((u32)(r_esi+0x30u), r_ebp);
    /* 00681984: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00681987: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00681988: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068198a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068198b: ret  */ FN_RET(0x00681910); r_esp += 4; return;
L_0068198c:; BB(0x0068198c);
    /* 0068198c: sub eax, dword ptr [esi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068198f: mov ebp, eax */ r_ebp = r_eax;
    /* 00681991: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00681993: jbe 0x681997 */ if ((fC||fZ)) goto L_00681997;
L_00681995:; BB(0x00681995);
    /* 00681995: mov ebp, edi */ r_ebp = r_edi;
L_00681997:; BB(0x00681997);
    /* 00681997: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0068199a: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0068199d: add edx, dword ptr [esi + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006819a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006819a1: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006819a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006819a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006819a5: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x6819aau); f_00686fde();
    /* 006819aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006819ad: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006819af: je 0x6819d3 */ if (fZ) goto L_006819d3;
L_006819b1:; BB(0x006819b1);
    /* 006819b1: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 006819b4: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006819b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006819b8: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006819ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006819bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006819bc: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x6819c1u); f_00686fde();
    /* 006819c1: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 006819c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006819c7: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 006819ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006819cb: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 006819ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006819cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006819d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006819d2: ret  */ FN_RET(0x00681910); r_esp += 4; return;
L_006819d3:; BB(0x006819d3);
    /* 006819d3: add dword ptr [esi + 0x30], ebp */ { u32 ad = (u32)(r_esi+0x30u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006819d6: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006819d9: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006819dc: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006819de: jne 0x6819e7 */ if (!fZ) goto L_006819e7;
L_006819e0:; BB(0x006819e0);
    /* 006819e0: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
L_006819e7:; BB(0x006819e7);
    /* 006819e7: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006819ea: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006819ec: jae 0x6819f3 */ if (!fC) goto L_006819f3;
L_006819ee:; BB(0x006819ee);
    /* 006819ee: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006819f0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
L_006819f3:; BB(0x006819f3);
    /* 006819f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006819f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006819f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006819f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006819f8: ret  */ FN_RET(0x00681910); r_esp += 4; return;
}

void f_00681a00(void) /* sub_681A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00681a00);
    /* 00681a00: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00681a04: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00681a07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00681a0a: je 0x682f5c */ if (fZ) goto L_00682f5c;
L_00681a10:; BB(0x00681a10);
    /* 00681a10: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00681a13: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a15: je 0x682f5c */ if (fZ) goto L_00682f5c;
L_00681a1b:; BB(0x00681a1b);
    /* 00681a1b: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a1f: je 0x682f5c */ if (fZ) goto L_00682f5c;
L_00681a25:; BB(0x00681a25);
    /* 00681a25: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a28: jne 0x681a34 */ if (!fZ) goto L_00681a34;
L_00681a2a:; BB(0x00681a2a);
    /* 00681a2a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a2e: jne 0x682f5c */ if (!fZ) goto L_00682f5c;
L_00681a34:; BB(0x00681a34);
    /* 00681a34: cmp dword ptr [edi], 0xb */ {  u32 a = R32((u32)(r_edi)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a37: jne 0x681a3f */ if (!fZ) goto L_00681a3f;
L_00681a39:; BB(0x00681a39);
    /* 00681a39: mov dword ptr [edi], 0xc */ W32((u32)(r_edi), 0xcu);
L_00681a3f:; BB(0x00681a3f);
    /* 00681a3f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00681a42: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00681a45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00681a46: mov ebx, dword ptr [edi + 0x38] */ r_ebx = R32((u32)(r_edi+0x38u));
    /* 00681a49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681a4a: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00681a4c: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00681a50: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00681a53: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00681a55: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00681a58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00681a59: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 00681a5c: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00681a60: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681a64: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681a68: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00681a6c: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00681a70: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00681a78: ja 0x682e09 */ if ((!fC&&!fZ)) goto L_00682e09;
L_00681a7e:; BB(0x00681a7e);
    /* 00681a7e: mov edi, edi */ r_edi = r_edi;
L_00681a80:; BB(0x00681a80);
    /* 00681a80: jmp dword ptr [eax*4 + 0x682f68] */ { u32 t = R32((u32)(r_eax*4+0x682f68u)); switch (t) { case 0x681a87u: goto L_00681a87; case 0x681bf5u: goto L_00681bf5; case 0x681ca3u: goto L_00681ca3; case 0x681d22u: goto L_00681d22; case 0x681da4u: goto L_00681da4; case 0x681e2fu: goto L_00681e2f; case 0x681eebu: goto L_00681eeb; case 0x681fa3u: goto L_00681fa3; case 0x68205au: goto L_0068205a; case 0x6820f4u: goto L_006820f4; case 0x68215cu: goto L_0068215c; case 0x682188u: goto L_00682188; case 0x682193u: goto L_00682193; case 0x68225eu: goto L_0068225e; case 0x6822cbu: goto L_006822cb; case 0x68232bu: goto L_0068232b; case 0x6823abu: goto L_006823ab; case 0x6824a2u: goto L_006824a2; case 0x6827b3u: goto L_006827b3; case 0x6829b7u: goto L_006829b7; case 0x682a02u: goto L_00682a02; case 0x682b79u: goto L_00682b79; case 0x682be8u: goto L_00682be8; case 0x682ca4u: goto L_00682ca4; case 0x682ccfu: goto L_00682ccf; case 0x682da2u: goto L_00682da2; case 0x682e4au: goto L_00682e4a; case 0x682e54u: goto L_00682e54; case 0x682ea4u: goto L_00682ea4; case 0x6821f8u: goto L_006821f8; case 0x68220du: goto L_0068220d; case 0x682229u: goto L_00682229; case 0x68223eu: goto L_0068223e; default: UNSUP(0x00681a80, "jump table entry is not a known target"); } }
L_00681a87:; BB(0x00681a87);
    /* 00681a87: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681a8b: jne 0x681a98 */ if (!fZ) goto L_00681a98;
L_00681a8d:; BB(0x00681a8d);
    /* 00681a8d: mov dword ptr [edi], 0xc */ W32((u32)(r_edi), 0xcu);
    /* 00681a93: jmp 0x682dfe */ goto L_00682dfe;
L_00681a98:; BB(0x00681a98);
    /* 00681a98: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681a9b: jae 0x681ac8 */ if (!fC) goto L_00681ac8;
L_00681a9d:; BB(0x00681a9d);
    /* 00681a9d: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_00681aa0:; BB(0x00681aa0);
    /* 00681aa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00681aa2: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681aa8:; BB(0x00681aa8);
    /* 00681aa8: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00681aac: mov ecx, esi */ r_ecx = r_esi;
    /* 00681aae: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681ab0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681ab3: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00681ab6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681ab9: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681abb: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681abe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681ac2: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681ac6: jb 0x681aa0 */ if (fC) goto L_00681aa0;
L_00681ac8:; BB(0x00681ac8);
    /* 00681ac8: test byte ptr [edi + 8], 2 */ {  u32 a = R8((u32)(r_edi+0x8u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00681acc: je 0x681b1b */ if (fZ) goto L_00681b1b;
L_00681ace:; BB(0x00681ace);
    /* 00681ace: cmp ebx, 0x8b1f */ {  u32 a = r_ebx; u32 b = 0x8b1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681ad4: jne 0x681b1b */ if (!fZ) goto L_00681b1b;
L_00681ad6:; BB(0x00681ad6);
    /* 00681ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681adc: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681ae1u); f_00683f40();
    /* 00681ae1: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00681ae4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681ae6: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00681aea: mov byte ptr [esp + 0x30], 0x1f */ W8((u32)(r_esp+0x30u), 0x1fu);
    /* 00681aef: mov byte ptr [esp + 0x31], 0x8b */ W8((u32)(r_esp+0x31u), 0x8bu);
    /* 00681af4: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00681af7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681af8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681af9: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681afeu); f_00683f40();
    /* 00681afe: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00681b02: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00681b04: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681b07: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00681b0a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681b0e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00681b10: mov dword ptr [edi], 1 */ W32((u32)(r_edi), 0x1u);
    /* 00681b16: jmp 0x682dfe */ goto L_00682dfe;
L_00681b1b:; BB(0x00681b1b);
    /* 00681b1b: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b20: mov dword ptr [edi + 0x10], 0 */ W32((u32)(r_edi+0x10u), 0x0u);
    /* 00681b27: je 0x681b30 */ if (fZ) goto L_00681b30;
L_00681b29:; BB(0x00681b29);
    /* 00681b29: mov dword ptr [eax + 0x30], 0xffffffff */ W32((u32)(r_eax+0x30u), 0xffffffffu);
L_00681b30:; BB(0x00681b30);
    /* 00681b30: test byte ptr [edi + 8], 1 */ {  u32 a = R8((u32)(r_edi+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00681b34: je 0x681be1 */ if (fZ) goto L_00681be1;
L_00681b3a:; BB(0x00681b3a);
    /* 00681b3a: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00681b3d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681b40: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00681b42: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00681b45: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681b47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00681b49: mov ecx, 0x1f */ r_ecx = 0x1fu;
    /* 00681b4e: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00681b4e, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00681b4e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00681b50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681b52: jne 0x681be1 */ if (!fZ) goto L_00681be1;
L_00681b58:; BB(0x00681b58);
    /* 00681b58: mov edx, ebx */ r_edx = r_ebx;
    /* 00681b5a: and dl, 0xf */ {  u32 a = (u8)r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00681b5d: cmp dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00681b60: je 0x681b76 */ if (fZ) goto L_00681b76;
L_00681b62:; BB(0x00681b62);
    /* 00681b62: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00681b66: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00681b6a: mov dword ptr [eax + 0x18], 0x6e2d9c */ W32((u32)(r_eax+0x18u), 0x6e2d9cu);
    /* 00681b71: jmp 0x682df8 */ goto L_00682df8;
L_00681b76:; BB(0x00681b76);
    /* 00681b76: shr ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00681b79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00681b7b: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00681b7e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00681b81: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00681b84: cmp ecx, dword ptr [edi + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00681b87: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681b8b: jbe 0x681ba1 */ if ((fC||fZ)) goto L_00681ba1;
L_00681b8d:; BB(0x00681b8d);
    /* 00681b8d: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00681b91: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00681b95: mov dword ptr [ecx + 0x18], 0x6e2d88 */ W32((u32)(r_ecx+0x18u), 0x6e2d88u);
    /* 00681b9c: jmp 0x682df8 */ goto L_00682df8;
L_00681ba1:; BB(0x00681ba1);
    /* 00681ba1: mov edx, 1 */ r_edx = 0x1u;
    /* 00681ba6: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00681ba8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681baa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681bac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00681bae: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00681bb1: call 0x683a20 */ r_esp -= 4; W32(r_esp, 0x681bb6u); f_00683a20();
    /* 00681bb6: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00681bba: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681bbe: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00681bc1: not ebx */ r_ebx = ~r_ebx;
    /* 00681bc3: and ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00681bc6: or ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00681bc9: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00681bcc: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00681bcf: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00681bd1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00681bd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681bd6: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681bda: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00681bdc: jmp 0x682dfe */ goto L_00682dfe;
L_00681be1:; BB(0x00681be1);
    /* 00681be1: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00681be5: mov dword ptr [edx + 0x18], 0x6e2d70 */ W32((u32)(r_edx+0x18u), 0x6e2d70u);
    /* 00681bec: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00681bf0: jmp 0x682df8 */ goto L_00682df8;
L_00681bf5:; BB(0x00681bf5);
    /* 00681bf5: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681bf8: jae 0x681c28 */ if (!fC) goto L_00681c28;
L_00681bfa:; BB(0x00681bfa);
    /* 00681bfa: lea ebx, [ebx] */ r_ebx = (u32)(r_ebx);
L_00681c00:; BB(0x00681c00);
    /* 00681c00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00681c02: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681c08:; BB(0x00681c08);
    /* 00681c08: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00681c0c: mov ecx, esi */ r_ecx = r_esi;
    /* 00681c0e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681c10: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681c13: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00681c16: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681c19: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681c1b: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681c1e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681c22: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681c26: jb 0x681c00 */ if (fC) goto L_00681c00;
L_00681c28:; BB(0x00681c28);
    /* 00681c28: cmp bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00681c2b: mov dword ptr [edi + 0x10], ebx */ W32((u32)(r_edi+0x10u), r_ebx);
    /* 00681c2e: je 0x681c40 */ if (fZ) goto L_00681c40;
L_00681c30:; BB(0x00681c30);
    /* 00681c30: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00681c34: mov dword ptr [ecx + 0x18], 0x6e2d9c */ W32((u32)(r_ecx+0x18u), 0x6e2d9cu);
    /* 00681c3b: jmp 0x682df8 */ goto L_00682df8;
L_00681c40:; BB(0x00681c40);
    /* 00681c40: test ebx, 0xe000 */ {  u32 a = r_ebx; u32 b = 0xe000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681c46: je 0x681c58 */ if (fZ) goto L_00681c58;
L_00681c48:; BB(0x00681c48);
    /* 00681c48: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00681c4c: mov dword ptr [eax + 0x18], 0x6e2d54 */ W32((u32)(r_eax+0x18u), 0x6e2d54u);
    /* 00681c53: jmp 0x682df8 */ goto L_00682df8;
L_00681c58:; BB(0x00681c58);
    /* 00681c58: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681c5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681c5d: je 0x681c69 */ if (fZ) goto L_00681c69;
L_00681c5f:; BB(0x00681c5f);
    /* 00681c5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00681c61: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00681c64: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00681c67: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00681c69:; BB(0x00681c69);
    /* 00681c69: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681c70: je 0x681c97 */ if (fZ) goto L_00681c97;
L_00681c72:; BB(0x00681c72);
    /* 00681c72: mov byte ptr [esp + 0x20], bl */ W8((u32)(r_esp+0x20u), (u8)r_ebx);
    /* 00681c76: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00681c79: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681c7b: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00681c7f: mov byte ptr [esp + 0x25], bl */ W8((u32)(r_esp+0x25u), (u8)r_ebx);
    /* 00681c83: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00681c86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681c88: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681c8du); f_00683f40();
    /* 00681c8d: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681c91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681c94: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00681c97:; BB(0x00681c97);
    /* 00681c97: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00681c99: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00681c9b: mov dword ptr [edi], 2 */ W32((u32)(r_edi), 0x2u);
    /* 00681ca1: jmp 0x681ca8 */ goto L_00681ca8;
L_00681ca3:; BB(0x00681ca3);
    /* 00681ca3: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681ca6: jae 0x681ccc */ if (!fC) goto L_00681ccc;
L_00681ca8:; BB(0x00681ca8);
    /* 00681ca8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00681caa: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681cb0:; BB(0x00681cb0);
    /* 00681cb0: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00681cb4: mov ecx, esi */ r_ecx = r_esi;
    /* 00681cb6: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681cb8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681cbb: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00681cbe: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681cc1: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681cc3: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681cc6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681cca: jb 0x681ca8 */ if (fC) goto L_00681ca8;
L_00681ccc:; BB(0x00681ccc);
    /* 00681ccc: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681ccf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681cd1: je 0x681cd6 */ if (fZ) goto L_00681cd6;
L_00681cd3:; BB(0x00681cd3);
    /* 00681cd3: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
L_00681cd6:; BB(0x00681cd6);
    /* 00681cd6: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681cdd: je 0x681d16 */ if (fZ) goto L_00681d16;
L_00681cdf:; BB(0x00681cdf);
    /* 00681cdf: mov byte ptr [esp + 0x20], bl */ W8((u32)(r_esp+0x20u), (u8)r_ebx);
    /* 00681ce3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00681ce5: mov edx, ebx */ r_edx = r_ebx;
    /* 00681ce7: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00681cea: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00681ced: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00681cf0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00681cf2: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00681cf6: mov byte ptr [esp + 0x25], cl */ W8((u32)(r_esp+0x25u), (u8)r_ecx);
    /* 00681cfa: mov byte ptr [esp + 0x26], dl */ W8((u32)(r_esp+0x26u), (u8)r_edx);
    /* 00681cfe: mov byte ptr [esp + 0x27], bl */ W8((u32)(r_esp+0x27u), (u8)r_ebx);
    /* 00681d02: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00681d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681d06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681d07: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681d0cu); f_00683f40();
    /* 00681d0c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681d10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681d13: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00681d16:; BB(0x00681d16);
    /* 00681d16: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00681d18: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00681d1a: mov dword ptr [edi], 3 */ W32((u32)(r_edi), 0x3u);
    /* 00681d20: jmp 0x681d27 */ goto L_00681d27;
L_00681d22:; BB(0x00681d22);
    /* 00681d22: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681d25: jae 0x681d4b */ if (!fC) goto L_00681d4b;
L_00681d27:; BB(0x00681d27);
    /* 00681d27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00681d29: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681d2f:; BB(0x00681d2f);
    /* 00681d2f: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00681d33: mov ecx, esi */ r_ecx = r_esi;
    /* 00681d35: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681d37: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681d3a: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00681d3d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681d40: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681d42: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681d45: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681d49: jb 0x681d27 */ if (fC) goto L_00681d27;
L_00681d4b:; BB(0x00681d4b);
    /* 00681d4b: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681d4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681d50: je 0x681d68 */ if (fZ) goto L_00681d68;
L_00681d52:; BB(0x00681d52);
    /* 00681d52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00681d54: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00681d5a: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00681d5d: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00681d60: mov eax, ebx */ r_eax = r_ebx;
    /* 00681d62: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00681d65: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
L_00681d68:; BB(0x00681d68);
    /* 00681d68: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681d6f: je 0x681d96 */ if (fZ) goto L_00681d96;
L_00681d71:; BB(0x00681d71);
    /* 00681d71: mov byte ptr [esp + 0x20], bl */ W8((u32)(r_esp+0x20u), (u8)r_ebx);
    /* 00681d75: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00681d78: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681d7a: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00681d7e: mov byte ptr [esp + 0x25], bl */ W8((u32)(r_esp+0x25u), (u8)r_ebx);
    /* 00681d82: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00681d85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681d87: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681d8cu); f_00683f40();
    /* 00681d8c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681d90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681d93: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00681d96:; BB(0x00681d96);
    /* 00681d96: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00681d98: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681d9c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00681d9e: mov dword ptr [edi], 4 */ W32((u32)(r_edi), 0x4u);
L_00681da4:; BB(0x00681da4);
    /* 00681da4: test dword ptr [edi + 0x10], 0x400 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681dab: je 0x681e1b */ if (fZ) goto L_00681e1b;
L_00681dad:; BB(0x00681dad);
    /* 00681dad: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681db0: jae 0x681dd6 */ if (!fC) goto L_00681dd6;
L_00681db2:; BB(0x00681db2);
    /* 00681db2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00681db4: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681dba:; BB(0x00681dba);
    /* 00681dba: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00681dbe: mov ecx, esi */ r_ecx = r_esi;
    /* 00681dc0: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00681dc2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681dc5: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00681dc8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681dcb: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00681dcd: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681dd0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681dd4: jb 0x681db2 */ if (fC) goto L_00681db2;
L_00681dd6:; BB(0x00681dd6);
    /* 00681dd6: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681dd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681ddb: mov dword ptr [edi + 0x40], ebx */ W32((u32)(r_edi+0x40u), r_ebx);
    /* 00681dde: je 0x681de3 */ if (fZ) goto L_00681de3;
L_00681de0:; BB(0x00681de0);
    /* 00681de0: mov dword ptr [eax + 0x14], ebx */ W32((u32)(r_eax+0x14u), r_ebx);
L_00681de3:; BB(0x00681de3);
    /* 00681de3: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681dea: je 0x681e11 */ if (fZ) goto L_00681e11;
L_00681dec:; BB(0x00681dec);
    /* 00681dec: mov byte ptr [esp + 0x20], bl */ W8((u32)(r_esp+0x20u), (u8)r_ebx);
    /* 00681df0: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00681df3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00681df5: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00681df9: mov byte ptr [esp + 0x25], bl */ W8((u32)(r_esp+0x25u), (u8)r_ebx);
    /* 00681dfd: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00681e00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681e01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681e02: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681e07u); f_00683f40();
    /* 00681e07: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681e0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681e0e: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00681e11:; BB(0x00681e11);
    /* 00681e11: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00681e13: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00681e17: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00681e19: jmp 0x681e29 */ goto L_00681e29;
L_00681e1b:; BB(0x00681e1b);
    /* 00681e1b: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681e1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681e20: je 0x681e29 */ if (fZ) goto L_00681e29;
L_00681e22:; BB(0x00681e22);
    /* 00681e22: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
L_00681e29:; BB(0x00681e29);
    /* 00681e29: mov dword ptr [edi], 5 */ W32((u32)(r_edi), 0x5u);
L_00681e2f:; BB(0x00681e2f);
    /* 00681e2f: test dword ptr [edi + 0x10], 0x400 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681e36: je 0x681ede */ if (fZ) goto L_00681ede;
L_00681e3c:; BB(0x00681e3c);
    /* 00681e3c: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00681e3f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00681e41: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00681e45: jbe 0x681e4d */ if ((fC||fZ)) goto L_00681e4d;
L_00681e47:; BB(0x00681e47);
    /* 00681e47: mov eax, edx */ r_eax = r_edx;
    /* 00681e49: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_00681e4d:; BB(0x00681e4d);
    /* 00681e4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681e4f: je 0x681ed4 */ if (fZ) goto L_00681ed4;
L_00681e55:; BB(0x00681e55);
    /* 00681e55: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00681e58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681e5a: je 0x681ea3 */ if (fZ) goto L_00681ea3;
L_00681e5c:; BB(0x00681e5c);
    /* 00681e5c: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00681e5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681e61: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00681e65: je 0x681ea3 */ if (fZ) goto L_00681ea3;
L_00681e67:; BB(0x00681e67);
    /* 00681e67: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00681e6a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00681e6d: sub ecx, dword ptr [edi + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00681e70: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00681e73: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 00681e76: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00681e7a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00681e7c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00681e7e: jbe 0x681e86 */ if ((fC||fZ)) goto L_00681e86;
L_00681e80:; BB(0x00681e80);
    /* 00681e80: sub edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681e84: mov eax, edx */ r_eax = r_edx;
L_00681e86:; BB(0x00681e86);
    /* 00681e86: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00681e8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00681e8b: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00681e8f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00681e91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681e93: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x681e98u); f_00686fde();
    /* 00681e98: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00681e9c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681ea0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00681ea3:; BB(0x00681ea3);
    /* 00681ea3: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681eaa: je 0x681ec9 */ if (fZ) goto L_00681ec9;
L_00681eac:; BB(0x00681eac);
    /* 00681eac: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00681eb0: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00681eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681eb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681eb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681eb6: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681ebbu); f_00683f40();
    /* 00681ebb: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681ebf: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00681ec2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00681ec6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00681ec9:; BB(0x00681ec9);
    /* 00681ec9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681ecb: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681ecd: sub dword ptr [edi + 0x40], eax */ { u32 ad = (u32)(r_edi+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00681ed0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
L_00681ed4:; BB(0x00681ed4);
    /* 00681ed4: cmp dword ptr [edi + 0x40], 0 */ {  u32 a = R32((u32)(r_edi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681ed8: jne 0x682e5c */ if (!fZ) goto L_00682e5c;
L_00681ede:; BB(0x00681ede);
    /* 00681ede: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
    /* 00681ee5: mov dword ptr [edi], 6 */ W32((u32)(r_edi), 0x6u);
L_00681eeb:; BB(0x00681eeb);
    /* 00681eeb: test dword ptr [edi + 0x10], 0x800 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681ef2: je 0x681f88 */ if (fZ) goto L_00681f88;
L_00681ef8:; BB(0x00681ef8);
    /* 00681ef8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681efa: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681f00:; BB(0x00681f00);
    /* 00681f00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00681f02:; BB(0x00681f02);
    /* 00681f02: movzx ecx, byte ptr [eax + ebp] */ r_ecx = (u32)R8((u32)(r_eax+r_ebp));
    /* 00681f06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681f09: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00681f0d: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681f10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681f12: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00681f16: je 0x681f3e */ if (fZ) goto L_00681f3e;
L_00681f18:; BB(0x00681f18);
    /* 00681f18: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00681f1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681f1d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00681f21: je 0x681f3e */ if (fZ) goto L_00681f3e;
L_00681f23:; BB(0x00681f23);
    /* 00681f23: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00681f26: cmp ecx, dword ptr [eax + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681f29: jae 0x681f3e */ if (!fC) goto L_00681f3e;
L_00681f2b:; BB(0x00681f2b);
    /* 00681f2b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00681f2f: mov al, byte ptr [esp + 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x24u))) & 0xffu);
    /* 00681f33: mov byte ptr [edx + ecx], al */ W8((u32)(r_edx+r_ecx), (u8)r_eax);
    /* 00681f36: add dword ptr [edi + 0x40], 1 */ { u32 ad = (u32)(r_edi+0x40u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00681f3a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00681f3e:; BB(0x00681f3e);
    /* 00681f3e: cmp dword ptr [esp + 0x24], 0 */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681f43: je 0x681f4d */ if (fZ) goto L_00681f4d;
L_00681f45:; BB(0x00681f45);
    /* 00681f45: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00681f49: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681f4b: jb 0x681f02 */ if (fC) goto L_00681f02;
L_00681f4d:; BB(0x00681f4d);
    /* 00681f4d: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681f54: je 0x681f6f */ if (fZ) goto L_00681f6f;
L_00681f56:; BB(0x00681f56);
    /* 00681f56: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00681f5a: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00681f5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00681f5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00681f5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00681f60: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x681f65u); f_00683f40();
    /* 00681f65: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00681f69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681f6c: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_00681f6f:; BB(0x00681f6f);
    /* 00681f6f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00681f73: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681f75: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00681f77: cmp dword ptr [esp + 0x24], 0 */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681f7c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00681f80: jne 0x682e5c */ if (!fZ) goto L_00682e5c;
L_00681f86:; BB(0x00681f86);
    /* 00681f86: jmp 0x681f96 */ goto L_00681f96;
L_00681f88:; BB(0x00681f88);
    /* 00681f88: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681f8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681f8d: je 0x681f96 */ if (fZ) goto L_00681f96;
L_00681f8f:; BB(0x00681f8f);
    /* 00681f8f: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_00681f96:; BB(0x00681f96);
    /* 00681f96: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
    /* 00681f9d: mov dword ptr [edi], 7 */ W32((u32)(r_edi), 0x7u);
L_00681fa3:; BB(0x00681fa3);
    /* 00681fa3: test dword ptr [edi + 0x10], 0x1000 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681faa: je 0x682046 */ if (fZ) goto L_00682046;
L_00681fb0:; BB(0x00681fb0);
    /* 00681fb0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681fb2: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00681fb8:; BB(0x00681fb8);
    /* 00681fb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00681fba: lea ebx, [ebx] */ r_ebx = (u32)(r_ebx);
L_00681fc0:; BB(0x00681fc0);
    /* 00681fc0: movzx ecx, byte ptr [eax + ebp] */ r_ecx = (u32)R8((u32)(r_eax+r_ebp));
    /* 00681fc4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681fc7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00681fcb: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00681fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681fd0: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00681fd4: je 0x681ffc */ if (fZ) goto L_00681ffc;
L_00681fd6:; BB(0x00681fd6);
    /* 00681fd6: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00681fd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00681fdb: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00681fdf: je 0x681ffc */ if (fZ) goto L_00681ffc;
L_00681fe1:; BB(0x00681fe1);
    /* 00681fe1: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00681fe4: cmp ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681fe7: jae 0x681ffc */ if (!fC) goto L_00681ffc;
L_00681fe9:; BB(0x00681fe9);
    /* 00681fe9: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00681fed: mov al, byte ptr [esp + 0x24] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x24u))) & 0xffu);
    /* 00681ff1: mov byte ptr [edx + ecx], al */ W8((u32)(r_edx+r_ecx), (u8)r_eax);
    /* 00681ff4: add dword ptr [edi + 0x40], 1 */ { u32 ad = (u32)(r_edi+0x40u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00681ff8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00681ffc:; BB(0x00681ffc);
    /* 00681ffc: cmp dword ptr [esp + 0x24], 0 */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682001: je 0x68200b */ if (fZ) goto L_0068200b;
L_00682003:; BB(0x00682003);
    /* 00682003: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00682007: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682009: jb 0x681fc0 */ if (fC) goto L_00681fc0;
L_0068200b:; BB(0x0068200b);
    /* 0068200b: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682012: je 0x68202d */ if (fZ) goto L_0068202d;
L_00682014:; BB(0x00682014);
    /* 00682014: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00682018: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0068201b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068201c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068201d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068201e: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x682023u); f_00683f40();
    /* 00682023: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00682027: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068202a: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_0068202d:; BB(0x0068202d);
    /* 0068202d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00682031: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682033: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682035: cmp dword ptr [esp + 0x24], 0 */ {  u32 a = R32((u32)(r_esp+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068203a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068203e: jne 0x682e5c */ if (!fZ) goto L_00682e5c;
L_00682044:; BB(0x00682044);
    /* 00682044: jmp 0x682054 */ goto L_00682054;
L_00682046:; BB(0x00682046);
    /* 00682046: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00682049: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068204b: je 0x682054 */ if (fZ) goto L_00682054;
L_0068204d:; BB(0x0068204d);
    /* 0068204d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00682054:; BB(0x00682054);
    /* 00682054: mov dword ptr [edi], 8 */ W32((u32)(r_edi), 0x8u);
L_0068205a:; BB(0x0068205a);
    /* 0068205a: test dword ptr [edi + 0x10], 0x200 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682061: je 0x6820b0 */ if (fZ) goto L_006820b0;
L_00682063:; BB(0x00682063);
    /* 00682063: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682066: jae 0x682090 */ if (!fC) goto L_00682090;
L_00682068:; BB(0x00682068);
    /* 00682068: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068206a: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682070:; BB(0x00682070);
    /* 00682070: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682074: mov ecx, esi */ r_ecx = r_esi;
    /* 00682076: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682078: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068207b: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068207e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682081: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682083: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682086: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068208a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0068208e: jb 0x682068 */ if (fC) goto L_00682068;
L_00682090:; BB(0x00682090);
    /* 00682090: movzx ecx, word ptr [edi + 0x18] */ r_ecx = (u32)R16((u32)(r_edi+0x18u));
    /* 00682094: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682096: je 0x6820a8 */ if (fZ) goto L_006820a8;
L_00682098:; BB(0x00682098);
    /* 00682098: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0068209c: mov dword ptr [eax + 0x18], 0x6e2d40 */ W32((u32)(r_eax+0x18u), 0x6e2d40u);
    /* 006820a3: jmp 0x682df8 */ goto L_00682df8;
L_006820a8:; BB(0x006820a8);
    /* 006820a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006820aa: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006820ae: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006820b0:; BB(0x006820b0);
    /* 006820b0: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006820b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006820b5: je 0x6820cd */ if (fZ) goto L_006820cd;
L_006820b7:; BB(0x006820b7);
    /* 006820b7: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 006820ba: sar ecx, 9 */ { u32 c = (9u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006820bd: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006820c0: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 006820c3: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 006820c6: mov dword ptr [edx + 0x30], 1 */ W32((u32)(r_edx+0x30u), 0x1u);
L_006820cd:; BB(0x006820cd);
    /* 006820cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006820cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006820d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006820d3: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x6820d8u); f_00683f40();
    /* 006820d8: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 006820dc: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006820e0: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 006820e3: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006820e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006820e9: mov dword ptr [edi], 0xb */ W32((u32)(r_edi), 0xbu);
    /* 006820ef: jmp 0x682dfe */ goto L_00682dfe;
L_006820f4:; BB(0x006820f4);
    /* 006820f4: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006820f7: jae 0x682128 */ if (!fC) goto L_00682128;
L_006820f9:; BB(0x006820f9);
    /* 006820f9: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00682100:; BB(0x00682100);
    /* 00682100: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682102: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682108:; BB(0x00682108);
    /* 00682108: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 0068210c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068210e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682110: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682113: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682116: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682119: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068211b: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068211e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682122: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682126: jb 0x682100 */ if (fC) goto L_00682100;
L_00682128:; BB(0x00682128);
    /* 00682128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068212a: and ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00682130: mov eax, ebx */ r_eax = r_ebx;
    /* 00682132: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682135: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682137: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00682139: mov ah, byte ptr [esp + 0x1a] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_esp+0x1au))) & 0xffu) << 8);
    /* 0068213d: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00682140: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682143: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682145: lea eax, [ecx + ebx] */ r_eax = (u32)(r_ecx+r_ebx);
    /* 00682148: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0068214c: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0068214f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00682152: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00682154: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00682156: mov dword ptr [edi], 0xa */ W32((u32)(r_edi), 0xau);
L_0068215c:; BB(0x0068215c);
    /* 0068215c: cmp dword ptr [edi + 0xc], 0 */ {  u32 a = R32((u32)(r_edi+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682160: je 0x682e16 */ if (fZ) goto L_00682e16;
L_00682166:; BB(0x00682166);
    /* 00682166: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068216a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068216c: call 0x683a20 */ r_esp -= 4; W32(r_esp, 0x682171u); f_00683a20();
    /* 00682171: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00682175: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00682178: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0068217b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068217f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682182: mov dword ptr [edi], 0xb */ W32((u32)(r_edi), 0xbu);
L_00682188:; BB(0x00682188);
    /* 00682188: cmp dword ptr [esp + 0x44], 5 */ {  u32 a = R32((u32)(r_esp+0x44u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068218d: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682193:; BB(0x00682193);
    /* 00682193: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682197: je 0x6821b1 */ if (fZ) goto L_006821b1;
L_00682199:; BB(0x00682199);
    /* 00682199: mov ecx, esi */ r_ecx = r_esi;
    /* 0068219b: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068219e: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006821a0: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006821a2: mov dword ptr [edi], 0x18 */ W32((u32)(r_edi), 0x18u);
    /* 006821a8: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006821ac: jmp 0x682dfe */ goto L_00682dfe;
L_006821b1:; BB(0x006821b1);
    /* 006821b1: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006821b4: jae 0x6821da */ if (!fC) goto L_006821da;
L_006821b6:; BB(0x006821b6);
    /* 006821b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006821b8: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_006821be:; BB(0x006821be);
    /* 006821be: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 006821c2: mov ecx, esi */ r_ecx = r_esi;
    /* 006821c4: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006821c6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006821c9: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006821cc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006821cf: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006821d1: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006821d4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006821d8: jb 0x6821b6 */ if (fC) goto L_006821b6;
L_006821da:; BB(0x006821da);
    /* 006821da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006821dc: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006821de: mov eax, ebx */ r_eax = r_ebx;
    /* 006821e0: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006821e3: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006821e6: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006821e9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006821ec: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 006821ef: ja 0x68224f */ if ((!fC&&!fZ)) goto L_0068224f;
L_006821f1:; BB(0x006821f1);
    /* 006821f1: jmp dword ptr [eax*4 + 0x682fdc] */ { u32 t = R32((u32)(r_eax*4+0x682fdcu)); switch (t) { case 0x682ea4u: goto L_00682ea4; case 0x682e54u: goto L_00682e54; case 0x682e4au: goto L_00682e4a; case 0x682da2u: goto L_00682da2; case 0x682ccfu: goto L_00682ccf; case 0x682ca4u: goto L_00682ca4; case 0x682be8u: goto L_00682be8; case 0x682b79u: goto L_00682b79; case 0x682a02u: goto L_00682a02; case 0x6829b7u: goto L_006829b7; case 0x6827b3u: goto L_006827b3; case 0x6824a2u: goto L_006824a2; case 0x6823abu: goto L_006823ab; case 0x68232bu: goto L_0068232b; case 0x6822cbu: goto L_006822cb; case 0x68225eu: goto L_0068225e; case 0x682193u: goto L_00682193; case 0x682188u: goto L_00682188; case 0x68215cu: goto L_0068215c; case 0x6820f4u: goto L_006820f4; case 0x68205au: goto L_0068205a; case 0x681fa3u: goto L_00681fa3; case 0x681eebu: goto L_00681eeb; case 0x681e2fu: goto L_00681e2f; case 0x681da4u: goto L_00681da4; case 0x681d22u: goto L_00681d22; case 0x681ca3u: goto L_00681ca3; case 0x681bf5u: goto L_00681bf5; case 0x681a87u: goto L_00681a87; case 0x6821f8u: goto L_006821f8; case 0x68220du: goto L_0068220d; case 0x682229u: goto L_00682229; case 0x68223eu: goto L_0068223e; default: UNSUP(0x006821f1, "jump table entry is not a known target"); } }
L_006821f8:; BB(0x006821f8);
    /* 006821f8: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006821fb: mov dword ptr [edi], 0xd */ W32((u32)(r_edi), 0xdu);
    /* 00682201: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682205: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682208: jmp 0x682dfe */ goto L_00682dfe;
L_0068220d:; BB(0x0068220d);
    /* 0068220d: mov eax, edi */ r_eax = r_edi;
    /* 0068220f: call 0x6818f0 */ r_esp -= 4; W32(r_esp, 0x682214u); f_006818f0();
    /* 00682214: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682217: mov dword ptr [edi], 0x12 */ W32((u32)(r_edi), 0x12u);
    /* 0068221d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682221: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682224: jmp 0x682dfe */ goto L_00682dfe;
L_00682229:; BB(0x00682229);
    /* 00682229: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068222c: mov dword ptr [edi], 0xf */ W32((u32)(r_edi), 0xfu);
    /* 00682232: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682236: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682239: jmp 0x682dfe */ goto L_00682dfe;
L_0068223e:; BB(0x0068223e);
    /* 0068223e: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682242: mov dword ptr [eax + 0x18], 0x6e2d2c */ W32((u32)(r_eax+0x18u), 0x6e2d2cu);
    /* 00682249: mov dword ptr [edi], 0x1b */ W32((u32)(r_edi), 0x1bu);
L_0068224f:; BB(0x0068224f);
    /* 0068224f: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682252: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682256: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682259: jmp 0x682dfe */ goto L_00682dfe;
L_0068225e:; BB(0x0068225e);
    /* 0068225e: mov ecx, esi */ r_ecx = r_esi;
    /* 00682260: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682263: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682265: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682267: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068226a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0068226e: jae 0x682298 */ if (!fC) goto L_00682298;
L_00682270:; BB(0x00682270);
    /* 00682270: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682272: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682278:; BB(0x00682278);
    /* 00682278: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 0068227c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068227e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682280: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682283: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682286: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682289: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068228b: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068228e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682292: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682296: jb 0x682270 */ if (fC) goto L_00682270;
L_00682298:; BB(0x00682298);
    /* 00682298: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068229a: mov eax, ebx */ r_eax = r_ebx;
    /* 0068229c: not ecx */ r_ecx = ~r_ecx;
    /* 0068229e: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006822a3: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006822a6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006822a8: je 0x6822ba */ if (fZ) goto L_006822ba;
L_006822aa:; BB(0x006822aa);
    /* 006822aa: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 006822ae: mov dword ptr [eax + 0x18], 0x6e2d0c */ W32((u32)(r_eax+0x18u), 0x6e2d0cu);
    /* 006822b5: jmp 0x682df8 */ goto L_00682df8;
L_006822ba:; BB(0x006822ba);
    /* 006822ba: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006822bc: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 006822bf: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006822c3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006822c5: mov dword ptr [edi], 0xe */ W32((u32)(r_edi), 0xeu);
L_006822cb:; BB(0x006822cb);
    /* 006822cb: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 006822ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006822d0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006822d4: je 0x68298c */ if (fZ) goto L_0068298c;
L_006822da:; BB(0x006822da);
    /* 006822da: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006822dc: jbe 0x6822e4 */ if ((fC||fZ)) goto L_006822e4;
L_006822de:; BB(0x006822de);
    /* 006822de: mov eax, edx */ r_eax = r_edx;
    /* 006822e0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
L_006822e4:; BB(0x006822e4);
    /* 006822e4: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006822e8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006822ea: jbe 0x6822f2 */ if ((fC||fZ)) goto L_006822f2;
L_006822ec:; BB(0x006822ec);
    /* 006822ec: mov eax, ecx */ r_eax = r_ecx;
    /* 006822ee: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_006822f2:; BB(0x006822f2);
    /* 006822f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006822f4: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_006822fa:; BB(0x006822fa);
    /* 006822fa: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006822fe: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00682302: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682303: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682305: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x68230au); f_00686fde();
    /* 0068230a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0068230e: sub dword ptr [esp + 0x1c], eax */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00682312: sub dword ptr [esp + 0x28], eax */ { u32 ad = (u32)(r_esp+0x28u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00682316: add dword ptr [esp + 0x34], eax */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0068231a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068231e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682321: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682323: sub dword ptr [edi + 0x40], eax */ { u32 ad = (u32)(r_edi+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00682326: jmp 0x682dfe */ goto L_00682dfe;
L_0068232b:; BB(0x0068232b);
    /* 0068232b: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068232e: jae 0x682354 */ if (!fC) goto L_00682354;
L_00682330:; BB(0x00682330);
    /* 00682330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682332: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682338:; BB(0x00682338);
    /* 00682338: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 0068233c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068233e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682340: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682343: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682346: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682349: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068234b: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068234e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682352: jb 0x682330 */ if (fC) goto L_00682330;
L_00682354:; BB(0x00682354);
    /* 00682354: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00682356: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00682359: shr ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068235c: add ecx, 0x101 */ {  u32 a = r_ecx; u32 b = 0x101u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682362: mov eax, ebx */ r_eax = r_ebx;
    /* 00682364: mov dword ptr [edi + 0x60], ecx */ W32((u32)(r_edi+0x60u), r_ecx);
    /* 00682367: shr ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068236a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068236c: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068236f: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00682372: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682375: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682378: shr ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068237b: sub esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0068237e: cmp dword ptr [edi + 0x60], 0x11e */ {  u32 a = R32((u32)(r_edi+0x60u)); u32 b = 0x11eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682385: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 00682388: mov dword ptr [edi + 0x5c], ecx */ W32((u32)(r_edi+0x5cu), r_ecx);
    /* 0068238b: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0068238f: ja 0x682485 */ if ((!fC&&!fZ)) goto L_00682485;
L_00682395:; BB(0x00682395);
    /* 00682395: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682398: ja 0x682485 */ if ((!fC&&!fZ)) goto L_00682485;
L_0068239e:; BB(0x0068239e);
    /* 0068239e: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 006823a5: mov dword ptr [edi], 0x10 */ W32((u32)(r_edi), 0x10u);
L_006823ab:; BB(0x006823ab);
    /* 006823ab: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 006823ae: cmp ecx, dword ptr [edi + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006823b1: jae 0x682408 */ if (!fC) goto L_00682408;
L_006823b3:; BB(0x006823b3);
    /* 006823b3: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006823b6: jae 0x6823dc */ if (!fC) goto L_006823dc;
L_006823b8:; BB(0x006823b8);
    /* 006823b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006823ba: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_006823c0:; BB(0x006823c0);
    /* 006823c0: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 006823c4: mov ecx, esi */ r_ecx = r_esi;
    /* 006823c6: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006823c8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006823cb: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006823ce: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006823d1: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006823d3: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006823d6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006823da: jb 0x6823b8 */ if (fC) goto L_006823b8;
L_006823dc:; BB(0x006823dc);
    /* 006823dc: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 006823df: movzx eax, word ptr [eax*2 + 0x6e2bd0] */ r_eax = (u32)R16((u32)(r_eax*2+0x6e2bd0u));
    /* 006823e7: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 006823ea: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006823ed: mov word ptr [edi + eax*2 + 0x70], cx */ W16((u32)(r_edi+r_eax*2+0x70u), (u16)r_ecx);
    /* 006823f2: add dword ptr [edi + 0x68], 1 */ { u32 ad = (u32)(r_edi+0x68u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006823f6: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 006823f9: shr ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006823fc: sub esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006823ff: cmp ecx, dword ptr [edi + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682402: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682406: jb 0x6823b3 */ if (fC) goto L_006823b3;
L_00682408:; BB(0x00682408);
    /* 00682408: cmp dword ptr [edi + 0x68], 0x13 */ {  u32 a = R32((u32)(r_edi+0x68u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068240c: jae 0x682439 */ if (!fC) goto L_00682439;
L_0068240e:; BB(0x0068240e);
    /* 0068240e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00682413: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00682415: jmp 0x682420 */ goto L_00682420;
L_00682420:; BB(0x00682420);
    /* 00682420: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 00682423: movzx edx, word ptr [edx*2 + 0x6e2bd0] */ r_edx = (u32)R16((u32)(r_edx*2+0x6e2bd0u));
    /* 0068242b: mov word ptr [edi + edx*2 + 0x70], ax */ W16((u32)(r_edi+r_edx*2+0x70u), (u16)r_eax);
    /* 00682430: add dword ptr [edi + 0x68], ecx */ { u32 ad = (u32)(r_edi+0x68u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682433: cmp dword ptr [edi + 0x68], 0x13 */ {  u32 a = R32((u32)(r_edi+0x68u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682437: jb 0x682420 */ if (fC) goto L_00682420;
L_00682439:; BB(0x00682439);
    /* 00682439: lea eax, [edi + 0x530] */ r_eax = (u32)(r_edi+0x530u);
    /* 0068243f: lea ecx, [edi + 0x6c] */ r_ecx = (u32)(r_edi+0x6cu);
    /* 00682442: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00682444: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00682447: lea edx, [edi + 0x2f0] */ r_edx = (u32)(r_edi+0x2f0u);
    /* 0068244d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068244e: lea eax, [edi + 0x54] */ r_eax = (u32)(r_edi+0x54u);
    /* 00682451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682452: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682453: mov dword ptr [eax], 7 */ W32((u32)(r_eax), 0x7u);
    /* 00682459: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0068245b: lea eax, [edi + 0x70] */ r_eax = (u32)(r_edi+0x70u);
    /* 0068245e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068245f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682461: call 0x683530 */ r_esp -= 4; W32(r_esp, 0x682466u); f_00683530();
    /* 00682466: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0068246a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068246d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068246f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00682473: je 0x682495 */ if (fZ) goto L_00682495;
L_00682475:; BB(0x00682475);
    /* 00682475: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00682479: mov dword ptr [ecx + 0x18], 0x6e2cf0 */ W32((u32)(r_ecx+0x18u), 0x6e2cf0u);
    /* 00682480: jmp 0x682df8 */ goto L_00682df8;
L_00682485:; BB(0x00682485);
    /* 00682485: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682489: mov dword ptr [eax + 0x18], 0x6e2ccc */ W32((u32)(r_eax+0x18u), 0x6e2cccu);
    /* 00682490: jmp 0x682df8 */ goto L_00682df8;
L_00682495:; BB(0x00682495);
    /* 00682495: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 0068249c: mov dword ptr [edi], 0x11 */ W32((u32)(r_edi), 0x11u);
L_006824a2:; BB(0x006824a2);
    /* 006824a2: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 006824a5: add eax, dword ptr [edi + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006824a8: cmp dword ptr [edi + 0x68], eax */ {  u32 a = R32((u32)(r_edi+0x68u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006824ab: jae 0x6826e9 */ if (!fC) goto L_006826e9;
L_006824b1:; BB(0x006824b1);
    /* 006824b1: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 006824b4: mov eax, 1 */ r_eax = 0x1u;
    /* 006824b9: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006824bb: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 006824be: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006824c1: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006824c3: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006824c6: mov ecx, eax */ r_ecx = r_eax;
    /* 006824c8: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006824cb: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006824ce: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006824d0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006824d4: jbe 0x68251a */ if ((fC||fZ)) goto L_0068251a;
L_006824d6:; BB(0x006824d6);
    /* 006824d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006824d8: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_006824de:; BB(0x006824de);
    /* 006824de: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 006824e2: mov ecx, esi */ r_ecx = r_esi;
    /* 006824e4: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006824e6: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 006824e9: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006824ec: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006824ef: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006824f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006824f6: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006824f8: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 006824fb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006824fe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682502: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682505: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682507: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0068250a: mov ecx, eax */ r_ecx = r_eax;
    /* 0068250c: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0068250f: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682512: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682514: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682518: ja 0x6824d6 */ if ((!fC&&!fZ)) goto L_006824d6;
L_0068251a:; BB(0x0068251a);
    /* 0068251a: mov ecx, eax */ r_ecx = r_eax;
    /* 0068251c: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0068251f: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682522: jae 0x68257b */ if (!fC) goto L_0068257b;
L_00682524:; BB(0x00682524);
    /* 00682524: mov ecx, eax */ r_ecx = r_eax;
    /* 00682526: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682529: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0068252c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068252e: jae 0x68255a */ if (!fC) goto L_0068255a;
L_00682530:; BB(0x00682530);
    /* 00682530: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682532: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682538:; BB(0x00682538);
    /* 00682538: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 0068253c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068253e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682540: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682543: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682546: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682549: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068254b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0068254f: movzx ecx, ah */ r_ecx = (u32)(u8)(r_eax>>8);
    /* 00682552: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682554: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682558: jb 0x682530 */ if (fC) goto L_00682530;
L_0068255a:; BB(0x0068255a);
    /* 0068255a: movzx ecx, ah */ r_ecx = (u32)(u8)(r_eax>>8);
    /* 0068255d: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 00682560: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682562: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682564: mov cx, word ptr [esp + 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x16u))) & 0xffffu);
    /* 00682569: mov word ptr [edi + eax*2 + 0x70], cx */ W16((u32)(r_edi+r_eax*2+0x70u), (u16)r_ecx);
    /* 0068256e: add dword ptr [edi + 0x68], 1 */ { u32 ad = (u32)(r_edi+0x68u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682572: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682576: jmp 0x6826da */ goto L_006826da;
L_0068257b:; BB(0x0068257b);
    /* 0068257b: mov cx, word ptr [esp + 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x16u))) & 0xffffu);
    /* 00682580: cmp cx, 0x10 */ {  u32 a = (u16)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00682584: jne 0x6825f1 */ if (!fZ) goto L_006825f1;
L_00682586:; BB(0x00682586);
    /* 00682586: movzx ecx, ah */ r_ecx = (u32)(u8)(r_eax>>8);
    /* 00682589: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 0068258c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068258e: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00682592: jae 0x6825be */ if (!fC) goto L_006825be;
L_00682594:; BB(0x00682594);
    /* 00682594: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682596: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_0068259c:; BB(0x0068259c);
    /* 0068259c: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 006825a0: mov ecx, esi */ r_ecx = r_esi;
    /* 006825a2: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006825a4: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006825a8: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006825ab: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006825ae: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006825b0: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 006825b3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006825b6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006825b8: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006825bc: jb 0x682594 */ if (fC) goto L_00682594;
L_006825be:; BB(0x006825be);
    /* 006825be: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 006825c1: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006825c3: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006825c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006825c7: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006825cb: je 0x682740 */ if (fZ) goto L_00682740;
L_006825d1:; BB(0x006825d1);
    /* 006825d1: movzx ecx, word ptr [edi + eax*2 + 0x6e] */ r_ecx = (u32)R16((u32)(r_edi+r_eax*2+0x6eu));
    /* 006825d6: mov eax, ebx */ r_eax = r_ebx;
    /* 006825d8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006825db: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006825de: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006825e1: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006825e5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006825e9: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006825ec: jmp 0x6826a0 */ goto L_006826a0;
L_006825f1:; BB(0x006825f1);
    /* 006825f1: cmp cx, 0x11 */ {  u32 a = (u16)r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006825f5: movzx ecx, ah */ r_ecx = (u32)(u8)(r_eax>>8);
    /* 006825f8: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006825fc: jne 0x682647 */ if (!fZ) goto L_00682647;
L_006825fe:; BB(0x006825fe);
    /* 006825fe: lea eax, [ecx + 3] */ r_eax = (u32)(r_ecx+0x3u);
    /* 00682601: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682603: jae 0x68262f */ if (!fC) goto L_0068262f;
L_00682605:; BB(0x00682605);
    /* 00682605: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682607: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_0068260d:; BB(0x0068260d);
    /* 0068260d: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682611: mov ecx, esi */ r_ecx = r_esi;
    /* 00682613: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682615: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00682619: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068261c: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068261f: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682621: lea eax, [ecx + 3] */ r_eax = (u32)(r_ecx+0x3u);
    /* 00682624: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682627: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682629: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068262d: jb 0x682605 */ if (fC) goto L_00682605;
L_0068262f:; BB(0x0068262f);
    /* 0068262f: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682631: mov eax, ebx */ r_eax = r_ebx;
    /* 00682633: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682636: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682639: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068263d: shr ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682640: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 00682645: jmp 0x682690 */ goto L_00682690;
L_00682647:; BB(0x00682647);
    /* 00682647: lea eax, [ecx + 7] */ r_eax = (u32)(r_ecx+0x7u);
    /* 0068264a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068264c: jae 0x68267a */ if (!fC) goto L_0068267a;
L_0068264e:; BB(0x0068264e);
    /* 0068264e: mov edi, edi */ r_edi = r_edi;
L_00682650:; BB(0x00682650);
    /* 00682650: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682652: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682658:; BB(0x00682658);
    /* 00682658: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 0068265c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068265e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682660: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00682664: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682667: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068266a: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068266c: lea eax, [ecx + 7] */ r_eax = (u32)(r_ecx+0x7u);
    /* 0068266f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682672: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682674: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682678: jb 0x682650 */ if (fC) goto L_00682650;
L_0068267a:; BB(0x0068267a);
    /* 0068267a: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068267c: mov eax, ebx */ r_eax = r_ebx;
    /* 0068267e: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682681: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682684: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682688: shr ebx, 7 */ { u32 c = (7u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068268b: mov eax, 0xfffffff9 */ r_eax = 0xfffffff9u;
L_00682690:; BB(0x00682690);
    /* 00682690: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682692: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682694: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00682698: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
L_006826a0:; BB(0x006826a0);
    /* 006826a0: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 006826a3: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006826a5: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 006826a8: add eax, dword ptr [edi + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006826ab: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006826af: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006826b1: ja 0x682750 */ if ((!fC&&!fZ)) goto L_00682750;
L_006826b7:; BB(0x006826b7);
    /* 006826b7: cmp dword ptr [esp + 0x14], 0 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006826bc: je 0x6826da */ if (fZ) goto L_006826da;
L_006826be:; BB(0x006826be);
    /* 006826be: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_006826c2:; BB(0x006826c2);
    /* 006826c2: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 006826c5: sub dword ptr [esp + 0x14], 1 */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 006826ca: mov word ptr [edi + ecx*2 + 0x70], ax */ W16((u32)(r_edi+r_ecx*2+0x70u), (u16)r_eax);
    /* 006826cf: add dword ptr [edi + 0x68], 1 */ { u32 ad = (u32)(r_edi+0x68u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006826d3: cmp dword ptr [esp + 0x14], 0 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006826d8: jne 0x6826c2 */ if (!fZ) goto L_006826c2;
L_006826da:; BB(0x006826da);
    /* 006826da: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 006826dd: add eax, dword ptr [edi + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006826e0: cmp dword ptr [edi + 0x68], eax */ {  u32 a = R32((u32)(r_edi+0x68u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006826e3: jb 0x6824b1 */ if (fC) goto L_006824b1;
L_006826e9:; BB(0x006826e9);
    /* 006826e9: cmp dword ptr [edi], 0x1b */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006826ec: je 0x682dfe */ if (fZ) goto L_00682dfe;
L_006826f2:; BB(0x006826f2);
    /* 006826f2: lea eax, [edi + 0x530] */ r_eax = (u32)(r_edi+0x530u);
    /* 006826f8: lea ecx, [edi + 0x6c] */ r_ecx = (u32)(r_edi+0x6cu);
    /* 006826fb: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006826fd: lea edx, [edi + 0x2f0] */ r_edx = (u32)(r_edi+0x2f0u);
    /* 00682703: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682704: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00682707: lea eax, [edi + 0x54] */ r_eax = (u32)(r_edi+0x54u);
    /* 0068270a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068270b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068270c: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 0068270f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682710: lea edx, [edi + 0x70] */ r_edx = (u32)(r_edi+0x70u);
    /* 00682713: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682714: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00682716: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 0068271c: call 0x683530 */ r_esp -= 4; W32(r_esp, 0x682721u); f_00683530();
    /* 00682721: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682724: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682726: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0068272a: je 0x682760 */ if (fZ) goto L_00682760;
L_0068272c:; BB(0x0068272c);
    /* 0068272c: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682730: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00682734: mov dword ptr [eax + 0x18], 0x6e2cb0 */ W32((u32)(r_eax+0x18u), 0x6e2cb0u);
    /* 0068273b: jmp 0x682df8 */ goto L_00682df8;
L_00682740:; BB(0x00682740);
    /* 00682740: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00682744: mov dword ptr [ecx + 0x18], 0x6e2c94 */ W32((u32)(r_ecx+0x18u), 0x6e2c94u);
    /* 0068274b: jmp 0x682df8 */ goto L_00682df8;
L_00682750:; BB(0x00682750);
    /* 00682750: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682754: mov dword ptr [eax + 0x18], 0x6e2c94 */ W32((u32)(r_eax+0x18u), 0x6e2c94u);
    /* 0068275b: jmp 0x682df8 */ goto L_00682df8;
L_00682760:; BB(0x00682760);
    /* 00682760: mov edx, dword ptr [edi + 0x6c] */ r_edx = R32((u32)(r_edi+0x6cu));
    /* 00682763: lea ecx, [edi + 0x6c] */ r_ecx = (u32)(r_edi+0x6cu);
    /* 00682766: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 00682769: lea edx, [edi + 0x2f0] */ r_edx = (u32)(r_edi+0x2f0u);
    /* 0068276f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682770: lea eax, [edi + 0x58] */ r_eax = (u32)(r_edi+0x58u);
    /* 00682773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682774: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682775: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00682778: mov dword ptr [eax], 6 */ W32((u32)(r_eax), 0x6u);
    /* 0068277e: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 00682781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682782: lea edx, [edi + ecx*2 + 0x70] */ r_edx = (u32)(r_edi+r_ecx*2+0x70u);
    /* 00682786: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682787: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00682789: call 0x683530 */ r_esp -= 4; W32(r_esp, 0x68278eu); f_00683530();
    /* 0068278e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00682792: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682795: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682797: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0068279b: je 0x6827ad */ if (fZ) goto L_006827ad;
L_0068279d:; BB(0x0068279d);
    /* 0068279d: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 006827a1: mov dword ptr [eax + 0x18], 0x6e2c7c */ W32((u32)(r_eax+0x18u), 0x6e2c7cu);
    /* 006827a8: jmp 0x682df8 */ goto L_00682df8;
L_006827ad:; BB(0x006827ad);
    /* 006827ad: mov dword ptr [edi], 0x12 */ W32((u32)(r_edi), 0x12u);
L_006827b3:; BB(0x006827b3);
    /* 006827b3: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006827b6: jb 0x682821 */ if (fC) goto L_00682821;
L_006827bc:; BB(0x006827bc);
    /* 006827bc: cmp dword ptr [esp + 0x1c], 0x102 */ {  u32 a = R32((u32)(r_esp+0x1cu)); u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006827c4: jb 0x682821 */ if (fC) goto L_00682821;
L_006827c6:; BB(0x006827c6);
    /* 006827c6: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 006827ca: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006827ce: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006827d2: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006827d5: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006827d9: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006827dc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006827e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006827e1: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 006827e3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006827e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006827e7: mov dword ptr [edi + 0x38], ebx */ W32((u32)(r_edi+0x38u), r_ebx);
    /* 006827ea: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 006827ed: call 0x683070 */ r_esp -= 4; W32(r_esp, 0x6827f2u); f_00683070();
    /* 006827f2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 006827f6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006827f9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006827fc: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 006827fe: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00682801: mov ebx, dword ptr [edi + 0x38] */ r_ebx = R32((u32)(r_edi+0x38u));
    /* 00682804: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 00682807: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0068280b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068280e: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00682812: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00682816: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0068281a: mov edx, eax */ r_edx = r_eax;
    /* 0068281c: jmp 0x682dfe */ goto L_00682dfe;
L_00682821:; BB(0x00682821);
    /* 00682821: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 00682824: mov eax, 1 */ r_eax = 0x1u;
    /* 00682829: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068282b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068282e: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682830: mov ecx, eax */ r_ecx = r_eax;
    /* 00682832: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 00682835: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 00682838: mov ecx, eax */ r_ecx = r_eax;
    /* 0068283a: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0068283d: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682840: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682842: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682846: jbe 0x68288c */ if ((fC||fZ)) goto L_0068288c;
L_00682848:; BB(0x00682848);
    /* 00682848: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068284a: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682850:; BB(0x00682850);
    /* 00682850: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682854: mov ecx, esi */ r_ecx = r_esi;
    /* 00682856: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682858: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 0068285b: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068285e: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682861: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682863: mov eax, 1 */ r_eax = 0x1u;
    /* 00682868: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068286a: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 0068286d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682870: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682874: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682877: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682879: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0068287c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068287e: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682881: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682884: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682886: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068288a: ja 0x682848 */ if ((!fC&&!fZ)) goto L_00682848;
L_0068288c:; BB(0x0068288c);
    /* 0068288c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068288e: je 0x68295d */ if (fZ) goto L_0068295d;
L_00682894:; BB(0x00682894);
    /* 00682894: test al, 0xf0 */ {  u32 a = (u8)r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00682896: jne 0x68295d */ if (!fZ) goto L_0068295d;
L_0068289c:; BB(0x0068289c);
    /* 0068289c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068289e: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006828a1: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006828a5: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006828a8: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006828ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006828af: add ecx, dword ptr [esp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006828b3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006828b7: mov eax, 1 */ r_eax = 0x1u;
    /* 006828bc: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006828be: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006828c2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006828c5: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006828c7: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006828c9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006828cd: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006828d0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006828d2: mov ecx, eax */ r_ecx = r_eax;
    /* 006828d4: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006828d7: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 006828da: movzx ecx, byte ptr [esp + 0x34] */ r_ecx = (u32)R8((u32)(r_esp+0x34u));
    /* 006828df: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006828e3: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006828e6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006828e9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006828eb: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006828ed: jbe 0x682950 */ if ((fC||fZ)) goto L_00682950;
L_006828f3:; BB(0x006828f3);
    /* 006828f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006828f5: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_006828fb:; BB(0x006828fb);
    /* 006828fb: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 006828ff: mov ecx, esi */ r_ecx = r_esi;
    /* 00682901: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682903: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00682907: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068290a: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068290d: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068290f: movzx eax, ch */ r_eax = (u32)(u8)(r_ecx>>8);
    /* 00682912: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682914: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00682918: mov eax, 1 */ r_eax = 0x1u;
    /* 0068291d: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0068291f: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00682923: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682926: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068292a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068292d: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0068292f: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00682931: movzx ecx, word ptr [esp + 0x1a] */ r_ecx = (u32)R16((u32)(r_esp+0x1au));
    /* 00682936: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682938: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 0068293b: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0068293e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682942: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00682945: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00682948: add eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068294c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068294e: ja 0x6828f3 */ if ((!fC&&!fZ)) goto L_006828f3;
L_00682950:; BB(0x00682950);
    /* 00682950: movzx ecx, byte ptr [esp + 0x19] */ r_ecx = (u32)R8((u32)(r_esp+0x19u));
    /* 00682955: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00682959: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0068295b: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0068295d:; BB(0x0068295d);
    /* 0068295d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068295f: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00682962: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682965: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682967: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682969: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0068296d: mov ecx, eax */ r_ecx = r_eax;
    /* 0068296f: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682972: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00682974: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682978: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 0068297b: jne 0x682988 */ if (!fZ) goto L_00682988;
L_0068297d:; BB(0x0068297d);
    /* 0068297d: mov dword ptr [edi], 0x17 */ W32((u32)(r_edi), 0x17u);
    /* 00682983: jmp 0x682dfe */ goto L_00682dfe;
L_00682988:; BB(0x00682988);
    /* 00682988: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068298a: je 0x682997 */ if (fZ) goto L_00682997;
L_0068298c:; BB(0x0068298c);
    /* 0068298c: mov dword ptr [edi], 0xb */ W32((u32)(r_edi), 0xbu);
    /* 00682992: jmp 0x682dfe */ goto L_00682dfe;
L_00682997:; BB(0x00682997);
    /* 00682997: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00682999: je 0x6829ab */ if (fZ) goto L_006829ab;
L_0068299b:; BB(0x0068299b);
    /* 0068299b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0068299f: mov dword ptr [eax + 0x18], 0x6e2c60 */ W32((u32)(r_eax+0x18u), 0x6e2c60u);
    /* 006829a6: jmp 0x682df8 */ goto L_00682df8;
L_006829ab:; BB(0x006829ab);
    /* 006829ab: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006829ae: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 006829b1: mov dword ptr [edi], 0x13 */ W32((u32)(r_edi), 0x13u);
L_006829b7:; BB(0x006829b7);
    /* 006829b7: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 006829ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006829bc: je 0x6829fc */ if (fZ) goto L_006829fc;
L_006829be:; BB(0x006829be);
    /* 006829be: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006829c0: jae 0x6829e6 */ if (!fC) goto L_006829e6;
L_006829c2:; BB(0x006829c2);
    /* 006829c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006829c4: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_006829ca:; BB(0x006829ca);
    /* 006829ca: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 006829ce: mov ecx, esi */ r_ecx = r_esi;
    /* 006829d0: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006829d2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006829d5: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006829d8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006829db: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006829dd: cmp esi, dword ptr [edi + 0x48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006829e0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006829e4: jb 0x6829c2 */ if (fC) goto L_006829c2;
L_006829e6:; BB(0x006829e6);
    /* 006829e6: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 006829e9: mov eax, 1 */ r_eax = 0x1u;
    /* 006829ee: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006829f0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006829f3: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006829f5: add dword ptr [edi + 0x40], eax */ { u32 ad = (u32)(r_edi+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006829f8: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006829fa: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
L_006829fc:; BB(0x006829fc);
    /* 006829fc: mov dword ptr [edi], 0x14 */ W32((u32)(r_edi), 0x14u);
L_00682a02:; BB(0x00682a02);
    /* 00682a02: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 00682a05: mov eax, 1 */ r_eax = 0x1u;
    /* 00682a0a: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682a0c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682a0f: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682a11: mov ecx, eax */ r_ecx = r_eax;
    /* 00682a13: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00682a16: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 00682a19: mov ecx, eax */ r_ecx = r_eax;
    /* 00682a1b: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682a1e: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682a21: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682a23: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682a27: jbe 0x682a74 */ if ((fC||fZ)) goto L_00682a74;
L_00682a29:; BB(0x00682a29);
    /* 00682a29: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_00682a30:; BB(0x00682a30);
    /* 00682a30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682a32: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682a38:; BB(0x00682a38);
    /* 00682a38: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682a3c: mov ecx, esi */ r_ecx = r_esi;
    /* 00682a3e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682a40: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 00682a43: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682a46: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682a49: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682a4b: mov eax, 1 */ r_eax = 0x1u;
    /* 00682a50: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682a52: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 00682a55: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682a58: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682a5c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682a5f: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682a61: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00682a64: mov ecx, eax */ r_ecx = r_eax;
    /* 00682a66: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682a69: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682a6c: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682a6e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682a72: ja 0x682a30 */ if ((!fC&&!fZ)) goto L_00682a30;
L_00682a74:; BB(0x00682a74);
    /* 00682a74: test al, 0xf0 */ {  u32 a = (u8)r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00682a76: jne 0x682b3d */ if (!fZ) goto L_00682b3d;
L_00682a7c:; BB(0x00682a7c);
    /* 00682a7c: mov ecx, eax */ r_ecx = r_eax;
    /* 00682a7e: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682a81: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00682a85: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682a88: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00682a8c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00682a8f: add ecx, dword ptr [esp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682a93: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00682a97: mov eax, 1 */ r_eax = 0x1u;
    /* 00682a9c: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682a9e: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00682aa2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682aa5: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682aa7: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00682aa9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00682aad: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682ab0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682ab2: mov ecx, eax */ r_ecx = r_eax;
    /* 00682ab4: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00682ab7: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 00682aba: movzx ecx, byte ptr [esp + 0x34] */ r_ecx = (u32)R8((u32)(r_esp+0x34u));
    /* 00682abf: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682ac3: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00682ac6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00682ac9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682acb: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682acd: jbe 0x682b30 */ if ((fC||fZ)) goto L_00682b30;
L_00682ad3:; BB(0x00682ad3);
    /* 00682ad3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682ad5: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682adb:; BB(0x00682adb);
    /* 00682adb: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682adf: mov ecx, esi */ r_ecx = r_esi;
    /* 00682ae1: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682ae3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00682ae7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682aea: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682aed: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682aef: movzx eax, ch */ r_eax = (u32)(u8)(r_ecx>>8);
    /* 00682af2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682af4: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00682af8: mov eax, 1 */ r_eax = 0x1u;
    /* 00682afd: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682aff: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00682b03: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682b06: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682b0a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682b0d: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682b0f: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00682b11: movzx ecx, word ptr [esp + 0x1a] */ r_ecx = (u32)R16((u32)(r_esp+0x1au));
    /* 00682b16: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682b18: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 00682b1b: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00682b1e: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682b22: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00682b25: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00682b28: add eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682b2c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682b2e: ja 0x682ad3 */ if ((!fC&&!fZ)) goto L_00682ad3;
L_00682b30:; BB(0x00682b30);
    /* 00682b30: movzx ecx, byte ptr [esp + 0x19] */ r_ecx = (u32)R8((u32)(r_esp+0x19u));
    /* 00682b35: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00682b39: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682b3b: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00682b3d:; BB(0x00682b3d);
    /* 00682b3d: mov ecx, eax */ r_ecx = r_eax;
    /* 00682b3f: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00682b42: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00682b45: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682b47: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682b49: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00682b4b: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00682b4f: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682b53: je 0x682b65 */ if (fZ) goto L_00682b65;
L_00682b55:; BB(0x00682b55);
    /* 00682b55: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682b59: mov dword ptr [eax + 0x18], 0x6e2c48 */ W32((u32)(r_eax+0x18u), 0x6e2c48u);
    /* 00682b60: jmp 0x682df8 */ goto L_00682df8;
L_00682b65:; BB(0x00682b65);
    /* 00682b65: mov ecx, eax */ r_ecx = r_eax;
    /* 00682b67: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682b6a: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682b6d: mov dword ptr [edi + 0x44], ecx */ W32((u32)(r_edi+0x44u), r_ecx);
    /* 00682b70: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 00682b73: mov dword ptr [edi], 0x15 */ W32((u32)(r_edi), 0x15u);
L_00682b79:; BB(0x00682b79);
    /* 00682b79: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00682b7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682b7e: je 0x682bc2 */ if (fZ) goto L_00682bc2;
L_00682b80:; BB(0x00682b80);
    /* 00682b80: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682b82: jae 0x682ba8 */ if (!fC) goto L_00682ba8;
L_00682b84:; BB(0x00682b84);
    /* 00682b84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682b86: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682b8c:; BB(0x00682b8c);
    /* 00682b8c: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682b90: mov ecx, esi */ r_ecx = r_esi;
    /* 00682b92: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682b94: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682b97: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682b9a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682b9d: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682b9f: cmp esi, dword ptr [edi + 0x48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682ba2: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682ba6: jb 0x682b84 */ if (fC) goto L_00682b84;
L_00682ba8:; BB(0x00682ba8);
    /* 00682ba8: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 00682bab: mov eax, 1 */ r_eax = 0x1u;
    /* 00682bb0: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682bb2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682bb5: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682bb7: add dword ptr [edi + 0x44], eax */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682bba: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682bbc: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00682bbe: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00682bc2:; BB(0x00682bc2);
    /* 00682bc2: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00682bc5: sub ecx, dword ptr [esp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682bc9: add ecx, dword ptr [esp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682bcd: cmp dword ptr [edi + 0x44], ecx */ {  u32 a = R32((u32)(r_edi+0x44u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682bd0: jbe 0x682be2 */ if ((fC||fZ)) goto L_00682be2;
L_00682bd2:; BB(0x00682bd2);
    /* 00682bd2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682bd6: mov dword ptr [eax + 0x18], 0x6e2c28 */ W32((u32)(r_eax+0x18u), 0x6e2c28u);
    /* 00682bdd: jmp 0x682df8 */ goto L_00682df8;
L_00682be2:; BB(0x00682be2);
    /* 00682be2: mov dword ptr [edi], 0x16 */ W32((u32)(r_edi), 0x16u);
L_00682be8:; BB(0x00682be8);
    /* 00682be8: cmp dword ptr [esp + 0x1c], 0 */ {  u32 a = R32((u32)(r_esp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682bed: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682bf3:; BB(0x00682bf3);
    /* 00682bf3: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00682bf7: sub ecx, dword ptr [esp + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682bfb: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 00682bfe: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682c00: jbe 0x682c3e */ if ((fC||fZ)) goto L_00682c3e;
L_00682c02:; BB(0x00682c02);
    /* 00682c02: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682c04: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00682c07: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682c09: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682c0d: jbe 0x682c1f */ if ((fC||fZ)) goto L_00682c1f;
L_00682c0f:; BB(0x00682c0f);
    /* 00682c0f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682c11: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00682c14: add ecx, dword ptr [edi + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c17: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682c1b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c1d: jmp 0x682c2b */ goto L_00682c2b;
L_00682c1f:; BB(0x00682c1f);
    /* 00682c1f: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00682c22: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c24: add ecx, dword ptr [edi + 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x30u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c27: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
L_00682c2b:; BB(0x00682c2b);
    /* 00682c2b: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00682c2f: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00682c32: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682c34: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00682c38: jbe 0x682c53 */ if ((fC||fZ)) goto L_00682c53;
L_00682c3a:; BB(0x00682c3a);
    /* 00682c3a: mov eax, ecx */ r_eax = r_ecx;
    /* 00682c3c: jmp 0x682c4f */ goto L_00682c4f;
L_00682c3e:; BB(0x00682c3e);
    /* 00682c3e: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00682c42: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c44: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00682c47: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00682c4b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00682c4f:; BB(0x00682c4f);
    /* 00682c4f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00682c53:; BB(0x00682c53);
    /* 00682c53: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00682c57: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00682c59: jbe 0x682c61 */ if ((fC||fZ)) goto L_00682c61;
L_00682c5b:; BB(0x00682c5b);
    /* 00682c5b: mov eax, ecx */ r_eax = r_ecx;
    /* 00682c5d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_00682c61:; BB(0x00682c61);
    /* 00682c61: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c63: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00682c67: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00682c6b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682c6d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00682c71: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
L_00682c74:; BB(0x00682c74);
    /* 00682c74: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00682c78: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00682c7a: add dword ptr [esp + 0x24], 1 */ { u32 ad = (u32)(r_esp+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682c7f: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00682c81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682c84: sub dword ptr [esp + 0x14], 1 */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00682c89: jne 0x682c74 */ if (!fZ) goto L_00682c74;
L_00682c8b:; BB(0x00682c8b);
    /* 00682c8b: cmp dword ptr [edi + 0x40], 0 */ {  u32 a = R32((u32)(r_edi+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682c8f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00682c93: jne 0x682dfe */ if (!fZ) goto L_00682dfe;
L_00682c99:; BB(0x00682c99);
    /* 00682c99: mov dword ptr [edi], 0x12 */ W32((u32)(r_edi), 0x12u);
    /* 00682c9f: jmp 0x682dfe */ goto L_00682dfe;
L_00682ca4:; BB(0x00682ca4);
    /* 00682ca4: cmp dword ptr [esp + 0x1c], 0 */ {  u32 a = R32((u32)(r_esp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682ca9: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682caf:; BB(0x00682caf);
    /* 00682caf: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00682cb3: mov cl, byte ptr [edi + 0x40] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x40u))) & 0xffu);
    /* 00682cb6: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00682cb8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682cbb: sub dword ptr [esp + 0x1c], 1 */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00682cc0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00682cc4: mov dword ptr [edi], 0x12 */ W32((u32)(r_edi), 0x12u);
    /* 00682cca: jmp 0x682dfe */ goto L_00682dfe;
L_00682ccf:; BB(0x00682ccf);
    /* 00682ccf: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682cd3: je 0x682d9c */ if (fZ) goto L_00682d9c;
L_00682cd9:; BB(0x00682cd9);
    /* 00682cd9: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682cdc: jae 0x682d08 */ if (!fC) goto L_00682d08;
L_00682cde:; BB(0x00682cde);
    /* 00682cde: mov edi, edi */ r_edi = r_edi;
L_00682ce0:; BB(0x00682ce0);
    /* 00682ce0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682ce2: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682ce8:; BB(0x00682ce8);
    /* 00682ce8: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682cec: mov ecx, esi */ r_ecx = r_esi;
    /* 00682cee: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682cf0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682cf3: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682cf6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682cf9: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682cfb: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682cfe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682d02: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682d06: jb 0x682ce0 */ if (fC) goto L_00682ce0;
L_00682d08:; BB(0x00682d08);
    /* 00682d08: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00682d0c: sub eax, dword ptr [esp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682d10: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00682d14: add dword ptr [ecx + 0x14], eax */ { u32 ad = (u32)(r_ecx+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682d17: add dword ptr [edi + 0x1c], eax */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682d1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682d1c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00682d20: je 0x682d51 */ if (fZ) goto L_00682d51;
L_00682d22:; BB(0x00682d22);
    /* 00682d22: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00682d26: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00682d29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682d2a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682d2c: cmp dword ptr [edi + 0x10], 0 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682d30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682d31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682d32: je 0x682d3b */ if (fZ) goto L_00682d3b;
L_00682d34:; BB(0x00682d34);
    /* 00682d34: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x682d39u); f_00683f40();
    /* 00682d39: jmp 0x682d40 */ goto L_00682d40;
L_00682d3b:; BB(0x00682d3b);
    /* 00682d3b: call 0x683a20 */ r_esp -= 4; W32(r_esp, 0x682d40u); f_00683a20();
L_00682d40:; BB(0x00682d40);
    /* 00682d40: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 00682d44: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00682d48: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00682d4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682d4e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_00682d51:; BB(0x00682d51);
    /* 00682d51: cmp dword ptr [edi + 0x10], 0 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682d55: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00682d59: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00682d5d: mov eax, ebx */ r_eax = r_ebx;
    /* 00682d5f: jne 0x682d7f */ if (!fZ) goto L_00682d7f;
L_00682d61:; BB(0x00682d61);
    /* 00682d61: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682d66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00682d68: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00682d6b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682d6d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00682d6f: mov ch, byte ptr [esp + 0x1a] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_esp+0x1au))) & 0xffu) << 8);
    /* 00682d73: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682d76: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00682d78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00682d7a: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00682d7d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00682d7f:; BB(0x00682d7f);
    /* 00682d7f: cmp eax, dword ptr [edi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682d82: je 0x682d94 */ if (fZ) goto L_00682d94;
L_00682d84:; BB(0x00682d84);
    /* 00682d84: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682d88: mov dword ptr [eax + 0x18], 0x6e2c10 */ W32((u32)(r_eax+0x18u), 0x6e2c10u);
    /* 00682d8f: jmp 0x682df8 */ goto L_00682df8;
L_00682d94:; BB(0x00682d94);
    /* 00682d94: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00682d96: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682d9a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00682d9c:; BB(0x00682d9c);
    /* 00682d9c: mov dword ptr [edi], 0x19 */ W32((u32)(r_edi), 0x19u);
L_00682da2:; BB(0x00682da2);
    /* 00682da2: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682da6: je 0x682e44 */ if (fZ) goto L_00682e44;
L_00682dac:; BB(0x00682dac);
    /* 00682dac: cmp dword ptr [edi + 0x10], 0 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682db0: je 0x682e44 */ if (fZ) goto L_00682e44;
L_00682db6:; BB(0x00682db6);
    /* 00682db6: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682db9: jae 0x682de8 */ if (!fC) goto L_00682de8;
L_00682dbb:; BB(0x00682dbb);
    /* 00682dbb: jmp 0x682dc0 */ goto L_00682dc0;
L_00682dc0:; BB(0x00682dc0);
    /* 00682dc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00682dc2: je 0x682e5c */ if (fZ) goto L_00682e5c;
L_00682dc8:; BB(0x00682dc8);
    /* 00682dc8: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00682dcc: mov ecx, esi */ r_ecx = r_esi;
    /* 00682dce: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00682dd0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00682dd3: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682dd6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00682dd9: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682ddb: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00682dde: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00682de2: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00682de6: jb 0x682dc0 */ if (fC) goto L_00682dc0;
L_00682de8:; BB(0x00682de8);
    /* 00682de8: cmp ebx, dword ptr [edi + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682deb: je 0x682e40 */ if (fZ) goto L_00682e40;
L_00682ded:; BB(0x00682ded);
    /* 00682ded: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00682df1: mov dword ptr [ecx + 0x18], 0x6e2bf8 */ W32((u32)(r_ecx+0x18u), 0x6e2bf8u);
L_00682df8:; BB(0x00682df8);
    /* 00682df8: mov dword ptr [edi], 0x1b */ W32((u32)(r_edi), 0x1bu);
L_00682dfe:; BB(0x00682dfe);
    /* 00682dfe: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00682e00: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00682e03: jbe 0x681a80 */ if ((fC||fZ)) goto L_00681a80;
L_00682e09:; BB(0x00682e09);
    /* 00682e09: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
L_00682e0e:; BB(0x00682e0e);
    /* 00682e0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00682e0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682e10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682e11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682e12: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682e15: ret  */ FN_RET(0x00681a00); r_esp += 4; return;
L_00682e16:; BB(0x00682e16);
    /* 00682e16: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682e1a: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00682e1e: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00682e21: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00682e25: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 00682e27: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00682e2a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00682e2d: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 00682e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00682e31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682e32: mov dword ptr [edi + 0x38], ebx */ W32((u32)(r_edi+0x38u), r_ebx);
    /* 00682e35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682e36: mov eax, 2 */ r_eax = 0x2u;
    /* 00682e3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682e3c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682e3f: ret  */ FN_RET(0x00681a00); r_esp += 4; return;
L_00682e40:; BB(0x00682e40);
    /* 00682e40: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00682e42: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00682e44:; BB(0x00682e44);
    /* 00682e44: mov dword ptr [edi], 0x1a */ W32((u32)(r_edi), 0x1au);
L_00682e4a:; BB(0x00682e4a);
    /* 00682e4a: mov dword ptr [esp + 0x30], 1 */ W32((u32)(r_esp+0x30u), 0x1u);
    /* 00682e52: jmp 0x682e5c */ goto L_00682e5c;
L_00682e54:; BB(0x00682e54);
    /* 00682e54: mov dword ptr [esp + 0x30], 0xfffffffd */ W32((u32)(r_esp+0x30u), 0xfffffffdu);
L_00682e5c:; BB(0x00682e5c);
    /* 00682e5c: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00682e60: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00682e64: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00682e67: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00682e6b: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00682e6e: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 00682e70: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00682e73: cmp dword ptr [edi + 0x28], 0 */ {  u32 a = R32((u32)(r_edi+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682e77: mov dword ptr [edi + 0x38], ebx */ W32((u32)(r_edi+0x38u), r_ebx);
    /* 00682e7a: mov dword ptr [edi + 0x3c], esi */ W32((u32)(r_edi+0x3cu), r_esi);
    /* 00682e7d: jne 0x682e8d */ if (!fZ) goto L_00682e8d;
L_00682e7f:; BB(0x00682e7f);
    /* 00682e7f: cmp dword ptr [edi], 0x18 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00682e82: jge 0x682eb1 */ if ((fS==fO)) goto L_00682eb1;
L_00682e84:; BB(0x00682e84);
    /* 00682e84: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00682e88: cmp edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682e8b: je 0x682eb1 */ if (fZ) goto L_00682eb1;
L_00682e8d:; BB(0x00682e8d);
    /* 00682e8d: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00682e91: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00682e95: call 0x681910 */ r_esp -= 4; W32(r_esp, 0x682e9au); f_00681910();
    /* 00682e9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682e9c: je 0x682eb1 */ if (fZ) goto L_00682eb1;
L_00682e9e:; BB(0x00682e9e);
    /* 00682e9e: mov dword ptr [edi], 0x1c */ W32((u32)(r_edi), 0x1cu);
L_00682ea4:; BB(0x00682ea4);
    /* 00682ea4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00682ea5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682ea6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682ea7: mov eax, 0xfffffffc */ r_eax = 0xfffffffcu;
    /* 00682eac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682ead: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682eb0: ret  */ FN_RET(0x00681a00); r_esp += 4; return;
L_00682eb1:; BB(0x00682eb1);
    /* 00682eb1: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 00682eb5: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00682eb9: sub ebp, dword ptr [esi + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00682ebc: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00682ec0: sub ebx, dword ptr [esi + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00682ec3: add dword ptr [esi + 8], ebp */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682ec6: add dword ptr [esi + 0x14], ebx */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682ec9: add dword ptr [edi + 0x1c], ebx */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00682ecc: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682ed0: je 0x682f06 */ if (fZ) goto L_00682f06;
L_00682ed2:; BB(0x00682ed2);
    /* 00682ed2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682ed4: je 0x682f06 */ if (fZ) goto L_00682f06;
L_00682ed6:; BB(0x00682ed6);
    /* 00682ed6: cmp dword ptr [edi + 0x10], 0 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682eda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00682edb: je 0x682eee */ if (fZ) goto L_00682eee;
L_00682edd:; BB(0x00682edd);
    /* 00682edd: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00682ee0: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00682ee3: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00682ee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682ee6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682ee7: call 0x683f40 */ r_esp -= 4; W32(r_esp, 0x682eecu); f_00683f40();
    /* 00682eec: jmp 0x682efd */ goto L_00682efd;
L_00682eee:; BB(0x00682eee);
    /* 00682eee: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00682ef1: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 00682ef4: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682ef7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00682ef8: call 0x683a20 */ r_esp -= 4; W32(r_esp, 0x682efdu); f_00683a20();
L_00682efd:; BB(0x00682efd);
    /* 00682efd: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00682f00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682f03: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00682f06:; BB(0x00682f06);
    /* 00682f06: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00682f09: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00682f0b: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00682f0d: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00682f10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00682f12: cmp dword ptr [edi], 0xb */ {  u32 a = R32((u32)(r_edi)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f15: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00682f18: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00682f1b: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00682f20: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00682f22: add edx, dword ptr [edi + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00682f25: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f27: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 00682f2a: jne 0x682f30 */ if (!fZ) goto L_00682f30;
L_00682f2c:; BB(0x00682f2c);
    /* 00682f2c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f2e: je 0x682f37 */ if (fZ) goto L_00682f37;
L_00682f30:; BB(0x00682f30);
    /* 00682f30: cmp dword ptr [esp + 0x44], 4 */ {  u32 a = R32((u32)(r_esp+0x44u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f35: jne 0x682f50 */ if (!fZ) goto L_00682f50;
L_00682f37:; BB(0x00682f37);
    /* 00682f37: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00682f3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f3d: jne 0x682e0e */ if (!fZ) goto L_00682e0e;
L_00682f43:; BB(0x00682f43);
    /* 00682f43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00682f44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682f45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682f46: mov eax, 0xfffffffb */ r_eax = 0xfffffffbu;
    /* 00682f4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682f4c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682f4f: ret  */ FN_RET(0x00681a00); r_esp += 4; return;
L_00682f50:; BB(0x00682f50);
    /* 00682f50: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00682f54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00682f55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682f56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682f57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682f58: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682f5b: ret  */ FN_RET(0x00681a00); r_esp += 4; return;
L_00682f5c:; BB(0x00682f5c);
    /* 00682f5c: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00682f61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682f62: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682f65: ret  */ FN_RET(0x00681a00); r_esp += 4; return;
}

