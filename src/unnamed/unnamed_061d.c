#include "protos.h"

void f_0061d0d0(void) /* sub_61D0D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d0d0);
    /* 0061d0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d0d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d0d6: lea eax, [ebp - 3] */ r_eax = (u32)(r_ebp+0xfffffffdu);
    /* 0061d0d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0da: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 0061d0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0de: lea edx, [ebp - 2] */ r_edx = (u32)(r_ebp+0xfffffffeu);
    /* 0061d0e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0e2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061d0e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0e6: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061d0e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0ea: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061d0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0ee: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061d0f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d0f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061d0f6: call 0x61d290 */ r_esp -= 4; W32(r_esp, 0x61d0fbu); f_0061d290();
    /* 0061d0fb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061d0fe: movzx edx, byte ptr [ebp - 3] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0061d102: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d105: jne 0x61d117 */ if (!fZ) goto L_0061d117;
L_0061d107:; BB(0x0061d107);
    /* 0061d107: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0061d10b: movzx ecx, byte ptr [ebp + 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0x1cu));
    /* 0061d10f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d111: jl 0x61d117 */ if ((fS!=fO)) goto L_0061d117;
L_0061d113:; BB(0x0061d113);
    /* 0061d113: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0061d115: jmp 0x61d13c */ goto L_0061d13c;
L_0061d117:; BB(0x0061d117);
    /* 0061d117: movzx edx, byte ptr [ebp - 3] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0061d11b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d11e: je 0x61d132 */ if (fZ) goto L_0061d132;
L_0061d120:; BB(0x0061d120);
    /* 0061d120: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0061d124: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d127: je 0x61d132 */ if (fZ) goto L_0061d132;
L_0061d129:; BB(0x0061d129);
    /* 0061d129: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061d130: jmp 0x61d139 */ goto L_0061d139;
L_0061d132:; BB(0x0061d132);
    /* 0061d132: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0061d139:; BB(0x0061d139);
    /* 0061d139: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
L_0061d13c:; BB(0x0061d13c);
    /* 0061d13c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d13e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d13f: ret  */ FN_RET(0x0061d0d0); r_esp += 4; return;
}

void f_0061d290(void) /* sub_61D290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d290);
    /* 0061d290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d291: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d293: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d296: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061d299: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0061d29c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0061d29f: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0061d2a2: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0061d2a5: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
    /* 0061d2a8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061d2ab: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061d2ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d2b1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061d2b4: mov ecx, dword ptr [edx + ecx*8 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0061d2b8: movsx edx, word ptr [ecx + eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax));
    /* 0061d2bc: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d2bf: jl 0x61d2c6 */ if ((fS!=fO)) goto L_0061d2c6;
L_0061d2c1:; BB(0x0061d2c1);
    /* 0061d2c1: jmp 0x61d46f */ goto L_0061d46f;
L_0061d2c6:; BB(0x0061d2c6);
    /* 0061d2c6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061d2c9: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061d2cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d2cf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061d2d2: mov ecx, dword ptr [edx + ecx*8 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0061d2d6: movsx edx, word ptr [ecx + eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_eax+0x2u));
    /* 0061d2db: cmp dword ptr [ebp + 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d2de: jl 0x61d2e5 */ if ((fS!=fO)) goto L_0061d2e5;
L_0061d2e0:; BB(0x0061d2e0);
    /* 0061d2e0: jmp 0x61d46f */ goto L_0061d46f;
L_0061d2e5:; BB(0x0061d2e5);
    /* 0061d2e5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061d2e8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d2eb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061d2ee: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d2f1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061d2f4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061d2f7: mov edx, dword ptr [eax + edx*8 + 4] */ r_edx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0061d2fb: mov eax, dword ptr [edx + ecx + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx+0xcu));
    /* 0061d2ff: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0061d302: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0061d305: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d308: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0061d30b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d30e: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061d310: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0061d312: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d315: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d318: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d31b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d31e: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061d321: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0061d325: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d328: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d32b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0061d32e:; BB(0x0061d32e);
    /* 0061d32e: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d332: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d335: jl 0x61d3cd */ if ((fS!=fO)) goto L_0061d3cd;
L_0061d33b:; BB(0x0061d33b);
    /* 0061d33b: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d33f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d341: jle 0x61d3cd */ if ((fZ||fS!=fO)) goto L_0061d3cd;
L_0061d347:; BB(0x0061d347);
    /* 0061d347: movzx eax, word ptr [ebp - 8] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d34b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d34e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d350: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d353: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0061d356: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d359: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061d35c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d35f: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d362: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061d365: cmp dword ptr [ebp - 0x10], 0x3e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061d369: ja 0x61d3a2 */ if ((!fC&&!fZ)) goto L_0061d3a2;
L_0061d36b:; BB(0x0061d36b);
    /* 0061d36b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d36e: movzx eax, byte ptr [edx + 0x61d484] */ r_eax = (u32)R8((u32)(r_edx+0x61d484u));
    /* 0061d375: jmp dword ptr [eax*4 + 0x61d474] */ { u32 t = R32((u32)(r_eax*4+0x61d474u)); switch (t) { case 0x61d37eu: goto L_0061d37e; case 0x61d38au: goto L_0061d38a; case 0x61d399u: goto L_0061d399; case 0x61d3a2u: goto L_0061d3a2; default: UNSUP(0x0061d375, "jump table entry is not a known target"); } }
L_0061d37e:; BB(0x0061d37e);
    /* 0061d37e: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d382: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d385: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d388: jmp 0x61d3a2 */ goto L_0061d3a2;
L_0061d38a:; BB(0x0061d38a);
    /* 0061d38a: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d38e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d391: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 0061d394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d397: jmp 0x61d3a2 */ goto L_0061d3a2;
L_0061d399:; BB(0x0061d399);
    /* 0061d399: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d39c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d39f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0061d3a2:; BB(0x0061d3a2);
    /* 0061d3a2: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0061d3a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d3a8: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061d3aa: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0061d3ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d3af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d3b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d3b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d3b8: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 0061d3bb: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0061d3bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d3c2: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d3c5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d3c8: jmp 0x61d32e */ goto L_0061d32e;
L_0061d3cd:; BB(0x0061d3cd);
    /* 0061d3cd: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d3d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061d3d3: jle 0x61d463 */ if ((fZ||fS!=fO)) goto L_0061d463;
L_0061d3d9:; BB(0x0061d3d9);
    /* 0061d3d9: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0061d3dd: sub edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d3e0: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0061d3e4: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0061d3e7: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d3ea: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061d3ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d3f0: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d3f3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0061d3f6: cmp dword ptr [ebp - 0x14], 0x3f */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061d3fa: ja 0x61d461 */ if ((!fC&&!fZ)) goto L_0061d461;
L_0061d3fc:; BB(0x0061d3fc);
    /* 0061d3fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d3ff: movzx ecx, byte ptr [eax + 0x61d4d8] */ r_ecx = (u32)R8((u32)(r_eax+0x61d4d8u));
    /* 0061d406: jmp dword ptr [ecx*4 + 0x61d4c4] */ { u32 t = R32((u32)(r_ecx*4+0x61d4c4u)); switch (t) { case 0x61d40du: goto L_0061d40d; case 0x61d415u: goto L_0061d415; case 0x61d42au: goto L_0061d42a; case 0x61d455u: goto L_0061d455; case 0x61d461u: goto L_0061d461; default: UNSUP(0x0061d406, "jump table entry is not a known target"); } }
L_0061d40d:; BB(0x0061d40d);
    /* 0061d40d: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061d410: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0061d413: jmp 0x61d46f */ goto L_0061d46f;
L_0061d415:; BB(0x0061d415);
    /* 0061d415: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d418: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d41b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d41e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0061d421: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d424: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0061d426: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0061d428: jmp 0x61d46f */ goto L_0061d46f;
L_0061d42a:; BB(0x0061d42a);
    /* 0061d42a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061d42d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d430: lea eax, [edx + ecx*2] */ r_eax = (u32)(r_edx+r_ecx*2);
    /* 0061d433: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d436: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0061d439: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d43c: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0061d43e: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0061d440: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d443: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d446: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d449: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0061d44c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d44f: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0061d451: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0061d453: jmp 0x61d46f */ goto L_0061d46f;
L_0061d455:; BB(0x0061d455);
    /* 0061d455: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061d458: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d45b: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0061d45d: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0061d45f: jmp 0x61d46f */ goto L_0061d46f;
L_0061d461:; BB(0x0061d461);
    /* 0061d461: jmp 0x61d46f */ goto L_0061d46f;
L_0061d463:; BB(0x0061d463);
    /* 0061d463: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061d466: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0061d469: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0061d46c: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
L_0061d46f:; BB(0x0061d46f);
    /* 0061d46f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d472: ret  */ FN_RET(0x0061d290); r_esp += 4; return;
}

void f_0061d520(void) /* sub_61D520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d520);
    /* 0061d520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d521: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d523: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d526: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0061d529: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d52c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d52f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d532: cmp dword ptr [ebp + 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d539: je 0x61d5f8 */ if (fZ) goto L_0061d5f8;
L_0061d53f:; BB(0x0061d53f);
    /* 0061d53f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d542: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d545: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d548: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d54b: imul edx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d54f: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061d552: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d554: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d557: cmp dword ptr [ebp - 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d55e: jle 0x61d567 */ if ((fZ||fS!=fO)) goto L_0061d567;
L_0061d560:; BB(0x0061d560);
    /* 0061d560: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
L_0061d567:; BB(0x0061d567);
    /* 0061d567: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d56a: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d56d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061d56f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d572: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d575: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d578: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d57b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d57e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061d581: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d584: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d58a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d58d: imul ecx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d591: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d594: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d596: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d599: cmp dword ptr [ebp - 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d5a0: jle 0x61d5a9 */ if ((fZ||fS!=fO)) goto L_0061d5a9;
L_0061d5a2:; BB(0x0061d5a2);
    /* 0061d5a2: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
L_0061d5a9:; BB(0x0061d5a9);
    /* 0061d5a9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d5ac: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d5af: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0061d5b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d5b4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d5b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d5ba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d5bd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d5c0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061d5c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d5c6: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d5c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d5cc: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d5cf: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d5d3: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061d5d6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d5d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d5db: cmp dword ptr [ebp - 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d5e2: jle 0x61d5eb */ if ((fZ||fS!=fO)) goto L_0061d5eb;
L_0061d5e4:; BB(0x0061d5e4);
    /* 0061d5e4: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
L_0061d5eb:; BB(0x0061d5eb);
    /* 0061d5eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d5ee: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d5f1: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061d5f3: jmp 0x61d697 */ goto L_0061d697;
L_0061d5f8:; BB(0x0061d5f8);
    /* 0061d5f8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d5fb: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d5fe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d601: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d604: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d606: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d609: cmp dword ptr [ebp - 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d610: jle 0x61d619 */ if ((fZ||fS!=fO)) goto L_0061d619;
L_0061d612:; BB(0x0061d612);
    /* 0061d612: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
L_0061d619:; BB(0x0061d619);
    /* 0061d619: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d61c: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d61f: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061d621: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d624: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d627: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d62a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d62d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d630: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d633: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d636: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d639: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d63c: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d63f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d641: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d644: cmp dword ptr [ebp - 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d64b: jle 0x61d654 */ if ((fZ||fS!=fO)) goto L_0061d654;
L_0061d64d:; BB(0x0061d64d);
    /* 0061d64d: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
L_0061d654:; BB(0x0061d654);
    /* 0061d654: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d657: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d65a: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061d65c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d65f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d662: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d665: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d668: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d66b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061d66e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d671: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d674: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d677: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d67a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d67c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d67f: cmp dword ptr [ebp - 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d686: jle 0x61d68f */ if ((fZ||fS!=fO)) goto L_0061d68f;
L_0061d688:; BB(0x0061d688);
    /* 0061d688: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
L_0061d68f:; BB(0x0061d68f);
    /* 0061d68f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d692: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d695: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
L_0061d697:; BB(0x0061d697);
    /* 0061d697: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d69a: ret  */ FN_RET(0x0061d520); r_esp += 4; return;
}

void f_0061d6a0(void) /* sub_61D6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d6a0);
    /* 0061d6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d6a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d6a6: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0061d6a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d6ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d6af: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d6b2: cmp dword ptr [ebp + 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d6b9: je 0x61d77b */ if (fZ) goto L_0061d77b;
L_0061d6bf:; BB(0x0061d6bf);
    /* 0061d6bf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d6c2: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d6c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d6c8: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d6cb: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0061d6d0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d6d2: imul ecx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d6d6: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d6d9: mov edx, 0xff */ r_edx = 0xffu;
    /* 0061d6de: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d6e0: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d6e3: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061d6e6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d6e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d6ec: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d6ef: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061d6f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d6f4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d6f7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d6fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d6fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d700: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061d703: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d706: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d709: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d70c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d70f: mov eax, 0xff */ r_eax = 0xffu;
    /* 0061d714: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d716: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d71a: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061d71d: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0061d722: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d724: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d727: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061d72a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d72d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d730: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d733: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0061d735: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d738: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d73b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d73e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d741: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d744: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061d747: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d74a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d74d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d750: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d753: mov edx, 0xff */ r_edx = 0xffu;
    /* 0061d758: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d75a: imul edx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d75e: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061d761: mov eax, 0xff */ r_eax = 0xffu;
    /* 0061d766: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d768: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d76b: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d76e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d771: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d774: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d777: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061d779: jmp 0x61d7f6 */ goto L_0061d7f6;
L_0061d77b:; BB(0x0061d77b);
    /* 0061d77b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d77e: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d781: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d784: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d787: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d78a: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d78d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d790: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d793: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d796: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061d798: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d79b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d79e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d7a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d7a4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d7a7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d7aa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d7ad: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d7b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d7b3: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d7b6: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d7b9: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061d7bc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d7bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d7c2: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d7c5: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061d7c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d7ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d7cd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d7d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d7d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d7d6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061d7d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d7dc: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d7df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d7e2: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d7e5: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d7e8: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061d7eb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d7ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d7f1: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d7f4: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
L_0061d7f6:; BB(0x0061d7f6);
    /* 0061d7f6: mov esp, ebp */ r_esp = r_ebp;
    /* 0061d7f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061d7f9: ret  */ FN_RET(0x0061d6a0); r_esp += 4; return;
}

void f_0061d800(void) /* sub_61D800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061d800);
    /* 0061d800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061d801: mov ebp, esp */ r_ebp = r_esp;
    /* 0061d803: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061d806: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0061d809: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061d80c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061d80f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061d812: cmp dword ptr [ebp + 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061d819: je 0x61d94e */ if (fZ) goto L_0061d94e;
L_0061d81f:; BB(0x0061d81f);
    /* 0061d81f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d822: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d825: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d82a: jg 0x61d837 */ if ((!fZ&&fS==fO)) goto L_0061d837;
L_0061d82c:; BB(0x0061d82c);
    /* 0061d82c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d82f: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d832: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061d835: jmp 0x61d847 */ goto L_0061d847;
L_0061d837:; BB(0x0061d837);
    /* 0061d837: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d83a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d83d: mov edx, 0xff */ r_edx = 0xffu;
    /* 0061d842: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d844: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0061d847:; BB(0x0061d847);
    /* 0061d847: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d84a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d84d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d850: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d853: sub eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d858: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061d85b: imul edx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d85f: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061d862: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d865: sar eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061d868: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d86a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061d86d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d870: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d873: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061d875: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d878: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d87b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061d87e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d881: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d884: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061d887: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d88a: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d88d: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d893: jg 0x61d8a0 */ if ((!fZ&&fS==fO)) goto L_0061d8a0;
L_0061d895:; BB(0x0061d895);
    /* 0061d895: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d898: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d89b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061d89e: jmp 0x61d8b0 */ goto L_0061d8b0;
L_0061d8a0:; BB(0x0061d8a0);
    /* 0061d8a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d8a3: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d8a6: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0061d8ab: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d8ad: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061d8b0:; BB(0x0061d8b0);
    /* 0061d8b0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d8b3: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d8b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8b9: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d8bc: sub edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061d8c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061d8c5: imul ecx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d8c9: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d8cc: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d8cf: sar edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061d8d2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061d8d4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061d8d7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d8da: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d8dd: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0061d8df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d8e2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d8e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d8e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d8eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d8ee: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061d8f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d8f4: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d8f7: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d8fd: jg 0x61d90a */ if ((!fZ&&fS==fO)) goto L_0061d90a;
L_0061d8ff:; BB(0x0061d8ff);
    /* 0061d8ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d902: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d905: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0061d908: jmp 0x61d91a */ goto L_0061d91a;
L_0061d90a:; BB(0x0061d90a);
    /* 0061d90a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d90d: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d910: mov eax, 0xff */ r_eax = 0xffu;
    /* 0061d915: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d917: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0061d91a:; BB(0x0061d91a);
    /* 0061d91a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d91d: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d920: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d923: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d926: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d92c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061d92f: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d933: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061d936: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d939: sar ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d93c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d93e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d941: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d944: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d947: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061d949: jmp 0x61da5f */ goto L_0061da5f;
L_0061d94e:; BB(0x0061d94e);
    /* 0061d94e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d951: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d954: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d95a: jg 0x61d967 */ if ((!fZ&&fS==fO)) goto L_0061d967;
L_0061d95c:; BB(0x0061d95c);
    /* 0061d95c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d95f: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d962: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061d965: jmp 0x61d977 */ goto L_0061d977;
L_0061d967:; BB(0x0061d967);
    /* 0061d967: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d96a: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d96d: mov eax, 0xff */ r_eax = 0xffu;
    /* 0061d972: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d974: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0061d977:; BB(0x0061d977);
    /* 0061d977: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d97a: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d97d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d980: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d983: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d989: imul ecx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d98d: sar ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d990: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d992: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d995: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d998: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d99b: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0061d99d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d9a0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d9a3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061d9a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d9a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d9ac: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061d9af: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d9b2: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d9b5: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061d9bb: jg 0x61d9c8 */ if ((!fZ&&fS==fO)) goto L_0061d9c8;
L_0061d9bd:; BB(0x0061d9bd);
    /* 0061d9bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d9c0: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061d9c3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061d9c6: jmp 0x61d9d8 */ goto L_0061d9d8;
L_0061d9c8:; BB(0x0061d9c8);
    /* 0061d9c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d9cb: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d9ce: mov eax, 0xff */ r_eax = 0xffu;
    /* 0061d9d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061d9d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0061d9d8:; BB(0x0061d9d8);
    /* 0061d9d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d9db: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061d9de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061d9e1: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061d9e4: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061d9ea: imul ecx, dword ptr [ebp - 0x20] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061d9ee: sar ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061d9f1: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061d9f3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061d9f6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061d9f9: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061d9fc: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0061d9fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061da01: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061da04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061da07: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da0a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061da0d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061da10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da13: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061da16: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061da1c: jg 0x61da29 */ if ((!fZ&&fS==fO)) goto L_0061da29;
L_0061da1e:; BB(0x0061da1e);
    /* 0061da1e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da21: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061da24: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0061da27: jmp 0x61da39 */ goto L_0061da39;
L_0061da29:; BB(0x0061da29);
    /* 0061da29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da2c: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061da2f: mov eax, 0xff */ r_eax = 0xffu;
    /* 0061da34: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061da36: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0061da39:; BB(0x0061da39);
    /* 0061da39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da3c: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061da3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061da42: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061da45: sub ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061da4b: imul ecx, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061da4f: sar ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061da52: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061da54: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061da57: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da5a: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061da5d: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
L_0061da5f:; BB(0x0061da5f);
    /* 0061da5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0061da61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061da62: ret  */ FN_RET(0x0061d800); r_esp += 4; return;
}

void f_0061da70(void) /* sub_61DA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061da70);
    /* 0061da70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061da71: mov ebp, esp */ r_ebp = r_esp;
    /* 0061da73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061da76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061da77: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0061da7a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061da7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061da80: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061da83: cmp dword ptr [ebp + 0x10], 0xff */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061da8a: je 0x61db52 */ if (fZ) goto L_0061db52;
L_0061da90:; BB(0x0061da90);
    /* 0061da90: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061da93: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061da96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061da99: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061da9c: imul edx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061daa0: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061daa3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061daa6: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 0061daa9: mov esi, 0xff */ r_esi = 0xffu;
    /* 0061daae: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061dab0: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061dab3: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061dab6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061dab8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061dabb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dabe: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061dac1: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0061dac3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061dac6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dac9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061dacc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dacf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061dad2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0061dad5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dad8: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061dadb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061dade: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061dae1: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061dae5: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061dae8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061daeb: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 0061daee: mov esi, 0xff */ r_esi = 0xffu;
    /* 0061daf3: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061daf5: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061daf8: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061dafb: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dafd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061db00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db03: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061db06: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061db08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061db0b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061db0e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061db11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db14: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061db17: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061db1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db1d: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061db20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061db23: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061db26: imul ecx, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061db2a: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061db2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db30: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 0061db33: mov esi, 0xff */ r_esi = 0xffu;
    /* 0061db38: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061db3a: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061db3d: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061db40: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061db42: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061db45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db48: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061db4b: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061db4d: jmp 0x61dbfa */ goto L_0061dbfa;
L_0061db52:; BB(0x0061db52);
    /* 0061db52: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db55: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061db58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061db5b: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061db5e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db61: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 0061db64: mov esi, 0xff */ r_esi = 0xffu;
    /* 0061db69: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061db6b: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061db6e: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061db71: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061db73: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0061db76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db79: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061db7c: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0061db7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061db81: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061db84: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061db87: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db8a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061db8d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061db90: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db93: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061db96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061db99: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061db9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061db9f: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 0061dba2: mov esi, 0xff */ r_esi = 0xffu;
    /* 0061dba7: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061dba9: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061dbac: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061dbaf: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061dbb1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061dbb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dbb7: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061dbba: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 0061dbbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061dbbf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061dbc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061dbc5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dbc8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061dbcb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0061dbce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dbd1: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061dbd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061dbd7: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061dbda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dbdd: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 0061dbe0: mov esi, 0xff */ r_esi = 0xffu;
    /* 0061dbe5: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061dbe7: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061dbea: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061dbed: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061dbef: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061dbf2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061dbf5: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0061dbf8: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
L_0061dbfa:; BB(0x0061dbfa);
    /* 0061dbfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061dbfb: mov esp, ebp */ r_esp = r_ebp;
    /* 0061dbfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061dbfe: ret  */ FN_RET(0x0061da70); r_esp += 4; return;
}

void f_0061dff0(void) /* sub_61DFF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061dff0);
    /* 0061dff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061dff1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061dff3: sub esp, 0x328 */ {  u32 a = r_esp; u32 b = 0x328u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061dff9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061dffe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e000: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061e003: mov dword ptr [ebp - 0x324], ecx */ W32((u32)(r_ebp+0xfffffcdcu), r_ecx);
    /* 0061e009: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e00b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e00d: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e013: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e016: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e017: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x61e01cu); f_00686fa2();
    /* 0061e01c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e01f: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e023: je 0x61e092 */ if (fZ) goto L_0061e092;
L_0061e025:; BB(0x0061e025);
    /* 0061e025: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e02b: mov dword ptr [ecx + 0x14c], 0 */ W32((u32)(r_ecx+0x14cu), 0x0u);
    /* 0061e035: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e03b: mov dword ptr [edx + 0x158], 0 */ W32((u32)(r_edx+0x158u), 0x0u);
    /* 0061e045: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e04b: mov dword ptr [eax + 0x13c], 0 */ W32((u32)(r_eax+0x13cu), 0x0u);
    /* 0061e055: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e05b: mov dword ptr [ecx + 0x140], 0 */ W32((u32)(r_ecx+0x140u), 0x0u);
    /* 0061e065: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e06b: mov dword ptr [edx + 0x144], 0 */ W32((u32)(r_edx+0x144u), 0x0u);
    /* 0061e075: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e07b: mov dword ptr [eax + 0x148], 0 */ W32((u32)(r_eax+0x148u), 0x0u);
    /* 0061e085: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e08b: mov byte ptr [ecx + 0x154], 0 */ W8((u32)(r_ecx+0x154u), 0x0u);
L_0061e092:; BB(0x0061e092);
    /* 0061e092: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e098: mov dword ptr [edx + 0x15c], 0 */ W32((u32)(r_edx+0x15cu), 0x0u);
    /* 0061e0a2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e0a6: je 0x61e0b9 */ if (fZ) goto L_0061e0b9;
L_0061e0a8:; BB(0x0061e0a8);
    /* 0061e0a8: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e0ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061e0b1: mov dword ptr [eax + 0x150], ecx */ W32((u32)(r_eax+0x150u), r_ecx);
    /* 0061e0b7: jmp 0x61e0e8 */ goto L_0061e0e8;
L_0061e0b9:; BB(0x0061e0b9);
    /* 0061e0b9: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e0c0: je 0x61e0d8 */ if (fZ) goto L_0061e0d8;
L_0061e0c2:; BB(0x0061e0c2);
    /* 0061e0c2: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e0c8: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0061e0cd: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0061e0d0: mov dword ptr [edx + 0x150], ecx */ W32((u32)(r_edx+0x150u), r_ecx);
    /* 0061e0d6: jmp 0x61e0e8 */ goto L_0061e0e8;
L_0061e0d8:; BB(0x0061e0d8);
    /* 0061e0d8: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e0de: mov dword ptr [edx + 0x150], 0 */ W32((u32)(r_edx+0x150u), 0x0u);
L_0061e0e8:; BB(0x0061e0e8);
    /* 0061e0e8: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e0ee: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e0f2: jne 0x61e114 */ if (!fZ) goto L_0061e114;
L_0061e0f4:; BB(0x0061e0f4);
    /* 0061e0f4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e0f9: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e0ff: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e102: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e103: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x61e108u); f_00686ec0();
    /* 0061e108: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e10b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e10d: jne 0x61e114 */ if (!fZ) goto L_0061e114;
L_0061e10f:; BB(0x0061e10f);
    /* 0061e10f: jmp 0x61e3e5 */ goto L_0061e3e5;
L_0061e114:; BB(0x0061e114);
    /* 0061e114: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e11b: je 0x61e136 */ if (fZ) goto L_0061e136;
L_0061e11d:; BB(0x0061e11d);
    /* 0061e11d: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0061e123: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e127: je 0x61e136 */ if (fZ) goto L_0061e136;
L_0061e129:; BB(0x0061e129);
    /* 0061e129: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0061e12e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0061e131: call 0x60acc0 */ r_esp -= 4; W32(r_esp, 0x61e136u); f_0060acc0();
L_0061e136:; BB(0x0061e136);
    /* 0061e136: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061e139: mov dword ptr [ebp - 0x328], ecx */ W32((u32)(r_ebp+0xfffffcd8u), r_ecx);
    /* 0061e13f: cmp dword ptr [ebp - 0x328], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e146: je 0x61e223 */ if (fZ) goto L_0061e223;
L_0061e14c:; BB(0x0061e14c);
    /* 0061e14c: cmp dword ptr [ebp - 0x328], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e153: je 0x61e15a */ if (fZ) goto L_0061e15a;
L_0061e155:; BB(0x0061e155);
    /* 0061e155: jmp 0x61e2e7 */ goto L_0061e2e7;
L_0061e15a:; BB(0x0061e15a);
    /* 0061e15a: movzx edx, byte ptr [0x795fb3] */ r_edx = (u32)R8((u32)(0x795fb3u));
    /* 0061e161: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e163: jne 0x61e170 */ if (!fZ) goto L_0061e170;
L_0061e165:; BB(0x0061e165);
    /* 0061e165: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e16b: call 0x61ebd0 */ r_esp -= 4; W32(r_esp, 0x61e170u); f_0061ebd0();
L_0061e170:; BB(0x0061e170);
    /* 0061e170: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e176: cmp dword ptr [eax + 0x158], 0 */ {  u32 a = R32((u32)(r_eax+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e17d: jne 0x61e206 */ if (!fZ) goto L_0061e206;
L_0061e183:; BB(0x0061e183);
    /* 0061e183: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e189: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e18d: je 0x61e19c */ if (fZ) goto L_0061e19c;
L_0061e18f:; BB(0x0061e18f);
    /* 0061e18f: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e195: call 0x61e4f0 */ r_esp -= 4; W32(r_esp, 0x61e19au); f_0061e4f0();
    /* 0061e19a: jmp 0x61e206 */ goto L_0061e206;
L_0061e19c:; BB(0x0061e19c);
    /* 0061e19c: movzx edx, byte ptr [0x795fb3] */ r_edx = (u32)R8((u32)(0x795fb3u));
    /* 0061e1a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1a5: je 0x61e206 */ if (fZ) goto L_0061e206;
L_0061e1a7:; BB(0x0061e1a7);
    /* 0061e1a7: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e1ad: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e1b0: sar ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1b4: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e1ba: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e1bd: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1c1: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e1c7: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e1ca: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e1cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1ce: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e1d4: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e1d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1d8: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e1de: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061e1e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1e2: push 0x6d8c18 */ { u32 v = 0x6d8c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1e7: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0061e1ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1ee: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e1f4u); call_ind(t); }
    /* 0061e1f4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e1f7: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0061e1fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1fe: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e203u); f_0062fde0();
    /* 0061e203: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e206:; BB(0x0061e206);
    /* 0061e206: movzx edx, byte ptr [0x795fb2] */ r_edx = (u32)R8((u32)(0x795fb2u));
    /* 0061e20d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e20f: je 0x61e21e */ if (fZ) goto L_0061e21e;
L_0061e211:; BB(0x0061e211);
    /* 0061e211: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e216: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e21bu); f_0062fde0();
    /* 0061e21b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e21e:; BB(0x0061e21e);
    /* 0061e21e: jmp 0x61e2e7 */ goto L_0061e2e7;
L_0061e223:; BB(0x0061e223);
    /* 0061e223: movzx eax, byte ptr [0x795fb3] */ r_eax = (u32)R8((u32)(0x795fb3u));
    /* 0061e22a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e22c: jne 0x61e239 */ if (!fZ) goto L_0061e239;
L_0061e22e:; BB(0x0061e22e);
    /* 0061e22e: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e234: call 0x61efc0 */ r_esp -= 4; W32(r_esp, 0x61e239u); f_0061efc0();
L_0061e239:; BB(0x0061e239);
    /* 0061e239: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e23f: cmp dword ptr [ecx + 0x13c], 0 */ {  u32 a = R32((u32)(r_ecx+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e246: jne 0x61e2cf */ if (!fZ) goto L_0061e2cf;
L_0061e24c:; BB(0x0061e24c);
    /* 0061e24c: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e252: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e256: je 0x61e265 */ if (fZ) goto L_0061e265;
L_0061e258:; BB(0x0061e258);
    /* 0061e258: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e25e: call 0x61edc0 */ r_esp -= 4; W32(r_esp, 0x61e263u); f_0061edc0();
    /* 0061e263: jmp 0x61e2cf */ goto L_0061e2cf;
L_0061e265:; BB(0x0061e265);
    /* 0061e265: movzx eax, byte ptr [0x795fb3] */ r_eax = (u32)R8((u32)(0x795fb3u));
    /* 0061e26c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e26e: je 0x61e2cf */ if (fZ) goto L_0061e2cf;
L_0061e270:; BB(0x0061e270);
    /* 0061e270: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e276: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e279: sar edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e27c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e27d: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e283: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e286: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e289: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e28a: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e290: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e293: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e297: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e29d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e2a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2a1: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e2a7: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2ab: push 0x6d8c18 */ { u32 v = 0x6d8c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2b0: lea ecx, [ebp - 0x218] */ r_ecx = (u32)(r_ebp+0xfffffde8u);
    /* 0061e2b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2b7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e2bdu); call_ind(t); }
    /* 0061e2bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e2c0: lea edx, [ebp - 0x218] */ r_edx = (u32)(r_ebp+0xfffffde8u);
    /* 0061e2c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2c7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e2ccu); f_0062fde0();
    /* 0061e2cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e2cf:; BB(0x0061e2cf);
    /* 0061e2cf: movzx eax, byte ptr [0x795fb2] */ r_eax = (u32)R8((u32)(0x795fb2u));
    /* 0061e2d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2d8: je 0x61e2e7 */ if (fZ) goto L_0061e2e7;
L_0061e2da:; BB(0x0061e2da);
    /* 0061e2da: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2df: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e2e4u); f_0062fde0();
    /* 0061e2e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e2e7:; BB(0x0061e2e7);
    /* 0061e2e7: movzx ecx, byte ptr [0x795fb2] */ r_ecx = (u32)R8((u32)(0x795fb2u));
    /* 0061e2ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2f0: jne 0x61e3e5 */ if (!fZ) goto L_0061e3e5;
L_0061e2f6:; BB(0x0061e2f6);
    /* 0061e2f6: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e2fa: je 0x61e30b */ if (fZ) goto L_0061e30b;
L_0061e2fc:; BB(0x0061e2fc);
    /* 0061e2fc: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e302: cmp dword ptr [edx + 0x158], 0 */ {  u32 a = R32((u32)(r_edx+0x158u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e309: je 0x61e328 */ if (fZ) goto L_0061e328;
L_0061e30b:; BB(0x0061e30b);
    /* 0061e30b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e30f: jne 0x61e3e5 */ if (!fZ) goto L_0061e3e5;
L_0061e315:; BB(0x0061e315);
    /* 0061e315: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e31b: cmp dword ptr [eax + 0x13c], 0 */ {  u32 a = R32((u32)(r_eax+0x13cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e322: jne 0x61e3e5 */ if (!fZ) goto L_0061e3e5;
L_0061e328:; BB(0x0061e328);
    /* 0061e328: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e32e: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e332: je 0x61e386 */ if (fZ) goto L_0061e386;
L_0061e334:; BB(0x0061e334);
    /* 0061e334: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e33a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e33d: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e341: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e347: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e34a: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e34d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e34e: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e354: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e357: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e35a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e35b: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e361: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e365: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e36b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0061e36e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e36f: push 0x6d8bec */ { u32 v = 0x6d8becu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e374: lea eax, [ebp - 0x320] */ r_eax = (u32)(r_ebp+0xfffffce0u);
    /* 0061e37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e37b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e381u); call_ind(t); }
    /* 0061e381: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e384: jmp 0x61e3d6 */ goto L_0061e3d6;
L_0061e386:; BB(0x0061e386);
    /* 0061e386: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e38c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e38f: sar edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061e392: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e393: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e399: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0061e39c: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061e39f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3a0: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e3a6: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0061e3a9: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061e3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3ad: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e3b3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061e3b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3b7: mov eax, dword ptr [ebp - 0x324] */ r_eax = R32((u32)(r_ebp+0xfffffcdcu));
    /* 0061e3bd: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e3c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3c1: push 0x6d8bc4 */ { u32 v = 0x6d8bc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3c6: lea ecx, [ebp - 0x320] */ r_ecx = (u32)(r_ebp+0xfffffce0u);
    /* 0061e3cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3cd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x61e3d3u); call_ind(t); }
    /* 0061e3d3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e3d6:; BB(0x0061e3d6);
    /* 0061e3d6: lea edx, [ebp - 0x320] */ r_edx = (u32)(r_ebp+0xfffffce0u);
    /* 0061e3dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3dd: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x61e3e2u); f_0062fde0();
    /* 0061e3e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061e3e5:; BB(0x0061e3e5);
    /* 0061e3e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061e3e8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e3ea: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x61e3efu); f_00686d72();
    /* 0061e3ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e3f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e3f2: ret 8 */ FN_RET(0x0061dff0); r_esp += 12; return;
}

