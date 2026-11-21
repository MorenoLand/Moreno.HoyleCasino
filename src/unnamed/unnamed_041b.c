#include "protos.h"

void f_0041b0a0(void) /* sub_41B0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b0a0);
    /* 0041b0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b0a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b0a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041b0a9: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b0ad: jne 0x41b0ea */ if (!fZ) goto L_0041b0ea;
L_0041b0af:; BB(0x0041b0af);
    /* 0041b0af: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b0b3: jne 0x41b0be */ if (!fZ) goto L_0041b0be;
L_0041b0b5:; BB(0x0041b0b5);
    /* 0041b0b5: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 0041b0bc: jmp 0x41b0ea */ goto L_0041b0ea;
L_0041b0be:; BB(0x0041b0be);
    /* 0041b0be: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b0c2: jne 0x41b0cd */ if (!fZ) goto L_0041b0cd;
L_0041b0c4:; BB(0x0041b0c4);
    /* 0041b0c4: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0041b0cb: jmp 0x41b0e4 */ goto L_0041b0e4;
L_0041b0cd:; BB(0x0041b0cd);
    /* 0041b0cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b0d0: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b0d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b0d9: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 0041b0e1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0041b0e4:; BB(0x0041b0e4);
    /* 0041b0e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b0e7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0041b0ea:; BB(0x0041b0ea);
    /* 0041b0ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b0ed: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b0f3: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041b0f6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b0f9: mov byte ptr [edx + ecx + 0x10c], 1 */ W8((u32)(r_edx+r_ecx+0x10cu), 0x1u);
    /* 0041b101: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b104: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b107: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041b10e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041b111: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b114: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041b117: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b11a: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041b11e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b120: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041b123: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0041b126: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0041b12a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b12d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041b130: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b132: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041b135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b136: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0041b139: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b13a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b13d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b140: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041b147: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b14a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b14d: mov edx, dword ptr [eax + edx*4 + 0x468] */ r_edx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041b154: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041b156: mov ecx, edx */ r_ecx = r_edx;
    /* 0041b158: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0041b15e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41b160u); call_ind(t); }
    /* 0041b160: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b163: ret 8 */ FN_RET(0x0041b0a0); r_esp += 12; return;
}

void f_0041b170(void) /* sub_41B170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b170);
    /* 0041b170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b171: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b173: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b176: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0041b179: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b17b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b17d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41b182u); f_0064c8a0();
    /* 0041b182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b185: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041b188: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041b18b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b18e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041b191: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b194: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b197: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b19b: jne 0x41b1d8 */ if (!fZ) goto L_0041b1d8;
L_0041b19d:; BB(0x0041b19d);
    /* 0041b19d: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b1a1: jne 0x41b1ac */ if (!fZ) goto L_0041b1ac;
L_0041b1a3:; BB(0x0041b1a3);
    /* 0041b1a3: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 0041b1aa: jmp 0x41b1d8 */ goto L_0041b1d8;
L_0041b1ac:; BB(0x0041b1ac);
    /* 0041b1ac: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b1b0: jne 0x41b1bb */ if (!fZ) goto L_0041b1bb;
L_0041b1b2:; BB(0x0041b1b2);
    /* 0041b1b2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0041b1b9: jmp 0x41b1d2 */ goto L_0041b1d2;
L_0041b1bb:; BB(0x0041b1bb);
    /* 0041b1bb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b1be: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b1c4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b1c7: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041b1cf: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0041b1d2:; BB(0x0041b1d2);
    /* 0041b1d2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041b1d5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_0041b1d8:; BB(0x0041b1d8);
    /* 0041b1d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b1df: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41b1e4u); f_004194c0();
    /* 0041b1e4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041b1e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1e9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041b1ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b1f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1f1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b1f4: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x41b1f9u); f_004193d0();
    /* 0041b1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b1fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b1ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b200: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b204: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b207: call 0x419370 */ r_esp -= 4; W32(r_esp, 0x41b20cu); f_00419370();
    /* 0041b20c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b20e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b210: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041b213: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b214: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b218: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b21b: call 0x419370 */ r_esp -= 4; W32(r_esp, 0x41b220u); f_00419370();
    /* 0041b220: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b223: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b229: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b22c: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0041b22f: mov byte ptr [edx + ecx + 0x119], al */ W8((u32)(r_edx+r_ecx+0x119u), (u8)r_eax);
    /* 0041b236: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b239: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b23c: mov eax, dword ptr [edx + ecx*4 + 0x468] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 0041b243: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041b246: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b249: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0041b24c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041b24f: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0041b253: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041b255: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0041b258: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0041b25b: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0041b25f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0041b262: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041b265: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041b268: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041b26b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041b26e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0041b271: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b274: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b277: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041b27a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b27d: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b280: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b283: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b287: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b28a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b28b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b28e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b28f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b294u); f_005dcb00();
    /* 0041b294: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b297: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b299: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x41b29eu); f_005d5cf0();
    /* 0041b29e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b2a1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b2a4: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041b2ab: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0041b2ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b2b1: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0041b2b4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041b2b7: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0041b2bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041b2bd: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0041b2c0: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 0041b2c3: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0041b2c7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0041b2ca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041b2cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b2d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b2d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b2d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b2d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041b2d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b2d9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041b2dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b2dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b2e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b2e3: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041b2ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b2ed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b2f0: mov ecx, dword ptr [ecx + eax*4 + 0x468] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041b2f7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041b2f9: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0041b2ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41b301u); call_ind(t); }
    /* 0041b301: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b303: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b306: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b307: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b30a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b30b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b30e: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x41b313u); f_00419780();
    /* 0041b313: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b316: jne 0x41b32c */ if (!fZ) goto L_0041b32c;
L_0041b318:; BB(0x0041b318);
    /* 0041b318: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b31b: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b321: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041b324: mov byte ptr [ecx + eax + 0x118], 1 */ W8((u32)(r_ecx+r_eax+0x118u), 0x1u);
L_0041b32c:; BB(0x0041b32c);
    /* 0041b32c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b32e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b32f: ret 8 */ FN_RET(0x0041b170); r_esp += 12; return;
}

void f_0041b340(void) /* sub_41B340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b340);
    /* 0041b340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b341: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b343: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b346: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041b349: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b34c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b34f: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041b356: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041b359: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b35c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041b35f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b362: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0041b366: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041b368: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041b36b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 0041b36e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 0041b372: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b375: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041b378: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b37b: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0041b381: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0041b384: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0041b387: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x41b38cu); f_0064c560();
    /* 0041b38c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b38f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b390: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b394: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b397: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b398: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b39du); f_005dcb00();
    /* 0041b39d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b3a0: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b3a2: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x41b3a7u); f_005d5cf0();
    /* 0041b3a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b3b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b3b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b3b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b3bb: mov edx, dword ptr [ecx + eax*4 + 0x468] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041b3c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b3c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b3c8: mov ecx, dword ptr [ecx + eax*4 + 0x468] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x468u));
    /* 0041b3cf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0041b3d1: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0041b3d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41b3d9u); call_ind(t); }
    /* 0041b3d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b3dc: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b3df: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b3e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b3e5: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b3e8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0041b3eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b3ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b3f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b3f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b3f7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b3fcu); f_005dcb00();
    /* 0041b3fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b3ff: mov ecx, eax */ r_ecx = r_eax;
    /* 0041b401: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x41b406u); f_005d5fb0();
    /* 0041b406: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b408: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b40a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b40d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b40e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041b411: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b416u); f_004191f0();
    /* 0041b416: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b419: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b41a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b41fu); f_005dcb00();
    /* 0041b41f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b422: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041b425: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b428: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
    /* 0041b42f: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b431: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b432: ret 4 */ FN_RET(0x0041b340); r_esp += 8; return;
}

void f_0041b440(void) /* sub_41B440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b440);
    /* 0041b440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b441: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b443: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b446: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b449: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b44d: jne 0x41b458 */ if (!fZ) goto L_0041b458;
L_0041b44f:; BB(0x0041b44f);
    /* 0041b44f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041b456: jmp 0x41b484 */ goto L_0041b484;
L_0041b458:; BB(0x0041b458);
    /* 0041b458: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b45c: jne 0x41b467 */ if (!fZ) goto L_0041b467;
L_0041b45e:; BB(0x0041b45e);
    /* 0041b45e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041b465: jmp 0x41b47e */ goto L_0041b47e;
L_0041b467:; BB(0x0041b467);
    /* 0041b467: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b46a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b470: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b473: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 0041b47b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0041b47e:; BB(0x0041b47e);
    /* 0041b47e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b481: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041b484:; BB(0x0041b484);
    /* 0041b484: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b487: mov edx, dword ptr [ecx + 0x4d4] */ r_edx = R32((u32)(r_ecx+0x4d4u));
    /* 0041b48d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041b490: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041b494: ja 0x41b5f9 */ if ((!fC&&!fZ)) goto L_0041b5f9;
L_0041b49a:; BB(0x0041b49a);
    /* 0041b49a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b49d: jmp dword ptr [eax*4 + 0x41b60c] */ { u32 t = R32((u32)(r_eax*4+0x41b60cu)); switch (t) { case 0x41b4a4u: goto L_0041b4a4; case 0x41b4d9u: goto L_0041b4d9; case 0x41b59du: goto L_0041b59d; case 0x41b5f9u: goto L_0041b5f9; case 0x41b4b5u: goto L_0041b4b5; default: UNSUP(0x0041b49d, "jump table entry is not a known target"); } }
L_0041b4a4:; BB(0x0041b4a4);
    /* 0041b4a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b4a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b4ab: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b4b0u); f_00419a10();
    /* 0041b4b0: jmp 0x41b5f9 */ goto L_0041b5f9;
L_0041b4b5:; BB(0x0041b4b5);
    /* 0041b4b5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b4b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b4bc: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b4c1u); f_00419a10();
    /* 0041b4c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4c5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b4cau); f_005dcb00();
    /* 0041b4ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b4cd: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
    /* 0041b4d4: jmp 0x41b5f9 */ goto L_0041b5f9;
L_0041b4d9:; BB(0x0041b4d9);
    /* 0041b4d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b4de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4df: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b4e2: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x41b4e7u); f_0041b990();
    /* 0041b4e7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041b4ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b4ec: je 0x41b537 */ if (fZ) goto L_0041b537;
L_0041b4ee:; BB(0x0041b4ee);
    /* 0041b4ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b4f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b4fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b4fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b4ff: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b504u); f_0041bba0();
    /* 0041b504: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b506: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b509: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b50a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b50d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b50e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b511: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b516u); f_004191f0();
    /* 0041b516: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b51a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b51d: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b522u); f_00419a10();
    /* 0041b522: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b526: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b52bu); f_005dcb00();
    /* 0041b52b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b52e: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
    /* 0041b535: jmp 0x41b59b */ goto L_0041b59b;
L_0041b537:; BB(0x0041b537);
    /* 0041b537: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b53a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b53b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b53e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b53f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b542: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41b547u); f_00419980();
    /* 0041b547: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b54a: jne 0x41b55a */ if (!fZ) goto L_0041b55a;
L_0041b54c:; BB(0x0041b54c);
    /* 0041b54c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b54f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b550: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b553: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b558u); f_00419a10();
    /* 0041b558: jmp 0x41b59b */ goto L_0041b59b;
L_0041b55a:; BB(0x0041b55a);
    /* 0041b55a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b55d: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b563: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b566: cmp byte ptr [ecx + eax + 0x118], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041b56e: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041b571: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0041b574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b576: je 0x41b59b */ if (fZ) goto L_0041b59b;
L_0041b578:; BB(0x0041b578);
    /* 0041b578: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b57b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b57c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b57f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b580: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b583: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x41b588u); f_0041ade0();
    /* 0041b588: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041b58b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b58d: jne 0x41b59b */ if (!fZ) goto L_0041b59b;
L_0041b58f:; BB(0x0041b58f);
    /* 0041b58f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b593: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b596: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b59bu); f_00419a10();
L_0041b59b:; BB(0x0041b59b);
    /* 0041b59b: jmp 0x41b5f9 */ goto L_0041b5f9;
L_0041b59d:; BB(0x0041b59d);
    /* 0041b59d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b59f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b5a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b5a6: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x41b5abu); f_0041b990();
    /* 0041b5ab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041b5ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b5b0: je 0x41b5ed */ if (fZ) goto L_0041b5ed;
L_0041b5b2:; BB(0x0041b5b2);
    /* 0041b5b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b5bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b5bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b5c3: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b5c8u); f_0041bba0();
    /* 0041b5c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b5cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b5d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b5d5: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b5dau); f_004191f0();
    /* 0041b5da: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b5e3u); f_005dcb00();
    /* 0041b5e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b5e6: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
L_0041b5ed:; BB(0x0041b5ed);
    /* 0041b5ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b5f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b5f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b5f4: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b5f9u); f_00419a10();
L_0041b5f9:; BB(0x0041b5f9);
    /* 0041b5f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b5fc: mov dword ptr [ecx + 0x4d4], 0xffffffff */ W32((u32)(r_ecx+0x4d4u), 0xffffffffu);
    /* 0041b606: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b608: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b609: ret 4 */ FN_RET(0x0041b440); r_esp += 8; return;
}

void f_0041b620(void) /* sub_41B620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b620);
    /* 0041b620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b621: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b623: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b626: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041b629: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b62d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b632u); f_005dcb00();
    /* 0041b632: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b635: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041b638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b63b: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 0041b642: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b645: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b64b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b64e: cmp byte ptr [eax + edx + 0x11b], 0 */ {  u32 a = R8((u32)(r_eax+r_edx+0x11bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041b656: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041b659: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041b65c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b65e: je 0x41b674 */ if (fZ) goto L_0041b674;
L_0041b660:; BB(0x0041b660);
    /* 0041b660: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b662: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b664: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b666: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b668: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b66c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b66f: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b674u); f_0041bba0();
L_0041b674:; BB(0x0041b674);
    /* 0041b674: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b677: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b678: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b67b: call 0x41a830 */ r_esp -= 4; W32(r_esp, 0x41b680u); f_0041a830();
    /* 0041b680: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041b683: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b685: je 0x41b6c0 */ if (fZ) goto L_0041b6c0;
L_0041b687:; BB(0x0041b687);
    /* 0041b687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b689: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b68b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b68d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b68f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b693: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b696: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b69bu); f_0041bba0();
    /* 0041b69b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b69d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b69f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b6a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b6a6: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b6abu); f_004191f0();
    /* 0041b6ab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b6ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6af: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b6b4u); f_005dcb00();
    /* 0041b6b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b6b7: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 0041b6be: jmp 0x41b6f7 */ goto L_0041b6f7;
L_0041b6c0:; BB(0x0041b6c0);
    /* 0041b6c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b6cf: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b6d4u); f_0041bba0();
    /* 0041b6d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b6db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b6df: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b6e4u); f_004191f0();
    /* 0041b6e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b6e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b6e8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b6edu); f_005dcb00();
    /* 0041b6ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b6f0: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
L_0041b6f7:; BB(0x0041b6f7);
    /* 0041b6f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b6f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b6fa: ret 4 */ FN_RET(0x0041b620); r_esp += 8; return;
}

void f_0041b700(void) /* sub_41B700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b700);
    /* 0041b700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b701: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041b707: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b709: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b70b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b70d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b70f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b716: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b71bu); f_0041bba0();
    /* 0041b71b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b71d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b720: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b721: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b724: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b727: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041b72e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b731: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b734: mov edx, dword ptr [eax + edx*4 + 0x468] */ r_edx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041b73b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0041b73d: mov ecx, edx */ r_ecx = r_edx;
    /* 0041b73f: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0041b745: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41b747u); call_ind(t); }
    /* 0041b747: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b74a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b750: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b753: mov byte ptr [ecx + eax + 0x11b], 0 */ W8((u32)(r_ecx+r_eax+0x11bu), 0x0u);
    /* 0041b75b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041b75d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b75f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b762: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b766: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b76bu); f_004191f0();
    /* 0041b76b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b76d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b76e: ret 4 */ FN_RET(0x0041b700); r_esp += 8; return;
}

void f_0041b780(void) /* sub_41B780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b780);
    /* 0041b780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b781: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b783: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b786: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041b789: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b78d: jne 0x41b798 */ if (!fZ) goto L_0041b798;
L_0041b78f:; BB(0x0041b78f);
    /* 0041b78f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041b796: jmp 0x41b7c4 */ goto L_0041b7c4;
L_0041b798:; BB(0x0041b798);
    /* 0041b798: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b79c: jne 0x41b7a7 */ if (!fZ) goto L_0041b7a7;
L_0041b79e:; BB(0x0041b79e);
    /* 0041b79e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041b7a5: jmp 0x41b7be */ goto L_0041b7be;
L_0041b7a7:; BB(0x0041b7a7);
    /* 0041b7a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b7aa: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b7b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b7b3: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 0041b7bb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0041b7be:; BB(0x0041b7be);
    /* 0041b7be: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041b7c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041b7c4:; BB(0x0041b7c4);
    /* 0041b7c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7c6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b7cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b7d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b7d5: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41b7dau); f_0041bba0();
    /* 0041b7da: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b7dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b7e3u); f_005dcb00();
    /* 0041b7e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b7e6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041b7e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b7ec: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 0041b7f3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b7fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b7fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b7fe: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41b803u); f_004191f0();
    /* 0041b803: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b807: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41b80cu); f_005dcb00();
    /* 0041b80c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041b80f: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 0041b816: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041b819: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b81a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b81d: call 0x419a10 */ r_esp -= 4; W32(r_esp, 0x41b822u); f_00419a10();
    /* 0041b822: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b825: ret 4 */ FN_RET(0x0041b780); r_esp += 8; return;
}

void f_0041b830(void) /* sub_41B830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b830);
    /* 0041b830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b831: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b833: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b836: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041b839: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b83b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b83d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b840: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41b845u); f_00419980();
    /* 0041b845: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b848: jle 0x41b851 */ if ((fZ||fS!=fO)) goto L_0041b851;
L_0041b84a:; BB(0x0041b84a);
    /* 0041b84a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041b84c: jmp 0x41b8e7 */ goto L_0041b8e7;
L_0041b851:; BB(0x0041b851);
    /* 0041b851: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b853: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b855: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b858: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41b85du); f_00419980();
    /* 0041b85d: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b860: jne 0x41b886 */ if (!fZ) goto L_0041b886;
L_0041b862:; BB(0x0041b862);
    /* 0041b862: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b864: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041b866: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b869: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41b86eu); f_004198d0();
    /* 0041b86e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b871: je 0x41b882 */ if (fZ) goto L_0041b882;
L_0041b873:; BB(0x0041b873);
    /* 0041b873: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b876: call 0x4185c0 */ r_esp -= 4; W32(r_esp, 0x41b87bu); f_004185c0();
    /* 0041b87b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041b87e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b880: jne 0x41b886 */ if (!fZ) goto L_0041b886;
L_0041b882:; BB(0x0041b882);
    /* 0041b882: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041b884: jmp 0x41b8e7 */ goto L_0041b8e7;
L_0041b886:; BB(0x0041b886);
    /* 0041b886: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041b88d: jmp 0x41b898 */ goto L_0041b898;
L_0041b88f:; BB(0x0041b88f);
    /* 0041b88f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b892: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041b895: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0041b898:; BB(0x0041b898);
    /* 0041b898: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b89c: jge 0x41b8e5 */ if ((fS==fO)) goto L_0041b8e5;
L_0041b89e:; BB(0x0041b89e);
    /* 0041b89e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041b8a5: jmp 0x41b8b0 */ goto L_0041b8b0;
L_0041b8a7:; BB(0x0041b8a7);
    /* 0041b8a7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b8aa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041b8ad: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0041b8b0:; BB(0x0041b8b0);
    /* 0041b8b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b8b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b8b7: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41b8bcu); f_004194c0();
    /* 0041b8bc: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b8bf: jge 0x41b8e3 */ if ((fS==fO)) goto L_0041b8e3;
L_0041b8c1:; BB(0x0041b8c1);
    /* 0041b8c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b8c4: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b8ca: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041b8cd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041b8d0: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 0041b8d8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b8db: jne 0x41b8e1 */ if (!fZ) goto L_0041b8e1;
L_0041b8dd:; BB(0x0041b8dd);
    /* 0041b8dd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041b8df: jmp 0x41b8e7 */ goto L_0041b8e7;
L_0041b8e1:; BB(0x0041b8e1);
    /* 0041b8e1: jmp 0x41b8a7 */ goto L_0041b8a7;
L_0041b8e3:; BB(0x0041b8e3);
    /* 0041b8e3: jmp 0x41b88f */ goto L_0041b88f;
L_0041b8e5:; BB(0x0041b8e5);
    /* 0041b8e5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0041b8e7:; BB(0x0041b8e7);
    /* 0041b8e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b8e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b8ea: ret  */ FN_RET(0x0041b830); r_esp += 4; return;
}

void f_0041b8f0(void) /* sub_41B8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b8f0);
    /* 0041b8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b8f3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b8f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041b8f9: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0041b900: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041b907: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041b90e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0041b915: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041b91c: jmp 0x41b927 */ goto L_0041b927;
L_0041b91e:; BB(0x0041b91e);
    /* 0041b91e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b921: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041b924: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041b927:; BB(0x0041b927);
    /* 0041b927: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b92b: jge 0x41b981 */ if ((fS==fO)) goto L_0041b981;
L_0041b92d:; BB(0x0041b92d);
    /* 0041b92d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0041b934: jmp 0x41b93f */ goto L_0041b93f;
L_0041b936:; BB(0x0041b936);
    /* 0041b936: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041b939: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041b93c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0041b93f:; BB(0x0041b93f);
    /* 0041b93f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b942: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0041b946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041b947: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041b94a: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41b94fu); f_004194c0();
    /* 0041b94f: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b952: jge 0x41b97f */ if ((fS==fO)) goto L_0041b97f;
L_0041b954:; BB(0x0041b954);
    /* 0041b954: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b957: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0041b95b: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b961: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041b964: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041b967: movsx ecx, byte ptr [eax + edx + 0x110] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x110u));
    /* 0041b96f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b972: jne 0x41b97d */ if (!fZ) goto L_0041b97d;
L_0041b974:; BB(0x0041b974);
    /* 0041b974: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b977: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0041b97b: jmp 0x41b984 */ goto L_0041b984;
L_0041b97d:; BB(0x0041b97d);
    /* 0041b97d: jmp 0x41b936 */ goto L_0041b936;
L_0041b97f:; BB(0x0041b97f);
    /* 0041b97f: jmp 0x41b91e */ goto L_0041b91e;
L_0041b981:; BB(0x0041b981);
    /* 0041b981: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0041b984:; BB(0x0041b984);
    /* 0041b984: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b987: ret  */ FN_RET(0x0041b8f0); r_esp += 4; return;
}

void f_0041b990(void) /* sub_41B990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041b990);
    /* 0041b990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041b991: mov ebp, esp */ r_ebp = r_esp;
    /* 0041b993: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041b996: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041b999: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b99d: jne 0x41b9da */ if (!fZ) goto L_0041b9da;
L_0041b99f:; BB(0x0041b99f);
    /* 0041b99f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b9a3: jne 0x41b9ae */ if (!fZ) goto L_0041b9ae;
L_0041b9a5:; BB(0x0041b9a5);
    /* 0041b9a5: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 0041b9ac: jmp 0x41b9da */ goto L_0041b9da;
L_0041b9ae:; BB(0x0041b9ae);
    /* 0041b9ae: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041b9b2: jne 0x41b9bd */ if (!fZ) goto L_0041b9bd;
L_0041b9b4:; BB(0x0041b9b4);
    /* 0041b9b4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041b9bb: jmp 0x41b9d4 */ goto L_0041b9d4;
L_0041b9bd:; BB(0x0041b9bd);
    /* 0041b9bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041b9c0: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041b9c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b9c9: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 0041b9d1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0041b9d4:; BB(0x0041b9d4);
    /* 0041b9d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041b9d7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0041b9da:; BB(0x0041b9da);
    /* 0041b9da: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041b9dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041b9e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041b9e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041b9e5: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41b9eau); f_00419980();
    /* 0041b9ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041b9ec: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041b9ef: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0041b9f2: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0041b9f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0041b9f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041b9f7: ret 8 */ FN_RET(0x0041b990); r_esp += 12; return;
}

void f_0041bba0(void) /* sub_41BBA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041bba0);
    /* 0041bba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041bba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041bba3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bba6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041bba9: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0041bbad: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0041bbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbb1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0041bbb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbb5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0041bbb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbb9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041bbbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbbd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041bbc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbc1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bbc4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bbc7: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0041bbce: call 0x41d950 */ r_esp -= 4; W32(r_esp, 0x41bbd3u); f_0041d950();
    /* 0041bbd3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041bbda: jmp 0x41bbe5 */ goto L_0041bbe5;
L_0041bbdc:; BB(0x0041bbdc);
    /* 0041bbdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041bbdf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041bbe2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0041bbe5:; BB(0x0041bbe5);
    /* 0041bbe5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bbe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbe9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bbec: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41bbf1u); f_004194c0();
    /* 0041bbf1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bbf4: jge 0x41bc15 */ if ((fS==fO)) goto L_0041bc15;
L_0041bbf6:; BB(0x0041bbf6);
    /* 0041bbf6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041bbf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbfa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041bbfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bbfe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bc01: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x41bc06u); f_0041b990();
    /* 0041bc06: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041bc09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bc0b: je 0x41bc13 */ if (fZ) goto L_0041bc13;
L_0041bc0d:; BB(0x0041bc0d);
    /* 0041bc0d: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 0041bc11: jmp 0x41bc15 */ goto L_0041bc15;
L_0041bc13:; BB(0x0041bc13);
    /* 0041bc13: jmp 0x41bbdc */ goto L_0041bbdc;
L_0041bc15:; BB(0x0041bc15);
    /* 0041bc15: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0041bc19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bc1b: je 0x41bc36 */ if (fZ) goto L_0041bc36;
L_0041bc1d:; BB(0x0041bc1d);
    /* 0041bc1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041bc20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc21: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41bc26u); f_005dcb00();
    /* 0041bc26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bc29: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041bc2c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041bc2f: mov byte ptr [edx + 0x4a2], 1 */ W8((u32)(r_edx+0x4a2u), 0x1u);
L_0041bc36:; BB(0x0041bc36);
    /* 0041bc36: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0041bc39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc3a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041bc3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc3e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bc41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bc45: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41bc4au); f_004191f0();
    /* 0041bc4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041bc4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bc4d: ret 0x14 */ FN_RET(0x0041bba0); r_esp += 24; return;
}

void f_0041bc50(void) /* sub_41BC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041bc50);
    /* 0041bc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0041bc53: sub esp, 0x5cc */ {  u32 a = r_esp; u32 b = 0x5ccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bc59: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041bc5e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041bc60: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041bc63: mov dword ptr [ebp - 0x5bc], ecx */ W32((u32)(r_ebp+0xfffffa44u), r_ecx);
    /* 0041bc69: push 0x6b4d1c */ { u32 v = 0x6b4d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc6e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bc73u); f_00630f40();
    /* 0041bc73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bc76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc77: lea eax, [ebp - 0x5b8] */ r_eax = (u32)(r_ebp+0xfffffa48u);
    /* 0041bc7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bc7e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bc83u); f_00686d8e();
    /* 0041bc83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bc86: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041bc8a: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bc8d: jle 0x41bd26 */ if ((fZ||fS!=fO)) goto L_0041bd26;
L_0041bc93:; BB(0x0041bc93);
    /* 0041bc93: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041bc97: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bc9a: jle 0x41bcb1 */ if ((fZ||fS!=fO)) goto L_0041bcb1;
L_0041bc9c:; BB(0x0041bc9c);
    /* 0041bc9c: push 0x6b4d00 */ { u32 v = 0x6b4d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bca1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bca6u); f_00630f40();
    /* 0041bca6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bca9: mov dword ptr [ebp - 0x5c0], eax */ W32((u32)(r_ebp+0xfffffa40u), r_eax);
    /* 0041bcaf: jmp 0x41bcc4 */ goto L_0041bcc4;
L_0041bcb1:; BB(0x0041bcb1);
    /* 0041bcb1: push 0x6b4ce8 */ { u32 v = 0x6b4ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bcb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bcbbu); f_00630f40();
    /* 0041bcbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bcbe: mov dword ptr [ebp - 0x5c0], eax */ W32((u32)(r_ebp+0xfffffa40u), r_eax);
L_0041bcc4:; BB(0x0041bcc4);
    /* 0041bcc4: mov eax, dword ptr [ebp - 0x5c0] */ r_eax = R32((u32)(r_ebp+0xfffffa40u));
    /* 0041bcca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bccb: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 0041bcd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bcd2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bcd7u); f_00686d8e();
    /* 0041bcd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bcda: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041bcde: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bce1: jle 0x41bcf8 */ if ((fZ||fS!=fO)) goto L_0041bcf8;
L_0041bce3:; BB(0x0041bce3);
    /* 0041bce3: push 0x6b4cc8 */ { u32 v = 0x6b4cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bce8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bcedu); f_00630f40();
    /* 0041bced: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bcf0: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
    /* 0041bcf6: jmp 0x41bd0b */ goto L_0041bd0b;
L_0041bcf8:; BB(0x0041bcf8);
    /* 0041bcf8: push 0x6b4cac */ { u32 v = 0x6b4cacu; r_esp -= 4; W32(r_esp, v); }
    /* 0041bcfd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bd02u); f_00630f40();
    /* 0041bd02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bd05: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
L_0041bd0b:; BB(0x0041bd0b);
    /* 0041bd0b: mov eax, dword ptr [ebp - 0x5c4] */ r_eax = R32((u32)(r_ebp+0xfffffa3cu));
    /* 0041bd11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd12: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 0041bd18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd19: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bd1eu); f_00686d8e();
    /* 0041bd1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bd21: jmp 0x41bdfd */ goto L_0041bdfd;
L_0041bd26:; BB(0x0041bd26);
    /* 0041bd26: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041bd2a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bd2d: jge 0x41bdc3 */ if ((fS==fO)) goto L_0041bdc3;
L_0041bd33:; BB(0x0041bd33);
    /* 0041bd33: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041bd37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bd3a: jle 0x41bd51 */ if ((fZ||fS!=fO)) goto L_0041bd51;
L_0041bd3c:; BB(0x0041bd3c);
    /* 0041bd3c: push 0x6b4c90 */ { u32 v = 0x6b4c90u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd41: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bd46u); f_00630f40();
    /* 0041bd46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bd49: mov dword ptr [ebp - 0x5c8], eax */ W32((u32)(r_ebp+0xfffffa38u), r_eax);
    /* 0041bd4f: jmp 0x41bd64 */ goto L_0041bd64;
L_0041bd51:; BB(0x0041bd51);
    /* 0041bd51: push 0x6b4c78 */ { u32 v = 0x6b4c78u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd56: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bd5bu); f_00630f40();
    /* 0041bd5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bd5e: mov dword ptr [ebp - 0x5c8], eax */ W32((u32)(r_ebp+0xfffffa38u), r_eax);
L_0041bd64:; BB(0x0041bd64);
    /* 0041bd64: mov ecx, dword ptr [ebp - 0x5c8] */ r_ecx = R32((u32)(r_ebp+0xfffffa38u));
    /* 0041bd6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd6b: lea edx, [ebp - 0x98] */ r_edx = (u32)(r_ebp+0xffffff68u);
    /* 0041bd71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd72: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bd77u); f_00686d8e();
    /* 0041bd77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bd7a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041bd7e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041bd81: jle 0x41bd98 */ if ((fZ||fS!=fO)) goto L_0041bd98;
L_0041bd83:; BB(0x0041bd83);
    /* 0041bd83: push 0x6b4c58 */ { u32 v = 0x6b4c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd88: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bd8du); f_00630f40();
    /* 0041bd8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bd90: mov dword ptr [ebp - 0x5cc], eax */ W32((u32)(r_ebp+0xfffffa34u), r_eax);
    /* 0041bd96: jmp 0x41bdab */ goto L_0041bdab;
L_0041bd98:; BB(0x0041bd98);
    /* 0041bd98: push 0x6b4c3c */ { u32 v = 0x6b4c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041bd9d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bda2u); f_00630f40();
    /* 0041bda2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bda5: mov dword ptr [ebp - 0x5cc], eax */ W32((u32)(r_ebp+0xfffffa34u), r_eax);
L_0041bdab:; BB(0x0041bdab);
    /* 0041bdab: mov ecx, dword ptr [ebp - 0x5cc] */ r_ecx = R32((u32)(r_ebp+0xfffffa34u));
    /* 0041bdb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdb2: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 0041bdb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdb9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bdbeu); f_00686d8e();
    /* 0041bdbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bdc1: jmp 0x41bdfd */ goto L_0041bdfd;
L_0041bdc3:; BB(0x0041bdc3);
    /* 0041bdc3: push 0x6b4c24 */ { u32 v = 0x6b4c24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdc8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bdcdu); f_00630f40();
    /* 0041bdcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bdd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdd1: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 0041bdd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdd8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bdddu); f_00686d8e();
    /* 0041bddd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bde0: push 0x6b4c0c */ { u32 v = 0x6b4c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041bde5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bdeau); f_00630f40();
    /* 0041bdea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdee: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 0041bdf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bdf5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bdfau); f_00686d8e();
    /* 0041bdfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041bdfd:; BB(0x0041bdfd);
    /* 0041bdfd: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041be01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be02: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 0041be08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be09: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 0041be0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be10: push 0x6b4be8 */ { u32 v = 0x6b4be8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041be15: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41be1au); f_00630f40();
    /* 0041be1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be1e: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0041be24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be25: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41be2bu); call_ind(t); }
    /* 0041be2b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be2e: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041be32: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041be35: jle 0x41be65 */ if ((fZ||fS!=fO)) goto L_0041be65;
L_0041be37:; BB(0x0041be37);
    /* 0041be37: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0041be3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be3e: lea edx, [ebp - 0x5b8] */ r_edx = (u32)(r_ebp+0xfffffa48u);
    /* 0041be44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be45: push 0x6b4bcc */ { u32 v = 0x6b4bccu; r_esp -= 4; W32(r_esp, v); }
    /* 0041be4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41be4fu); f_00630f40();
    /* 0041be4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be53: lea eax, [ebp - 0x4b8] */ r_eax = (u32)(r_ebp+0xfffffb48u);
    /* 0041be59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be5a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41be60u); call_ind(t); }
    /* 0041be60: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be63: jmp 0x41bec8 */ goto L_0041bec8;
L_0041be65:; BB(0x0041be65);
    /* 0041be65: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0041be69: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041be6c: jge 0x41be9c */ if ((fS==fO)) goto L_0041be9c;
L_0041be6e:; BB(0x0041be6e);
    /* 0041be6e: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0041be74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be75: lea eax, [ebp - 0x5b8] */ r_eax = (u32)(r_ebp+0xfffffa48u);
    /* 0041be7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be7c: push 0x6b4bb0 */ { u32 v = 0x6b4bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041be81: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41be86u); f_00630f40();
    /* 0041be86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041be8a: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 0041be90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041be91: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41be97u); call_ind(t); }
    /* 0041be97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041be9a: jmp 0x41bec8 */ goto L_0041bec8;
L_0041be9c:; BB(0x0041be9c);
    /* 0041be9c: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0041bea2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bea3: lea eax, [ebp - 0x5b8] */ r_eax = (u32)(r_ebp+0xfffffa48u);
    /* 0041bea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041beaa: push 0x6b4b90 */ { u32 v = 0x6b4b90u; r_esp -= 4; W32(r_esp, v); }
    /* 0041beaf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41beb4u); f_00630f40();
    /* 0041beb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041beb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041beb8: lea ecx, [ebp - 0x4b8] */ r_ecx = (u32)(r_ebp+0xfffffb48u);
    /* 0041bebe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bebf: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41bec5u); call_ind(t); }
    /* 0041bec5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041bec8:; BB(0x0041bec8);
    /* 0041bec8: lea edx, [ebp - 0x4b8] */ r_edx = (u32)(r_ebp+0xfffffb48u);
    /* 0041bece: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041becf: push 0x6b4b78 */ { u32 v = 0x6b4b78u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bed4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bed9u); f_00630f40();
    /* 0041bed9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bedd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bedf: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0041bee5: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x41beeau); f_0057be80();
    /* 0041beea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041beed: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041beef: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x41bef4u); f_00686d72();
    /* 0041bef4: mov esp, ebp */ r_esp = r_ebp;
    /* 0041bef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bef7: ret 4 */ FN_RET(0x0041bc50); r_esp += 8; return;
}

void f_0041bf00(void) /* sub_41BF00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041bf00);
    /* 0041bf00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041bf01: mov ebp, esp */ r_ebp = r_esp;
    /* 0041bf03: sub esp, 0x418 */ {  u32 a = r_esp; u32 b = 0x418u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041bf09: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041bf0e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041bf10: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041bf13: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 0041bf19: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0041bf1f: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0041bf25: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041bf28: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bf2c: jne 0x41bf37 */ if (!fZ) goto L_0041bf37;
L_0041bf2e:; BB(0x0041bf2e);
    /* 0041bf2e: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0041bf35: jmp 0x41bf6f */ goto L_0041bf6f;
L_0041bf37:; BB(0x0041bf37);
    /* 0041bf37: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bf3b: jne 0x41bf49 */ if (!fZ) goto L_0041bf49;
L_0041bf3d:; BB(0x0041bf3d);
    /* 0041bf3d: mov dword ptr [ebp - 0x418], 0 */ W32((u32)(r_ebp+0xfffffbe8u), 0x0u);
    /* 0041bf47: jmp 0x41bf66 */ goto L_0041bf66;
L_0041bf49:; BB(0x0041bf49);
    /* 0041bf49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041bf4c: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041bf52: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0041bf58: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041bf60: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
L_0041bf66:; BB(0x0041bf66);
    /* 0041bf66: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0041bf6c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0041bf6f:; BB(0x0041bf6f);
    /* 0041bf6f: push 0x6b4e00 */ { u32 v = 0x6b4e00u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bf74: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bf79u); f_00630f40();
    /* 0041bf79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bf7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bf7d: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0041bf83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bf84: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41bf89u); f_00686d8e();
    /* 0041bf89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bf8c: push 0x6b4de0 */ { u32 v = 0x6b4de0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bf91: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bf96u); f_00630f40();
    /* 0041bf96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bf99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bf9a: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 0041bfa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfa1: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41bfa6u); f_00686ec6();
    /* 0041bfa6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bfa9: push 0x6b4dbc */ { u32 v = 0x6b4dbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bfb3u); f_00630f40();
    /* 0041bfb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bfb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfb7: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 0041bfbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfbe: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41bfc3u); f_00686ec6();
    /* 0041bfc3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bfc6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041bfc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfca: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0041bfd0: call 0x41a960 */ r_esp -= 4; W32(r_esp, 0x41bfd5u); f_0041a960();
    /* 0041bfd5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041bfd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bfda: je 0x41bff9 */ if (fZ) goto L_0041bff9;
L_0041bfdc:; BB(0x0041bfdc);
    /* 0041bfdc: push 0x6b4d94 */ { u32 v = 0x6b4d94u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfe1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41bfe6u); f_00630f40();
    /* 0041bfe6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bfe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bfea: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 0041bff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bff1: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41bff6u); f_00686ec6();
    /* 0041bff6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041bff9:; BB(0x0041bff9);
    /* 0041bff9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041bffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bffd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041c000: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c001: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0041c007: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x41c00cu); f_0041ade0();
    /* 0041c00c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041c00f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c011: je 0x41c030 */ if (fZ) goto L_0041c030;
L_0041c013:; BB(0x0041c013);
    /* 0041c013: push 0x6b4d70 */ { u32 v = 0x6b4d70u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c018: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c01du); f_00630f40();
    /* 0041c01d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c021: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0041c027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c028: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41c02du); f_00686ec6();
    /* 0041c02d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c030:; BB(0x0041c030);
    /* 0041c030: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041c033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c034: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0041c03a: call 0x41aec0 */ r_esp -= 4; W32(r_esp, 0x41c03fu); f_0041aec0();
    /* 0041c03f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041c042: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c044: je 0x41c063 */ if (fZ) goto L_0041c063;
L_0041c046:; BB(0x0041c046);
    /* 0041c046: push 0x6b4d48 */ { u32 v = 0x6b4d48u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c04b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c050u); f_00630f40();
    /* 0041c050: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c053: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c054: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0041c05a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c05b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x41c060u); f_00686ec6();
    /* 0041c060: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c063:; BB(0x0041c063);
    /* 0041c063: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 0041c069: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c06a: push 0x6b4d38 */ { u32 v = 0x6b4d38u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c06f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c074u); f_00630f40();
    /* 0041c074: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c078: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c07a: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0041c080: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x41c085u); f_0057be80();
    /* 0041c085: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041c088: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041c08a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x41c08fu); f_00686d72();
    /* 0041c08f: mov esp, ebp */ r_esp = r_ebp;
    /* 0041c091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c092: ret  */ FN_RET(0x0041bf00); r_esp += 4; return;
}

