#include "protos.h"

void f_004080d0(void) /* sub_4080D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004080d0);
    /* 004080d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004080d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004080d3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004080d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004080d7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004080da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004080e1: jmp 0x4080ec */ goto L_004080ec;
L_004080e3:; BB(0x004080e3);
    /* 004080e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004080e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004080e9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004080ec:; BB(0x004080ec);
    /* 004080ec: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004080f0: jge 0x4081b5 */ if ((fS==fO)) goto L_004081b5;
L_004080f6:; BB(0x004080f6);
    /* 004080f6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004080fd: jmp 0x408108 */ goto L_00408108;
L_004080ff:; BB(0x004080ff);
    /* 004080ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408102: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408105: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00408108:; BB(0x00408108);
    /* 00408108: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040810c: jge 0x4081b0 */ if ((fS==fO)) goto L_004081b0;
L_00408112:; BB(0x00408112);
    /* 00408112: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408115: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408118: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040811b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040811d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408121: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408124: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408127: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040812a: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0040812e: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x408133u); f_005cb7d0();
    /* 00408133: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408138: je 0x408182 */ if (fZ) goto L_00408182;
L_0040813a:; BB(0x0040813a);
    /* 0040813a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040813d: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408140: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00408143: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00408147: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040814a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040814d: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00408150: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408153: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00408157: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00408159: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0040815c: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0040815f: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00408163: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00408166: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408169: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040816c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040816f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408172: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408175: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00408178: mov dword ptr [esi + eax*8 + 0x34], ecx */ W32((u32)(r_esi+r_eax*8+0x34u), r_ecx);
    /* 0040817c: mov dword ptr [esi + eax*8 + 0x38], edx */ W32((u32)(r_esi+r_eax*8+0x38u), r_edx);
    /* 00408180: jmp 0x4081ab */ goto L_004081ab;
L_00408182:; BB(0x00408182);
    /* 00408182: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408184: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408186: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x40818bu); f_0064c8a0();
    /* 0040818b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040818e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00408191: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00408194: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408197: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040819a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040819d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004081a0: mov dword ptr [edx + ecx*8 + 0x34], eax */ W32((u32)(r_edx+r_ecx*8+0x34u), r_eax);
    /* 004081a4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004081a7: mov dword ptr [edx + ecx*8 + 0x38], eax */ W32((u32)(r_edx+r_ecx*8+0x38u), r_eax);
L_004081ab:; BB(0x004081ab);
    /* 004081ab: jmp 0x4080ff */ goto L_004080ff;
L_004081b0:; BB(0x004081b0);
    /* 004081b0: jmp 0x4080e3 */ goto L_004080e3;
L_004081b5:; BB(0x004081b5);
    /* 004081b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004081b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004081b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004081b9: ret  */ FN_RET(0x004080d0); r_esp += 4; return;
}

void f_004082e0(void) /* sub_4082E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004082e0);
    /* 004082e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004082e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004082e3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004082e6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004082e9: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 004082f0: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 004082f7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004082fe: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00408305: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040830c: jmp 0x408317 */ goto L_00408317;
L_0040830e:; BB(0x0040830e);
    /* 0040830e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408311: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408314: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408317:; BB(0x00408317);
    /* 00408317: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040831b: jge 0x4083ad */ if ((fS==fO)) goto L_004083ad;
L_00408321:; BB(0x00408321);
    /* 00408321: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408324: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00408328: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408329: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40832eu); f_005dcb00();
    /* 0040832e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408331: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00408334: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408337: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40833cu); f_0063aac0();
    /* 0040833c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040833e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00408341: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00408343: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408347: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0040834a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0040834d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040834f: jne 0x4083a8 */ if (!fZ) goto L_004083a8;
L_00408351:; BB(0x00408351);
    /* 00408351: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408354: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00408358: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408359: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40835eu); f_005dcb00();
    /* 0040835e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408361: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00408364: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408367: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 0040836d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00408370: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00408374: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408376: jne 0x4083a8 */ if (!fZ) goto L_004083a8;
L_00408378:; BB(0x00408378);
    /* 00408378: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040837b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0040837f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408380: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408385u); f_005dcb00();
    /* 00408385: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408388: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040838b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040838e: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00408394: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00408397: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0040839b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040839d: jne 0x4083a8 */ if (!fZ) goto L_004083a8;
L_0040839f:; BB(0x0040839f);
    /* 0040839f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004083a2: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 004083a6: jmp 0x4083b0 */ goto L_004083b0;
L_004083a8:; BB(0x004083a8);
    /* 004083a8: jmp 0x40830e */ goto L_0040830e;
L_004083ad:; BB(0x004083ad);
    /* 004083ad: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004083b0:; BB(0x004083b0);
    /* 004083b0: mov esp, ebp */ r_esp = r_ebp;
    /* 004083b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004083b3: ret  */ FN_RET(0x004082e0); r_esp += 4; return;
}

void f_00408460(void) /* sub_408460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408460);
    /* 00408460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408461: mov ebp, esp */ r_ebp = r_esp;
    /* 00408463: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408466: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00408469: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408470: jmp 0x40847b */ goto L_0040847b;
L_00408472:; BB(0x00408472);
    /* 00408472: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408475: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408478: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040847b:; BB(0x0040847b);
    /* 0040847b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040847f: jge 0x4084db */ if ((fS==fO)) goto L_004084db;
L_00408481:; BB(0x00408481);
    /* 00408481: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408484: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408485: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40848au); f_005dcb00();
    /* 0040848a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040848d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408490: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408494: je 0x4084d9 */ if (fZ) goto L_004084d9;
L_00408496:; BB(0x00408496);
    /* 00408496: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408499: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40849eu); f_0063aac0();
    /* 0040849e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004084a0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004084a3: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004084a7: je 0x4084c5 */ if (fZ) goto L_004084c5;
L_004084a9:; BB(0x004084a9);
    /* 004084a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004084ac: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4084b1u); f_0063aac0();
    /* 004084b1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004084b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004084b6: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004084ba: je 0x4084c5 */ if (fZ) goto L_004084c5;
L_004084bc:; BB(0x004084bc);
    /* 004084bc: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004084c3: jmp 0x4084cc */ goto L_004084cc;
L_004084c5:; BB(0x004084c5);
    /* 004084c5: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_004084cc:; BB(0x004084cc);
    /* 004084cc: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 004084d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004084d2: je 0x4084d9 */ if (fZ) goto L_004084d9;
L_004084d4:; BB(0x004084d4);
    /* 004084d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004084d7: jmp 0x4084dd */ goto L_004084dd;
L_004084d9:; BB(0x004084d9);
    /* 004084d9: jmp 0x408472 */ goto L_00408472;
L_004084db:; BB(0x004084db);
    /* 004084db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004084dd:; BB(0x004084dd);
    /* 004084dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004084df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004084e0: ret  */ FN_RET(0x00408460); r_esp += 4; return;
}

void f_004084f0(void) /* sub_4084F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004084f0);
    /* 004084f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004084f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004084f3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004084f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004084f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408500: jmp 0x40850b */ goto L_0040850b;
L_00408502:; BB(0x00408502);
    /* 00408502: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408505: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408508: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0040850b:; BB(0x0040850b);
    /* 0040850b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040850f: jge 0x408572 */ if ((fS==fO)) goto L_00408572;
L_00408511:; BB(0x00408511);
    /* 00408511: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408514: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408515: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40851au); f_005dcb00();
    /* 0040851a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040851d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408520: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408524: je 0x408570 */ if (fZ) goto L_00408570;
L_00408526:; BB(0x00408526);
    /* 00408526: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408529: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40852eu); f_0063aac0();
    /* 0040852e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408530: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00408533: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408537: je 0x408555 */ if (fZ) goto L_00408555;
L_00408539:; BB(0x00408539);
    /* 00408539: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040853c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x408541u); f_0063aac0();
    /* 00408541: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00408543: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408546: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040854a: je 0x408555 */ if (fZ) goto L_00408555;
L_0040854c:; BB(0x0040854c);
    /* 0040854c: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00408553: jmp 0x40855c */ goto L_0040855c;
L_00408555:; BB(0x00408555);
    /* 00408555: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0040855c:; BB(0x0040855c);
    /* 0040855c: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 00408560: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408562: je 0x408570 */ if (fZ) goto L_00408570;
L_00408564:; BB(0x00408564);
    /* 00408564: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408567: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408568: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040856b: call 0x408580 */ r_esp -= 4; W32(r_esp, 0x408570u); f_00408580();
L_00408570:; BB(0x00408570);
    /* 00408570: jmp 0x408502 */ goto L_00408502;
L_00408572:; BB(0x00408572);
    /* 00408572: mov esp, ebp */ r_esp = r_ebp;
    /* 00408574: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408575: ret  */ FN_RET(0x004084f0); r_esp += 4; return;
}

void f_00408790(void) /* sub_408790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408790);
    /* 00408790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408791: mov ebp, esp */ r_ebp = r_esp;
    /* 00408793: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408796: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00408799: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004087a0: jmp 0x4087ab */ goto L_004087ab;
L_004087a2:; BB(0x004087a2);
    /* 004087a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004087a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004087a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004087ab:; BB(0x004087ab);
    /* 004087ab: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004087af: jge 0x4087e3 */ if ((fS==fO)) goto L_004087e3;
L_004087b1:; BB(0x004087b1);
    /* 004087b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004087b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004087b5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4087bau); f_005dcb00();
    /* 004087ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004087bd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004087c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004087c3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4087c8u); f_0063aac0();
    /* 004087c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004087ca: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004087cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004087cf: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087d3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004087d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004087d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087db: je 0x4087e1 */ if (fZ) goto L_004087e1;
L_004087dd:; BB(0x004087dd);
    /* 004087dd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004087df: jmp 0x4087e5 */ goto L_004087e5;
L_004087e1:; BB(0x004087e1);
    /* 004087e1: jmp 0x4087a2 */ goto L_004087a2;
L_004087e3:; BB(0x004087e3);
    /* 004087e3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004087e5:; BB(0x004087e5);
    /* 004087e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004087e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004087e8: ret  */ FN_RET(0x00408790); r_esp += 4; return;
}

void f_004087f0(void) /* sub_4087F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004087f0);
    /* 004087f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004087f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004087f3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004087f6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004087f9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004087fc: call 0x408790 */ r_esp -= 4; W32(r_esp, 0x408801u); f_00408790();
    /* 00408801: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408806: jne 0x40880c */ if (!fZ) goto L_0040880c;
L_00408808:; BB(0x00408808);
    /* 00408808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040880a: jmp 0x40886b */ goto L_0040886b;
L_0040880c:; BB(0x0040880c);
    /* 0040880c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040880e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408810: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x408815u); f_0062fc30();
    /* 00408815: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408818: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040881b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040881e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040881f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408824u); f_005dcb00();
    /* 00408824: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408827: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040882a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040882d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x408832u); f_0063aac0();
    /* 00408832: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00408834: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00408837: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040883b: je 0x408859 */ if (fZ) goto L_00408859;
L_0040883d:; BB(0x0040883d);
    /* 0040883d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408840: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x408845u); f_0063aac0();
    /* 00408845: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00408847: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040884a: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040884e: je 0x408859 */ if (fZ) goto L_00408859;
L_00408850:; BB(0x00408850);
    /* 00408850: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00408857: jmp 0x408860 */ goto L_00408860;
L_00408859:; BB(0x00408859);
    /* 00408859: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00408860:; BB(0x00408860);
    /* 00408860: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 00408864: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408866: jne 0x40880c */ if (!fZ) goto L_0040880c;
L_00408868:; BB(0x00408868);
    /* 00408868: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0040886b:; BB(0x0040886b);
    /* 0040886b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040886d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040886e: ret  */ FN_RET(0x004087f0); r_esp += 4; return;
}

void f_00408870(void) /* sub_408870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408870);
    /* 00408870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408871: mov ebp, esp */ r_ebp = r_esp;
    /* 00408873: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408876: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00408879: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040887c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040887f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408882: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408885: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408888: jmp 0x408893 */ goto L_00408893;
L_0040888a:; BB(0x0040888a);
    /* 0040888a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040888d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408890: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408893:; BB(0x00408893);
    /* 00408893: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408896: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408899: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040889c: jge 0x4088ba */ if ((fS==fO)) goto L_004088ba;
L_0040889e:; BB(0x0040889e);
    /* 0040889e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004088a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004088a4: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004088a8: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x4088adu); f_005cb920();
    /* 004088ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004088b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004088b2: je 0x4088b8 */ if (fZ) goto L_004088b8;
L_004088b4:; BB(0x004088b4);
    /* 004088b4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004088b6: jmp 0x4088bc */ goto L_004088bc;
L_004088b8:; BB(0x004088b8);
    /* 004088b8: jmp 0x40888a */ goto L_0040888a;
L_004088ba:; BB(0x004088ba);
    /* 004088ba: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004088bc:; BB(0x004088bc);
    /* 004088bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004088be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004088bf: ret 4 */ FN_RET(0x00408870); r_esp += 8; return;
}

void f_00408990(void) /* sub_408990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408990);
    /* 00408990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408991: mov ebp, esp */ r_ebp = r_esp;
    /* 00408993: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408996: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408999: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040899c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040899d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004089a0: call 0x4088d0 */ r_esp -= 4; W32(r_esp, 0x4089a5u); f_004088d0();
    /* 004089a5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004089a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004089ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004089ae: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004089b2: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x4089b7u); f_005cb920();
    /* 004089b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004089b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004089ba: ret 4 */ FN_RET(0x00408990); r_esp += 8; return;
}

void f_004089c0(void) /* sub_4089C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004089c0);
    /* 004089c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004089c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004089c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004089c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004089c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004089cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004089cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004089d0: call 0x408910 */ r_esp -= 4; W32(r_esp, 0x4089d5u); f_00408910();
    /* 004089d5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004089d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004089db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004089de: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 004089e2: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x4089e7u); f_005cb920();
    /* 004089e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004089e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004089ea: ret 4 */ FN_RET(0x004089c0); r_esp += 8; return;
}

void f_004089f0(void) /* sub_4089F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004089f0);
    /* 004089f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004089f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004089f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004089f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004089f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004089fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004089fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408a00: call 0x408950 */ r_esp -= 4; W32(r_esp, 0x408a05u); f_00408950();
    /* 00408a05: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00408a08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408a0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408a0e: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00408a12: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x408a17u); f_005cb920();
    /* 00408a17: mov esp, ebp */ r_esp = r_ebp;
    /* 00408a19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408a1a: ret 4 */ FN_RET(0x004089f0); r_esp += 8; return;
}

void f_00408a20(void) /* sub_408A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408a20);
    /* 00408a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00408a23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408a26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00408a29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408a2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408a30: call 0x408990 */ r_esp -= 4; W32(r_esp, 0x408a35u); f_00408990();
    /* 00408a35: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00408a38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408a3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408a3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408a3f: call 0x4089c0 */ r_esp -= 4; W32(r_esp, 0x408a44u); f_004089c0();
    /* 00408a44: mov byte ptr [ebp - 6], al */ W8((u32)(r_ebp+0xfffffffau), (u8)r_eax);
    /* 00408a47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408a4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408a4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408a4e: call 0x4089f0 */ r_esp -= 4; W32(r_esp, 0x408a53u); f_004089f0();
    /* 00408a53: mov byte ptr [ebp - 7], al */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_eax);
    /* 00408a56: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408a5d: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00408a61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408a63: je 0x408a6e */ if (fZ) goto L_00408a6e;
L_00408a65:; BB(0x00408a65);
    /* 00408a65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408a68: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408a6b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00408a6e:; BB(0x00408a6e);
    /* 00408a6e: movzx edx, byte ptr [ebp - 6] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 00408a72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408a74: je 0x408a7f */ if (fZ) goto L_00408a7f;
L_00408a76:; BB(0x00408a76);
    /* 00408a76: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408a79: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408a7c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408a7f:; BB(0x00408a7f);
    /* 00408a7f: movzx ecx, byte ptr [ebp - 7] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff9u));
    /* 00408a83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408a85: je 0x408a90 */ if (fZ) goto L_00408a90;
L_00408a87:; BB(0x00408a87);
    /* 00408a87: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408a8a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408a8d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408a90:; BB(0x00408a90);
    /* 00408a90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00408a92: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408a96: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00408a99: mov esp, ebp */ r_esp = r_ebp;
    /* 00408a9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408a9c: ret 4 */ FN_RET(0x00408a20); r_esp += 8; return;
}

void f_00408aa0(void) /* sub_408AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408aa0);
    /* 00408aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00408aa3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408aa6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00408aa9: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00408ab0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00408ab3: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x408ab8u); f_004091b0();
    /* 00408ab8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00408abb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00408abe: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x408ac3u); f_004091d0();
    /* 00408ac3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408ac6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408ac9: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408acc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408acf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408ad2: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00408ad5: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408ad8: jne 0x408aeb */ if (!fZ) goto L_00408aeb;
L_00408ada:; BB(0x00408ada);
    /* 00408ada: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408add: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408ae0: jle 0x408ae9 */ if ((fZ||fS!=fO)) goto L_00408ae9;
L_00408ae2:; BB(0x00408ae2);
    /* 00408ae2: mov eax, 1 */ r_eax = 0x1u;
    /* 00408ae7: jmp 0x408b37 */ goto L_00408b37;
L_00408ae9:; BB(0x00408ae9);
    /* 00408ae9: jmp 0x408b1e */ goto L_00408b1e;
L_00408aeb:; BB(0x00408aeb);
    /* 00408aeb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408aee: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408af1: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408af4: jne 0x408b07 */ if (!fZ) goto L_00408b07;
L_00408af6:; BB(0x00408af6);
    /* 00408af6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408af9: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408afc: jge 0x408b05 */ if ((fS==fO)) goto L_00408b05;
L_00408afe:; BB(0x00408afe);
    /* 00408afe: mov eax, 8 */ r_eax = 0x8u;
    /* 00408b03: jmp 0x408b37 */ goto L_00408b37;
L_00408b05:; BB(0x00408b05);
    /* 00408b05: jmp 0x408b1e */ goto L_00408b1e;
L_00408b07:; BB(0x00408b07);
    /* 00408b07: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00408b0a: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b0d: jne 0x408b1e */ if (!fZ) goto L_00408b1e;
L_00408b0f:; BB(0x00408b0f);
    /* 00408b0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408b12: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b15: jne 0x408b1e */ if (!fZ) goto L_00408b1e;
L_00408b17:; BB(0x00408b17);
    /* 00408b17: mov eax, 9 */ r_eax = 0x9u;
    /* 00408b1c: jmp 0x408b37 */ goto L_00408b37;
L_00408b1e:; BB(0x00408b1e);
    /* 00408b1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408b21: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b24: jne 0x408b35 */ if (!fZ) goto L_00408b35;
L_00408b26:; BB(0x00408b26);
    /* 00408b26: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00408b29: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b2c: je 0x408b35 */ if (fZ) goto L_00408b35;
L_00408b2e:; BB(0x00408b2e);
    /* 00408b2e: mov eax, 2 */ r_eax = 0x2u;
    /* 00408b33: jmp 0x408b37 */ goto L_00408b37;
L_00408b35:; BB(0x00408b35);
    /* 00408b35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00408b37:; BB(0x00408b37);
    /* 00408b37: mov esp, ebp */ r_esp = r_ebp;
    /* 00408b39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408b3a: ret 8 */ FN_RET(0x00408aa0); r_esp += 12; return;
}

void f_00408b40(void) /* sub_408B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408b40);
    /* 00408b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00408b43: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408b46: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00408b49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408b4c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408b4f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00408b52: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00408b59: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408b5c: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x408b61u); f_004091b0();
    /* 00408b61: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408b64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408b67: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x408b6cu); f_004091d0();
    /* 00408b6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00408b6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408b72: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408b75: jmp 0x408b80 */ goto L_00408b80;
L_00408b77:; BB(0x00408b77);
    /* 00408b77: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408b7a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408b7d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408b80:; BB(0x00408b80);
    /* 00408b80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408b83: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b86: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408b89: jge 0x408bf6 */ if ((fS==fO)) goto L_00408bf6;
L_00408b8b:; BB(0x00408b8b);
    /* 00408b8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408b8e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408b91: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00408b95: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x408b9au); f_005cb920();
    /* 00408b9a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408b9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b9f: je 0x408bf4 */ if (fZ) goto L_00408bf4;
L_00408ba1:; BB(0x00408ba1);
    /* 00408ba1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408ba4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ba5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408ba8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ba9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408bac: call 0x408aa0 */ r_esp -= 4; W32(r_esp, 0x408bb1u); f_00408aa0();
    /* 00408bb1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408bb4: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bb8: je 0x408bc0 */ if (fZ) goto L_00408bc0;
L_00408bba:; BB(0x00408bba);
    /* 00408bba: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bbe: jne 0x408bf4 */ if (!fZ) goto L_00408bf4;
L_00408bc0:; BB(0x00408bc0);
    /* 00408bc0: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bc4: jne 0x408bdb */ if (!fZ) goto L_00408bdb;
L_00408bc6:; BB(0x00408bc6);
    /* 00408bc6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408bc9: call 0x409100 */ r_esp -= 4; W32(r_esp, 0x408bceu); f_00409100();
    /* 00408bce: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408bd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bd3: je 0x408bd9 */ if (fZ) goto L_00408bd9;
L_00408bd5:; BB(0x00408bd5);
    /* 00408bd5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00408bd7: jmp 0x408bf8 */ goto L_00408bf8;
L_00408bd9:; BB(0x00408bd9);
    /* 00408bd9: jmp 0x408bf4 */ goto L_00408bf4;
L_00408bdb:; BB(0x00408bdb);
    /* 00408bdb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bdf: jne 0x408bf4 */ if (!fZ) goto L_00408bf4;
L_00408be1:; BB(0x00408be1);
    /* 00408be1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408be4: call 0x409120 */ r_esp -= 4; W32(r_esp, 0x408be9u); f_00409120();
    /* 00408be9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00408bec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bee: je 0x408bf4 */ if (fZ) goto L_00408bf4;
L_00408bf0:; BB(0x00408bf0);
    /* 00408bf0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00408bf2: jmp 0x408bf8 */ goto L_00408bf8;
L_00408bf4:; BB(0x00408bf4);
    /* 00408bf4: jmp 0x408b77 */ goto L_00408b77;
L_00408bf6:; BB(0x00408bf6);
    /* 00408bf6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00408bf8:; BB(0x00408bf8);
    /* 00408bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00408bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408bfb: ret 4 */ FN_RET(0x00408b40); r_esp += 8; return;
}

void f_00408c00(void) /* sub_408C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408c00);
    /* 00408c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00408c03: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408c06: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00408c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408c0c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00408c0f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00408c12: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00408c19: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00408c1c: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x408c21u); f_004091b0();
    /* 00408c21: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408c24: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00408c27: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x408c2cu); f_004091d0();
    /* 00408c2c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00408c2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c33: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x408c38u); f_0064c8a0();
    /* 00408c38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408c3b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00408c3e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00408c41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408c44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408c45: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00408c48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408c49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408c4d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408c52u); f_005dcb00();
    /* 00408c52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408c55: mov ecx, eax */ r_ecx = r_eax;
    /* 00408c57: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x408c5cu); f_005d6050();
    /* 00408c5c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408c5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408c60: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408c65u); f_005dcb00();
    /* 00408c65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408c68: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00408c6b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00408c6e: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x408c73u); f_005d52e0();
    /* 00408c73: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00408c76: mov byte ptr [ebp - 0x31], dl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_edx);
    /* 00408c79: movsx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffcfu));
    /* 00408c7d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00408c80: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00408c87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00408c8a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408c8d: jmp 0x408c98 */ goto L_00408c98;
L_00408c8f:; BB(0x00408c8f);
    /* 00408c8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408c92: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408c95: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00408c98:; BB(0x00408c98);
    /* 00408c98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00408c9b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408c9e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408ca1: jge 0x408dd1 */ if ((fS==fO)) goto L_00408dd1;
L_00408ca7:; BB(0x00408ca7);
    /* 00408ca7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408caa: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00408cad: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00408cb1: call 0x5cb920 */ r_esp -= 4; W32(r_esp, 0x408cb6u); f_005cb920();
    /* 00408cb6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408cb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408cbb: je 0x408dcc */ if (fZ) goto L_00408dcc;
L_00408cc1:; BB(0x00408cc1);
    /* 00408cc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408cc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408cc5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408cc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408cc9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00408ccc: call 0x408aa0 */ r_esp -= 4; W32(r_esp, 0x408cd1u); f_00408aa0();
    /* 00408cd1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00408cd4: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408cd8: je 0x408ce6 */ if (fZ) goto L_00408ce6;
L_00408cda:; BB(0x00408cda);
    /* 00408cda: cmp dword ptr [ebp - 0x18], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408cde: je 0x408ce6 */ if (fZ) goto L_00408ce6;
L_00408ce0:; BB(0x00408ce0);
    /* 00408ce0: cmp dword ptr [ebp - 0x18], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408ce4: jne 0x408d36 */ if (!fZ) goto L_00408d36;
L_00408ce6:; BB(0x00408ce6);
    /* 00408ce6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408ce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408cea: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408cefu); f_005dcb00();
    /* 00408cef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408cf2: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408cf9: jge 0x408d36 */ if ((fS==fO)) goto L_00408d36;
L_00408cfb:; BB(0x00408cfb);
    /* 00408cfb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408cfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408cff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408d04u); f_005dcb00();
    /* 00408d04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408d07: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408d0e: jge 0x408d20 */ if ((fS==fO)) goto L_00408d20;
L_00408d10:; BB(0x00408d10);
    /* 00408d10: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 00408d16: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408d19: mov byte ptr [edx + 0xb8], 1 */ W8((u32)(r_edx+0xb8u), 0x1u);
L_00408d20:; BB(0x00408d20);
    /* 00408d20: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408d23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408d24: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408d29u); f_005dcb00();
    /* 00408d29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408d2c: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_00408d36:; BB(0x00408d36);
    /* 00408d36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00408d39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408d3a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408d3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408d3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408d41: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00408d44: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00408d48: call 0x4098c0 */ r_esp -= 4; W32(r_esp, 0x408d4du); f_004098c0();
    /* 00408d4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408d50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408d51: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408d56u); f_005dcb00();
    /* 00408d56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408d59: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00408d5c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00408d5f: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x408d64u); f_005d52e0();
    /* 00408d64: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 00408d67: mov byte ptr [ebp - 0x39], al */ W8((u32)(r_ebp+0xffffffc7u), (u8)r_eax);
    /* 00408d6a: movsx ecx, byte ptr [ebp - 0x39] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffc7u));
    /* 00408d6e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408d71: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408d74: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408d77: je 0x408dcc */ if (fZ) goto L_00408dcc;
L_00408d79:; BB(0x00408d79);
    /* 00408d79: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408d7d: jne 0x408dcc */ if (!fZ) goto L_00408dcc;
L_00408d7f:; BB(0x00408d7f);
    /* 00408d7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408d82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408d83: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408d88u); f_005dcb00();
    /* 00408d88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408d8b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00408d8e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408d90: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00408d93: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00408d95: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00408d98: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00408d9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x408d9du); call_ind(t); }
    /* 00408d9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408d9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408da1: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x408da6u); f_0064c8a0();
    /* 00408da6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408da9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00408dac: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00408daf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00408db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408db3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00408db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408db7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408dbb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x408dc0u); f_005dcb00();
    /* 00408dc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408dc3: mov ecx, eax */ r_ecx = r_eax;
    /* 00408dc5: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x408dcau); f_005d6050();
    /* 00408dca: jmp 0x408dd1 */ goto L_00408dd1;
L_00408dcc:; BB(0x00408dcc);
    /* 00408dcc: jmp 0x408c8f */ goto L_00408c8f;
L_00408dd1:; BB(0x00408dd1);
    /* 00408dd1: mov esp, ebp */ r_esp = r_ebp;
    /* 00408dd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408dd4: ret 4 */ FN_RET(0x00408c00); r_esp += 8; return;
}

void f_00408e40(void) /* sub_408E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408e40);
    /* 00408e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00408e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408e47: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408e4b: jne 0x408e63 */ if (!fZ) goto L_00408e63;
L_00408e4d:; BB(0x00408e4d);
    /* 00408e4d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408e4f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00408e55: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x408e5au); f_006375b0();
    /* 00408e5a: mov ecx, eax */ r_ecx = r_eax;
    /* 00408e5c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x408e61u); f_0063aae0();
    /* 00408e61: jmp 0x408e78 */ goto L_00408e78;
L_00408e63:; BB(0x00408e63);
    /* 00408e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408e65: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00408e6a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00408e6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408e70: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00408e73: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x408e78u); f_0063aae0();
L_00408e78:; BB(0x00408e78);
    /* 00408e78: mov esp, ebp */ r_esp = r_ebp;
    /* 00408e7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408e7b: ret 4 */ FN_RET(0x00408e40); r_esp += 8; return;
}

void f_00408e80(void) /* sub_408E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408e80);
    /* 00408e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00408e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408e87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408e89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e8c: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x408e91u); f_00408e40();
    /* 00408e91: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00408e93: mov esp, ebp */ r_esp = r_ebp;
    /* 00408e95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408e96: ret  */ FN_RET(0x00408e80); r_esp += 4; return;
}

void f_00408ea0(void) /* sub_408EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408ea0);
    /* 00408ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00408ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408ea7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408ea9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408eac: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x408eb1u); f_00408e40();
    /* 00408eb1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00408eb4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00408eb6: mov esp, ebp */ r_esp = r_ebp;
    /* 00408eb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408eb9: ret 4 */ FN_RET(0x00408ea0); r_esp += 8; return;
}

void f_00408ec0(void) /* sub_408EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408ec0);
    /* 00408ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00408ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408ec7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408ec9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408ecc: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x408ed1u); f_00408e40();
    /* 00408ed1: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00408ed4: mov esp, ebp */ r_esp = r_ebp;
    /* 00408ed6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408ed7: ret  */ FN_RET(0x00408ec0); r_esp += 4; return;
}

void f_00408ee0(void) /* sub_408EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408ee0);
    /* 00408ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00408ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408ee7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408eec: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x408ef1u); f_00408e40();
    /* 00408ef1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00408ef4: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00408ef7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00408efd: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x408f02u); f_006375b0();
    /* 00408f02: mov ecx, eax */ r_ecx = r_eax;
    /* 00408f04: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x408f09u); f_0063b0a0();
    /* 00408f09: mov esp, ebp */ r_esp = r_ebp;
    /* 00408f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408f0c: ret 4 */ FN_RET(0x00408ee0); r_esp += 8; return;
}

void f_00408f10(void) /* sub_408F10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408f10);
    /* 00408f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00408f13: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408f19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00408f1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00408f20: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00408f23: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 00408f29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408f2d: push 0x6b3644 */ { u32 v = 0x6b3644u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f32: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00408f38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408f39: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x408f3fu); call_ind(t); }
    /* 00408f3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408f42: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00408f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408f49: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x408f4eu); f_0062fde0();
    /* 00408f4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408f51: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00408f57: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x408f5cu); f_004091b0();
    /* 00408f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408f5d: push 0x6b3634 */ { u32 v = 0x6b3634u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f62: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00408f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408f69: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x408f6fu); call_ind(t); }
    /* 00408f6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408f72: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00408f78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408f79: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x408f7eu); f_0062fde0();
    /* 00408f7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408f81: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00408f87: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x408f8cu); f_004091d0();
    /* 00408f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408f8d: push 0x6b3624 */ { u32 v = 0x6b3624u; r_esp -= 4; W32(r_esp, v); }
    /* 00408f92: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00408f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408f99: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x408f9fu); call_ind(t); }
    /* 00408f9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408fa2: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00408fa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408fa9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x408faeu); f_0062fde0();
    /* 00408fae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408fb1: push 0x6b360c */ { u32 v = 0x6b360cu; r_esp -= 4; W32(r_esp, v); }
    /* 00408fb6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x408fbbu); f_0062fde0();
    /* 00408fbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408fbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408fc1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00408fc3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x408fc8u); f_00686d72();
    /* 00408fc8: mov esp, ebp */ r_esp = r_ebp;
    /* 00408fca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408fcb: ret 4 */ FN_RET(0x00408f10); r_esp += 8; return;
}

void f_00408fd0(void) /* sub_408FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408fd0);
    /* 00408fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00408fd3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408fd6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00408fd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408fe0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408fe4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00408fe7: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x408fecu); f_004094b0();
    /* 00408fec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408fef: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408ff3: jge 0x408ffa */ if ((fS==fO)) goto L_00408ffa;
L_00408ff5:; BB(0x00408ff5);
    /* 00408ff5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00408ff8: jmp 0x409056 */ goto L_00409056;
L_00408ffa:; BB(0x00408ffa);
    /* 00408ffa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00408ffc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408fff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00409000: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00409003: call 0x4093d0 */ r_esp -= 4; W32(r_esp, 0x409008u); f_004093d0();
    /* 00409008: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0040900c: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00409010: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00409011: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x409016u); f_00641280();
    /* 00409016: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00409019: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0040901c: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409020: jl 0x409033 */ if ((fS!=fO)) goto L_00409033;
L_00409022:; BB(0x00409022);
    /* 00409022: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409026: jg 0x409033 */ if ((!fZ&&fS==fO)) goto L_00409033;
L_00409028:; BB(0x00409028);
    /* 00409028: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040902b: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040902e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00409031: jmp 0x409042 */ goto L_00409042;
L_00409033:; BB(0x00409033);
    /* 00409033: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00409037: jne 0x409042 */ if (!fZ) goto L_00409042;
L_00409039:; BB(0x00409039);
    /* 00409039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040903c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040903f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00409042:; BB(0x00409042);
    /* 00409042: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00409046: jl 0x409053 */ if ((fS!=fO)) goto L_00409053;
L_00409048:; BB(0x00409048);
    /* 00409048: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040904b: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040904e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00409051: jmp 0x409042 */ goto L_00409042;
L_00409053:; BB(0x00409053);
    /* 00409053: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00409056:; BB(0x00409056);
    /* 00409056: mov esp, ebp */ r_esp = r_ebp;
    /* 00409058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00409059: ret 4 */ FN_RET(0x00408fd0); r_esp += 8; return;
}

