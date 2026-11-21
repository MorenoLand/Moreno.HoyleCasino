#include "protos.h"

void f_0065a750(void) /* PieceSelectButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a750);
    /* 0065a750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a751: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a756: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065a759: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a75c: call 0x6060a0 */ r_esp -= 4; W32(r_esp, 0x65a761u); f_006060a0();
    /* 0065a761: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a764: mov dword ptr [eax], 0x6de564 */ W32((u32)(r_eax), 0x6de564u);
    /* 0065a76a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a771: jmp 0x65a77c */ goto L_0065a77c;
L_0065a773:; BB(0x0065a773);
    /* 0065a773: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a776: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a779: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0065a77c:; BB(0x0065a77c);
    /* 0065a77c: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065a780: jge 0x65a7a6 */ if ((fS==fO)) goto L_0065a7a6;
L_0065a782:; BB(0x0065a782);
    /* 0065a782: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a785: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a788: mov dword ptr [eax + edx*4 + 0x218], 0 */ W32((u32)(r_eax+r_edx*4+0x218u), 0x0u);
    /* 0065a793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a796: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a799: mov dword ptr [edx + ecx*4 + 0x224], 0 */ W32((u32)(r_edx+r_ecx*4+0x224u), 0x0u);
    /* 0065a7a4: jmp 0x65a773 */ goto L_0065a773;
L_0065a7a6:; BB(0x0065a7a6);
    /* 0065a7a6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a7a9: mov dword ptr [eax + 0x230], 0 */ W32((u32)(r_eax+0x230u), 0x0u);
    /* 0065a7b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a7b6: mov dword ptr [ecx + 0x234], 0 */ W32((u32)(r_ecx+0x234u), 0x0u);
    /* 0065a7c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a7c3: mov dword ptr [edx + 0x238], 0 */ W32((u32)(r_edx+0x238u), 0x0u);
    /* 0065a7cd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a7d0: mov dword ptr [eax + 0x210], 0xffffffff */ W32((u32)(r_eax+0x210u), 0xffffffffu);
    /* 0065a7da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a7dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a7df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a7e0: ret  */ FN_RET(0x0065a750); r_esp += 4; return;
}

void f_0065a7f0(void) /* PieceSelectButton::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a7f0);
    /* 0065a7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a7f5: push 0x6ac6fc */ { u32 v = 0x6ac6fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a801: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065a809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065a80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a80c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065a80f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065a815: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0065a818: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a81b: mov dword ptr [eax], 0x6de564 */ W32((u32)(r_eax), 0x6de564u);
    /* 0065a821: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a828: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065a82f: jmp 0x65a83a */ goto L_0065a83a;
L_0065a831:; BB(0x0065a831);
    /* 0065a831: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a834: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a837: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0065a83a:; BB(0x0065a83a);
    /* 0065a83a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065a83e: jge 0x65a8ae */ if ((fS==fO)) goto L_0065a8ae;
L_0065a840:; BB(0x0065a840);
    /* 0065a840: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a843: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a846: mov ecx, dword ptr [eax + edx*4 + 0x218] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x218u));
    /* 0065a84d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065a850: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065a853: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0065a856: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a85a: je 0x65a86f */ if (fZ) goto L_0065a86f;
L_0065a85c:; BB(0x0065a85c);
    /* 0065a85c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a85e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a861: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065a863: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a866: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a868: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a86au); call_ind(t); }
    /* 0065a86a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0065a86d: jmp 0x65a876 */ goto L_0065a876;
L_0065a86f:; BB(0x0065a86f);
    /* 0065a86f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0065a876:; BB(0x0065a876);
    /* 0065a876: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a879: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a87c: mov eax, dword ptr [edx + ecx*4 + 0x224] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065a883: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065a886: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a889: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065a88c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a890: je 0x65a8a5 */ if (fZ) goto L_0065a8a5;
L_0065a892:; BB(0x0065a892);
    /* 0065a892: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a894: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a897: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a899: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a89c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065a89e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65a8a0u); call_ind(t); }
    /* 0065a8a0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0065a8a3: jmp 0x65a8ac */ goto L_0065a8ac;
L_0065a8a5:; BB(0x0065a8a5);
    /* 0065a8a5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0065a8ac:; BB(0x0065a8ac);
    /* 0065a8ac: jmp 0x65a831 */ goto L_0065a831;
L_0065a8ae:; BB(0x0065a8ae);
    /* 0065a8ae: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a8b1: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 0065a8b7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0065a8ba: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065a8bd: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065a8c0: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a8c4: je 0x65a8d9 */ if (fZ) goto L_0065a8d9;
L_0065a8c6:; BB(0x0065a8c6);
    /* 0065a8c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a8c8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a8cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065a8cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065a8d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a8d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a8d4u); call_ind(t); }
    /* 0065a8d4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0065a8d7: jmp 0x65a8e0 */ goto L_0065a8e0;
L_0065a8d9:; BB(0x0065a8d9);
    /* 0065a8d9: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0065a8e0:; BB(0x0065a8e0);
    /* 0065a8e0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a8e3: mov edx, dword ptr [ecx + 0x234] */ r_edx = R32((u32)(r_ecx+0x234u));
    /* 0065a8e9: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0065a8ec: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065a8ef: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0065a8f2: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a8f6: je 0x65a90b */ if (fZ) goto L_0065a90b;
L_0065a8f8:; BB(0x0065a8f8);
    /* 0065a8f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a8fa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065a8fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065a8ff: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065a902: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a904: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a906u); call_ind(t); }
    /* 0065a906: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0065a909: jmp 0x65a912 */ goto L_0065a912;
L_0065a90b:; BB(0x0065a90b);
    /* 0065a90b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0065a912:; BB(0x0065a912);
    /* 0065a912: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a915: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 0065a91b: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0065a91e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065a921: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065a924: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a928: je 0x65a93d */ if (fZ) goto L_0065a93d;
L_0065a92a:; BB(0x0065a92a);
    /* 0065a92a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a92c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065a92f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065a931: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065a934: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a936: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a938u); call_ind(t); }
    /* 0065a938: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0065a93b: jmp 0x65a944 */ goto L_0065a944;
L_0065a93d:; BB(0x0065a93d);
    /* 0065a93d: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0065a944:; BB(0x0065a944);
    /* 0065a944: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065a94b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065a94e: call 0x6060e0 */ r_esp -= 4; W32(r_esp, 0x65a953u); f_006060e0();
    /* 0065a953: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a956: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a95d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a95e: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a960: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a961: ret  */ FN_RET(0x0065a7f0); r_esp += 4; return;
}

void f_0065a970(void) /* PieceSelectButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a970);
    /* 0065a970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a971: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a977: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a97a: call 0x65a9a0 */ r_esp -= 4; W32(r_esp, 0x65a97fu); f_0065a9a0();
    /* 0065a97f: mov eax, dword ptr [0x16306a4] */ r_eax = R32((u32)(0x16306a4u));
    /* 0065a984: mov ecx, dword ptr [eax + 0x5fc] */ r_ecx = R32((u32)(r_eax+0x5fcu));
    /* 0065a98a: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x65a98fu); f_006067e0();
    /* 0065a98f: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a992: ret  */ FN_RET(0x0065a970); r_esp += 4; return;
}

void f_0065b800(void) /* PieceSelectButton::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065b800);
    /* 0065b800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065b801: mov ebp, esp */ r_ebp = r_esp;
    /* 0065b803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065b806: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065b809: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b80c: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x65b811u); f_00602550();
    /* 0065b811: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065b818: jmp 0x65b823 */ goto L_0065b823;
L_0065b81a:; BB(0x0065b81a);
    /* 0065b81a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b81d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b820: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065b823:; BB(0x0065b823);
    /* 0065b823: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065b827: jge 0x65b88d */ if ((fS==fO)) goto L_0065b88d;
L_0065b829:; BB(0x0065b829);
    /* 0065b829: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b82c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b82f: cmp dword ptr [edx + ecx*4 + 0x218], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x218u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b837: je 0x65b85a */ if (fZ) goto L_0065b85a;
L_0065b839:; BB(0x0065b839);
    /* 0065b839: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b83c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b83f: mov edx, dword ptr [ecx + eax*4 + 0x218] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065b846: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b849: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b84c: mov ecx, dword ptr [ecx + eax*4 + 0x218] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065b853: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b855: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065b858: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b85au); call_ind(t); }
L_0065b85a:; BB(0x0065b85a);
    /* 0065b85a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b85d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b860: cmp dword ptr [edx + ecx*4 + 0x224], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x224u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b868: je 0x65b88b */ if (fZ) goto L_0065b88b;
L_0065b86a:; BB(0x0065b86a);
    /* 0065b86a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b86d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b870: mov edx, dword ptr [ecx + eax*4 + 0x224] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065b877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065b87a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065b87d: mov ecx, dword ptr [ecx + eax*4 + 0x224] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065b884: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b886: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065b889: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b88bu); call_ind(t); }
L_0065b88b:; BB(0x0065b88b);
    /* 0065b88b: jmp 0x65b81a */ goto L_0065b81a;
L_0065b88d:; BB(0x0065b88d);
    /* 0065b88d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b88f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b890: ret  */ FN_RET(0x0065b800); r_esp += 4; return;
}

