#include "protos.h"

void f_00422110(void) /* sub_422110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422110);
    /* 00422110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422111: mov ebp, esp */ r_ebp = r_esp;
    /* 00422113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422119: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042211c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x422121u); f_005fb2b0();
    /* 00422121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422123: jne 0x422168 */ if (!fZ) goto L_00422168;
L_00422125:; BB(0x00422125);
    /* 00422125: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422127: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042212c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042212e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00422130: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00422134: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00422136: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00422138: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042213b: imul eax, eax, 0x23 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x23u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042213e: add eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00422141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422142: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00422144: push 0x1398 */ { u32 v = 0x1398u; r_esp -= 4; W32(r_esp, v); }
    /* 00422149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042214b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042214d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422150: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x422155u); f_005f9ce0();
    /* 00422155: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00422157: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422159: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042215c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x422161u); f_005fb2b0();
    /* 00422161: mov ecx, eax */ r_ecx = r_eax;
    /* 00422163: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x422168u); f_005eb5d0();
L_00422168:; BB(0x00422168);
    /* 00422168: mov esp, ebp */ r_esp = r_ebp;
    /* 0042216a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042216b: ret 4 */ FN_RET(0x00422110); r_esp += 8; return;
}

void f_00422560(void) /* sub_422560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422560);
    /* 00422560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422561: mov ebp, esp */ r_ebp = r_esp;
    /* 00422563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422567: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042256a: mov byte ptr [eax + 5], 0 */ W8((u32)(r_eax+0x5u), 0x0u);
    /* 0042256e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422571: mov byte ptr [ecx + 4], 0 */ W8((u32)(r_ecx+0x4u), 0x0u);
    /* 00422575: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422578: mov byte ptr [edx + 6], 0 */ W8((u32)(r_edx+0x6u), 0x0u);
    /* 0042257c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042257f: mov byte ptr [eax + 7], 0 */ W8((u32)(r_eax+0x7u), 0x0u);
    /* 00422583: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422586: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0042258a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042258d: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00422591: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422594: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 00422598: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042259b: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 0042259f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004225a3: jne 0x4225d2 */ if (!fZ) goto L_004225d2;
L_004225a5:; BB(0x004225a5);
    /* 004225a5: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004225ab: call 0x425fb0 */ r_esp -= 4; W32(r_esp, 0x4225b0u); f_00425fb0();
    /* 004225b0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004225b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004225b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004225b6: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 004225bb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004225be: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 004225c4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004225c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004225c9: mov ecx, eax */ r_ecx = r_eax;
    /* 004225cb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004225ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4225d0u); call_ind(t); }
    /* 004225d0: jmp 0x4225f4 */ goto L_004225f4;
L_004225d2:; BB(0x004225d2);
    /* 004225d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004225d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004225d6: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004225db: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 004225e1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004225e4: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004225ea: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004225ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004225ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004225f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4225f4u); call_ind(t); }
L_004225f4:; BB(0x004225f4);
    /* 004225f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004225f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004225f7: ret 4 */ FN_RET(0x00422560); r_esp += 8; return;
}

void f_00422600(void) /* sub_422600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422600);
    /* 00422600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422601: mov ebp, esp */ r_ebp = r_esp;
    /* 00422603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00422605: push 0x69e26b */ { u32 v = 0x69e26bu; r_esp -= 4; W32(r_esp, v); }
    /* 0042260a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00422610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422611: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422614: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00422619: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042261b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042261c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042261f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00422625: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00422628: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042262e: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x422633u); f_0041f1b0();
    /* 00422633: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00422638: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0042263e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00422641: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422645: je 0x422654 */ if (fZ) goto L_00422654;
L_00422647:; BB(0x00422647);
    /* 00422647: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0042264a: call 0x4230d0 */ r_esp -= 4; W32(r_esp, 0x42264fu); f_004230d0();
    /* 0042264f: jmp 0x422be6 */ goto L_00422be6;
L_00422654:; BB(0x00422654);
    /* 00422654: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422657: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 0042265b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042265d: jne 0x4226ab */ if (!fZ) goto L_004226ab;
L_0042265f:; BB(0x0042265f);
    /* 0042265f: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422662: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00422666: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0042266c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0042266f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422672: mov dword ptr [eax + 0xe0], 4 */ W32((u32)(r_eax+0xe0u), 0x4u);
    /* 0042267c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042267f: mov dword ptr [ecx + 0xe4], 4 */ W32((u32)(r_ecx+0xe4u), 0x4u);
    /* 00422689: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042268b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042268d: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422693: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422696: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0042269c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042269f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004226a1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004226a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4226a6u); call_ind(t); }
    /* 004226a6: jmp 0x422be6 */ goto L_00422be6;
L_004226ab:; BB(0x004226ab);
    /* 004226ab: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004226b1: call 0x426420 */ r_esp -= 4; W32(r_esp, 0x4226b6u); f_00426420();
    /* 004226b6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004226b9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004226bf: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 004226c2: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 004226c5: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 004226c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004226cb: je 0x422747 */ if (fZ) goto L_00422747;
L_004226cd:; BB(0x004226cd);
    /* 004226cd: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004226d1: je 0x422747 */ if (fZ) goto L_00422747;
L_004226d3:; BB(0x004226d3);
    /* 004226d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004226d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004226d7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4226dcu); f_005dcb00();
    /* 004226dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004226df: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004226e2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004226e5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4226eau); f_0063aac0();
    /* 004226ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004226ec: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004226ef: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004226f3: je 0x422711 */ if (fZ) goto L_00422711;
L_004226f5:; BB(0x004226f5);
    /* 004226f5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004226f8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4226fdu); f_0063aac0();
    /* 004226fd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004226ff: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00422702: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422706: je 0x422711 */ if (fZ) goto L_00422711;
L_00422708:; BB(0x00422708);
    /* 00422708: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0042270f: jmp 0x422718 */ goto L_00422718;
L_00422711:; BB(0x00422711);
    /* 00422711: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
L_00422718:; BB(0x00422718);
    /* 00422718: movzx ecx, byte ptr [ebp - 0x7c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff84u));
    /* 0042271c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042271e: je 0x422747 */ if (fZ) goto L_00422747;
L_00422720:; BB(0x00422720);
    /* 00422720: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422723: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422724: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422729u); f_005dcb00();
    /* 00422729: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042272c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0042272f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00422732: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00422739: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042273f: call 0x426420 */ r_esp -= 4; W32(r_esp, 0x422744u); f_00426420();
    /* 00422744: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00422747:; BB(0x00422747);
    /* 00422747: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042274b: je 0x4227b6 */ if (fZ) goto L_004227b6;
L_0042274d:; BB(0x0042274d);
    /* 0042274d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422750: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422751: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422756u); f_005dcb00();
    /* 00422756: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422759: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0042275c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0042275f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422764u); f_0063aac0();
    /* 00422764: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422766: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00422769: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042276d: je 0x42278b */ if (fZ) goto L_0042278b;
L_0042276f:; BB(0x0042276f);
    /* 0042276f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00422772: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422777u); f_0063aac0();
    /* 00422777: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00422779: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0042277c: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422780: je 0x42278b */ if (fZ) goto L_0042278b;
L_00422782:; BB(0x00422782);
    /* 00422782: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 00422789: jmp 0x422792 */ goto L_00422792;
L_0042278b:; BB(0x0042278b);
    /* 0042278b: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
L_00422792:; BB(0x00422792);
    /* 00422792: mov cl, byte ptr [ebp - 0x80] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff80u))) & 0xffu);
    /* 00422795: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422796: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042279a: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004227a0: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x4227a5u); f_00426260();
    /* 004227a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004227a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004227a9: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004227ac: call 0x422c00 */ r_esp -= 4; W32(r_esp, 0x4227b1u); f_00422c00();
    /* 004227b1: jmp 0x422be6 */ goto L_00422be6;
L_004227b6:; BB(0x004227b6);
    /* 004227b6: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004227b9: movzx edx, byte ptr [ecx + 0xb] */ r_edx = (u32)R8((u32)(r_ecx+0xbu));
    /* 004227bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004227bf: jne 0x4227d3 */ if (!fZ) goto L_004227d3;
L_004227c1:; BB(0x004227c1);
    /* 004227c1: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004227c7: call 0x426810 */ r_esp -= 4; W32(r_esp, 0x4227ccu); f_00426810();
    /* 004227cc: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004227cf: mov byte ptr [eax + 0xb], 1 */ W8((u32)(r_eax+0xbu), 0x1u);
L_004227d3:; BB(0x004227d3);
    /* 004227d3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004227d6: movzx edx, byte ptr [ecx + 6] */ r_edx = (u32)R8((u32)(r_ecx+0x6u));
    /* 004227da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004227dc: jne 0x422829 */ if (!fZ) goto L_00422829;
L_004227de:; BB(0x004227de);
    /* 004227de: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004227e1: mov byte ptr [eax + 6], 1 */ W8((u32)(r_eax+0x6u), 0x1u);
    /* 004227e5: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004227eb: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 004227ee: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004227f1: mov dword ptr [edx + 0xe0], 5 */ W32((u32)(r_edx+0xe0u), 0x5u);
    /* 004227fb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004227fe: mov dword ptr [eax + 0xe4], 4 */ W32((u32)(r_eax+0xe4u), 0x4u);
    /* 00422808: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042280a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042280c: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422812: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00422815: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 0042281a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042281d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042281f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422822: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422824u); call_ind(t); }
    /* 00422824: jmp 0x422be6 */ goto L_00422be6;
L_00422829:; BB(0x00422829);
    /* 00422829: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042282f: call 0x426960 */ r_esp -= 4; W32(r_esp, 0x422834u); f_00426960();
    /* 00422834: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422837: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422839: je 0x4228a2 */ if (fZ) goto L_004228a2;
L_0042283b:; BB(0x0042283b);
    /* 0042283b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042283d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042283f: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422845: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x42284au); f_00426260();
    /* 0042284a: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0042284c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x422851u); f_00686d82();
    /* 00422851: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422854: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00422857: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042285e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422862: je 0x422874 */ if (fZ) goto L_00422874;
L_00422864:; BB(0x00422864);
    /* 00422864: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00422867: call 0x421390 */ r_esp -= 4; W32(r_esp, 0x42286cu); f_00421390();
    /* 0042286c: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00422872: jmp 0x42287e */ goto L_0042287e;
L_00422874:; BB(0x00422874);
    /* 00422874: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0042287e:; BB(0x0042287e);
    /* 0042287e: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00422884: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00422887: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042288e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422891: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422892: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422898: call 0x5da390 */ r_esp -= 4; W32(r_esp, 0x42289du); f_005da390();
    /* 0042289d: jmp 0x422be6 */ goto L_00422be6;
L_004228a2:; BB(0x004228a2);
    /* 004228a2: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004228a8: call 0x426a40 */ r_esp -= 4; W32(r_esp, 0x4228adu); f_00426a40();
    /* 004228ad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004228b0: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004228b4: je 0x4228d8 */ if (fZ) goto L_004228d8;
L_004228b6:; BB(0x004228b6);
    /* 004228b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004228b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004228bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004228bc: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004228c2: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x4228c7u); f_00426260();
    /* 004228c7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004228ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004228cb: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004228ce: call 0x422ea0 */ r_esp -= 4; W32(r_esp, 0x4228d3u); f_00422ea0();
    /* 004228d3: jmp 0x422be6 */ goto L_00422be6;
L_004228d8:; BB(0x004228d8);
    /* 004228d8: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004228db: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 004228df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004228e1: jne 0x422953 */ if (!fZ) goto L_00422953;
L_004228e3:; BB(0x004228e3);
    /* 004228e3: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 004228e6: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 004228ea: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 004228ef: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004228f2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004228f5: mov byte ptr [ecx + 0xad], 1 */ W8((u32)(r_ecx+0xadu), 0x1u);
    /* 004228fc: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422902: call 0x426e80 */ r_esp -= 4; W32(r_esp, 0x422907u); f_00426e80();
    /* 00422907: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042290a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042290c: jne 0x422930 */ if (!fZ) goto L_00422930;
L_0042290e:; BB(0x0042290e);
    /* 0042290e: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00422913: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00422916: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00422919: mov dword ptr [ecx + 0xe0], 6 */ W32((u32)(r_ecx+0xe0u), 0x6u);
    /* 00422923: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00422926: mov dword ptr [edx + 0xe4], 4 */ W32((u32)(r_edx+0xe4u), 0x4u);
L_00422930:; BB(0x00422930);
    /* 00422930: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422932: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422934: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 00422939: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042293c: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422942: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422945: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00422947: mov ecx, eax */ r_ecx = r_eax;
    /* 00422949: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042294c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42294eu); call_ind(t); }
    /* 0042294e: jmp 0x422be6 */ goto L_00422be6;
L_00422953:; BB(0x00422953);
    /* 00422953: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422959: call 0x426da0 */ r_esp -= 4; W32(r_esp, 0x42295eu); f_00426da0();
    /* 0042295e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00422961: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422965: je 0x422aa5 */ if (fZ) goto L_00422aa5;
L_0042296b:; BB(0x0042296b);
    /* 0042296b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042296d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422970: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422971: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422977: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x42297cu); f_00426260();
    /* 0042297c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042297f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422980: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422986: call 0x427670 */ r_esp -= 4; W32(r_esp, 0x42298bu); f_00427670();
    /* 0042298b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042298e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422990: je 0x4229e8 */ if (fZ) goto L_004229e8;
L_00422992:; BB(0x00422992);
    /* 00422992: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422995: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 00422999: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042299b: jne 0x4229e8 */ if (!fZ) goto L_004229e8;
L_0042299d:; BB(0x0042299d);
    /* 0042299d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004229a0: mov byte ptr [eax + 0xa], 1 */ W8((u32)(r_eax+0xau), 0x1u);
    /* 004229a4: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004229aa: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004229ad: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004229b0: mov dword ptr [edx + 0xe0], 7 */ W32((u32)(r_edx+0xe0u), 0x7u);
    /* 004229ba: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004229bd: mov dword ptr [eax + 0xe4], 4 */ W32((u32)(r_eax+0xe4u), 0x4u);
    /* 004229c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004229c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004229cb: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004229d1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004229d4: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 004229d9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004229dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004229de: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004229e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4229e3u); call_ind(t); }
    /* 004229e3: jmp 0x422be6 */ goto L_00422be6;
L_004229e8:; BB(0x004229e8);
    /* 004229e8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004229eb: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 004229ef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004229f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004229f3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004229f6: call 0x423030 */ r_esp -= 4; W32(r_esp, 0x4229fbu); f_00423030();
    /* 004229fb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004229fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004229ff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422a04u); f_005dcb00();
    /* 00422a04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422a07: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00422a0a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00422a0d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422a12u); f_0063aac0();
    /* 00422a12: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00422a14: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00422a17: cmp dword ptr [ebp - 0x54], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422a1b: je 0x422a3c */ if (fZ) goto L_00422a3c;
L_00422a1d:; BB(0x00422a1d);
    /* 00422a1d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00422a20: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422a25u); f_0063aac0();
    /* 00422a25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422a27: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00422a2a: cmp dword ptr [ebp - 0x58], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422a2e: je 0x422a3c */ if (fZ) goto L_00422a3c;
L_00422a30:; BB(0x00422a30);
    /* 00422a30: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00422a3a: jmp 0x422a46 */ goto L_00422a46;
L_00422a3c:; BB(0x00422a3c);
    /* 00422a3c: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
L_00422a46:; BB(0x00422a46);
    /* 00422a46: movzx eax, byte ptr [ebp - 0x88] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff78u));
    /* 00422a4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422a4f: je 0x422a5a */ if (fZ) goto L_00422a5a;
L_00422a51:; BB(0x00422a51);
    /* 00422a51: mov dword ptr [ebp - 0x64], 0xffffffff */ W32((u32)(r_ebp+0xffffff9cu), 0xffffffffu);
    /* 00422a58: jmp 0x422a60 */ goto L_00422a60;
L_00422a5a:; BB(0x00422a5a);
    /* 00422a5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422a5d: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
L_00422a60:; BB(0x00422a60);
    /* 00422a60: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00422a66: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00422a69: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00422a6c: mov dword ptr [eax + 0xe0], 2 */ W32((u32)(r_eax+0xe0u), 0x2u);
    /* 00422a76: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00422a79: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00422a7c: mov dword ptr [ecx + 0xe4], edx */ W32((u32)(r_ecx+0xe4u), r_edx);
    /* 00422a82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422a84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422a86: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 00422a8b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00422a8e: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422a94: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422a97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00422a99: mov ecx, eax */ r_ecx = r_eax;
    /* 00422a9b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422a9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422aa0u); call_ind(t); }
    /* 00422aa0: jmp 0x422be6 */ goto L_00422be6;
L_00422aa5:; BB(0x00422aa5);
    /* 00422aa5: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422aab: call 0x4271f0 */ r_esp -= 4; W32(r_esp, 0x422ab0u); f_004271f0();
    /* 00422ab0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00422ab3: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ab7: je 0x422af9 */ if (fZ) goto L_00422af9;
L_00422ab9:; BB(0x00422ab9);
    /* 00422ab9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422abb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422abe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422abf: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422ac5: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x422acau); f_00426260();
    /* 00422aca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422acd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422ace: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422ad1: call 0x4230b0 */ r_esp -= 4; W32(r_esp, 0x422ad6u); f_004230b0();
    /* 00422ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422ad8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422ada: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 00422adf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00422ae2: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422ae8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422aeb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00422aed: mov ecx, eax */ r_ecx = r_eax;
    /* 00422aef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422af2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422af4u); call_ind(t); }
    /* 00422af4: jmp 0x422be6 */ goto L_00422be6;
L_00422af9:; BB(0x00422af9);
    /* 00422af9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422afb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00422afd: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422b03: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x422b08u); f_00426260();
    /* 00422b08: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422b0e: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x422b13u); f_005da7b0();
    /* 00422b13: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422b16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422b18: je 0x422b6e */ if (fZ) goto L_00422b6e;
L_00422b1a:; BB(0x00422b1a);
    /* 00422b1a: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422b1d: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 00422b21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422b23: jne 0x422b6e */ if (!fZ) goto L_00422b6e;
L_00422b25:; BB(0x00422b25);
    /* 00422b25: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422b28: mov byte ptr [ecx + 9], 1 */ W8((u32)(r_ecx+0x9u), 0x1u);
    /* 00422b2c: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00422b32: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00422b35: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00422b38: mov dword ptr [eax + 0xe0], 3 */ W32((u32)(r_eax+0xe0u), 0x3u);
    /* 00422b42: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00422b45: mov dword ptr [ecx + 0xe4], 0xffffffff */ W32((u32)(r_ecx+0xe4u), 0xffffffffu);
    /* 00422b4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422b51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422b53: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422b59: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422b5c: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422b62: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00422b65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422b67: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422b6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422b6cu); call_ind(t); }
    /* 00422b6c: jmp 0x422be6 */ goto L_00422be6;
L_00422b6e:; BB(0x00422b6e);
    /* 00422b6e: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422b74: mov dl, byte ptr [ecx + 0xad] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xadu))) & 0xffu);
    /* 00422b7a: mov byte ptr [ebp - 0x69], dl */ W8((u32)(r_ebp+0xffffff97u), (u8)r_edx);
    /* 00422b7d: movzx eax, byte ptr [ebp - 0x69] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff97u));
    /* 00422b81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422b83: jne 0x422bb8 */ if (!fZ) goto L_00422bb8;
L_00422b85:; BB(0x00422b85);
    /* 00422b85: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422b8b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00422b8e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00422b91: mov byte ptr [edx + 0xad], 1 */ W8((u32)(r_edx+0xadu), 0x1u);
    /* 00422b98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422b9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422b9c: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 00422ba1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00422ba4: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422baa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422bad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00422baf: mov ecx, eax */ r_ecx = r_eax;
    /* 00422bb1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422bb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422bb6u); call_ind(t); }
    /* 00422bb6: jmp 0x422be6 */ goto L_00422be6;
L_00422bb8:; BB(0x00422bb8);
    /* 00422bb8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00422bbe: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00422bc1: mov byte ptr [ebp - 0x71], dl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_edx);
    /* 00422bc4: movzx eax, byte ptr [ebp - 0x71] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff8fu));
    /* 00422bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422bca: je 0x422bdb */ if (fZ) goto L_00422bdb;
L_00422bcc:; BB(0x00422bcc);
    /* 00422bcc: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00422bd1: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00422bd4: call 0x422560 */ r_esp -= 4; W32(r_esp, 0x422bd9u); f_00422560();
    /* 00422bd9: jmp 0x422be6 */ goto L_00422be6;
L_00422bdb:; BB(0x00422bdb);
    /* 00422bdb: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00422be1: call 0x41fca0 */ r_esp -= 4; W32(r_esp, 0x422be6u); f_0041fca0();
L_00422be6:; BB(0x00422be6);
    /* 00422be6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422be9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422bf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00422bf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00422bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422bf4: ret  */ FN_RET(0x00422600); r_esp += 4; return;
}

void f_00422c00(void) /* sub_422C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422c00);
    /* 00422c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00422c03: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422c06: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00422c09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422c0c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00422c0e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00422c11: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422c17: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x422c1cu); f_00426230();
    /* 00422c1c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00422c1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422c22: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422c27u); f_0063aac0();
    /* 00422c27: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00422c29: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00422c2c: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422c30: je 0x422c4e */ if (fZ) goto L_00422c4e;
L_00422c32:; BB(0x00422c32);
    /* 00422c32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422c35: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422c3au); f_0063aac0();
    /* 00422c3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422c3c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00422c3f: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422c43: je 0x422c4e */ if (fZ) goto L_00422c4e;
L_00422c45:; BB(0x00422c45);
    /* 00422c45: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00422c4c: jmp 0x422c55 */ goto L_00422c55;
L_00422c4e:; BB(0x00422c4e);
    /* 00422c4e: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_00422c55:; BB(0x00422c55);
    /* 00422c55: movzx eax, byte ptr [ebp - 0x34] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 00422c59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422c5b: je 0x422d0c */ if (fZ) goto L_00422d0c;
L_00422c61:; BB(0x00422c61);
    /* 00422c61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00422c63: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00422c69: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x422c6eu); f_005df700();
    /* 00422c6e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422c71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422c73: je 0x422c89 */ if (fZ) goto L_00422c89;
L_00422c75:; BB(0x00422c75);
    /* 00422c75: push 0x70cee0 */ { u32 v = 0x70cee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422c7a: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00422c7c: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00422c82: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x422c87u); f_0057ab80();
    /* 00422c87: jmp 0x422c94 */ goto L_00422c94;
L_00422c89:; BB(0x00422c89);
    /* 00422c89: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00422c8f: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x422c94u); f_0057ae30();
L_00422c94:; BB(0x00422c94);
    /* 00422c94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422c97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422c98: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422c9e: call 0x4263d0 */ r_esp -= 4; W32(r_esp, 0x422ca3u); f_004263d0();
    /* 00422ca3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00422ca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ca8: jne 0x422cfc */ if (!fZ) goto L_00422cfc;
L_00422caa:; BB(0x00422caa);
    /* 00422caa: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422cb0: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x422cb5u); f_005da7b0();
    /* 00422cb5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422cb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422cba: je 0x422ce2 */ if (fZ) goto L_00422ce2;
L_00422cbc:; BB(0x00422cbc);
    /* 00422cbc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422cbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422cc0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422cc5u); f_005dcb00();
    /* 00422cc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422cc8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00422ccb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00422cce: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00422cd5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00422cd8: call 0x422600 */ r_esp -= 4; W32(r_esp, 0x422cddu); f_00422600();
    /* 00422cdd: jmp 0x422e95 */ goto L_00422e95;
L_00422ce2:; BB(0x00422ce2);
    /* 00422ce2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00422ce5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422ce6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422cebu); f_005dcb00();
    /* 00422ceb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422cee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422cef: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422cf5: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x422cfau); f_005dbb70();
    /* 00422cfa: jmp 0x422d07 */ goto L_00422d07;
L_00422cfc:; BB(0x00422cfc);
    /* 00422cfc: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00422d02: call 0x41fb20 */ r_esp -= 4; W32(r_esp, 0x422d07u); f_0041fb20();
L_00422d07:; BB(0x00422d07);
    /* 00422d07: jmp 0x422e95 */ goto L_00422e95;
L_00422d0c:; BB(0x00422d0c);
    /* 00422d0c: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00422d12: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x422d17u); f_0057ae30();
    /* 00422d17: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00422d1a: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 00422d1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422d20: jne 0x422d47 */ if (!fZ) goto L_00422d47;
L_00422d22:; BB(0x00422d22);
    /* 00422d22: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00422d25: mov byte ptr [ecx + 5], 1 */ W8((u32)(r_ecx+0x5u), 0x1u);
    /* 00422d29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00422d2b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00422d31: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x422d36u); f_00637810();
    /* 00422d36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422d37: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422d3d: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x422d42u); f_005da360();
    /* 00422d42: jmp 0x422e95 */ goto L_00422e95;
L_00422d47:; BB(0x00422d47);
    /* 00422d47: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00422d4a: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 00422d4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422d52: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422d58: call 0x4263d0 */ r_esp -= 4; W32(r_esp, 0x422d5du); f_004263d0();
    /* 00422d5d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422d60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422d62: je 0x422e3c */ if (fZ) goto L_00422e3c;
L_00422d68:; BB(0x00422d68);
    /* 00422d68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422d6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422d6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422d6e: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00422d74: call 0x41dd40 */ r_esp -= 4; W32(r_esp, 0x422d79u); f_0041dd40();
    /* 00422d79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422d7a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x422d7fu); f_0064c8a0();
    /* 00422d7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422d82: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00422d85: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00422d88: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00422d8b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00422d8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422d91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422d94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422d96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422d98: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00422d9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422d9c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422d9f: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422da5: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00422da9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00422dac: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422db2: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00422db6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00422db8: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00422dbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422dc0u); call_ind(t); }
    /* 00422dc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00422dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422dc4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422dc9u); f_005dcb00();
    /* 00422dc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422dcc: mov ecx, eax */ r_ecx = r_eax;
    /* 00422dce: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x422dd3u); f_005d5a50();
    /* 00422dd3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00422dd6: jle 0x422e05 */ if ((fZ||fS!=fO)) goto L_00422e05;
L_00422dd8:; BB(0x00422dd8);
    /* 00422dd8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00422dda: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x422ddfu); f_0062fbf0();
    /* 00422ddf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422de2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422de5: jne 0x422e05 */ if (!fZ) goto L_00422e05;
L_00422de7:; BB(0x00422de7);
    /* 00422de7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422dea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422deb: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422df1: call 0x426620 */ r_esp -= 4; W32(r_esp, 0x422df6u); f_00426620();
    /* 00422df6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422df9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422dfa: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00422e00: call 0x41f9c0 */ r_esp -= 4; W32(r_esp, 0x422e05u); f_0041f9c0();
L_00422e05:; BB(0x00422e05);
    /* 00422e05: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422e0b: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x422e10u); f_00426230();
    /* 00422e10: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00422e13: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00422e16: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00422e1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422e1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422e21: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00422e27: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422e2a: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422e30: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00422e33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422e35: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422e38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422e3au); call_ind(t); }
    /* 00422e3a: jmp 0x422e95 */ goto L_00422e95;
L_00422e3c:; BB(0x00422e3c);
    /* 00422e3c: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422e42: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x422e47u); f_005da7b0();
    /* 00422e47: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422e4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422e4c: je 0x422e69 */ if (fZ) goto L_00422e69;
L_00422e4e:; BB(0x00422e4e);
    /* 00422e4e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422e51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422e52: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422e57u); f_005dcb00();
    /* 00422e57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422e5a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00422e5d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00422e60: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
    /* 00422e67: jmp 0x422e78 */ goto L_00422e78;
L_00422e69:; BB(0x00422e69);
    /* 00422e69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00422e6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422e6d: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422e73: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x422e78u); f_005d9570();
L_00422e78:; BB(0x00422e78);
    /* 00422e78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422e7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00422e7c: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00422e82: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00422e85: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00422e8b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00422e8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422e90: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00422e93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x422e95u); call_ind(t); }
L_00422e95:; BB(0x00422e95);
    /* 00422e95: mov esp, ebp */ r_esp = r_ebp;
    /* 00422e97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422e98: ret 4 */ FN_RET(0x00422c00); r_esp += 8; return;
}

void f_00422ea0(void) /* sub_422EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422ea0);
    /* 00422ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00422ea3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422ea6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00422ea9: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00422ead: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422eb1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x422eb6u); f_005dcb00();
    /* 00422eb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00422eb9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00422ebc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422ebf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422ec4u); f_0063aac0();
    /* 00422ec4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00422ec6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00422ec9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ecd: je 0x422eeb */ if (fZ) goto L_00422eeb;
L_00422ecf:; BB(0x00422ecf);
    /* 00422ecf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00422ed2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x422ed7u); f_0063aac0();
    /* 00422ed7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00422ed9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00422edc: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ee0: je 0x422eeb */ if (fZ) goto L_00422eeb;
L_00422ee2:; BB(0x00422ee2);
    /* 00422ee2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00422ee9: jmp 0x422ef2 */ goto L_00422ef2;
L_00422eeb:; BB(0x00422eeb);
    /* 00422eeb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00422ef2:; BB(0x00422ef2);
    /* 00422ef2: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00422ef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422ef8: je 0x422f66 */ if (fZ) goto L_00422f66;
L_00422efa:; BB(0x00422efa);
    /* 00422efa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00422efc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00422f02: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x422f07u); f_005df700();
    /* 00422f07: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00422f0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422f0c: je 0x422f31 */ if (fZ) goto L_00422f31;
L_00422f0e:; BB(0x00422f0e);
    /* 00422f0e: push 0x70e6f0 */ { u32 v = 0x70e6f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422f13: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00422f15: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00422f1b: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x422f20u); f_0057ab80();
    /* 00422f20: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422f23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422f24: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422f2a: call 0x4276f0 */ r_esp -= 4; W32(r_esp, 0x422f2fu); f_004276f0();
    /* 00422f2f: jmp 0x422f3c */ goto L_00422f3c;
L_00422f31:; BB(0x00422f31);
    /* 00422f31: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00422f37: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x422f3cu); f_0057ae30();
L_00422f3c:; BB(0x00422f3c);
    /* 00422f3c: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00422f41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00422f44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00422f47: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00422f4a: mov byte ptr [ecx + 0xa9], 1 */ W8((u32)(r_ecx+0xa9u), 0x1u);
    /* 00422f51: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00422f57: call 0x41fb60 */ r_esp -= 4; W32(r_esp, 0x422f5cu); f_0041fb60();
    /* 00422f5c: jmp 0x423026 */ goto L_00423026;
L_00422f66:; BB(0x00422f66);
    /* 00422f66: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00422f6c: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x422f71u); f_0057ae30();
    /* 00422f71: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422f74: movzx eax, byte ptr [edx + 7] */ r_eax = (u32)R8((u32)(r_edx+0x7u));
    /* 00422f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00422f7a: jne 0x422fa1 */ if (!fZ) goto L_00422fa1;
L_00422f7c:; BB(0x00422f7c);
    /* 00422f7c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422f7f: mov byte ptr [ecx + 7], 1 */ W8((u32)(r_ecx+0x7u), 0x1u);
    /* 00422f83: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00422f85: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00422f8b: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x422f90u); f_00637810();
    /* 00422f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422f91: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00422f97: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x422f9cu); f_005da360();
    /* 00422f9c: jmp 0x423026 */ goto L_00423026;
L_00422fa1:; BB(0x00422fa1);
    /* 00422fa1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00422fa4: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 00422fa8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00422fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422fac: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00422fb2: call 0x41e290 */ r_esp -= 4; W32(r_esp, 0x422fb7u); f_0041e290();
    /* 00422fb7: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00422fba: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00422fbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422fbe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00422fc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00422fc2: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00422fc8: call 0x426ad0 */ r_esp -= 4; W32(r_esp, 0x422fcdu); f_00426ad0();
    /* 00422fcd: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00422fd2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00422fd5: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00422fd9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00422fdb: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00422fdd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00422fdf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00422fe2: mov dword ptr [edx + 0xe0], ecx */ W32((u32)(r_edx+0xe0u), r_ecx);
    /* 00422fe8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00422feb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00422fee: mov dword ptr [eax + 0xe4], ecx */ W32((u32)(r_eax+0xe4u), r_ecx);
    /* 00422ff4: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00422ffa: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00422ffd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00423000: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00423003: mov byte ptr [eax + 0xa5], 1 */ W8((u32)(r_eax+0xa5u), 0x1u);
    /* 0042300a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042300c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042300e: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00423014: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00423017: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 0042301c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042301f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00423021: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00423024: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423026u); call_ind(t); }
L_00423026:; BB(0x00423026);
    /* 00423026: mov esp, ebp */ r_esp = r_ebp;
    /* 00423028: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423029: ret 4 */ FN_RET(0x00422ea0); r_esp += 8; return;
}

