#include "protos.h"

void f_004182a0(void) /* BlackjackState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004182a0);
    /* 004182a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004182a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004182a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004182a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004182a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004182ac: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x4182b1u); f_005e9e20();
    /* 004182b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004182b4: mov dword ptr [eax], 0x6b4af8 */ W32((u32)(r_eax), 0x6b4af8u);
    /* 004182ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004182bd: mov dword ptr [ecx + 0x464], 0 */ W32((u32)(r_ecx+0x464u), 0x0u);
    /* 004182c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004182ce: jmp 0x4182d9 */ goto L_004182d9;
L_004182d0:; BB(0x004182d0);
    /* 004182d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182d3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004182d6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004182d9:; BB(0x004182d9);
    /* 004182d9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004182dd: jge 0x4182f2 */ if ((fS==fO)) goto L_004182f2;
L_004182df:; BB(0x004182df);
    /* 004182df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004182e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004182e5: mov dword ptr [ecx + eax*4 + 0x468], 0 */ W32((u32)(r_ecx+r_eax*4+0x468u), 0x0u);
    /* 004182f0: jmp 0x4182d0 */ goto L_004182d0;
L_004182f2:; BB(0x004182f2);
    /* 004182f2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004182f5: mov dword ptr [edx + 0x4ec], 0xffffffff */ W32((u32)(r_edx+0x4ecu), 0xffffffffu);
    /* 004182ff: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00418302: mov dword ptr [eax + 0x4f0], 0xffffffff */ W32((u32)(r_eax+0x4f0u), 0xffffffffu);
    /* 0041830c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041830f: mov esp, ebp */ r_esp = r_ebp;
    /* 00418311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00418312: ret  */ FN_RET(0x004182a0); r_esp += 4; return;
}

void f_00418320(void) /* BlackjackState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00418320);
    /* 00418320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00418321: mov ebp, esp */ r_ebp = r_esp;
    /* 00418323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00418325: push 0x69de98 */ { u32 v = 0x69de98u; r_esp -= 4; W32(r_esp, v); }
    /* 0041832a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00418330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00418331: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00418334: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00418339: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041833b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041833c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041833f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00418345: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00418348: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041834b: mov dword ptr [eax], 0x6b4af8 */ W32((u32)(r_eax), 0x6b4af8u);
    /* 00418351: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00418358: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041835b: mov edx, dword ptr [ecx + 0x464] */ r_edx = R32((u32)(r_ecx+0x464u));
    /* 00418361: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00418364: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00418367: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041836a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041836e: je 0x418383 */ if (fZ) goto L_00418383;
L_00418370:; BB(0x00418370);
    /* 00418370: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00418372: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00418375: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00418377: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041837a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041837c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41837eu); call_ind(t); }
    /* 0041837e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00418381: jmp 0x41838a */ goto L_0041838a;
L_00418383:; BB(0x00418383);
    /* 00418383: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0041838a:; BB(0x0041838a);
    /* 0041838a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00418391: jmp 0x41839c */ goto L_0041839c;
L_00418393:; BB(0x00418393);
    /* 00418393: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00418396: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00418399: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0041839c:; BB(0x0041839c);
    /* 0041839c: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004183a0: jge 0x4183da */ if ((fS==fO)) goto L_004183da;
L_004183a2:; BB(0x004183a2);
    /* 004183a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004183a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004183a8: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 004183af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004183b2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004183b5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004183b8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004183bc: je 0x4183d1 */ if (fZ) goto L_004183d1;
L_004183be:; BB(0x004183be);
    /* 004183be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004183c0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004183c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004183c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004183c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004183ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4183ccu); call_ind(t); }
    /* 004183cc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004183cf: jmp 0x4183d8 */ goto L_004183d8;
L_004183d1:; BB(0x004183d1);
    /* 004183d1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004183d8:; BB(0x004183d8);
    /* 004183d8: jmp 0x418393 */ goto L_00418393;
L_004183da:; BB(0x004183da);
    /* 004183da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004183e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004183e4: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x4183e9u); f_005e9e40();
    /* 004183e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004183ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004183f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004183f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004183f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004183f7: ret  */ FN_RET(0x00418320); r_esp += 4; return;
}

void f_0041a960(void) /* blackjackstate::func_0041a960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041a960);
    /* 0041a960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041a961: mov ebp, esp */ r_ebp = r_esp;
    /* 0041a963: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041a966: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0041a969: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a96d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a970: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41a975u); f_004194c0();
    /* 0041a975: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041a978: jle 0x41a9ae */ if ((fZ||fS!=fO)) goto L_0041a9ae;
L_0041a97a:; BB(0x0041a97a);
    /* 0041a97a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a97d: call 0x418650 */ r_esp -= 4; W32(r_esp, 0x41a982u); f_00418650();
    /* 0041a982: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041a985: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a987: je 0x41a9a7 */ if (fZ) goto L_0041a9a7;
L_0041a989:; BB(0x0041a989);
    /* 0041a989: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a98c: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a992: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a995: cmp byte ptr [eax + edx + 0x118], 0 */ {  u32 a = R8((u32)(r_eax+r_edx+0x118u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041a99d: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041a9a0: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041a9a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9a5: je 0x41a9ae */ if (fZ) goto L_0041a9ae;
L_0041a9a7:; BB(0x0041a9a7);
    /* 0041a9a7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041a9a9: jmp 0x41adc2 */ goto L_0041adc2;
L_0041a9ae:; BB(0x0041a9ae);
    /* 0041a9ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041a9b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a9b2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a9b5: call 0x41af20 */ r_esp -= 4; W32(r_esp, 0x41a9bau); f_0041af20();
    /* 0041a9ba: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0041a9bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9bf: je 0x41aa11 */ if (fZ) goto L_0041aa11;
L_0041a9c1:; BB(0x0041a9c1);
    /* 0041a9c1: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9c5: jne 0x41a9d0 */ if (!fZ) goto L_0041a9d0;
L_0041a9c7:; BB(0x0041a9c7);
    /* 0041a9c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041a9ce: jmp 0x41a9fc */ goto L_0041a9fc;
L_0041a9d0:; BB(0x0041a9d0);
    /* 0041a9d0: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a9d4: jne 0x41a9df */ if (!fZ) goto L_0041a9df;
L_0041a9d6:; BB(0x0041a9d6);
    /* 0041a9d6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0041a9dd: jmp 0x41a9f6 */ goto L_0041a9f6;
L_0041a9df:; BB(0x0041a9df);
    /* 0041a9df: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041a9e2: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041a9e8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a9eb: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041a9f3: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0041a9f6:; BB(0x0041a9f6);
    /* 0041a9f6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041a9f9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0041a9fc:; BB(0x0041a9fc);
    /* 0041a9fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041a9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041aa00: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041aa03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aa04: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aa07: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41aa0cu); f_00419530();
    /* 0041aa0c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041aa0f: jle 0x41aa18 */ if ((fZ||fS!=fO)) goto L_0041aa18;
L_0041aa11:; BB(0x0041aa11);
    /* 0041aa11: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041aa13: jmp 0x41adc2 */ goto L_0041adc2;
L_0041aa18:; BB(0x0041aa18);
    /* 0041aa18: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aa1b: call 0x4186d0 */ r_esp -= 4; W32(r_esp, 0x41aa20u); f_004186d0();
    /* 0041aa20: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0041aa23: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0041aa26: cmp dword ptr [ebp - 0x38], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041aa2a: ja 0x41ada5 */ if ((!fC&&!fZ)) goto L_0041ada5;
L_0041aa30:; BB(0x0041aa30);
    /* 0041aa30: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0041aa33: jmp dword ptr [eax*4 + 0x41adc8] */ { u32 t = R32((u32)(r_eax*4+0x41adc8u)); switch (t) { case 0x41aa41u: goto L_0041aa41; case 0x41aa9bu: goto L_0041aa9b; case 0x41aba7u: goto L_0041aba7; case 0x41ad58u: goto L_0041ad58; case 0x41aa3au: goto L_0041aa3a; default: UNSUP(0x0041aa33, "jump table entry is not a known target"); } }
L_0041aa3a:; BB(0x0041aa3a);
    /* 0041aa3a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0041aa3c: jmp 0x41adc2 */ goto L_0041adc2;
L_0041aa41:; BB(0x0041aa41);
    /* 0041aa41: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa45: jne 0x41aa50 */ if (!fZ) goto L_0041aa50;
L_0041aa47:; BB(0x0041aa47);
    /* 0041aa47: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0041aa4e: jmp 0x41aa7c */ goto L_0041aa7c;
L_0041aa50:; BB(0x0041aa50);
    /* 0041aa50: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa54: jne 0x41aa5f */ if (!fZ) goto L_0041aa5f;
L_0041aa56:; BB(0x0041aa56);
    /* 0041aa56: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0041aa5d: jmp 0x41aa76 */ goto L_0041aa76;
L_0041aa5f:; BB(0x0041aa5f);
    /* 0041aa5f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041aa62: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041aa68: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aa6b: movsx eax, byte ptr [edx + ecx + 0x119] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x119u));
    /* 0041aa73: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0041aa76:; BB(0x0041aa76);
    /* 0041aa76: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041aa79: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0041aa7c:; BB(0x0041aa7c);
    /* 0041aa7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041aa7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aa80: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041aa83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041aa84: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aa87: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41aa8cu); f_004197d0();
    /* 0041aa8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041aa8e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa91: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0041aa94: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0041aa96: jmp 0x41adc2 */ goto L_0041adc2;
L_0041aa9b:; BB(0x0041aa9b);
    /* 0041aa9b: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aa9f: jne 0x41aaaa */ if (!fZ) goto L_0041aaaa;
L_0041aaa1:; BB(0x0041aaa1);
    /* 0041aaa1: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0041aaa8: jmp 0x41aad6 */ goto L_0041aad6;
L_0041aaaa:; BB(0x0041aaaa);
    /* 0041aaaa: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aaae: jne 0x41aab9 */ if (!fZ) goto L_0041aab9;
L_0041aab0:; BB(0x0041aab0);
    /* 0041aab0: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0041aab7: jmp 0x41aad0 */ goto L_0041aad0;
L_0041aab9:; BB(0x0041aab9);
    /* 0041aab9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041aabc: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041aac2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aac5: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041aacd: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_0041aad0:; BB(0x0041aad0);
    /* 0041aad0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041aad3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0041aad6:; BB(0x0041aad6);
    /* 0041aad6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041aad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041aada: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041aadd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041aade: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041aae1: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41aae6u); f_004197d0();
    /* 0041aae6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aae9: je 0x41ab98 */ if (fZ) goto L_0041ab98;
L_0041aaef:; BB(0x0041aaef);
    /* 0041aaef: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aaf3: jne 0x41aafe */ if (!fZ) goto L_0041aafe;
L_0041aaf5:; BB(0x0041aaf5);
    /* 0041aaf5: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0041aafc: jmp 0x41ab2a */ goto L_0041ab2a;
L_0041aafe:; BB(0x0041aafe);
    /* 0041aafe: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ab02: jne 0x41ab0d */ if (!fZ) goto L_0041ab0d;
L_0041ab04:; BB(0x0041ab04);
    /* 0041ab04: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0041ab0b: jmp 0x41ab24 */ goto L_0041ab24;
L_0041ab0d:; BB(0x0041ab0d);
    /* 0041ab0d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ab10: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ab16: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ab19: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041ab21: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
L_0041ab24:; BB(0x0041ab24);
    /* 0041ab24: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041ab27: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0041ab2a:; BB(0x0041ab2a);
    /* 0041ab2a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ab2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ab2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ab31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ab32: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ab35: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41ab3au); f_004197d0();
    /* 0041ab3a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ab3d: je 0x41ab98 */ if (fZ) goto L_0041ab98;
L_0041ab3f:; BB(0x0041ab3f);
    /* 0041ab3f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ab43: jne 0x41ab4e */ if (!fZ) goto L_0041ab4e;
L_0041ab45:; BB(0x0041ab45);
    /* 0041ab45: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 0041ab4c: jmp 0x41ab7a */ goto L_0041ab7a;
L_0041ab4e:; BB(0x0041ab4e);
    /* 0041ab4e: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ab52: jne 0x41ab5d */ if (!fZ) goto L_0041ab5d;
L_0041ab54:; BB(0x0041ab54);
    /* 0041ab54: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0041ab5b: jmp 0x41ab74 */ goto L_0041ab74;
L_0041ab5d:; BB(0x0041ab5d);
    /* 0041ab5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ab60: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ab66: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ab69: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041ab71: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_0041ab74:; BB(0x0041ab74);
    /* 0041ab74: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041ab77: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0041ab7a:; BB(0x0041ab7a);
    /* 0041ab7a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041ab7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ab7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ab81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ab82: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ab85: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41ab8au); f_004198d0();
    /* 0041ab8a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ab8d: je 0x41ab98 */ if (fZ) goto L_0041ab98;
L_0041ab8f:; BB(0x0041ab8f);
    /* 0041ab8f: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0041ab96: jmp 0x41ab9f */ goto L_0041ab9f;
L_0041ab98:; BB(0x0041ab98);
    /* 0041ab98: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_0041ab9f:; BB(0x0041ab9f);
    /* 0041ab9f: mov al, byte ptr [ebp - 0x4c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb4u))) & 0xffu);
    /* 0041aba2: jmp 0x41adc2 */ goto L_0041adc2;
L_0041aba7:; BB(0x0041aba7);
    /* 0041aba7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041abab: jne 0x41abb6 */ if (!fZ) goto L_0041abb6;
L_0041abad:; BB(0x0041abad);
    /* 0041abad: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 0041abb4: jmp 0x41abe2 */ goto L_0041abe2;
L_0041abb6:; BB(0x0041abb6);
    /* 0041abb6: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041abba: jne 0x41abc5 */ if (!fZ) goto L_0041abc5;
L_0041abbc:; BB(0x0041abbc);
    /* 0041abbc: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0041abc3: jmp 0x41abdc */ goto L_0041abdc;
L_0041abc5:; BB(0x0041abc5);
    /* 0041abc5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041abc8: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041abce: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041abd1: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041abd9: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_0041abdc:; BB(0x0041abdc);
    /* 0041abdc: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0041abdf: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0041abe2:; BB(0x0041abe2);
    /* 0041abe2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041abe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041abe6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041abe9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041abea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041abed: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41abf2u); f_004197d0();
    /* 0041abf2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041abf5: je 0x41ad4c */ if (fZ) goto L_0041ad4c;
L_0041abfb:; BB(0x0041abfb);
    /* 0041abfb: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041abff: jne 0x41ac0a */ if (!fZ) goto L_0041ac0a;
L_0041ac01:; BB(0x0041ac01);
    /* 0041ac01: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0041ac08: jmp 0x41ac36 */ goto L_0041ac36;
L_0041ac0a:; BB(0x0041ac0a);
    /* 0041ac0a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac0e: jne 0x41ac19 */ if (!fZ) goto L_0041ac19;
L_0041ac10:; BB(0x0041ac10);
    /* 0041ac10: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0041ac17: jmp 0x41ac30 */ goto L_0041ac30;
L_0041ac19:; BB(0x0041ac19);
    /* 0041ac19: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ac1c: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ac22: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ac25: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041ac2d: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_0041ac30:; BB(0x0041ac30);
    /* 0041ac30: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0041ac33: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0041ac36:; BB(0x0041ac36);
    /* 0041ac36: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ac39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ac3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ac3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ac3e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ac41: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41ac46u); f_004197d0();
    /* 0041ac46: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac49: je 0x41ad4c */ if (fZ) goto L_0041ad4c;
L_0041ac4f:; BB(0x0041ac4f);
    /* 0041ac4f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac53: jne 0x41ac5e */ if (!fZ) goto L_0041ac5e;
L_0041ac55:; BB(0x0041ac55);
    /* 0041ac55: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0041ac5c: jmp 0x41ac8a */ goto L_0041ac8a;
L_0041ac5e:; BB(0x0041ac5e);
    /* 0041ac5e: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac62: jne 0x41ac6d */ if (!fZ) goto L_0041ac6d;
L_0041ac64:; BB(0x0041ac64);
    /* 0041ac64: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0041ac6b: jmp 0x41ac84 */ goto L_0041ac84;
L_0041ac6d:; BB(0x0041ac6d);
    /* 0041ac6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ac70: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ac76: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ac79: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041ac81: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_0041ac84:; BB(0x0041ac84);
    /* 0041ac84: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0041ac87: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0041ac8a:; BB(0x0041ac8a);
    /* 0041ac8a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041ac8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ac8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ac91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ac92: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ac95: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x41ac9au); f_004197d0();
    /* 0041ac9a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ac9d: je 0x41ad4c */ if (fZ) goto L_0041ad4c;
L_0041aca3:; BB(0x0041aca3);
    /* 0041aca3: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041aca7: jne 0x41acb2 */ if (!fZ) goto L_0041acb2;
L_0041aca9:; BB(0x0041aca9);
    /* 0041aca9: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0041acb0: jmp 0x41acde */ goto L_0041acde;
L_0041acb2:; BB(0x0041acb2);
    /* 0041acb2: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041acb6: jne 0x41acc1 */ if (!fZ) goto L_0041acc1;
L_0041acb8:; BB(0x0041acb8);
    /* 0041acb8: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0041acbf: jmp 0x41acd8 */ goto L_0041acd8;
L_0041acc1:; BB(0x0041acc1);
    /* 0041acc1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041acc4: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041acca: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041accd: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041acd5: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
L_0041acd8:; BB(0x0041acd8);
    /* 0041acd8: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0041acdb: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_0041acde:; BB(0x0041acde);
    /* 0041acde: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041ace1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ace2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ace5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ace6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ace9: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41aceeu); f_004198d0();
    /* 0041acee: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041acf1: je 0x41ad4c */ if (fZ) goto L_0041ad4c;
L_0041acf3:; BB(0x0041acf3);
    /* 0041acf3: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041acf7: jne 0x41ad02 */ if (!fZ) goto L_0041ad02;
L_0041acf9:; BB(0x0041acf9);
    /* 0041acf9: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 0041ad00: jmp 0x41ad2e */ goto L_0041ad2e;
L_0041ad02:; BB(0x0041ad02);
    /* 0041ad02: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ad06: jne 0x41ad11 */ if (!fZ) goto L_0041ad11;
L_0041ad08:; BB(0x0041ad08);
    /* 0041ad08: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0041ad0f: jmp 0x41ad28 */ goto L_0041ad28;
L_0041ad11:; BB(0x0041ad11);
    /* 0041ad11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ad14: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ad1a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ad1d: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041ad25: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
L_0041ad28:; BB(0x0041ad28);
    /* 0041ad28: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0041ad2b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0041ad2e:; BB(0x0041ad2e);
    /* 0041ad2e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041ad31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ad32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ad35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ad36: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ad39: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41ad3eu); f_004198d0();
    /* 0041ad3e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ad41: je 0x41ad4c */ if (fZ) goto L_0041ad4c;
L_0041ad43:; BB(0x0041ad43);
    /* 0041ad43: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0041ad4a: jmp 0x41ad53 */ goto L_0041ad53;
L_0041ad4c:; BB(0x0041ad4c);
    /* 0041ad4c: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
L_0041ad53:; BB(0x0041ad53);
    /* 0041ad53: mov al, byte ptr [ebp - 0x64] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff9cu))) & 0xffu);
    /* 0041ad56: jmp 0x41adc2 */ goto L_0041adc2;
L_0041ad58:; BB(0x0041ad58);
    /* 0041ad58: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ad5c: jne 0x41ad67 */ if (!fZ) goto L_0041ad67;
L_0041ad5e:; BB(0x0041ad5e);
    /* 0041ad5e: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 0041ad65: jmp 0x41ad93 */ goto L_0041ad93;
L_0041ad67:; BB(0x0041ad67);
    /* 0041ad67: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ad6b: jne 0x41ad76 */ if (!fZ) goto L_0041ad76;
L_0041ad6d:; BB(0x0041ad6d);
    /* 0041ad6d: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0041ad74: jmp 0x41ad8d */ goto L_0041ad8d;
L_0041ad76:; BB(0x0041ad76);
    /* 0041ad76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ad79: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ad7f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ad82: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041ad8a: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
L_0041ad8d:; BB(0x0041ad8d);
    /* 0041ad8d: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0041ad90: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0041ad93:; BB(0x0041ad93);
    /* 0041ad93: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041ad96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ad97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ad9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ad9b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041ad9e: call 0x41af80 */ r_esp -= 4; W32(r_esp, 0x41ada3u); f_0041af80();
    /* 0041ada3: jmp 0x41adc2 */ goto L_0041adc2;
L_0041ada5:; BB(0x0041ada5);
    /* 0041ada5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0041ada7: jne 0x41adc0 */ if (!fZ) goto L_0041adc0;
L_0041ada9:; BB(0x0041ada9);
    /* 0041ada9: push 0x432 */ { u32 v = 0x432u; r_esp -= 4; W32(r_esp, v); }
    /* 0041adae: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041adb3: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041adb8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41adbdu); f_005e9f20();
    /* 0041adbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041adc0:; BB(0x0041adc0);
    /* 0041adc0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0041adc2:; BB(0x0041adc2);
    /* 0041adc2: mov esp, ebp */ r_esp = r_ebp;
    /* 0041adc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041adc5: ret 4 */ FN_RET(0x0041a960); r_esp += 8; return;
}

void f_0041ba00(void) /* blackjackstate::func_0041ba00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041ba00);
    /* 0041ba00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba01: mov ebp, esp */ r_ebp = r_esp;
    /* 0041ba03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041ba06: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0041ba09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba0b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba0d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ba10: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41ba15u); f_00419980();
    /* 0041ba15: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041ba18: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041ba1f: jmp 0x41ba2a */ goto L_0041ba2a;
L_0041ba21:; BB(0x0041ba21);
    /* 0041ba21: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041ba24: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041ba27: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0041ba2a:; BB(0x0041ba2a);
    /* 0041ba2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ba2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ba31: call 0x4194c0 */ r_esp -= 4; W32(r_esp, 0x41ba36u); f_004194c0();
    /* 0041ba36: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ba39: jge 0x41bb81 */ if ((fS==fO)) goto L_0041bb81;
L_0041ba3f:; BB(0x0041ba3f);
    /* 0041ba3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041ba42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ba46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba47: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ba4a: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41ba4fu); f_00419530();
    /* 0041ba4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ba52: jg 0x41ba6b */ if ((!fZ&&fS==fO)) goto L_0041ba6b;
L_0041ba54:; BB(0x0041ba54);
    /* 0041ba54: push 0x547 */ { u32 v = 0x547u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba59: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba5e: push 0x6b4b50 */ { u32 v = 0x6b4b50u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba63: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41ba68u); f_005e9f20();
    /* 0041ba68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ba6b:; BB(0x0041ba6b);
    /* 0041ba6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041ba6e: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041ba74: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041ba77: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ba7a: movsx ecx, byte ptr [eax + edx + 0x110] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x110u));
    /* 0041ba82: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ba85: jne 0x41bb7c */ if (!fZ) goto L_0041bb7c;
L_0041ba8b:; BB(0x0041ba8b);
    /* 0041ba8b: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ba8f: jg 0x41baa6 */ if ((!fZ&&fS==fO)) goto L_0041baa6;
L_0041ba91:; BB(0x0041ba91);
    /* 0041ba91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041ba94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba95: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ba98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ba99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041ba9c: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41baa1u); f_00419980();
    /* 0041baa1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041baa4: jge 0x41baeb */ if ((fS==fO)) goto L_0041baeb;
L_0041baa6:; BB(0x0041baa6);
    /* 0041baa6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041baa8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041baaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041baac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041baaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bab0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bab3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bab4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bab7: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41babcu); f_0041bba0();
    /* 0041babc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041babe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041bac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bac2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041bac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bac6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bac9: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41baceu); f_004191f0();
    /* 0041bace: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bad1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bad2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41bad7u); f_005dcb00();
    /* 0041bad7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bada: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 0041bae1: jmp 0x41bb9a */ goto L_0041bb9a;
L_0041baeb:; BB(0x0041baeb);
    /* 0041baeb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041baee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041baef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041baf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041baf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041baf6: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41bafbu); f_00419980();
    /* 0041bafb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041bafe: jne 0x41bb3f */ if (!fZ) goto L_0041bb3f;
L_0041bb00:; BB(0x0041bb00);
    /* 0041bb00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb04: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb06: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041bb09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb0a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041bb0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bb11: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41bb16u); f_0041bba0();
    /* 0041bb16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041bb1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb1c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bb1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bb23: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41bb28u); f_004191f0();
    /* 0041bb28: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041bb2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb2c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41bb31u); f_005dcb00();
    /* 0041bb31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bb34: mov byte ptr [eax + 0x4b0], 0 */ W8((u32)(r_eax+0x4b0u), 0x0u);
    /* 0041bb3b: jmp 0x41bb9a */ goto L_0041bb9a;
L_0041bb3f:; BB(0x0041bb3f);
    /* 0041bb3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041bb48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb49: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bb4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb4d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bb50: call 0x41bba0 */ r_esp -= 4; W32(r_esp, 0x41bb55u); f_0041bba0();
    /* 0041bb55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb57: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041bb5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041bb5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041bb62: call 0x4191f0 */ r_esp -= 4; W32(r_esp, 0x41bb67u); f_004191f0();
    /* 0041bb67: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041bb6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb6b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41bb70u); f_005dcb00();
    /* 0041bb70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bb73: mov byte ptr [eax + 0x4b0], 1 */ W8((u32)(r_eax+0x4b0u), 0x1u);
    /* 0041bb7a: jmp 0x41bb9a */ goto L_0041bb9a;
L_0041bb7c:; BB(0x0041bb7c);
    /* 0041bb7c: jmp 0x41ba21 */ goto L_0041ba21;
L_0041bb81:; BB(0x0041bb81);
    /* 0041bb81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041bb84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041bb85: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41bb8au); f_005dcb00();
    /* 0041bb8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041bb8d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041bb90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041bb93: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
L_0041bb9a:; BB(0x0041bb9a);
    /* 0041bb9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041bb9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041bb9d: ret 4 */ FN_RET(0x0041ba00); r_esp += 8; return;
}

void f_0041c0a0(void) /* blackjackstate::func_0041c0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041c0a0);
    /* 0041c0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041c0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041c0a3: sub esp, 0x674 */ {  u32 a = r_esp; u32 b = 0x674u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041c0a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041c0ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041c0b0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041c0b3: mov dword ptr [ebp - 0x66c], ecx */ W32((u32)(r_ebp+0xfffff994u), r_ecx);
    /* 0041c0b9: mov eax, dword ptr [ebp - 0x66c] */ r_eax = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c0bf: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0041c0c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041c0c8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c0cc: jne 0x41c0d7 */ if (!fZ) goto L_0041c0d7;
L_0041c0ce:; BB(0x0041c0ce);
    /* 0041c0ce: mov dword ptr [ebp - 0x3c], 0xffffffff */ W32((u32)(r_ebp+0xffffffc4u), 0xffffffffu);
    /* 0041c0d5: jmp 0x41c10f */ goto L_0041c10f;
L_0041c0d7:; BB(0x0041c0d7);
    /* 0041c0d7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c0db: jne 0x41c0e9 */ if (!fZ) goto L_0041c0e9;
L_0041c0dd:; BB(0x0041c0dd);
    /* 0041c0dd: mov dword ptr [ebp - 0x670], 0 */ W32((u32)(r_ebp+0xfffff990u), 0x0u);
    /* 0041c0e7: jmp 0x41c106 */ goto L_0041c106;
L_0041c0e9:; BB(0x0041c0e9);
    /* 0041c0e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041c0ec: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041c0f2: mov eax, dword ptr [ebp - 0x66c] */ r_eax = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c0f8: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041c100: mov dword ptr [ebp - 0x670], ecx */ W32((u32)(r_ebp+0xfffff990u), r_ecx);
L_0041c106:; BB(0x0041c106);
    /* 0041c106: mov edx, dword ptr [ebp - 0x670] */ r_edx = R32((u32)(r_ebp+0xfffff990u));
    /* 0041c10c: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_0041c10f:; BB(0x0041c10f);
    /* 0041c10f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041c112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c113: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041c116: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c117: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c11d: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41c122u); f_00419980();
    /* 0041c122: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0041c126: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c128: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c12a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c12c: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c132: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x41c137u); f_00419780();
    /* 0041c137: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 0041c13b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041c13e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c13f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041c142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c143: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c149: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41c14eu); f_004198d0();
    /* 0041c14e: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c152: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0041c154: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c156: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041c159: mov byte ptr [ebp - 0x31], dl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_edx);
    /* 0041c15c: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c160: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c163: jne 0x41c16b */ if (!fZ) goto L_0041c16b;
L_0041c165:; BB(0x0041c165);
    /* 0041c165: mov word ptr [ebp - 0x38], 0xb */ W16((u32)(r_ebp+0xffffffc8u), 0xbu);
L_0041c16b:; BB(0x0041c16b);
    /* 0041c16b: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c16f: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c172: jge 0x41c186 */ if ((fS==fO)) goto L_0041c186;
L_0041c174:; BB(0x0041c174);
    /* 0041c174: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c178: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c17b: je 0x41c186 */ if (fZ) goto L_0041c186;
L_0041c17d:; BB(0x0041c17d);
    /* 0041c17d: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c181: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c184: jne 0x41c1a8 */ if (!fZ) goto L_0041c1a8;
L_0041c186:; BB(0x0041c186);
    /* 0041c186: push 0x6b4ed8 */ { u32 v = 0x6b4ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c18b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c190u); f_00630f40();
    /* 0041c190: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c194: lea ecx, [ebp - 0x660] */ r_ecx = (u32)(r_ebp+0xfffff9a0u);
    /* 0041c19a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c19b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c1a0u); f_00686d8e();
    /* 0041c1a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c1a3: jmp 0x41c2ad */ goto L_0041c2ad;
L_0041c1a8:; BB(0x0041c1a8);
    /* 0041c1a8: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c1ac: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c1af: jge 0x41c1dd */ if ((fS==fO)) goto L_0041c1dd;
L_0041c1b1:; BB(0x0041c1b1);
    /* 0041c1b1: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c1b5: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c1b8: je 0x41c1dd */ if (fZ) goto L_0041c1dd;
L_0041c1ba:; BB(0x0041c1ba);
    /* 0041c1ba: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c1be: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c1c1: je 0x41c1dd */ if (fZ) goto L_0041c1dd;
L_0041c1c3:; BB(0x0041c1c3);
    /* 0041c1c3: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c1c7: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c1ca: jl 0x41c1ff */ if ((fS!=fO)) goto L_0041c1ff;
L_0041c1cc:; BB(0x0041c1cc);
    /* 0041c1cc: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c1d0: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c1d3: jg 0x41c1ff */ if ((!fZ&&fS==fO)) goto L_0041c1ff;
L_0041c1d5:; BB(0x0041c1d5);
    /* 0041c1d5: movzx ecx, byte ptr [ebp - 0x31] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 0041c1d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c1db: je 0x41c1ff */ if (fZ) goto L_0041c1ff;
L_0041c1dd:; BB(0x0041c1dd);
    /* 0041c1dd: push 0x6b4ec0 */ { u32 v = 0x6b4ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c1e2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c1e7u); f_00630f40();
    /* 0041c1e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c1ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c1eb: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 0041c1f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c1f2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c1f7u); f_00686d8e();
    /* 0041c1f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c1fa: jmp 0x41c2ad */ goto L_0041c2ad;
L_0041c1ff:; BB(0x0041c1ff);
    /* 0041c1ff: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c203: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c206: je 0x41c21a */ if (fZ) goto L_0041c21a;
L_0041c208:; BB(0x0041c208);
    /* 0041c208: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c20c: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c20f: je 0x41c21a */ if (fZ) goto L_0041c21a;
L_0041c211:; BB(0x0041c211);
    /* 0041c211: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c215: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c218: jne 0x41c239 */ if (!fZ) goto L_0041c239;
L_0041c21a:; BB(0x0041c21a);
    /* 0041c21a: push 0x6b4ea8 */ { u32 v = 0x6b4ea8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c21f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c224u); f_00630f40();
    /* 0041c224: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c228: lea eax, [ebp - 0x660] */ r_eax = (u32)(r_ebp+0xfffff9a0u);
    /* 0041c22e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c22f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c234u); f_00686d8e();
    /* 0041c234: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c237: jmp 0x41c2ad */ goto L_0041c2ad;
L_0041c239:; BB(0x0041c239);
    /* 0041c239: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c23d: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c240: jg 0x41c261 */ if ((!fZ&&fS==fO)) goto L_0041c261;
L_0041c242:; BB(0x0041c242);
    /* 0041c242: push 0x6b4e94 */ { u32 v = 0x6b4e94u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c247: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c24cu); f_00630f40();
    /* 0041c24c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c24f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c250: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 0041c256: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c257: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c25cu); f_00686d8e();
    /* 0041c25c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c25f: jmp 0x41c2ad */ goto L_0041c2ad;
L_0041c261:; BB(0x0041c261);
    /* 0041c261: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c265: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c268: jl 0x41c292 */ if ((fS!=fO)) goto L_0041c292;
L_0041c26a:; BB(0x0041c26a);
    /* 0041c26a: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c26e: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c271: jg 0x41c292 */ if ((!fZ&&fS==fO)) goto L_0041c292;
L_0041c273:; BB(0x0041c273);
    /* 0041c273: push 0x6b4e7c */ { u32 v = 0x6b4e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c278: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c27du); f_00630f40();
    /* 0041c27d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c281: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 0041c287: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c288: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c28du); f_00686d8e();
    /* 0041c28d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c290: jmp 0x41c2ad */ goto L_0041c2ad;
L_0041c292:; BB(0x0041c292);
    /* 0041c292: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041c294: jne 0x41c2ad */ if (!fZ) goto L_0041c2ad;
L_0041c296:; BB(0x0041c296);
    /* 0041c296: push 0x5d6 */ { u32 v = 0x5d6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c29b: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2a0: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2a5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41c2aau); f_005e9f20();
    /* 0041c2aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c2ad:; BB(0x0041c2ad);
    /* 0041c2ad: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c2b1: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c2b4: jl 0x41c2d5 */ if ((fS!=fO)) goto L_0041c2d5;
L_0041c2b6:; BB(0x0041c2b6);
    /* 0041c2b6: push 0x6b4ed8 */ { u32 v = 0x6b4ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c2c0u); f_00630f40();
    /* 0041c2c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c2c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2c4: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0041c2c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2c8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c2cdu); f_00686d8e();
    /* 0041c2cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c2d0: jmp 0x41c3ab */ goto L_0041c3ab;
L_0041c2d5:; BB(0x0041c2d5);
    /* 0041c2d5: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c2d9: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c2dc: je 0x41c2e7 */ if (fZ) goto L_0041c2e7;
L_0041c2de:; BB(0x0041c2de);
    /* 0041c2de: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c2e2: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c2e5: jne 0x41c306 */ if (!fZ) goto L_0041c306;
L_0041c2e7:; BB(0x0041c2e7);
    /* 0041c2e7: push 0x6b4ec0 */ { u32 v = 0x6b4ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c2f1u); f_00630f40();
    /* 0041c2f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c2f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2f5: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0041c2f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c2f9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c2feu); f_00686d8e();
    /* 0041c2fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c301: jmp 0x41c3ab */ goto L_0041c3ab;
L_0041c306:; BB(0x0041c306);
    /* 0041c306: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c30a: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c30d: je 0x41c318 */ if (fZ) goto L_0041c318;
L_0041c30f:; BB(0x0041c30f);
    /* 0041c30f: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c313: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c316: jne 0x41c334 */ if (!fZ) goto L_0041c334;
L_0041c318:; BB(0x0041c318);
    /* 0041c318: push 0x6b4ea8 */ { u32 v = 0x6b4ea8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c31d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c322u); f_00630f40();
    /* 0041c322: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c326: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0041c329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c32a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c32fu); f_00686d8e();
    /* 0041c32f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c332: jmp 0x41c3ab */ goto L_0041c3ab;
L_0041c334:; BB(0x0041c334);
    /* 0041c334: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c338: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c33b: je 0x41c346 */ if (fZ) goto L_0041c346;
L_0041c33d:; BB(0x0041c33d);
    /* 0041c33d: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c341: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c344: jne 0x41c362 */ if (!fZ) goto L_0041c362;
L_0041c346:; BB(0x0041c346);
    /* 0041c346: push 0x6b4e94 */ { u32 v = 0x6b4e94u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c34b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c350u); f_00630f40();
    /* 0041c350: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c354: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0041c357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c358: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c35du); f_00686d8e();
    /* 0041c35d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c360: jmp 0x41c3ab */ goto L_0041c3ab;
L_0041c362:; BB(0x0041c362);
    /* 0041c362: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c366: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c369: je 0x41c374 */ if (fZ) goto L_0041c374;
L_0041c36b:; BB(0x0041c36b);
    /* 0041c36b: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c36f: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c372: jne 0x41c390 */ if (!fZ) goto L_0041c390;
L_0041c374:; BB(0x0041c374);
    /* 0041c374: push 0x6b4e7c */ { u32 v = 0x6b4e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c379: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c37eu); f_00630f40();
    /* 0041c37e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c382: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0041c385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c386: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c38bu); f_00686d8e();
    /* 0041c38b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c38e: jmp 0x41c3ab */ goto L_0041c3ab;
L_0041c390:; BB(0x0041c390);
    /* 0041c390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0041c392: jne 0x41c3ab */ if (!fZ) goto L_0041c3ab;
L_0041c394:; BB(0x0041c394);
    /* 0041c394: push 0x5e3 */ { u32 v = 0x5e3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c399: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c39e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3a3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41c3a8u); f_005e9f20();
    /* 0041c3a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c3ab:; BB(0x0041c3ab);
    /* 0041c3ab: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0041c3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3af: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0041c3b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3b3: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c3b9: call 0x41d3c0 */ r_esp -= 4; W32(r_esp, 0x41c3beu); f_0041d3c0();
    /* 0041c3be: mov dl, byte ptr [ebp - 0x31] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcfu))) & 0xffu);
    /* 0041c3c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3c2: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0041c3c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3c7: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0041c3cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3cc: lea edx, [ebp - 0x650] */ r_edx = (u32)(r_ebp+0xfffff9b0u);
    /* 0041c3d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3d3: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c3d9: call 0x41c540 */ r_esp -= 4; W32(r_esp, 0x41c3deu); f_0041c540();
    /* 0041c3de: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0041c3e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3e3: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0041c3e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3e8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041c3eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3ec: lea eax, [ebp - 0x668] */ r_eax = (u32)(r_ebp+0xfffff998u);
    /* 0041c3f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c3f3: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 0041c3f9: call 0x41d5a0 */ r_esp -= 4; W32(r_esp, 0x41c3feu); f_0041d5a0();
    /* 0041c3fe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0041c400: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0041c403: mov dword ptr [ebp - 0x450], ecx */ W32((u32)(r_ebp+0xfffffbb0u), r_ecx);
    /* 0041c409: mov dword ptr [ebp - 0x44c], edx */ W32((u32)(r_ebp+0xfffffbb4u), r_edx);
    /* 0041c40f: mov eax, dword ptr [ebp - 0x450] */ r_eax = R32((u32)(r_ebp+0xfffffbb0u));
    /* 0041c415: add eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041c418: mov dword ptr [ebp - 0x450], eax */ W32((u32)(r_ebp+0xfffffbb0u), r_eax);
    /* 0041c41e: mov ecx, dword ptr [ebp - 0x44c] */ r_ecx = R32((u32)(r_ebp+0xfffffbb4u));
    /* 0041c424: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041c427: mov dword ptr [ebp - 0x44c], ecx */ W32((u32)(r_ebp+0xfffffbb4u), r_ecx);
    /* 0041c42d: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c431: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c434: jne 0x41c452 */ if (!fZ) goto L_0041c452;
L_0041c436:; BB(0x0041c436);
    /* 0041c436: push 0x6b4e6c */ { u32 v = 0x6b4e6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c43b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c440u); f_00630f40();
    /* 0041c440: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c444: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0041c447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c448: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c44du); f_00686d8e();
    /* 0041c44d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c450: jmp 0x41c469 */ goto L_0041c469;
L_0041c452:; BB(0x0041c452);
    /* 0041c452: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0041c456: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c457: push 0x6b4e68 */ { u32 v = 0x6b4e68u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c45c: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0041c45f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c460: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41c466u); call_ind(t); }
    /* 0041c466: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c469:; BB(0x0041c469);
    /* 0041c469: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 0041c46d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c46f: je 0x41c486 */ if (fZ) goto L_0041c486;
L_0041c471:; BB(0x0041c471);
    /* 0041c471: push 0x6b4e54 */ { u32 v = 0x6b4e54u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c476: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c47bu); f_00630f40();
    /* 0041c47b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c47e: mov dword ptr [ebp - 0x674], eax */ W32((u32)(r_ebp+0xfffff98cu), r_eax);
    /* 0041c484: jmp 0x41c499 */ goto L_0041c499;
L_0041c486:; BB(0x0041c486);
    /* 0041c486: push 0x6b4e40 */ { u32 v = 0x6b4e40u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c48b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c490u); f_00630f40();
    /* 0041c490: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c493: mov dword ptr [ebp - 0x674], eax */ W32((u32)(r_ebp+0xfffff98cu), r_eax);
L_0041c499:; BB(0x0041c499);
    /* 0041c499: lea ecx, [ebp - 0x650] */ r_ecx = (u32)(r_ebp+0xfffff9b0u);
    /* 0041c49f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4a0: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0041c4a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4a4: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0041c4a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4a8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0041c4ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4ac: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 0041c4b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4b3: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0041c4b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4b8: mov ecx, dword ptr [ebp - 0x674] */ r_ecx = R32((u32)(r_ebp+0xfffff98cu));
    /* 0041c4be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4bf: push 0x6b4e1c */ { u32 v = 0x6b4e1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c4c9u); f_00630f40();
    /* 0041c4c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c4cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4cd: lea edx, [ebp - 0x448] */ r_edx = (u32)(r_ebp+0xfffffbb8u);
    /* 0041c4d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4d4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41c4dau); call_ind(t); }
    /* 0041c4da: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c4dd: lea eax, [ebp - 0x448] */ r_eax = (u32)(r_ebp+0xfffffbb8u);
    /* 0041c4e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4e4: push 0x6b4b78 */ { u32 v = 0x6b4b78u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4e9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c4eeu); f_00630f40();
    /* 0041c4ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c4f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c4f4: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0041c4fa: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x41c4ffu); f_0057be80();
    /* 0041c4ff: mov ecx, dword ptr [ebp - 0x44c] */ r_ecx = R32((u32)(r_ebp+0xfffffbb4u));
    /* 0041c505: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c506: mov edx, dword ptr [ebp - 0x450] */ r_edx = R32((u32)(r_ebp+0xfffffbb0u));
    /* 0041c50c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c50d: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c512: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041c515: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c516: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c518: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0041c51e: call 0x57c0b0 */ r_esp -= 4; W32(r_esp, 0x41c523u); f_0057c0b0();
    /* 0041c523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041c526: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041c528: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x41c52du); f_00686d72();
    /* 0041c52d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041c52f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041c530: ret  */ FN_RET(0x0041c0a0); r_esp += 4; return;
}

void f_0041c540(void) /* blackjackstate::func_0041c540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041c540);
    /* 0041c540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041c541: mov ebp, esp */ r_ebp = r_esp;
    /* 0041c543: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041c546: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041c549: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041c54c: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0041c552: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041c555: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c559: jne 0x41c564 */ if (!fZ) goto L_0041c564;
L_0041c55b:; BB(0x0041c55b);
    /* 0041c55b: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0041c562: jmp 0x41c590 */ goto L_0041c590;
L_0041c564:; BB(0x0041c564);
    /* 0041c564: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c568: jne 0x41c573 */ if (!fZ) goto L_0041c573;
L_0041c56a:; BB(0x0041c56a);
    /* 0041c56a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0041c571: jmp 0x41c58a */ goto L_0041c58a;
L_0041c573:; BB(0x0041c573);
    /* 0041c573: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041c576: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041c57c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041c57f: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041c587: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0041c58a:; BB(0x0041c58a);
    /* 0041c58a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041c58d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0041c590:; BB(0x0041c590);
    /* 0041c590: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041c593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c594: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041c597: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c598: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041c59b: call 0x41ade0 */ r_esp -= 4; W32(r_esp, 0x41c5a0u); f_0041ade0();
    /* 0041c5a0: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 0041c5a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041c5a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c5a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041c5aa: call 0x41a960 */ r_esp -= 4; W32(r_esp, 0x41c5afu); f_0041a960();
    /* 0041c5af: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0041c5b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041c5b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c5b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041c5b9: call 0x41aec0 */ r_esp -= 4; W32(r_esp, 0x41c5beu); f_0041aec0();
    /* 0041c5be: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 0041c5c1: movsx ecx, word ptr [ebp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0041c5c5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0041c5c8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041c5cb: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041c5ce: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0041c5d1: cmp dword ptr [ebp - 0x1c], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041c5d5: ja 0x41d34e */ if ((!fC&&!fZ)) goto L_0041d34e;
L_0041c5db:; BB(0x0041c5db);
    /* 0041c5db: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041c5de: jmp dword ptr [eax*4 + 0x41d370] */ { u32 t = R32((u32)(r_eax*4+0x41d370u)); switch (t) { case 0x41c5e5u: goto L_0041c5e5; case 0x41c64du: goto L_0041c64d; case 0x41c66cu: goto L_0041c66c; case 0x41c6d4u: goto L_0041c6d4; case 0x41c6f3u: goto L_0041c6f3; case 0x41c780u: goto L_0041c780; case 0x41c7d5u: goto L_0041c7d5; case 0x41c886u: goto L_0041c886; case 0x41c8eeu: goto L_0041c8ee; case 0x41ca53u: goto L_0041ca53; case 0x41cb59u: goto L_0041cb59; case 0x41cca8u: goto L_0041cca8; case 0x41ce10u: goto L_0041ce10; case 0x41cfd0u: goto L_0041cfd0; case 0x41d085u: goto L_0041d085; case 0x41d28bu: goto L_0041d28b; case 0x41d2ceu: goto L_0041d2ce; case 0x41d332u: goto L_0041d332; default: UNSUP(0x0041c5de, "jump table entry is not a known target"); } }
L_0041c5e5:; BB(0x0041c5e5);
    /* 0041c5e5: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041c5e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c5eb: je 0x41c62e */ if (fZ) goto L_0041c62e;
L_0041c5ed:; BB(0x0041c5ed);
    /* 0041c5ed: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c5f1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c5f4: jge 0x41c612 */ if ((fS==fO)) goto L_0041c612;
L_0041c5f6:; BB(0x0041c5f6);
    /* 0041c5f6: push 0x6b5a04 */ { u32 v = 0x6b5a04u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c5fb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c600u); f_00630f40();
    /* 0041c600: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c604: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c608: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c60du); f_00686d8e();
    /* 0041c60d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c610: jmp 0x41c62c */ goto L_0041c62c;
L_0041c612:; BB(0x0041c612);
    /* 0041c612: push 0x6b59e0 */ { u32 v = 0x6b59e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c617: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c61cu); f_00630f40();
    /* 0041c61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c61f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c620: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c624: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c629u); f_00686d8e();
    /* 0041c629: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c62c:; BB(0x0041c62c);
    /* 0041c62c: jmp 0x41c648 */ goto L_0041c648;
L_0041c62e:; BB(0x0041c62e);
    /* 0041c62e: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c633: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c638u); f_00630f40();
    /* 0041c638: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c63b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c63c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c63f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c640: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c645u); f_00686d8e();
    /* 0041c645: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c648:; BB(0x0041c648);
    /* 0041c648: jmp 0x41d369 */ goto L_0041d369;
L_0041c64d:; BB(0x0041c64d);
    /* 0041c64d: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c652: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c657u); f_00630f40();
    /* 0041c657: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c65b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c65e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c65f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c664u); f_00686d8e();
    /* 0041c664: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c667: jmp 0x41d369 */ goto L_0041d369;
L_0041c66c:; BB(0x0041c66c);
    /* 0041c66c: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041c670: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c672: je 0x41c6b5 */ if (fZ) goto L_0041c6b5;
L_0041c674:; BB(0x0041c674);
    /* 0041c674: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c678: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c67b: jge 0x41c699 */ if ((fS==fO)) goto L_0041c699;
L_0041c67d:; BB(0x0041c67d);
    /* 0041c67d: push 0x6b599c */ { u32 v = 0x6b599cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c682: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c687u); f_00630f40();
    /* 0041c687: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c68a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c68b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c68e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c68f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c694u); f_00686d8e();
    /* 0041c694: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c697: jmp 0x41c6b3 */ goto L_0041c6b3;
L_0041c699:; BB(0x0041c699);
    /* 0041c699: push 0x6b5978 */ { u32 v = 0x6b5978u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c69e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c6a3u); f_00630f40();
    /* 0041c6a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c6a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c6aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6ab: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c6b0u); f_00686d8e();
    /* 0041c6b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c6b3:; BB(0x0041c6b3);
    /* 0041c6b3: jmp 0x41c6cf */ goto L_0041c6cf;
L_0041c6b5:; BB(0x0041c6b5);
    /* 0041c6b5: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c6bfu); f_00630f40();
    /* 0041c6bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c6c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6c3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c6c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6c7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c6ccu); f_00686d8e();
    /* 0041c6cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c6cf:; BB(0x0041c6cf);
    /* 0041c6cf: jmp 0x41d369 */ goto L_0041d369;
L_0041c6d4:; BB(0x0041c6d4);
    /* 0041c6d4: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c6deu); f_00630f40();
    /* 0041c6de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c6e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c6e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c6e6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c6ebu); f_00686d8e();
    /* 0041c6eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c6ee: jmp 0x41d369 */ goto L_0041d369;
L_0041c6f3:; BB(0x0041c6f3);
    /* 0041c6f3: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041c6f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c6f9: je 0x41c761 */ if (fZ) goto L_0041c761;
L_0041c6fb:; BB(0x0041c6fb);
    /* 0041c6fb: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c6ff: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c702: jg 0x41c720 */ if ((!fZ&&fS==fO)) goto L_0041c720;
L_0041c704:; BB(0x0041c704);
    /* 0041c704: push 0x6b5954 */ { u32 v = 0x6b5954u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c709: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c70eu); f_00630f40();
    /* 0041c70e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c712: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c716: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c71bu); f_00686d8e();
    /* 0041c71b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c71e: jmp 0x41c75f */ goto L_0041c75f;
L_0041c720:; BB(0x0041c720);
    /* 0041c720: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c724: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c727: jg 0x41c745 */ if ((!fZ&&fS==fO)) goto L_0041c745;
L_0041c729:; BB(0x0041c729);
    /* 0041c729: push 0x6b592c */ { u32 v = 0x6b592cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c72e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c733u); f_00630f40();
    /* 0041c733: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c737: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c73a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c73b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c740u); f_00686d8e();
    /* 0041c740: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c743: jmp 0x41c75f */ goto L_0041c75f;
L_0041c745:; BB(0x0041c745);
    /* 0041c745: push 0x6b5908 */ { u32 v = 0x6b5908u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c74a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c74fu); f_00630f40();
    /* 0041c74f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c753: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c756: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c757: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c75cu); f_00686d8e();
    /* 0041c75c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c75f:; BB(0x0041c75f);
    /* 0041c75f: jmp 0x41c77b */ goto L_0041c77b;
L_0041c761:; BB(0x0041c761);
    /* 0041c761: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c766: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c76bu); f_00630f40();
    /* 0041c76b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c76e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c76f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c772: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c773: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c778u); f_00686d8e();
    /* 0041c778: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c77b:; BB(0x0041c77b);
    /* 0041c77b: jmp 0x41d369 */ goto L_0041d369;
L_0041c780:; BB(0x0041c780);
    /* 0041c780: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041c784: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c786: je 0x41c7b6 */ if (fZ) goto L_0041c7b6;
L_0041c788:; BB(0x0041c788);
    /* 0041c788: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c78c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c78f: jl 0x41c7b6 */ if ((fS!=fO)) goto L_0041c7b6;
L_0041c791:; BB(0x0041c791);
    /* 0041c791: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c795: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c798: jg 0x41c7b6 */ if ((!fZ&&fS==fO)) goto L_0041c7b6;
L_0041c79a:; BB(0x0041c79a);
    /* 0041c79a: push 0x6b58e4 */ { u32 v = 0x6b58e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c79f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c7a4u); f_00630f40();
    /* 0041c7a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c7a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c7ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7ac: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c7b1u); f_00686d8e();
    /* 0041c7b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c7b4: jmp 0x41c7d0 */ goto L_0041c7d0;
L_0041c7b6:; BB(0x0041c7b6);
    /* 0041c7b6: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c7c0u); f_00630f40();
    /* 0041c7c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c7c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c7c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7c8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c7cdu); f_00686d8e();
    /* 0041c7cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c7d0:; BB(0x0041c7d0);
    /* 0041c7d0: jmp 0x41d369 */ goto L_0041d369;
L_0041c7d5:; BB(0x0041c7d5);
    /* 0041c7d5: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041c7d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c7db: je 0x41c81e */ if (fZ) goto L_0041c81e;
L_0041c7dd:; BB(0x0041c7dd);
    /* 0041c7dd: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c7e1: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c7e4: jg 0x41c802 */ if ((!fZ&&fS==fO)) goto L_0041c802;
L_0041c7e6:; BB(0x0041c7e6);
    /* 0041c7e6: push 0x6b58c4 */ { u32 v = 0x6b58c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c7f0u); f_00630f40();
    /* 0041c7f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c7f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c7f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c7f8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c7fdu); f_00686d8e();
    /* 0041c7fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c800: jmp 0x41c81c */ goto L_0041c81c;
L_0041c802:; BB(0x0041c802);
    /* 0041c802: push 0x6b58a0 */ { u32 v = 0x6b58a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c807: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c80cu); f_00630f40();
    /* 0041c80c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c80f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c810: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c814: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c819u); f_00686d8e();
    /* 0041c819: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c81c:; BB(0x0041c81c);
    /* 0041c81c: jmp 0x41c881 */ goto L_0041c881;
L_0041c81e:; BB(0x0041c81e);
    /* 0041c81e: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041c822: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c824: je 0x41c867 */ if (fZ) goto L_0041c867;
L_0041c826:; BB(0x0041c826);
    /* 0041c826: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c82a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c82d: jg 0x41c84b */ if ((!fZ&&fS==fO)) goto L_0041c84b;
L_0041c82f:; BB(0x0041c82f);
    /* 0041c82f: push 0x6b587c */ { u32 v = 0x6b587cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c834: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c839u); f_00630f40();
    /* 0041c839: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c83d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c840: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c841: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c846u); f_00686d8e();
    /* 0041c846: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c849: jmp 0x41c865 */ goto L_0041c865;
L_0041c84b:; BB(0x0041c84b);
    /* 0041c84b: push 0x6b5854 */ { u32 v = 0x6b5854u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c850: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c855u); f_00630f40();
    /* 0041c855: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c859: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c85c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c85d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c862u); f_00686d8e();
    /* 0041c862: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c865:; BB(0x0041c865);
    /* 0041c865: jmp 0x41c881 */ goto L_0041c881;
L_0041c867:; BB(0x0041c867);
    /* 0041c867: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c86c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c871u); f_00630f40();
    /* 0041c871: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c875: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c879: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c87eu); f_00686d8e();
    /* 0041c87e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c881:; BB(0x0041c881);
    /* 0041c881: jmp 0x41d369 */ goto L_0041d369;
L_0041c886:; BB(0x0041c886);
    /* 0041c886: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041c88a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c88c: je 0x41c8cf */ if (fZ) goto L_0041c8cf;
L_0041c88e:; BB(0x0041c88e);
    /* 0041c88e: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c892: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c895: jg 0x41c8b3 */ if ((!fZ&&fS==fO)) goto L_0041c8b3;
L_0041c897:; BB(0x0041c897);
    /* 0041c897: push 0x6b5830 */ { u32 v = 0x6b5830u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c89c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c8a1u); f_00630f40();
    /* 0041c8a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c8a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c8a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8a9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c8aeu); f_00686d8e();
    /* 0041c8ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c8b1: jmp 0x41c8cd */ goto L_0041c8cd;
L_0041c8b3:; BB(0x0041c8b3);
    /* 0041c8b3: push 0x6b580c */ { u32 v = 0x6b580cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8b8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c8bdu); f_00630f40();
    /* 0041c8bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c8c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8c5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c8cau); f_00686d8e();
    /* 0041c8ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c8cd:; BB(0x0041c8cd);
    /* 0041c8cd: jmp 0x41c8e9 */ goto L_0041c8e9;
L_0041c8cf:; BB(0x0041c8cf);
    /* 0041c8cf: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c8d9u); f_00630f40();
    /* 0041c8d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c8e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c8e1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c8e6u); f_00686d8e();
    /* 0041c8e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c8e9:; BB(0x0041c8e9);
    /* 0041c8e9: jmp 0x41d369 */ goto L_0041d369;
L_0041c8ee:; BB(0x0041c8ee);
    /* 0041c8ee: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041c8f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c8f4: je 0x41c939 */ if (fZ) goto L_0041c939;
L_0041c8f6:; BB(0x0041c8f6);
    /* 0041c8f6: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041c8fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c8fc: je 0x41c91a */ if (fZ) goto L_0041c91a;
L_0041c8fe:; BB(0x0041c8fe);
    /* 0041c8fe: push 0x6b57e8 */ { u32 v = 0x6b57e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c903: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c908u); f_00630f40();
    /* 0041c908: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c90b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c90c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041c90f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c910: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c915u); f_00686d8e();
    /* 0041c915: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c918: jmp 0x41c934 */ goto L_0041c934;
L_0041c91a:; BB(0x0041c91a);
    /* 0041c91a: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c91f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c924u); f_00630f40();
    /* 0041c924: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c928: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c92b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c92c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c931u); f_00686d8e();
    /* 0041c931: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c934:; BB(0x0041c934);
    /* 0041c934: jmp 0x41ca4e */ goto L_0041ca4e;
L_0041c939:; BB(0x0041c939);
    /* 0041c939: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041c93d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041c93f: je 0x41c9b3 */ if (fZ) goto L_0041c9b3;
L_0041c941:; BB(0x0041c941);
    /* 0041c941: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c945: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c948: jg 0x41c966 */ if ((!fZ&&fS==fO)) goto L_0041c966;
L_0041c94a:; BB(0x0041c94a);
    /* 0041c94a: push 0x6b57c4 */ { u32 v = 0x6b57c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c94f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c954u); f_00630f40();
    /* 0041c954: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c958: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c95b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c95c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c961u); f_00686d8e();
    /* 0041c961: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c964: jmp 0x41c9ae */ goto L_0041c9ae;
L_0041c966:; BB(0x0041c966);
    /* 0041c966: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c96a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c96d: jg 0x41c994 */ if ((!fZ&&fS==fO)) goto L_0041c994;
L_0041c96f:; BB(0x0041c96f);
    /* 0041c96f: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c973: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041c976: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c977: push 0x6b578c */ { u32 v = 0x6b578cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c97c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c981u); f_00630f40();
    /* 0041c981: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c985: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c989: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41c98fu); call_ind(t); }
    /* 0041c98f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c992: jmp 0x41c9ae */ goto L_0041c9ae;
L_0041c994:; BB(0x0041c994);
    /* 0041c994: push 0x6b5758 */ { u32 v = 0x6b5758u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c999: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c99eu); f_00630f40();
    /* 0041c99e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c9a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041c9a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9a6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c9abu); f_00686d8e();
    /* 0041c9ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041c9ae:; BB(0x0041c9ae);
    /* 0041c9ae: jmp 0x41ca4e */ goto L_0041ca4e;
L_0041c9b3:; BB(0x0041c9b3);
    /* 0041c9b3: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c9b7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c9ba: jg 0x41c9d8 */ if ((!fZ&&fS==fO)) goto L_0041c9d8;
L_0041c9bc:; BB(0x0041c9bc);
    /* 0041c9bc: push 0x6b571c */ { u32 v = 0x6b571cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9c1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c9c6u); f_00630f40();
    /* 0041c9c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c9c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c9cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9ce: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41c9d3u); f_00686d8e();
    /* 0041c9d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c9d6: jmp 0x41ca4e */ goto L_0041ca4e;
L_0041c9d8:; BB(0x0041c9d8);
    /* 0041c9d8: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c9dc: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041c9df: jg 0x41ca06 */ if ((!fZ&&fS==fO)) goto L_0041ca06;
L_0041c9e1:; BB(0x0041c9e1);
    /* 0041c9e1: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041c9e5: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041c9e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9e9: push 0x6b56f0 */ { u32 v = 0x6b56f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41c9f3u); f_00630f40();
    /* 0041c9f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041c9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041c9fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041c9fb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41ca01u); call_ind(t); }
    /* 0041ca01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca04: jmp 0x41ca4e */ goto L_0041ca4e;
L_0041ca06:; BB(0x0041ca06);
    /* 0041ca06: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ca0a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ca0d: jg 0x41ca34 */ if ((!fZ&&fS==fO)) goto L_0041ca34;
L_0041ca0f:; BB(0x0041ca0f);
    /* 0041ca0f: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ca13: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041ca16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca17: push 0x6b56c4 */ { u32 v = 0x6b56c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca1c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ca21u); f_00630f40();
    /* 0041ca21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ca28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca29: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41ca2fu); call_ind(t); }
    /* 0041ca2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca32: jmp 0x41ca4e */ goto L_0041ca4e;
L_0041ca34:; BB(0x0041ca34);
    /* 0041ca34: push 0x6b569c */ { u32 v = 0x6b569cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca39: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ca3eu); f_00630f40();
    /* 0041ca3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ca45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca46: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ca4bu); f_00686d8e();
    /* 0041ca4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ca4e:; BB(0x0041ca4e);
    /* 0041ca4e: jmp 0x41d369 */ goto L_0041d369;
L_0041ca53:; BB(0x0041ca53);
    /* 0041ca53: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041ca57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ca59: je 0x41cab0 */ if (fZ) goto L_0041cab0;
L_0041ca5b:; BB(0x0041ca5b);
    /* 0041ca5b: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041ca5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ca61: je 0x41ca6c */ if (fZ) goto L_0041ca6c;
L_0041ca63:; BB(0x0041ca63);
    /* 0041ca63: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ca67: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ca6a: je 0x41ca75 */ if (fZ) goto L_0041ca75;
L_0041ca6c:; BB(0x0041ca6c);
    /* 0041ca6c: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ca70: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ca73: jne 0x41ca91 */ if (!fZ) goto L_0041ca91;
L_0041ca75:; BB(0x0041ca75);
    /* 0041ca75: push 0x6b566c */ { u32 v = 0x6b566cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca7a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ca7fu); f_00630f40();
    /* 0041ca7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ca86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca87: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ca8cu); f_00686d8e();
    /* 0041ca8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca8f: jmp 0x41caab */ goto L_0041caab;
L_0041ca91:; BB(0x0041ca91);
    /* 0041ca91: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca96: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ca9bu); f_00630f40();
    /* 0041ca9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ca9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ca9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041caa2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041caa3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41caa8u); f_00686d8e();
    /* 0041caa8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041caab:; BB(0x0041caab);
    /* 0041caab: jmp 0x41cb54 */ goto L_0041cb54;
L_0041cab0:; BB(0x0041cab0);
    /* 0041cab0: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cab4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cab7: jg 0x41cade */ if ((!fZ&&fS==fO)) goto L_0041cade;
L_0041cab9:; BB(0x0041cab9);
    /* 0041cab9: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cabd: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041cac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cac1: push 0x6b5634 */ { u32 v = 0x6b5634u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cac6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cacbu); f_00630f40();
    /* 0041cacb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cacf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cad3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cad9u); call_ind(t); }
    /* 0041cad9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cadc: jmp 0x41cb54 */ goto L_0041cb54;
L_0041cade:; BB(0x0041cade);
    /* 0041cade: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cae2: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cae5: jg 0x41cb0c */ if ((!fZ&&fS==fO)) goto L_0041cb0c;
L_0041cae7:; BB(0x0041cae7);
    /* 0041cae7: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041caeb: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041caee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041caef: push 0x6b5608 */ { u32 v = 0x6b5608u; r_esp -= 4; W32(r_esp, v); }
    /* 0041caf4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41caf9u); f_00630f40();
    /* 0041caf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cafc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cafd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cb00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb01: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cb07u); call_ind(t); }
    /* 0041cb07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cb0a: jmp 0x41cb54 */ goto L_0041cb54;
L_0041cb0c:; BB(0x0041cb0c);
    /* 0041cb0c: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cb10: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cb13: jg 0x41cb3a */ if ((!fZ&&fS==fO)) goto L_0041cb3a;
L_0041cb15:; BB(0x0041cb15);
    /* 0041cb15: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cb19: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041cb1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb1d: push 0x6b55e4 */ { u32 v = 0x6b55e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb22: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cb27u); f_00630f40();
    /* 0041cb27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cb2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cb2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb2f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cb35u); call_ind(t); }
    /* 0041cb35: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cb38: jmp 0x41cb54 */ goto L_0041cb54;
L_0041cb3a:; BB(0x0041cb3a);
    /* 0041cb3a: push 0x6b55c4 */ { u32 v = 0x6b55c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb3f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cb44u); f_00630f40();
    /* 0041cb44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cb47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb48: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cb4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb4c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cb51u); f_00686d8e();
    /* 0041cb51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cb54:; BB(0x0041cb54);
    /* 0041cb54: jmp 0x41d369 */ goto L_0041d369;
L_0041cb59:; BB(0x0041cb59);
    /* 0041cb59: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041cb5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cb5f: je 0x41cbb6 */ if (fZ) goto L_0041cbb6;
L_0041cb61:; BB(0x0041cb61);
    /* 0041cb61: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041cb65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cb67: je 0x41cb72 */ if (fZ) goto L_0041cb72;
L_0041cb69:; BB(0x0041cb69);
    /* 0041cb69: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cb6d: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cb70: je 0x41cb7b */ if (fZ) goto L_0041cb7b;
L_0041cb72:; BB(0x0041cb72);
    /* 0041cb72: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cb76: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cb79: jne 0x41cb97 */ if (!fZ) goto L_0041cb97;
L_0041cb7b:; BB(0x0041cb7b);
    /* 0041cb7b: push 0x6b5594 */ { u32 v = 0x6b5594u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cb85u); f_00630f40();
    /* 0041cb85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cb8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb8d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cb92u); f_00686d8e();
    /* 0041cb92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cb95: jmp 0x41cbb1 */ goto L_0041cbb1;
L_0041cb97:; BB(0x0041cb97);
    /* 0041cb97: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cb9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cba1u); f_00630f40();
    /* 0041cba1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cba5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cba8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cba9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cbaeu); f_00686d8e();
    /* 0041cbae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cbb1:; BB(0x0041cbb1);
    /* 0041cbb1: jmp 0x41cca3 */ goto L_0041cca3;
L_0041cbb6:; BB(0x0041cbb6);
    /* 0041cbb6: movzx eax, byte ptr [ebp - 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041cbba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cbbc: je 0x41cc2d */ if (fZ) goto L_0041cc2d;
L_0041cbbe:; BB(0x0041cbbe);
    /* 0041cbbe: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cbc2: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cbc5: jg 0x41cbe3 */ if ((!fZ&&fS==fO)) goto L_0041cbe3;
L_0041cbc7:; BB(0x0041cbc7);
    /* 0041cbc7: push 0x6b5568 */ { u32 v = 0x6b5568u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbcc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cbd1u); f_00630f40();
    /* 0041cbd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cbd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cbd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbd9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cbdeu); f_00686d8e();
    /* 0041cbde: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cbe1: jmp 0x41cc2b */ goto L_0041cc2b;
L_0041cbe3:; BB(0x0041cbe3);
    /* 0041cbe3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cbe7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cbea: jg 0x41cc11 */ if ((!fZ&&fS==fO)) goto L_0041cc11;
L_0041cbec:; BB(0x0041cbec);
    /* 0041cbec: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cbf0: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041cbf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbf4: push 0x6b5530 */ { u32 v = 0x6b5530u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cbf9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cbfeu); f_00630f40();
    /* 0041cbfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cc05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc06: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cc0cu); call_ind(t); }
    /* 0041cc0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc0f: jmp 0x41cc2b */ goto L_0041cc2b;
L_0041cc11:; BB(0x0041cc11);
    /* 0041cc11: push 0x6b54fc */ { u32 v = 0x6b54fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc16: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cc1bu); f_00630f40();
    /* 0041cc1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cc22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc23: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cc28u); f_00686d8e();
    /* 0041cc28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cc2b:; BB(0x0041cc2b);
    /* 0041cc2b: jmp 0x41cca3 */ goto L_0041cca3;
L_0041cc2d:; BB(0x0041cc2d);
    /* 0041cc2d: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cc31: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cc34: jg 0x41cc5b */ if ((!fZ&&fS==fO)) goto L_0041cc5b;
L_0041cc36:; BB(0x0041cc36);
    /* 0041cc36: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cc3a: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041cc3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc3e: push 0x6b54c8 */ { u32 v = 0x6b54c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc43: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cc48u); f_00630f40();
    /* 0041cc48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc4c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cc4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc50: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cc56u); call_ind(t); }
    /* 0041cc56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc59: jmp 0x41cca3 */ goto L_0041cca3;
L_0041cc5b:; BB(0x0041cc5b);
    /* 0041cc5b: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cc5f: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cc62: jg 0x41cc89 */ if ((!fZ&&fS==fO)) goto L_0041cc89;
L_0041cc64:; BB(0x0041cc64);
    /* 0041cc64: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cc68: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041cc6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc6c: push 0x6b5498 */ { u32 v = 0x6b5498u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc71: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cc76u); f_00630f40();
    /* 0041cc76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cc7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc7e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cc84u); call_ind(t); }
    /* 0041cc84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc87: jmp 0x41cca3 */ goto L_0041cca3;
L_0041cc89:; BB(0x0041cc89);
    /* 0041cc89: push 0x6b546c */ { u32 v = 0x6b546cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc8e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cc93u); f_00630f40();
    /* 0041cc93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cc96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cc9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cc9b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cca0u); f_00686d8e();
    /* 0041cca0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cca3:; BB(0x0041cca3);
    /* 0041cca3: jmp 0x41d369 */ goto L_0041d369;
L_0041cca8:; BB(0x0041cca8);
    /* 0041cca8: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041ccac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ccae: je 0x41cd68 */ if (fZ) goto L_0041cd68;
L_0041ccb4:; BB(0x0041ccb4);
    /* 0041ccb4: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ccb8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ccbb: jg 0x41ccdc */ if ((!fZ&&fS==fO)) goto L_0041ccdc;
L_0041ccbd:; BB(0x0041ccbd);
    /* 0041ccbd: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ccc2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ccc7u); f_00630f40();
    /* 0041ccc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ccca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cccb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ccce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cccf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ccd4u); f_00686d8e();
    /* 0041ccd4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ccd7: jmp 0x41cd63 */ goto L_0041cd63;
L_0041ccdc:; BB(0x0041ccdc);
    /* 0041ccdc: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cce0: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cce3: jg 0x41cd25 */ if ((!fZ&&fS==fO)) goto L_0041cd25;
L_0041cce5:; BB(0x0041cce5);
    /* 0041cce5: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041cce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cceb: je 0x41cd09 */ if (fZ) goto L_0041cd09;
L_0041cced:; BB(0x0041cced);
    /* 0041cced: push 0x6b5438 */ { u32 v = 0x6b5438u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ccf2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ccf7u); f_00630f40();
    /* 0041ccf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ccfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ccfb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ccfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ccff: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cd04u); f_00686d8e();
    /* 0041cd04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd07: jmp 0x41cd23 */ goto L_0041cd23;
L_0041cd09:; BB(0x0041cd09);
    /* 0041cd09: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd0e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cd13u); f_00630f40();
    /* 0041cd13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd17: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cd1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd1b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cd20u); f_00686d8e();
    /* 0041cd20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cd23:; BB(0x0041cd23);
    /* 0041cd23: jmp 0x41cd63 */ goto L_0041cd63;
L_0041cd25:; BB(0x0041cd25);
    /* 0041cd25: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041cd29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cd2b: je 0x41cd49 */ if (fZ) goto L_0041cd49;
L_0041cd2d:; BB(0x0041cd2d);
    /* 0041cd2d: push 0x6b540c */ { u32 v = 0x6b540cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd32: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cd37u); f_00630f40();
    /* 0041cd37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cd3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd3f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cd44u); f_00686d8e();
    /* 0041cd44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd47: jmp 0x41cd63 */ goto L_0041cd63;
L_0041cd49:; BB(0x0041cd49);
    /* 0041cd49: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd4e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cd53u); f_00630f40();
    /* 0041cd53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cd5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd5b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cd60u); f_00686d8e();
    /* 0041cd60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cd63:; BB(0x0041cd63);
    /* 0041cd63: jmp 0x41ce0b */ goto L_0041ce0b;
L_0041cd68:; BB(0x0041cd68);
    /* 0041cd68: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cd6c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cd6f: jg 0x41cd96 */ if ((!fZ&&fS==fO)) goto L_0041cd96;
L_0041cd71:; BB(0x0041cd71);
    /* 0041cd71: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cd75: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041cd78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd79: push 0x6b53d8 */ { u32 v = 0x6b53d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd7e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cd83u); f_00630f40();
    /* 0041cd83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cd8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cd8b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cd91u); call_ind(t); }
    /* 0041cd91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cd94: jmp 0x41ce0b */ goto L_0041ce0b;
L_0041cd96:; BB(0x0041cd96);
    /* 0041cd96: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cd9a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cd9d: jne 0x41cdc3 */ if (!fZ) goto L_0041cdc3;
L_0041cd9f:; BB(0x0041cd9f);
    /* 0041cd9f: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0041cda3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cda5: je 0x41cdc3 */ if (fZ) goto L_0041cdc3;
L_0041cda7:; BB(0x0041cda7);
    /* 0041cda7: push 0x6b53a4 */ { u32 v = 0x6b53a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cdb1u); f_00630f40();
    /* 0041cdb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cdb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdb5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cdb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdb9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cdbeu); f_00686d8e();
    /* 0041cdbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cdc1: jmp 0x41ce0b */ goto L_0041ce0b;
L_0041cdc3:; BB(0x0041cdc3);
    /* 0041cdc3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cdc7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cdca: jg 0x41cdf1 */ if ((!fZ&&fS==fO)) goto L_0041cdf1;
L_0041cdcc:; BB(0x0041cdcc);
    /* 0041cdcc: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cdd0: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041cdd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdd4: push 0x6b5374 */ { u32 v = 0x6b5374u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdd9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cddeu); f_00630f40();
    /* 0041cdde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cde1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cde2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041cde5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cde6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cdecu); call_ind(t); }
    /* 0041cdec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cdef: jmp 0x41ce0b */ goto L_0041ce0b;
L_0041cdf1:; BB(0x0041cdf1);
    /* 0041cdf1: push 0x6b5348 */ { u32 v = 0x6b5348u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdf6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cdfbu); f_00630f40();
    /* 0041cdfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cdfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cdff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ce02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce03: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ce08u); f_00686d8e();
    /* 0041ce08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ce0b:; BB(0x0041ce0b);
    /* 0041ce0b: jmp 0x41d369 */ goto L_0041d369;
L_0041ce10:; BB(0x0041ce10);
    /* 0041ce10: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041ce14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ce16: je 0x41ced0 */ if (fZ) goto L_0041ced0;
L_0041ce1c:; BB(0x0041ce1c);
    /* 0041ce1c: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ce20: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ce23: jg 0x41ce44 */ if ((!fZ&&fS==fO)) goto L_0041ce44;
L_0041ce25:; BB(0x0041ce25);
    /* 0041ce25: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce2a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ce2fu); f_00630f40();
    /* 0041ce2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ce32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ce36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce37: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ce3cu); f_00686d8e();
    /* 0041ce3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ce3f: jmp 0x41cecb */ goto L_0041cecb;
L_0041ce44:; BB(0x0041ce44);
    /* 0041ce44: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041ce48: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ce4b: jg 0x41ce8d */ if ((!fZ&&fS==fO)) goto L_0041ce8d;
L_0041ce4d:; BB(0x0041ce4d);
    /* 0041ce4d: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041ce51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ce53: je 0x41ce71 */ if (fZ) goto L_0041ce71;
L_0041ce55:; BB(0x0041ce55);
    /* 0041ce55: push 0x6b5314 */ { u32 v = 0x6b5314u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce5a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ce5fu); f_00630f40();
    /* 0041ce5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ce62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041ce66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce67: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ce6cu); f_00686d8e();
    /* 0041ce6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ce6f: jmp 0x41ce8b */ goto L_0041ce8b;
L_0041ce71:; BB(0x0041ce71);
    /* 0041ce71: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce76: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ce7bu); f_00630f40();
    /* 0041ce7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ce7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ce82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce83: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ce88u); f_00686d8e();
    /* 0041ce88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041ce8b:; BB(0x0041ce8b);
    /* 0041ce8b: jmp 0x41cecb */ goto L_0041cecb;
L_0041ce8d:; BB(0x0041ce8d);
    /* 0041ce8d: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041ce91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ce93: je 0x41ceb1 */ if (fZ) goto L_0041ceb1;
L_0041ce95:; BB(0x0041ce95);
    /* 0041ce95: push 0x6b540c */ { u32 v = 0x6b540cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041ce9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41ce9fu); f_00630f40();
    /* 0041ce9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cea3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cea7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ceacu); f_00686d8e();
    /* 0041ceac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ceaf: jmp 0x41cecb */ goto L_0041cecb;
L_0041ceb1:; BB(0x0041ceb1);
    /* 0041ceb1: push 0x6b59c0 */ { u32 v = 0x6b59c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ceb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cebbu); f_00630f40();
    /* 0041cebb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cebf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cec2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cec3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cec8u); f_00686d8e();
    /* 0041cec8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cecb:; BB(0x0041cecb);
    /* 0041cecb: jmp 0x41cfcb */ goto L_0041cfcb;
L_0041ced0:; BB(0x0041ced0);
    /* 0041ced0: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041ced4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041ced6: je 0x41cef7 */ if (fZ) goto L_0041cef7;
L_0041ced8:; BB(0x0041ced8);
    /* 0041ced8: push 0x6b52f0 */ { u32 v = 0x6b52f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cedd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cee2u); f_00630f40();
    /* 0041cee2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cee6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041ceea: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41ceefu); f_00686d8e();
    /* 0041ceef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cef2: jmp 0x41cfcb */ goto L_0041cfcb;
L_0041cef7:; BB(0x0041cef7);
    /* 0041cef7: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cefb: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cefe: jg 0x41cf28 */ if ((!fZ&&fS==fO)) goto L_0041cf28;
L_0041cf00:; BB(0x0041cf00);
    /* 0041cf00: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cf04: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041cf07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf08: push 0x6b52bc */ { u32 v = 0x6b52bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf0d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cf12u); f_00630f40();
    /* 0041cf12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cf15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cf19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf1a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cf20u); call_ind(t); }
    /* 0041cf20: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cf23: jmp 0x41cfcb */ goto L_0041cfcb;
L_0041cf28:; BB(0x0041cf28);
    /* 0041cf28: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cf2c: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cf2f: jl 0x41cf55 */ if ((fS!=fO)) goto L_0041cf55;
L_0041cf31:; BB(0x0041cf31);
    /* 0041cf31: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0041cf35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cf37: je 0x41cf55 */ if (fZ) goto L_0041cf55;
L_0041cf39:; BB(0x0041cf39);
    /* 0041cf39: push 0x6b5288 */ { u32 v = 0x6b5288u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf3e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cf43u); f_00630f40();
    /* 0041cf43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cf46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cf4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf4b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cf50u); f_00686d8e();
    /* 0041cf50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cf53: jmp 0x41cfcb */ goto L_0041cfcb;
L_0041cf55:; BB(0x0041cf55);
    /* 0041cf55: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cf59: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041cf5c: jge 0x41cf83 */ if ((fS==fO)) goto L_0041cf83;
L_0041cf5e:; BB(0x0041cf5e);
    /* 0041cf5e: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cf62: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041cf65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf66: push 0x6b5258 */ { u32 v = 0x6b5258u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf6b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cf70u); f_00630f40();
    /* 0041cf70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cf73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cf77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf78: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cf7eu); call_ind(t); }
    /* 0041cf7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cf81: jmp 0x41cfcb */ goto L_0041cfcb;
L_0041cf83:; BB(0x0041cf83);
    /* 0041cf83: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cf87: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cf8a: jne 0x41cfb1 */ if (!fZ) goto L_0041cfb1;
L_0041cf8c:; BB(0x0041cf8c);
    /* 0041cf8c: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cf90: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041cf93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf94: push 0x6b5228 */ { u32 v = 0x6b5228u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cf99: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cf9eu); f_00630f40();
    /* 0041cf9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cfa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cfa2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041cfa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cfa6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41cfacu); call_ind(t); }
    /* 0041cfac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cfaf: jmp 0x41cfcb */ goto L_0041cfcb;
L_0041cfb1:; BB(0x0041cfb1);
    /* 0041cfb1: push 0x6b51fc */ { u32 v = 0x6b51fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041cfb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cfbbu); f_00630f40();
    /* 0041cfbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cfbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cfbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cfc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cfc3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cfc8u); f_00686d8e();
    /* 0041cfc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041cfcb:; BB(0x0041cfcb);
    /* 0041cfcb: jmp 0x41d369 */ goto L_0041d369;
L_0041cfd0:; BB(0x0041cfd0);
    /* 0041cfd0: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041cfd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cfd6: je 0x41d066 */ if (fZ) goto L_0041d066;
L_0041cfdc:; BB(0x0041cfdc);
    /* 0041cfdc: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041cfe0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041cfe3: jne 0x41d001 */ if (!fZ) goto L_0041d001;
L_0041cfe5:; BB(0x0041cfe5);
    /* 0041cfe5: push 0x6b51e0 */ { u32 v = 0x6b51e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041cfea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41cfefu); f_00630f40();
    /* 0041cfef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041cff3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041cff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041cff7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41cffcu); f_00686d8e();
    /* 0041cffc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041cfff: jmp 0x41d064 */ goto L_0041d064;
L_0041d001:; BB(0x0041d001);
    /* 0041d001: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d005: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d008: jg 0x41d04a */ if ((!fZ&&fS==fO)) goto L_0041d04a;
L_0041d00a:; BB(0x0041d00a);
    /* 0041d00a: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041d00e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d010: je 0x41d02e */ if (fZ) goto L_0041d02e;
L_0041d012:; BB(0x0041d012);
    /* 0041d012: push 0x6b51b0 */ { u32 v = 0x6b51b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d017: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d01cu); f_00630f40();
    /* 0041d01c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d01f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d020: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d024: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d029u); f_00686d8e();
    /* 0041d029: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d02c: jmp 0x41d048 */ goto L_0041d048;
L_0041d02e:; BB(0x0041d02e);
    /* 0041d02e: push 0x6b51e0 */ { u32 v = 0x6b51e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d033: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d038u); f_00630f40();
    /* 0041d038: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d03b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d03c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d03f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d040: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d045u); f_00686d8e();
    /* 0041d045: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d048:; BB(0x0041d048);
    /* 0041d048: jmp 0x41d064 */ goto L_0041d064;
L_0041d04a:; BB(0x0041d04a);
    /* 0041d04a: push 0x6b518c */ { u32 v = 0x6b518cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d04f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d054u); f_00630f40();
    /* 0041d054: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d058: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d05c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d061u); f_00686d8e();
    /* 0041d061: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d064:; BB(0x0041d064);
    /* 0041d064: jmp 0x41d080 */ goto L_0041d080;
L_0041d066:; BB(0x0041d066);
    /* 0041d066: push 0x6b516c */ { u32 v = 0x6b516cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d06b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d070u); f_00630f40();
    /* 0041d070: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d074: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d077: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d078: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d07du); f_00686d8e();
    /* 0041d07d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d080:; BB(0x0041d080);
    /* 0041d080: jmp 0x41d369 */ goto L_0041d369;
L_0041d085:; BB(0x0041d085);
    /* 0041d085: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041d089: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d08b: je 0x41d1ad */ if (fZ) goto L_0041d1ad;
L_0041d091:; BB(0x0041d091);
    /* 0041d091: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d095: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d098: jne 0x41d0b9 */ if (!fZ) goto L_0041d0b9;
L_0041d09a:; BB(0x0041d09a);
    /* 0041d09a: push 0x6b514c */ { u32 v = 0x6b514cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d09f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d0a4u); f_00630f40();
    /* 0041d0a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d0a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d0ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0ac: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d0b1u); f_00686d8e();
    /* 0041d0b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d0b4: jmp 0x41d1a8 */ goto L_0041d1a8;
L_0041d0b9:; BB(0x0041d0b9);
    /* 0041d0b9: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d0bd: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d0c0: jg 0x41d105 */ if ((!fZ&&fS==fO)) goto L_0041d105;
L_0041d0c2:; BB(0x0041d0c2);
    /* 0041d0c2: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041d0c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d0c8: je 0x41d0e6 */ if (fZ) goto L_0041d0e6;
L_0041d0ca:; BB(0x0041d0ca);
    /* 0041d0ca: push 0x6b511c */ { u32 v = 0x6b511cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d0d4u); f_00630f40();
    /* 0041d0d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d0d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d0db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0dc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d0e1u); f_00686d8e();
    /* 0041d0e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d0e4: jmp 0x41d100 */ goto L_0041d100;
L_0041d0e6:; BB(0x0041d0e6);
    /* 0041d0e6: push 0x6b50f0 */ { u32 v = 0x6b50f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d0f0u); f_00630f40();
    /* 0041d0f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d0f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d0f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d0f8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d0fdu); f_00686d8e();
    /* 0041d0fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d100:; BB(0x0041d100);
    /* 0041d100: jmp 0x41d1a8 */ goto L_0041d1a8;
L_0041d105:; BB(0x0041d105);
    /* 0041d105: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d109: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d10c: jg 0x41d160 */ if ((!fZ&&fS==fO)) goto L_0041d160;
L_0041d10e:; BB(0x0041d10e);
    /* 0041d10e: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0041d112: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d114: je 0x41d13b */ if (fZ) goto L_0041d13b;
L_0041d116:; BB(0x0041d116);
    /* 0041d116: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d11a: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041d11d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d11e: push 0x6b50c0 */ { u32 v = 0x6b50c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d123: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d128u); f_00630f40();
    /* 0041d128: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d12c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d130: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41d136u); call_ind(t); }
    /* 0041d136: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d139: jmp 0x41d15e */ goto L_0041d15e;
L_0041d13b:; BB(0x0041d13b);
    /* 0041d13b: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d13f: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041d142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d143: push 0x6b509c */ { u32 v = 0x6b509cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d148: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d14du); f_00630f40();
    /* 0041d14d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d151: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d154: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d155: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41d15bu); call_ind(t); }
    /* 0041d15b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d15e:; BB(0x0041d15e);
    /* 0041d15e: jmp 0x41d1a8 */ goto L_0041d1a8;
L_0041d160:; BB(0x0041d160);
    /* 0041d160: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d164: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d167: jg 0x41d18e */ if ((!fZ&&fS==fO)) goto L_0041d18e;
L_0041d169:; BB(0x0041d169);
    /* 0041d169: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d16d: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041d170: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d171: push 0x6b5074 */ { u32 v = 0x6b5074u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d176: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d17bu); f_00630f40();
    /* 0041d17b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d17e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d17f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d183: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x41d189u); call_ind(t); }
    /* 0041d189: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d18c: jmp 0x41d1a8 */ goto L_0041d1a8;
L_0041d18e:; BB(0x0041d18e);
    /* 0041d18e: push 0x6b5054 */ { u32 v = 0x6b5054u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d193: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d198u); f_00630f40();
    /* 0041d198: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d19b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d19c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d19f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1a0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d1a5u); f_00686d8e();
    /* 0041d1a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d1a8:; BB(0x0041d1a8);
    /* 0041d1a8: jmp 0x41d286 */ goto L_0041d286;
L_0041d1ad:; BB(0x0041d1ad);
    /* 0041d1ad: movzx ecx, byte ptr [ebp - 0xa] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041d1b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d1b3: je 0x41d26c */ if (fZ) goto L_0041d26c;
L_0041d1b9:; BB(0x0041d1b9);
    /* 0041d1b9: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d1bd: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d1c0: jg 0x41d1e1 */ if ((!fZ&&fS==fO)) goto L_0041d1e1;
L_0041d1c2:; BB(0x0041d1c2);
    /* 0041d1c2: push 0x6b502c */ { u32 v = 0x6b502cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1c7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d1ccu); f_00630f40();
    /* 0041d1cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d1cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d1d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1d4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d1d9u); f_00686d8e();
    /* 0041d1d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d1dc: jmp 0x41d26a */ goto L_0041d26a;
L_0041d1e1:; BB(0x0041d1e1);
    /* 0041d1e1: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d1e5: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d1e8: jne 0x41d206 */ if (!fZ) goto L_0041d206;
L_0041d1ea:; BB(0x0041d1ea);
    /* 0041d1ea: push 0x6b5000 */ { u32 v = 0x6b5000u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1ef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d1f4u); f_00630f40();
    /* 0041d1f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d1f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d1fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d1fc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d201u); f_00686d8e();
    /* 0041d201: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d204: jmp 0x41d26a */ goto L_0041d26a;
L_0041d206:; BB(0x0041d206);
    /* 0041d206: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d20a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d20d: jne 0x41d22b */ if (!fZ) goto L_0041d22b;
L_0041d20f:; BB(0x0041d20f);
    /* 0041d20f: push 0x6b4fd0 */ { u32 v = 0x6b4fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d214: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d219u); f_00630f40();
    /* 0041d219: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d21c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d21d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d221: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d226u); f_00686d8e();
    /* 0041d226: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d229: jmp 0x41d26a */ goto L_0041d26a;
L_0041d22b:; BB(0x0041d22b);
    /* 0041d22b: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d22f: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d232: jne 0x41d250 */ if (!fZ) goto L_0041d250;
L_0041d234:; BB(0x0041d234);
    /* 0041d234: push 0x6b4fa0 */ { u32 v = 0x6b4fa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d239: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d23eu); f_00630f40();
    /* 0041d23e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d242: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d246: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d24bu); f_00686d8e();
    /* 0041d24b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d24e: jmp 0x41d26a */ goto L_0041d26a;
L_0041d250:; BB(0x0041d250);
    /* 0041d250: push 0x6b4f70 */ { u32 v = 0x6b4f70u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d255: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d25au); f_00630f40();
    /* 0041d25a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d25d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d25e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d262: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d267u); f_00686d8e();
    /* 0041d267: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d26a:; BB(0x0041d26a);
    /* 0041d26a: jmp 0x41d286 */ goto L_0041d286;
L_0041d26c:; BB(0x0041d26c);
    /* 0041d26c: push 0x6b516c */ { u32 v = 0x6b516cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d271: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d276u); f_00630f40();
    /* 0041d276: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d27a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d27d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d27e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d283u); f_00686d8e();
    /* 0041d283: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d286:; BB(0x0041d286);
    /* 0041d286: jmp 0x41d369 */ goto L_0041d369;
L_0041d28b:; BB(0x0041d28b);
    /* 0041d28b: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041d28f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d291: je 0x41d2af */ if (fZ) goto L_0041d2af;
L_0041d293:; BB(0x0041d293);
    /* 0041d293: push 0x6b4f50 */ { u32 v = 0x6b4f50u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d298: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d29du); f_00630f40();
    /* 0041d29d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d2a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d2a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2a5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d2aau); f_00686d8e();
    /* 0041d2aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d2ad: jmp 0x41d2c9 */ goto L_0041d2c9;
L_0041d2af:; BB(0x0041d2af);
    /* 0041d2af: push 0x6b516c */ { u32 v = 0x6b516cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2b4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d2b9u); f_00630f40();
    /* 0041d2b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d2bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2bd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d2c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2c1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d2c6u); f_00686d8e();
    /* 0041d2c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d2c9:; BB(0x0041d2c9);
    /* 0041d2c9: jmp 0x41d369 */ goto L_0041d369;
L_0041d2ce:; BB(0x0041d2ce);
    /* 0041d2ce: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0041d2d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d2d4: je 0x41d2f2 */ if (fZ) goto L_0041d2f2;
L_0041d2d6:; BB(0x0041d2d6);
    /* 0041d2d6: push 0x6b4f30 */ { u32 v = 0x6b4f30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2db: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d2e0u); f_00630f40();
    /* 0041d2e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d2e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d2e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2e8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d2edu); f_00686d8e();
    /* 0041d2ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d2f0: jmp 0x41d330 */ goto L_0041d330;
L_0041d2f2:; BB(0x0041d2f2);
    /* 0041d2f2: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 0041d2f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d2f8: je 0x41d316 */ if (fZ) goto L_0041d316;
L_0041d2fa:; BB(0x0041d2fa);
    /* 0041d2fa: push 0x6b4f0c */ { u32 v = 0x6b4f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d2ff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d304u); f_00630f40();
    /* 0041d304: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d307: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d308: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d30b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d30c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d311u); f_00686d8e();
    /* 0041d311: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d314: jmp 0x41d330 */ goto L_0041d330;
L_0041d316:; BB(0x0041d316);
    /* 0041d316: push 0x6b516c */ { u32 v = 0x6b516cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d31b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d320u); f_00630f40();
    /* 0041d320: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d324: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d328: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d32du); f_00686d8e();
    /* 0041d32d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d330:; BB(0x0041d330);
    /* 0041d330: jmp 0x41d369 */ goto L_0041d369;
L_0041d332:; BB(0x0041d332);
    /* 0041d332: push 0x6b4ef4 */ { u32 v = 0x6b4ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d337: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d33cu); f_00630f40();
    /* 0041d33c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d340: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d343: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d344: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d349u); f_00686d8e();
    /* 0041d349: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d34c: jmp 0x41d369 */ goto L_0041d369;
L_0041d34e:; BB(0x0041d34e);
    /* 0041d34e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041d350: jne 0x41d369 */ if (!fZ) goto L_0041d369;
L_0041d352:; BB(0x0041d352);
    /* 0041d352: push 0x711 */ { u32 v = 0x711u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d357: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d35c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d361: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d366u); f_005e9f20();
    /* 0041d366: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d369:; BB(0x0041d369);
    /* 0041d369: mov esp, ebp */ r_esp = r_ebp;
    /* 0041d36b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d36c: ret 0x10 */ FN_RET(0x0041c540); r_esp += 20; return;
}

void f_0041d3c0(void) /* blackjackstate::func_0041d3c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041d3c0);
    /* 0041d3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041d3c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d3c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041d3c7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041d3ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041d3cd: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0041d3d3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041d3d6: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d3da: jne 0x41d3e5 */ if (!fZ) goto L_0041d3e5;
L_0041d3dc:; BB(0x0041d3dc);
    /* 0041d3dc: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0041d3e3: jmp 0x41d411 */ goto L_0041d411;
L_0041d3e5:; BB(0x0041d3e5);
    /* 0041d3e5: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d3e9: jne 0x41d3f4 */ if (!fZ) goto L_0041d3f4;
L_0041d3eb:; BB(0x0041d3eb);
    /* 0041d3eb: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0041d3f2: jmp 0x41d40b */ goto L_0041d40b;
L_0041d3f4:; BB(0x0041d3f4);
    /* 0041d3f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d3f7: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041d3fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041d400: movsx ecx, byte ptr [eax + edx + 0x119] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x119u));
    /* 0041d408: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0041d40b:; BB(0x0041d40b);
    /* 0041d40b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041d40e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0041d411:; BB(0x0041d411);
    /* 0041d411: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041d414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d415: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d418: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d419: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041d41c: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x41d421u); f_004198d0();
    /* 0041d421: mov esi, eax */ r_esi = r_eax;
    /* 0041d423: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041d426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d42b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041d42e: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41d433u); f_00419980();
    /* 0041d433: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041d435: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d437: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041d43a: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0041d43d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041d440: mov eax, dword ptr [edx + 0x4d0] */ r_eax = R32((u32)(r_edx+0x4d0u));
    /* 0041d446: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041d449: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041d44c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d44d: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 0041d453: call 0x40b260 */ r_esp -= 4; W32(r_esp, 0x41d458u); f_0040b260();
    /* 0041d458: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041d45b: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041d45f: ja 0x41d567 */ if ((!fC&&!fZ)) goto L_0041d567;
L_0041d465:; BB(0x0041d465);
    /* 0041d465: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041d468: jmp dword ptr [edx*4 + 0x41d58c] */ { u32 t = R32((u32)(r_edx*4+0x41d58cu)); switch (t) { case 0x41d46fu: goto L_0041d46f; case 0x41d4aau: goto L_0041d4aa; case 0x41d4e5u: goto L_0041d4e5; case 0x41d51du: goto L_0041d51d; case 0x41d542u: goto L_0041d542; default: UNSUP(0x0041d468, "jump table entry is not a known target"); } }
L_0041d46f:; BB(0x0041d46f);
    /* 0041d46f: push 0x6b3ca4 */ { u32 v = 0x6b3ca4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d474: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d479u); f_00630f40();
    /* 0041d479: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d47c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d47d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d481: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d486u); f_00686d8e();
    /* 0041d486: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d489: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0041d48d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d48f: je 0x41d49c */ if (fZ) goto L_0041d49c;
L_0041d491:; BB(0x0041d491);
    /* 0041d491: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041d494: mov dword ptr [edx], 0x13b5 */ W32((u32)(r_edx), 0x13b5u);
    /* 0041d49a: jmp 0x41d4a5 */ goto L_0041d4a5;
L_0041d49c:; BB(0x0041d49c);
    /* 0041d49c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041d49f: mov dword ptr [eax], 0x13b4 */ W32((u32)(r_eax), 0x13b4u);
L_0041d4a5:; BB(0x0041d4a5);
    /* 0041d4a5: jmp 0x41d582 */ goto L_0041d582;
L_0041d4aa:; BB(0x0041d4aa);
    /* 0041d4aa: push 0x6b3c90 */ { u32 v = 0x6b3c90u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4af: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d4b4u); f_00630f40();
    /* 0041d4b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d4b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d4bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4bc: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d4c1u); f_00686d8e();
    /* 0041d4c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d4c4: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0041d4c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d4ca: je 0x41d4d7 */ if (fZ) goto L_0041d4d7;
L_0041d4cc:; BB(0x0041d4cc);
    /* 0041d4cc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041d4cf: mov dword ptr [eax], 0x13b5 */ W32((u32)(r_eax), 0x13b5u);
    /* 0041d4d5: jmp 0x41d4e0 */ goto L_0041d4e0;
L_0041d4d7:; BB(0x0041d4d7);
    /* 0041d4d7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041d4da: mov dword ptr [ecx], 0x13b4 */ W32((u32)(r_ecx), 0x13b4u);
L_0041d4e0:; BB(0x0041d4e0);
    /* 0041d4e0: jmp 0x41d582 */ goto L_0041d582;
L_0041d4e5:; BB(0x0041d4e5);
    /* 0041d4e5: push 0x6b4890 */ { u32 v = 0x6b4890u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4ea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d4efu); f_00630f40();
    /* 0041d4ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d4f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d4f7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d4fcu); f_00686d8e();
    /* 0041d4fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d4ff: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0041d503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d505: je 0x41d512 */ if (fZ) goto L_0041d512;
L_0041d507:; BB(0x0041d507);
    /* 0041d507: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041d50a: mov dword ptr [ecx], 0x13b3 */ W32((u32)(r_ecx), 0x13b3u);
    /* 0041d510: jmp 0x41d51b */ goto L_0041d51b;
L_0041d512:; BB(0x0041d512);
    /* 0041d512: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041d515: mov dword ptr [edx], 0x13b8 */ W32((u32)(r_edx), 0x13b8u);
L_0041d51b:; BB(0x0041d51b);
    /* 0041d51b: jmp 0x41d582 */ goto L_0041d582;
L_0041d51d:; BB(0x0041d51d);
    /* 0041d51d: push 0x6b3c64 */ { u32 v = 0x6b3c64u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d522: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d527u); f_00630f40();
    /* 0041d527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d52a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d52b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d52e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d52f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d534u); f_00686d8e();
    /* 0041d534: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d537: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041d53a: mov dword ptr [ecx], 0x13b6 */ W32((u32)(r_ecx), 0x13b6u);
    /* 0041d540: jmp 0x41d582 */ goto L_0041d582;
L_0041d542:; BB(0x0041d542);
    /* 0041d542: push 0x6b3c4c */ { u32 v = 0x6b3c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d547: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41d54cu); f_00630f40();
    /* 0041d54c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d54f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041d550: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041d553: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041d554: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41d559u); f_00686d8e();
    /* 0041d559: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041d55c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041d55f: mov dword ptr [eax], 0x13b7 */ W32((u32)(r_eax), 0x13b7u);
    /* 0041d565: jmp 0x41d582 */ goto L_0041d582;
L_0041d567:; BB(0x0041d567);
    /* 0041d567: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0041d569: jne 0x41d582 */ if (!fZ) goto L_0041d582;
L_0041d56b:; BB(0x0041d56b);
    /* 0041d56b: push 0x73d */ { u32 v = 0x73du; r_esp -= 4; W32(r_esp, v); }
    /* 0041d570: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d575: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d57a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d57fu); f_005e9f20();
    /* 0041d57f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d582:; BB(0x0041d582);
    /* 0041d582: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041d583: mov esp, ebp */ r_esp = r_ebp;
    /* 0041d585: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d586: ret 8 */ FN_RET(0x0041d3c0); r_esp += 12; return;
}

void f_0041d5a0(void) /* blackjackstate::func_0041d5a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041d5a0);
    /* 0041d5a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041d5a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041d5a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041d5a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0041d5a9: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d5af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041d5b2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041d5b5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041d5b8: sub ecx, 0x13b3 */ {  u32 a = r_ecx; u32 b = 0x13b3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041d5be: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041d5c1: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041d5c5: ja 0x41d7f0 */ if ((!fC&&!fZ)) goto L_0041d7f0;
L_0041d5cb:; BB(0x0041d5cb);
    /* 0041d5cb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041d5ce: jmp dword ptr [edx*4 + 0x41d844] */ { u32 t = R32((u32)(r_edx*4+0x41d844u)); switch (t) { case 0x41d639u: goto L_0041d639; case 0x41d78fu: goto L_0041d78f; case 0x41d73fu: goto L_0041d73f; case 0x41d712u: goto L_0041d712; case 0x41d5d5u: goto L_0041d5d5; case 0x41d69du: goto L_0041d69d; default: UNSUP(0x0041d5ce, "jump table entry is not a known target"); } }
L_0041d5d5:; BB(0x0041d5d5);
    /* 0041d5d5: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d5d9: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d5dc: jl 0x41d5e6 */ if ((fS!=fO)) goto L_0041d5e6;
L_0041d5de:; BB(0x0041d5de);
    /* 0041d5de: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d5e4: jmp 0x41d634 */ goto L_0041d634;
L_0041d5e6:; BB(0x0041d5e6);
    /* 0041d5e6: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d5ea: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d5ed: jne 0x41d5f7 */ if (!fZ) goto L_0041d5f7;
L_0041d5ef:; BB(0x0041d5ef);
    /* 0041d5ef: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041d5f5: jmp 0x41d634 */ goto L_0041d634;
L_0041d5f7:; BB(0x0041d5f7);
    /* 0041d5f7: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d5fb: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d5fe: jne 0x41d608 */ if (!fZ) goto L_0041d608;
L_0041d600:; BB(0x0041d600);
    /* 0041d600: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0041d606: jmp 0x41d634 */ goto L_0041d634;
L_0041d608:; BB(0x0041d608);
    /* 0041d608: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d60c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d60f: jne 0x41d619 */ if (!fZ) goto L_0041d619;
L_0041d611:; BB(0x0041d611);
    /* 0041d611: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0041d617: jmp 0x41d634 */ goto L_0041d634;
L_0041d619:; BB(0x0041d619);
    /* 0041d619: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0041d61b: jne 0x41d634 */ if (!fZ) goto L_0041d634;
L_0041d61d:; BB(0x0041d61d);
    /* 0041d61d: push 0x752 */ { u32 v = 0x752u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d622: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d627: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d62c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d631u); f_005e9f20();
    /* 0041d631: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d634:; BB(0x0041d634);
    /* 0041d634: jmp 0x41d80b */ goto L_0041d80b;
L_0041d639:; BB(0x0041d639);
    /* 0041d639: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d63d: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d640: jl 0x41d64a */ if ((fS!=fO)) goto L_0041d64a;
L_0041d642:; BB(0x0041d642);
    /* 0041d642: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d648: jmp 0x41d698 */ goto L_0041d698;
L_0041d64a:; BB(0x0041d64a);
    /* 0041d64a: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d64e: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d651: jl 0x41d65b */ if ((fS!=fO)) goto L_0041d65b;
L_0041d653:; BB(0x0041d653);
    /* 0041d653: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041d659: jmp 0x41d698 */ goto L_0041d698;
L_0041d65b:; BB(0x0041d65b);
    /* 0041d65b: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d65f: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d662: jl 0x41d66c */ if ((fS!=fO)) goto L_0041d66c;
L_0041d664:; BB(0x0041d664);
    /* 0041d664: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0041d66a: jmp 0x41d698 */ goto L_0041d698;
L_0041d66c:; BB(0x0041d66c);
    /* 0041d66c: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d670: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d673: jl 0x41d67d */ if ((fS!=fO)) goto L_0041d67d;
L_0041d675:; BB(0x0041d675);
    /* 0041d675: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0041d67b: jmp 0x41d698 */ goto L_0041d698;
L_0041d67d:; BB(0x0041d67d);
    /* 0041d67d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0041d67f: jne 0x41d698 */ if (!fZ) goto L_0041d698;
L_0041d681:; BB(0x0041d681);
    /* 0041d681: push 0x75e */ { u32 v = 0x75eu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d686: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d68b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d690: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d695u); f_005e9f20();
    /* 0041d695: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d698:; BB(0x0041d698);
    /* 0041d698: jmp 0x41d80b */ goto L_0041d80b;
L_0041d69d:; BB(0x0041d69d);
    /* 0041d69d: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d6a1: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d6a4: jne 0x41d6ae */ if (!fZ) goto L_0041d6ae;
L_0041d6a6:; BB(0x0041d6a6);
    /* 0041d6a6: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d6ac: jmp 0x41d70d */ goto L_0041d70d;
L_0041d6ae:; BB(0x0041d6ae);
    /* 0041d6ae: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d6b2: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d6b5: jne 0x41d6bf */ if (!fZ) goto L_0041d6bf;
L_0041d6b7:; BB(0x0041d6b7);
    /* 0041d6b7: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041d6bd: jmp 0x41d70d */ goto L_0041d70d;
L_0041d6bf:; BB(0x0041d6bf);
    /* 0041d6bf: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d6c3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d6c6: jne 0x41d6d0 */ if (!fZ) goto L_0041d6d0;
L_0041d6c8:; BB(0x0041d6c8);
    /* 0041d6c8: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0041d6ce: jmp 0x41d70d */ goto L_0041d70d;
L_0041d6d0:; BB(0x0041d6d0);
    /* 0041d6d0: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d6d4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d6d7: jne 0x41d6e1 */ if (!fZ) goto L_0041d6e1;
L_0041d6d9:; BB(0x0041d6d9);
    /* 0041d6d9: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0041d6df: jmp 0x41d70d */ goto L_0041d70d;
L_0041d6e1:; BB(0x0041d6e1);
    /* 0041d6e1: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d6e5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d6e8: jne 0x41d6f2 */ if (!fZ) goto L_0041d6f2;
L_0041d6ea:; BB(0x0041d6ea);
    /* 0041d6ea: mov word ptr [ebp - 0xc], 4 */ W16((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 0041d6f0: jmp 0x41d70d */ goto L_0041d70d;
L_0041d6f2:; BB(0x0041d6f2);
    /* 0041d6f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0041d6f4: jne 0x41d70d */ if (!fZ) goto L_0041d70d;
L_0041d6f6:; BB(0x0041d6f6);
    /* 0041d6f6: push 0x76c */ { u32 v = 0x76cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d6fb: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d700: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d705: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d70au); f_005e9f20();
    /* 0041d70a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d70d:; BB(0x0041d70d);
    /* 0041d70d: jmp 0x41d80b */ goto L_0041d80b;
L_0041d712:; BB(0x0041d712);
    /* 0041d712: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d716: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d719: jne 0x41d723 */ if (!fZ) goto L_0041d723;
L_0041d71b:; BB(0x0041d71b);
    /* 0041d71b: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d721: jmp 0x41d73a */ goto L_0041d73a;
L_0041d723:; BB(0x0041d723);
    /* 0041d723: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d727: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041d728: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041d72a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0041d72c: mov edx, 0xa */ r_edx = 0xau;
    /* 0041d731: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041d733: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041d736: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_0041d73a:; BB(0x0041d73a);
    /* 0041d73a: jmp 0x41d80b */ goto L_0041d80b;
L_0041d73f:; BB(0x0041d73f);
    /* 0041d73f: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d743: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d746: jl 0x41d750 */ if ((fS!=fO)) goto L_0041d750;
L_0041d748:; BB(0x0041d748);
    /* 0041d748: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d74e: jmp 0x41d78d */ goto L_0041d78d;
L_0041d750:; BB(0x0041d750);
    /* 0041d750: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d754: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d757: jne 0x41d761 */ if (!fZ) goto L_0041d761;
L_0041d759:; BB(0x0041d759);
    /* 0041d759: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041d75f: jmp 0x41d78d */ goto L_0041d78d;
L_0041d761:; BB(0x0041d761);
    /* 0041d761: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d765: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d768: jl 0x41d772 */ if ((fS!=fO)) goto L_0041d772;
L_0041d76a:; BB(0x0041d76a);
    /* 0041d76a: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0041d770: jmp 0x41d78d */ goto L_0041d78d;
L_0041d772:; BB(0x0041d772);
    /* 0041d772: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041d774: jne 0x41d78d */ if (!fZ) goto L_0041d78d;
L_0041d776:; BB(0x0041d776);
    /* 0041d776: push 0x77c */ { u32 v = 0x77cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d77b: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d780: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d785: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d78au); f_005e9f20();
    /* 0041d78a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d78d:; BB(0x0041d78d);
    /* 0041d78d: jmp 0x41d80b */ goto L_0041d80b;
L_0041d78f:; BB(0x0041d78f);
    /* 0041d78f: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d793: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d796: jl 0x41d7a0 */ if ((fS!=fO)) goto L_0041d7a0;
L_0041d798:; BB(0x0041d798);
    /* 0041d798: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041d79e: jmp 0x41d7ee */ goto L_0041d7ee;
L_0041d7a0:; BB(0x0041d7a0);
    /* 0041d7a0: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d7a4: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d7a7: jl 0x41d7b1 */ if ((fS!=fO)) goto L_0041d7b1;
L_0041d7a9:; BB(0x0041d7a9);
    /* 0041d7a9: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041d7af: jmp 0x41d7ee */ goto L_0041d7ee;
L_0041d7b1:; BB(0x0041d7b1);
    /* 0041d7b1: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d7b5: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041d7b8: jne 0x41d7c2 */ if (!fZ) goto L_0041d7c2;
L_0041d7ba:; BB(0x0041d7ba);
    /* 0041d7ba: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0041d7c0: jmp 0x41d7ee */ goto L_0041d7ee;
L_0041d7c2:; BB(0x0041d7c2);
    /* 0041d7c2: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0041d7c6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041d7c9: jl 0x41d7d3 */ if ((fS!=fO)) goto L_0041d7d3;
L_0041d7cb:; BB(0x0041d7cb);
    /* 0041d7cb: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0041d7d1: jmp 0x41d7ee */ goto L_0041d7ee;
L_0041d7d3:; BB(0x0041d7d3);
    /* 0041d7d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0041d7d5: jne 0x41d7ee */ if (!fZ) goto L_0041d7ee;
L_0041d7d7:; BB(0x0041d7d7);
    /* 0041d7d7: push 0x788 */ { u32 v = 0x788u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7dc: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7e1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7e6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d7ebu); f_005e9f20();
    /* 0041d7eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d7ee:; BB(0x0041d7ee);
    /* 0041d7ee: jmp 0x41d80b */ goto L_0041d80b;
L_0041d7f0:; BB(0x0041d7f0);
    /* 0041d7f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0041d7f2: jne 0x41d80b */ if (!fZ) goto L_0041d80b;
L_0041d7f4:; BB(0x0041d7f4);
    /* 0041d7f4: push 0x78b */ { u32 v = 0x78bu; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7f9: push 0x6b4b30 */ { u32 v = 0x6b4b30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d7fe: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041d803: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41d808u); f_005e9f20();
    /* 0041d808: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041d80b:; BB(0x0041d80b);
    /* 0041d80b: movsx ecx, word ptr [ebp + 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0041d80f: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041d812: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
    /* 0041d816: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0041d81a: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041d81d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0041d820: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0041d824: imul eax, eax, 0x12 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x12u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041d827: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041d82a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041d82d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041d830: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0041d832: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041d835: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0041d838: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041d83b: mov esp, ebp */ r_esp = r_ebp;
    /* 0041d83d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041d83e: ret 0x10 */ FN_RET(0x0041d5a0); r_esp += 20; return;
}

