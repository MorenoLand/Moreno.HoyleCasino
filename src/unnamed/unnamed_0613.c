#include "protos.h"

void f_00613580(void) /* sub_613580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613580);
    /* 00613580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613581: mov ebp, esp */ r_ebp = r_esp;
    /* 00613583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061358a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061358d: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00613590: sub eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613593: mov esp, ebp */ r_esp = r_ebp;
    /* 00613595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613596: ret  */ FN_RET(0x00613580); r_esp += 4; return;
}

void f_006135a0(void) /* sub_6135A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006135a0);
    /* 006135a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006135a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006135a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006135a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006135a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006135aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006135ad: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 006135b0: sub eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006135b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006135b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006135b6: ret  */ FN_RET(0x006135a0); r_esp += 4; return;
}

void f_006135c0(void) /* sub_6135C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006135c0);
    /* 006135c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006135c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006135c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006135c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006135c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006135ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006135cd: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 006135d0: sub eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006135d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006135d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006135d6: ret  */ FN_RET(0x006135c0); r_esp += 4; return;
}

void f_006135e0(void) /* sub_6135E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006135e0);
    /* 006135e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006135e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006135e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006135e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006135e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006135ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006135ed: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 006135f0: sub eax, dword ptr [ecx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006135f3: mov esp, ebp */ r_esp = r_ebp;
    /* 006135f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006135f6: ret  */ FN_RET(0x006135e0); r_esp += 4; return;
}

void f_00613600(void) /* sub_613600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613600);
    /* 00613600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613601: mov ebp, esp */ r_ebp = r_esp;
    /* 00613603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061360a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061360d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00613610: sub eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613613: mov esp, ebp */ r_esp = r_ebp;
    /* 00613615: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613616: ret  */ FN_RET(0x00613600); r_esp += 4; return;
}

void f_00613620(void) /* sub_613620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613620);
    /* 00613620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613621: mov ebp, esp */ r_ebp = r_esp;
    /* 00613623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613627: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061362a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061362d: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 00613630: sub eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613633: mov esp, ebp */ r_esp = r_ebp;
    /* 00613635: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613636: ret  */ FN_RET(0x00613620); r_esp += 4; return;
}

void f_00613b60(void) /* sub_613B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613b60);
    /* 00613b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00613b63: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613b66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00613b67: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00613b6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613b6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613b70: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00613b73: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00613b76: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613b79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613b7c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00613b7f: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613b81: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00613b84: add eax, dword ptr [0x795fa8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x795fa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613b8a: mov dword ptr [0x795fa8], eax */ W32((u32)(0x795fa8u), r_eax);
    /* 00613b8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613b92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613b93: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613b97: call 0x6303d0 */ r_esp -= 4; W32(r_esp, 0x613b9cu); f_006303d0();
    /* 00613b9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613b9f: movzx eax, byte ptr [0x795fb6] */ r_eax = (u32)R8((u32)(0x795fb6u));
    /* 00613ba6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613ba8: je 0x613cfc */ if (fZ) goto L_00613cfc;
L_00613bae:; BB(0x00613bae);
    /* 00613bae: mov byte ptr [ebp - 0xd], 0xff */ W8((u32)(r_ebp+0xfffffff3u), 0xffu);
    /* 00613bb2: mov cl, byte ptr [ebp - 0xd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 00613bb5: mov byte ptr [ebp - 0x10], cl */ W8((u32)(r_ebp+0xfffffff0u), (u8)r_ecx);
    /* 00613bb8: mov byte ptr [ebp - 0xe], 0 */ W8((u32)(r_ebp+0xfffffff2u), 0x0u);
    /* 00613bbc: mov dl, byte ptr [ebp - 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 00613bbf: mov byte ptr [ebp - 0xf], dl */ W8((u32)(r_ebp+0xfffffff1u), (u8)r_edx);
    /* 00613bc2: mov eax, dword ptr [0x15e5604] */ r_eax = R32((u32)(0x15e5604u));
    /* 00613bc7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613bca: mov dword ptr [0x15e5604], eax */ W32((u32)(0x15e5604u), r_eax);
    /* 00613bcf: mov eax, dword ptr [0x15e5604] */ r_eax = R32((u32)(0x15e5604u));
    /* 00613bd4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00613bd5: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 00613bda: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00613bda, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00613bda, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00613bdc: mov dword ptr [0x15e5604], edx */ W32((u32)(0x15e5604u), r_edx);
    /* 00613be2: cmp dword ptr [0x15e5604], 2 */ {  u32 a = R32((u32)(0x15e5604u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613be9: jge 0x613bf4 */ if ((fS==fO)) goto L_00613bf4;
L_00613beb:; BB(0x00613beb);
    /* 00613beb: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 00613bf2: jmp 0x613bfd */ goto L_00613bfd;
L_00613bf4:; BB(0x00613bf4);
    /* 00613bf4: mov edx, dword ptr [0x15e5604] */ r_edx = R32((u32)(0x15e5604u));
    /* 00613bfa: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00613bfd:; BB(0x00613bfd);
    /* 00613bfd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613c00: mov dword ptr [0x15e5604], eax */ W32((u32)(0x15e5604u), r_eax);
    /* 00613c05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613c08: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 00613c0b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00613c0e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613c11: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00613c14: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x613c19u); f_00623910();
    /* 00613c19: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613c1b: jge 0x613c2b */ if ((fS==fO)) goto L_00613c2b;
L_00613c1d:; BB(0x00613c1d);
    /* 00613c1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613c20: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00613c23: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613c26: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613c29: jmp 0x613c39 */ goto L_00613c39;
L_00613c2b:; BB(0x00613c2b);
    /* 00613c2b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613c2e: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00613c31: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x613c36u); f_00623910();
    /* 00613c36: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00613c39:; BB(0x00613c39);
    /* 00613c39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613c3c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00613c3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00613c42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00613c44: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00613c47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00613c49: jle 0x613c58 */ if ((fZ||fS!=fO)) goto L_00613c58;
L_00613c4b:; BB(0x00613c4b);
    /* 00613c4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613c4e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00613c50: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00613c53: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00613c56: jmp 0x613c5f */ goto L_00613c5f;
L_00613c58:; BB(0x00613c58);
    /* 00613c58: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00613c5f:; BB(0x00613c5f);
    /* 00613c5f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613c62: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00613c65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613c68: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00613c6b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00613c6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613c71: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00613c74: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x613c79u); f_006238f0();
    /* 00613c79: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613c7b: jge 0x613c8b */ if ((fS==fO)) goto L_00613c8b;
L_00613c7d:; BB(0x00613c7d);
    /* 00613c7d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00613c80: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00613c83: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613c86: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00613c89: jmp 0x613c99 */ goto L_00613c99;
L_00613c8b:; BB(0x00613c8b);
    /* 00613c8b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613c8e: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00613c91: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x613c96u); f_006238f0();
    /* 00613c96: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00613c99:; BB(0x00613c99);
    /* 00613c99: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00613c9c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00613c9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613ca2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00613ca5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00613ca8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00613caa: jle 0x613cba */ if ((fZ||fS!=fO)) goto L_00613cba;
L_00613cac:; BB(0x00613cac);
    /* 00613cac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00613caf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00613cb2: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613cb5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00613cb8: jmp 0x613cc1 */ goto L_00613cc1;
L_00613cba:; BB(0x00613cba);
    /* 00613cba: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00613cc1:; BB(0x00613cc1);
    /* 00613cc1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00613cc4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00613cc7: jmp 0x613cd5 */ goto L_00613cd5;
L_00613cc9:; BB(0x00613cc9);
    /* 00613cc9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613ccc: add edx, dword ptr [0x15e5604] */ {  u32 a = r_edx; u32 b = R32((u32)(0x15e5604u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613cd2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00613cd5:; BB(0x00613cd5);
    /* 00613cd5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613cd8: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613cdb: jge 0x613cfc */ if ((fS==fO)) goto L_00613cfc;
L_00613cdd:; BB(0x00613cdd);
    /* 00613cdd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00613cdf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613ce2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613ce3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613ce6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613ce7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613cea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613ceb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00613cee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613cef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613cf2: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00613cf5: call 0x623c60 */ r_esp -= 4; W32(r_esp, 0x613cfau); f_00623c60();
    /* 00613cfa: jmp 0x613cc9 */ goto L_00613cc9;
L_00613cfc:; BB(0x00613cfc);
    /* 00613cfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613cfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00613cff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613d00: ret 4 */ FN_RET(0x00613b60); r_esp += 8; return;
}

void f_00613d20(void) /* sub_613D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613d20);
    /* 00613d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00613d23: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613d26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00613d29: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613d2c: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613d2f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00613d31: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00613d34: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00613d37: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00613d3a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00613d3d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00613d40: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00613d43: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00613d46: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613d49: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00613d4c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00613d4e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00613d51: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613d54: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00613d57: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613d59: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00613d5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613d5f: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613d62: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00613d65: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613d68: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613d6b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00613d6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613d71: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613d74: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00613d77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613d7a: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613d7d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613d80: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00613d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613d84: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613d87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613d89: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613d8c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00613d8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613d91u); call_ind(t); }
    /* 00613d91: mov esp, ebp */ r_esp = r_ebp;
    /* 00613d93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613d94: ret  */ FN_RET(0x00613d20); r_esp += 4; return;
}

void f_00613da0(void) /* sub_613DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613da0);
    /* 00613da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00613da3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613da6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00613da9:; BB(0x00613da9);
    /* 00613da9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613dac: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613daf: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x613db4u); f_0062ae50();
    /* 00613db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613db6: je 0x613e22 */ if (fZ) goto L_00613e22;
L_00613db8:; BB(0x00613db8);
    /* 00613db8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613dba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613dbd: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613dc0: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x613dc5u); f_0062ade0();
    /* 00613dc5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00613dc8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613dcb: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613dce: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00613dd0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00613dd3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00613dd6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00613dd9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00613ddc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00613ddf: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00613de2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00613de5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613de9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613dec: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613def: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x613df4u); f_0062ab60();
    /* 00613df4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613df7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00613dfa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613dfd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00613e00: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613e04: je 0x613e19 */ if (fZ) goto L_00613e19;
L_00613e06:; BB(0x00613e06);
    /* 00613e06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613e08: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613e0b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613e0d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00613e10: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00613e12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613e14u); call_ind(t); }
    /* 00613e14: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00613e17: jmp 0x613e20 */ goto L_00613e20;
L_00613e19:; BB(0x00613e19);
    /* 00613e19: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00613e20:; BB(0x00613e20);
    /* 00613e20: jmp 0x613da9 */ goto L_00613da9;
L_00613e22:; BB(0x00613e22);
    /* 00613e22: mov esp, ebp */ r_esp = r_ebp;
    /* 00613e24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613e25: ret  */ FN_RET(0x00613da0); r_esp += 4; return;
}

void f_00613e30(void) /* sub_613E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613e30);
    /* 00613e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00613e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613e3a: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x613e3fu); f_00613e70();
    /* 00613e3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613e42: movzx ecx, byte ptr [eax + 0x88] */ r_ecx = (u32)R8((u32)(r_eax+0x88u));
    /* 00613e49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613e4b: je 0x613e5e */ if (fZ) goto L_00613e5e;
L_00613e4d:; BB(0x00613e4d);
    /* 00613e4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00613e50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613e51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613e54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613e56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613e59: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00613e5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613e5eu); call_ind(t); }
L_00613e5e:; BB(0x00613e5e);
    /* 00613e5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00613e60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613e61: ret 4 */ FN_RET(0x00613e30); r_esp += 8; return;
}

void f_00613e70(void) /* sub_613E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613e70);
    /* 00613e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00613e73: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613e76: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00613e79: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
L_00613e7d:; BB(0x00613e7d);
    /* 00613e7d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613e80: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613e83: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x613e88u); f_0062ae50();
    /* 00613e88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613e8a: je 0x613f6e */ if (fZ) goto L_00613f6e;
L_00613e90:; BB(0x00613e90);
    /* 00613e90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613e92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613e95: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613e98: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x613e9du); f_0062ade0();
    /* 00613e9d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00613ea0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613ea3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613ea6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00613ea8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00613eab: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00613eae: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00613eb1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00613eb4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00613eb7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00613eba: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00613ebd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613ec1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613ec4: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613ec7: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x613eccu); f_0062ab60();
    /* 00613ecc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613ecf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613ed2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613ed5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00613ed8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613edc: je 0x613ef1 */ if (fZ) goto L_00613ef1;
L_00613ede:; BB(0x00613ede);
    /* 00613ede: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613ee0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613ee3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613ee5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613ee8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00613eea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613eecu); call_ind(t); }
    /* 00613eec: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00613eef: jmp 0x613ef8 */ goto L_00613ef8;
L_00613ef1:; BB(0x00613ef1);
    /* 00613ef1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00613ef8:; BB(0x00613ef8);
    /* 00613ef8: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00613efb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00613efc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613eff: call 0x613d10 */ r_esp -= 4; W32(r_esp, 0x613f04u); f_00613d10();
    /* 00613f04: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00613f07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613f08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613f0b: call 0x613b60 */ r_esp -= 4; W32(r_esp, 0x613f10u); f_00613b60();
    /* 00613f10: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00613f14: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613f17: movzx edx, byte ptr [ecx + 0x88] */ r_edx = (u32)R8((u32)(r_ecx+0x88u));
    /* 00613f1e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00613f20: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00613f23: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613f26: movzx ecx, byte ptr [eax + 0x88] */ r_ecx = (u32)R8((u32)(r_eax+0x88u));
    /* 00613f2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613f2f: je 0x613f42 */ if (fZ) goto L_00613f42;
L_00613f31:; BB(0x00613f31);
    /* 00613f31: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00613f34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613f35: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613f38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00613f3a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613f3d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00613f40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x613f42u); call_ind(t); }
L_00613f42:; BB(0x00613f42);
    /* 00613f42: movzx ecx, byte ptr [0x795fa3] */ r_ecx = (u32)R8((u32)(0x795fa3u));
    /* 00613f49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613f4b: je 0x613f69 */ if (fZ) goto L_00613f69;
L_00613f4d:; BB(0x00613f4d);
    /* 00613f4d: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x613f52u); f_005e9e60();
    /* 00613f52: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00613f55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613f57: jne 0x613f5b */ if (!fZ) goto L_00613f5b;
L_00613f59:; BB(0x00613f59);
    /* 00613f59: jmp 0x613f4d */ goto L_00613f4d;
L_00613f5b:; BB(0x00613f5b);
    /* 00613f5b: call 0x5e9e60 */ r_esp -= 4; W32(r_esp, 0x613f60u); f_005e9e60();
    /* 00613f60: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00613f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613f65: je 0x613f69 */ if (fZ) goto L_00613f69;
L_00613f67:; BB(0x00613f67);
    /* 00613f67: jmp 0x613f5b */ goto L_00613f5b;
L_00613f69:; BB(0x00613f69);
    /* 00613f69: jmp 0x613e7d */ goto L_00613e7d;
L_00613f6e:; BB(0x00613f6e);
    /* 00613f6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00613f70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613f71: ret  */ FN_RET(0x00613e70); r_esp += 4; return;
}

void f_00613f80(void) /* sub_613F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00613f80);
    /* 00613f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00613f83: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613f86: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00613f89: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613f8c: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613f8f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00613f91: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00613f94: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00613f97: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00613f9a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00613f9d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00613fa0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00613fa3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00613fa6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613fa9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00613fac: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00613fae: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00613fb1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613fb4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00613fb7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00613fb9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00613fbc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00613fbf: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613fc2: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00613fc5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613fc8: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613fcb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00613fce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00613fd1: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00613fd4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00613fd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00613fda: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613fdd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00613fe0: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00613fe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613fe4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00613fe7: call 0x613e30 */ r_esp -= 4; W32(r_esp, 0x613fecu); f_00613e30();
    /* 00613fec: mov esp, ebp */ r_esp = r_ebp;
    /* 00613fee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613fef: ret  */ FN_RET(0x00613f80); r_esp += 4; return;
}

