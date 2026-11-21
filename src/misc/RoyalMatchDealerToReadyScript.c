#include "protos.h"

void f_005aa670(void) /* RoyalMatchDealerToReadyScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa670);
    /* 005aa670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa671: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa675: push 0x6a7b06 */ { u32 v = 0x6a7b06u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa67a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa682: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aa687: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa68a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aa68d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aa693: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005aa696: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005aa699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa69a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa69d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5aa6a2u); f_005fc0d0();
    /* 005aa6a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aa6a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa6ac: mov dword ptr [ecx], 0x6cfc90 */ W32((u32)(r_ecx), 0x6cfc90u);
    /* 005aa6b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa6b5: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005aa6b8: mov byte ptr [edx + 0x20], al */ W8((u32)(r_edx+0x20u), (u8)r_eax);
    /* 005aa6bb: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005aa6bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa6c1: je 0x5aa6ea */ if (fZ) goto L_005aa6ea;
L_005aa6c3:; BB(0x005aa6c3);
    /* 005aa6c3: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6c8: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa6ce: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005aa6d1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa6d6u); f_005eaf00();
    /* 005aa6d6: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6db: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa6e0: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aa6e3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa6e8u); f_005eaf00();
    /* 005aa6e8: jmp 0x5aa710 */ goto L_005aa710;
L_005aa6ea:; BB(0x005aa6ea);
    /* 005aa6ea: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa6ef: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa6f5: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005aa6f8: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa6fdu); f_005eaf00();
    /* 005aa6fd: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa702: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa708: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 005aa70b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa710u); f_005eaf00();
L_005aa710:; BB(0x005aa710);
    /* 005aa710: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa712: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa717: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa71a: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa720: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005aa723: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aa725: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa727: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa72d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa72fu); call_ind(t); }
    /* 005aa72f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa731: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa737: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005aa73a: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa73f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aa742: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa744: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa74a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa74cu); call_ind(t); }
    /* 005aa74c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa752: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aa755: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa75a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa75d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa75f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005aa762: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa764u); call_ind(t); }
    /* 005aa764: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa76a: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005aa76d: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa772: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aa775: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa777: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005aa77a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa77cu); call_ind(t); }
    /* 005aa77c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa783: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa786: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa789: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa791: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa794: ret 8 */ FN_RET(0x005aa670); r_esp += 12; return;
}

void f_005aa7a0(void) /* RoyalMatchDealerToReadyScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa7a0);
    /* 005aa7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa7a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa7a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005aa7a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa7ac: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5aa7b1u); f_005fc360();
    /* 005aa7b1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005aa7b4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa7b8: je 0x5aa7cf */ if (fZ) goto L_005aa7cf;
L_005aa7ba:; BB(0x005aa7ba);
    /* 005aa7ba: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa7be: je 0x5aa814 */ if (fZ) goto L_005aa814;
L_005aa7c0:; BB(0x005aa7c0);
    /* 005aa7c0: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa7c4: je 0x5aa931 */ if (fZ) goto L_005aa931;
L_005aa7ca:; BB(0x005aa7ca);
    /* 005aa7ca: jmp 0x5aa95e */ goto L_005aa95e;
L_005aa7cf:; BB(0x005aa7cf);
    /* 005aa7cf: mov dword ptr [0x7935e0], 0 */ W32((u32)(0x7935e0u), 0x0u);
    /* 005aa7d9: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa7de: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa7e1: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5aa7e6u); f_005eb240();
    /* 005aa7e6: mov dword ptr [0x7935dc], eax */ W32((u32)(0x7935dcu), r_eax);
    /* 005aa7eb: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa7f1: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa7f4: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5aa7f9u); f_005eb240();
    /* 005aa7f9: mov dword ptr [0x7935d8], eax */ W32((u32)(0x7935d8u), r_eax);
    /* 005aa7fe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa800: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa802: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa805: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005aa807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa80a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005aa80d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aa80fu); call_ind(t); }
    /* 005aa80f: jmp 0x5aa979 */ goto L_005aa979;
L_005aa814:; BB(0x005aa814);
    /* 005aa814: mov eax, dword ptr [0x7935e0] */ r_eax = R32((u32)(0x7935e0u));
    /* 005aa819: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aa81c: mov dword ptr [0x7935e0], eax */ W32((u32)(0x7935e0u), r_eax);
    /* 005aa821: mov ecx, dword ptr [0x7935e0] */ r_ecx = R32((u32)(0x7935e0u));
    /* 005aa827: cmp ecx, dword ptr [0x7935d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa82d: jg 0x5aa853 */ if ((!fZ&&fS==fO)) goto L_005aa853;
L_005aa82f:; BB(0x005aa82f);
    /* 005aa82f: mov edx, dword ptr [0x7935e0] */ r_edx = R32((u32)(0x7935e0u));
    /* 005aa835: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa836: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa83b: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aa83e: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa844: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005aa847: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aa849: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa84b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa851: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa853u); call_ind(t); }
L_005aa853:; BB(0x005aa853);
    /* 005aa853: mov ecx, dword ptr [0x7935e0] */ r_ecx = R32((u32)(0x7935e0u));
    /* 005aa859: cmp ecx, dword ptr [0x7935dc] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa85f: jg 0x5aa885 */ if ((!fZ&&fS==fO)) goto L_005aa885;
L_005aa861:; BB(0x005aa861);
    /* 005aa861: mov edx, dword ptr [0x7935e0] */ r_edx = R32((u32)(0x7935e0u));
    /* 005aa867: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa868: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa86d: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa870: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa876: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005aa879: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aa87b: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa87d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa883: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa885u); call_ind(t); }
L_005aa885:; BB(0x005aa885);
    /* 005aa885: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa888: movzx edx, byte ptr [ecx + 0x20] */ r_edx = (u32)R8((u32)(r_ecx+0x20u));
    /* 005aa88c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005aa88e: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005aa890: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005aa893: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005aa896: cmp dword ptr [0x7935e0], edx */ {  u32 a = R32((u32)(0x7935e0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa89c: jne 0x5aa8e4 */ if (!fZ) goto L_005aa8e4;
L_005aa89e:; BB(0x005aa89e);
    /* 005aa89e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aa8a4: call 0x5b6790 */ r_esp -= 4; W32(r_esp, 0x5aa8a9u); f_005b6790();
    /* 005aa8a9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aa8af: cmp dword ptr [ecx + 0x5b0], eax */ {  u32 a = R32((u32)(r_ecx+0x5b0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa8b5: jne 0x5aa8e4 */ if (!fZ) goto L_005aa8e4;
L_005aa8b7:; BB(0x005aa8b7);
    /* 005aa8b7: push 0x13a1 */ { u32 v = 0x13a1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa8bc: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa8c2: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005aa8c5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa8cau); f_005eaf00();
    /* 005aa8ca: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa8cf: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 005aa8d2: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa8d8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005aa8db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aa8dd: mov ecx, eax */ r_ecx = r_eax;
    /* 005aa8df: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005aa8e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa8e4u); call_ind(t); }
L_005aa8e4:; BB(0x005aa8e4);
    /* 005aa8e4: mov ecx, dword ptr [0x7935e0] */ r_ecx = R32((u32)(0x7935e0u));
    /* 005aa8ea: cmp ecx, dword ptr [0x7935dc] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7935dcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa8f0: jl 0x5aa900 */ if ((fS!=fO)) goto L_005aa900;
L_005aa8f2:; BB(0x005aa8f2);
    /* 005aa8f2: mov edx, dword ptr [0x7935e0] */ r_edx = R32((u32)(0x7935e0u));
    /* 005aa8f8: cmp edx, dword ptr [0x7935d8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x7935d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa8fe: jge 0x5aa911 */ if ((fS==fO)) goto L_005aa911;
L_005aa900:; BB(0x005aa900);
    /* 005aa900: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa902: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa905: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa90a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aa90d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa90fu); call_ind(t); }
    /* 005aa90f: jmp 0x5aa920 */ goto L_005aa920;
L_005aa911:; BB(0x005aa911);
    /* 005aa911: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa913: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa916: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aa918: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa91b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aa91e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa920u); call_ind(t); }
L_005aa920:; BB(0x005aa920);
    /* 005aa920: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa922: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa925: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aa927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa92a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005aa92d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa92fu); call_ind(t); }
    /* 005aa92f: jmp 0x5aa979 */ goto L_005aa979;
L_005aa931:; BB(0x005aa931);
    /* 005aa931: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa934: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa938: je 0x5aa95c */ if (fZ) goto L_005aa95c;
L_005aa93a:; BB(0x005aa93a);
    /* 005aa93a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa93c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa93f: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005aa942: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa945: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005aa948: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa94a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005aa94d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa94fu); call_ind(t); }
    /* 005aa94f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa951: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa954: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005aa957: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5aa95cu); f_005fc420();
L_005aa95c:; BB(0x005aa95c);
    /* 005aa95c: jmp 0x5aa979 */ goto L_005aa979;
L_005aa95e:; BB(0x005aa95e);
    /* 005aa95e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005aa960: jne 0x5aa979 */ if (!fZ) goto L_005aa979;
L_005aa962:; BB(0x005aa962);
    /* 005aa962: push 0x437 */ { u32 v = 0x437u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa967: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa96c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa971: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5aa976u); f_005e9f20();
    /* 005aa976: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aa979:; BB(0x005aa979);
    /* 005aa979: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa97b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa97c: ret  */ FN_RET(0x005aa7a0); r_esp += 4; return;
}

