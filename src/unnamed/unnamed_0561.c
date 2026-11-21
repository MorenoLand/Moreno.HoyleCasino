#include "protos.h"

void f_005616c0(void) /* sub_5616C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005616c0);
    /* 005616c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005616c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005616c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005616c6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005616c9: mov dword ptr [ebp - 0x30], 0x312246 */ W32((u32)(r_ebp+0xffffffd0u), 0x312246u);
    /* 005616d0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005616d7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005616de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005616e5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005616ec: mov dword ptr [ebp - 0x1c], 0x312248 */ W32((u32)(r_ebp+0xffffffe4u), 0x312248u);
    /* 005616f3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005616fa: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00561701: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00561708: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0056170f: mov dword ptr [ebp - 8], 0x312247 */ W32((u32)(r_ebp+0xfffffff8u), 0x312247u);
    /* 00561716: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0056171b: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00561721: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00561724: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561727: mov eax, dword ptr [ebp + edx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd0u));
    /* 0056172b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056172d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056172e: ret  */ FN_RET(0x005616c0); r_esp += 4; return;
}

void f_005617a0(void) /* sub_5617A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005617a0);
    /* 005617a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005617a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005617a3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005617a6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005617ab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005617ad: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005617b0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005617b3: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005617b8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005617bb: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x5617c0u); f_0056b910();
    /* 005617c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005617c3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005617c6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005617cd: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 005617d4: mov dword ptr [ebp - 0x20], 0xa */ W32((u32)(r_ebp+0xffffffe0u), 0xau);
    /* 005617db: mov dword ptr [ebp - 0x1c], 0x19 */ W32((u32)(r_ebp+0xffffffe4u), 0x19u);
    /* 005617e2: mov dword ptr [ebp - 0x18], 0x32 */ W32((u32)(r_ebp+0xffffffe8u), 0x32u);
    /* 005617e9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005617f0: jmp 0x5617fb */ goto L_005617fb;
L_005617f2:; BB(0x005617f2);
    /* 005617f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005617f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005617f8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005617fb:; BB(0x005617fb);
    /* 005617fb: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005617ff: jge 0x56186d */ if ((fS==fO)) goto L_0056186d;
L_00561801:; BB(0x00561801);
    /* 00561801: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561804: mov eax, dword ptr [ebp + edx*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd8u));
    /* 00561808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561809: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056180f: call 0x568530 */ r_esp -= 4; W32(r_esp, 0x561814u); f_00568530();
    /* 00561814: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00561817: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561819: je 0x561843 */ if (fZ) goto L_00561843;
L_0056181b:; BB(0x0056181b);
    /* 0056181b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056181e: mov byte ptr [ebp + edx - 0x10], 1 */ W8((u32)(r_ebp+r_edx+0xfffffff0u), 0x1u);
    /* 00561823: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00561826: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00561829: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 0056182d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00561830: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00561833: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00561837: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00561839: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0056183f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561841u); call_ind(t); }
    /* 00561841: jmp 0x56186b */ goto L_0056186b;
L_00561843:; BB(0x00561843);
    /* 00561843: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561846: mov byte ptr [ebp + ecx - 0x10], 0 */ W8((u32)(r_ebp+r_ecx+0xfffffff0u), 0x0u);
    /* 0056184b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056184e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00561851: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 00561855: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561858: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056185b: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0056185f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00561861: mov ecx, edx */ r_ecx = r_edx;
    /* 00561863: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00561869: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56186bu); call_ind(t); }
L_0056186b:; BB(0x0056186b);
    /* 0056186b: jmp 0x5617f2 */ goto L_005617f2;
L_0056186d:; BB(0x0056186d);
    /* 0056186d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00561874: jmp 0x56187f */ goto L_0056187f;
L_00561876:; BB(0x00561876);
    /* 00561876: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00561879: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056187c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0056187f:; BB(0x0056187f);
    /* 0056187f: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561883: jge 0x56193f */ if ((fS==fO)) goto L_0056193f;
L_00561889:; BB(0x00561889);
    /* 00561889: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056188c: movzx edx, byte ptr [ebp + ecx - 0x10] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xfffffff0u));
    /* 00561891: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561893: je 0x561909 */ if (fZ) goto L_00561909;
L_00561895:; BB(0x00561895);
    /* 00561895: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00561898: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056189b: cmp ecx, dword ptr [ebp + eax*4 - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056189f: jne 0x5618d6 */ if (!fZ) goto L_005618d6;
L_005618a1:; BB(0x005618a1);
    /* 005618a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005618a4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005618a7: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005618ab: mov byte ptr [ecx + 0x1e0], 1 */ W8((u32)(r_ecx+0x1e0u), 0x1u);
    /* 005618b2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005618b4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005618b7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005618ba: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005618be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005618c1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005618c4: mov edx, dword ptr [eax + edx*4 + 0x60] */ r_edx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 005618c8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005618ca: mov ecx, edx */ r_ecx = r_edx;
    /* 005618cc: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005618d2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5618d4u); call_ind(t); }
    /* 005618d4: jmp 0x561907 */ goto L_00561907;
L_005618d6:; BB(0x005618d6);
    /* 005618d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005618d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005618db: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005618de: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 005618e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005618e5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005618e8: mov ecx, dword ptr [ecx + eax*4 + 0x60] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 005618ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005618ee: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005618f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5618f6u); call_ind(t); }
    /* 005618f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005618f9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005618fc: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00561900: mov byte ptr [eax + 0x1e0], 0 */ W8((u32)(r_eax+0x1e0u), 0x0u);
L_00561907:; BB(0x00561907);
    /* 00561907: jmp 0x56193a */ goto L_0056193a;
L_00561909:; BB(0x00561909);
    /* 00561909: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056190b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056190e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00561911: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00561915: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561918: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056191b: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 0056191f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00561921: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00561927: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x561929u); call_ind(t); }
    /* 00561929: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056192c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056192f: mov edx, dword ptr [ecx + eax*4 + 0x60] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60u));
    /* 00561933: mov byte ptr [edx + 0x1e0], 0 */ W8((u32)(r_edx+0x1e0u), 0x0u);
L_0056193a:; BB(0x0056193a);
    /* 0056193a: jmp 0x561876 */ goto L_00561876;
L_0056193f:; BB(0x0056193f);
    /* 0056193f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00561942: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00561944: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x561949u); f_00686d72();
    /* 00561949: mov esp, ebp */ r_esp = r_ebp;
    /* 0056194b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056194c: ret  */ FN_RET(0x005617a0); r_esp += 4; return;
}

void f_00561950(void) /* sub_561950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561950);
    /* 00561950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561951: mov ebp, esp */ r_ebp = r_esp;
    /* 00561953: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00561956: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00561959: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056195c: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00561962: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561965: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0056196b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056196d: mov ecx, eax */ r_ecx = r_eax;
    /* 0056196f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00561972: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561974u); call_ind(t); }
    /* 00561974: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056197a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056197d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00561980: cmp dword ptr [ebp - 4], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561987: jl 0x561999 */ if ((fS!=fO)) goto L_00561999;
L_00561989:; BB(0x00561989);
    /* 00561989: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056198c: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00561992: call 0x566410 */ r_esp -= 4; W32(r_esp, 0x561997u); f_00566410();
    /* 00561997: jmp 0x5619c7 */ goto L_005619c7;
L_00561999:; BB(0x00561999);
    /* 00561999: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056199b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056199e: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 005619a4: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x5619a9u); f_00565a50();
    /* 005619a9: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 005619af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005619b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005619b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005619b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005619b9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005619bc: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 005619c2: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x5619c7u); f_005664c0();
L_005619c7:; BB(0x005619c7);
    /* 005619c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005619ca: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 005619d0: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x5619d5u); f_00566210();
    /* 005619d5: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005619db: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005619de: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005619e1: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 005619e6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005619e9: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x5619eeu); f_0056b910();
    /* 005619ee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005619f1: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005619f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005619f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005619f9: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 005619ff: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x561a04u); f_005664c0();
    /* 00561a04: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561a07: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 00561a0d: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x561a12u); f_00566210();
    /* 00561a12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00561a15: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00561a1b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561a1e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00561a24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00561a26: mov ecx, eax */ r_ecx = r_eax;
    /* 00561a28: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00561a2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561a2du); call_ind(t); }
    /* 00561a2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561a30: call 0x5617a0 */ r_esp -= 4; W32(r_esp, 0x561a35u); f_005617a0();
    /* 00561a35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a39: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00561a3f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00561a42: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x561a47u); f_005fb300();
    /* 00561a47: mov ecx, eax */ r_ecx = r_eax;
    /* 00561a49: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x561a4eu); f_005eb700();
    /* 00561a4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a52: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00561a58: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00561a5b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x561a60u); f_005fb300();
    /* 00561a60: mov ecx, eax */ r_ecx = r_eax;
    /* 00561a62: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x561a67u); f_005eb700();
    /* 00561a67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a69: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a6b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00561a70: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00561a73: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x561a78u); f_005fb300();
    /* 00561a78: mov ecx, eax */ r_ecx = r_eax;
    /* 00561a7a: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x561a7fu); f_005eb700();
    /* 00561a7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a81: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a83: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00561a89: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00561a8c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x561a91u); f_005fb300();
    /* 00561a91: mov ecx, eax */ r_ecx = r_eax;
    /* 00561a93: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x561a98u); f_005eb700();
    /* 00561a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a9a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00561a9c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00561aa2: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00561aa5: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x561aaau); f_005fb300();
    /* 00561aaa: mov ecx, eax */ r_ecx = r_eax;
    /* 00561aac: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x561ab1u); f_005eb700();
    /* 00561ab1: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561ab7: call 0x56a5d0 */ r_esp -= 4; W32(r_esp, 0x561abcu); f_0056a5d0();
    /* 00561abc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00561abf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561ac1: je 0x561ad7 */ if (fZ) goto L_00561ad7;
L_00561ac3:; BB(0x00561ac3);
    /* 00561ac3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561ac5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561ac8: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561acdu); f_005601d0();
    /* 00561acd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561acf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561ad2: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561ad7u); f_005601d0();
L_00561ad7:; BB(0x00561ad7);
    /* 00561ad7: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561add: call 0x56a660 */ r_esp -= 4; W32(r_esp, 0x561ae2u); f_0056a660();
    /* 00561ae2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00561ae5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561ae7: je 0x561af5 */ if (fZ) goto L_00561af5;
L_00561ae9:; BB(0x00561ae9);
    /* 00561ae9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00561aeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561aee: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561af3u); f_005601d0();
    /* 00561af3: jmp 0x561b0b */ goto L_00561b0b;
L_00561af5:; BB(0x00561af5);
    /* 00561af5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00561af7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561afa: call 0x560240 */ r_esp -= 4; W32(r_esp, 0x561affu); f_00560240();
    /* 00561aff: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00561b05: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00561b08: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00561b0b:; BB(0x00561b0b);
    /* 00561b0b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00561b0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00561b10: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561b15u); f_005601d0();
    /* 00561b15: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561b1b: call 0x56a680 */ r_esp -= 4; W32(r_esp, 0x561b20u); f_0056a680();
    /* 00561b20: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00561b23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561b25: je 0x561b3d */ if (fZ) goto L_00561b3d;
L_00561b27:; BB(0x00561b27);
    /* 00561b27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561b29: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x561b2eu); f_005dcb00();
    /* 00561b2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00561b31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561b32: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00561b38: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x561b3du); f_005dbb70();
L_00561b3d:; BB(0x00561b3d);
    /* 00561b3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00561b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561b40: ret  */ FN_RET(0x00561950); r_esp += 4; return;
}

void f_00561b50(void) /* sub_561B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561b50);
    /* 00561b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00561b53: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00561b56: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00561b59: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561b5c: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 00561b62: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561b65: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00561b6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00561b6d: mov ecx, eax */ r_ecx = r_eax;
    /* 00561b6f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00561b72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561b74u); call_ind(t); }
    /* 00561b74: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561b7a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00561b7d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00561b80: cmp dword ptr [ebp - 8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561b87: jl 0x561b99 */ if ((fS!=fO)) goto L_00561b99;
L_00561b89:; BB(0x00561b89);
    /* 00561b89: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561b8c: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00561b92: call 0x566410 */ r_esp -= 4; W32(r_esp, 0x561b97u); f_00566410();
    /* 00561b97: jmp 0x561bc7 */ goto L_00561bc7;
L_00561b99:; BB(0x00561b99);
    /* 00561b99: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00561b9b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561b9e: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 00561ba4: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x561ba9u); f_00565a50();
    /* 00561ba9: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00561baf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00561bb2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00561bb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00561bb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561bb9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561bbc: mov ecx, dword ptr [edx + 0xcc] */ r_ecx = R32((u32)(r_edx+0xccu));
    /* 00561bc2: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x561bc7u); f_005664c0();
L_00561bc7:; BB(0x00561bc7);
    /* 00561bc7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561bca: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 00561bd0: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x561bd5u); f_00566210();
    /* 00561bd5: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561bdb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00561bde: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00561be1: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00561be6: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00561be9: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x561beeu); f_0056b910();
    /* 00561bee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561bf1: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00561bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561bf6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561bf9: mov ecx, dword ptr [ecx + 0xd4] */ r_ecx = R32((u32)(r_ecx+0xd4u));
    /* 00561bff: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x561c04u); f_005664c0();
    /* 00561c04: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c07: mov ecx, dword ptr [edx + 0xd4] */ r_ecx = R32((u32)(r_edx+0xd4u));
    /* 00561c0d: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x561c12u); f_00566210();
    /* 00561c12: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c15: mov ecx, dword ptr [eax + 0xd0] */ r_ecx = R32((u32)(r_eax+0xd0u));
    /* 00561c1b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c1e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00561c24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00561c26: mov ecx, eax */ r_ecx = r_eax;
    /* 00561c28: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00561c2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561c2du); call_ind(t); }
    /* 00561c2d: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561c33: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00561c36: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00561c39: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561c3d: je 0x561d04 */ if (fZ) goto L_00561d04;
L_00561c43:; BB(0x00561c43);
    /* 00561c43: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c46: call 0x5602a0 */ r_esp -= 4; W32(r_esp, 0x561c4bu); f_005602a0();
    /* 00561c4b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c4e: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00561c54: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c57: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00561c5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00561c5f: mov ecx, eax */ r_ecx = r_eax;
    /* 00561c61: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00561c64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561c66u); call_ind(t); }
    /* 00561c66: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c69: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 00561c6f: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x561c74u); f_00566310();
    /* 00561c74: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c77: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00561c7a: call 0x566a20 */ r_esp -= 4; W32(r_esp, 0x561c7fu); f_00566a20();
    /* 00561c7f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00561c81: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561c84: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561c89u); f_005601d0();
    /* 00561c89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00561c90: jmp 0x561c9b */ goto L_00561c9b;
L_00561c92:; BB(0x00561c92);
    /* 00561c92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561c95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561c98: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00561c9b:; BB(0x00561c9b);
    /* 00561c9b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561c9f: jge 0x561cc1 */ if ((fS==fO)) goto L_00561cc1;
L_00561ca1:; BB(0x00561ca1);
    /* 00561ca1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561ca4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561ca7: mov eax, dword ptr [edx + ecx*4 + 0x60] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00561cab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561cae: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561cb1: mov ecx, dword ptr [edx + ecx*4 + 0x60] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60u));
    /* 00561cb5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00561cb7: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00561cbd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x561cbfu); call_ind(t); }
    /* 00561cbf: jmp 0x561c92 */ goto L_00561c92;
L_00561cc1:; BB(0x00561cc1);
    /* 00561cc1: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00561cc6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00561cc9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00561ccc: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561cd0: jne 0x561cde */ if (!fZ) goto L_00561cde;
L_00561cd2:; BB(0x00561cd2);
    /* 00561cd2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00561cd4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561cd7: call 0x560240 */ r_esp -= 4; W32(r_esp, 0x561cdcu); f_00560240();
    /* 00561cdc: jmp 0x561d04 */ goto L_00561d04;
L_00561cde:; BB(0x00561cde);
    /* 00561cde: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561ce4: call 0x56a5d0 */ r_esp -= 4; W32(r_esp, 0x561ce9u); f_0056a5d0();
    /* 00561ce9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00561cec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561cee: je 0x561d04 */ if (fZ) goto L_00561d04;
L_00561cf0:; BB(0x00561cf0);
    /* 00561cf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561cf2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561cf5: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561cfau); f_005601d0();
    /* 00561cfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00561cfc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561cff: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561d04u); f_005601d0();
L_00561d04:; BB(0x00561d04);
    /* 00561d04: mov esp, ebp */ r_esp = r_ebp;
    /* 00561d06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561d07: ret  */ FN_RET(0x00561b50); r_esp += 4; return;
}

void f_00561d10(void) /* sub_561D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561d10);
    /* 00561d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00561d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00561d17: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00561d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561d1d: je 0x561d2b */ if (fZ) goto L_00561d2b;
L_00561d1f:; BB(0x00561d1f);
    /* 00561d1f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561d24: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561d29u); f_005601d0();
    /* 00561d29: jmp 0x561d35 */ goto L_00561d35;
L_00561d2b:; BB(0x00561d2b);
    /* 00561d2b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561d30: call 0x560240 */ r_esp -= 4; W32(r_esp, 0x561d35u); f_00560240();
L_00561d35:; BB(0x00561d35);
    /* 00561d35: mov esp, ebp */ r_esp = r_ebp;
    /* 00561d37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561d38: ret 4 */ FN_RET(0x00561d10); r_esp += 8; return;
}

void f_00561d40(void) /* sub_561D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561d40);
    /* 00561d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00561d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00561d47: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00561d4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561d4d: je 0x561db5 */ if (fZ) goto L_00561db5;
L_00561d4f:; BB(0x00561d4f);
    /* 00561d4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d51: push 0x312222 */ { u32 v = 0x312222u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d56: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561d5c: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x561d61u); f_005f2b20();
    /* 00561d61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d63: push 0x312223 */ { u32 v = 0x312223u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d68: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561d6e: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x561d73u); f_005f2b20();
    /* 00561d73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d75: push 0x312224 */ { u32 v = 0x312224u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d7a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561d80: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x561d85u); f_005f2b20();
    /* 00561d85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d87: push 0x312225 */ { u32 v = 0x312225u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d8c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561d92: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x561d97u); f_005f2b20();
    /* 00561d97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d99: push 0x312226 */ { u32 v = 0x312226u; r_esp -= 4; W32(r_esp, v); }
    /* 00561d9e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561da4: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x561da9u); f_005f2b20();
    /* 00561da9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00561dab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561dae: call 0x5601d0 */ r_esp -= 4; W32(r_esp, 0x561db3u); f_005601d0();
    /* 00561db3: jmp 0x561e0f */ goto L_00561e0f;
L_00561db5:; BB(0x00561db5);
    /* 00561db5: push 0x312222 */ { u32 v = 0x312222u; r_esp -= 4; W32(r_esp, v); }
    /* 00561dba: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561dc0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x561dc5u); f_005f2ba0();
    /* 00561dc5: push 0x312223 */ { u32 v = 0x312223u; r_esp -= 4; W32(r_esp, v); }
    /* 00561dca: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561dd0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x561dd5u); f_005f2ba0();
    /* 00561dd5: push 0x312224 */ { u32 v = 0x312224u; r_esp -= 4; W32(r_esp, v); }
    /* 00561dda: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561de0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x561de5u); f_005f2ba0();
    /* 00561de5: push 0x312225 */ { u32 v = 0x312225u; r_esp -= 4; W32(r_esp, v); }
    /* 00561dea: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561df0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x561df5u); f_005f2ba0();
    /* 00561df5: push 0x312226 */ { u32 v = 0x312226u; r_esp -= 4; W32(r_esp, v); }
    /* 00561dfa: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00561e00: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x561e05u); f_005f2ba0();
    /* 00561e05: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00561e07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561e0a: call 0x560240 */ r_esp -= 4; W32(r_esp, 0x561e0fu); f_00560240();
L_00561e0f:; BB(0x00561e0f);
    /* 00561e0f: mov esp, ebp */ r_esp = r_ebp;
    /* 00561e11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561e12: ret 4 */ FN_RET(0x00561d40); r_esp += 8; return;
}

void f_00561e20(void) /* sub_561E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561e20);
    /* 00561e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00561e23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00561e26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00561e29: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00561e2e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00561e34: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00561e37: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00561e3d: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00561e40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561e41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00561e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561e45: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 00561e4b: call 0x5592a0 */ r_esp -= 4; W32(r_esp, 0x561e50u); f_005592a0();
    /* 00561e50: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00561e53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00561e56: call 0x561f20 */ r_esp -= 4; W32(r_esp, 0x561e5bu); f_00561f20();
    /* 00561e5b: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00561e60: movzx ecx, byte ptr [eax + 0x2e] */ r_ecx = (u32)R8((u32)(r_eax+0x2eu));
    /* 00561e64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561e66: je 0x561ec0 */ if (fZ) goto L_00561ec0;
L_00561e68:; BB(0x00561e68);
    /* 00561e68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00561e6a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00561e6d: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00561e73: call 0x5645c0 */ r_esp -= 4; W32(r_esp, 0x561e78u); f_005645c0();
    /* 00561e78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00561e7b: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00561e81: call 0x564b10 */ r_esp -= 4; W32(r_esp, 0x561e86u); f_00564b10();
    /* 00561e86: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00561e8d: jmp 0x561e98 */ goto L_00561e98;
L_00561e8f:; BB(0x00561e8f);
    /* 00561e8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561e92: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00561e95: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00561e98:; BB(0x00561e98);
    /* 00561e98: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561e9c: jge 0x561eb2 */ if ((fS==fO)) goto L_00561eb2;
L_00561e9e:; BB(0x00561e9e);
    /* 00561e9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561ea1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00561ea2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00561ea5: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00561eab: call 0x564880 */ r_esp -= 4; W32(r_esp, 0x561eb0u); f_00564880();
    /* 00561eb0: jmp 0x561e8f */ goto L_00561e8f;
L_00561eb2:; BB(0x00561eb2);
    /* 00561eb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00561eb5: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00561ebb: call 0x564490 */ r_esp -= 4; W32(r_esp, 0x561ec0u); f_00564490();
L_00561ec0:; BB(0x00561ec0);
    /* 00561ec0: mov esp, ebp */ r_esp = r_ebp;
    /* 00561ec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561ec3: ret  */ FN_RET(0x00561e20); r_esp += 4; return;
}

void f_00561ed0(void) /* sub_561ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561ed0);
    /* 00561ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00561ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00561ed7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00561eda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561edd: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00561ee1: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00561ee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561ee9: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561eef: call 0x568840 */ r_esp -= 4; W32(r_esp, 0x561ef4u); f_00568840();
    /* 00561ef4: mov esp, ebp */ r_esp = r_ebp;
    /* 00561ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561ef7: ret 4 */ FN_RET(0x00561ed0); r_esp += 8; return;
}

void f_00561f00(void) /* sub_561F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561f00);
    /* 00561f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00561f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00561f07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00561f0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00561f0d: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00561f11: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00561f18: mov esp, ebp */ r_esp = r_ebp;
    /* 00561f1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00561f1b: ret 4 */ FN_RET(0x00561f00); r_esp += 8; return;
}

void f_00561f20(void) /* sub_561F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00561f20);
    /* 00561f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00561f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00561f23: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00561f26: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00561f29: mov dword ptr [ebp - 0x14], 0x7b */ W32((u32)(r_ebp+0xffffffecu), 0x7bu);
    /* 00561f30: mov dword ptr [ebp - 0x10], 0xb6 */ W32((u32)(r_ebp+0xfffffff0u), 0xb6u);
    /* 00561f37: mov dword ptr [ebp - 0xc], 0xf1 */ W32((u32)(r_ebp+0xfffffff4u), 0xf1u);
    /* 00561f3e: mov dword ptr [ebp - 8], 0x12c */ W32((u32)(r_ebp+0xfffffff8u), 0x12cu);
    /* 00561f45: mov dword ptr [ebp - 4], 0x167 */ W32((u32)(r_ebp+0xfffffffcu), 0x167u);
    /* 00561f4c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00561f53: jmp 0x561f5e */ goto L_00561f5e;
L_00561f55:; BB(0x00561f55);
    /* 00561f55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561f58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00561f5b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00561f5e:; BB(0x00561f5e);
    /* 00561f5e: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00561f62: jge 0x562001 */ if ((fS==fO)) goto L_00562001;
L_00561f68:; BB(0x00561f68);
    /* 00561f68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561f6b: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00561f6f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00561f72: mov dword ptr [ebp - 0x18], 0x146 */ W32((u32)(r_ebp+0xffffffe8u), 0x146u);
    /* 00561f79: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00561f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561f7d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00561f80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00561f81: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561f84: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561f87: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 00561f8b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561f8e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561f91: mov edx, dword ptr [eax + edx*4 + 0x4c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 00561f95: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00561f97: mov ecx, edx */ r_ecx = r_edx;
    /* 00561f99: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00561f9c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x561f9eu); call_ind(t); }
    /* 00561f9e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561fa1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561fa4: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00561fa8: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00561faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00561fb0: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00561fb6: call 0x568840 */ r_esp -= 4; W32(r_esp, 0x561fbbu); f_00568840();
    /* 00561fbb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00561fbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00561fc0: je 0x561fe1 */ if (fZ) goto L_00561fe1;
L_00561fc2:; BB(0x00561fc2);
    /* 00561fc2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561fc5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561fc8: mov ecx, dword ptr [eax + edx*4 + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 00561fcc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561fcf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561fd2: mov edx, dword ptr [eax + edx*4 + 0x4c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4cu));
    /* 00561fd6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00561fd8: mov ecx, edx */ r_ecx = r_edx;
    /* 00561fda: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00561fdd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x561fdfu); call_ind(t); }
    /* 00561fdf: jmp 0x561ffc */ goto L_00561ffc;
L_00561fe1:; BB(0x00561fe1);
    /* 00561fe1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561fe4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561fe7: mov edx, dword ptr [ecx + eax*4 + 0x4c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 00561feb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00561fee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00561ff1: mov ecx, dword ptr [ecx + eax*4 + 0x4c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 00561ff5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00561ff7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00561ffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x561ffcu); call_ind(t); }
L_00561ffc:; BB(0x00561ffc);
    /* 00561ffc: jmp 0x561f55 */ goto L_00561f55;
L_00562001:; BB(0x00562001);
    /* 00562001: mov esp, ebp */ r_esp = r_ebp;
    /* 00562003: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00562004: ret  */ FN_RET(0x00561f20); r_esp += 4; return;
}

