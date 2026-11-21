#include "protos.h"

void f_005fc220(void) /* sub_5FC220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc220);
    /* 005fc220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc221: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc22a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fc22d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005fc230: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc232: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc234: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc237: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fc239: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc23c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005fc23f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fc241u); call_ind(t); }
    /* 005fc241: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc243: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc244: ret 4 */ FN_RET(0x005fc220); r_esp += 8; return;
}

void f_005fc250(void) /* sub_5FC250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc250);
    /* 005fc250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc251: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc25a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc25e: je 0x5fc26d */ if (fZ) goto L_005fc26d;
L_005fc260:; BB(0x005fc260);
    /* 005fc260: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc263: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005fc266: call 0x5fc250 */ r_esp -= 4; W32(r_esp, 0x5fc26bu); f_005fc250();
    /* 005fc26b: jmp 0x5fc29b */ goto L_005fc29b;
L_005fc26d:; BB(0x005fc26d);
    /* 005fc26d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc270: cmp dword ptr [edx + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc274: je 0x5fc29b */ if (fZ) goto L_005fc29b;
L_005fc276:; BB(0x005fc276);
    /* 005fc276: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc27c: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5fc281u); f_005f3e50();
    /* 005fc281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc284: cmp eax, dword ptr [ecx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fc287: jl 0x5fc29b */ if ((fS!=fO)) goto L_005fc29b;
L_005fc289:; BB(0x005fc289);
    /* 005fc289: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc28c: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 005fc293: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc296: call 0x5fc3d0 */ r_esp -= 4; W32(r_esp, 0x5fc29bu); f_005fc3d0();
L_005fc29b:; BB(0x005fc29b);
    /* 005fc29b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc29d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc29e: ret  */ FN_RET(0x005fc250); r_esp += 4; return;
}

void f_005fc3d0(void) /* sub_5FC3D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc3d0);
    /* 005fc3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc3d7: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc3dd: call 0x5f3b30 */ r_esp -= 4; W32(r_esp, 0x5fc3e2u); f_005f3b30();
    /* 005fc3e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fc3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc3e7: je 0x5fc3eb */ if (fZ) goto L_005fc3eb;
L_005fc3e9:; BB(0x005fc3e9);
    /* 005fc3e9: jmp 0x5fc417 */ goto L_005fc417;
L_005fc3eb:; BB(0x005fc3eb);
    /* 005fc3eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc3ee: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc3f2: je 0x5fc401 */ if (fZ) goto L_005fc401;
L_005fc3f4:; BB(0x005fc3f4);
    /* 005fc3f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc3f7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005fc3fa: call 0x5fc3d0 */ r_esp -= 4; W32(r_esp, 0x5fc3ffu); f_005fc3d0();
    /* 005fc3ff: jmp 0x5fc417 */ goto L_005fc417;
L_005fc401:; BB(0x005fc401);
    /* 005fc401: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc404: call 0x5fc380 */ r_esp -= 4; W32(r_esp, 0x5fc409u); f_005fc380();
    /* 005fc409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc40a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc40d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fc40f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc412: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005fc415: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc417u); call_ind(t); }
L_005fc417:; BB(0x005fc417);
    /* 005fc417: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc41a: ret  */ FN_RET(0x005fc3d0); r_esp += 4; return;
}

void f_005fc420(void) /* sub_5FC420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc420);
    /* 005fc420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc421: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc423: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fc426: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fc429: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc42c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc430: je 0x5fc461 */ if (fZ) goto L_005fc461;
L_005fc432:; BB(0x005fc432);
    /* 005fc432: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc435: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005fc438: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005fc43b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fc43e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fc441: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc445: je 0x5fc45a */ if (fZ) goto L_005fc45a;
L_005fc447:; BB(0x005fc447);
    /* 005fc447: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc44c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc44e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc451: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fc453: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc455u); call_ind(t); }
    /* 005fc455: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fc458: jmp 0x5fc461 */ goto L_005fc461;
L_005fc45a:; BB(0x005fc45a);
    /* 005fc45a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005fc461:; BB(0x005fc461);
    /* 005fc461: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc464: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fc467: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005fc46a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc46d: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc471: je 0x5fc482 */ if (fZ) goto L_005fc482;
L_005fc473:; BB(0x005fc473);
    /* 005fc473: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc476: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc477: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc47a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005fc47d: call 0x5fc220 */ r_esp -= 4; W32(r_esp, 0x5fc482u); f_005fc220();
L_005fc482:; BB(0x005fc482);
    /* 005fc482: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc484: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc485: ret 4 */ FN_RET(0x005fc420); r_esp += 8; return;
}

void f_005fc490(void) /* sub_5FC490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc490);
    /* 005fc490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc491: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc497: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc49a: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fc49d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc49e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc4a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc4a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc4a6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005fc4a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc4abu); call_ind(t); }
    /* 005fc4ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc4ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc4ae: ret 4 */ FN_RET(0x005fc490); r_esp += 8; return;
}

void f_005fcc50(void) /* sub_5FCC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fcc50);
    /* 005fcc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc51: mov ebp, esp */ r_ebp = r_esp;
    /* 005fcc53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fcc56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fcc59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fcc60: jmp 0x5fcc6b */ goto L_005fcc6b;
L_005fcc62:; BB(0x005fcc62);
    /* 005fcc62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcc65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fcc68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005fcc6b:; BB(0x005fcc6b);
    /* 005fcc6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcc6e: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 005fcc74: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fcc79u); f_005feda0();
    /* 005fcc79: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fcc7c: jge 0x5fcd1f */ if ((fS==fO)) goto L_005fcd1f;
L_005fcc82:; BB(0x005fcc82);
    /* 005fcc82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fcc85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc86: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcc89: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 005fcc8f: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fcc94u); f_005ff080();
    /* 005fcc94: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005fcc97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fcc9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcc9b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcc9e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fcca0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fcca3: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 005fcca9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fccabu); call_ind(t); }
    /* 005fccab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005fccae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fccb0: je 0x5fccb6 */ if (fZ) goto L_005fccb6;
L_005fccb2:; BB(0x005fccb2);
    /* 005fccb2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fccb4: jmp 0x5fcd21 */ goto L_005fcd21;
L_005fccb6:; BB(0x005fccb6);
    /* 005fccb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fccb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fccbb: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 005fccc1: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fccc6u); f_005fb2b0();
    /* 005fccc6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fccc9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fcccc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fcccd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fccd0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fccd2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fccd5: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005fccdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fccddu); call_ind(t); }
    /* 005fccdd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fcce0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcce2: je 0x5fcce8 */ if (fZ) goto L_005fcce8;
L_005fcce4:; BB(0x005fcce4);
    /* 005fcce4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fcce6: jmp 0x5fcd21 */ goto L_005fcd21;
L_005fcce8:; BB(0x005fcce8);
    /* 005fcce8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fccea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fcced: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 005fccf3: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fccf8u); f_005fb2b0();
    /* 005fccf8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fccfb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fccfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fccff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fcd02: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fcd04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fcd07: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005fcd0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fcd0fu); call_ind(t); }
    /* 005fcd0f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fcd12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fcd14: je 0x5fcd1a */ if (fZ) goto L_005fcd1a;
L_005fcd16:; BB(0x005fcd16);
    /* 005fcd16: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005fcd18: jmp 0x5fcd21 */ goto L_005fcd21;
L_005fcd1a:; BB(0x005fcd1a);
    /* 005fcd1a: jmp 0x5fcc62 */ goto L_005fcc62;
L_005fcd1f:; BB(0x005fcd1f);
    /* 005fcd1f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005fcd21:; BB(0x005fcd21);
    /* 005fcd21: mov esp, ebp */ r_esp = r_ebp;
    /* 005fcd23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fcd24: ret 4 */ FN_RET(0x005fcc50); r_esp += 8; return;
}

