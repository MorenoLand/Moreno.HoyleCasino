#include "protos.h"

void f_0040f4a0(void) /* sub_40F4A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f4a0);
    /* 0040f4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f4a3: sub esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f4a9: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0040f4af: mov dword ptr [ebp - 0xe8], 0x16b */ W32((u32)(r_ebp+0xffffff18u), 0x16bu);
    /* 0040f4b9: mov dword ptr [ebp - 0xe4], 0x131 */ W32((u32)(r_ebp+0xffffff1cu), 0x131u);
    /* 0040f4c3: mov dword ptr [ebp - 0xe0], 0x12c */ W32((u32)(r_ebp+0xffffff20u), 0x12cu);
    /* 0040f4cd: mov dword ptr [ebp - 0xdc], 0x110 */ W32((u32)(r_ebp+0xffffff24u), 0x110u);
    /* 0040f4d7: mov dword ptr [ebp - 0xd8], 0x17a */ W32((u32)(r_ebp+0xffffff28u), 0x17au);
    /* 0040f4e1: mov dword ptr [ebp - 0xd4], 0x110 */ W32((u32)(r_ebp+0xffffff2cu), 0x110u);
    /* 0040f4eb: mov dword ptr [ebp - 0xd0], 0x15e */ W32((u32)(r_ebp+0xffffff30u), 0x15eu);
    /* 0040f4f5: mov dword ptr [ebp - 0xcc], 0xb8 */ W32((u32)(r_ebp+0xffffff34u), 0xb8u);
    /* 0040f4ff: mov dword ptr [ebp - 0xc8], 0x12c */ W32((u32)(r_ebp+0xffffff38u), 0x12cu);
    /* 0040f509: mov dword ptr [ebp - 0xc4], 0xb8 */ W32((u32)(r_ebp+0xffffff3cu), 0xb8u);
    /* 0040f513: mov dword ptr [ebp - 0xc0], 0x17a */ W32((u32)(r_ebp+0xffffff40u), 0x17au);
    /* 0040f51d: mov dword ptr [ebp - 0xbc], 0xb8 */ W32((u32)(r_ebp+0xffffff44u), 0xb8u);
    /* 0040f527: mov dword ptr [ebp - 0xb8], 0xcb */ W32((u32)(r_ebp+0xffffff48u), 0xcbu);
    /* 0040f531: mov dword ptr [ebp - 0xb4], 0x132 */ W32((u32)(r_ebp+0xffffff4cu), 0x132u);
    /* 0040f53b: mov dword ptr [ebp - 0xb0], 0x7a */ W32((u32)(r_ebp+0xffffff50u), 0x7au);
    /* 0040f545: mov dword ptr [ebp - 0xac], 0x110 */ W32((u32)(r_ebp+0xffffff54u), 0x110u);
    /* 0040f54f: mov dword ptr [ebp - 0xa8], 0xc8 */ W32((u32)(r_ebp+0xffffff58u), 0xc8u);
    /* 0040f559: mov dword ptr [ebp - 0xa4], 0x110 */ W32((u32)(r_ebp+0xffffff5cu), 0x110u);
    /* 0040f563: mov dword ptr [ebp - 0xa0], 0xb1 */ W32((u32)(r_ebp+0xffffff60u), 0xb1u);
    /* 0040f56d: mov dword ptr [ebp - 0x9c], 0xb8 */ W32((u32)(r_ebp+0xffffff64u), 0xb8u);
    /* 0040f577: mov dword ptr [ebp - 0x98], 0x83 */ W32((u32)(r_ebp+0xffffff68u), 0x83u);
    /* 0040f581: mov dword ptr [ebp - 0x94], 0xb8 */ W32((u32)(r_ebp+0xffffff6cu), 0xb8u);
    /* 0040f58b: mov dword ptr [ebp - 0x90], 0xd1 */ W32((u32)(r_ebp+0xffffff70u), 0xd1u);
    /* 0040f595: mov dword ptr [ebp - 0x8c], 0xb8 */ W32((u32)(r_ebp+0xffffff74u), 0xb8u);
    /* 0040f59f: mov dword ptr [ebp - 0x88], 0x1ef */ W32((u32)(r_ebp+0xffffff78u), 0x1efu);
    /* 0040f5a9: mov dword ptr [ebp - 0x84], 0xeb */ W32((u32)(r_ebp+0xffffff7cu), 0xebu);
    /* 0040f5b3: mov dword ptr [ebp - 0x80], 0x1c5 */ W32((u32)(r_ebp+0xffffff80u), 0x1c5u);
    /* 0040f5ba: mov dword ptr [ebp - 0x7c], 0xcb */ W32((u32)(r_ebp+0xffffff84u), 0xcbu);
    /* 0040f5c1: mov dword ptr [ebp - 0x78], 0x214 */ W32((u32)(r_ebp+0xffffff88u), 0x214u);
    /* 0040f5c8: mov dword ptr [ebp - 0x74], 0xcb */ W32((u32)(r_ebp+0xffffff8cu), 0xcbu);
    /* 0040f5cf: mov dword ptr [ebp - 0x70], 0x1f3 */ W32((u32)(r_ebp+0xffffff90u), 0x1f3u);
    /* 0040f5d6: mov dword ptr [ebp - 0x6c], 0x78 */ W32((u32)(r_ebp+0xffffff94u), 0x78u);
    /* 0040f5dd: mov dword ptr [ebp - 0x68], 0x1c2 */ W32((u32)(r_ebp+0xffffff98u), 0x1c2u);
    /* 0040f5e4: mov dword ptr [ebp - 0x64], 0x78 */ W32((u32)(r_ebp+0xffffff9cu), 0x78u);
    /* 0040f5eb: mov dword ptr [ebp - 0x60], 0x211 */ W32((u32)(r_ebp+0xffffffa0u), 0x211u);
    /* 0040f5f2: mov dword ptr [ebp - 0x5c], 0x78 */ W32((u32)(r_ebp+0xffffffa4u), 0x78u);
    /* 0040f5f9: mov dword ptr [ebp - 0x58], 0x46 */ W32((u32)(r_ebp+0xffffffa8u), 0x46u);
    /* 0040f600: mov dword ptr [ebp - 0x54], 0xea */ W32((u32)(r_ebp+0xffffffacu), 0xeau);
    /* 0040f607: mov dword ptr [ebp - 0x50], 0xffffffee */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffeeu);
    /* 0040f60e: mov dword ptr [ebp - 0x4c], 0xcb */ W32((u32)(r_ebp+0xffffffb4u), 0xcbu);
    /* 0040f615: mov dword ptr [ebp - 0x48], 0x3d */ W32((u32)(r_ebp+0xffffffb8u), 0x3du);
    /* 0040f61c: mov dword ptr [ebp - 0x44], 0xcb */ W32((u32)(r_ebp+0xffffffbcu), 0xcbu);
    /* 0040f623: mov dword ptr [ebp - 0x40], 0x24 */ W32((u32)(r_ebp+0xffffffc0u), 0x24u);
    /* 0040f62a: mov dword ptr [ebp - 0x3c], 0x78 */ W32((u32)(r_ebp+0xffffffc4u), 0x78u);
    /* 0040f631: mov dword ptr [ebp - 0x38], 0xffffffee */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffeeu);
    /* 0040f638: mov dword ptr [ebp - 0x34], 0x78 */ W32((u32)(r_ebp+0xffffffccu), 0x78u);
    /* 0040f63f: mov dword ptr [ebp - 0x30], 0x3d */ W32((u32)(r_ebp+0xffffffd0u), 0x3du);
    /* 0040f646: mov dword ptr [ebp - 0x2c], 0x78 */ W32((u32)(r_ebp+0xffffffd4u), 0x78u);
    /* 0040f64d: mov dword ptr [ebp - 0x24], 0x143 */ W32((u32)(r_ebp+0xffffffdcu), 0x143u);
    /* 0040f654: mov dword ptr [ebp - 0x20], 0x131 */ W32((u32)(r_ebp+0xffffffe0u), 0x131u);
    /* 0040f65b: mov dword ptr [ebp - 0x1c], 0xf3 */ W32((u32)(r_ebp+0xffffffe4u), 0xf3u);
    /* 0040f662: mov dword ptr [ebp - 0x18], 0x132 */ W32((u32)(r_ebp+0xffffffe8u), 0x132u);
    /* 0040f669: mov dword ptr [ebp - 0x14], 0x1c7 */ W32((u32)(r_ebp+0xffffffecu), 0x1c7u);
    /* 0040f670: mov dword ptr [ebp - 0x10], 0xeb */ W32((u32)(r_ebp+0xfffffff0u), 0xebu);
    /* 0040f677: mov dword ptr [ebp - 0xc], 0x6e */ W32((u32)(r_ebp+0xfffffff4u), 0x6eu);
    /* 0040f67e: mov dword ptr [ebp - 8], 0xea */ W32((u32)(r_ebp+0xfffffff8u), 0xeau);
    /* 0040f685: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f689: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0040f68f: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0040f695: call 0x5cb820 */ r_esp -= 4; W32(r_esp, 0x40f69au); f_005cb820();
    /* 0040f69a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040f69d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f6a0: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 0040f6a6: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0040f6ac: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f6af: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0040f6b5: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040f6bc: ja 0x40f771 */ if ((!fC&&!fZ)) goto L_0040f771;
L_0040f6c2:; BB(0x0040f6c2);
    /* 0040f6c2: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0040f6c8: jmp dword ptr [ecx*4 + 0x40f77c] */ { u32 t = R32((u32)(r_ecx*4+0x40f77cu)); switch (t) { case 0x40f6cfu: goto L_0040f6cf; case 0x40f6e1u: goto L_0040f6e1; case 0x40f729u: goto L_0040f729; case 0x40f73fu: goto L_0040f73f; default: UNSUP(0x0040f6c8, "jump table entry is not a known target"); } }
L_0040f6cf:; BB(0x0040f6cf);
    /* 0040f6cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f6d2: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f6d5: mov eax, dword ptr [ebp + edx - 0xe8] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff18u));
    /* 0040f6dc: jmp 0x40f773 */ goto L_0040f773;
L_0040f6e1:; BB(0x0040f6e1);
    /* 0040f6e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f6e4: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f6ea: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040f6f0: cmp byte ptr [ecx + eax + 0x11b], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x11bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040f6f8: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040f6fb: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040f6fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f700: je 0x40f713 */ if (fZ) goto L_0040f713;
L_0040f702:; BB(0x0040f702);
    /* 0040f702: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f706: jne 0x40f713 */ if (!fZ) goto L_0040f713;
L_0040f708:; BB(0x0040f708);
    /* 0040f708: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f70b: mov eax, dword ptr [ebp + ecx*8 - 0x24] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0xffffffdcu));
    /* 0040f70f: jmp 0x40f773 */ goto L_0040f773;
L_0040f713:; BB(0x0040f713);
    /* 0040f713: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f716: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f719: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040f720: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f723: mov eax, dword ptr [eax + ecx*8 + 8] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 0040f727: jmp 0x40f773 */ goto L_0040f773;
L_0040f729:; BB(0x0040f729);
    /* 0040f729: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f72c: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f72f: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040f736: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f739: mov eax, dword ptr [eax + ecx*8 + 8] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 0040f73d: jmp 0x40f773 */ goto L_0040f773;
L_0040f73f:; BB(0x0040f73f);
    /* 0040f73f: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040f743: jge 0x40f75b */ if ((fS==fO)) goto L_0040f75b;
L_0040f745:; BB(0x0040f745);
    /* 0040f745: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f748: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f74b: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040f752: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f755: mov eax, dword ptr [eax + ecx*8 + 8] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 0040f759: jmp 0x40f773 */ goto L_0040f773;
L_0040f75b:; BB(0x0040f75b);
    /* 0040f75b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f75e: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f761: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040f768: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040f76b: mov eax, dword ptr [eax + ecx*8 + 0x10] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x10u));
    /* 0040f76f: jmp 0x40f773 */ goto L_0040f773;
L_0040f771:; BB(0x0040f771);
    /* 0040f771: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040f773:; BB(0x0040f773);
    /* 0040f773: mov esp, ebp */ r_esp = r_ebp;
    /* 0040f775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040f776: ret 8 */ FN_RET(0x0040f4a0); r_esp += 12; return;
}

void f_0040f790(void) /* sub_40F790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040f790);
    /* 0040f790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040f791: mov ebp, esp */ r_ebp = r_esp;
    /* 0040f793: sub esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040f799: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0040f79f: mov dword ptr [ebp - 0xe8], 0x16b */ W32((u32)(r_ebp+0xffffff18u), 0x16bu);
    /* 0040f7a9: mov dword ptr [ebp - 0xe4], 0x131 */ W32((u32)(r_ebp+0xffffff1cu), 0x131u);
    /* 0040f7b3: mov dword ptr [ebp - 0xe0], 0x12c */ W32((u32)(r_ebp+0xffffff20u), 0x12cu);
    /* 0040f7bd: mov dword ptr [ebp - 0xdc], 0x110 */ W32((u32)(r_ebp+0xffffff24u), 0x110u);
    /* 0040f7c7: mov dword ptr [ebp - 0xd8], 0x17a */ W32((u32)(r_ebp+0xffffff28u), 0x17au);
    /* 0040f7d1: mov dword ptr [ebp - 0xd4], 0x110 */ W32((u32)(r_ebp+0xffffff2cu), 0x110u);
    /* 0040f7db: mov dword ptr [ebp - 0xd0], 0x15e */ W32((u32)(r_ebp+0xffffff30u), 0x15eu);
    /* 0040f7e5: mov dword ptr [ebp - 0xcc], 0xb8 */ W32((u32)(r_ebp+0xffffff34u), 0xb8u);
    /* 0040f7ef: mov dword ptr [ebp - 0xc8], 0x12c */ W32((u32)(r_ebp+0xffffff38u), 0x12cu);
    /* 0040f7f9: mov dword ptr [ebp - 0xc4], 0xb8 */ W32((u32)(r_ebp+0xffffff3cu), 0xb8u);
    /* 0040f803: mov dword ptr [ebp - 0xc0], 0x17a */ W32((u32)(r_ebp+0xffffff40u), 0x17au);
    /* 0040f80d: mov dword ptr [ebp - 0xbc], 0xb8 */ W32((u32)(r_ebp+0xffffff44u), 0xb8u);
    /* 0040f817: mov dword ptr [ebp - 0xb8], 0xcb */ W32((u32)(r_ebp+0xffffff48u), 0xcbu);
    /* 0040f821: mov dword ptr [ebp - 0xb4], 0x132 */ W32((u32)(r_ebp+0xffffff4cu), 0x132u);
    /* 0040f82b: mov dword ptr [ebp - 0xb0], 0x7a */ W32((u32)(r_ebp+0xffffff50u), 0x7au);
    /* 0040f835: mov dword ptr [ebp - 0xac], 0x110 */ W32((u32)(r_ebp+0xffffff54u), 0x110u);
    /* 0040f83f: mov dword ptr [ebp - 0xa8], 0xc8 */ W32((u32)(r_ebp+0xffffff58u), 0xc8u);
    /* 0040f849: mov dword ptr [ebp - 0xa4], 0x110 */ W32((u32)(r_ebp+0xffffff5cu), 0x110u);
    /* 0040f853: mov dword ptr [ebp - 0xa0], 0xb1 */ W32((u32)(r_ebp+0xffffff60u), 0xb1u);
    /* 0040f85d: mov dword ptr [ebp - 0x9c], 0xb8 */ W32((u32)(r_ebp+0xffffff64u), 0xb8u);
    /* 0040f867: mov dword ptr [ebp - 0x98], 0x83 */ W32((u32)(r_ebp+0xffffff68u), 0x83u);
    /* 0040f871: mov dword ptr [ebp - 0x94], 0xb8 */ W32((u32)(r_ebp+0xffffff6cu), 0xb8u);
    /* 0040f87b: mov dword ptr [ebp - 0x90], 0xd1 */ W32((u32)(r_ebp+0xffffff70u), 0xd1u);
    /* 0040f885: mov dword ptr [ebp - 0x8c], 0xb8 */ W32((u32)(r_ebp+0xffffff74u), 0xb8u);
    /* 0040f88f: mov dword ptr [ebp - 0x88], 0x1ef */ W32((u32)(r_ebp+0xffffff78u), 0x1efu);
    /* 0040f899: mov dword ptr [ebp - 0x84], 0xeb */ W32((u32)(r_ebp+0xffffff7cu), 0xebu);
    /* 0040f8a3: mov dword ptr [ebp - 0x80], 0x1c5 */ W32((u32)(r_ebp+0xffffff80u), 0x1c5u);
    /* 0040f8aa: mov dword ptr [ebp - 0x7c], 0xcb */ W32((u32)(r_ebp+0xffffff84u), 0xcbu);
    /* 0040f8b1: mov dword ptr [ebp - 0x78], 0x214 */ W32((u32)(r_ebp+0xffffff88u), 0x214u);
    /* 0040f8b8: mov dword ptr [ebp - 0x74], 0xcb */ W32((u32)(r_ebp+0xffffff8cu), 0xcbu);
    /* 0040f8bf: mov dword ptr [ebp - 0x70], 0x1f3 */ W32((u32)(r_ebp+0xffffff90u), 0x1f3u);
    /* 0040f8c6: mov dword ptr [ebp - 0x6c], 0x78 */ W32((u32)(r_ebp+0xffffff94u), 0x78u);
    /* 0040f8cd: mov dword ptr [ebp - 0x68], 0x1c2 */ W32((u32)(r_ebp+0xffffff98u), 0x1c2u);
    /* 0040f8d4: mov dword ptr [ebp - 0x64], 0x78 */ W32((u32)(r_ebp+0xffffff9cu), 0x78u);
    /* 0040f8db: mov dword ptr [ebp - 0x60], 0x211 */ W32((u32)(r_ebp+0xffffffa0u), 0x211u);
    /* 0040f8e2: mov dword ptr [ebp - 0x5c], 0x78 */ W32((u32)(r_ebp+0xffffffa4u), 0x78u);
    /* 0040f8e9: mov dword ptr [ebp - 0x58], 0x46 */ W32((u32)(r_ebp+0xffffffa8u), 0x46u);
    /* 0040f8f0: mov dword ptr [ebp - 0x54], 0xea */ W32((u32)(r_ebp+0xffffffacu), 0xeau);
    /* 0040f8f7: mov dword ptr [ebp - 0x50], 0xffffffee */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffeeu);
    /* 0040f8fe: mov dword ptr [ebp - 0x4c], 0xcb */ W32((u32)(r_ebp+0xffffffb4u), 0xcbu);
    /* 0040f905: mov dword ptr [ebp - 0x48], 0x3d */ W32((u32)(r_ebp+0xffffffb8u), 0x3du);
    /* 0040f90c: mov dword ptr [ebp - 0x44], 0xcb */ W32((u32)(r_ebp+0xffffffbcu), 0xcbu);
    /* 0040f913: mov dword ptr [ebp - 0x40], 0x24 */ W32((u32)(r_ebp+0xffffffc0u), 0x24u);
    /* 0040f91a: mov dword ptr [ebp - 0x3c], 0x78 */ W32((u32)(r_ebp+0xffffffc4u), 0x78u);
    /* 0040f921: mov dword ptr [ebp - 0x38], 0xffffffee */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffeeu);
    /* 0040f928: mov dword ptr [ebp - 0x34], 0x78 */ W32((u32)(r_ebp+0xffffffccu), 0x78u);
    /* 0040f92f: mov dword ptr [ebp - 0x30], 0x3d */ W32((u32)(r_ebp+0xffffffd0u), 0x3du);
    /* 0040f936: mov dword ptr [ebp - 0x2c], 0x78 */ W32((u32)(r_ebp+0xffffffd4u), 0x78u);
    /* 0040f93d: mov dword ptr [ebp - 0x24], 0x143 */ W32((u32)(r_ebp+0xffffffdcu), 0x143u);
    /* 0040f944: mov dword ptr [ebp - 0x20], 0x131 */ W32((u32)(r_ebp+0xffffffe0u), 0x131u);
    /* 0040f94b: mov dword ptr [ebp - 0x1c], 0xf3 */ W32((u32)(r_ebp+0xffffffe4u), 0xf3u);
    /* 0040f952: mov dword ptr [ebp - 0x18], 0x132 */ W32((u32)(r_ebp+0xffffffe8u), 0x132u);
    /* 0040f959: mov dword ptr [ebp - 0x14], 0x1c7 */ W32((u32)(r_ebp+0xffffffecu), 0x1c7u);
    /* 0040f960: mov dword ptr [ebp - 0x10], 0xeb */ W32((u32)(r_ebp+0xfffffff0u), 0xebu);
    /* 0040f967: mov dword ptr [ebp - 0xc], 0x6e */ W32((u32)(r_ebp+0xfffffff4u), 0x6eu);
    /* 0040f96e: mov dword ptr [ebp - 8], 0xea */ W32((u32)(r_ebp+0xfffffff8u), 0xeau);
    /* 0040f975: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040f979: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0040f97f: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0040f985: call 0x5cb820 */ r_esp -= 4; W32(r_esp, 0x40f98au); f_005cb820();
    /* 0040f98a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040f98d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040f990: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 0040f996: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 0040f99c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040f99f: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0040f9a5: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040f9ac: ja 0x40fa61 */ if ((!fC&&!fZ)) goto L_0040fa61;
L_0040f9b2:; BB(0x0040f9b2);
    /* 0040f9b2: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0040f9b8: jmp dword ptr [ecx*4 + 0x40fa6c] */ { u32 t = R32((u32)(r_ecx*4+0x40fa6cu)); switch (t) { case 0x40f9bfu: goto L_0040f9bf; case 0x40f9d1u: goto L_0040f9d1; case 0x40fa19u: goto L_0040fa19; case 0x40fa2fu: goto L_0040fa2f; default: UNSUP(0x0040f9b8, "jump table entry is not a known target"); } }
L_0040f9bf:; BB(0x0040f9bf);
    /* 0040f9bf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040f9c2: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f9c5: mov eax, dword ptr [ebp + edx - 0xe4] */ r_eax = R32((u32)(r_ebp+r_edx+0xffffff1cu));
    /* 0040f9cc: jmp 0x40fa63 */ goto L_0040fa63;
L_0040f9d1:; BB(0x0040f9d1);
    /* 0040f9d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040f9d4: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040f9da: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040f9e0: cmp byte ptr [ecx + eax + 0x11b], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x11bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040f9e8: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040f9eb: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040f9ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f9f0: je 0x40fa03 */ if (fZ) goto L_0040fa03;
L_0040f9f2:; BB(0x0040f9f2);
    /* 0040f9f2: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040f9f6: jne 0x40fa03 */ if (!fZ) goto L_0040fa03;
L_0040f9f8:; BB(0x0040f9f8);
    /* 0040f9f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040f9fb: mov eax, dword ptr [ebp + ecx*8 - 0x20] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0xffffffe0u));
    /* 0040f9ff: jmp 0x40fa63 */ goto L_0040fa63;
L_0040fa03:; BB(0x0040fa03);
    /* 0040fa03: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040fa06: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040fa09: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040fa10: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040fa13: mov eax, dword ptr [eax + ecx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 0040fa17: jmp 0x40fa63 */ goto L_0040fa63;
L_0040fa19:; BB(0x0040fa19);
    /* 0040fa19: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040fa1c: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040fa1f: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040fa26: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040fa29: mov eax, dword ptr [eax + ecx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 0040fa2d: jmp 0x40fa63 */ goto L_0040fa63;
L_0040fa2f:; BB(0x0040fa2f);
    /* 0040fa2f: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fa33: jge 0x40fa4b */ if ((fS==fO)) goto L_0040fa4b;
L_0040fa35:; BB(0x0040fa35);
    /* 0040fa35: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040fa38: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040fa3b: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040fa42: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040fa45: mov eax, dword ptr [eax + ecx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 0040fa49: jmp 0x40fa63 */ goto L_0040fa63;
L_0040fa4b:; BB(0x0040fa4b);
    /* 0040fa4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040fa4e: imul edx, edx, 0x30 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x30u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040fa51: lea eax, [ebp + edx - 0xe8] */ r_eax = (u32)(r_ebp+r_edx+0xffffff18u);
    /* 0040fa58: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040fa5b: mov eax, dword ptr [eax + ecx*8 + 0x14] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x14u));
    /* 0040fa5f: jmp 0x40fa63 */ goto L_0040fa63;
L_0040fa61:; BB(0x0040fa61);
    /* 0040fa61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040fa63:; BB(0x0040fa63);
    /* 0040fa63: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fa65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fa66: ret 8 */ FN_RET(0x0040f790); r_esp += 12; return;
}

void f_0040fdc0(void) /* sub_40FDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fdc0);
    /* 0040fdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fdc3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040fdc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040fdc9: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040fdce: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0040fdd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040fdd7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fddb: jne 0x40fde6 */ if (!fZ) goto L_0040fde6;
L_0040fddd:; BB(0x0040fddd);
    /* 0040fddd: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0040fde4: jmp 0x40fe14 */ goto L_0040fe14;
L_0040fde6:; BB(0x0040fde6);
    /* 0040fde6: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fdea: jne 0x40fdf5 */ if (!fZ) goto L_0040fdf5;
L_0040fdec:; BB(0x0040fdec);
    /* 0040fdec: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0040fdf3: jmp 0x40fe0e */ goto L_0040fe0e;
L_0040fdf5:; BB(0x0040fdf5);
    /* 0040fdf5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fdf8: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040fdfe: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040fe03: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0040fe0b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0040fe0e:; BB(0x0040fe0e);
    /* 0040fe0e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040fe11: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0040fe14:; BB(0x0040fe14);
    /* 0040fe14: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040fe17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040fe1a: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0040fe1d: sub edx, dword ptr [ecx + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040fe20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe21: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x40fe26u); f_00686eba();
    /* 0040fe26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fe29: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040fe2c: cmp dword ptr [ebp - 0x10], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fe30: jge 0x40fe39 */ if ((fS==fO)) goto L_0040fe39;
L_0040fe32:; BB(0x0040fe32);
    /* 0040fe32: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0040fe39:; BB(0x0040fe39);
    /* 0040fe39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040fe3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040fe3f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0040fe42: sub edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040fe45: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040fe48: cmp dword ptr [ebp - 8], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fe4c: jge 0x40fe55 */ if ((fS==fO)) goto L_0040fe55;
L_0040fe4e:; BB(0x0040fe4e);
    /* 0040fe4e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0040fe55:; BB(0x0040fe55);
    /* 0040fe55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040fe58: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0040fe5b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040fe5e: cmp dword ptr [ebp - 0x1c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe62: je 0x40fe73 */ if (fZ) goto L_0040fe73;
L_0040fe64:; BB(0x0040fe64);
    /* 0040fe64: cmp dword ptr [ebp - 0x1c], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe68: je 0x40fef3 */ if (fZ) goto L_0040fef3;
L_0040fe6e:; BB(0x0040fe6e);
    /* 0040fe6e: jmp 0x40ff7d */ goto L_0040ff7d;
L_0040fe73:; BB(0x0040fe73);
    /* 0040fe73: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040fe76: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fe79: jle 0x40fea0 */ if ((fZ||fS!=fO)) goto L_0040fea0;
L_0040fe7b:; BB(0x0040fe7b);
    /* 0040fe7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fe82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040fe83: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0040fe89: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x40fe8eu); f_00413360();
    /* 0040fe8e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040fe91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fe93: je 0x40fea0 */ if (fZ) goto L_0040fea0;
L_0040fe95:; BB(0x0040fe95);
    /* 0040fe95: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040fe9b: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x40fea0u); f_0040da70();
L_0040fea0:; BB(0x0040fea0);
    /* 0040fea0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040fea3: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fea6: jle 0x40feee */ if ((fZ||fS!=fO)) goto L_0040feee;
L_0040fea8:; BB(0x0040fea8);
    /* 0040fea8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040feab: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040feb1: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040feb7: cmp byte ptr [ecx + eax + 0x118], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0040febf: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0040fec2: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0040fec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fec7: jne 0x40feee */ if (!fZ) goto L_0040feee;
L_0040fec9:; BB(0x0040fec9);
    /* 0040fec9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fecb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040fecd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fed0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fed1: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0040fed7: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x40fedcu); f_00413360();
    /* 0040fedc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040fedf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fee1: je 0x40feee */ if (fZ) goto L_0040feee;
L_0040fee3:; BB(0x0040fee3);
    /* 0040fee3: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040fee9: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x40feeeu); f_0040da70();
L_0040feee:; BB(0x0040feee);
    /* 0040feee: jmp 0x40ff7d */ goto L_0040ff7d;
L_0040fef3:; BB(0x0040fef3);
    /* 0040fef3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040fef6: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040fef9: jle 0x40ff3a */ if ((fZ||fS!=fO)) goto L_0040ff3a;
L_0040fefb:; BB(0x0040fefb);
    /* 0040fefb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040fefe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040feff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ff02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff03: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040ff09: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x40ff0eu); f_0041ade0();
    /* 0040ff0e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040ff11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ff13: je 0x40ff3a */ if (fZ) goto L_0040ff3a;
L_0040ff15:; BB(0x0040ff15);
    /* 0040ff15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff17: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ff1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff1d: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0040ff23: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x40ff28u); f_00413360();
    /* 0040ff28: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040ff2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ff2d: je 0x40ff3a */ if (fZ) goto L_0040ff3a;
L_0040ff2f:; BB(0x0040ff2f);
    /* 0040ff2f: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ff35: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x40ff3au); f_0040da70();
L_0040ff3a:; BB(0x0040ff3a);
    /* 0040ff3a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040ff3d: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ff40: jle 0x40ff7d */ if ((fZ||fS!=fO)) goto L_0040ff7d;
L_0040ff42:; BB(0x0040ff42);
    /* 0040ff42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ff45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff46: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040ff4c: call 0x41a960 */ r_esp -= 4; W32(r_esp, 0x40ff51u); f_0041a960();
    /* 0040ff51: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040ff54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ff56: je 0x40ff7d */ if (fZ) goto L_0040ff7d;
L_0040ff58:; BB(0x0040ff58);
    /* 0040ff58: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff5a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040ff5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040ff60: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 0040ff66: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x40ff6bu); f_00413360();
    /* 0040ff6b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040ff6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ff70: je 0x40ff7d */ if (fZ) goto L_0040ff7d;
L_0040ff72:; BB(0x0040ff72);
    /* 0040ff72: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 0040ff78: call 0x40da70 */ r_esp -= 4; W32(r_esp, 0x40ff7du); f_0040da70();
L_0040ff7d:; BB(0x0040ff7d);
    /* 0040ff7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040ff7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040ff80: ret  */ FN_RET(0x0040fdc0); r_esp += 4; return;
}

