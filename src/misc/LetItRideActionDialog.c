#include "protos.h"

void f_004490c0(void) /* LetItRideActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004490c0);
    /* 004490c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004490c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004490c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004490c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004490c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004490c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004490cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004490ce: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x4490d3u); f_005f71f0();
    /* 004490d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004490d6: mov dword ptr [eax], 0x6b8c94 */ W32((u32)(r_eax), 0x6b8c94u);
    /* 004490dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004490df: mov esp, ebp */ r_esp = r_ebp;
    /* 004490e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004490e2: ret  */ FN_RET(0x004490c0); r_esp += 4; return;
}

void f_00449110(void) /* LetItRideActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449110);
    /* 00449110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449111: mov ebp, esp */ r_ebp = r_esp;
    /* 00449113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449117: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044911a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0044911e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449120: jne 0x449131 */ if (!fZ) goto L_00449131;
L_00449122:; BB(0x00449122);
    /* 00449122: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00449125: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x44912au); f_005f88f0();
    /* 0044912a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0044912d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044912f: je 0x449136 */ if (fZ) goto L_00449136;
L_00449131:; BB(0x00449131);
    /* 00449131: jmp 0x44920f */ goto L_0044920f;
L_00449136:; BB(0x00449136);
    /* 00449136: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449139: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044913d: jne 0x449203 */ if (!fZ) goto L_00449203;
L_00449143:; BB(0x00449143);
    /* 00449143: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449146: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0044914a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044914b: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x449151u); call_ind(t); }
    /* 00449151: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00449154: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00449157: jne 0x44916b */ if (!fZ) goto L_0044916b;
L_00449159:; BB(0x00449159);
    /* 00449159: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044915f: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x449164u); f_005db240();
    /* 00449164: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00449167: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0044916b:; BB(0x0044916b);
    /* 0044916b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044916e: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00449172: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00449173: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x449179u); call_ind(t); }
    /* 00449179: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044917c: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044917f: jne 0x4491b7 */ if (!fZ) goto L_004491b7;
L_00449181:; BB(0x00449181);
    /* 00449181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449183: push 0x310ab4 */ { u32 v = 0x310ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 00449188: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0044918e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x449193u); f_005f2a60();
    /* 00449193: mov ecx, eax */ r_ecx = r_eax;
    /* 00449195: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x44919au); f_006026d0();
    /* 0044919a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044919d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044919f: je 0x4491b7 */ if (fZ) goto L_004491b7;
L_004491a1:; BB(0x004491a1);
    /* 004491a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004491a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004491a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004491a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004491ab: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 004491ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4491b0u); call_ind(t); }
    /* 004491b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004491b3: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_004491b7:; BB(0x004491b7);
    /* 004491b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004491ba: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 004491be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004491bf: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x4491c5u); call_ind(t); }
    /* 004491c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004491c8: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004491cb: jne 0x449203 */ if (!fZ) goto L_00449203;
L_004491cd:; BB(0x004491cd);
    /* 004491cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004491cf: push 0x310ab3 */ { u32 v = 0x310ab3u; r_esp -= 4; W32(r_esp, v); }
    /* 004491d4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004491da: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x4491dfu); f_005f2a60();
    /* 004491df: mov ecx, eax */ r_ecx = r_eax;
    /* 004491e1: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4491e6u); f_006026d0();
    /* 004491e6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004491e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004491eb: je 0x449203 */ if (fZ) goto L_00449203;
L_004491ed:; BB(0x004491ed);
    /* 004491ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004491ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004491f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004491f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004491f7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004491fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4491fcu); call_ind(t); }
    /* 004491fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004491ff: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00449203:; BB(0x00449203);
    /* 00449203: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00449206: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00449207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044920a: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x44920fu); f_005f72f0();
L_0044920f:; BB(0x0044920f);
    /* 0044920f: mov esp, ebp */ r_esp = r_ebp;
    /* 00449211: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449212: ret 4 */ FN_RET(0x00449110); r_esp += 8; return;
}

void f_00449220(void) /* LetItRideActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449220);
    /* 00449220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449221: mov ebp, esp */ r_ebp = r_esp;
    /* 00449223: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449226: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00449229: mov dword ptr [ebp - 0xc], 0x6b8cf0 */ W32((u32)(r_ebp+0xfffffff4u), 0x6b8cf0u);
    /* 00449230: mov dword ptr [ebp - 8], 0x6b8cd4 */ W32((u32)(r_ebp+0xfffffff8u), 0x6b8cd4u);
    /* 00449237: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0044923e: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00449245: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044924a: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 00449250: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00449253: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449255: push 0x4cc */ { u32 v = 0x4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0044925a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044925d: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x449262u); f_005f83d0();
    /* 00449262: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00449264: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449267: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x44926cu); f_005f89d0();
    /* 0044926c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044926e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00449270: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00449272: push 0x6b6084 */ { u32 v = 0x6b6084u; r_esp -= 4; W32(r_esp, v); }
    /* 00449277: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44927cu); f_00630f40();
    /* 0044927c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044927f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449280: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00449283: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x449288u); f_005f73e0();
    /* 00449288: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0044928f: jmp 0x44929a */ goto L_0044929a;
L_00449291:; BB(0x00449291);
    /* 00449291: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00449294: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00449297: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0044929a:; BB(0x0044929a);
    /* 0044929a: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044929e: jge 0x4492f7 */ if ((fS==fO)) goto L_004492f7;
L_004492a0:; BB(0x004492a0);
    /* 004492a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004492a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004492a4: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004492a6: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004492a8: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 004492aa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004492ad: mov ecx, dword ptr [ebp + eax*4 - 0xc] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 004492b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004492b2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4492b7u); f_00630f40();
    /* 004492b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004492ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004492bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004492bd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004492c0: imul edx, edx, 0x21 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x21u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004492c3: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004492c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004492c7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004492c9: push 0x30d4df */ { u32 v = 0x30d4dfu; r_esp -= 4; W32(r_esp, v); }
    /* 004492ce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004492d1: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 004492d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004492d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004492d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004492db: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x4492e0u); f_005f9de0();
    /* 004492e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004492e2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004492e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004492e6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004492e9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4492eeu); f_005fb300();
    /* 004492ee: mov ecx, eax */ r_ecx = r_eax;
    /* 004492f0: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x4492f5u); f_005eb700();
    /* 004492f5: jmp 0x449291 */ goto L_00449291;
L_004492f7:; BB(0x004492f7);
    /* 004492f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004492f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004492fa: ret  */ FN_RET(0x00449220); r_esp += 4; return;
}

void f_00449360(void) /* LetItRideActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00449360);
    /* 00449360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00449361: mov ebp, esp */ r_ebp = r_esp;
    /* 00449363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00449365: push 0x69ed97 */ { u32 v = 0x69ed97u; r_esp -= 4; W32(r_esp, v); }
    /* 0044936a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00449370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00449371: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00449374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00449379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044937b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044937c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044937f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00449385: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00449388: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044938a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044938e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00449391: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 00449394: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044939a: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 004493a0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004493a3: mov al, byte ptr [ebp - 0x11] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 004493a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004493a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004493aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004493ab: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004493b1: call 0x44d5e0 */ r_esp -= 4; W32(r_esp, 0x4493b6u); f_0044d5e0();
    /* 004493b6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004493b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004493bb: je 0x4493bf */ if (fZ) goto L_004493bf;
L_004493bd:; BB(0x004493bd);
    /* 004493bd: jmp 0x44941a */ goto L_0044941a;
L_004493bf:; BB(0x004493bf);
    /* 004493bf: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 004493c5: call 0x447d60 */ r_esp -= 4; W32(r_esp, 0x4493cau); f_00447d60();
    /* 004493ca: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004493cc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4493d1u); f_00686d82();
    /* 004493d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004493d4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004493d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004493de: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004493e2: je 0x4493f5 */ if (fZ) goto L_004493f5;
L_004493e4:; BB(0x004493e4);
    /* 004493e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004493e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004493e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004493eb: call 0x449430 */ r_esp -= 4; W32(r_esp, 0x4493f0u); f_00449430();
    /* 004493f0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004493f3: jmp 0x4493fc */ goto L_004493fc;
L_004493f5:; BB(0x004493f5);
    /* 004493f5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004493fc:; BB(0x004493fc);
    /* 004493fc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004493ff: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00449402: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00449409: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044940c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044940d: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 00449412: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00449415: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x44941au); f_005fc420();
L_0044941a:; BB(0x0044941a);
    /* 0044941a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044941d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00449424: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00449425: mov esp, ebp */ r_esp = r_ebp;
    /* 00449427: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00449428: ret 4 */ FN_RET(0x00449360); r_esp += 8; return;
}

