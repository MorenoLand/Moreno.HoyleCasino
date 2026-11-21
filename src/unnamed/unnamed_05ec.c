#include "protos.h"

void f_005ec060(void) /* sub_5EC060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec060);
    /* 005ec060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec061: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec063: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec066: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ec069: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec06c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5ec071u); f_005f5550();
    /* 005ec071: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ec074: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec077: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5ec07cu); f_005f5590();
    /* 005ec07c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ec07f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ec082: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005ec088: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ec08f: jmp 0x5ec09a */ goto L_005ec09a;
L_005ec091:; BB(0x005ec091);
    /* 005ec091: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec094: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec097: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005ec09a:; BB(0x005ec09a);
    /* 005ec09a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec09d: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec0a0: jge 0x5ec12e */ if ((fS==fO)) goto L_005ec12e;
L_005ec0a6:; BB(0x005ec0a6);
    /* 005ec0a6: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005ec0aa: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ec0b1: jmp 0x5ec0bc */ goto L_005ec0bc;
L_005ec0b3:; BB(0x005ec0b3);
    /* 005ec0b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec0b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec0b9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005ec0bc:; BB(0x005ec0bc);
    /* 005ec0bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec0bf: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec0c2: jge 0x5ec10e */ if ((fS==fO)) goto L_005ec10e;
L_005ec0c4:; BB(0x005ec0c4);
    /* 005ec0c4: lea edx, [ebp - 9] */ r_edx = (u32)(r_ebp+0xfffffff7u);
    /* 005ec0c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0c8: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005ec0cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec0cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec0d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec0d7: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 005ec0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0de: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec0e1: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 005ec0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec0e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec0eb: mov ecx, dword ptr [ecx + 0x174] */ r_ecx = R32((u32)(r_ecx+0x174u));
    /* 005ec0f1: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ec0f6u); f_00616b30();
    /* 005ec0f6: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005ec0fa: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec100: jne 0x5ec10c */ if (!fZ) goto L_005ec10c;
L_005ec102:; BB(0x005ec102);
    /* 005ec102: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005ec106: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec109: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005ec10c:; BB(0x005ec10c);
    /* 005ec10c: jmp 0x5ec0b3 */ goto L_005ec0b3;
L_005ec10e:; BB(0x005ec10e);
    /* 005ec10e: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005ec112: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec114: je 0x5ec123 */ if (fZ) goto L_005ec123;
L_005ec116:; BB(0x005ec116);
    /* 005ec116: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec119: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ec11c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ec11f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005ec121: jmp 0x5ec129 */ goto L_005ec129;
L_005ec123:; BB(0x005ec123);
    /* 005ec123: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec126: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005ec129:; BB(0x005ec129);
    /* 005ec129: jmp 0x5ec091 */ goto L_005ec091;
L_005ec12e:; BB(0x005ec12e);
    /* 005ec12e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec131: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005ec137: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ec13e: jmp 0x5ec149 */ goto L_005ec149;
L_005ec140:; BB(0x005ec140);
    /* 005ec140: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec143: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec146: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005ec149:; BB(0x005ec149);
    /* 005ec149: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec14c: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec14f: jge 0x5ec1dd */ if ((fS==fO)) goto L_005ec1dd;
L_005ec155:; BB(0x005ec155);
    /* 005ec155: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005ec159: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ec160: jmp 0x5ec16b */ goto L_005ec16b;
L_005ec162:; BB(0x005ec162);
    /* 005ec162: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec165: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ec168: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005ec16b:; BB(0x005ec16b);
    /* 005ec16b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec16e: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec171: jge 0x5ec1bd */ if ((fS==fO)) goto L_005ec1bd;
L_005ec173:; BB(0x005ec173);
    /* 005ec173: lea ecx, [ebp - 9] */ r_ecx = (u32)(r_ebp+0xfffffff7u);
    /* 005ec176: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec177: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005ec17a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec17b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec17e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec17f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec182: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec183: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec186: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005ec18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec18d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec190: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 005ec196: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec197: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec19a: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 005ec1a0: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ec1a5u); f_00616b30();
    /* 005ec1a5: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005ec1a9: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec1af: jne 0x5ec1bb */ if (!fZ) goto L_005ec1bb;
L_005ec1b1:; BB(0x005ec1b1);
    /* 005ec1b1: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005ec1b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec1b8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005ec1bb:; BB(0x005ec1bb);
    /* 005ec1bb: jmp 0x5ec162 */ goto L_005ec162;
L_005ec1bd:; BB(0x005ec1bd);
    /* 005ec1bd: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005ec1c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec1c3: je 0x5ec1d2 */ if (fZ) goto L_005ec1d2;
L_005ec1c5:; BB(0x005ec1c5);
    /* 005ec1c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec1c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec1cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec1ce: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005ec1d0: jmp 0x5ec1d8 */ goto L_005ec1d8;
L_005ec1d2:; BB(0x005ec1d2);
    /* 005ec1d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec1d5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005ec1d8:; BB(0x005ec1d8);
    /* 005ec1d8: jmp 0x5ec140 */ goto L_005ec140;
L_005ec1dd:; BB(0x005ec1dd);
    /* 005ec1dd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005ec1e0: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005ec1e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec1e9: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ec1ec: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005ec1ef: jmp 0x5ec1fa */ goto L_005ec1fa;
L_005ec1f1:; BB(0x005ec1f1);
    /* 005ec1f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec1f4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ec1f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005ec1fa:; BB(0x005ec1fa);
    /* 005ec1fa: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec1fe: jl 0x5ec28c */ if ((fS!=fO)) goto L_005ec28c;
L_005ec204:; BB(0x005ec204);
    /* 005ec204: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005ec208: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ec20f: jmp 0x5ec21a */ goto L_005ec21a;
L_005ec211:; BB(0x005ec211);
    /* 005ec211: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec214: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec217: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ec21a:; BB(0x005ec21a);
    /* 005ec21a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec21d: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec220: jge 0x5ec26b */ if ((fS==fO)) goto L_005ec26b;
L_005ec222:; BB(0x005ec222);
    /* 005ec222: lea eax, [ebp - 9] */ r_eax = (u32)(r_ebp+0xfffffff7u);
    /* 005ec225: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec226: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005ec229: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec22a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec22d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec22e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec232: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec235: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005ec23b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec23c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec23f: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005ec245: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec246: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec249: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005ec24f: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ec254u); f_00616b30();
    /* 005ec254: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005ec258: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec25d: jne 0x5ec269 */ if (!fZ) goto L_005ec269;
L_005ec25f:; BB(0x005ec25f);
    /* 005ec25f: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005ec263: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec266: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ec269:; BB(0x005ec269);
    /* 005ec269: jmp 0x5ec211 */ goto L_005ec211;
L_005ec26b:; BB(0x005ec26b);
    /* 005ec26b: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005ec26f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec271: je 0x5ec280 */ if (fZ) goto L_005ec280;
L_005ec273:; BB(0x005ec273);
    /* 005ec273: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec276: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ec279: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005ec27c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005ec27e: jmp 0x5ec287 */ goto L_005ec287;
L_005ec280:; BB(0x005ec280);
    /* 005ec280: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005ec287:; BB(0x005ec287);
    /* 005ec287: jmp 0x5ec1f1 */ goto L_005ec1f1;
L_005ec28c:; BB(0x005ec28c);
    /* 005ec28c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ec28f: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005ec295: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec298: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ec29b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ec29e: jmp 0x5ec2a9 */ goto L_005ec2a9;
L_005ec2a0:; BB(0x005ec2a0);
    /* 005ec2a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec2a3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec2a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005ec2a9:; BB(0x005ec2a9);
    /* 005ec2a9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec2ad: jl 0x5ec33c */ if ((fS!=fO)) goto L_005ec33c;
L_005ec2b3:; BB(0x005ec2b3);
    /* 005ec2b3: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005ec2b7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005ec2be: jmp 0x5ec2c9 */ goto L_005ec2c9;
L_005ec2c0:; BB(0x005ec2c0);
    /* 005ec2c0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec2c3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ec2c6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005ec2c9:; BB(0x005ec2c9);
    /* 005ec2c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec2cc: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec2cf: jge 0x5ec31b */ if ((fS==fO)) goto L_005ec31b;
L_005ec2d1:; BB(0x005ec2d1);
    /* 005ec2d1: lea ecx, [ebp - 9] */ r_ecx = (u32)(r_ebp+0xfffffff7u);
    /* 005ec2d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2d5: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005ec2d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec2dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec2e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2e1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec2e4: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005ec2ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2eb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec2ee: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 005ec2f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec2f5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec2f8: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 005ec2fe: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ec303u); f_00616b30();
    /* 005ec303: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005ec307: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec30d: jne 0x5ec319 */ if (!fZ) goto L_005ec319;
L_005ec30f:; BB(0x005ec30f);
    /* 005ec30f: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005ec313: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec316: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005ec319:; BB(0x005ec319);
    /* 005ec319: jmp 0x5ec2c0 */ goto L_005ec2c0;
L_005ec31b:; BB(0x005ec31b);
    /* 005ec31b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005ec31f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec321: je 0x5ec330 */ if (fZ) goto L_005ec330;
L_005ec323:; BB(0x005ec323);
    /* 005ec323: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec326: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec329: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ec32c: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005ec32e: jmp 0x5ec337 */ goto L_005ec337;
L_005ec330:; BB(0x005ec330);
    /* 005ec330: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005ec337:; BB(0x005ec337);
    /* 005ec337: jmp 0x5ec2a0 */ goto L_005ec2a0;
L_005ec33c:; BB(0x005ec33c);
    /* 005ec33c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec33e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec33f: ret 0x10 */ FN_RET(0x005ec060); r_esp += 20; return;
}

void f_005ec3a0(void) /* sub_5EC3A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec3a0);
    /* 005ec3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec3a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec3a6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ec3a9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ec3ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec3ae: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec3b0: jle 0x5ec3bc */ if ((fZ||fS!=fO)) goto L_005ec3bc;
L_005ec3b2:; BB(0x005ec3b2);
    /* 005ec3b2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ec3b5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ec3b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ec3ba: jmp 0x5ec3c4 */ goto L_005ec3c4;
L_005ec3bc:; BB(0x005ec3bc);
    /* 005ec3bc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ec3bf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ec3c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ec3c4:; BB(0x005ec3c4);
    /* 005ec3c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec3c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec3ca: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ec3cc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ec3cf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ec3d2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ec3d5: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec3d8: jge 0x5ec3e5 */ if ((fS==fO)) goto L_005ec3e5;
L_005ec3da:; BB(0x005ec3da);
    /* 005ec3da: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ec3dd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ec3e0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ec3e3: jmp 0x5ec3ee */ goto L_005ec3ee;
L_005ec3e5:; BB(0x005ec3e5);
    /* 005ec3e5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ec3e8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005ec3eb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ec3ee:; BB(0x005ec3ee);
    /* 005ec3ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec3f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec3f4: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ec3f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec3fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec3fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec3ff: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec402: jl 0x5ec418 */ if ((fS!=fO)) goto L_005ec418;
L_005ec404:; BB(0x005ec404);
    /* 005ec404: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec408: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec40b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec40c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ec411u); f_00686fa2();
    /* 005ec411: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec414: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ec416: jmp 0x5ec492 */ goto L_005ec492;
L_005ec418:; BB(0x005ec418);
    /* 005ec418: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec41b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ec41e: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ec421: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec424: jle 0x5ec431 */ if ((fZ||fS!=fO)) goto L_005ec431;
L_005ec426:; BB(0x005ec426);
    /* 005ec426: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec429: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ec42c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ec42f: jmp 0x5ec43a */ goto L_005ec43a;
L_005ec431:; BB(0x005ec431);
    /* 005ec431: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ec434: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ec437: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005ec43a:; BB(0x005ec43a);
    /* 005ec43a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec43d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec440: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ec443: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec446: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ec449: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005ec44c: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec44f: jge 0x5ec45c */ if ((fS==fO)) goto L_005ec45c;
L_005ec451:; BB(0x005ec451);
    /* 005ec451: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec454: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005ec457: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ec45a: jmp 0x5ec465 */ goto L_005ec465;
L_005ec45c:; BB(0x005ec45c);
    /* 005ec45c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ec45f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005ec462: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005ec465:; BB(0x005ec465);
    /* 005ec465: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec468: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ec46b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005ec46e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec471: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec474: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ec477: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec47a: jl 0x5ec490 */ if ((fS!=fO)) goto L_005ec490;
L_005ec47c:; BB(0x005ec47c);
    /* 005ec47c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec47e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ec480: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec484: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ec489u); f_00686fa2();
    /* 005ec489: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec48c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ec48e: jmp 0x5ec492 */ goto L_005ec492;
L_005ec490:; BB(0x005ec490);
    /* 005ec490: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005ec492:; BB(0x005ec492);
    /* 005ec492: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec495: ret  */ FN_RET(0x005ec3a0); r_esp += 4; return;
}

void f_005ec4a0(void) /* sub_5EC4A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec4a0);
    /* 005ec4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec4a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec4a6: cmp dword ptr [ebp + 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ec4aa: jg 0x5ec4b1 */ if ((!fZ&&fS==fO)) goto L_005ec4b1;
L_005ec4ac:; BB(0x005ec4ac);
    /* 005ec4ac: jmp 0x5ec551 */ goto L_005ec551;
L_005ec4b1:; BB(0x005ec4b1);
    /* 005ec4b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec4b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec4b7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ec4ba: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ec4bc: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ec4bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec4c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec4c5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005ec4c8: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ec4cb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ec4ce: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 005ec4d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec4d4: je 0x5ec50a */ if (fZ) goto L_005ec50a;
L_005ec4d6:; BB(0x005ec4d6);
    /* 005ec4d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec4d9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ec4dc: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ec4df: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ec4e2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ec4e3: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005ec4e3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ec4e3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ec4e6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec4e9: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec4ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec4ef: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ec4f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ec4f5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec4f8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ec4fa: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ec4fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ec4fd: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005ec4fd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ec4fd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ec500: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ec503: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ec505: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec508: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_005ec50a:; BB(0x005ec50a);
    /* 005ec50a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec50d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ec50e: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005ec50e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ec50e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ec511: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec514: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005ec516: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec518: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec51b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ec51c: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005ec51c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ec51c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ec51f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005ec521: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005ec523: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ec525: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec527: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec52a: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005ec52d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec530: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ec531: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005ec531, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ec531, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ec534: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ec537: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005ec53a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec53c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ec53f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ec540: idiv dword ptr [ebp + 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x005ec540, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005ec540, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005ec543: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005ec545: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005ec547: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ec549: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ec54b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec54e: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
L_005ec551:; BB(0x005ec551);
    /* 005ec551: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec554: ret  */ FN_RET(0x005ec4a0); r_esp += 4; return;
}

void f_005ec8f0(void) /* sub_5EC8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec8f0);
    /* 005ec8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ec8f7: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005ec8fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8fb: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 005ec8fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8ff: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005ec902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec903: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005ec906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec90a: call 0x5f50c0 */ r_esp -= 4; W32(r_esp, 0x5ec90fu); f_005f50c0();
    /* 005ec90f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec910: mov ecx, esp */ r_ecx = r_esp;
    /* 005ec912: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ec919: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005ec91c: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ec921: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005ec924: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec926: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ec929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec92a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec92d: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5ec932u); f_005ecd00();
    /* 005ec932: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ec935: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec936: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec939: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ec93b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec93e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ec944: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ec946u); call_ind(t); }
    /* 005ec946: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ec949: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec94a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec94d: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5ec952u); f_005ecc60();
    /* 005ec952: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005ec955: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec956: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec959: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5ec95eu); f_005eccb0();
    /* 005ec95e: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005ec961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec962: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ec965: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x5ec96au); f_005ef310();
    /* 005ec96a: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec96c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec96d: ret 0x24 */ FN_RET(0x005ec8f0); r_esp += 40; return;
}

void f_005ecc60(void) /* sub_5ECC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecc60);
    /* 005ecc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc61: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecc63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ecc67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ecc6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc6f: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ecc75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ecc77u); call_ind(t); }
    /* 005ecc77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ecc7d: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 005ecc80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc83: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005ecc86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecc87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc8a: call 0x5f5530 */ r_esp -= 4; W32(r_esp, 0x5ecc8fu); f_005f5530();
    /* 005ecc8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc92: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ecc94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecc97: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005ecc9d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ecc9fu); call_ind(t); }
    /* 005ecc9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ecca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ecca2: ret 4 */ FN_RET(0x005ecc60); r_esp += 8; return;
}

void f_005eccb0(void) /* sub_5ECCB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eccb0);
    /* 005eccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eccb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eccb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eccba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eccbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eccbf: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005eccc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eccc7u); call_ind(t); }
    /* 005eccc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eccca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ecccd: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 005eccd0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eccd3: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005eccd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eccd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eccda: call 0x5f5570 */ r_esp -= 4; W32(r_esp, 0x5eccdfu); f_005f5570();
    /* 005eccdf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecce2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ecce4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ecce7: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005ecced: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eccefu); call_ind(t); }
    /* 005eccef: mov esp, ebp */ r_esp = r_ebp;
    /* 005eccf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eccf2: ret 4 */ FN_RET(0x005eccb0); r_esp += 8; return;
}

