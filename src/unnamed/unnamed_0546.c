#include "protos.h"

void f_00546110(void) /* sub_546110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546110);
    /* 00546110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546111: mov ebp, esp */ r_ebp = r_esp;
    /* 00546113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546116: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00546119: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054611c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00546122: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546125: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 0054612c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546133: jmp 0x54613e */ goto L_0054613e;
L_00546135:; BB(0x00546135);
    /* 00546135: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546138: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054613b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054613e:; BB(0x0054613e);
    /* 0054613e: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00546142: jge 0x546154 */ if ((fS==fO)) goto L_00546154;
L_00546144:; BB(0x00546144);
    /* 00546144: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546147: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054614a: mov dword ptr [ecx + eax*4 + 4], 0 */ W32((u32)(r_ecx+r_eax*4+0x4u), 0x0u);
    /* 00546152: jmp 0x546135 */ goto L_00546135;
L_00546154:; BB(0x00546154);
    /* 00546154: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546157: mov esp, ebp */ r_esp = r_ebp;
    /* 00546159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054615a: ret  */ FN_RET(0x00546110); r_esp += 4; return;
}

void f_00546160(void) /* sub_546160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546160);
    /* 00546160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546161: mov ebp, esp */ r_ebp = r_esp;
    /* 00546163: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546166: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00546169: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054616c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054616e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00546171: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546174: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00546177: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054617b: je 0x546190 */ if (fZ) goto L_00546190;
L_0054617d:; BB(0x0054617d);
    /* 0054617d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054617f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546182: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546184: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546187: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546189: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54618bu); call_ind(t); }
    /* 0054618b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054618e: jmp 0x546197 */ goto L_00546197;
L_00546190:; BB(0x00546190);
    /* 00546190: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00546197:; BB(0x00546197);
    /* 00546197: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054619e: jmp 0x5461a9 */ goto L_005461a9;
L_005461a0:; BB(0x005461a0);
    /* 005461a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005461a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005461a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005461a9:; BB(0x005461a9);
    /* 005461a9: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005461ad: jge 0x5461e4 */ if ((fS==fO)) goto L_005461e4;
L_005461af:; BB(0x005461af);
    /* 005461af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005461b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005461b5: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005461b9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005461bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005461bf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005461c2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005461c6: je 0x5461db */ if (fZ) goto L_005461db;
L_005461c8:; BB(0x005461c8);
    /* 005461c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005461ca: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005461cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005461cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005461d2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005461d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5461d6u); call_ind(t); }
    /* 005461d6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005461d9: jmp 0x5461e2 */ goto L_005461e2;
L_005461db:; BB(0x005461db);
    /* 005461db: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005461e2:; BB(0x005461e2);
    /* 005461e2: jmp 0x5461a0 */ goto L_005461a0;
L_005461e4:; BB(0x005461e4);
    /* 005461e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005461e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005461e7: ret  */ FN_RET(0x00546160); r_esp += 4; return;
}

void f_005461f0(void) /* sub_5461F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005461f0);
    /* 005461f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005461f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005461f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005461f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005461f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005461fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005461fd: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00546200: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546203: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00546206: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00546209: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054620c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0054620f: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00546212: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546215: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 00546218: mov byte ptr [eax + 0x38], cl */ W8((u32)(r_eax+0x38u), (u8)r_ecx);
    /* 0054621b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0054621e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054621f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546222: call 0x546580 */ r_esp -= 4; W32(r_esp, 0x546227u); f_00546580();
    /* 00546227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054622a: call 0x546240 */ r_esp -= 4; W32(r_esp, 0x54622fu); f_00546240();
    /* 0054622f: mov esp, ebp */ r_esp = r_ebp;
    /* 00546231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546232: ret 0x14 */ FN_RET(0x005461f0); r_esp += 24; return;
}

void f_00546240(void) /* sub_546240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546240);
    /* 00546240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546241: mov ebp, esp */ r_ebp = r_esp;
    /* 00546243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546245: push 0x6a50bd */ { u32 v = 0x6a50bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054624a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546251: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546254: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546259: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054625b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054625c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054625f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546265: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00546268: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054626f: jmp 0x54627a */ goto L_0054627a;
L_00546271:; BB(0x00546271);
    /* 00546271: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546274: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00546277: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0054627a:; BB(0x0054627a);
    /* 0054627a: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054627e: jge 0x5462e9 */ if ((fS==fO)) goto L_005462e9;
L_00546280:; BB(0x00546280);
    /* 00546280: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00546285: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54628au); f_00686d82();
    /* 0054628a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054628d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00546290: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546297: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054629b: je 0x5462aa */ if (fZ) goto L_005462aa;
L_0054629d:; BB(0x0054629d);
    /* 0054629d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005462a0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5462a5u); f_005eaaf0();
    /* 005462a5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005462a8: jmp 0x5462b1 */ goto L_005462b1;
L_005462aa:; BB(0x005462aa);
    /* 005462aa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005462b1:; BB(0x005462b1);
    /* 005462b1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005462b4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005462b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005462be: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005462c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005462c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005462c7: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005462cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005462cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005462cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005462d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005462d3: push 0x311681 */ { u32 v = 0x311681u; r_esp -= 4; W32(r_esp, v); }
    /* 005462d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005462db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005462de: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005462e2: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5462e7u); f_005eae80();
    /* 005462e7: jmp 0x546271 */ goto L_00546271;
L_005462e9:; BB(0x005462e9);
    /* 005462e9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005462ee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5462f3u); f_00686d82();
    /* 005462f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005462f6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005462f9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00546300: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546304: je 0x546313 */ if (fZ) goto L_00546313;
L_00546306:; BB(0x00546306);
    /* 00546306: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546309: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x54630eu); f_005eaaf0();
    /* 0054630e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00546311: jmp 0x54631a */ goto L_0054631a;
L_00546313:; BB(0x00546313);
    /* 00546313: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0054631a:; BB(0x0054631a);
    /* 0054631a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054631d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00546320: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546327: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054632a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054632d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0054632f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546331: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546337: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054633a: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0054633d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054633e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00546341: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00546343: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x546348u); f_005eae80();
    /* 00546348: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054634b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546352: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546353: mov esp, ebp */ r_esp = r_ebp;
    /* 00546355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546356: ret  */ FN_RET(0x00546240); r_esp += 4; return;
}

void f_00546520(void) /* sub_546520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546520);
    /* 00546520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546521: mov ebp, esp */ r_ebp = r_esp;
    /* 00546523: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546526: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00546529: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054652c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054652e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546531: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546533: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546535: mov ecx, eax */ r_ecx = r_eax;
    /* 00546537: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0054653a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54653cu); call_ind(t); }
    /* 0054653c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546543: jmp 0x54654e */ goto L_0054654e;
L_00546545:; BB(0x00546545);
    /* 00546545: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546548: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054654b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054654e:; BB(0x0054654e);
    /* 0054654e: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00546552: jge 0x546573 */ if ((fS==fO)) goto L_00546573;
L_00546554:; BB(0x00546554);
    /* 00546554: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546557: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054655a: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0054655e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546561: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546564: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00546568: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054656a: mov ecx, edx */ r_ecx = r_edx;
    /* 0054656c: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0054656f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x546571u); call_ind(t); }
    /* 00546571: jmp 0x546545 */ goto L_00546545;
L_00546573:; BB(0x00546573);
    /* 00546573: mov esp, ebp */ r_esp = r_ebp;
    /* 00546575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546576: ret  */ FN_RET(0x00546520); r_esp += 4; return;
}

void f_005465a0(void) /* sub_5465A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005465a0);
    /* 005465a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005465a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005465a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005465a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005465a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005465b0: jmp 0x5465bb */ goto L_005465bb;
L_005465b2:; BB(0x005465b2);
    /* 005465b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005465b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005465b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005465bb:; BB(0x005465bb);
    /* 005465bb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005465bf: jge 0x5465d0 */ if ((fS==fO)) goto L_005465d0;
L_005465c1:; BB(0x005465c1);
    /* 005465c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005465c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005465c7: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
    /* 005465ce: jmp 0x5465b2 */ goto L_005465b2;
L_005465d0:; BB(0x005465d0);
    /* 005465d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005465d3: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005465da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005465dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005465df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005465e0: ret  */ FN_RET(0x005465a0); r_esp += 4; return;
}

void f_005465f0(void) /* sub_5465F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005465f0);
    /* 005465f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005465f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005465f3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005465f6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005465f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546600: jmp 0x54660b */ goto L_0054660b;
L_00546602:; BB(0x00546602);
    /* 00546602: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546605: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00546608: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054660b:; BB(0x0054660b);
    /* 0054660b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054660f: jge 0x546652 */ if ((fS==fO)) goto L_00546652;
L_00546611:; BB(0x00546611);
    /* 00546611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546614: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546617: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0054661a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054661d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546620: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00546623: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546627: je 0x54663c */ if (fZ) goto L_0054663c;
L_00546629:; BB(0x00546629);
    /* 00546629: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054662b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054662e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546630: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546633: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546635: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x546637u); call_ind(t); }
    /* 00546637: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054663a: jmp 0x546643 */ goto L_00546643;
L_0054663c:; BB(0x0054663c);
    /* 0054663c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00546643:; BB(0x00546643);
    /* 00546643: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546646: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546649: mov dword ptr [ecx + eax*4], 0 */ W32((u32)(r_ecx+r_eax*4), 0x0u);
    /* 00546650: jmp 0x546602 */ goto L_00546602;
L_00546652:; BB(0x00546652);
    /* 00546652: mov esp, ebp */ r_esp = r_ebp;
    /* 00546654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546655: ret  */ FN_RET(0x005465f0); r_esp += 4; return;
}

void f_00546660(void) /* sub_546660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546660);
    /* 00546660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546661: mov ebp, esp */ r_ebp = r_esp;
    /* 00546663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546665: push 0x6a50ee */ { u32 v = 0x6a50eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054666a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546671: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546674: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546679: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054667b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054667c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054667f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546685: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00546688: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0054668d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x546692u); f_00686d82();
    /* 00546692: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546695: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00546698: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054669f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005466a3: je 0x5466b2 */ if (fZ) goto L_005466b2;
L_005466a5:; BB(0x005466a5);
    /* 005466a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005466a8: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5466adu); f_005eaaf0();
    /* 005466ad: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005466b0: jmp 0x5466b9 */ goto L_005466b9;
L_005466b2:; BB(0x005466b2);
    /* 005466b2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005466b9:; BB(0x005466b9);
    /* 005466b9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005466bc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005466bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005466c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005466c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005466cc: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005466ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005466d0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005466d2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005466d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005466d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005466d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005466da: push 0x311681 */ { u32 v = 0x311681u; r_esp -= 4; W32(r_esp, v); }
    /* 005466df: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005466e2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005466e4: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5466e9u); f_005eae80();
    /* 005466e9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005466ee: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5466f3u); f_00686d82();
    /* 005466f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005466f6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005466f9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00546700: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546704: je 0x546713 */ if (fZ) goto L_00546713;
L_00546706:; BB(0x00546706);
    /* 00546706: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00546709: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x54670eu); f_005eaaf0();
    /* 0054670e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00546711: jmp 0x54671a */ goto L_0054671a;
L_00546713:; BB(0x00546713);
    /* 00546713: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0054671a:; BB(0x0054671a);
    /* 0054671a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054671d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00546720: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546727: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054672a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054672d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00546730: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546732: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00546734: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00546737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546738: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0054673b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054673c: push 0x311681 */ { u32 v = 0x311681u; r_esp -= 4; W32(r_esp, v); }
    /* 00546741: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546744: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00546747: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x54674cu); f_005eae80();
    /* 0054674c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054674f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546756: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546757: mov esp, ebp */ r_esp = r_ebp;
    /* 00546759: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054675a: ret 0x10 */ FN_RET(0x00546660); r_esp += 20; return;
}

void f_00546760(void) /* sub_546760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546760);
    /* 00546760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546761: mov ebp, esp */ r_ebp = r_esp;
    /* 00546763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546767: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054676a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054676b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054676e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054676f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546772: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546774: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546777: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00546779: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054677b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0054677e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546780u); call_ind(t); }
    /* 00546780: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00546783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546784: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00546787: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546788: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054678b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054678e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546791: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00546794: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546796: mov ecx, eax */ r_ecx = r_eax;
    /* 00546798: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0054679b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54679du); call_ind(t); }
    /* 0054679d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054679f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005467a0: ret 0x10 */ FN_RET(0x00546760); r_esp += 20; return;
}

void f_005467b0(void) /* sub_5467B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005467b0);
    /* 005467b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005467b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005467b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005467b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005467b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005467bc: cmp dword ptr [eax + 8], 9 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005467c0: jg 0x546800 */ if ((!fZ&&fS==fO)) goto L_00546800;
L_005467c2:; BB(0x005467c2);
    /* 005467c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005467c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005467c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005467ca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005467cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005467ce: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005467d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5467d3u); call_ind(t); }
    /* 005467d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005467d6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005467d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005467da: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005467e0: call 0x545a80 */ r_esp -= 4; W32(r_esp, 0x5467e5u); f_00545a80();
    /* 005467e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005467e6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005467e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005467ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005467ef: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005467f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005467f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005467f6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005467fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5467feu); call_ind(t); }
    /* 005467fe: jmp 0x54687f */ goto L_0054687f;
L_00546800:; BB(0x00546800);
    /* 00546800: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546803: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00546806: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00546807: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0054680c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0054680c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0054680c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0054680e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00546811: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546814: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00546817: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054681a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0054681d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054681f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00546822: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546826: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054682c: call 0x545a80 */ r_esp -= 4; W32(r_esp, 0x546831u); f_00545a80();
    /* 00546831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546832: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546835: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00546837: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054683a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054683c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054683e: mov ecx, eax */ r_ecx = r_eax;
    /* 00546840: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00546846: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546848u); call_ind(t); }
    /* 00546848: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054684b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054684c: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00546852: call 0x545a80 */ r_esp -= 4; W32(r_esp, 0x546857u); f_00545a80();
    /* 00546857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546858: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054685b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0054685e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546861: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00546864: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546866: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0054686c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54686eu); call_ind(t); }
    /* 0054686e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546871: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546873: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546876: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00546878: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054687a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0054687d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54687fu); call_ind(t); }
L_0054687f:; BB(0x0054687f);
    /* 0054687f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546882: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00546885: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546888: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054688b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054688d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00546890: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546892u); call_ind(t); }
    /* 00546892: mov esp, ebp */ r_esp = r_ebp;
    /* 00546894: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546895: ret  */ FN_RET(0x005467b0); r_esp += 4; return;
}

void f_005468a0(void) /* sub_5468A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005468a0);
    /* 005468a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005468a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005468a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005468a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005468a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005468b0: jmp 0x5468bb */ goto L_005468bb;
L_005468b2:; BB(0x005468b2);
    /* 005468b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005468b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005468b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005468bb:; BB(0x005468bb);
    /* 005468bb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005468bf: jge 0x5468dc */ if ((fS==fO)) goto L_005468dc;
L_005468c1:; BB(0x005468c1);
    /* 005468c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005468c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005468c7: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005468ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005468cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005468d0: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005468d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005468d5: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005468d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5468dau); call_ind(t); }
    /* 005468da: jmp 0x5468b2 */ goto L_005468b2;
L_005468dc:; BB(0x005468dc);
    /* 005468dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005468de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005468df: ret  */ FN_RET(0x005468a0); r_esp += 4; return;
}

