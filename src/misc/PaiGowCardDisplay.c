#include "protos.h"

void f_004598e0(void) /* PaiGowCardDisplay::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004598e0);
    /* 004598e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004598e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004598e3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004598e6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004598e9: mov dword ptr [ebp - 0x14], 0x7d3 */ W32((u32)(r_ebp+0xffffffecu), 0x7d3u);
    /* 004598f0: mov dword ptr [ebp - 0x10], 0x7d4 */ W32((u32)(r_ebp+0xfffffff0u), 0x7d4u);
    /* 004598f7: mov dword ptr [ebp - 0xc], 0x7d2 */ W32((u32)(r_ebp+0xfffffff4u), 0x7d2u);
    /* 004598fe: mov dword ptr [ebp - 8], 0x7d5 */ W32((u32)(r_ebp+0xfffffff8u), 0x7d5u);
    /* 00459905: mov dword ptr [ebp - 4], 0x7d6 */ W32((u32)(r_ebp+0xfffffffcu), 0x7d6u);
    /* 0045990c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045990f: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00459915: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00459919: mov esp, ebp */ r_esp = r_ebp;
    /* 0045991b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045991c: ret  */ FN_RET(0x004598e0); r_esp += 4; return;
}

void f_00459920(void) /* PaiGowCardDisplay::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459920);
    /* 00459920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459921: mov ebp, esp */ r_ebp = r_esp;
    /* 00459923: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459926: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00459927: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045992a: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00459931: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00459938: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0045993f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00459946: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045994d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459950: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00459956: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045995c: mov al, byte ptr [edx + ecx + 0xe0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx+0xe0u))) & 0xffu);
    /* 00459963: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 00459966: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0045996a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045996c: jne 0x459978 */ if (!fZ) goto L_00459978;
L_0045996e:; BB(0x0045996e);
    /* 0045996e: mov eax, 0x35 */ r_eax = 0x35u;
    /* 00459973: jmp 0x4599fc */ goto L_004599fc;
L_00459978:; BB(0x00459978);
    /* 00459978: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045997b: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00459982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459983: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x459988u); f_00641280();
    /* 00459988: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045998b: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045998e: jne 0x459997 */ if (!fZ) goto L_00459997;
L_00459990:; BB(0x00459990);
    /* 00459990: mov eax, 0x34 */ r_eax = 0x34u;
    /* 00459995: jmp 0x4599fc */ goto L_004599fc;
L_00459997:; BB(0x00459997);
    /* 00459997: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045999a: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 004599a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004599a2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4599a7u); f_00641280();
    /* 004599a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004599aa: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004599ad: jne 0x4599cb */ if (!fZ) goto L_004599cb;
L_004599af:; BB(0x004599af);
    /* 004599af: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004599b2: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 004599b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004599ba: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x4599bfu); f_00641290();
    /* 004599bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004599c2: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 004599c6: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004599c9: jmp 0x4599fc */ goto L_004599fc;
L_004599cb:; BB(0x004599cb);
    /* 004599cb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004599ce: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 004599d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004599d6: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x4599dbu); f_00641290();
    /* 004599db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004599de: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 004599e2: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004599e5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004599e8: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 004599ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004599f0: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4599f5u); f_00641280();
    /* 004599f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004599f8: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_004599fc:; BB(0x004599fc);
    /* 004599fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004599fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004599ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459a00: ret  */ FN_RET(0x00459920); r_esp += 4; return;
}

void f_00459a10(void) /* PaiGowCardDisplay::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459a10);
    /* 00459a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00459a13: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459a16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00459a19: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00459a1e: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 00459a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00459a27: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459a2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459a2d: cmp eax, dword ptr [edx + 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x194u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459a33: jne 0x459a7f */ if (!fZ) goto L_00459a7f;
L_00459a35:; BB(0x00459a35);
    /* 00459a35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459a38: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00459a3e: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00459a43: mov cl, byte ptr [eax + edx + 0xe0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_edx+0xe0u))) & 0xffu);
    /* 00459a4a: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 00459a4d: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00459a51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459a53: je 0x459a7f */ if (fZ) goto L_00459a7f;
L_00459a55:; BB(0x00459a55);
    /* 00459a55: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459a58: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00459a5e: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 00459a64: mov al, byte ptr [edx + ecx + 0xe5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx+0xe5u))) & 0xffu);
    /* 00459a6b: mov byte ptr [ebp - 6], al */ W8((u32)(r_ebp+0xfffffffau), (u8)r_eax);
    /* 00459a6e: movzx ecx, byte ptr [ebp - 6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 00459a72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459a74: jne 0x459a7f */ if (!fZ) goto L_00459a7f;
L_00459a76:; BB(0x00459a76);
    /* 00459a76: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00459a7d: jmp 0x459a86 */ goto L_00459a86;
L_00459a7f:; BB(0x00459a7f);
    /* 00459a7f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00459a86:; BB(0x00459a86);
    /* 00459a86: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 00459a89: mov esp, ebp */ r_esp = r_ebp;
    /* 00459a8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459a8c: ret  */ FN_RET(0x00459a10); r_esp += 4; return;
}

void f_00459a90(void) /* PaiGowCardDisplay::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459a90);
    /* 00459a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00459a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00459a97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459a9a: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00459aa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459aa2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459aa5: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00459aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459aac: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00459ab2: call 0x461160 */ r_esp -= 4; W32(r_esp, 0x459ab7u); f_00461160();
    /* 00459ab7: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459abd: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x459ac2u); f_004587e0();
    /* 00459ac2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459ac5: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00459acb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459acc: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00459ad2: call 0x4612d0 */ r_esp -= 4; W32(r_esp, 0x459ad7u); f_004612d0();
    /* 00459ad7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459ada: jne 0x459ae9 */ if (!fZ) goto L_00459ae9;
L_00459adc:; BB(0x00459adc);
    /* 00459adc: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459ae2: call 0x4595f0 */ r_esp -= 4; W32(r_esp, 0x459ae7u); f_004595f0();
    /* 00459ae7: jmp 0x459af4 */ goto L_00459af4;
L_00459ae9:; BB(0x00459ae9);
    /* 00459ae9: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00459aef: call 0x459780 */ r_esp -= 4; W32(r_esp, 0x459af4u); f_00459780();
L_00459af4:; BB(0x00459af4);
    /* 00459af4: mov esp, ebp */ r_esp = r_ebp;
    /* 00459af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459af7: ret  */ FN_RET(0x00459a90); r_esp += 4; return;
}

void f_00643dc0(void) /* PaiGowCardDisplay::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00643dc0);
    /* 00643dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00643dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00643dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00643dc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643dca: movzx ecx, word ptr [eax + 0x190] */ r_ecx = (u32)R16((u32)(r_eax+0x190u));
    /* 00643dd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643dd3: jne 0x643ddf */ if (!fZ) goto L_00643ddf;
L_00643dd5:; BB(0x00643dd5);
    /* 00643dd5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643dd8: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x643dddu); f_005eb5a0();
    /* 00643ddd: jmp 0x643e21 */ goto L_00643e21;
L_00643ddf:; BB(0x00643ddf);
    /* 00643ddf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643de2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00643de4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643de7: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00643ded: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x643defu); call_ind(t); }
    /* 00643def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643df0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643df3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x643df8u); f_005eaf00();
    /* 00643df8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643dfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00643dfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e00: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00643e06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643e08u); call_ind(t); }
    /* 00643e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643e09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e0c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00643e0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e11: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00643e17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x643e19u); call_ind(t); }
    /* 00643e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643e1c: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x643e21u); f_005eb570();
L_00643e21:; BB(0x00643e21);
    /* 00643e21: mov esp, ebp */ r_esp = r_ebp;
    /* 00643e23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00643e24: ret  */ FN_RET(0x00643dc0); r_esp += 4; return;
}

void f_00644570(void) /* PaiGowCardDisplay::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644570);
    /* 00644570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644571: mov ebp, esp */ r_ebp = r_esp;
    /* 00644573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644577: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064457a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064457c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064457f: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00644585: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644587u); call_ind(t); }
    /* 00644587: mov esp, ebp */ r_esp = r_ebp;
    /* 00644589: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064458a: ret 4 */ FN_RET(0x00644570); r_esp += 8; return;
}

void f_00644590(void) /* PaiGowCardDisplay::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644590);
    /* 00644590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644591: mov ebp, esp */ r_ebp = r_esp;
    /* 00644593: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644596: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644599: movzx eax, byte ptr [0x1630694] */ r_eax = (u32)R8((u32)(0x1630694u));
    /* 006445a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006445a2: jne 0x6445c4 */ if (!fZ) goto L_006445c4;
L_006445a4:; BB(0x006445a4);
    /* 006445a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006445a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006445a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006445ac: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006445b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6445b4u); call_ind(t); }
    /* 006445b4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006445b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006445b9: je 0x6445c4 */ if (fZ) goto L_006445c4;
L_006445bb:; BB(0x006445bb);
    /* 006445bb: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 006445c2: jmp 0x6445cb */ goto L_006445cb;
L_006445c4:; BB(0x006445c4);
    /* 006445c4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_006445cb:; BB(0x006445cb);
    /* 006445cb: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 006445ce: mov esp, ebp */ r_esp = r_ebp;
    /* 006445d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006445d1: ret 4 */ FN_RET(0x00644590); r_esp += 8; return;
}

void f_006445e0(void) /* PaiGowCardDisplay::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006445e0);
    /* 006445e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006445e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006445e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006445e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006445e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006445ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006445ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006445ef: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 006445f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6445f7u); call_ind(t); }
    /* 006445f7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006445fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006445fc: je 0x644600 */ if (fZ) goto L_00644600;
L_006445fe:; BB(0x006445fe);
    /* 006445fe: jmp 0x644659 */ goto L_00644659;
L_00644600:; BB(0x00644600);
    /* 00644600: movzx edx, byte ptr [0x1630694] */ r_edx = (u32)R8((u32)(0x1630694u));
    /* 00644607: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644609: je 0x64460d */ if (fZ) goto L_0064460d;
L_0064460b:; BB(0x0064460b);
    /* 0064460b: jmp 0x644659 */ goto L_00644659;
L_0064460d:; BB(0x0064460d);
    /* 0064460d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00644610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644614: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644616: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644619: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0064461f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644621u); call_ind(t); }
    /* 00644621: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00644624: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644626: je 0x644649 */ if (fZ) goto L_00644649;
L_00644628:; BB(0x00644628);
    /* 00644628: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064462b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064462c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064462f: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x644634u); f_005f4ed0();
    /* 00644634: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644637: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0064463b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064463e: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 00644642: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00644645: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00644649:; BB(0x00644649);
    /* 00644649: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064464c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064464e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644651: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00644657: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644659u); call_ind(t); }
L_00644659:; BB(0x00644659);
    /* 00644659: mov esp, ebp */ r_esp = r_ebp;
    /* 0064465b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064465c: ret 4 */ FN_RET(0x006445e0); r_esp += 8; return;
}

void f_00644660(void) /* PaiGowCardDisplay::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644660);
    /* 00644660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644661: mov ebp, esp */ r_ebp = r_esp;
    /* 00644663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064466a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064466c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064466f: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00644675: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644677u); call_ind(t); }
    /* 00644677: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064467a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064467c: je 0x644683 */ if (fZ) goto L_00644683;
L_0064467e:; BB(0x0064467e);
    /* 0064467e: jmp 0x64474f */ goto L_0064474f;
L_00644683:; BB(0x00644683);
    /* 00644683: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00644686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644687: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064468a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064468c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064468f: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00644695: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644697u); call_ind(t); }
    /* 00644697: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064469a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064469c: je 0x6446b1 */ if (fZ) goto L_006446b1;
L_0064469e:; BB(0x0064469e);
    /* 0064469e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006446a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006446a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446a5: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x6446aau); f_005f4ed0();
    /* 006446aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006446ad: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_006446b1:; BB(0x006446b1);
    /* 006446b1: mov byte ptr [0x1630694], 1 */ W8((u32)(0x1630694u), 0x1u);
    /* 006446b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446bb: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 006446bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006446c1: je 0x64474f */ if (fZ) goto L_0064474f;
L_006446c7:; BB(0x006446c7);
    /* 006446c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006446cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446cf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006446d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6446d4u); call_ind(t); }
    /* 006446d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006446d7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006446da: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006446dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446df: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 006446e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006446e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446ea: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006446ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6446efu); call_ind(t); }
    /* 006446ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006446f2: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006446f5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006446f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006446fa: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006446fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644700: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644702: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644705: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00644708: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64470au); call_ind(t); }
    /* 0064470a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064470d: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00644710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644713: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00644715: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644718: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0064471b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64471du); call_ind(t); }
    /* 0064471d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644720: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00644723: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644726: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x64472bu); f_005f53c0();
    /* 0064472b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064472e: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00644731: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644734: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00644736: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644739: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0064473f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644741u); call_ind(t); }
    /* 00644741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644742: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644745: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644747: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064474a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064474d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64474fu); call_ind(t); }
L_0064474f:; BB(0x0064474f);
    /* 0064474f: mov esp, ebp */ r_esp = r_ebp;
    /* 00644751: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644752: ret 4 */ FN_RET(0x00644660); r_esp += 8; return;
}

void f_00644760(void) /* PaiGowCardDisplay::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00644760);
    /* 00644760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644761: mov ebp, esp */ r_ebp = r_esp;
    /* 00644763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00644764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00644767: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064476a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064476b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064476e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00644770: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644773: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00644779: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64477bu); call_ind(t); }
    /* 0064477b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064477e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644780: je 0x644789 */ if (fZ) goto L_00644789;
L_00644782:; BB(0x00644782);
    /* 00644782: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00644785: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00644789:; BB(0x00644789);
    /* 00644789: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064478c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064478e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644791: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00644797: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x644799u); call_ind(t); }
    /* 00644799: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064479c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064479e: je 0x6447d2 */ if (fZ) goto L_006447d2;
L_006447a0:; BB(0x006447a0);
    /* 006447a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447a3: movzx eax, byte ptr [edx + 0xa] */ r_eax = (u32)R8((u32)(r_edx+0xau));
    /* 006447a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006447a9: je 0x6447d2 */ if (fZ) goto L_006447d2;
L_006447ab:; BB(0x006447ab);
    /* 006447ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006447ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447b1: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006447b4: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006447b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006447b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006447bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447be: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006447c1: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006447c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006447c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006447ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447cd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006447d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6447d2u); call_ind(t); }
L_006447d2:; BB(0x006447d2);
    /* 006447d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006447d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006447d5: ret 4 */ FN_RET(0x00644760); r_esp += 8; return;
}

void f_006447e0(void) /* PaiGowCardDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006447e0);
    /* 006447e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006447e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006447e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006447e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006447e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006447ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006447eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447ee: call 0x5f4e90 */ r_esp -= 4; W32(r_esp, 0x6447f3u); f_005f4e90();
    /* 006447f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006447f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006447f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006447fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006447ff: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00644805: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644807u); call_ind(t); }
    /* 00644807: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064480a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064480c: je 0x644815 */ if (fZ) goto L_00644815;
L_0064480e:; BB(0x0064480e);
    /* 0064480e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00644811: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00644815:; BB(0x00644815);
    /* 00644815: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00644818: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064481a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064481d: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00644823: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x644825u); call_ind(t); }
    /* 00644825: mov byte ptr [0x1630694], 0 */ W8((u32)(0x1630694u), 0x0u);
    /* 0064482c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064482e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064482f: ret 4 */ FN_RET(0x006447e0); r_esp += 8; return;
}

