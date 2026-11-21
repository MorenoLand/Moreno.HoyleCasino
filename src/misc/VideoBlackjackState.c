#include "protos.h"

void f_00548880(void) /* VideoBlackjackState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548880);
    /* 00548880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548881: mov ebp, esp */ r_ebp = r_esp;
    /* 00548883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548887: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054888a: call 0x5d0980 */ r_esp -= 4; W32(r_esp, 0x54888fu); f_005d0980();
    /* 0054888f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548892: mov dword ptr [eax], 0x6c6fec */ W32((u32)(r_eax), 0x6c6fecu);
    /* 00548898: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054889b: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005488a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005488a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005488a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005488a8: ret  */ FN_RET(0x00548880); r_esp += 4; return;
}

void f_005488b0(void) /* VideoBlackjackState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005488b0);
    /* 005488b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005488b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005488b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005488b5: push 0x6a5298 */ { u32 v = 0x6a5298u; r_esp -= 4; W32(r_esp, v); }
    /* 005488ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005488c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005488c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005488c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005488c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005488cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005488cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005488cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005488d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005488d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005488db: mov dword ptr [eax], 0x6c6fec */ W32((u32)(r_eax), 0x6c6fecu);
    /* 005488e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005488e8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005488eb: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005488ee: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005488f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005488f4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005488f7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005488fb: je 0x548910 */ if (fZ) goto L_00548910;
L_005488fd:; BB(0x005488fd);
    /* 005488fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005488ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00548902: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00548904: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00548907: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00548909: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54890bu); call_ind(t); }
    /* 0054890b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054890e: jmp 0x548917 */ goto L_00548917;
L_00548910:; BB(0x00548910);
    /* 00548910: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00548917:; BB(0x00548917);
    /* 00548917: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054891e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00548921: call 0x5d0a00 */ r_esp -= 4; W32(r_esp, 0x548926u); f_005d0a00();
    /* 00548926: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548929: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00548930: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00548931: mov esp, ebp */ r_esp = r_ebp;
    /* 00548933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548934: ret  */ FN_RET(0x005488b0); r_esp += 4; return;
}

void f_00548fe0(void) /* videoblackjackstate::func_00548fe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548fe0);
    /* 00548fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00548fe3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548fe6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00548fe9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00548fec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548fed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00548ff0: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x548ff5u); f_00548f80();
    /* 00548ff5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00548ff8: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548ffc: jl 0x549004 */ if ((fS!=fO)) goto L_00549004;
L_00548ffe:; BB(0x00548ffe);
    /* 00548ffe: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549002: jl 0x54901b */ if ((fS!=fO)) goto L_0054901b;
L_00549004:; BB(0x00549004);
    /* 00549004: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 00549009: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054900e: push 0x6c7004 */ { u32 v = 0x6c7004u; r_esp -= 4; W32(r_esp, v); }
    /* 00549013: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x549018u); f_005e9f20();
    /* 00549018: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054901b:; BB(0x0054901b);
    /* 0054901b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054901f: jge 0x549023 */ if ((fS==fO)) goto L_00549023;
L_00549021:; BB(0x00549021);
    /* 00549021: jmp 0x549072 */ goto L_00549072;
L_00549023:; BB(0x00549023);
    /* 00549023: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549027: jl 0x54902b */ if ((fS!=fO)) goto L_0054902b;
L_00549029:; BB(0x00549029);
    /* 00549029: jmp 0x549072 */ goto L_00549072;
L_0054902b:; BB(0x0054902b);
    /* 0054902b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054902e: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549031: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549034: lea ecx, [eax + edx + 0x28] */ r_ecx = (u32)(r_eax+r_edx+0x28u);
    /* 00549038: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054903b: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0054903f: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 00549043: mov cl, byte ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 00549046: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549047: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0054904a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054904b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054904e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054904f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00549052: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549053: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00549057: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549058: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054905e: call 0x544050 */ r_esp -= 4; W32(r_esp, 0x549063u); f_00544050();
    /* 00549063: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549066: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00549069: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054906c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054906f: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
L_00549072:; BB(0x00549072);
    /* 00549072: mov esp, ebp */ r_esp = r_ebp;
    /* 00549074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549075: ret 0x10 */ FN_RET(0x00548fe0); r_esp += 20; return;
}

void f_005493d0(void) /* videoblackjackstate::func_005493d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005493d0);
    /* 005493d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005493d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005493d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005493d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005493d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005493da: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005493dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005493de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005493e1: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x5493e6u); f_0054a740();
    /* 005493e6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005493e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005493eb: jne 0x549404 */ if (!fZ) goto L_00549404;
L_005493ed:; BB(0x005493ed);
    /* 005493ed: push 0x1c1 */ { u32 v = 0x1c1u; r_esp -= 4; W32(r_esp, v); }
    /* 005493f2: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 005493f7: push 0x6c7050 */ { u32 v = 0x6c7050u; r_esp -= 4; W32(r_esp, v); }
    /* 005493fc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x549401u); f_005e9f20();
    /* 00549401: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00549404:; BB(0x00549404);
    /* 00549404: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549407: cmp dword ptr [ecx + 0x20], 1 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054940b: jne 0x549439 */ if (!fZ) goto L_00549439;
L_0054940d:; BB(0x0054940d);
    /* 0054940d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549410: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00549414: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549416: je 0x54942f */ if (fZ) goto L_0054942f;
L_00549418:; BB(0x00549418);
    /* 00549418: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054941a: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00549420: call 0x5456a0 */ r_esp -= 4; W32(r_esp, 0x549425u); f_005456a0();
    /* 00549425: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549428: call 0x548c10 */ r_esp -= 4; W32(r_esp, 0x54942du); f_00548c10();
    /* 0054942d: jmp 0x549437 */ goto L_00549437;
L_0054942f:; BB(0x0054942f);
    /* 0054942f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549432: call 0x549d60 */ r_esp -= 4; W32(r_esp, 0x549437u); f_00549d60();
L_00549437:; BB(0x00549437);
    /* 00549437: jmp 0x549465 */ goto L_00549465;
L_00549439:; BB(0x00549439);
    /* 00549439: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054943c: cmp dword ptr [ecx + 0x20], 2 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549440: jne 0x549465 */ if (!fZ) goto L_00549465;
L_00549442:; BB(0x00549442);
    /* 00549442: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00549444: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549447: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x54944cu); f_0054a740();
    /* 0054944c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054944f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549451: je 0x54945d */ if (fZ) goto L_0054945d;
L_00549453:; BB(0x00549453);
    /* 00549453: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549456: call 0x549d60 */ r_esp -= 4; W32(r_esp, 0x54945bu); f_00549d60();
    /* 0054945b: jmp 0x549465 */ goto L_00549465;
L_0054945d:; BB(0x0054945d);
    /* 0054945d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549460: call 0x548c10 */ r_esp -= 4; W32(r_esp, 0x549465u); f_00548c10();
L_00549465:; BB(0x00549465);
    /* 00549465: mov esp, ebp */ r_esp = r_ebp;
    /* 00549467: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549468: ret  */ FN_RET(0x005493d0); r_esp += 4; return;
}

void f_005497e0(void) /* videoblackjackstate::func_005497e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005497e0);
    /* 005497e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005497e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005497e3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005497e6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005497e9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005497ec: call 0x549910 */ r_esp -= 4; W32(r_esp, 0x5497f1u); f_00549910();
    /* 005497f1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005497f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005497f6: jne 0x54980f */ if (!fZ) goto L_0054980f;
L_005497f8:; BB(0x005497f8);
    /* 005497f8: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 005497fd: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 00549802: push 0x6c7064 */ { u32 v = 0x6c7064u; r_esp -= 4; W32(r_esp, v); }
    /* 00549807: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54980cu); f_005e9f20();
    /* 0054980c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054980f:; BB(0x0054980f);
    /* 0054980f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00549812: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00549815: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00549818: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054981b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054981e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00549821: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549824: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549827: jl 0x54985a */ if ((fS!=fO)) goto L_0054985a;
L_00549829:; BB(0x00549829);
    /* 00549829: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054982c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054982f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00549832: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549835: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00549838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549839: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054983c: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x549841u); f_005d0a20();
    /* 00549841: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00549844: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00549847: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054984a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054984d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0054984f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00549852: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00549855: jmp 0x5498ff */ goto L_005498ff;
L_0054985a:; BB(0x0054985a);
    /* 0054985a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054985d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00549860: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00549863: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549867: je 0x549885 */ if (fZ) goto L_00549885;
L_00549869:; BB(0x00549869);
    /* 00549869: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054986c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054986f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00549872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549875: sub eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00549878: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054987b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054987d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00549880: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x549885u); f_005d0a20();
L_00549885:; BB(0x00549885);
    /* 00549885: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549888: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549889: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0054988c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054988d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00549890: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x549895u); f_005d0c30();
    /* 00549895: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00549897: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054989a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054989d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005498a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005498a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005498a4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005498a7: call 0x5d0d60 */ r_esp -= 4; W32(r_esp, 0x5498acu); f_005d0d60();
    /* 005498ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005498af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005498b1: je 0x5498eb */ if (fZ) goto L_005498eb;
L_005498b3:; BB(0x005498b3);
    /* 005498b3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005498b6: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005498b9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005498bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005498bf: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005498c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005498c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005498c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005498c9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005498cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005498cd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005498d0: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5498d5u); f_005d1420();
    /* 005498d5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005498d8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005498db: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005498de: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005498e1: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005498e3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005498e6: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005498e9: jmp 0x5498ff */ goto L_005498ff;
L_005498eb:; BB(0x005498eb);
    /* 005498eb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005498ee: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005498f1: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005498f4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005498f7: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005498f9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005498fc: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_005498ff:; BB(0x005498ff);
    /* 005498ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00549901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549902: ret  */ FN_RET(0x005497e0); r_esp += 4; return;
}

void f_00549b10(void) /* videoblackjackstate::func_00549b10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00549b10);
    /* 00549b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00549b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00549b13: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00549b16: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00549b19: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b1c: call 0x549910 */ r_esp -= 4; W32(r_esp, 0x549b21u); f_00549910();
    /* 00549b21: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00549b24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549b26: jne 0x549b3f */ if (!fZ) goto L_00549b3f;
L_00549b28:; BB(0x00549b28);
    /* 00549b28: push 0x2bf */ { u32 v = 0x2bfu; r_esp -= 4; W32(r_esp, v); }
    /* 00549b2d: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 00549b32: push 0x6c7064 */ { u32 v = 0x6c7064u; r_esp -= 4; W32(r_esp, v); }
    /* 00549b37: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x549b3cu); f_005e9f20();
    /* 00549b3c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00549b3f:; BB(0x00549b3f);
    /* 00549b3f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b42: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00549b45: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00549b48: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b4b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00549b4e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00549b51: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549b54: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00549b57: jl 0x549b73 */ if ((fS!=fO)) goto L_00549b73;
L_00549b59:; BB(0x00549b59);
    /* 00549b59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b5c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00549b5f: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00549b62: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549b65: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00549b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549b69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b6c: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x549b71u); f_005d0a20();
    /* 00549b71: jmp 0x549bee */ goto L_00549bee;
L_00549b73:; BB(0x00549b73);
    /* 00549b73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b76: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00549b79: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00549b7c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549b80: je 0x549b9e */ if (fZ) goto L_00549b9e;
L_00549b82:; BB(0x00549b82);
    /* 00549b82: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b85: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00549b88: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00549b8b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549b8e: sub edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00549b91: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00549b94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549b96: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549b99: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x549b9eu); f_005d0a20();
L_00549b9e:; BB(0x00549b9e);
    /* 00549b9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549ba2: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00549ba5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549ba6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549ba9: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x549baeu); f_005d0c30();
    /* 00549bae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00549bb0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00549bb3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00549bb6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00549bb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00549bbc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00549bbd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549bc0: call 0x5d0d60 */ r_esp -= 4; W32(r_esp, 0x549bc5u); f_005d0d60();
    /* 00549bc5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00549bc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00549bca: je 0x549bee */ if (fZ) goto L_00549bee;
L_00549bcc:; BB(0x00549bcc);
    /* 00549bcc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549bcf: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549bd2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00549bd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549bd8: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00549bdb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00549bde: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00549be1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00549be2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549be6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00549be9: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x549beeu); f_005d1420();
L_00549bee:; BB(0x00549bee);
    /* 00549bee: mov esp, ebp */ r_esp = r_ebp;
    /* 00549bf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549bf1: ret  */ FN_RET(0x00549b10); r_esp += 4; return;
}

void f_0054a180(void) /* videoblackjackstate::func_0054a180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a180);
    /* 0054a180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a181: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a183: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a186: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a187: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a18a: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0054a18e: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a192: je 0x54a1b1 */ if (fZ) goto L_0054a1b1;
L_0054a194:; BB(0x0054a194);
    /* 0054a194: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a198: je 0x54a1b1 */ if (fZ) goto L_0054a1b1;
L_0054a19a:; BB(0x0054a19a);
    /* 0054a19a: push 0x37f */ { u32 v = 0x37fu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a19f: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1a4: push 0x6c707c */ { u32 v = 0x6c707cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1a9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54a1aeu); f_005e9f20();
    /* 0054a1ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054a1b1:; BB(0x0054a1b1);
    /* 0054a1b1: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a1b5: jne 0x54a1c9 */ if (!fZ) goto L_0054a1c9;
L_0054a1b7:; BB(0x0054a1b7);
    /* 0054a1b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a1ba: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 0054a1be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a1c0: jne 0x54a1c9 */ if (!fZ) goto L_0054a1c9;
L_0054a1c2:; BB(0x0054a1c2);
    /* 0054a1c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054a1c4: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a1c9:; BB(0x0054a1c9);
    /* 0054a1c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a1cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a1d0: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x54a1d5u); f_0054a740();
    /* 0054a1d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054a1d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a1da: je 0x54a1e6 */ if (fZ) goto L_0054a1e6;
L_0054a1dc:; BB(0x0054a1dc);
    /* 0054a1dc: mov eax, 5 */ r_eax = 0x5u;
    /* 0054a1e1: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a1e6:; BB(0x0054a1e6);
    /* 0054a1e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a1eb: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x54a1f0u); f_0054a6c0();
    /* 0054a1f0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054a1f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a1f5: je 0x54a214 */ if (fZ) goto L_0054a214;
L_0054a1f7:; BB(0x0054a1f7);
    /* 0054a1f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a1fe: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x54a203u); f_0054a6c0();
    /* 0054a203: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054a206: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a208: je 0x54a214 */ if (fZ) goto L_0054a214;
L_0054a20a:; BB(0x0054a20a);
    /* 0054a20a: mov eax, 4 */ r_eax = 0x4u;
    /* 0054a20f: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a214:; BB(0x0054a214);
    /* 0054a214: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a217: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a218: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a21b: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x54a220u); f_0054a6c0();
    /* 0054a220: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054a223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a225: je 0x54a231 */ if (fZ) goto L_0054a231;
L_0054a227:; BB(0x0054a227);
    /* 0054a227: mov eax, 1 */ r_eax = 0x1u;
    /* 0054a22c: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a231:; BB(0x0054a231);
    /* 0054a231: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a233: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a236: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x54a23bu); f_0054a740();
    /* 0054a23b: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0054a23e: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054a242: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a244: je 0x54a26d */ if (fZ) goto L_0054a26d;
L_0054a246:; BB(0x0054a246);
    /* 0054a246: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a24a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a24d: call 0x54a920 */ r_esp -= 4; W32(r_esp, 0x54a252u); f_0054a920();
    /* 0054a252: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054a255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a257: je 0x54a263 */ if (fZ) goto L_0054a263;
L_0054a259:; BB(0x0054a259);
    /* 0054a259: mov eax, 6 */ r_eax = 0x6u;
    /* 0054a25e: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a263:; BB(0x0054a263);
    /* 0054a263: mov eax, 2 */ r_eax = 0x2u;
    /* 0054a268: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a26d:; BB(0x0054a26d);
    /* 0054a26d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a270: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a271: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a274: call 0x54a7a0 */ r_esp -= 4; W32(r_esp, 0x54a279u); f_0054a7a0();
    /* 0054a279: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054a27c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a27e: je 0x54a287 */ if (fZ) goto L_0054a287;
L_0054a280:; BB(0x0054a280);
    /* 0054a280: mov eax, 2 */ r_eax = 0x2u;
    /* 0054a285: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a287:; BB(0x0054a287);
    /* 0054a287: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a28a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a28b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a28e: call 0x54a920 */ r_esp -= 4; W32(r_esp, 0x54a293u); f_0054a920();
    /* 0054a293: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054a296: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a298: je 0x54a2a1 */ if (fZ) goto L_0054a2a1;
L_0054a29a:; BB(0x0054a29a);
    /* 0054a29a: mov eax, 6 */ r_eax = 0x6u;
    /* 0054a29f: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a2a1:; BB(0x0054a2a1);
    /* 0054a2a1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a2a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a2a8: call 0x54a7e0 */ r_esp -= 4; W32(r_esp, 0x54a2adu); f_0054a7e0();
    /* 0054a2ad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054a2b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a2b2: je 0x54a2bb */ if (fZ) goto L_0054a2bb;
L_0054a2b4:; BB(0x0054a2b4);
    /* 0054a2b4: mov eax, 4 */ r_eax = 0x4u;
    /* 0054a2b9: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a2bb:; BB(0x0054a2bb);
    /* 0054a2bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a2c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a2c4: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a2c9u); f_00549e80();
    /* 0054a2c9: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a2cc: jg 0x54a2f5 */ if ((!fZ&&fS==fO)) goto L_0054a2f5;
L_0054a2ce:; BB(0x0054a2ce);
    /* 0054a2ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a2d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a2d7: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a2dcu); f_00549e80();
    /* 0054a2dc: mov esi, eax */ r_esi = r_eax;
    /* 0054a2de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a2e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a2e5: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a2eau); f_00549e80();
    /* 0054a2ea: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a2ec: jle 0x54a2f5 */ if ((fZ||fS!=fO)) goto L_0054a2f5;
L_0054a2ee:; BB(0x0054a2ee);
    /* 0054a2ee: mov eax, 2 */ r_eax = 0x2u;
    /* 0054a2f3: jmp 0x54a2fa */ goto L_0054a2fa;
L_0054a2f5:; BB(0x0054a2f5);
    /* 0054a2f5: mov eax, 3 */ r_eax = 0x3u;
L_0054a2fa:; BB(0x0054a2fa);
    /* 0054a2fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054a2fb: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a2fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a2fe: ret 4 */ FN_RET(0x0054a180); r_esp += 8; return;
}

void f_0054ad80(void) /* videoblackjackstate::func_0054ad80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ad80);
    /* 0054ad80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad81: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ad83: sub esp, 0x668 */ {  u32 a = r_esp; u32 b = 0x668u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ad89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0054ad8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054ad90: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054ad93: mov dword ptr [ebp - 0x664], ecx */ W32((u32)(r_ebp+0xfffff99cu), r_ecx);
    /* 0054ad99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad9b: mov eax, dword ptr [ebp - 0x664] */ r_eax = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054ada1: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0054ada4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ada5: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054adab: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54adb0u); f_00549e80();
    /* 0054adb0: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0054adb4: mov edx, dword ptr [ebp - 0x664] */ r_edx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054adba: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0054adbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054adbe: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054adc4: call 0x549fa0 */ r_esp -= 4; W32(r_esp, 0x54adc9u); f_00549fa0();
    /* 0054adc9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054adcd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054adcf: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054add1: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0054add4: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 0054add7: mov eax, dword ptr [ebp - 0x664] */ r_eax = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054addd: mov cx, word ptr [eax + 0x2a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x2au))) & 0xffffu);
    /* 0054ade1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ade2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ade7u); f_00641280();
    /* 0054ade7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054adea: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 0054adee: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054adf2: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054adf5: jne 0x54adff */ if (!fZ) goto L_0054adff;
L_0054adf7:; BB(0x0054adf7);
    /* 0054adf7: mov word ptr [ebp - 0x34], 0xb */ W16((u32)(r_ebp+0xffffffccu), 0xbu);
    /* 0054adfd: jmp 0x54ae12 */ goto L_0054ae12;
L_0054adff:; BB(0x0054adff);
    /* 0054adff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae03: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054ae09: call 0x54a0c0 */ r_esp -= 4; W32(r_esp, 0x54ae0eu); f_0054a0c0();
    /* 0054ae0e: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
L_0054ae12:; BB(0x0054ae12);
    /* 0054ae12: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae16: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ae19: jge 0x54ae2d */ if ((fS==fO)) goto L_0054ae2d;
L_0054ae1b:; BB(0x0054ae1b);
    /* 0054ae1b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae1f: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae22: je 0x54ae2d */ if (fZ) goto L_0054ae2d;
L_0054ae24:; BB(0x0054ae24);
    /* 0054ae24: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae28: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae2b: jne 0x54ae4f */ if (!fZ) goto L_0054ae4f;
L_0054ae2d:; BB(0x0054ae2d);
    /* 0054ae2d: push 0x6c7240 */ { u32 v = 0x6c7240u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae32: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ae37u); f_00630f40();
    /* 0054ae37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ae3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae3b: lea eax, [ebp - 0x658] */ r_eax = (u32)(r_ebp+0xfffff9a8u);
    /* 0054ae41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae42: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54ae47u); f_00686d8e();
    /* 0054ae47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ae4a: jmp 0x54af54 */ goto L_0054af54;
L_0054ae4f:; BB(0x0054ae4f);
    /* 0054ae4f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae53: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ae56: jge 0x54ae84 */ if ((fS==fO)) goto L_0054ae84;
L_0054ae58:; BB(0x0054ae58);
    /* 0054ae58: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae5c: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae5f: je 0x54ae84 */ if (fZ) goto L_0054ae84;
L_0054ae61:; BB(0x0054ae61);
    /* 0054ae61: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae65: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae68: je 0x54ae84 */ if (fZ) goto L_0054ae84;
L_0054ae6a:; BB(0x0054ae6a);
    /* 0054ae6a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae6e: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ae71: jl 0x54aea6 */ if ((fS!=fO)) goto L_0054aea6;
L_0054ae73:; BB(0x0054ae73);
    /* 0054ae73: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054ae77: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ae7a: jg 0x54aea6 */ if ((!fZ&&fS==fO)) goto L_0054aea6;
L_0054ae7c:; BB(0x0054ae7c);
    /* 0054ae7c: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 0054ae80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae82: je 0x54aea6 */ if (fZ) goto L_0054aea6;
L_0054ae84:; BB(0x0054ae84);
    /* 0054ae84: push 0x6c7228 */ { u32 v = 0x6c7228u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae89: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ae8eu); f_00630f40();
    /* 0054ae8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ae91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae92: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 0054ae98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae99: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54ae9eu); f_00686d8e();
    /* 0054ae9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aea1: jmp 0x54af54 */ goto L_0054af54;
L_0054aea6:; BB(0x0054aea6);
    /* 0054aea6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054aeaa: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aead: je 0x54aec1 */ if (fZ) goto L_0054aec1;
L_0054aeaf:; BB(0x0054aeaf);
    /* 0054aeaf: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054aeb3: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aeb6: je 0x54aec1 */ if (fZ) goto L_0054aec1;
L_0054aeb8:; BB(0x0054aeb8);
    /* 0054aeb8: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054aebc: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aebf: jne 0x54aee0 */ if (!fZ) goto L_0054aee0;
L_0054aec1:; BB(0x0054aec1);
    /* 0054aec1: push 0x6c7210 */ { u32 v = 0x6c7210u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aec6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54aecbu); f_00630f40();
    /* 0054aecb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aecf: lea edx, [ebp - 0x658] */ r_edx = (u32)(r_ebp+0xfffff9a8u);
    /* 0054aed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054aed6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54aedbu); f_00686d8e();
    /* 0054aedb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aede: jmp 0x54af54 */ goto L_0054af54;
L_0054aee0:; BB(0x0054aee0);
    /* 0054aee0: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054aee4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054aee7: jg 0x54af08 */ if ((!fZ&&fS==fO)) goto L_0054af08;
L_0054aee9:; BB(0x0054aee9);
    /* 0054aee9: push 0x6c71fc */ { u32 v = 0x6c71fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054aeee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54aef3u); f_00630f40();
    /* 0054aef3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aef7: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 0054aefd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054aefe: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54af03u); f_00686d8e();
    /* 0054af03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054af06: jmp 0x54af54 */ goto L_0054af54;
L_0054af08:; BB(0x0054af08);
    /* 0054af08: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054af0c: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054af0f: jl 0x54af39 */ if ((fS!=fO)) goto L_0054af39;
L_0054af11:; BB(0x0054af11);
    /* 0054af11: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054af15: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054af18: jg 0x54af39 */ if ((!fZ&&fS==fO)) goto L_0054af39;
L_0054af1a:; BB(0x0054af1a);
    /* 0054af1a: push 0x6c71e4 */ { u32 v = 0x6c71e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054af1f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54af24u); f_00630f40();
    /* 0054af24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054af27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af28: lea ecx, [ebp - 0x658] */ r_ecx = (u32)(r_ebp+0xfffff9a8u);
    /* 0054af2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054af2f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54af34u); f_00686d8e();
    /* 0054af34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054af37: jmp 0x54af54 */ goto L_0054af54;
L_0054af39:; BB(0x0054af39);
    /* 0054af39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0054af3b: jne 0x54af54 */ if (!fZ) goto L_0054af54;
L_0054af3d:; BB(0x0054af3d);
    /* 0054af3d: push 0x510 */ { u32 v = 0x510u; r_esp -= 4; W32(r_esp, v); }
    /* 0054af42: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054af47: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054af4c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54af51u); f_005e9f20();
    /* 0054af51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054af54:; BB(0x0054af54);
    /* 0054af54: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054af58: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054af5b: jl 0x54af7c */ if ((fS!=fO)) goto L_0054af7c;
L_0054af5d:; BB(0x0054af5d);
    /* 0054af5d: push 0x6c7240 */ { u32 v = 0x6c7240u; r_esp -= 4; W32(r_esp, v); }
    /* 0054af62: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54af67u); f_00630f40();
    /* 0054af67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054af6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af6b: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0054af6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054af6f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54af74u); f_00686d8e();
    /* 0054af74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054af77: jmp 0x54b052 */ goto L_0054b052;
L_0054af7c:; BB(0x0054af7c);
    /* 0054af7c: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054af80: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054af83: je 0x54af8e */ if (fZ) goto L_0054af8e;
L_0054af85:; BB(0x0054af85);
    /* 0054af85: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054af89: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054af8c: jne 0x54afad */ if (!fZ) goto L_0054afad;
L_0054af8e:; BB(0x0054af8e);
    /* 0054af8e: push 0x6c7228 */ { u32 v = 0x6c7228u; r_esp -= 4; W32(r_esp, v); }
    /* 0054af93: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54af98u); f_00630f40();
    /* 0054af98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054af9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af9c: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0054af9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054afa0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54afa5u); f_00686d8e();
    /* 0054afa5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054afa8: jmp 0x54b052 */ goto L_0054b052;
L_0054afad:; BB(0x0054afad);
    /* 0054afad: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054afb1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afb4: je 0x54afbf */ if (fZ) goto L_0054afbf;
L_0054afb6:; BB(0x0054afb6);
    /* 0054afb6: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054afba: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afbd: jne 0x54afdb */ if (!fZ) goto L_0054afdb;
L_0054afbf:; BB(0x0054afbf);
    /* 0054afbf: push 0x6c7210 */ { u32 v = 0x6c7210u; r_esp -= 4; W32(r_esp, v); }
    /* 0054afc4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54afc9u); f_00630f40();
    /* 0054afc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054afcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054afcd: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0054afd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054afd1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54afd6u); f_00686d8e();
    /* 0054afd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054afd9: jmp 0x54b052 */ goto L_0054b052;
L_0054afdb:; BB(0x0054afdb);
    /* 0054afdb: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054afdf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afe2: je 0x54afed */ if (fZ) goto L_0054afed;
L_0054afe4:; BB(0x0054afe4);
    /* 0054afe4: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054afe8: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afeb: jne 0x54b009 */ if (!fZ) goto L_0054b009;
L_0054afed:; BB(0x0054afed);
    /* 0054afed: push 0x6c71fc */ { u32 v = 0x6c71fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054aff2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54aff7u); f_00630f40();
    /* 0054aff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054affa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054affb: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0054affe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054afff: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b004u); f_00686d8e();
    /* 0054b004: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b007: jmp 0x54b052 */ goto L_0054b052;
L_0054b009:; BB(0x0054b009);
    /* 0054b009: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054b00d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b010: je 0x54b01b */ if (fZ) goto L_0054b01b;
L_0054b012:; BB(0x0054b012);
    /* 0054b012: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054b016: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b019: jne 0x54b037 */ if (!fZ) goto L_0054b037;
L_0054b01b:; BB(0x0054b01b);
    /* 0054b01b: push 0x6c71e4 */ { u32 v = 0x6c71e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b020: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b025u); f_00630f40();
    /* 0054b025: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b029: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0054b02c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b02d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b032u); f_00686d8e();
    /* 0054b032: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b035: jmp 0x54b052 */ goto L_0054b052;
L_0054b037:; BB(0x0054b037);
    /* 0054b037: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0054b039: jne 0x54b052 */ if (!fZ) goto L_0054b052;
L_0054b03b:; BB(0x0054b03b);
    /* 0054b03b: push 0x51d */ { u32 v = 0x51du; r_esp -= 4; W32(r_esp, v); }
    /* 0054b040: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b045: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b04a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54b04fu); f_005e9f20();
    /* 0054b04f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b052:; BB(0x0054b052);
    /* 0054b052: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0054b055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b056: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0054b059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b05a: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054b060: call 0x54c000 */ r_esp -= 4; W32(r_esp, 0x54b065u); f_0054c000();
    /* 0054b065: mov cl, byte ptr [ebp - 0x2d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd3u))) & 0xffu);
    /* 0054b068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b069: mov dx, word ptr [ebp - 0x34] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffccu))) & 0xffffu);
    /* 0054b06d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b06e: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054b072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b073: lea ecx, [ebp - 0x648] */ r_ecx = (u32)(r_ebp+0xfffff9b8u);
    /* 0054b079: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b07a: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054b080: call 0x54b1e0 */ r_esp -= 4; W32(r_esp, 0x54b085u); f_0054b1e0();
    /* 0054b085: mov dx, word ptr [ebp - 0x34] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffccu))) & 0xffffu);
    /* 0054b089: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b08a: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054b08e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b08f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054b092: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b093: lea edx, [ebp - 0x660] */ r_edx = (u32)(r_ebp+0xfffff9a0u);
    /* 0054b099: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b09a: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 0054b0a0: call 0x54c170 */ r_esp -= 4; W32(r_esp, 0x54b0a5u); f_0054c170();
    /* 0054b0a5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054b0a7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054b0aa: mov dword ptr [ebp - 0x448], ecx */ W32((u32)(r_ebp+0xfffffbb8u), r_ecx);
    /* 0054b0b0: mov dword ptr [ebp - 0x444], edx */ W32((u32)(r_ebp+0xfffffbbcu), r_edx);
    /* 0054b0b6: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0054b0bc: add eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054b0bf: mov dword ptr [ebp - 0x448], eax */ W32((u32)(r_ebp+0xfffffbb8u), r_eax);
    /* 0054b0c5: mov ecx, dword ptr [ebp - 0x444] */ r_ecx = R32((u32)(r_ebp+0xfffffbbcu));
    /* 0054b0cb: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b0ce: mov dword ptr [ebp - 0x444], ecx */ W32((u32)(r_ebp+0xfffffbbcu), r_ecx);
    /* 0054b0d4: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054b0d8: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b0db: jne 0x54b0f9 */ if (!fZ) goto L_0054b0f9;
L_0054b0dd:; BB(0x0054b0dd);
    /* 0054b0dd: push 0x6c71d0 */ { u32 v = 0x6c71d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0e2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b0e7u); f_00630f40();
    /* 0054b0e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b0ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0eb: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 0054b0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0ef: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b0f4u); f_00686d8e();
    /* 0054b0f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b0f7: jmp 0x54b110 */ goto L_0054b110;
L_0054b0f9:; BB(0x0054b0f9);
    /* 0054b0f9: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0054b0fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0fe: push 0x6b4e68 */ { u32 v = 0x6b4e68u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b103: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0054b106: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b107: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b10du); call_ind(t); }
    /* 0054b10d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b110:; BB(0x0054b110);
    /* 0054b110: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 0054b114: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b116: je 0x54b12d */ if (fZ) goto L_0054b12d;
L_0054b118:; BB(0x0054b118);
    /* 0054b118: push 0x6c71bc */ { u32 v = 0x6c71bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b11d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b122u); f_00630f40();
    /* 0054b122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b125: mov dword ptr [ebp - 0x668], eax */ W32((u32)(r_ebp+0xfffff998u), r_eax);
    /* 0054b12b: jmp 0x54b140 */ goto L_0054b140;
L_0054b12d:; BB(0x0054b12d);
    /* 0054b12d: push 0x6c71a8 */ { u32 v = 0x6c71a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b132: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b137u); f_00630f40();
    /* 0054b137: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b13a: mov dword ptr [ebp - 0x668], eax */ W32((u32)(r_ebp+0xfffff998u), r_eax);
L_0054b140:; BB(0x0054b140);
    /* 0054b140: lea ecx, [ebp - 0x648] */ r_ecx = (u32)(r_ebp+0xfffff9b8u);
    /* 0054b146: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b147: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0054b14a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b14b: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0054b14e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b14f: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0054b152: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b153: lea edx, [ebp - 0x658] */ r_edx = (u32)(r_ebp+0xfffff9a8u);
    /* 0054b159: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b15a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0054b15e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b15f: mov ecx, dword ptr [ebp - 0x668] */ r_ecx = R32((u32)(r_ebp+0xfffff998u));
    /* 0054b165: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b166: push 0x6c7184 */ { u32 v = 0x6c7184u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b16b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b170u); f_00630f40();
    /* 0054b170: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b174: lea edx, [ebp - 0x440] */ r_edx = (u32)(r_ebp+0xfffffbc0u);
    /* 0054b17a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b17b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b181u); call_ind(t); }
    /* 0054b181: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b184: lea eax, [ebp - 0x440] */ r_eax = (u32)(r_ebp+0xfffffbc0u);
    /* 0054b18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b18b: push 0x6c716c */ { u32 v = 0x6c716cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b190: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b195u); f_00630f40();
    /* 0054b195: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b199: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b19b: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0054b1a1: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x54b1a6u); f_0057be80();
    /* 0054b1a6: mov ecx, dword ptr [ebp - 0x444] */ r_ecx = R32((u32)(r_ebp+0xfffffbbcu));
    /* 0054b1ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1ad: mov edx, dword ptr [ebp - 0x448] */ r_edx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0054b1b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1b4: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1b9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054b1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1bf: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0054b1c5: call 0x57c0b0 */ r_esp -= 4; W32(r_esp, 0x54b1cau); f_0057c0b0();
    /* 0054b1ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054b1cd: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b1cf: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x54b1d4u); f_00686d72();
    /* 0054b1d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0054b1d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b1d7: ret  */ FN_RET(0x0054ad80); r_esp += 4; return;
}

void f_0054b1e0(void) /* videoblackjackstate::func_0054b1e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054b1e0);
    /* 0054b1e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054b1e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054b1e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054b1e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054b1e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054b1ec: call 0x549ad0 */ r_esp -= 4; W32(r_esp, 0x54b1f1u); f_00549ad0();
    /* 0054b1f1: mov byte ptr [ebp - 3], al */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_eax);
    /* 0054b1f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054b1f7: call 0x5497a0 */ r_esp -= 4; W32(r_esp, 0x54b1fcu); f_005497a0();
    /* 0054b1fc: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0054b1ff: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 0054b203: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0054b207: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054b20a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054b20d: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b210: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054b213: cmp dword ptr [ebp - 0xc], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054b217: ja 0x54bf90 */ if ((!fC&&!fZ)) goto L_0054bf90;
L_0054b21d:; BB(0x0054b21d);
    /* 0054b21d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054b220: jmp dword ptr [edx*4 + 0x54bfb4] */ { u32 t = R32((u32)(r_edx*4+0x54bfb4u)); switch (t) { case 0x54b227u: goto L_0054b227; case 0x54b28fu: goto L_0054b28f; case 0x54b2aeu: goto L_0054b2ae; case 0x54b316u: goto L_0054b316; case 0x54b335u: goto L_0054b335; case 0x54b3c2u: goto L_0054b3c2; case 0x54b417u: goto L_0054b417; case 0x54b4c8u: goto L_0054b4c8; case 0x54b530u: goto L_0054b530; case 0x54b695u: goto L_0054b695; case 0x54b79bu: goto L_0054b79b; case 0x54b8eau: goto L_0054b8ea; case 0x54ba52u: goto L_0054ba52; case 0x54bc12u: goto L_0054bc12; case 0x54bcc7u: goto L_0054bcc7; case 0x54becdu: goto L_0054becd; case 0x54bf10u: goto L_0054bf10; case 0x54bf74u: goto L_0054bf74; default: UNSUP(0x0054b220, "jump table entry is not a known target"); } }
L_0054b227:; BB(0x0054b227);
    /* 0054b227: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b22b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b22d: je 0x54b270 */ if (fZ) goto L_0054b270;
L_0054b22f:; BB(0x0054b22f);
    /* 0054b22f: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b233: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b236: jge 0x54b254 */ if ((fS==fO)) goto L_0054b254;
L_0054b238:; BB(0x0054b238);
    /* 0054b238: push 0x6c7d98 */ { u32 v = 0x6c7d98u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b23d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b242u); f_00630f40();
    /* 0054b242: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b246: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b24a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b24fu); f_00686d8e();
    /* 0054b24f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b252: jmp 0x54b26e */ goto L_0054b26e;
L_0054b254:; BB(0x0054b254);
    /* 0054b254: push 0x6c7d74 */ { u32 v = 0x6c7d74u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b259: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b25eu); f_00630f40();
    /* 0054b25e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b261: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b262: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b266: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b26bu); f_00686d8e();
    /* 0054b26b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b26e:; BB(0x0054b26e);
    /* 0054b26e: jmp 0x54b28a */ goto L_0054b28a;
L_0054b270:; BB(0x0054b270);
    /* 0054b270: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b275: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b27au); f_00630f40();
    /* 0054b27a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b27d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b27e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b281: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b282: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b287u); f_00686d8e();
    /* 0054b287: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b28a:; BB(0x0054b28a);
    /* 0054b28a: jmp 0x54bfab */ goto L_0054bfab;
L_0054b28f:; BB(0x0054b28f);
    /* 0054b28f: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b294: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b299u); f_00630f40();
    /* 0054b299: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b29d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b2a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2a1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b2a6u); f_00686d8e();
    /* 0054b2a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b2a9: jmp 0x54bfab */ goto L_0054bfab;
L_0054b2ae:; BB(0x0054b2ae);
    /* 0054b2ae: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b2b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b2b4: je 0x54b2f7 */ if (fZ) goto L_0054b2f7;
L_0054b2b6:; BB(0x0054b2b6);
    /* 0054b2b6: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b2ba: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b2bd: jge 0x54b2db */ if ((fS==fO)) goto L_0054b2db;
L_0054b2bf:; BB(0x0054b2bf);
    /* 0054b2bf: push 0x6c7d30 */ { u32 v = 0x6c7d30u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b2c9u); f_00630f40();
    /* 0054b2c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b2d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2d1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b2d6u); f_00686d8e();
    /* 0054b2d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b2d9: jmp 0x54b2f5 */ goto L_0054b2f5;
L_0054b2db:; BB(0x0054b2db);
    /* 0054b2db: push 0x6c7d0c */ { u32 v = 0x6c7d0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2e0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b2e5u); f_00630f40();
    /* 0054b2e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b2ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2ed: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b2f2u); f_00686d8e();
    /* 0054b2f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b2f5:; BB(0x0054b2f5);
    /* 0054b2f5: jmp 0x54b311 */ goto L_0054b311;
L_0054b2f7:; BB(0x0054b2f7);
    /* 0054b2f7: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b2fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b301u); f_00630f40();
    /* 0054b301: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b305: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b309: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b30eu); f_00686d8e();
    /* 0054b30e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b311:; BB(0x0054b311);
    /* 0054b311: jmp 0x54bfab */ goto L_0054bfab;
L_0054b316:; BB(0x0054b316);
    /* 0054b316: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b31b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b320u); f_00630f40();
    /* 0054b320: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b324: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b327: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b328: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b32du); f_00686d8e();
    /* 0054b32d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b330: jmp 0x54bfab */ goto L_0054bfab;
L_0054b335:; BB(0x0054b335);
    /* 0054b335: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b33b: je 0x54b3a3 */ if (fZ) goto L_0054b3a3;
L_0054b33d:; BB(0x0054b33d);
    /* 0054b33d: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b341: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b344: jg 0x54b362 */ if ((!fZ&&fS==fO)) goto L_0054b362;
L_0054b346:; BB(0x0054b346);
    /* 0054b346: push 0x6c7ce8 */ { u32 v = 0x6c7ce8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b34b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b350u); f_00630f40();
    /* 0054b350: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b354: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b357: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b358: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b35du); f_00686d8e();
    /* 0054b35d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b360: jmp 0x54b3a1 */ goto L_0054b3a1;
L_0054b362:; BB(0x0054b362);
    /* 0054b362: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b366: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b369: jg 0x54b387 */ if ((!fZ&&fS==fO)) goto L_0054b387;
L_0054b36b:; BB(0x0054b36b);
    /* 0054b36b: push 0x6c7cc0 */ { u32 v = 0x6c7cc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b370: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b375u); f_00630f40();
    /* 0054b375: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b379: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b37c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b37d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b382u); f_00686d8e();
    /* 0054b382: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b385: jmp 0x54b3a1 */ goto L_0054b3a1;
L_0054b387:; BB(0x0054b387);
    /* 0054b387: push 0x6c7c9c */ { u32 v = 0x6c7c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b38c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b391u); f_00630f40();
    /* 0054b391: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b395: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b399: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b39eu); f_00686d8e();
    /* 0054b39e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b3a1:; BB(0x0054b3a1);
    /* 0054b3a1: jmp 0x54b3bd */ goto L_0054b3bd;
L_0054b3a3:; BB(0x0054b3a3);
    /* 0054b3a3: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3a8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b3adu); f_00630f40();
    /* 0054b3ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b3b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3b5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b3bau); f_00686d8e();
    /* 0054b3ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b3bd:; BB(0x0054b3bd);
    /* 0054b3bd: jmp 0x54bfab */ goto L_0054bfab;
L_0054b3c2:; BB(0x0054b3c2);
    /* 0054b3c2: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b3c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b3c8: je 0x54b3f8 */ if (fZ) goto L_0054b3f8;
L_0054b3ca:; BB(0x0054b3ca);
    /* 0054b3ca: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b3ce: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b3d1: jl 0x54b3f8 */ if ((fS!=fO)) goto L_0054b3f8;
L_0054b3d3:; BB(0x0054b3d3);
    /* 0054b3d3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b3d7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b3da: jg 0x54b3f8 */ if ((!fZ&&fS==fO)) goto L_0054b3f8;
L_0054b3dc:; BB(0x0054b3dc);
    /* 0054b3dc: push 0x6c7c78 */ { u32 v = 0x6c7c78u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3e1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b3e6u); f_00630f40();
    /* 0054b3e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b3e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b3ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3ee: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b3f3u); f_00686d8e();
    /* 0054b3f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b3f6: jmp 0x54b412 */ goto L_0054b412;
L_0054b3f8:; BB(0x0054b3f8);
    /* 0054b3f8: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b3fd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b402u); f_00630f40();
    /* 0054b402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b406: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b409: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b40a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b40fu); f_00686d8e();
    /* 0054b40f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b412:; BB(0x0054b412);
    /* 0054b412: jmp 0x54bfab */ goto L_0054bfab;
L_0054b417:; BB(0x0054b417);
    /* 0054b417: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b41b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b41d: je 0x54b460 */ if (fZ) goto L_0054b460;
L_0054b41f:; BB(0x0054b41f);
    /* 0054b41f: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b423: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b426: jg 0x54b444 */ if ((!fZ&&fS==fO)) goto L_0054b444;
L_0054b428:; BB(0x0054b428);
    /* 0054b428: push 0x6c7c58 */ { u32 v = 0x6c7c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b42d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b432u); f_00630f40();
    /* 0054b432: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b435: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b436: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b439: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b43a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b43fu); f_00686d8e();
    /* 0054b43f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b442: jmp 0x54b45e */ goto L_0054b45e;
L_0054b444:; BB(0x0054b444);
    /* 0054b444: push 0x6c7c30 */ { u32 v = 0x6c7c30u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b449: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b44eu); f_00630f40();
    /* 0054b44e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b452: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b456: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b45bu); f_00686d8e();
    /* 0054b45b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b45e:; BB(0x0054b45e);
    /* 0054b45e: jmp 0x54b4c3 */ goto L_0054b4c3;
L_0054b460:; BB(0x0054b460);
    /* 0054b460: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b464: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b466: je 0x54b4a9 */ if (fZ) goto L_0054b4a9;
L_0054b468:; BB(0x0054b468);
    /* 0054b468: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b46c: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b46f: jg 0x54b48d */ if ((!fZ&&fS==fO)) goto L_0054b48d;
L_0054b471:; BB(0x0054b471);
    /* 0054b471: push 0x6c7c0c */ { u32 v = 0x6c7c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b476: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b47bu); f_00630f40();
    /* 0054b47b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b47e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b47f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b482: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b483: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b488u); f_00686d8e();
    /* 0054b488: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b48b: jmp 0x54b4a7 */ goto L_0054b4a7;
L_0054b48d:; BB(0x0054b48d);
    /* 0054b48d: push 0x6c7be0 */ { u32 v = 0x6c7be0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b492: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b497u); f_00630f40();
    /* 0054b497: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b49a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b49b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b49e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b49f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b4a4u); f_00686d8e();
    /* 0054b4a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b4a7:; BB(0x0054b4a7);
    /* 0054b4a7: jmp 0x54b4c3 */ goto L_0054b4c3;
L_0054b4a9:; BB(0x0054b4a9);
    /* 0054b4a9: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b4b3u); f_00630f40();
    /* 0054b4b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b4b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b4ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4bb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b4c0u); f_00686d8e();
    /* 0054b4c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b4c3:; BB(0x0054b4c3);
    /* 0054b4c3: jmp 0x54bfab */ goto L_0054bfab;
L_0054b4c8:; BB(0x0054b4c8);
    /* 0054b4c8: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b4cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b4ce: je 0x54b511 */ if (fZ) goto L_0054b511;
L_0054b4d0:; BB(0x0054b4d0);
    /* 0054b4d0: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b4d4: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b4d7: jg 0x54b4f5 */ if ((!fZ&&fS==fO)) goto L_0054b4f5;
L_0054b4d9:; BB(0x0054b4d9);
    /* 0054b4d9: push 0x6c7bbc */ { u32 v = 0x6c7bbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4de: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b4e3u); f_00630f40();
    /* 0054b4e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b4e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4e7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b4ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4eb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b4f0u); f_00686d8e();
    /* 0054b4f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b4f3: jmp 0x54b50f */ goto L_0054b50f;
L_0054b4f5:; BB(0x0054b4f5);
    /* 0054b4f5: push 0x6c7b94 */ { u32 v = 0x6c7b94u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b4fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b4ffu); f_00630f40();
    /* 0054b4ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b503: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b507: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b50cu); f_00686d8e();
    /* 0054b50c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b50f:; BB(0x0054b50f);
    /* 0054b50f: jmp 0x54b52b */ goto L_0054b52b;
L_0054b511:; BB(0x0054b511);
    /* 0054b511: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b516: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b51bu); f_00630f40();
    /* 0054b51b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b51e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b51f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b522: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b523: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b528u); f_00686d8e();
    /* 0054b528: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b52b:; BB(0x0054b52b);
    /* 0054b52b: jmp 0x54bfab */ goto L_0054bfab;
L_0054b530:; BB(0x0054b530);
    /* 0054b530: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054b534: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b536: je 0x54b57b */ if (fZ) goto L_0054b57b;
L_0054b538:; BB(0x0054b538);
    /* 0054b538: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b53c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b53e: je 0x54b55c */ if (fZ) goto L_0054b55c;
L_0054b540:; BB(0x0054b540);
    /* 0054b540: push 0x6c7b70 */ { u32 v = 0x6c7b70u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b545: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b54au); f_00630f40();
    /* 0054b54a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b54d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b54e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b551: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b552: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b557u); f_00686d8e();
    /* 0054b557: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b55a: jmp 0x54b576 */ goto L_0054b576;
L_0054b55c:; BB(0x0054b55c);
    /* 0054b55c: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b561: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b566u); f_00630f40();
    /* 0054b566: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b56a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b56d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b56e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b573u); f_00686d8e();
    /* 0054b573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b576:; BB(0x0054b576);
    /* 0054b576: jmp 0x54b690 */ goto L_0054b690;
L_0054b57b:; BB(0x0054b57b);
    /* 0054b57b: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b57f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b581: je 0x54b5f5 */ if (fZ) goto L_0054b5f5;
L_0054b583:; BB(0x0054b583);
    /* 0054b583: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b587: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b58a: jg 0x54b5a8 */ if ((!fZ&&fS==fO)) goto L_0054b5a8;
L_0054b58c:; BB(0x0054b58c);
    /* 0054b58c: push 0x6c7b4c */ { u32 v = 0x6c7b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b591: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b596u); f_00630f40();
    /* 0054b596: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b599: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b59a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b59d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b59e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b5a3u); f_00686d8e();
    /* 0054b5a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b5a6: jmp 0x54b5f0 */ goto L_0054b5f0;
L_0054b5a8:; BB(0x0054b5a8);
    /* 0054b5a8: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b5ac: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b5af: jg 0x54b5d6 */ if ((!fZ&&fS==fO)) goto L_0054b5d6;
L_0054b5b1:; BB(0x0054b5b1);
    /* 0054b5b1: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b5b5: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b5b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5b9: push 0x6c7b14 */ { u32 v = 0x6c7b14u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5be: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b5c3u); f_00630f40();
    /* 0054b5c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b5c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b5ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5cb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b5d1u); call_ind(t); }
    /* 0054b5d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b5d4: jmp 0x54b5f0 */ goto L_0054b5f0;
L_0054b5d6:; BB(0x0054b5d6);
    /* 0054b5d6: push 0x6c7ae0 */ { u32 v = 0x6c7ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5db: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b5e0u); f_00630f40();
    /* 0054b5e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b5e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b5e8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b5edu); f_00686d8e();
    /* 0054b5ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b5f0:; BB(0x0054b5f0);
    /* 0054b5f0: jmp 0x54b690 */ goto L_0054b690;
L_0054b5f5:; BB(0x0054b5f5);
    /* 0054b5f5: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b5f9: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b5fc: jg 0x54b61a */ if ((!fZ&&fS==fO)) goto L_0054b61a;
L_0054b5fe:; BB(0x0054b5fe);
    /* 0054b5fe: push 0x6c7aa4 */ { u32 v = 0x6c7aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b603: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b608u); f_00630f40();
    /* 0054b608: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b60b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b60c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b60f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b610: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b615u); f_00686d8e();
    /* 0054b615: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b618: jmp 0x54b690 */ goto L_0054b690;
L_0054b61a:; BB(0x0054b61a);
    /* 0054b61a: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b61e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b621: jg 0x54b648 */ if ((!fZ&&fS==fO)) goto L_0054b648;
L_0054b623:; BB(0x0054b623);
    /* 0054b623: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b627: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b62a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b62b: push 0x6c7a78 */ { u32 v = 0x6c7a78u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b630: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b635u); f_00630f40();
    /* 0054b635: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b639: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b63c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b63d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b643u); call_ind(t); }
    /* 0054b643: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b646: jmp 0x54b690 */ goto L_0054b690;
L_0054b648:; BB(0x0054b648);
    /* 0054b648: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b64c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b64f: jg 0x54b676 */ if ((!fZ&&fS==fO)) goto L_0054b676;
L_0054b651:; BB(0x0054b651);
    /* 0054b651: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b655: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b659: push 0x6c7a4c */ { u32 v = 0x6c7a4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b65e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b663u); f_00630f40();
    /* 0054b663: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b667: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b66a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b66b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b671u); call_ind(t); }
    /* 0054b671: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b674: jmp 0x54b690 */ goto L_0054b690;
L_0054b676:; BB(0x0054b676);
    /* 0054b676: push 0x6c7a20 */ { u32 v = 0x6c7a20u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b67b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b680u); f_00630f40();
    /* 0054b680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b684: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b688: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b68du); f_00686d8e();
    /* 0054b68d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b690:; BB(0x0054b690);
    /* 0054b690: jmp 0x54bfab */ goto L_0054bfab;
L_0054b695:; BB(0x0054b695);
    /* 0054b695: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054b699: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b69b: je 0x54b6f2 */ if (fZ) goto L_0054b6f2;
L_0054b69d:; BB(0x0054b69d);
    /* 0054b69d: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b6a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b6a3: je 0x54b6ae */ if (fZ) goto L_0054b6ae;
L_0054b6a5:; BB(0x0054b6a5);
    /* 0054b6a5: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b6a9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b6ac: je 0x54b6b7 */ if (fZ) goto L_0054b6b7;
L_0054b6ae:; BB(0x0054b6ae);
    /* 0054b6ae: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b6b2: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b6b5: jne 0x54b6d3 */ if (!fZ) goto L_0054b6d3;
L_0054b6b7:; BB(0x0054b6b7);
    /* 0054b6b7: push 0x6c79f0 */ { u32 v = 0x6c79f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b6c1u); f_00630f40();
    /* 0054b6c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b6c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6c5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b6c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6c9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b6ceu); f_00686d8e();
    /* 0054b6ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b6d1: jmp 0x54b6ed */ goto L_0054b6ed;
L_0054b6d3:; BB(0x0054b6d3);
    /* 0054b6d3: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b6ddu); f_00630f40();
    /* 0054b6dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b6e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b6e5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b6eau); f_00686d8e();
    /* 0054b6ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b6ed:; BB(0x0054b6ed);
    /* 0054b6ed: jmp 0x54b796 */ goto L_0054b796;
L_0054b6f2:; BB(0x0054b6f2);
    /* 0054b6f2: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b6f6: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b6f9: jg 0x54b720 */ if ((!fZ&&fS==fO)) goto L_0054b720;
L_0054b6fb:; BB(0x0054b6fb);
    /* 0054b6fb: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b6ff: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b702: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b703: push 0x6c79b8 */ { u32 v = 0x6c79b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b708: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b70du); f_00630f40();
    /* 0054b70d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b711: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b715: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b71bu); call_ind(t); }
    /* 0054b71b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b71e: jmp 0x54b796 */ goto L_0054b796;
L_0054b720:; BB(0x0054b720);
    /* 0054b720: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b724: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b727: jg 0x54b74e */ if ((!fZ&&fS==fO)) goto L_0054b74e;
L_0054b729:; BB(0x0054b729);
    /* 0054b729: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b72d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b731: push 0x6c798c */ { u32 v = 0x6c798cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b736: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b73bu); f_00630f40();
    /* 0054b73b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b73e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b73f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b743: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b749u); call_ind(t); }
    /* 0054b749: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b74c: jmp 0x54b796 */ goto L_0054b796;
L_0054b74e:; BB(0x0054b74e);
    /* 0054b74e: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b752: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b755: jg 0x54b77c */ if ((!fZ&&fS==fO)) goto L_0054b77c;
L_0054b757:; BB(0x0054b757);
    /* 0054b757: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b75b: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b75e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b75f: push 0x6c7968 */ { u32 v = 0x6c7968u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b764: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b769u); f_00630f40();
    /* 0054b769: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b76c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b76d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b771: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b777u); call_ind(t); }
    /* 0054b777: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b77a: jmp 0x54b796 */ goto L_0054b796;
L_0054b77c:; BB(0x0054b77c);
    /* 0054b77c: push 0x6c7948 */ { u32 v = 0x6c7948u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b781: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b786u); f_00630f40();
    /* 0054b786: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b78a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b78d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b78e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b793u); f_00686d8e();
    /* 0054b793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b796:; BB(0x0054b796);
    /* 0054b796: jmp 0x54bfab */ goto L_0054bfab;
L_0054b79b:; BB(0x0054b79b);
    /* 0054b79b: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054b79f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b7a1: je 0x54b7f8 */ if (fZ) goto L_0054b7f8;
L_0054b7a3:; BB(0x0054b7a3);
    /* 0054b7a3: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b7a9: je 0x54b7b4 */ if (fZ) goto L_0054b7b4;
L_0054b7ab:; BB(0x0054b7ab);
    /* 0054b7ab: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b7af: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b7b2: je 0x54b7bd */ if (fZ) goto L_0054b7bd;
L_0054b7b4:; BB(0x0054b7b4);
    /* 0054b7b4: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b7b8: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b7bb: jne 0x54b7d9 */ if (!fZ) goto L_0054b7d9;
L_0054b7bd:; BB(0x0054b7bd);
    /* 0054b7bd: push 0x6c7918 */ { u32 v = 0x6c7918u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b7c7u); f_00630f40();
    /* 0054b7c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b7ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b7ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7cf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b7d4u); f_00686d8e();
    /* 0054b7d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b7d7: jmp 0x54b7f3 */ goto L_0054b7f3;
L_0054b7d9:; BB(0x0054b7d9);
    /* 0054b7d9: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7de: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b7e3u); f_00630f40();
    /* 0054b7e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b7e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b7ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b7eb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b7f0u); f_00686d8e();
    /* 0054b7f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b7f3:; BB(0x0054b7f3);
    /* 0054b7f3: jmp 0x54b8e5 */ goto L_0054b8e5;
L_0054b7f8:; BB(0x0054b7f8);
    /* 0054b7f8: movzx edx, byte ptr [ebp - 3] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054b7fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b7fe: je 0x54b86f */ if (fZ) goto L_0054b86f;
L_0054b800:; BB(0x0054b800);
    /* 0054b800: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b804: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b807: jg 0x54b825 */ if ((!fZ&&fS==fO)) goto L_0054b825;
L_0054b809:; BB(0x0054b809);
    /* 0054b809: push 0x6c78ec */ { u32 v = 0x6c78ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b80e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b813u); f_00630f40();
    /* 0054b813: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b817: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b81a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b81b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b820u); f_00686d8e();
    /* 0054b820: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b823: jmp 0x54b86d */ goto L_0054b86d;
L_0054b825:; BB(0x0054b825);
    /* 0054b825: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b829: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b82c: jg 0x54b853 */ if ((!fZ&&fS==fO)) goto L_0054b853;
L_0054b82e:; BB(0x0054b82e);
    /* 0054b82e: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b832: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054b835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b836: push 0x6c78b4 */ { u32 v = 0x6c78b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b83b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b840u); f_00630f40();
    /* 0054b840: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b844: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b847: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b848: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b84eu); call_ind(t); }
    /* 0054b84e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b851: jmp 0x54b86d */ goto L_0054b86d;
L_0054b853:; BB(0x0054b853);
    /* 0054b853: push 0x6c7880 */ { u32 v = 0x6c7880u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b858: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b85du); f_00630f40();
    /* 0054b85d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b861: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b865: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b86au); f_00686d8e();
    /* 0054b86a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b86d:; BB(0x0054b86d);
    /* 0054b86d: jmp 0x54b8e5 */ goto L_0054b8e5;
L_0054b86f:; BB(0x0054b86f);
    /* 0054b86f: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b873: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b876: jg 0x54b89d */ if ((!fZ&&fS==fO)) goto L_0054b89d;
L_0054b878:; BB(0x0054b878);
    /* 0054b878: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b87c: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b87f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b880: push 0x6c784c */ { u32 v = 0x6c784cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b885: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b88au); f_00630f40();
    /* 0054b88a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b88e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b891: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b892: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b898u); call_ind(t); }
    /* 0054b898: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b89b: jmp 0x54b8e5 */ goto L_0054b8e5;
L_0054b89d:; BB(0x0054b89d);
    /* 0054b89d: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b8a1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b8a4: jg 0x54b8cb */ if ((!fZ&&fS==fO)) goto L_0054b8cb;
L_0054b8a6:; BB(0x0054b8a6);
    /* 0054b8a6: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b8aa: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054b8ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8ae: push 0x6c781c */ { u32 v = 0x6c781cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8b3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b8b8u); f_00630f40();
    /* 0054b8b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b8bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054b8bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8c0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b8c6u); call_ind(t); }
    /* 0054b8c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b8c9: jmp 0x54b8e5 */ goto L_0054b8e5;
L_0054b8cb:; BB(0x0054b8cb);
    /* 0054b8cb: push 0x6c77ec */ { u32 v = 0x6c77ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b8d5u); f_00630f40();
    /* 0054b8d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b8dd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b8e2u); f_00686d8e();
    /* 0054b8e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b8e5:; BB(0x0054b8e5);
    /* 0054b8e5: jmp 0x54bfab */ goto L_0054bfab;
L_0054b8ea:; BB(0x0054b8ea);
    /* 0054b8ea: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054b8ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b8f0: je 0x54b9aa */ if (fZ) goto L_0054b9aa;
L_0054b8f6:; BB(0x0054b8f6);
    /* 0054b8f6: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b8fa: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b8fd: jg 0x54b91e */ if ((!fZ&&fS==fO)) goto L_0054b91e;
L_0054b8ff:; BB(0x0054b8ff);
    /* 0054b8ff: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b904: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b909u); f_00630f40();
    /* 0054b909: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b90c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b90d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b911: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b916u); f_00686d8e();
    /* 0054b916: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b919: jmp 0x54b9a5 */ goto L_0054b9a5;
L_0054b91e:; BB(0x0054b91e);
    /* 0054b91e: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b922: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b925: jg 0x54b967 */ if ((!fZ&&fS==fO)) goto L_0054b967;
L_0054b927:; BB(0x0054b927);
    /* 0054b927: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b92b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b92d: je 0x54b94b */ if (fZ) goto L_0054b94b;
L_0054b92f:; BB(0x0054b92f);
    /* 0054b92f: push 0x6c77b8 */ { u32 v = 0x6c77b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b934: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b939u); f_00630f40();
    /* 0054b939: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b93d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b941: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b946u); f_00686d8e();
    /* 0054b946: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b949: jmp 0x54b965 */ goto L_0054b965;
L_0054b94b:; BB(0x0054b94b);
    /* 0054b94b: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b950: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b955u); f_00630f40();
    /* 0054b955: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b959: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b95c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b95d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b962u); f_00686d8e();
    /* 0054b962: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b965:; BB(0x0054b965);
    /* 0054b965: jmp 0x54b9a5 */ goto L_0054b9a5;
L_0054b967:; BB(0x0054b967);
    /* 0054b967: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054b96b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b96d: je 0x54b98b */ if (fZ) goto L_0054b98b;
L_0054b96f:; BB(0x0054b96f);
    /* 0054b96f: push 0x6c778c */ { u32 v = 0x6c778cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b974: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b979u); f_00630f40();
    /* 0054b979: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b97c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b97d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054b980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b981: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b986u); f_00686d8e();
    /* 0054b986: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b989: jmp 0x54b9a5 */ goto L_0054b9a5;
L_0054b98b:; BB(0x0054b98b);
    /* 0054b98b: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b990: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b995u); f_00630f40();
    /* 0054b995: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b999: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b99c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b99d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54b9a2u); f_00686d8e();
    /* 0054b9a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b9a5:; BB(0x0054b9a5);
    /* 0054b9a5: jmp 0x54ba4d */ goto L_0054ba4d;
L_0054b9aa:; BB(0x0054b9aa);
    /* 0054b9aa: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b9ae: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054b9b1: jg 0x54b9d8 */ if ((!fZ&&fS==fO)) goto L_0054b9d8;
L_0054b9b3:; BB(0x0054b9b3);
    /* 0054b9b3: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b9b7: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054b9ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9bb: push 0x6c7758 */ { u32 v = 0x6c7758u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9c0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b9c5u); f_00630f40();
    /* 0054b9c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b9c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b9cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9cd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54b9d3u); call_ind(t); }
    /* 0054b9d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b9d6: jmp 0x54ba4d */ goto L_0054ba4d;
L_0054b9d8:; BB(0x0054b9d8);
    /* 0054b9d8: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054b9dc: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b9df: jne 0x54ba05 */ if (!fZ) goto L_0054ba05;
L_0054b9e1:; BB(0x0054b9e1);
    /* 0054b9e1: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 0054b9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b9e7: je 0x54ba05 */ if (fZ) goto L_0054ba05;
L_0054b9e9:; BB(0x0054b9e9);
    /* 0054b9e9: push 0x6c7724 */ { u32 v = 0x6c7724u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54b9f3u); f_00630f40();
    /* 0054b9f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054b9fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b9fb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54ba00u); f_00686d8e();
    /* 0054ba00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ba03: jmp 0x54ba4d */ goto L_0054ba4d;
L_0054ba05:; BB(0x0054ba05);
    /* 0054ba05: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054ba09: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ba0c: jg 0x54ba33 */ if ((!fZ&&fS==fO)) goto L_0054ba33;
L_0054ba0e:; BB(0x0054ba0e);
    /* 0054ba0e: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054ba12: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ba15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba16: push 0x6c76f4 */ { u32 v = 0x6c76f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba1b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ba20u); f_00630f40();
    /* 0054ba20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ba23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba24: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054ba27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba28: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54ba2eu); call_ind(t); }
    /* 0054ba2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ba31: jmp 0x54ba4d */ goto L_0054ba4d;
L_0054ba33:; BB(0x0054ba33);
    /* 0054ba33: push 0x6c76c4 */ { u32 v = 0x6c76c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba38: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ba3du); f_00630f40();
    /* 0054ba3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ba40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba41: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054ba44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba45: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54ba4au); f_00686d8e();
    /* 0054ba4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054ba4d:; BB(0x0054ba4d);
    /* 0054ba4d: jmp 0x54bfab */ goto L_0054bfab;
L_0054ba52:; BB(0x0054ba52);
    /* 0054ba52: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054ba56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba58: je 0x54bb12 */ if (fZ) goto L_0054bb12;
L_0054ba5e:; BB(0x0054ba5e);
    /* 0054ba5e: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054ba62: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ba65: jg 0x54ba86 */ if ((!fZ&&fS==fO)) goto L_0054ba86;
L_0054ba67:; BB(0x0054ba67);
    /* 0054ba67: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba6c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ba71u); f_00630f40();
    /* 0054ba71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ba74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba75: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054ba78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba79: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54ba7eu); f_00686d8e();
    /* 0054ba7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ba81: jmp 0x54bb0d */ goto L_0054bb0d;
L_0054ba86:; BB(0x0054ba86);
    /* 0054ba86: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054ba8a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ba8d: jg 0x54bacf */ if ((!fZ&&fS==fO)) goto L_0054bacf;
L_0054ba8f:; BB(0x0054ba8f);
    /* 0054ba8f: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054ba93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ba95: je 0x54bab3 */ if (fZ) goto L_0054bab3;
L_0054ba97:; BB(0x0054ba97);
    /* 0054ba97: push 0x6c7690 */ { u32 v = 0x6c7690u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ba9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54baa1u); f_00630f40();
    /* 0054baa1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054baa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054baa5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054baa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054baa9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54baaeu); f_00686d8e();
    /* 0054baae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bab1: jmp 0x54bacd */ goto L_0054bacd;
L_0054bab3:; BB(0x0054bab3);
    /* 0054bab3: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bab8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54babdu); f_00630f40();
    /* 0054babd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bac1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bac5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bacau); f_00686d8e();
    /* 0054baca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bacd:; BB(0x0054bacd);
    /* 0054bacd: jmp 0x54bb0d */ goto L_0054bb0d;
L_0054bacf:; BB(0x0054bacf);
    /* 0054bacf: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054bad3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bad5: je 0x54baf3 */ if (fZ) goto L_0054baf3;
L_0054bad7:; BB(0x0054bad7);
    /* 0054bad7: push 0x6c778c */ { u32 v = 0x6c778cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054badc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bae1u); f_00630f40();
    /* 0054bae1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bae5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bae8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bae9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54baeeu); f_00686d8e();
    /* 0054baee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054baf1: jmp 0x54bb0d */ goto L_0054bb0d;
L_0054baf3:; BB(0x0054baf3);
    /* 0054baf3: push 0x6c7d54 */ { u32 v = 0x6c7d54u; r_esp -= 4; W32(r_esp, v); }
    /* 0054baf8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bafdu); f_00630f40();
    /* 0054bafd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bb04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb05: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bb0au); f_00686d8e();
    /* 0054bb0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bb0d:; BB(0x0054bb0d);
    /* 0054bb0d: jmp 0x54bc0d */ goto L_0054bc0d;
L_0054bb12:; BB(0x0054bb12);
    /* 0054bb12: movzx ecx, byte ptr [ebp - 3] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054bb16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bb18: je 0x54bb39 */ if (fZ) goto L_0054bb39;
L_0054bb1a:; BB(0x0054bb1a);
    /* 0054bb1a: push 0x6c766c */ { u32 v = 0x6c766cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb1f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bb24u); f_00630f40();
    /* 0054bb24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb28: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bb2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb2c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bb31u); f_00686d8e();
    /* 0054bb31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb34: jmp 0x54bc0d */ goto L_0054bc0d;
L_0054bb39:; BB(0x0054bb39);
    /* 0054bb39: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bb3d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bb40: jg 0x54bb6a */ if ((!fZ&&fS==fO)) goto L_0054bb6a;
L_0054bb42:; BB(0x0054bb42);
    /* 0054bb42: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bb46: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054bb49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb4a: push 0x6c7638 */ { u32 v = 0x6c7638u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb4f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bb54u); f_00630f40();
    /* 0054bb54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb58: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bb5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb5c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54bb62u); call_ind(t); }
    /* 0054bb62: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb65: jmp 0x54bc0d */ goto L_0054bc0d;
L_0054bb6a:; BB(0x0054bb6a);
    /* 0054bb6a: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bb6e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bb71: jl 0x54bb97 */ if ((fS!=fO)) goto L_0054bb97;
L_0054bb73:; BB(0x0054bb73);
    /* 0054bb73: movzx ecx, byte ptr [ebp - 2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 0054bb77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bb79: je 0x54bb97 */ if (fZ) goto L_0054bb97;
L_0054bb7b:; BB(0x0054bb7b);
    /* 0054bb7b: push 0x6c7604 */ { u32 v = 0x6c7604u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bb85u); f_00630f40();
    /* 0054bb85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb89: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bb8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bb8d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bb92u); f_00686d8e();
    /* 0054bb92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bb95: jmp 0x54bc0d */ goto L_0054bc0d;
L_0054bb97:; BB(0x0054bb97);
    /* 0054bb97: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bb9b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bb9e: jge 0x54bbc5 */ if ((fS==fO)) goto L_0054bbc5;
L_0054bba0:; BB(0x0054bba0);
    /* 0054bba0: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bba4: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054bba7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bba8: push 0x6c75d4 */ { u32 v = 0x6c75d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bbb2u); f_00630f40();
    /* 0054bbb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bbb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbb6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bbb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbba: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54bbc0u); call_ind(t); }
    /* 0054bbc0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bbc3: jmp 0x54bc0d */ goto L_0054bc0d;
L_0054bbc5:; BB(0x0054bbc5);
    /* 0054bbc5: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bbc9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bbcc: jne 0x54bbf3 */ if (!fZ) goto L_0054bbf3;
L_0054bbce:; BB(0x0054bbce);
    /* 0054bbce: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bbd2: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054bbd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbd6: push 0x6c75a4 */ { u32 v = 0x6c75a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbdb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bbe0u); f_00630f40();
    /* 0054bbe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bbe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbe4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bbe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbe8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54bbeeu); call_ind(t); }
    /* 0054bbee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bbf1: jmp 0x54bc0d */ goto L_0054bc0d;
L_0054bbf3:; BB(0x0054bbf3);
    /* 0054bbf3: push 0x6c7574 */ { u32 v = 0x6c7574u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bbf8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bbfdu); f_00630f40();
    /* 0054bbfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bc04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc05: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bc0au); f_00686d8e();
    /* 0054bc0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bc0d:; BB(0x0054bc0d);
    /* 0054bc0d: jmp 0x54bfab */ goto L_0054bfab;
L_0054bc12:; BB(0x0054bc12);
    /* 0054bc12: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054bc16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bc18: je 0x54bca8 */ if (fZ) goto L_0054bca8;
L_0054bc1e:; BB(0x0054bc1e);
    /* 0054bc1e: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bc22: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bc25: jne 0x54bc43 */ if (!fZ) goto L_0054bc43;
L_0054bc27:; BB(0x0054bc27);
    /* 0054bc27: push 0x6c7558 */ { u32 v = 0x6c7558u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc2c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bc31u); f_00630f40();
    /* 0054bc31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc39: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bc3eu); f_00686d8e();
    /* 0054bc3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc41: jmp 0x54bca6 */ goto L_0054bca6;
L_0054bc43:; BB(0x0054bc43);
    /* 0054bc43: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bc47: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bc4a: jg 0x54bc8c */ if ((!fZ&&fS==fO)) goto L_0054bc8c;
L_0054bc4c:; BB(0x0054bc4c);
    /* 0054bc4c: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054bc50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bc52: je 0x54bc70 */ if (fZ) goto L_0054bc70;
L_0054bc54:; BB(0x0054bc54);
    /* 0054bc54: push 0x6c7528 */ { u32 v = 0x6c7528u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc59: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bc5eu); f_00630f40();
    /* 0054bc5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc62: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bc65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc66: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bc6bu); f_00686d8e();
    /* 0054bc6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc6e: jmp 0x54bc8a */ goto L_0054bc8a;
L_0054bc70:; BB(0x0054bc70);
    /* 0054bc70: push 0x6c7558 */ { u32 v = 0x6c7558u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc75: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bc7au); f_00630f40();
    /* 0054bc7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bc81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc82: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bc87u); f_00686d8e();
    /* 0054bc87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bc8a:; BB(0x0054bc8a);
    /* 0054bc8a: jmp 0x54bca6 */ goto L_0054bca6;
L_0054bc8c:; BB(0x0054bc8c);
    /* 0054bc8c: push 0x6c7500 */ { u32 v = 0x6c7500u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc91: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bc96u); f_00630f40();
    /* 0054bc96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bc99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc9a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bc9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bc9e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bca3u); f_00686d8e();
    /* 0054bca3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bca6:; BB(0x0054bca6);
    /* 0054bca6: jmp 0x54bcc2 */ goto L_0054bcc2;
L_0054bca8:; BB(0x0054bca8);
    /* 0054bca8: push 0x6c74e0 */ { u32 v = 0x6c74e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bcb2u); f_00630f40();
    /* 0054bcb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bcb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bcb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcba: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bcbfu); f_00686d8e();
    /* 0054bcbf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bcc2:; BB(0x0054bcc2);
    /* 0054bcc2: jmp 0x54bfab */ goto L_0054bfab;
L_0054bcc7:; BB(0x0054bcc7);
    /* 0054bcc7: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054bccb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bccd: je 0x54bdef */ if (fZ) goto L_0054bdef;
L_0054bcd3:; BB(0x0054bcd3);
    /* 0054bcd3: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bcd7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bcda: jne 0x54bcfb */ if (!fZ) goto L_0054bcfb;
L_0054bcdc:; BB(0x0054bcdc);
    /* 0054bcdc: push 0x6c74c0 */ { u32 v = 0x6c74c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bce1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bce6u); f_00630f40();
    /* 0054bce6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bcee: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bcf3u); f_00686d8e();
    /* 0054bcf3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bcf6: jmp 0x54bdea */ goto L_0054bdea;
L_0054bcfb:; BB(0x0054bcfb);
    /* 0054bcfb: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bcff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bd02: jg 0x54bd47 */ if ((!fZ&&fS==fO)) goto L_0054bd47;
L_0054bd04:; BB(0x0054bd04);
    /* 0054bd04: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054bd08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bd0a: je 0x54bd28 */ if (fZ) goto L_0054bd28;
L_0054bd0c:; BB(0x0054bd0c);
    /* 0054bd0c: push 0x6c748c */ { u32 v = 0x6c748cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd11: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bd16u); f_00630f40();
    /* 0054bd16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bd19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bd1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd1e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bd23u); f_00686d8e();
    /* 0054bd23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bd26: jmp 0x54bd42 */ goto L_0054bd42;
L_0054bd28:; BB(0x0054bd28);
    /* 0054bd28: push 0x6c7460 */ { u32 v = 0x6c7460u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bd32u); f_00630f40();
    /* 0054bd32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bd35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd36: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bd39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd3a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bd3fu); f_00686d8e();
    /* 0054bd3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bd42:; BB(0x0054bd42);
    /* 0054bd42: jmp 0x54bdea */ goto L_0054bdea;
L_0054bd47:; BB(0x0054bd47);
    /* 0054bd47: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bd4b: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bd4e: jg 0x54bda2 */ if ((!fZ&&fS==fO)) goto L_0054bda2;
L_0054bd50:; BB(0x0054bd50);
    /* 0054bd50: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054bd54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bd56: je 0x54bd7d */ if (fZ) goto L_0054bd7d;
L_0054bd58:; BB(0x0054bd58);
    /* 0054bd58: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bd5c: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054bd5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd60: push 0x6c7430 */ { u32 v = 0x6c7430u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd65: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bd6au); f_00630f40();
    /* 0054bd6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bd6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd6e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bd71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd72: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54bd78u); call_ind(t); }
    /* 0054bd78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bd7b: jmp 0x54bda0 */ goto L_0054bda0;
L_0054bd7d:; BB(0x0054bd7d);
    /* 0054bd7d: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bd81: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054bd84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd85: push 0x6c740c */ { u32 v = 0x6c740cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd8a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bd8fu); f_00630f40();
    /* 0054bd8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bd92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bd96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bd97: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54bd9du); call_ind(t); }
    /* 0054bd9d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bda0:; BB(0x0054bda0);
    /* 0054bda0: jmp 0x54bdea */ goto L_0054bdea;
L_0054bda2:; BB(0x0054bda2);
    /* 0054bda2: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bda6: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054bda9: jg 0x54bdd0 */ if ((!fZ&&fS==fO)) goto L_0054bdd0;
L_0054bdab:; BB(0x0054bdab);
    /* 0054bdab: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bdaf: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054bdb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdb3: push 0x6c73e4 */ { u32 v = 0x6c73e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdb8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bdbdu); f_00630f40();
    /* 0054bdbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bdc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdc1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bdc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdc5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x54bdcbu); call_ind(t); }
    /* 0054bdcb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bdce: jmp 0x54bdea */ goto L_0054bdea;
L_0054bdd0:; BB(0x0054bdd0);
    /* 0054bdd0: push 0x6c73c4 */ { u32 v = 0x6c73c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdd5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bddau); f_00630f40();
    /* 0054bdda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bdde: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bde1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bde2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bde7u); f_00686d8e();
    /* 0054bde7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bdea:; BB(0x0054bdea);
    /* 0054bdea: jmp 0x54bec8 */ goto L_0054bec8;
L_0054bdef:; BB(0x0054bdef);
    /* 0054bdef: movzx eax, byte ptr [ebp - 3] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054bdf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bdf5: je 0x54beae */ if (fZ) goto L_0054beae;
L_0054bdfb:; BB(0x0054bdfb);
    /* 0054bdfb: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054bdff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054be02: jg 0x54be23 */ if ((!fZ&&fS==fO)) goto L_0054be23;
L_0054be04:; BB(0x0054be04);
    /* 0054be04: push 0x6c7398 */ { u32 v = 0x6c7398u; r_esp -= 4; W32(r_esp, v); }
    /* 0054be09: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54be0eu); f_00630f40();
    /* 0054be0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054be12: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054be15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054be16: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54be1bu); f_00686d8e();
    /* 0054be1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be1e: jmp 0x54beac */ goto L_0054beac;
L_0054be23:; BB(0x0054be23);
    /* 0054be23: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054be27: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054be2a: jne 0x54be48 */ if (!fZ) goto L_0054be48;
L_0054be2c:; BB(0x0054be2c);
    /* 0054be2c: push 0x6c7368 */ { u32 v = 0x6c7368u; r_esp -= 4; W32(r_esp, v); }
    /* 0054be31: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54be36u); f_00630f40();
    /* 0054be36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054be3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054be3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054be3e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54be43u); f_00686d8e();
    /* 0054be43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be46: jmp 0x54beac */ goto L_0054beac;
L_0054be48:; BB(0x0054be48);
    /* 0054be48: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054be4c: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054be4f: jne 0x54be6d */ if (!fZ) goto L_0054be6d;
L_0054be51:; BB(0x0054be51);
    /* 0054be51: push 0x6c7338 */ { u32 v = 0x6c7338u; r_esp -= 4; W32(r_esp, v); }
    /* 0054be56: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54be5bu); f_00630f40();
    /* 0054be5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054be5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054be62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054be63: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54be68u); f_00686d8e();
    /* 0054be68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be6b: jmp 0x54beac */ goto L_0054beac;
L_0054be6d:; BB(0x0054be6d);
    /* 0054be6d: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054be71: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054be74: jne 0x54be92 */ if (!fZ) goto L_0054be92;
L_0054be76:; BB(0x0054be76);
    /* 0054be76: push 0x6c7308 */ { u32 v = 0x6c7308u; r_esp -= 4; W32(r_esp, v); }
    /* 0054be7b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54be80u); f_00630f40();
    /* 0054be80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054be84: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054be87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054be88: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54be8du); f_00686d8e();
    /* 0054be8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be90: jmp 0x54beac */ goto L_0054beac;
L_0054be92:; BB(0x0054be92);
    /* 0054be92: push 0x6c72d8 */ { u32 v = 0x6c72d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054be97: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54be9cu); f_00630f40();
    /* 0054be9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054be9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bea0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bea4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bea9u); f_00686d8e();
    /* 0054bea9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054beac:; BB(0x0054beac);
    /* 0054beac: jmp 0x54bec8 */ goto L_0054bec8;
L_0054beae:; BB(0x0054beae);
    /* 0054beae: push 0x6c74e0 */ { u32 v = 0x6c74e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054beb3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54beb8u); f_00630f40();
    /* 0054beb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bebc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bebf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bec0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bec5u); f_00686d8e();
    /* 0054bec5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bec8:; BB(0x0054bec8);
    /* 0054bec8: jmp 0x54bfab */ goto L_0054bfab;
L_0054becd:; BB(0x0054becd);
    /* 0054becd: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054bed1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bed3: je 0x54bef1 */ if (fZ) goto L_0054bef1;
L_0054bed5:; BB(0x0054bed5);
    /* 0054bed5: push 0x6c72b8 */ { u32 v = 0x6c72b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054beda: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bedfu); f_00630f40();
    /* 0054bedf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bee3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bee7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54beecu); f_00686d8e();
    /* 0054beec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054beef: jmp 0x54bf0b */ goto L_0054bf0b;
L_0054bef1:; BB(0x0054bef1);
    /* 0054bef1: push 0x6c74e0 */ { u32 v = 0x6c74e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bef6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54befbu); f_00630f40();
    /* 0054befb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054befe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054beff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bf02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf03: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bf08u); f_00686d8e();
    /* 0054bf08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bf0b:; BB(0x0054bf0b);
    /* 0054bf0b: jmp 0x54bfab */ goto L_0054bfab;
L_0054bf10:; BB(0x0054bf10);
    /* 0054bf10: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0054bf14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bf16: je 0x54bf34 */ if (fZ) goto L_0054bf34;
L_0054bf18:; BB(0x0054bf18);
    /* 0054bf18: push 0x6c7298 */ { u32 v = 0x6c7298u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf1d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bf22u); f_00630f40();
    /* 0054bf22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bf29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf2a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bf2fu); f_00686d8e();
    /* 0054bf2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf32: jmp 0x54bf72 */ goto L_0054bf72;
L_0054bf34:; BB(0x0054bf34);
    /* 0054bf34: movzx ecx, byte ptr [ebp - 3] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffdu));
    /* 0054bf38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054bf3a: je 0x54bf58 */ if (fZ) goto L_0054bf58;
L_0054bf3c:; BB(0x0054bf3c);
    /* 0054bf3c: push 0x6c7274 */ { u32 v = 0x6c7274u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf41: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bf46u); f_00630f40();
    /* 0054bf46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054bf4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf4e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bf53u); f_00686d8e();
    /* 0054bf53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf56: jmp 0x54bf72 */ goto L_0054bf72;
L_0054bf58:; BB(0x0054bf58);
    /* 0054bf58: push 0x6c74e0 */ { u32 v = 0x6c74e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf5d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bf62u); f_00630f40();
    /* 0054bf62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf66: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054bf69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf6a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bf6fu); f_00686d8e();
    /* 0054bf6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bf72:; BB(0x0054bf72);
    /* 0054bf72: jmp 0x54bfab */ goto L_0054bfab;
L_0054bf74:; BB(0x0054bf74);
    /* 0054bf74: push 0x6c725c */ { u32 v = 0x6c725cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf79: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54bf7eu); f_00630f40();
    /* 0054bf7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf82: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054bf85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf86: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54bf8bu); f_00686d8e();
    /* 0054bf8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054bf8e: jmp 0x54bfab */ goto L_0054bfab;
L_0054bf90:; BB(0x0054bf90);
    /* 0054bf90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0054bf92: jne 0x54bfab */ if (!fZ) goto L_0054bfab;
L_0054bf94:; BB(0x0054bf94);
    /* 0054bf94: push 0x64b */ { u32 v = 0x64bu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf99: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054bf9e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054bfa3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54bfa8u); f_005e9f20();
    /* 0054bfa8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054bfab:; BB(0x0054bfab);
    /* 0054bfab: mov esp, ebp */ r_esp = r_ebp;
    /* 0054bfad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054bfae: ret 0x10 */ FN_RET(0x0054b1e0); r_esp += 20; return;
}

void f_0054c000(void) /* videoblackjackstate::func_0054c000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c000);
    /* 0054c000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c001: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c003: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c006: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c009: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c00b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c00e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0054c011: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c012: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c015: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54c01au); f_00549e80();
    /* 0054c01a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054c01d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c020: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0054c023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c024: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c027: call 0x549fa0 */ r_esp -= 4; W32(r_esp, 0x54c02cu); f_00549fa0();
    /* 0054c02c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c02e: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c031: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0054c034: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0054c037: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c03a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0054c03d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c03e: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 0054c044: call 0x542a00 */ r_esp -= 4; W32(r_esp, 0x54c049u); f_00542a00();
    /* 0054c049: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054c04c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054c04f: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c052: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054c055: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054c059: ja 0x54c139 */ if ((!fC&&!fZ)) goto L_0054c139;
L_0054c05f:; BB(0x0054c05f);
    /* 0054c05f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054c062: jmp dword ptr [edx*4 + 0x54c15c] */ { u32 t = R32((u32)(r_edx*4+0x54c15cu)); switch (t) { case 0x54c0a4u: goto L_0054c0a4; case 0x54c069u: goto L_0054c069; case 0x54c0dcu: goto L_0054c0dc; case 0x54c114u: goto L_0054c114; default: UNSUP(0x0054c062, "jump table entry is not a known target"); } }
L_0054c069:; BB(0x0054c069);
    /* 0054c069: push 0x6c6cf4 */ { u32 v = 0x6c6cf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c06e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54c073u); f_00630f40();
    /* 0054c073: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c077: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054c07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c07b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54c080u); f_00686d8e();
    /* 0054c080: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c083: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0054c087: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c089: je 0x54c096 */ if (fZ) goto L_0054c096;
L_0054c08b:; BB(0x0054c08b);
    /* 0054c08b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0054c08e: mov dword ptr [edx], 0x13b5 */ W32((u32)(r_edx), 0x13b5u);
    /* 0054c094: jmp 0x54c09f */ goto L_0054c09f;
L_0054c096:; BB(0x0054c096);
    /* 0054c096: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054c099: mov dword ptr [eax], 0x13b4 */ W32((u32)(r_eax), 0x13b4u);
L_0054c09f:; BB(0x0054c09f);
    /* 0054c09f: jmp 0x54c154 */ goto L_0054c154;
L_0054c0a4:; BB(0x0054c0a4);
    /* 0054c0a4: push 0x6c6d10 */ { u32 v = 0x6c6d10u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0a9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54c0aeu); f_00630f40();
    /* 0054c0ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c0b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054c0b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0b6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54c0bbu); f_00686d8e();
    /* 0054c0bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c0be: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0054c0c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c0c4: je 0x54c0d1 */ if (fZ) goto L_0054c0d1;
L_0054c0c6:; BB(0x0054c0c6);
    /* 0054c0c6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054c0c9: mov dword ptr [eax], 0x13b5 */ W32((u32)(r_eax), 0x13b5u);
    /* 0054c0cf: jmp 0x54c0da */ goto L_0054c0da;
L_0054c0d1:; BB(0x0054c0d1);
    /* 0054c0d1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054c0d4: mov dword ptr [ecx], 0x13b4 */ W32((u32)(r_ecx), 0x13b4u);
L_0054c0da:; BB(0x0054c0da);
    /* 0054c0da: jmp 0x54c154 */ goto L_0054c154;
L_0054c0dc:; BB(0x0054c0dc);
    /* 0054c0dc: push 0x6c6cd4 */ { u32 v = 0x6c6cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0e1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54c0e6u); f_00630f40();
    /* 0054c0e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0ea: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054c0ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c0ee: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54c0f3u); f_00686d8e();
    /* 0054c0f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c0f6: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0054c0fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c0fc: je 0x54c109 */ if (fZ) goto L_0054c109;
L_0054c0fe:; BB(0x0054c0fe);
    /* 0054c0fe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054c101: mov dword ptr [ecx], 0x13b3 */ W32((u32)(r_ecx), 0x13b3u);
    /* 0054c107: jmp 0x54c112 */ goto L_0054c112;
L_0054c109:; BB(0x0054c109);
    /* 0054c109: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0054c10c: mov dword ptr [edx], 0x13b8 */ W32((u32)(r_edx), 0x13b8u);
L_0054c112:; BB(0x0054c112);
    /* 0054c112: jmp 0x54c154 */ goto L_0054c154;
L_0054c114:; BB(0x0054c114);
    /* 0054c114: push 0x6c6cb8 */ { u32 v = 0x6c6cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c119: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54c11eu); f_00630f40();
    /* 0054c11e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c121: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c122: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054c125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c126: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54c12bu); f_00686d8e();
    /* 0054c12b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c12e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054c131: mov dword ptr [ecx], 0x13b6 */ W32((u32)(r_ecx), 0x13b6u);
    /* 0054c137: jmp 0x54c154 */ goto L_0054c154;
L_0054c139:; BB(0x0054c139);
    /* 0054c139: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0054c13b: jne 0x54c154 */ if (!fZ) goto L_0054c154;
L_0054c13d:; BB(0x0054c13d);
    /* 0054c13d: push 0x671 */ { u32 v = 0x671u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c142: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c147: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c14c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54c151u); f_005e9f20();
    /* 0054c151: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c154:; BB(0x0054c154);
    /* 0054c154: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c156: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c157: ret 8 */ FN_RET(0x0054c000); r_esp += 12; return;
}

void f_0054c170(void) /* videoblackjackstate::func_0054c170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c170);
    /* 0054c170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c171: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c173: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c176: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054c179: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054c17f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054c182: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054c185: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054c188: sub ecx, 0x13b3 */ {  u32 a = r_ecx; u32 b = 0x13b3u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c18e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054c191: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054c195: ja 0x54c34b */ if ((!fC&&!fZ)) goto L_0054c34b;
L_0054c19b:; BB(0x0054c19b);
    /* 0054c19b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054c19e: jmp dword ptr [edx*4 + 0x54c39c] */ { u32 t = R32((u32)(r_edx*4+0x54c39cu)); switch (t) { case 0x54c1a5u: goto L_0054c1a5; case 0x54c2eau: goto L_0054c2ea; case 0x54c29au: goto L_0054c29a; case 0x54c27eu: goto L_0054c27e; case 0x54c34bu: goto L_0054c34b; case 0x54c209u: goto L_0054c209; default: UNSUP(0x0054c19e, "jump table entry is not a known target"); } }
L_0054c1a5:; BB(0x0054c1a5);
    /* 0054c1a5: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c1a9: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c1ac: jl 0x54c1b6 */ if ((fS!=fO)) goto L_0054c1b6;
L_0054c1ae:; BB(0x0054c1ae);
    /* 0054c1ae: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054c1b4: jmp 0x54c204 */ goto L_0054c204;
L_0054c1b6:; BB(0x0054c1b6);
    /* 0054c1b6: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c1ba: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c1bd: jl 0x54c1c7 */ if ((fS!=fO)) goto L_0054c1c7;
L_0054c1bf:; BB(0x0054c1bf);
    /* 0054c1bf: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054c1c5: jmp 0x54c204 */ goto L_0054c204;
L_0054c1c7:; BB(0x0054c1c7);
    /* 0054c1c7: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c1cb: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c1ce: jl 0x54c1d8 */ if ((fS!=fO)) goto L_0054c1d8;
L_0054c1d0:; BB(0x0054c1d0);
    /* 0054c1d0: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0054c1d6: jmp 0x54c204 */ goto L_0054c204;
L_0054c1d8:; BB(0x0054c1d8);
    /* 0054c1d8: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c1dc: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c1df: jl 0x54c1e9 */ if ((fS!=fO)) goto L_0054c1e9;
L_0054c1e1:; BB(0x0054c1e1);
    /* 0054c1e1: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0054c1e7: jmp 0x54c204 */ goto L_0054c204;
L_0054c1e9:; BB(0x0054c1e9);
    /* 0054c1e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0054c1eb: jne 0x54c204 */ if (!fZ) goto L_0054c204;
L_0054c1ed:; BB(0x0054c1ed);
    /* 0054c1ed: push 0x686 */ { u32 v = 0x686u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1f2: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1f7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c1fc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54c201u); f_005e9f20();
    /* 0054c201: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c204:; BB(0x0054c204);
    /* 0054c204: jmp 0x54c366 */ goto L_0054c366;
L_0054c209:; BB(0x0054c209);
    /* 0054c209: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c20d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c210: jne 0x54c21a */ if (!fZ) goto L_0054c21a;
L_0054c212:; BB(0x0054c212);
    /* 0054c212: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054c218: jmp 0x54c279 */ goto L_0054c279;
L_0054c21a:; BB(0x0054c21a);
    /* 0054c21a: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c21e: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c221: jne 0x54c22b */ if (!fZ) goto L_0054c22b;
L_0054c223:; BB(0x0054c223);
    /* 0054c223: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054c229: jmp 0x54c279 */ goto L_0054c279;
L_0054c22b:; BB(0x0054c22b);
    /* 0054c22b: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c22f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c232: jne 0x54c23c */ if (!fZ) goto L_0054c23c;
L_0054c234:; BB(0x0054c234);
    /* 0054c234: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0054c23a: jmp 0x54c279 */ goto L_0054c279;
L_0054c23c:; BB(0x0054c23c);
    /* 0054c23c: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c240: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c243: jne 0x54c24d */ if (!fZ) goto L_0054c24d;
L_0054c245:; BB(0x0054c245);
    /* 0054c245: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0054c24b: jmp 0x54c279 */ goto L_0054c279;
L_0054c24d:; BB(0x0054c24d);
    /* 0054c24d: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c251: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c254: jne 0x54c25e */ if (!fZ) goto L_0054c25e;
L_0054c256:; BB(0x0054c256);
    /* 0054c256: mov word ptr [ebp - 0xc], 4 */ W16((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 0054c25c: jmp 0x54c279 */ goto L_0054c279;
L_0054c25e:; BB(0x0054c25e);
    /* 0054c25e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0054c260: jne 0x54c279 */ if (!fZ) goto L_0054c279;
L_0054c262:; BB(0x0054c262);
    /* 0054c262: push 0x694 */ { u32 v = 0x694u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c267: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c26c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c271: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54c276u); f_005e9f20();
    /* 0054c276: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c279:; BB(0x0054c279);
    /* 0054c279: jmp 0x54c366 */ goto L_0054c366;
L_0054c27e:; BB(0x0054c27e);
    /* 0054c27e: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c282: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0054c283: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054c285: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0054c287: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0054c28c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c28e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c291: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 0054c295: jmp 0x54c366 */ goto L_0054c366;
L_0054c29a:; BB(0x0054c29a);
    /* 0054c29a: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c29e: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c2a1: jl 0x54c2ab */ if ((fS!=fO)) goto L_0054c2ab;
L_0054c2a3:; BB(0x0054c2a3);
    /* 0054c2a3: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054c2a9: jmp 0x54c2e8 */ goto L_0054c2e8;
L_0054c2ab:; BB(0x0054c2ab);
    /* 0054c2ab: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c2af: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c2b2: jne 0x54c2bc */ if (!fZ) goto L_0054c2bc;
L_0054c2b4:; BB(0x0054c2b4);
    /* 0054c2b4: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054c2ba: jmp 0x54c2e8 */ goto L_0054c2e8;
L_0054c2bc:; BB(0x0054c2bc);
    /* 0054c2bc: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c2c0: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c2c3: jl 0x54c2cd */ if ((fS!=fO)) goto L_0054c2cd;
L_0054c2c5:; BB(0x0054c2c5);
    /* 0054c2c5: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0054c2cb: jmp 0x54c2e8 */ goto L_0054c2e8;
L_0054c2cd:; BB(0x0054c2cd);
    /* 0054c2cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0054c2cf: jne 0x54c2e8 */ if (!fZ) goto L_0054c2e8;
L_0054c2d1:; BB(0x0054c2d1);
    /* 0054c2d1: push 0x6a1 */ { u32 v = 0x6a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c2d6: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c2db: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c2e0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54c2e5u); f_005e9f20();
    /* 0054c2e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c2e8:; BB(0x0054c2e8);
    /* 0054c2e8: jmp 0x54c366 */ goto L_0054c366;
L_0054c2ea:; BB(0x0054c2ea);
    /* 0054c2ea: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c2ee: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c2f1: jl 0x54c2fb */ if ((fS!=fO)) goto L_0054c2fb;
L_0054c2f3:; BB(0x0054c2f3);
    /* 0054c2f3: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054c2f9: jmp 0x54c349 */ goto L_0054c349;
L_0054c2fb:; BB(0x0054c2fb);
    /* 0054c2fb: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c2ff: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c302: jl 0x54c30c */ if ((fS!=fO)) goto L_0054c30c;
L_0054c304:; BB(0x0054c304);
    /* 0054c304: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054c30a: jmp 0x54c349 */ goto L_0054c349;
L_0054c30c:; BB(0x0054c30c);
    /* 0054c30c: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c310: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c313: jne 0x54c31d */ if (!fZ) goto L_0054c31d;
L_0054c315:; BB(0x0054c315);
    /* 0054c315: mov word ptr [ebp - 0xc], 2 */ W16((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0054c31b: jmp 0x54c349 */ goto L_0054c349;
L_0054c31d:; BB(0x0054c31d);
    /* 0054c31d: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0054c321: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c324: jl 0x54c32e */ if ((fS!=fO)) goto L_0054c32e;
L_0054c326:; BB(0x0054c326);
    /* 0054c326: mov word ptr [ebp - 0xc], 3 */ W16((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0054c32c: jmp 0x54c349 */ goto L_0054c349;
L_0054c32e:; BB(0x0054c32e);
    /* 0054c32e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0054c330: jne 0x54c349 */ if (!fZ) goto L_0054c349;
L_0054c332:; BB(0x0054c332);
    /* 0054c332: push 0x6ad */ { u32 v = 0x6adu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c337: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c33c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c341: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54c346u); f_005e9f20();
    /* 0054c346: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c349:; BB(0x0054c349);
    /* 0054c349: jmp 0x54c366 */ goto L_0054c366;
L_0054c34b:; BB(0x0054c34b);
    /* 0054c34b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0054c34d: jne 0x54c366 */ if (!fZ) goto L_0054c366;
L_0054c34f:; BB(0x0054c34f);
    /* 0054c34f: push 0x6b0 */ { u32 v = 0x6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c354: push 0x6c702c */ { u32 v = 0x6c702cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054c359: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c35e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54c363u); f_005e9f20();
    /* 0054c363: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054c366:; BB(0x0054c366);
    /* 0054c366: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0054c36a: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054c36d: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0054c371: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0054c375: imul ecx, ecx, 0xe */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xeu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054c378: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054c37b: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0054c37f: imul edx, edx, 0x12 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x12u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054c382: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0054c385: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054c388: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c38b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0054c38d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c390: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0054c393: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054c396: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c399: ret 0x10 */ FN_RET(0x0054c170); r_esp += 20; return;
}

