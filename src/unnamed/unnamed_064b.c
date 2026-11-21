#include "protos.h"

void f_0064b790(void) /* sub_64B790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b790);
    /* 0064b790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b791: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b793: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b796: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064b799: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b7a0: jmp 0x64b7ab */ goto L_0064b7ab;
L_0064b7a2:; BB(0x0064b7a2);
    /* 0064b7a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b7a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b7a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064b7ab:; BB(0x0064b7ab);
    /* 0064b7ab: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b7af: jge 0x64b826 */ if ((fS==fO)) goto L_0064b826;
L_0064b7b1:; BB(0x0064b7b1);
    /* 0064b7b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b7b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b7b7: cmp dword ptr [edx + ecx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b7bf: je 0x64b821 */ if (fZ) goto L_0064b821;
L_0064b7c1:; BB(0x0064b7c1);
    /* 0064b7c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b7c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b7c7: mov ecx, dword ptr [ecx + eax*4 + 0x198] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0064b7ce: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x64b7d3u); f_005eafc0();
    /* 0064b7d3: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b7d6: jne 0x64b821 */ if (!fZ) goto L_0064b821;
L_0064b7d8:; BB(0x0064b7d8);
    /* 0064b7d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b7db: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b7de: mov ecx, dword ptr [eax + edx*4 + 0x198] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 0064b7e5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064b7e8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b7eb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0064b7ee: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b7f2: je 0x64b807 */ if (fZ) goto L_0064b807;
L_0064b7f4:; BB(0x0064b7f4);
    /* 0064b7f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b7f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064b7f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b7fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064b7fe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b800: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b802u); call_ind(t); }
    /* 0064b802: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064b805: jmp 0x64b80e */ goto L_0064b80e;
L_0064b807:; BB(0x0064b807);
    /* 0064b807: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0064b80e:; BB(0x0064b80e);
    /* 0064b80e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b811: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b814: mov dword ptr [edx + ecx*4 + 0x198], 0 */ W32((u32)(r_edx+r_ecx*4+0x198u), 0x0u);
    /* 0064b81f: jmp 0x64b826 */ goto L_0064b826;
L_0064b821:; BB(0x0064b821);
    /* 0064b821: jmp 0x64b7a2 */ goto L_0064b7a2;
L_0064b826:; BB(0x0064b826);
    /* 0064b826: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b829: ret 4 */ FN_RET(0x0064b790); r_esp += 8; return;
}

void f_0064b830(void) /* sub_64B830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b830);
    /* 0064b830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b831: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b833: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b836: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064b839: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b840: jmp 0x64b84b */ goto L_0064b84b;
L_0064b842:; BB(0x0064b842);
    /* 0064b842: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b845: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b848: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064b84b:; BB(0x0064b84b);
    /* 0064b84b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b84f: jge 0x64b8aa */ if ((fS==fO)) goto L_0064b8aa;
L_0064b851:; BB(0x0064b851);
    /* 0064b851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b854: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b857: cmp dword ptr [edx + ecx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b85f: je 0x64b8a8 */ if (fZ) goto L_0064b8a8;
L_0064b861:; BB(0x0064b861);
    /* 0064b861: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b864: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b867: mov edx, dword ptr [ecx + eax*4 + 0x198] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0064b86e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0064b871: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b874: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064b877: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b87b: je 0x64b890 */ if (fZ) goto L_0064b890;
L_0064b87d:; BB(0x0064b87d);
    /* 0064b87d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b87f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064b882: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064b884: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064b887: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b889: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b88bu); call_ind(t); }
    /* 0064b88b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064b88e: jmp 0x64b897 */ goto L_0064b897;
L_0064b890:; BB(0x0064b890);
    /* 0064b890: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0064b897:; BB(0x0064b897);
    /* 0064b897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b89a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b89d: mov dword ptr [edx + ecx*4 + 0x198], 0 */ W32((u32)(r_edx+r_ecx*4+0x198u), 0x0u);
L_0064b8a8:; BB(0x0064b8a8);
    /* 0064b8a8: jmp 0x64b842 */ goto L_0064b842;
L_0064b8aa:; BB(0x0064b8aa);
    /* 0064b8aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b8ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b8ad: ret  */ FN_RET(0x0064b830); r_esp += 4; return;
}

void f_0064ba60(void) /* sub_64BA60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ba60);
    /* 0064ba60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba61: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ba63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba65: push 0x6abfa9 */ { u32 v = 0x6abfa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ba70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba71: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ba74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ba79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ba7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064ba7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064ba85: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064ba88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ba8d: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0064ba93: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x64ba98u); f_005f53c0();
    /* 0064ba98: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ba9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064baa0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064baa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064baa4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064baa7: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x64baacu); f_005eae80();
    /* 0064baac: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bab0: je 0x64bba3 */ if (fZ) goto L_0064bba3;
L_0064bab6:; BB(0x0064bab6);
    /* 0064bab6: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064bab8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64babdu); f_00686d82();
    /* 0064babd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bac0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064bac3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064baca: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bace: je 0x64badd */ if (fZ) goto L_0064badd;
L_0064bad0:; BB(0x0064bad0);
    /* 0064bad0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bad3: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x64bad8u); f_005f6130();
    /* 0064bad8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064badb: jmp 0x64bae4 */ goto L_0064bae4;
L_0064badd:; BB(0x0064badd);
    /* 0064badd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064bae4:; BB(0x0064bae4);
    /* 0064bae4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064bae7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064baea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064baf1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064baf4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064baf7: mov dword ptr [eax + 0x17c], ecx */ W32((u32)(r_eax+0x17cu), r_ecx);
    /* 0064bafd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064baff: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb0c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064bb0f: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 0064bb15: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x64bb1au); f_005f61d0();
    /* 0064bb1a: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb1f: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb24: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064bb2c: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bb32: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x64bb37u); f_005f6580();
    /* 0064bb37: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb3c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64bb41u); f_00686d82();
    /* 0064bb41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bb44: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064bb47: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064bb4e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bb52: je 0x64bb61 */ if (fZ) goto L_0064bb61;
L_0064bb54:; BB(0x0064bb54);
    /* 0064bb54: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064bb57: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x64bb5cu); f_005ec5a0();
    /* 0064bb5c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064bb5f: jmp 0x64bb68 */ goto L_0064bb68;
L_0064bb61:; BB(0x0064bb61);
    /* 0064bb61: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0064bb68:; BB(0x0064bb68);
    /* 0064bb68: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064bb6b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064bb6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064bb75: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064bb78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064bb7b: mov dword ptr [edx + 0x180], eax */ W32((u32)(r_edx+0x180u), r_eax);
    /* 0064bb81: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb83: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb85: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb8f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb91: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064bb94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bb95: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064bb98: mov ecx, dword ptr [edx + 0x180] */ r_ecx = R32((u32)(r_edx+0x180u));
    /* 0064bb9e: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x64bba3u); f_005ec8f0();
L_0064bba3:; BB(0x0064bba3);
    /* 0064bba3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064bba6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064bba8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064bbab: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064bbae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bbb0u); call_ind(t); }
    /* 0064bbb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064bbb3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064bbba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064bbbb: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bbbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bbbe: ret 8 */ FN_RET(0x0064ba60); r_esp += 12; return;
}

void f_0064bc50(void) /* sub_64BC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bc50);
    /* 0064bc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bc53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064bc56: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064bc59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bc5c: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0064bc62: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 0064bc68: call 0x646e40 */ r_esp -= 4; W32(r_esp, 0x64bc6du); f_00646e40();
    /* 0064bc6d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064bc70: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bc73: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0064bc79: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0064bc7f: call 0x646e70 */ r_esp -= 4; W32(r_esp, 0x64bc84u); f_00646e70();
    /* 0064bc84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064bc87: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0064bc89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bc8c: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0064bc92: call 0x5f5530 */ r_esp -= 4; W32(r_esp, 0x64bc97u); f_005f5530();
    /* 0064bc97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bc9a: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0064bca0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bca3: mov ecx, dword ptr [ecx + 0x180] */ r_ecx = R32((u32)(r_ecx+0x180u));
    /* 0064bca9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064bcab: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0064bcb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bcb3u); call_ind(t); }
    /* 0064bcb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bcb4: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x64bcb9u); f_00686ecc();
    /* 0064bcb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064bcbc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064bcbe: mov ecx, 0x17 */ r_ecx = 0x17u;
    /* 0064bcc3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0064bcc3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0064bcc3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064bcc5: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064bcc8: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064bccb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064bcce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064bcd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bcd2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bcd5: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bcdb: call 0x5f5570 */ r_esp -= 4; W32(r_esp, 0x64bce0u); f_005f5570();
    /* 0064bce0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bce3: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0064bce9: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 0064bcef: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x64bcf4u); f_00646d10();
    /* 0064bcf4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064bcf7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0064bcf9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0064bcfb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064bcfd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064bd00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064bd03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bd06: add edx, dword ptr [ecx*8 + 0x76d430] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*8+0x76d430u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064bd0d: mov eax, 0x46 */ r_eax = 0x46u;
    /* 0064bd12: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064bd15: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064bd17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064bd1b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064bd1e: add edx, dword ptr [ecx*8 + 0x76d42c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx*8+0x76d42cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064bd25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd29: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bd2f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd32: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0064bd38: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064bd3a: mov ecx, eax */ r_ecx = r_eax;
    /* 0064bd3c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064bd3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bd41u); call_ind(t); }
    /* 0064bd41: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd46: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd49: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0064bd4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd52: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bd58: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064bd5a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064bd5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bd5fu); call_ind(t); }
    /* 0064bd5f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd62: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0064bd68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd6b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bd71: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064bd73: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064bd76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bd78u); call_ind(t); }
    /* 0064bd78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd7b: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0064bd81: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64bd86u); f_005f5550();
    /* 0064bd86: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064bd89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bd8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd8d: mov ecx, dword ptr [edx + 0x180] */ r_ecx = R32((u32)(r_edx+0x180u));
    /* 0064bd93: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x64bd98u); f_005ecc60();
    /* 0064bd98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bd9b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bda1: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x64bda6u); f_005f5590();
    /* 0064bda6: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064bda9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bdaa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bdad: mov ecx, dword ptr [ecx + 0x180] */ r_ecx = R32((u32)(r_ecx+0x180u));
    /* 0064bdb3: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x64bdb8u); f_005eccb0();
    /* 0064bdb8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bdbb: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0064bdc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bdc4: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0064bdca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064bdcc: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064bdcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bdd1u); call_ind(t); }
    /* 0064bdd1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064bdd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bdd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bdd8: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0064bdde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bde1: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064bde7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064bde9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064bdec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bdeeu); call_ind(t); }
    /* 0064bdee: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064bdf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064bdf2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bdf5: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 0064bdfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064bdfe: mov ecx, dword ptr [eax + 0x180] */ r_ecx = R32((u32)(r_eax+0x180u));
    /* 0064be04: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064be06: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064be09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64be0bu); call_ind(t); }
    /* 0064be0b: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0064be10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064be13: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 0064be19: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064be1c: mov ecx, dword ptr [eax + 0x180] */ r_ecx = R32((u32)(r_eax+0x180u));
    /* 0064be22: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064be24: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064be27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64be29u); call_ind(t); }
    /* 0064be29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064be2c: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 0064be32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064be35: mov ecx, dword ptr [eax + 0x180] */ r_ecx = R32((u32)(r_eax+0x180u));
    /* 0064be3b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064be3d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064be40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64be42u); call_ind(t); }
    /* 0064be42: mov esp, ebp */ r_esp = r_ebp;
    /* 0064be44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064be45: ret  */ FN_RET(0x0064bc50); r_esp += 4; return;
}

void f_0064be50(void) /* sub_64BE50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064be50);
    /* 0064be50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064be51: mov ebp, esp */ r_ebp = r_esp;
    /* 0064be53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064be54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064be57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064be5a: cmp dword ptr [eax + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064be61: je 0x64be7c */ if (fZ) goto L_0064be7c;
L_0064be63:; BB(0x0064be63);
    /* 0064be63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064be66: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0064be6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064be6f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0064be75: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064be77: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064be7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64be7cu); call_ind(t); }
L_0064be7c:; BB(0x0064be7c);
    /* 0064be7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064be7f: cmp dword ptr [ecx + 0x180], 0 */ {  u32 a = R32((u32)(r_ecx+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064be86: je 0x64bea1 */ if (fZ) goto L_0064bea1;
L_0064be88:; BB(0x0064be88);
    /* 0064be88: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064be8b: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0064be91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064be94: mov ecx, dword ptr [ecx + 0x180] */ r_ecx = R32((u32)(r_ecx+0x180u));
    /* 0064be9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064be9c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064be9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bea1u); call_ind(t); }
L_0064bea1:; BB(0x0064bea1);
    /* 0064bea1: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bea3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bea4: ret  */ FN_RET(0x0064be50); r_esp += 4; return;
}

