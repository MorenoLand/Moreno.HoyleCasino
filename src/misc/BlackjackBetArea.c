#include "protos.h"

void f_0040eca0(void) /* BlackjackBetArea::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040eca0);
    /* 0040eca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040eca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040eca3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040eca6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040eca9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ecac: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x40ecb1u); f_005cc1d0();
    /* 0040ecb1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ecb4: mov dword ptr [eax], 0x6b38fc */ W32((u32)(r_eax), 0x6b38fcu);
    /* 0040ecba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ecc1: jmp 0x40eccc */ goto L_0040eccc;
L_0040ecc3:; BB(0x0040ecc3);
    /* 0040ecc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ecc6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ecc9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040eccc:; BB(0x0040eccc);
    /* 0040eccc: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ecd0: jge 0x40ed08 */ if ((fS==fO)) goto L_0040ed08;
L_0040ecd2:; BB(0x0040ecd2);
    /* 0040ecd2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040ecd9: jmp 0x40ece4 */ goto L_0040ece4;
L_0040ecdb:; BB(0x0040ecdb);
    /* 0040ecdb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ecde: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040ece1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040ece4:; BB(0x0040ece4);
    /* 0040ece4: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ece8: jge 0x40ed06 */ if ((fS==fO)) goto L_0040ed06;
L_0040ecea:; BB(0x0040ecea);
    /* 0040ecea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040eced: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ecf0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ecf3: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 0040ecfa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ecfd: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 0040ed04: jmp 0x40ecdb */ goto L_0040ecdb;
L_0040ed06:; BB(0x0040ed06);
    /* 0040ed06: jmp 0x40ecc3 */ goto L_0040ecc3;
L_0040ed08:; BB(0x0040ed08);
    /* 0040ed08: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ed0b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ed0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ed0e: ret  */ FN_RET(0x0040eca0); r_esp += 4; return;
}

void f_0040ed10(void) /* BlackjackBetArea::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ed10);
    /* 0040ed10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed11: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ed13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed15: push 0x69db6a */ { u32 v = 0x69db6au; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040ed20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed22: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040ed27: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040ed29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed2a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040ed2d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040ed33: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040ed36: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ed39: mov dword ptr [eax], 0x6b38fc */ W32((u32)(r_eax), 0x6b38fcu);
    /* 0040ed3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040ed46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ed49: call 0x40f390 */ r_esp -= 4; W32(r_esp, 0x40ed4eu); f_0040f390();
    /* 0040ed4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ed55: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ed58: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x40ed5du); f_005cc230();
    /* 0040ed5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040ed60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040ed67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ed68: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ed6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ed6b: ret  */ FN_RET(0x0040ed10); r_esp += 4; return;
}

void f_0040ed70(void) /* BlackjackBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040ed70);
    /* 0040ed70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040ed71: mov ebp, esp */ r_ebp = r_esp;
    /* 0040ed73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040ed76: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040ed79: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0040ed80: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0040ed87: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040ed8e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0040ed95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ed98: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0040ed9e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x40eda3u); f_005f5400();
    /* 0040eda3: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0040eda7: add eax, 0x1391 */ {  u32 a = r_eax; u32 b = 0x1391u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040edac: mov esp, ebp */ r_esp = r_ebp;
    /* 0040edae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040edaf: ret  */ FN_RET(0x0040ed70); r_esp += 4; return;
}

void f_0040edb0(void) /* BlackjackBetArea::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040edb0);
    /* 0040edb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040edb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040edb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040edb5: push 0x69db90 */ { u32 v = 0x69db90u; r_esp -= 4; W32(r_esp, v); }
    /* 0040edba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040edc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040edc1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040edc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040edc5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040edca: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040edcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040edcd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040edd0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040edd6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040edd9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0040eddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040eddd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040ede0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ede1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ede4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ede5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ede8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ede9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040edec: call 0x5cca50 */ r_esp -= 4; W32(r_esp, 0x40edf1u); f_005cca50();
    /* 0040edf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040edf4: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040edfa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040edfd: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0040ee04: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040ee07: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ee0a: mov ecx, dword ptr [eax + ecx] */ r_ecx = R32((u32)(r_eax+r_ecx));
    /* 0040ee0d: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x40ee12u); f_005eb220();
    /* 0040ee12: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040ee14: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ee17: setle dl */ r_edx = (r_edx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0040ee1a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040ee1d: and edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0040ee20: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040ee23: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0040ee26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ee29: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ee2f: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ee32: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040ee38: cmp byte ptr [ecx + eax + 0x10c], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040ee40: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040ee43: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040ee46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee48: je 0x40f203 */ if (fZ) goto L_0040f203;
L_0040ee4e:; BB(0x0040ee4e);
    /* 0040ee4e: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee52: jne 0x40ee5d */ if (!fZ) goto L_0040ee5d;
L_0040ee54:; BB(0x0040ee54);
    /* 0040ee54: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0040ee5b: jmp 0x40ee8c */ goto L_0040ee8c;
L_0040ee5d:; BB(0x0040ee5d);
    /* 0040ee5d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee61: jne 0x40ee6c */ if (!fZ) goto L_0040ee6c;
L_0040ee63:; BB(0x0040ee63);
    /* 0040ee63: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0040ee6a: jmp 0x40ee86 */ goto L_0040ee86;
L_0040ee6c:; BB(0x0040ee6c);
    /* 0040ee6c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040ee6f: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ee75: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040ee7b: movsx eax, byte ptr [edx + ecx + 0x119] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x119u));
    /* 0040ee83: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0040ee86:; BB(0x0040ee86);
    /* 0040ee86: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040ee89: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0040ee8c:; BB(0x0040ee8c);
    /* 0040ee8c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee90: je 0x40eed9 */ if (fZ) goto L_0040eed9;
L_0040ee92:; BB(0x0040ee92);
    /* 0040ee92: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ee96: jne 0x40eea1 */ if (!fZ) goto L_0040eea1;
L_0040ee98:; BB(0x0040ee98);
    /* 0040ee98: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0040ee9f: jmp 0x40eecf */ goto L_0040eecf;
L_0040eea1:; BB(0x0040eea1);
    /* 0040eea1: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eea5: jne 0x40eeb0 */ if (!fZ) goto L_0040eeb0;
L_0040eea7:; BB(0x0040eea7);
    /* 0040eea7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0040eeae: jmp 0x40eec9 */ goto L_0040eec9;
L_0040eeb0:; BB(0x0040eeb0);
    /* 0040eeb0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040eeb3: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040eeb9: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040eebe: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0040eec6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0040eec9:; BB(0x0040eec9);
    /* 0040eec9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040eecc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0040eecf:; BB(0x0040eecf);
    /* 0040eecf: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040eed3: jne 0x40ef87 */ if (!fZ) goto L_0040ef87;
L_0040eed9:; BB(0x0040eed9);
    /* 0040eed9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040eedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040eedd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040eee0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040eee1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040eee4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040eee6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040eee9: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0040eeef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40eef1u); call_ind(t); }
    /* 0040eef1: mov esi, eax */ r_esi = r_eax;
    /* 0040eef3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040eef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040eef7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040eefa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040eefb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040eefe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ef00: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef03: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0040ef09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40ef0bu); call_ind(t); }
    /* 0040ef0b: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ef0f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040ef11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef12: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040ef15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040ef19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef1a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ef1f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef22: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0040ef28: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40ef2au); call_ind(t); }
    /* 0040ef2a: mov ecx, eax */ r_ecx = r_eax;
    /* 0040ef2c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ef2f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040ef30: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040ef32: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040ef34: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ef36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040ef3a: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ef40: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef43: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 0040ef4a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ef4d: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ef50: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ef52: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040ef55: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0040ef58: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040ef5b: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ef5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ef61: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040ef67: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef6a: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 0040ef71: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ef73: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040ef76: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0040ef79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040ef7b: mov ecx, eax */ r_ecx = r_eax;
    /* 0040ef7d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040ef80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ef82u); call_ind(t); }
    /* 0040ef82: jmp 0x40f022 */ goto L_0040f022;
L_0040ef87:; BB(0x0040ef87);
    /* 0040ef87: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040ef8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef8b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040ef8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ef8f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ef94: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ef97: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0040ef9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ef9fu); call_ind(t); }
    /* 0040ef9f: mov esi, eax */ r_esi = r_eax;
    /* 0040efa1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040efa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040efa5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040efa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040efa9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040efac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040efae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040efb1: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0040efb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40efb9u); call_ind(t); }
    /* 0040efb9: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040efbd: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040efbf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040efc0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040efc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040efc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040efc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040efc8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040efcb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040efcd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040efd0: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0040efd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40efd8u); call_ind(t); }
    /* 0040efd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040efd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040efdc: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040efe2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040efe5: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0040efec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040efef: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040eff2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040eff4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040eff7: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0040effa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040effd: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f000: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f003: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f009: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f00c: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 0040f013: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f015: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f018: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0040f01b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f01d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0040f020: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f022u); call_ind(t); }
L_0040f022:; BB(0x0040f022);
    /* 0040f022: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f027: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40f02cu); f_00686d82();
    /* 0040f02c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f02f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040f032: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f039: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f03d: je 0x40f04c */ if (fZ) goto L_0040f04c;
L_0040f03f:; BB(0x0040f03f);
    /* 0040f03f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040f042: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x40f047u); f_005f5f50();
    /* 0040f047: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040f04a: jmp 0x40f053 */ goto L_0040f053;
L_0040f04c:; BB(0x0040f04c);
    /* 0040f04c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0040f053:; BB(0x0040f053);
    /* 0040f053: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040f056: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040f059: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040f060: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040f063: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f066: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f069: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 0040f070: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040f073: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f076: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0040f079: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040f07b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f07e: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f084: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f087: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0040f08e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f091: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f094: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f096: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040f099: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0040f09c: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x40f0a1u); f_005f53c0();
    /* 0040f0a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f0a5: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f0ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f0ae: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 0040f0b5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040f0b8: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f0bb: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f0bd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f0c0: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0040f0c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040f0c6: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f0c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f0cc: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f0d2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f0d5: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 0040f0dc: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040f0de: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040f0e1: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0040f0e4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040f0e6: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0040f0e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f0ebu); call_ind(t); }
    /* 0040f0eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f0ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f0ef: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f0f5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f0f8: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0040f0ff: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f102: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f105: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f107: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040f10a: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0040f10d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f110: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f113: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f116: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f11c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f11f: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 0040f126: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040f128: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f12b: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0040f12e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f130: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0040f133: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f135u); call_ind(t); }
    /* 0040f135: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f139: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f13c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040f13e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f141: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0040f147: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f149u); call_ind(t); }
    /* 0040f149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f14a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f14d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f150: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f153: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f15a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f15d: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0040f160: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40f165u); f_005eae80();
    /* 0040f165: mov esi, 0x10 */ r_esi = 0x10u;
    /* 0040f16a: sub esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040f16d: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f170: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f172: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40f177u); f_0062fbf0();
    /* 0040f177: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040f17a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040f17c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040f17d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040f180: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f183: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f186: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 0040f18d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040f190: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040f193: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f196: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f199: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f19c: lea ecx, [edx + ecx + 0xae0] */ r_ecx = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f1a3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0040f1a6: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0040f1a9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040f1ab: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0040f1b1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40f1b3u); call_ind(t); }
    /* 0040f1b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f1b5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040f1b8: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f1bb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f1be: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 0040f1c5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0040f1c8: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040f1cb: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x40f1d0u); f_005eb700();
    /* 0040f1d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f1d3: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f1d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f1d9: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f1e0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f1e3: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0040f1e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040f1e9: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f1ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040f1ef: lea eax, [ecx + eax + 0xae0] */ r_eax = (u32)(r_ecx+r_eax+0xae0u);
    /* 0040f1f6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f1f9: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0040f1fc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040f1fe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0040f201: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f203u); call_ind(t); }
L_0040f203:; BB(0x0040f203);
    /* 0040f203: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f206: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040f20d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040f20e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040f20f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f212: ret 0x10 */ FN_RET(0x0040edb0); r_esp += 20; return;
}

void f_0040f220(void) /* BlackjackBetArea::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f220);
    /* 0040f220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f221: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f223: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f226: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040f229: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f22c: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0040f232: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040f235: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0040f238: lea eax, [ecx + edx + 0x48] */ r_eax = (u32)(r_ecx+r_edx+0x48u);
    /* 0040f23c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040f23f: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 0040f242: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 0040f246: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040f249: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040f24c: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f250: jge 0x40f281 */ if ((fS==fO)) goto L_0040f281;
L_0040f252:; BB(0x0040f252);
    /* 0040f252: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f255: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f25b: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040f25e: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040f264: cmp byte ptr [edx + ecx + 0x10c], 0 */ {  u32 a = R8((u32)(r_edx+r_ecx+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040f26c: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040f26f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040f272: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f274: je 0x40f281 */ if (fZ) goto L_0040f281;
L_0040f276:; BB(0x0040f276);
    /* 0040f276: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f279: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040f27a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f27c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040f27e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0040f281:; BB(0x0040f281);
    /* 0040f281: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f284: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f287: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0040f289: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f28c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0040f28f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f292: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f294: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f295: ret 0xc */ FN_RET(0x0040f220); r_esp += 16; return;
}

void f_0040f2a0(void) /* BlackjackBetArea::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f2a0);
    /* 0040f2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f2a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f2a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040f2a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f2b0: jmp 0x40f2bb */ goto L_0040f2bb;
L_0040f2b2:; BB(0x0040f2b2);
    /* 0040f2b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f2b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f2b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040f2bb:; BB(0x0040f2bb);
    /* 0040f2bb: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f2bf: jge 0x40f373 */ if ((fS==fO)) goto L_0040f373;
L_0040f2c5:; BB(0x0040f2c5);
    /* 0040f2c5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f2c8: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f2cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f2ce: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f2d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f2d8: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f2dc: je 0x40f36e */ if (fZ) goto L_0040f36e;
L_0040f2e2:; BB(0x0040f2e2);
    /* 0040f2e2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040f2e5: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f2e8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f2eb: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 0040f2f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f2f5: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0040f2f8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f2fb: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f2fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f301: lea ecx, [edx + ecx + 0xae0] */ r_ecx = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f308: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f30b: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0040f30e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040f310: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040f313: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40f315u); call_ind(t); }
    /* 0040f315: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040f318: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f31b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f31e: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 0040f325: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f328: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040f32b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040f32e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f331: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040f334: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f338: je 0x40f34d */ if (fZ) goto L_0040f34d;
L_0040f33a:; BB(0x0040f33a);
    /* 0040f33a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f33c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f33f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f341: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f344: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f346: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f348u); call_ind(t); }
    /* 0040f348: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040f34b: jmp 0x40f354 */ goto L_0040f354;
L_0040f34d:; BB(0x0040f34d);
    /* 0040f34d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0040f354:; BB(0x0040f354);
    /* 0040f354: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f357: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f35a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f35d: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f367: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_0040f36e:; BB(0x0040f36e);
    /* 0040f36e: jmp 0x40f2b2 */ goto L_0040f2b2;
L_0040f373:; BB(0x0040f373);
    /* 0040f373: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040f376: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040f377: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f37b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f37e: call 0x5ccc70 */ r_esp -= 4; W32(r_esp, 0x40f383u); f_005ccc70();
    /* 0040f383: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f386: ret 8 */ FN_RET(0x0040f2a0); r_esp += 12; return;
}

void f_0040f390(void) /* BlackjackBetArea::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f390);
    /* 0040f390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f391: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f393: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f396: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040f399: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f39c: call 0x5ccd90 */ r_esp -= 4; W32(r_esp, 0x40f3a1u); f_005ccd90();
    /* 0040f3a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040f3a8: jmp 0x40f3b3 */ goto L_0040f3b3;
L_0040f3aa:; BB(0x0040f3aa);
    /* 0040f3aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f3ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040f3b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040f3b3:; BB(0x0040f3b3);
    /* 0040f3b3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f3b7: jge 0x40f48e */ if ((fS==fO)) goto L_0040f48e;
L_0040f3bd:; BB(0x0040f3bd);
    /* 0040f3bd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040f3c4: jmp 0x40f3cf */ goto L_0040f3cf;
L_0040f3c6:; BB(0x0040f3c6);
    /* 0040f3c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f3c9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040f3cc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0040f3cf:; BB(0x0040f3cf);
    /* 0040f3cf: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f3d3: jge 0x40f489 */ if ((fS==fO)) goto L_0040f489;
L_0040f3d9:; BB(0x0040f3d9);
    /* 0040f3d9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f3dc: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f3df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f3e2: lea ecx, [eax + edx + 0xae0] */ r_ecx = (u32)(r_eax+r_edx+0xae0u);
    /* 0040f3e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f3ec: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f3f0: je 0x40f484 */ if (fZ) goto L_0040f484;
L_0040f3f6:; BB(0x0040f3f6);
    /* 0040f3f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f3f9: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f3fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f3ff: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 0040f406: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f409: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040f40c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f40f: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f412: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f415: lea edx, [eax + edx + 0xae0] */ r_edx = (u32)(r_eax+r_edx+0xae0u);
    /* 0040f41c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f41f: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0040f422: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0040f424: mov ecx, edx */ r_ecx = r_edx;
    /* 0040f426: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0040f429: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40f42bu); call_ind(t); }
    /* 0040f42b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f42e: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f431: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f434: lea edx, [ecx + eax + 0xae0] */ r_edx = (u32)(r_ecx+r_eax+0xae0u);
    /* 0040f43b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f43e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040f441: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040f444: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040f447: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040f44a: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f44e: je 0x40f463 */ if (fZ) goto L_0040f463;
L_0040f450:; BB(0x0040f450);
    /* 0040f450: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040f452: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f455: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040f457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040f45a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040f45c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40f45eu); call_ind(t); }
    /* 0040f45e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040f461: jmp 0x40f46a */ goto L_0040f46a;
L_0040f463:; BB(0x0040f463);
    /* 0040f463: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0040f46a:; BB(0x0040f46a);
    /* 0040f46a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f46d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f470: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040f473: lea eax, [edx + ecx + 0xae0] */ r_eax = (u32)(r_edx+r_ecx+0xae0u);
    /* 0040f47a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040f47d: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_0040f484:; BB(0x0040f484);
    /* 0040f484: jmp 0x40f3c6 */ goto L_0040f3c6;
L_0040f489:; BB(0x0040f489);
    /* 0040f489: jmp 0x40f3aa */ goto L_0040f3aa;
L_0040f48e:; BB(0x0040f48e);
    /* 0040f48e: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f491: ret  */ FN_RET(0x0040f390); r_esp += 4; return;
}

void f_0040fa80(void) /* BlackjackBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fa80);
    /* 0040fa80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fa81: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fa83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040fa86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040fa89: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040fa8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fa8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040fa90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fa91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fa94: call 0x40f4a0 */ r_esp -= 4; W32(r_esp, 0x40fa99u); f_0040f4a0();
    /* 0040fa99: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040fa9c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fa9e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40faa3u); f_0062fbf0();
    /* 0040faa3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040faa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040faa8: je 0x40fabe */ if (fZ) goto L_0040fabe;
L_0040faaa:; BB(0x0040faaa);
    /* 0040faaa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040faac: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40fab1u); f_0062fbf0();
    /* 0040fab1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fab4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fab7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040fab9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040fabc: jmp 0x40face */ goto L_0040face;
L_0040fabe:; BB(0x0040fabe);
    /* 0040fabe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fac0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40fac5u); f_0062fbf0();
    /* 0040fac5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fac8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040facb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040face:; BB(0x0040face);
    /* 0040face: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fad1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fad3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fad4: ret 8 */ FN_RET(0x0040fa80); r_esp += 12; return;
}

void f_0040fae0(void) /* BlackjackBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fae0);
    /* 0040fae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040fae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0040fae9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040faec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040faed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040faf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040faf1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040faf4: call 0x40f790 */ r_esp -= 4; W32(r_esp, 0x40faf9u); f_0040f790();
    /* 0040faf9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040fafc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fafe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40fb03u); f_0062fbf0();
    /* 0040fb03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fb06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fb08: je 0x40fb1e */ if (fZ) goto L_0040fb1e;
L_0040fb0a:; BB(0x0040fb0a);
    /* 0040fb0a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb0c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40fb11u); f_0062fbf0();
    /* 0040fb11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fb14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb17: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040fb19: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0040fb1c: jmp 0x40fb2e */ goto L_0040fb2e;
L_0040fb1e:; BB(0x0040fb1e);
    /* 0040fb1e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb20: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x40fb25u); f_0062fbf0();
    /* 0040fb25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fb28: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040fb2b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040fb2e:; BB(0x0040fb2e);
    /* 0040fb2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb31: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fb33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fb34: ret 8 */ FN_RET(0x0040fae0); r_esp += 12; return;
}

void f_0040fb60(void) /* BlackjackBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fb60);
    /* 0040fb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fb63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040fb67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040fb6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040fb6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb72: call 0x40f790 */ r_esp -= 4; W32(r_esp, 0x40fb77u); f_0040f790();
    /* 0040fb77: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040fb7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fb7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fb7d: ret 8 */ FN_RET(0x0040fb60); r_esp += 12; return;
}

void f_00412130(void) /* BlackjackBetArea::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00412130);
    /* 00412130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412131: mov ebp, esp */ r_ebp = r_esp;
    /* 00412133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00412134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00412137: mov eax, 0x4b */ r_eax = 0x4bu;
    /* 0041213c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041213e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041213f: ret  */ FN_RET(0x00412130); r_esp += 4; return;
}

