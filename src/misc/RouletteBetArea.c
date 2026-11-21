#include "protos.h"

void f_00523890(void) /* RouletteBetArea::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523890);
    /* 00523890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523891: mov ebp, esp */ r_ebp = r_esp;
    /* 00523893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052389a: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x52389fu); f_005cc1d0();
    /* 0052389f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005238a2: mov dword ptr [eax], 0x6c306c */ W32((u32)(r_eax), 0x6c306cu);
    /* 005238a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005238ab: mov dword ptr [ecx + 0xae0], 0 */ W32((u32)(r_ecx+0xae0u), 0x0u);
    /* 005238b5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005238b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005238ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005238bb: ret  */ FN_RET(0x00523890); r_esp += 4; return;
}

void f_005238c0(void) /* RouletteBetArea::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005238c0);
    /* 005238c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005238c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005238c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005238c5: push 0x6a4065 */ { u32 v = 0x6a4065u; r_esp -= 4; W32(r_esp, v); }
    /* 005238ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005238d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005238d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005238d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005238d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005238db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005238dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005238df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005238e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005238e8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005238eb: mov dword ptr [eax], 0x6c306c */ W32((u32)(r_eax), 0x6c306cu);
    /* 005238f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005238f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005238fb: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 00523901: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00523904: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00523907: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052390a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052390e: je 0x523923 */ if (fZ) goto L_00523923;
L_00523910:; BB(0x00523910);
    /* 00523910: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523912: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00523915: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00523917: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052391a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052391c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52391eu); call_ind(t); }
    /* 0052391e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00523921: jmp 0x52392a */ goto L_0052392a;
L_00523923:; BB(0x00523923);
    /* 00523923: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0052392a:; BB(0x0052392a);
    /* 0052392a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052392d: mov dword ptr [ecx + 0xae0], 0 */ W32((u32)(r_ecx+0xae0u), 0x0u);
    /* 00523937: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052393e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523941: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x523946u); f_005cc230();
    /* 00523946: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523949: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00523950: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00523951: mov esp, ebp */ r_esp = r_ebp;
    /* 00523953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523954: ret  */ FN_RET(0x005238c0); r_esp += 4; return;
}

void f_00523960(void) /* RouletteBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523960);
    /* 00523960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523961: mov ebp, esp */ r_ebp = r_esp;
    /* 00523963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523967: mov eax, 0x1adbd */ r_eax = 0x1adbdu;
    /* 0052396c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052396e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052396f: ret  */ FN_RET(0x00523960); r_esp += 4; return;
}

void f_00523970(void) /* RouletteBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523970);
    /* 00523970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523971: mov ebp, esp */ r_ebp = r_esp;
    /* 00523973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523977: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052397a: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x52397fu); f_005f5400();
    /* 0052397f: mov eax, dword ptr [eax*8 + 0x721cd8] */ r_eax = R32((u32)(r_eax*8+0x721cd8u));
    /* 00523986: mov esp, ebp */ r_esp = r_ebp;
    /* 00523988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523989: ret 8 */ FN_RET(0x00523970); r_esp += 12; return;
}

void f_00523990(void) /* RouletteBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523990);
    /* 00523990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523991: mov ebp, esp */ r_ebp = r_esp;
    /* 00523993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052399a: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x52399fu); f_005f5400();
    /* 0052399f: mov eax, dword ptr [eax*8 + 0x721cdc] */ r_eax = R32((u32)(r_eax*8+0x721cdcu));
    /* 005239a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005239a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005239a9: ret 8 */ FN_RET(0x00523990); r_esp += 12; return;
}

void f_005239b0(void) /* RouletteBetArea::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005239b0);
    /* 005239b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005239b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005239b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005239b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005239b9: mov dword ptr [ebp - 0x10], 0xfffffffd */ W32((u32)(r_ebp+0xfffffff0u), 0xfffffffdu);
    /* 005239c0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005239c7: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005239ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005239d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005239d8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005239dc: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005239df: mov esp, ebp */ r_esp = r_ebp;
    /* 005239e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005239e2: ret 8 */ FN_RET(0x005239b0); r_esp += 12; return;
}

void f_005239f0(void) /* RouletteBetArea::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005239f0);
    /* 005239f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005239f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005239f3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005239f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005239f9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00523a00: mov dword ptr [ebp - 0xc], 0xfffffffd */ W32((u32)(r_ebp+0xfffffff4u), 0xfffffffdu);
    /* 00523a07: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00523a0e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00523a15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523a18: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 00523a1c: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00523a1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00523a21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523a22: ret 8 */ FN_RET(0x005239f0); r_esp += 12; return;
}

void f_00523a30(void) /* RouletteBetArea::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523a30);
    /* 00523a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00523a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523a37: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523a3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523a3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523a3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523a3f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523a42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523a44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523a47: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 00523a4d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523a4fu); call_ind(t); }
    /* 00523a4f: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00523a52: mov esp, ebp */ r_esp = r_ebp;
    /* 00523a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523a55: ret 8 */ FN_RET(0x00523a30); r_esp += 12; return;
}

void f_00523a60(void) /* RouletteBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523a60);
    /* 00523a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00523a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523a67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523a6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523a6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523a6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523a6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523a72: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523a74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523a77: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00523a7d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523a7fu); call_ind(t); }
    /* 00523a7f: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00523a82: mov esp, ebp */ r_esp = r_ebp;
    /* 00523a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523a85: ret 8 */ FN_RET(0x00523a60); r_esp += 12; return;
}

void f_00523a90(void) /* RouletteBetArea::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523a90);
    /* 00523a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00523a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00523a95: push 0x6a408b */ { u32 v = 0x6a408bu; r_esp -= 4; W32(r_esp, v); }
    /* 00523a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00523aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523aa1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523aa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523aa5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00523aaa: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00523aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523aad: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00523ab0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00523ab6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00523ab9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00523ac0: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00523ac7: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 00523ace: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 00523ad5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523ad9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523add: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00523ae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523ae1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523ae4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00523ae6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523ae9: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00523aef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523af1u); call_ind(t); }
    /* 00523af1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00523af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523af5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00523af8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523af9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523afc: call 0x5ccc70 */ r_esp -= 4; W32(r_esp, 0x523b01u); f_005ccc70();
    /* 00523b01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523b05: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00523b0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00523b0d: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00523b13: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 00523b19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523b1bu); call_ind(t); }
    /* 00523b1b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00523b1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523b20: je 0x523b27 */ if (fZ) goto L_00523b27;
L_00523b22:; BB(0x00523b22);
    /* 00523b22: jmp 0x523d3a */ goto L_00523d3a;
L_00523b27:; BB(0x00523b27);
    /* 00523b27: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523b2b: jle 0x523d3a */ if ((fZ||fS!=fO)) goto L_00523d3a;
L_00523b31:; BB(0x00523b31);
    /* 00523b31: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00523b36: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x523b3bu); f_00686d82();
    /* 00523b3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523b3e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00523b41: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00523b48: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523b4c: je 0x523b5b */ if (fZ) goto L_00523b5b;
L_00523b4e:; BB(0x00523b4e);
    /* 00523b4e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00523b51: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x523b56u); f_005f5f50();
    /* 00523b56: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00523b59: jmp 0x523b62 */ goto L_00523b62;
L_00523b5b:; BB(0x00523b5b);
    /* 00523b5b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00523b62:; BB(0x00523b62);
    /* 00523b62: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00523b65: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00523b68: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00523b6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523b72: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523b78: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523b7b: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 00523b82: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523b85: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523b88: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00523b8b: mov dword ptr [edx + eax], ecx */ W32((u32)(r_edx+r_eax), r_ecx);
    /* 00523b8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00523b90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00523b93: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00523b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523b97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523b9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523b9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523b9f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523ba2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523ba4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523ba7: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00523bad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523bafu); call_ind(t); }
    /* 00523baf: mov esi, eax */ r_esi = r_eax;
    /* 00523bb1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523bb5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523bb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523bb9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523bbc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523bbe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523bc1: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00523bc7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523bc9u); call_ind(t); }
    /* 00523bc9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00523bcb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523bcc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523bd0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523bd4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523bd7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523bd9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523bdc: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 00523be2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523be4u); call_ind(t); }
    /* 00523be4: mov esi, eax */ r_esi = r_eax;
    /* 00523be6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523bea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523bed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523bee: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523bf1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00523bf3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523bf6: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 00523bfc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523bfeu); call_ind(t); }
    /* 00523bfe: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00523c00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523c01: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523c04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00523c06: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523c09: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00523c0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523c11u); call_ind(t); }
    /* 00523c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523c12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00523c15: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c1b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523c1e: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 00523c25: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00523c28: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c2b: mov ecx, dword ptr [eax + ecx] */ r_ecx = R32((u32)(r_eax+r_ecx));
    /* 00523c2e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x523c33u); f_005eae80();
    /* 00523c33: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00523c36: mov esi, dword ptr [ebp + edx*4 - 0x24] */ r_esi = R32((u32)(r_ebp+r_edx*4+0xffffffdcu));
    /* 00523c3a: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c3d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00523c3f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x523c44u); f_0062fbf0();
    /* 00523c44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00523c47: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00523c49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00523c4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523c4d: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c53: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523c56: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 00523c5d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523c60: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c63: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00523c66: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00523c69: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523c6f: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c75: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523c78: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 00523c7f: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00523c82: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00523c84: mov ecx, edx */ r_ecx = r_edx;
    /* 00523c86: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00523c8c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523c8eu); call_ind(t); }
    /* 00523c8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00523c90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523c93: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523c99: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523c9c: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 00523ca3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523ca6: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523ca9: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00523cac: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x523cb1u); f_005eb700();
    /* 00523cb1: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00523cb6: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00523cb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523cba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00523cbd: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523cc3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523cc6: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 00523ccd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00523cd0: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523cd3: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00523cd6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00523cd9: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523cdc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00523cdf: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523ce5: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523ce8: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 00523cef: mov ecx, dword ptr [edx + ecx] */ r_ecx = R32((u32)(r_edx+r_ecx));
    /* 00523cf2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00523cf4: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00523cf7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523cf9u); call_ind(t); }
    /* 00523cf9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523cfc: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523d02: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523d05: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 00523d0c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00523d0f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523d12: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00523d15: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00523d18: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523d1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00523d1e: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00523d24: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00523d27: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 00523d2e: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00523d31: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00523d33: mov ecx, edx */ r_ecx = r_edx;
    /* 00523d35: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00523d38: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523d3au); call_ind(t); }
L_00523d3a:; BB(0x00523d3a);
    /* 00523d3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523d3d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00523d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00523d45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00523d46: mov esp, ebp */ r_esp = r_ebp;
    /* 00523d48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523d49: ret 8 */ FN_RET(0x00523a90); r_esp += 12; return;
}

