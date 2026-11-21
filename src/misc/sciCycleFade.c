#include "protos.h"

void f_00601580(void) /* sciCycleFade::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601580);
    /* 00601580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601581: mov ebp, esp */ r_ebp = r_esp;
    /* 00601583: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601586: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00601589: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060158c: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00601590: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601592: jne 0x601599 */ if (!fZ) goto L_00601599;
L_00601594:; BB(0x00601594);
    /* 00601594: jmp 0x601642 */ goto L_00601642;
L_00601599:; BB(0x00601599);
    /* 00601599: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060159c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060159e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006015a1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006015a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6015a6u); call_ind(t); }
    /* 006015a6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006015a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006015ab: jne 0x6015b2 */ if (!fZ) goto L_006015b2;
L_006015ad:; BB(0x006015ad);
    /* 006015ad: jmp 0x601642 */ goto L_00601642;
L_006015b2:; BB(0x006015b2);
    /* 006015b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006015b5: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006015b8: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6015bdu); f_005eb610();
    /* 006015bd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006015c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006015c3: movsx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1cu));
    /* 006015c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006015ca: imul ecx, dword ptr [eax + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006015ce: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006015d0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006015d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006015d6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006015d9: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6015deu); f_005eb610();
    /* 006015de: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006015e1: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006015e4: je 0x601642 */ if (fZ) goto L_00601642;
L_006015e6:; BB(0x006015e6);
    /* 006015e6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006015ea: jg 0x6015f3 */ if ((!fZ&&fS==fO)) goto L_006015f3;
L_006015ec:; BB(0x006015ec);
    /* 006015ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_006015f3:; BB(0x006015f3);
    /* 006015f3: cmp dword ptr [ebp - 4], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006015fa: jl 0x601603 */ if ((fS!=fO)) goto L_00601603;
L_006015fc:; BB(0x006015fc);
    /* 006015fc: mov dword ptr [ebp - 4], 0xff */ W32((u32)(r_ebp+0xfffffffcu), 0xffu);
L_00601603:; BB(0x00601603);
    /* 00601603: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601606: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060160a: jne 0x601612 */ if (!fZ) goto L_00601612;
L_0060160c:; BB(0x0060160c);
    /* 0060160c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601610: je 0x601624 */ if (fZ) goto L_00601624;
L_00601612:; BB(0x00601612);
    /* 00601612: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601615: cmp dword ptr [ecx + 0xc], 1 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601619: jne 0x601633 */ if (!fZ) goto L_00601633;
L_0060161b:; BB(0x0060161b);
    /* 0060161b: cmp dword ptr [ebp - 4], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601622: jne 0x601633 */ if (!fZ) goto L_00601633;
L_00601624:; BB(0x00601624);
    /* 00601624: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601627: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601629: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060162c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0060162f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601631u); call_ind(t); }
    /* 00601631: jmp 0x601642 */ goto L_00601642;
L_00601633:; BB(0x00601633);
    /* 00601633: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 00601636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601637: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060163a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0060163d: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x601642u); f_005eb5d0();
L_00601642:; BB(0x00601642);
    /* 00601642: mov esp, ebp */ r_esp = r_ebp;
    /* 00601644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601645: ret  */ FN_RET(0x00601580); r_esp += 4; return;
}

void f_00601650(void) /* sciCycleFade::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601650);
    /* 00601650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601651: mov ebp, esp */ r_ebp = r_esp;
    /* 00601653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601657: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060165a: movzx ecx, byte ptr [eax + 0x1d] */ r_ecx = (u32)R8((u32)(r_eax+0x1du));
    /* 0060165e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601660: je 0x601675 */ if (fZ) goto L_00601675;
L_00601662:; BB(0x00601662);
    /* 00601662: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601665: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00601668: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060166b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0060166e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601670: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00601673: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601675u); call_ind(t); }
L_00601675:; BB(0x00601675);
    /* 00601675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601678: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x60167du); f_006005d0();
    /* 0060167d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060167f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601680: ret  */ FN_RET(0x00601650); r_esp += 4; return;
}

