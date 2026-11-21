#include "protos.h"

void f_00600630(void) /* sciCycleSync::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600630);
    /* 00600630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600631: mov ebp, esp */ r_ebp = r_esp;
    /* 00600633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600635: push 0x6aa83b */ { u32 v = 0x6aa83bu; r_esp -= 4; W32(r_esp, v); }
    /* 0060063a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600641: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600642: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00600643: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00600648: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060064a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060064b: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060064e: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00600654: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00600657: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060065a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060065b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060065e: call 0x600420 */ r_esp -= 4; W32(r_esp, 0x600663u); f_00600420();
    /* 00600663: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060066a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060066d: mov dword ptr [ecx], 0x6d7404 */ W32((u32)(r_ecx), 0x6d7404u);
    /* 00600673: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600676: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600679: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0060067c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060067e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600681: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00600684: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600685: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 0060068a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060068f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00600692: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x600697u); f_00603c50();
    /* 00600697: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060069a: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0060069d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006a0: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006006a4: je 0x6006bf */ if (fZ) goto L_006006bf;
L_006006a6:; BB(0x006006a6);
    /* 006006a6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006a9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006006ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006af: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006006b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006006b4: mov ecx, eax */ r_ecx = r_eax;
    /* 006006b6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006006b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6006bbu); call_ind(t); }
    /* 006006bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006006bd: jne 0x6006cb */ if (!fZ) goto L_006006cb;
L_006006bf:; BB(0x006006bf);
    /* 006006bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006c2: mov dword ptr [ecx + 0x24], 0xffffffff */ W32((u32)(r_ecx+0x24u), 0xffffffffu);
    /* 006006c9: jmp 0x60070a */ goto L_0060070a;
L_006006cb:; BB(0x006006cb);
    /* 006006cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006ce: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 006006d5: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006006db: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x6006e0u); f_005f3e50();
    /* 006006e0: mov esi, eax */ r_esi = r_eax;
    /* 006006e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006e5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006006e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006eb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006006ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006006f0: mov ecx, eax */ r_ecx = r_eax;
    /* 006006f2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006006f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6006f7u); call_ind(t); }
    /* 006006f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006006fa: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006006fd: movzx eax, byte ptr [eax + edx*2 + 1] */ r_eax = (u32)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 00600702: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00600704: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600707: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
L_0060070a:; BB(0x0060070a);
    /* 0060070a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00600711: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600714: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600717: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060071e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060071f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600720: mov esp, ebp */ r_esp = r_ebp;
    /* 00600722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600723: ret 8 */ FN_RET(0x00600630); r_esp += 12; return;
}

void f_00600730(void) /* sciCycleSync::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600730);
    /* 00600730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600731: mov ebp, esp */ r_ebp = r_esp;
    /* 00600733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600735: push 0x6aa85e */ { u32 v = 0x6aa85eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060073a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600741: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600742: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00600747: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060074a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060074d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00600753: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00600756: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600759: mov dword ptr [eax], 0x6d7404 */ W32((u32)(r_eax), 0x6d7404u);
    /* 0060075f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600766: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600769: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060076d: je 0x60078e */ if (fZ) goto L_0060078e;
L_0060076f:; BB(0x0060076f);
    /* 0060076f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600772: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00600775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600776: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0060077c: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0060077f: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x600784u); f_006041d0();
    /* 00600784: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600787: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_0060078e:; BB(0x0060078e);
    /* 0060078e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00600795: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00600798: call 0x6004c0 */ r_esp -= 4; W32(r_esp, 0x60079du); f_006004c0();
    /* 0060079d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006007a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006007a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006007a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006007aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006007ab: ret  */ FN_RET(0x00600730); r_esp += 4; return;
}

void f_006007b0(void) /* sciCycleSync::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006007b0);
    /* 006007b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006007b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006007b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006007b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006007b5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006007b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007bb: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006007bf: je 0x60080e */ if (fZ) goto L_0060080e;
L_006007c1:; BB(0x006007c1);
    /* 006007c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007c4: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 006007cb: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006007d1: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x6007d6u); f_005f3e50();
    /* 006007d6: mov esi, eax */ r_esi = r_eax;
    /* 006007d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007db: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006007de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007e1: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006007e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006007e6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006007e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6007ebu); call_ind(t); }
    /* 006007eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007ee: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006007f1: movzx eax, byte ptr [eax + edx*2 + 1] */ r_eax = (u32)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 006007f6: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006007f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006007fb: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 006007fe: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00600801: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600802: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600805: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600806: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600809: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x60080eu); f_006004e0();
L_0060080e:; BB(0x0060080e);
    /* 0060080e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060080f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600812: ret 8 */ FN_RET(0x006007b0); r_esp += 12; return;
}

void f_00600820(void) /* sciCycleSync::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600820);
    /* 00600820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600821: mov ebp, esp */ r_ebp = r_esp;
    /* 00600823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00600825: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600828: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060082b: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 0060082f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600831: jne 0x600838 */ if (!fZ) goto L_00600838;
L_00600833:; BB(0x00600833);
    /* 00600833: jmp 0x6008ed */ goto L_006008ed;
L_00600838:; BB(0x00600838);
    /* 00600838: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060083b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060083d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600840: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00600843: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x600845u); call_ind(t); }
    /* 00600845: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00600848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060084a: je 0x6008ed */ if (fZ) goto L_006008ed;
L_00600850:; BB(0x00600850);
    /* 00600850: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600853: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00600856: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600859: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060085c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0060085f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600862: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00600865: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x60086au); f_0061ed80();
    /* 0060086a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060086b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060086d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0060086f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600872: cmp dword ptr [edx + 0x24], eax */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600875: jl 0x600886 */ if ((fS!=fO)) goto L_00600886;
L_00600877:; BB(0x00600877);
    /* 00600877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060087a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060087c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060087f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00600882: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600884u); call_ind(t); }
    /* 00600884: jmp 0x6008ed */ goto L_006008ed;
L_00600886:; BB(0x00600886);
    /* 00600886: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600889: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0060088c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060088f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00600892: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600894: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600897: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600899u); call_ind(t); }
    /* 00600899: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060089c: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0060089f: movzx eax, byte ptr [eax + edx*2] */ r_eax = (u32)R8((u32)(r_eax+r_edx*2));
    /* 006008a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006008a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008a7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006008aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008ad: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006008b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006008b2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006008b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6008bau); call_ind(t); }
    /* 006008ba: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006008c0: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x6008c5u); f_005f3e50();
    /* 006008c5: mov esi, eax */ r_esi = r_eax;
    /* 006008c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008ca: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006008cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008d0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006008d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006008d5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006008d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6008dau); call_ind(t); }
    /* 006008da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008dd: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006008e0: movzx eax, byte ptr [eax + edx*2 + 1] */ r_eax = (u32)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 006008e5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006008e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006008ea: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
L_006008ed:; BB(0x006008ed);
    /* 006008ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006008ee: mov esp, ebp */ r_esp = r_ebp;
    /* 006008f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006008f1: ret  */ FN_RET(0x00600820); r_esp += 4; return;
}

void f_00600900(void) /* sciCycleSync::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600900);
    /* 00600900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600901: mov ebp, esp */ r_ebp = r_esp;
    /* 00600903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600907: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060090a: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060090e: je 0x600931 */ if (fZ) goto L_00600931;
L_00600910:; BB(0x00600910);
    /* 00600910: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00600916: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x60091bu); f_005f3e50();
    /* 0060091b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060091e: cmp eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00600921: jl 0x600931 */ if ((fS!=fO)) goto L_00600931;
L_00600923:; BB(0x00600923);
    /* 00600923: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600926: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 0060092d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060092f: jmp 0x600933 */ goto L_00600933;
L_00600931:; BB(0x00600931);
    /* 00600931: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00600933:; BB(0x00600933);
    /* 00600933: mov esp, ebp */ r_esp = r_ebp;
    /* 00600935: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600936: ret  */ FN_RET(0x00600900); r_esp += 4; return;
}

void f_00600940(void) /* sciCycleSync::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600940);
    /* 00600940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600941: mov ebp, esp */ r_ebp = r_esp;
    /* 00600943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060094a: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x60094fu); f_006005d0();
    /* 0060094f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600952: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600956: je 0x600976 */ if (fZ) goto L_00600976;
L_00600958:; BB(0x00600958);
    /* 00600958: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060095b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0060095e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060095f: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00600964: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00600967: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x60096cu); f_006041d0();
    /* 0060096c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060096f: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
L_00600976:; BB(0x00600976);
    /* 00600976: mov esp, ebp */ r_esp = r_ebp;
    /* 00600978: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600979: ret  */ FN_RET(0x00600940); r_esp += 4; return;
}

