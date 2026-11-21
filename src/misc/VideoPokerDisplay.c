#include "protos.h"

void f_00552720(void) /* VideoPokerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552720);
    /* 00552720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552721: mov ebp, esp */ r_ebp = r_esp;
    /* 00552723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552726: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00552729: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055272c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x552731u); f_005e9e20();
    /* 00552731: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552734: mov dword ptr [eax], 0x6c84d8 */ W32((u32)(r_eax), 0x6c84d8u);
    /* 0055273a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00552741: jmp 0x55274c */ goto L_0055274c;
L_00552743:; BB(0x00552743);
    /* 00552743: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552746: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00552749: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055274c:; BB(0x0055274c);
    /* 0055274c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552750: jge 0x55277e */ if ((fS==fO)) goto L_0055277e;
L_00552752:; BB(0x00552752);
    /* 00552752: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552755: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552758: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00552760: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552763: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552766: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
    /* 0055276e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552774: mov dword ptr [ecx + eax*4 + 0x4c], 0 */ W32((u32)(r_ecx+r_eax*4+0x4cu), 0x0u);
    /* 0055277c: jmp 0x552743 */ goto L_00552743;
L_0055277e:; BB(0x0055277e);
    /* 0055277e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552781: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
    /* 00552788: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055278b: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 00552792: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552795: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 0055279c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055279f: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 005527a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005527a9: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 005527b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005527b3: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 005527ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005527bd: mov dword ptr [edx + 0x90], 0 */ W32((u32)(r_edx+0x90u), 0x0u);
    /* 005527c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005527ce: jmp 0x5527d9 */ goto L_005527d9;
L_005527d0:; BB(0x005527d0);
    /* 005527d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005527d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005527d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005527d9:; BB(0x005527d9);
    /* 005527d9: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005527dd: jge 0x5527ef */ if ((fS==fO)) goto L_005527ef;
L_005527df:; BB(0x005527df);
    /* 005527df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005527e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005527e5: mov dword ptr [edx + ecx*4 + 0x78], 0 */ W32((u32)(r_edx+r_ecx*4+0x78u), 0x0u);
    /* 005527ed: jmp 0x5527d0 */ goto L_005527d0;
L_005527ef:; BB(0x005527ef);
    /* 005527ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005527f2: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 005527fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005527ff: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 00552809: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055280c: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00552816: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552819: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 00552823: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552826: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 00552830: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552833: mov esp, ebp */ r_esp = r_ebp;
    /* 00552835: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552836: ret  */ FN_RET(0x00552720); r_esp += 4; return;
}

void f_00552840(void) /* VideoPokerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552840);
    /* 00552840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552841: mov ebp, esp */ r_ebp = r_esp;
    /* 00552843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00552845: push 0x6a53bc */ { u32 v = 0x6a53bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055284a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00552850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552851: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552857: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055285c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055285e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055285f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00552862: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00552868: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0055286e: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552874: mov dword ptr [eax], 0x6c84d8 */ W32((u32)(r_eax), 0x6c84d8u);
    /* 0055287a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00552881: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00552888: jmp 0x552893 */ goto L_00552893;
L_0055288a:; BB(0x0055288a);
    /* 0055288a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055288d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00552890: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00552893:; BB(0x00552893);
    /* 00552893: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552897: jge 0x552966 */ if ((fS==fO)) goto L_00552966;
L_0055289d:; BB(0x0055289d);
    /* 0055289d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005528a0: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005528a6: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005528aa: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005528ad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005528b0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005528b3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005528b7: je 0x5528cf */ if (fZ) goto L_005528cf;
L_005528b9:; BB(0x005528b9);
    /* 005528b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005528bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005528be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005528c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005528c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005528c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5528c7u); call_ind(t); }
    /* 005528c7: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005528cd: jmp 0x5528d9 */ goto L_005528d9;
L_005528cf:; BB(0x005528cf);
    /* 005528cf: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005528d9:; BB(0x005528d9);
    /* 005528d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005528dc: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005528e2: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005528e6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005528e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005528ec: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005528ef: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005528f3: je 0x55290b */ if (fZ) goto L_0055290b;
L_005528f5:; BB(0x005528f5);
    /* 005528f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005528f7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005528fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005528fc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005528ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00552901: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x552903u); call_ind(t); }
    /* 00552903: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00552909: jmp 0x552915 */ goto L_00552915;
L_0055290b:; BB(0x0055290b);
    /* 0055290b: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00552915:; BB(0x00552915);
    /* 00552915: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00552918: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0055291e: cmp dword ptr [ecx + eax*4 + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552923: je 0x552961 */ if (fZ) goto L_00552961;
L_00552925:; BB(0x00552925);
    /* 00552925: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00552928: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0055292e: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 00552932: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00552935: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00552938: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0055293b: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055293f: je 0x552957 */ if (fZ) goto L_00552957;
L_00552941:; BB(0x00552941);
    /* 00552941: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552943: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00552946: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00552948: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055294b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055294d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55294fu); call_ind(t); }
    /* 0055294f: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00552955: jmp 0x552961 */ goto L_00552961;
L_00552957:; BB(0x00552957);
    /* 00552957: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_00552961:; BB(0x00552961);
    /* 00552961: jmp 0x55288a */ goto L_0055288a;
L_00552966:; BB(0x00552966);
    /* 00552966: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0055296c: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0055296f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00552972: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00552975: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00552978: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055297c: je 0x552994 */ if (fZ) goto L_00552994;
L_0055297e:; BB(0x0055297e);
    /* 0055297e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552980: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00552983: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552985: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00552988: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055298a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55298cu); call_ind(t); }
    /* 0055298c: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00552992: jmp 0x55299e */ goto L_0055299e;
L_00552994:; BB(0x00552994);
    /* 00552994: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0055299e:; BB(0x0055299e);
    /* 0055299e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005529a4: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005529a7: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005529aa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005529ad: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005529b0: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005529b4: je 0x5529cc */ if (fZ) goto L_005529cc;
L_005529b6:; BB(0x005529b6);
    /* 005529b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005529b8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005529bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005529bd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005529c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005529c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5529c4u); call_ind(t); }
    /* 005529c4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005529ca: jmp 0x5529d6 */ goto L_005529d6;
L_005529cc:; BB(0x005529cc);
    /* 005529cc: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005529d6:; BB(0x005529d6);
    /* 005529d6: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005529dc: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 005529df: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005529e2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005529e5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005529e8: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005529ec: je 0x552a04 */ if (fZ) goto L_00552a04;
L_005529ee:; BB(0x005529ee);
    /* 005529ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005529f0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005529f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005529f5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005529f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005529fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5529fcu); call_ind(t); }
    /* 005529fc: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00552a02: jmp 0x552a0e */ goto L_00552a0e;
L_00552a04:; BB(0x00552a04);
    /* 00552a04: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00552a0e:; BB(0x00552a0e);
    /* 00552a0e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552a14: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00552a17: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00552a1a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00552a1d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00552a20: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552a24: je 0x552a3c */ if (fZ) goto L_00552a3c;
L_00552a26:; BB(0x00552a26);
    /* 00552a26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552a28: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00552a2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552a2d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00552a30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552a32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552a34u); call_ind(t); }
    /* 00552a34: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00552a3a: jmp 0x552a46 */ goto L_00552a46;
L_00552a3c:; BB(0x00552a3c);
    /* 00552a3c: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00552a46:; BB(0x00552a46);
    /* 00552a46: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552a4c: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00552a4f: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00552a52: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00552a55: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00552a58: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552a5c: je 0x552a74 */ if (fZ) goto L_00552a74;
L_00552a5e:; BB(0x00552a5e);
    /* 00552a5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552a60: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00552a63: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552a65: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00552a68: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552a6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552a6cu); call_ind(t); }
    /* 00552a6c: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00552a72: jmp 0x552a7e */ goto L_00552a7e;
L_00552a74:; BB(0x00552a74);
    /* 00552a74: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00552a7e:; BB(0x00552a7e);
    /* 00552a7e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552a84: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00552a87: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00552a8a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00552a8d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00552a90: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552a94: je 0x552aac */ if (fZ) goto L_00552aac;
L_00552a96:; BB(0x00552a96);
    /* 00552a96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552a98: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00552a9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552a9d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00552aa0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552aa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552aa4u); call_ind(t); }
    /* 00552aa4: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00552aaa: jmp 0x552ab6 */ goto L_00552ab6;
L_00552aac:; BB(0x00552aac);
    /* 00552aac: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00552ab6:; BB(0x00552ab6);
    /* 00552ab6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00552abd: jmp 0x552ac8 */ goto L_00552ac8;
L_00552abf:; BB(0x00552abf);
    /* 00552abf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00552ac2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00552ac5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00552ac8:; BB(0x00552ac8);
    /* 00552ac8: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552acc: jge 0x552b0c */ if ((fS==fO)) goto L_00552b0c;
L_00552ace:; BB(0x00552ace);
    /* 00552ace: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00552ad1: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552ad7: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00552adb: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00552ade: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00552ae1: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00552ae4: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552ae8: je 0x552b00 */ if (fZ) goto L_00552b00;
L_00552aea:; BB(0x00552aea);
    /* 00552aea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552aec: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00552aef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00552af1: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00552af4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552af6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552af8u); call_ind(t); }
    /* 00552af8: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00552afe: jmp 0x552b0a */ goto L_00552b0a;
L_00552b00:; BB(0x00552b00);
    /* 00552b00: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00552b0a:; BB(0x00552b0a);
    /* 00552b0a: jmp 0x552abf */ goto L_00552abf;
L_00552b0c:; BB(0x00552b0c);
    /* 00552b0c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552b12: cmp dword ptr [ecx + 0x84], 0 */ {  u32 a = R32((u32)(r_ecx+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552b19: je 0x552b56 */ if (fZ) goto L_00552b56;
L_00552b1b:; BB(0x00552b1b);
    /* 00552b1b: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552b21: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00552b27: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00552b2a: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00552b2d: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00552b30: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552b34: je 0x552b4c */ if (fZ) goto L_00552b4c;
L_00552b36:; BB(0x00552b36);
    /* 00552b36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552b38: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00552b3b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552b3d: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00552b40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00552b42: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x552b44u); call_ind(t); }
    /* 00552b44: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00552b4a: jmp 0x552b56 */ goto L_00552b56;
L_00552b4c:; BB(0x00552b4c);
    /* 00552b4c: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00552b56:; BB(0x00552b56);
    /* 00552b56: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552b5c: cmp dword ptr [eax + 0x88], 0 */ {  u32 a = R32((u32)(r_eax+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552b63: je 0x552ba0 */ if (fZ) goto L_00552ba0;
L_00552b65:; BB(0x00552b65);
    /* 00552b65: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552b6b: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00552b71: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00552b74: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00552b77: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00552b7a: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552b7e: je 0x552b96 */ if (fZ) goto L_00552b96;
L_00552b80:; BB(0x00552b80);
    /* 00552b80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552b82: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00552b85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552b87: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00552b8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552b8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552b8eu); call_ind(t); }
    /* 00552b8e: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00552b94: jmp 0x552ba0 */ goto L_00552ba0;
L_00552b96:; BB(0x00552b96);
    /* 00552b96: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00552ba0:; BB(0x00552ba0);
    /* 00552ba0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552ba6: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552bad: je 0x552bea */ if (fZ) goto L_00552bea;
L_00552baf:; BB(0x00552baf);
    /* 00552baf: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552bb5: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00552bbb: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00552bbe: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00552bc1: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00552bc4: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552bc8: je 0x552be0 */ if (fZ) goto L_00552be0;
L_00552bca:; BB(0x00552bca);
    /* 00552bca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552bcc: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00552bcf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552bd1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00552bd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00552bd6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x552bd8u); call_ind(t); }
    /* 00552bd8: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00552bde: jmp 0x552bea */ goto L_00552bea;
L_00552be0:; BB(0x00552be0);
    /* 00552be0: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00552bea:; BB(0x00552bea);
    /* 00552bea: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552bf0: cmp dword ptr [eax + 0x90], 0 */ {  u32 a = R32((u32)(r_eax+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552bf7: je 0x552c34 */ if (fZ) goto L_00552c34;
L_00552bf9:; BB(0x00552bf9);
    /* 00552bf9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552bff: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00552c05: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00552c08: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00552c0b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00552c0e: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552c12: je 0x552c2a */ if (fZ) goto L_00552c2a;
L_00552c14:; BB(0x00552c14);
    /* 00552c14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552c16: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00552c19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552c1b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00552c1e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552c20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552c22u); call_ind(t); }
    /* 00552c22: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00552c28: jmp 0x552c34 */ goto L_00552c34;
L_00552c2a:; BB(0x00552c2a);
    /* 00552c2a: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00552c34:; BB(0x00552c34);
    /* 00552c34: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00552c3b: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00552c41: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x552c46u); f_005e9e40();
    /* 00552c46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552c49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00552c50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00552c51: mov esp, ebp */ r_esp = r_ebp;
    /* 00552c53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552c54: ret  */ FN_RET(0x00552840); r_esp += 4; return;
}

void f_00553240(void) /* VideoPokerDisplay::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00553240);
    /* 00553240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553241: mov ebp, esp */ r_ebp = r_esp;
    /* 00553243: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553245: push 0x6a54ad */ { u32 v = 0x6a54adu; r_esp -= 4; W32(r_esp, v); }
    /* 0055324a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00553250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553251: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00553257: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00553258: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055325d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055325f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553260: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00553263: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00553269: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0055326f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553273: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553275: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055327b: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x553280u); f_005f1b10();
    /* 00553280: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00553285: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55328au); f_00686d82();
    /* 0055328a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055328d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00553290: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00553297: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055329b: je 0x5532ad */ if (fZ) goto L_005532ad;
L_0055329d:; BB(0x0055329d);
    /* 0055329d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005532a0: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5532a5u); f_005eaaf0();
    /* 005532a5: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005532ab: jmp 0x5532b7 */ goto L_005532b7;
L_005532ad:; BB(0x005532ad);
    /* 005532ad: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005532b7:; BB(0x005532b7);
    /* 005532b7: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005532bd: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005532c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005532c7: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005532cd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005532d0: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 005532d6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005532d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005532da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005532dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005532de: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005532e4: call 0x5541c0 */ r_esp -= 4; W32(r_esp, 0x5532e9u); f_005541c0();
    /* 005532e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005532ea: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005532f0: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 005532f6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5532fbu); f_005eae80();
    /* 005532fb: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553301: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 00553307: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055330d: mov ecx, dword ptr [eax + 0x90] */ r_ecx = R32((u32)(r_eax+0x90u));
    /* 00553313: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00553315: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00553318: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55331au); call_ind(t); }
    /* 0055331a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0055331f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553324u); f_00686d82();
    /* 00553324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553327: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0055332a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00553331: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553335: je 0x553347 */ if (fZ) goto L_00553347;
L_00553337:; BB(0x00553337);
    /* 00553337: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0055333a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x55333fu); f_005eaaf0();
    /* 0055333f: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00553345: jmp 0x553351 */ goto L_00553351;
L_00553347:; BB(0x00553347);
    /* 00553347: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00553351:; BB(0x00553351);
    /* 00553351: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00553357: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0055335a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553361: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553367: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0055336a: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0055336d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055336f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553371: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553373: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553375: push 0x30f358 */ { u32 v = 0x30f358u; r_esp -= 4; W32(r_esp, v); }
    /* 0055337a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553380: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00553383: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553388u); f_005eae80();
    /* 00553388: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055338e: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00553391: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553397: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0055339a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055339c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0055339f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5533a1u); call_ind(t); }
    /* 005533a1: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005533a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5533abu); f_00686d82();
    /* 005533ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005533ae: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005533b1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005533b8: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005533bc: je 0x5533ce */ if (fZ) goto L_005533ce;
L_005533be:; BB(0x005533be);
    /* 005533be: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005533c1: call 0x60f380 */ r_esp -= 4; W32(r_esp, 0x5533c6u); f_0060f380();
    /* 005533c6: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005533cc: jmp 0x5533d8 */ goto L_005533d8;
L_005533ce:; BB(0x005533ce);
    /* 005533ce: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005533d8:; BB(0x005533d8);
    /* 005533d8: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005533de: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005533e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005533e8: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005533ee: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005533f1: mov dword ptr [edx + 0x84], eax */ W32((u32)(r_edx+0x84u), r_eax);
    /* 005533f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005533f9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005533fb: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00553400: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 00553402: push 0x30f35b */ { u32 v = 0x30f35bu; r_esp -= 4; W32(r_esp, v); }
    /* 00553407: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00553409: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055340f: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00553415: call 0x60f560 */ r_esp -= 4; W32(r_esp, 0x55341au); f_0060f560();
    /* 0055341a: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055341f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553424u); f_00686d82();
    /* 00553424: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553427: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0055342a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00553431: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553435: je 0x553447 */ if (fZ) goto L_00553447;
L_00553437:; BB(0x00553437);
    /* 00553437: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0055343a: call 0x60f380 */ r_esp -= 4; W32(r_esp, 0x55343fu); f_0060f380();
    /* 0055343f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00553445: jmp 0x553451 */ goto L_00553451;
L_00553447:; BB(0x00553447);
    /* 00553447: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00553451:; BB(0x00553451);
    /* 00553451: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00553457: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0055345a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553461: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553467: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0055346a: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 00553470: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553472: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553474: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00553479: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055347e: push 0x30f35b */ { u32 v = 0x30f35bu; r_esp -= 4; W32(r_esp, v); }
    /* 00553483: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00553485: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055348b: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 00553491: call 0x60f560 */ r_esp -= 4; W32(r_esp, 0x553496u); f_0060f560();
    /* 00553496: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055349b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5534a0u); f_00686d82();
    /* 005534a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005534a3: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005534a6: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005534ad: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005534b1: je 0x5534c3 */ if (fZ) goto L_005534c3;
L_005534b3:; BB(0x005534b3);
    /* 005534b3: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005534b6: call 0x60f380 */ r_esp -= 4; W32(r_esp, 0x5534bbu); f_0060f380();
    /* 005534bb: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005534c1: jmp 0x5534cd */ goto L_005534cd;
L_005534c3:; BB(0x005534c3);
    /* 005534c3: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005534cd:; BB(0x005534cd);
    /* 005534cd: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005534d3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005534d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005534dd: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005534e3: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005534e6: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 005534ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005534ee: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005534f0: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 005534f5: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 005534fa: push 0x30f35b */ { u32 v = 0x30f35bu; r_esp -= 4; W32(r_esp, v); }
    /* 005534ff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00553501: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553507: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0055350d: call 0x60f560 */ r_esp -= 4; W32(r_esp, 0x553512u); f_0060f560();
    /* 00553512: mov dword ptr [ebp - 0x44], 0x40 */ W32((u32)(r_ebp+0xffffffbcu), 0x40u);
    /* 00553519: mov dword ptr [ebp - 0x40], 0xc9 */ W32((u32)(r_ebp+0xffffffc0u), 0xc9u);
    /* 00553520: mov dword ptr [ebp - 0x3c], 0x153 */ W32((u32)(r_ebp+0xffffffc4u), 0x153u);
    /* 00553527: mov dword ptr [ebp - 0x38], 0x1dd */ W32((u32)(r_ebp+0xffffffc8u), 0x1ddu);
    /* 0055352e: mov dword ptr [ebp - 0x34], 0x267 */ W32((u32)(r_ebp+0xffffffccu), 0x267u);
    /* 00553535: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0055353c: jmp 0x553547 */ goto L_00553547;
L_0055353e:; BB(0x0055353e);
    /* 0055353e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553541: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00553544: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_00553547:; BB(0x00553547);
    /* 00553547: cmp dword ptr [ebp - 0x28], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055354b: jge 0x553806 */ if ((fS==fO)) goto L_00553806;
L_00553551:; BB(0x00553551);
    /* 00553551: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00553556: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55355bu); f_00686d82();
    /* 0055355b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055355e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00553561: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00553568: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055356c: je 0x553580 */ if (fZ) goto L_00553580;
L_0055356e:; BB(0x0055356e);
    /* 0055356e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553570: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00553573: call 0x555510 */ r_esp -= 4; W32(r_esp, 0x553578u); f_00555510();
    /* 00553578: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0055357e: jmp 0x55358a */ goto L_0055358a;
L_00553580:; BB(0x00553580);
    /* 00553580: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0055358a:; BB(0x0055358a);
    /* 0055358a: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00553590: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00553593: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055359a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055359d: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005535a3: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005535a6: mov dword ptr [ecx + eax*4 + 4], edx */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edx);
    /* 005535aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005535ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005535ae: push 0xc2 */ { u32 v = 0xc2u; r_esp -= 4; W32(r_esp, v); }
    /* 005535b3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005535b6: mov eax, dword ptr [ebp + eax*4 - 0x44] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffbcu));
    /* 005535ba: imul eax, eax, 0x280 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x280u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005535c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005535c1: mov ecx, 0x320 */ r_ecx = 0x320u;
    /* 005535c6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005535c6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005535c6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005535c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005535c9: push 0x30f359 */ { u32 v = 0x30f359u; r_esp -= 4; W32(r_esp, v); }
    /* 005535ce: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005535d1: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005535d7: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005535db: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5535e0u); f_005eae80();
    /* 005535e0: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005535e5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5535eau); f_00686d82();
    /* 005535ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005535ed: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005535f0: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005535f7: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005535fb: je 0x55360d */ if (fZ) goto L_0055360d;
L_005535fd:; BB(0x005535fd);
    /* 005535fd: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00553600: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x553605u); f_005f5bf0();
    /* 00553605: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0055360b: jmp 0x553617 */ goto L_00553617;
L_0055360d:; BB(0x0055360d);
    /* 0055360d: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00553617:; BB(0x00553617);
    /* 00553617: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0055361d: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00553620: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553627: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055362a: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553630: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00553633: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 00553637: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553639: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055363b: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553640: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553643: mov eax, dword ptr [ebp + edx*4 - 0x44] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffbcu));
    /* 00553647: imul eax, eax, 0x280 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x280u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0055364d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0055364e: mov ecx, 0x320 */ r_ecx = 0x320u;
    /* 00553653: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00553653, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00553653, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00553655: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553656: push 0x30f353 */ { u32 v = 0x30f353u; r_esp -= 4; W32(r_esp, v); }
    /* 0055365b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055365e: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553664: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00553668: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x55366du); f_005eae80();
    /* 0055366d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553670: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553676: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0055367a: mov dword ptr [eax + 0x178], 0 */ W32((u32)(r_eax+0x178u), 0x0u);
    /* 00553684: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00553689: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55368eu); f_00686d82();
    /* 0055368e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553691: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00553697: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0055369e: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005536a5: je 0x5536ba */ if (fZ) goto L_005536ba;
L_005536a7:; BB(0x005536a7);
    /* 005536a7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005536ad: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5536b2u); f_005eaaf0();
    /* 005536b2: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005536b8: jmp 0x5536c4 */ goto L_005536c4;
L_005536ba:; BB(0x005536ba);
    /* 005536ba: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_005536c4:; BB(0x005536c4);
    /* 005536c4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005536ca: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005536cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005536d4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005536d7: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005536dd: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005536e0: mov dword ptr [eax + edx*4 + 0x4c], ecx */ W32((u32)(r_eax+r_edx*4+0x4cu), r_ecx);
    /* 005536e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005536e6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005536e8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005536eb: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005536f1: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005536f5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005536f8: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005536fe: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00553702: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00553704: mov ecx, edx */ r_ecx = r_edx;
    /* 00553706: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00553709: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x55370bu); call_ind(t); }
    /* 0055370b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055370c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055370f: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553715: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00553719: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055371c: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553722: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00553726: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00553728: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0055372b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55372du); call_ind(t); }
    /* 0055372d: mov esi, eax */ r_esi = r_eax;
    /* 0055372f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553732: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553738: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0055373c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x553741u); f_005f5550();
    /* 00553741: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00553742: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00553744: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00553746: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00553748: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00553749: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 0055374e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553751: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553757: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 0055375b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553760u); f_005eae80();
    /* 00553760: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553763: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553769: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 0055376d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553770: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553776: mov edx, dword ptr [eax + edx*4 + 0x4c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 0055377a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055377c: mov ecx, edx */ r_ecx = r_edx;
    /* 0055377e: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00553781: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x553783u); call_ind(t); }
    /* 00553783: mov esi, eax */ r_esi = r_eax;
    /* 00553785: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553788: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055378e: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 00553792: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x553797u); f_005f5590();
    /* 00553797: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00553798: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055379a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0055379c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0055379e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055379f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005537a2: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005537a8: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 005537ac: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005537af: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005537b5: mov edx, dword ptr [eax + edx*4 + 0x4c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 005537b9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005537bb: mov ecx, edx */ r_ecx = r_edx;
    /* 005537bd: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005537c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5537c2u); call_ind(t); }
    /* 005537c2: mov esi, eax */ r_esi = r_eax;
    /* 005537c4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005537c7: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005537cd: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 005537d1: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5537d6u); f_005f5550();
    /* 005537d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005537d7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005537d9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005537db: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005537dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005537de: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005537e1: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005537e7: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 005537eb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005537ee: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005537f4: mov edx, dword ptr [eax + edx*4 + 0x4c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 005537f8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005537fa: mov ecx, edx */ r_ecx = r_edx;
    /* 005537fc: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005537ff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x553801u); call_ind(t); }
    /* 00553801: jmp 0x55353e */ goto L_0055353e;
L_00553806:; BB(0x00553806);
    /* 00553806: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0055380b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553810u); f_00686d82();
    /* 00553810: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553813: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00553819: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00553820: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553827: je 0x55383c */ if (fZ) goto L_0055383c;
L_00553829:; BB(0x00553829);
    /* 00553829: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0055382f: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x553834u); f_005f5bf0();
    /* 00553834: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0055383a: jmp 0x553846 */ goto L_00553846;
L_0055383c:; BB(0x0055383c);
    /* 0055383c: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00553846:; BB(0x00553846);
    /* 00553846: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 0055384c: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00553852: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553859: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055385f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00553865: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00553868: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055386a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055386c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055386e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553870: push 0x30f351 */ { u32 v = 0x30f351u; r_esp -= 4; W32(r_esp, v); }
    /* 00553875: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055387b: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0055387e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553883u); f_005eae80();
    /* 00553883: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00553889: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 0055388c: mov byte ptr [ebp - 0x8d], dl */ W8((u32)(r_ebp+0xffffff73u), (u8)r_edx);
    /* 00553892: movzx eax, byte ptr [ebp - 0x8d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff73u));
    /* 00553899: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0055389b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0055389d: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005538a0: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005538a3: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005538a9: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 005538ac: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 005538b2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005538b9: jmp 0x5538c4 */ goto L_005538c4;
L_005538bb:; BB(0x005538bb);
    /* 005538bb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005538be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005538c1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_005538c4:; BB(0x005538c4);
    /* 005538c4: cmp dword ptr [ebp - 0x28], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005538c8: jge 0x553906 */ if ((fS==fO)) goto L_00553906;
L_005538ca:; BB(0x005538ca);
    /* 005538ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005538cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005538ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005538d0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005538d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005538d4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005538d9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005538db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005538dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005538df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005538e2: add ecx, 0x30f34a */ {  u32 a = r_ecx; u32 b = 0x30f34au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005538e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005538e9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005538ec: mov eax, dword ptr [edx*4 + 0x73efe0] */ r_eax = R32((u32)(r_edx*4+0x73efe0u));
    /* 005538f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005538f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005538f6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005538fc: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005538ff: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x553904u); f_005f9de0();
    /* 00553904: jmp 0x5538bb */ goto L_005538bb;
L_00553906:; BB(0x00553906);
    /* 00553906: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553908: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055390a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055390c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055390e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553910: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553915: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553917: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553919: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055391b: push 0x30f352 */ { u32 v = 0x30f352u; r_esp -= 4; W32(r_esp, v); }
    /* 00553920: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00553922: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553924: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0055392a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0055392d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x553932u); f_005f9de0();
    /* 00553932: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553934: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00553936: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0055393b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0055393e: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x553943u); f_005fb300();
    /* 00553943: mov ecx, eax */ r_ecx = r_eax;
    /* 00553945: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x55394au); f_00602790();
    /* 0055394a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055394d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00553954: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00553955: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00553956: mov esp, ebp */ r_esp = r_ebp;
    /* 00553958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553959: ret  */ FN_RET(0x00553240); r_esp += 4; return;
}

void f_00554490(void) /* VideoPokerDisplay::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554490);
    /* 00554490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554491: mov ebp, esp */ r_ebp = r_esp;
    /* 00554493: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554496: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00554499: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 0055449e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005544a1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005544a4: mov edx, dword ptr [0x793420] */ r_edx = R32((u32)(0x793420u));
    /* 005544aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005544ad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005544b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005544b3: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005544b9: call 0x60fb10 */ r_esp -= 4; W32(r_esp, 0x5544beu); f_0060fb10();
    /* 005544be: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005544c1: setle dl */ r_edx = (r_edx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005544c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005544c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005544c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005544c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005544cc: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005544d2: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x5544d7u); f_0060fb30();
    /* 005544d7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005544da: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005544e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005544e3: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 005544e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005544eb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005544ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5544f0u); call_ind(t); }
    /* 005544f0: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005544f6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005544f9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005544fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005544fe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00554501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554502: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00554505: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 0055450b: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x554510u); f_0060fb30();
    /* 00554510: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00554513: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00554519: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055451c: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 00554522: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00554524: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554527: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554529u); call_ind(t); }
    /* 00554529: mov esp, ebp */ r_esp = r_ebp;
    /* 0055452b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055452c: ret  */ FN_RET(0x00554490); r_esp += 4; return;
}

void f_00554900(void) /* VideoPokerDisplay::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554900);
    /* 00554900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554901: mov ebp, esp */ r_ebp = r_esp;
    /* 00554903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00554907: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00554909: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055490b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055490e: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00554914: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x554919u); f_0060fb30();
    /* 00554919: mov esp, ebp */ r_esp = r_ebp;
    /* 0055491b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055491c: ret  */ FN_RET(0x00554900); r_esp += 4; return;
}

void f_00554b60(void) /* VideoPokerDisplay::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554b60);
    /* 00554b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00554b63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554b66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00554b69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00554b70: jmp 0x554b7b */ goto L_00554b7b;
L_00554b72:; BB(0x00554b72);
    /* 00554b72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554b75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554b78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00554b7b:; BB(0x00554b7b);
    /* 00554b7b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554b7f: jge 0x554bdf */ if ((fS==fO)) goto L_00554bdf;
L_00554b81:; BB(0x00554b81);
    /* 00554b81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554b84: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554b87: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00554b8b: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00554b92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554b93: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554b99: call 0x5573a0 */ r_esp -= 4; W32(r_esp, 0x554b9eu); f_005573a0();
    /* 00554b9e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00554ba1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554ba3: je 0x554bc2 */ if (fZ) goto L_00554bc2;
L_00554ba5:; BB(0x00554ba5);
    /* 00554ba5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554ba8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554bab: mov edx, dword ptr [ecx + eax*4 + 0x4c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 00554baf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554bb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554bb5: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 00554bb9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554bbb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554bbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554bc0u); call_ind(t); }
    /* 00554bc0: jmp 0x554bdd */ goto L_00554bdd;
L_00554bc2:; BB(0x00554bc2);
    /* 00554bc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554bc5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554bc8: mov eax, dword ptr [edx + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 00554bcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554bcf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554bd2: mov ecx, dword ptr [edx + ecx*4 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 00554bd6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00554bd8: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00554bdb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x554bddu); call_ind(t); }
L_00554bdd:; BB(0x00554bdd);
    /* 00554bdd: jmp 0x554b72 */ goto L_00554b72;
L_00554bdf:; BB(0x00554bdf);
    /* 00554bdf: mov esp, ebp */ r_esp = r_ebp;
    /* 00554be1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554be2: ret  */ FN_RET(0x00554b60); r_esp += 4; return;
}

void f_00554e60(void) /* VideoPokerDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554e60);
    /* 00554e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00554e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00554e67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554e6a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00554e70: call 0x60fb10 */ r_esp -= 4; W32(r_esp, 0x554e75u); f_0060fb10();
    /* 00554e75: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554e78: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00554e7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e7c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00554e7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554e80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554e83: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00554e89: call 0x60fb30 */ r_esp -= 4; W32(r_esp, 0x554e8eu); f_0060fb30();
    /* 00554e8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554e91: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 00554e97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554e9a: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 00554ea0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554ea2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554ea5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554ea7u); call_ind(t); }
    /* 00554ea7: mov esp, ebp */ r_esp = r_ebp;
    /* 00554ea9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554eaa: ret 4 */ FN_RET(0x00554e60); r_esp += 8; return;
}

void f_00555470(void) /* VideoPokerDisplay::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555470);
    /* 00555470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555471: mov ebp, esp */ r_ebp = r_esp;
    /* 00555473: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555476: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00555479: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555480: jmp 0x55548b */ goto L_0055548b;
L_00555482:; BB(0x00555482);
    /* 00555482: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555485: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00555488: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055548b:; BB(0x0055548b);
    /* 0055548b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055548f: jge 0x5554ae */ if ((fS==fO)) goto L_005554ae;
L_00555491:; BB(0x00555491);
    /* 00555491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555494: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555497: mov eax, dword ptr [edx + ecx*4 + 0x4c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 0055549b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055549e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005554a1: mov ecx, dword ptr [edx + ecx*4 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4cu));
    /* 005554a5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005554a7: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005554aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5554acu); call_ind(t); }
    /* 005554ac: jmp 0x555482 */ goto L_00555482;
L_005554ae:; BB(0x005554ae);
    /* 005554ae: mov esp, ebp */ r_esp = r_ebp;
    /* 005554b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005554b1: ret  */ FN_RET(0x00555470); r_esp += 4; return;
}

