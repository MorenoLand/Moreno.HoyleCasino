#include "protos.h"

void f_00535543(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535543);
    /* 00535543: int3  */ UNSUP(0x00535543, "int3");
}

void f_0053554e(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053554e);
    /* 0053554e: int3  */ UNSUP(0x0053554e, "int3");
}

void f_00535750(void) /* sub_535750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535750);
    /* 00535750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535751: mov ebp, esp */ r_ebp = r_esp;
    /* 00535753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535756: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053575c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053575f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535762: sub ecx, 0x30ef5f */ {  u32 a = r_ecx; u32 b = 0x30ef5fu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00535768: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053576b: cmp dword ptr [ebp - 8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0053576f: ja 0x53586b */ if ((!fC&&!fZ)) goto L_0053586b;
L_00535775:; BB(0x00535775);
    /* 00535775: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535778: jmp dword ptr [edx*4 + 0x535874] */ { u32 t = R32((u32)(r_edx*4+0x535874u)); switch (t) { case 0x53577fu: goto L_0053577f; case 0x535789u: goto L_00535789; case 0x535793u: goto L_00535793; case 0x53579du: goto L_0053579d; case 0x5357a7u: goto L_005357a7; case 0x53586bu: goto L_0053586b; case 0x5357b1u: goto L_005357b1; case 0x5357bbu: goto L_005357bb; case 0x5357c5u: goto L_005357c5; case 0x5357cfu: goto L_005357cf; case 0x5357d9u: goto L_005357d9; case 0x5357e3u: goto L_005357e3; case 0x5357edu: goto L_005357ed; case 0x5357f4u: goto L_005357f4; case 0x5357fbu: goto L_005357fb; case 0x535802u: goto L_00535802; case 0x535809u: goto L_00535809; case 0x535810u: goto L_00535810; case 0x535817u: goto L_00535817; case 0x535825u: goto L_00535825; case 0x53582cu: goto L_0053582c; case 0x535856u: goto L_00535856; case 0x535833u: goto L_00535833; case 0x53583au: goto L_0053583a; case 0x53585du: goto L_0053585d; case 0x535841u: goto L_00535841; case 0x535848u: goto L_00535848; case 0x535864u: goto L_00535864; case 0x53584fu: goto L_0053584f; default: UNSUP(0x00535778, "jump table entry is not a known target"); } }
L_0053577f:; BB(0x0053577f);
    /* 0053577f: mov eax, 8 */ r_eax = 0x8u;
    /* 00535784: jmp 0x53586e */ goto L_0053586e;
L_00535789:; BB(0x00535789);
    /* 00535789: mov eax, 1 */ r_eax = 0x1u;
    /* 0053578e: jmp 0x53586e */ goto L_0053586e;
L_00535793:; BB(0x00535793);
    /* 00535793: mov eax, 3 */ r_eax = 0x3u;
    /* 00535798: jmp 0x53586e */ goto L_0053586e;
L_0053579d:; BB(0x0053579d);
    /* 0053579d: mov eax, 7 */ r_eax = 0x7u;
    /* 005357a2: jmp 0x53586e */ goto L_0053586e;
L_005357a7:; BB(0x005357a7);
    /* 005357a7: mov eax, 6 */ r_eax = 0x6u;
    /* 005357ac: jmp 0x53586e */ goto L_0053586e;
L_005357b1:; BB(0x005357b1);
    /* 005357b1: mov eax, 5 */ r_eax = 0x5u;
    /* 005357b6: jmp 0x53586e */ goto L_0053586e;
L_005357bb:; BB(0x005357bb);
    /* 005357bb: mov eax, 2 */ r_eax = 0x2u;
    /* 005357c0: jmp 0x53586e */ goto L_0053586e;
L_005357c5:; BB(0x005357c5);
    /* 005357c5: mov eax, 4 */ r_eax = 0x4u;
    /* 005357ca: jmp 0x53586e */ goto L_0053586e;
L_005357cf:; BB(0x005357cf);
    /* 005357cf: mov eax, 0xb */ r_eax = 0xbu;
    /* 005357d4: jmp 0x53586e */ goto L_0053586e;
L_005357d9:; BB(0x005357d9);
    /* 005357d9: mov eax, 0xc */ r_eax = 0xcu;
    /* 005357de: jmp 0x53586e */ goto L_0053586e;
L_005357e3:; BB(0x005357e3);
    /* 005357e3: mov eax, 0xd */ r_eax = 0xdu;
    /* 005357e8: jmp 0x53586e */ goto L_0053586e;
L_005357ed:; BB(0x005357ed);
    /* 005357ed: mov eax, 0xe */ r_eax = 0xeu;
    /* 005357f2: jmp 0x53586e */ goto L_0053586e;
L_005357f4:; BB(0x005357f4);
    /* 005357f4: mov eax, 0xf */ r_eax = 0xfu;
    /* 005357f9: jmp 0x53586e */ goto L_0053586e;
L_005357fb:; BB(0x005357fb);
    /* 005357fb: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00535800: jmp 0x53586e */ goto L_0053586e;
L_00535802:; BB(0x00535802);
    /* 00535802: mov eax, 0x11 */ r_eax = 0x11u;
    /* 00535807: jmp 0x53586e */ goto L_0053586e;
L_00535809:; BB(0x00535809);
    /* 00535809: mov eax, 0x12 */ r_eax = 0x12u;
    /* 0053580e: jmp 0x53586e */ goto L_0053586e;
L_00535810:; BB(0x00535810);
    /* 00535810: mov eax, 0x16 */ r_eax = 0x16u;
    /* 00535815: jmp 0x53586e */ goto L_0053586e;
L_00535817:; BB(0x00535817);
    /* 00535817: mov eax, 0x1a */ r_eax = 0x1au;
    /* 0053581c: jmp 0x53586e */ goto L_0053586e;
L_00535825:; BB(0x00535825);
    /* 00535825: mov eax, 0x13 */ r_eax = 0x13u;
    /* 0053582a: jmp 0x53586e */ goto L_0053586e;
L_0053582c:; BB(0x0053582c);
    /* 0053582c: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00535831: jmp 0x53586e */ goto L_0053586e;
L_00535833:; BB(0x00535833);
    /* 00535833: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00535838: jmp 0x53586e */ goto L_0053586e;
L_0053583a:; BB(0x0053583a);
    /* 0053583a: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0053583f: jmp 0x53586e */ goto L_0053586e;
L_00535841:; BB(0x00535841);
    /* 00535841: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 00535846: jmp 0x53586e */ goto L_0053586e;
L_00535848:; BB(0x00535848);
    /* 00535848: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 0053584d: jmp 0x53586e */ goto L_0053586e;
L_0053584f:; BB(0x0053584f);
    /* 0053584f: mov eax, 9 */ r_eax = 0x9u;
    /* 00535854: jmp 0x53586e */ goto L_0053586e;
L_00535856:; BB(0x00535856);
    /* 00535856: mov eax, 0x15 */ r_eax = 0x15u;
    /* 0053585b: jmp 0x53586e */ goto L_0053586e;
L_0053585d:; BB(0x0053585d);
    /* 0053585d: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00535862: jmp 0x53586e */ goto L_0053586e;
L_00535864:; BB(0x00535864);
    /* 00535864: mov eax, 0x1d */ r_eax = 0x1du;
    /* 00535869: jmp 0x53586e */ goto L_0053586e;
L_0053586b:; BB(0x0053586b);
    /* 0053586b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0053586e:; BB(0x0053586e);
    /* 0053586e: mov esp, ebp */ r_esp = r_ebp;
    /* 00535870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535871: ret 4 */ FN_RET(0x00535750); r_esp += 8; return;
}

void f_00535940(void) /* sub_535940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535940);
    /* 00535940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535941: mov ebp, esp */ r_ebp = r_esp;
    /* 00535943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535947: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535949: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053594f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x535954u); f_006375b0();
    /* 00535954: mov ecx, eax */ r_ecx = r_eax;
    /* 00535956: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x53595bu); f_0063aae0();
    /* 0053595b: mov esp, ebp */ r_esp = r_ebp;
    /* 0053595d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053595e: ret  */ FN_RET(0x00535940); r_esp += 4; return;
}

void f_00535960(void) /* sub_535960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535960);
    /* 00535960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535961: mov ebp, esp */ r_ebp = r_esp;
    /* 00535963: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535966: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00535969: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053596c: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 00535970: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535973: mov byte ptr [ecx + 0x7f], 0 */ W8((u32)(r_ecx+0x7fu), 0x0u);
    /* 00535977: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053597a: mov byte ptr [edx + 0x7e], 0 */ W8((u32)(r_edx+0x7eu), 0x0u);
    /* 0053597e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535981: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 0053598b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053598e: mov dword ptr [ecx + 0x84], 0 */ W32((u32)(r_ecx+0x84u), 0x0u);
    /* 00535998: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053599b: mov byte ptr [edx + 0x7d], 0 */ W8((u32)(r_edx+0x7du), 0x0u);
    /* 0053599f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005359a6: jmp 0x5359b1 */ goto L_005359b1;
L_005359a8:; BB(0x005359a8);
    /* 005359a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005359ab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005359ae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005359b1:; BB(0x005359b1);
    /* 005359b1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005359b5: jge 0x5359e4 */ if ((fS==fO)) goto L_005359e4;
L_005359b7:; BB(0x005359b7);
    /* 005359b7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005359be: jmp 0x5359c9 */ goto L_005359c9;
L_005359c0:; BB(0x005359c0);
    /* 005359c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005359c3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005359c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005359c9:; BB(0x005359c9);
    /* 005359c9: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005359cd: jge 0x5359e2 */ if ((fS==fO)) goto L_005359e2;
L_005359cf:; BB(0x005359cf);
    /* 005359cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005359d2: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005359d5: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005359d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005359db: mov byte ptr [eax + edx + 0x15], 0xff */ W8((u32)(r_eax+r_edx+0x15u), 0xffu);
    /* 005359e0: jmp 0x5359c0 */ goto L_005359c0;
L_005359e2:; BB(0x005359e2);
    /* 005359e2: jmp 0x5359a8 */ goto L_005359a8;
L_005359e4:; BB(0x005359e4);
    /* 005359e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005359eb: jmp 0x5359f6 */ goto L_005359f6;
L_005359ed:; BB(0x005359ed);
    /* 005359ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005359f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005359f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005359f6:; BB(0x005359f6);
    /* 005359f6: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005359fa: jge 0x535a4a */ if ((fS==fO)) goto L_00535a4a;
L_005359fc:; BB(0x005359fc);
    /* 005359fc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00535a03: jmp 0x535a0e */ goto L_00535a0e;
L_00535a05:; BB(0x00535a05);
    /* 00535a05: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535a08: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00535a0b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00535a0e:; BB(0x00535a0e);
    /* 00535a0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535a11: call 0x538510 */ r_esp -= 4; W32(r_esp, 0x535a16u); f_00538510();
    /* 00535a16: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535a19: jge 0x535a48 */ if ((fS==fO)) goto L_00535a48;
L_00535a1b:; BB(0x00535a1b);
    /* 00535a1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535a1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535a22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535a23: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00535a29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00535a2b: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00535a31: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00535a34: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x535a36u); call_ind(t); }
    /* 00535a36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535a39: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00535a3c: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535a3f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535a42: mov byte ptr [edx + ecx + 0x15], al */ W8((u32)(r_edx+r_ecx+0x15u), (u8)r_eax);
    /* 00535a46: jmp 0x535a05 */ goto L_00535a05;
L_00535a48:; BB(0x00535a48);
    /* 00535a48: jmp 0x5359ed */ goto L_005359ed;
L_00535a4a:; BB(0x00535a4a);
    /* 00535a4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535a51: jmp 0x535a5c */ goto L_00535a5c;
L_00535a53:; BB(0x00535a53);
    /* 00535a53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535a56: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00535a59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00535a5c:; BB(0x00535a5c);
    /* 00535a5c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535a60: jge 0x535a72 */ if ((fS==fO)) goto L_00535a72;
L_00535a62:; BB(0x00535a62);
    /* 00535a62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535a65: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535a68: mov dword ptr [edx + ecx*4 + 0x64], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x64u), 0xffffffffu);
    /* 00535a70: jmp 0x535a53 */ goto L_00535a53;
L_00535a72:; BB(0x00535a72);
    /* 00535a72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535a75: call 0x536730 */ r_esp -= 4; W32(r_esp, 0x535a7au); f_00536730();
    /* 00535a7a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535a7c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00535a82: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x535a87u); f_005df700();
    /* 00535a87: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00535a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535a8c: je 0x535aa2 */ if (fZ) goto L_00535aa2;
L_00535a8e:; BB(0x00535a8e);
    /* 00535a8e: push 0x7293c0 */ { u32 v = 0x7293c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535a93: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535a95: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00535a9b: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x535aa0u); f_0057ab80();
    /* 00535aa0: jmp 0x535aad */ goto L_00535aad;
L_00535aa2:; BB(0x00535aa2);
    /* 00535aa2: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00535aa8: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x535aadu); f_0057ae30();
L_00535aad:; BB(0x00535aad);
    /* 00535aad: mov esp, ebp */ r_esp = r_ebp;
    /* 00535aaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535ab0: ret  */ FN_RET(0x00535960); r_esp += 4; return;
}

void f_00535ae0(void) /* sub_535AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535ae0);
    /* 00535ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00535ae3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535ae6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00535ae9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00535aec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00535aef: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00535af3: ja 0x535cff */ if ((!fC&&!fZ)) goto L_00535cff;
L_00535af9:; BB(0x00535af9);
    /* 00535af9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00535afc: jmp dword ptr [ecx*4 + 0x535d08] */ { u32 t = R32((u32)(r_ecx*4+0x535d08u)); switch (t) { case 0x535b03u: goto L_00535b03; case 0x535b50u: goto L_00535b50; case 0x535b9cu: goto L_00535b9c; case 0x535c00u: goto L_00535c00; case 0x535c41u: goto L_00535c41; case 0x535c96u: goto L_00535c96; default: UNSUP(0x00535afc, "jump table entry is not a known target"); } }
L_00535b03:; BB(0x00535b03);
    /* 00535b03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b06: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00535b0c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535b0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b10: fld1  */ FPUSH(1.0);
    /* 00535b12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535b15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b17: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b1d: push 0x30f0cb */ { u32 v = 0x30f0cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00535b22: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00535b28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00535b2a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535b30: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00535b36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x535b38u); call_ind(t); }
    /* 00535b38: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535b3b: call 0x5d1210 */ r_esp -= 4; W32(r_esp, 0x535b40u); f_005d1210();
    /* 00535b40: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535b46: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x535b4bu); f_0052c7e0();
    /* 00535b4b: jmp 0x535cff */ goto L_00535cff;
L_00535b50:; BB(0x00535b50);
    /* 00535b50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b53: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00535b59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535b5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b5d: fld1  */ FPUSH(1.0);
    /* 00535b5f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535b62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b64: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b6a: push 0x30f0cb */ { u32 v = 0x30f0cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00535b6f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00535b74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00535b76: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535b7c: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00535b82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535b84u); call_ind(t); }
    /* 00535b84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535b87: call 0x5d0f00 */ r_esp -= 4; W32(r_esp, 0x535b8cu); f_005d0f00();
    /* 00535b8c: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535b92: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x535b97u); f_0052c7e0();
    /* 00535b97: jmp 0x535cff */ goto L_00535cff;
L_00535b9c:; BB(0x00535b9c);
    /* 00535b9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535b9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535b9f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00535ba5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535ba8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535ba9: fld1  */ FPUSH(1.0);
    /* 00535bab: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535bae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535bb0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535bb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535bb6: push 0x30f0cb */ { u32 v = 0x30f0cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00535bbb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535bc1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00535bc3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535bc9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00535bcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535bd1u); call_ind(t); }
    /* 00535bd1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535bd4: call 0x5d1210 */ r_esp -= 4; W32(r_esp, 0x535bd9u); f_005d1210();
    /* 00535bd9: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535bdf: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x535be4u); f_0052c7e0();
    /* 00535be4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535be7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00535bea: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00535bed: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535bf1: je 0x535bfb */ if (fZ) goto L_00535bfb;
L_00535bf3:; BB(0x00535bf3);
    /* 00535bf3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535bf6: call 0x535d20 */ r_esp -= 4; W32(r_esp, 0x535bfbu); f_00535d20();
L_00535bfb:; BB(0x00535bfb);
    /* 00535bfb: jmp 0x535cff */ goto L_00535cff;
L_00535c00:; BB(0x00535c00);
    /* 00535c00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c03: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00535c09: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535c0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c0d: fld1  */ FPUSH(1.0);
    /* 00535c0f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535c12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c14: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c1a: push 0x30f0cb */ { u32 v = 0x30f0cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00535c1f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00535c24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00535c26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535c2c: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00535c32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535c34u); call_ind(t); }
    /* 00535c34: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535c37: call 0x535d20 */ r_esp -= 4; W32(r_esp, 0x535c3cu); f_00535d20();
    /* 00535c3c: jmp 0x535cff */ goto L_00535cff;
L_00535c41:; BB(0x00535c41);
    /* 00535c41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c44: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00535c4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535c4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c4e: fld1  */ FPUSH(1.0);
    /* 00535c50: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00535c53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c55: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c5b: push 0x30f0cb */ { u32 v = 0x30f0cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00535c60: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535c66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00535c68: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00535c6e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00535c74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535c76u); call_ind(t); }
    /* 00535c76: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535c79: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x535c7eu); f_005d13e0();
    /* 00535c7e: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535c84: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x535c89u); f_0052c7e0();
    /* 00535c89: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535c8f: call 0x52ca70 */ r_esp -= 4; W32(r_esp, 0x535c94u); f_0052ca70();
    /* 00535c94: jmp 0x535cff */ goto L_00535cff;
L_00535c96:; BB(0x00535c96);
    /* 00535c96: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00535c99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535c9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535c9c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x535ca1u); f_005dcb00();
    /* 00535ca1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00535ca4: mov ecx, eax */ r_ecx = r_eax;
    /* 00535ca6: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x535cabu); f_005d5a90();
    /* 00535cab: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00535cae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535caf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00535cb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535cb2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535cb5: call 0x5d0d30 */ r_esp -= 4; W32(r_esp, 0x535cbau); f_005d0d30();
    /* 00535cba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535cbc: jne 0x535cf4 */ if (!fZ) goto L_00535cf4;
L_00535cbe:; BB(0x00535cbe);
    /* 00535cbe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535cc1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00535cc4: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00535cc7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ccb: jne 0x535cf4 */ if (!fZ) goto L_00535cf4;
L_00535ccd:; BB(0x00535ccd);
    /* 00535ccd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00535cd0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00535cd3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00535cd6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535cda: jne 0x535cf4 */ if (!fZ) goto L_00535cf4;
L_00535cdc:; BB(0x00535cdc);
    /* 00535cdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535cde: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x535ce3u); f_005dcb00();
    /* 00535ce3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00535ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535ce7: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 00535ced: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x535cf2u); f_005dbb70();
    /* 00535cf2: jmp 0x535cff */ goto L_00535cff;
L_00535cf4:; BB(0x00535cf4);
    /* 00535cf4: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 00535cfa: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x535cffu); f_005dc2e0();
L_00535cff:; BB(0x00535cff);
    /* 00535cff: mov esp, ebp */ r_esp = r_ebp;
    /* 00535d01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535d02: ret 4 */ FN_RET(0x00535ae0); r_esp += 8; return;
}

void f_00535d20(void) /* sub_535D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535d20);
    /* 00535d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00535d23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535d26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00535d29: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535d2c: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00535d32: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535d35: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535d38: mov dword ptr [edx + 0x80], ecx */ W32((u32)(r_edx+0x80u), r_ecx);
    /* 00535d3e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00535d44: call 0x5385b0 */ r_esp -= 4; W32(r_esp, 0x535d49u); f_005385b0();
    /* 00535d49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535d4c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00535d4f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535d52: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 00535d58: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00535d5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535d5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535d61: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00535d64: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535d6a: call 0x52cb00 */ r_esp -= 4; W32(r_esp, 0x535d6fu); f_0052cb00();
    /* 00535d6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00535d71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535d72: ret  */ FN_RET(0x00535d20); r_esp += 4; return;
}

void f_00535d80(void) /* sub_535D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535d80);
    /* 00535d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00535d83: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535d86: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00535d89: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535d8f: call 0x52cc70 */ r_esp -= 4; W32(r_esp, 0x535d94u); f_0052cc70();
    /* 00535d94: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535d97: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00535d9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535da1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00535da4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00535da7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535dad: add ecx, dword ptr [eax + 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x78u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535db0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535db1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535db4: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x535db9u); f_005d0a20();
    /* 00535db9: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535dbf: call 0x52e160 */ r_esp -= 4; W32(r_esp, 0x535dc4u); f_0052e160();
    /* 00535dc4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535dc7: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00535dca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535dcb: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00535dce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535dcf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535dd2: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x535dd7u); f_005d0c30();
    /* 00535dd7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00535dda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535ddb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00535ddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535dde: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00535de0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00535de2: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00535de8: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x535dedu); f_005e7e40();
    /* 00535ded: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00535df0: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 00535df7: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535dfd: call 0x52ddf0 */ r_esp -= 4; W32(r_esp, 0x535e02u); f_0052ddf0();
    /* 00535e02: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00535e08: call 0x52cd40 */ r_esp -= 4; W32(r_esp, 0x535e0du); f_0052cd40();
    /* 00535e0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00535e0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535e10: ret  */ FN_RET(0x00535d80); r_esp += 4; return;
}

void f_00535e20(void) /* sub_535E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535e20);
    /* 00535e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00535e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535e27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00535e29: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00535e2e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00535e31: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x535e36u); f_005fb300();
    /* 00535e36: mov ecx, eax */ r_ecx = r_eax;
    /* 00535e38: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x535e3du); f_006026d0();
    /* 00535e3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00535e3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535e40: ret  */ FN_RET(0x00535e20); r_esp += 4; return;
}

void f_00535e50(void) /* sub_535E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535e50);
    /* 00535e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00535e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00535e57: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00535e5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00535e5e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00535e64: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00535e67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535e69u); call_ind(t); }
    /* 00535e69: mov esp, ebp */ r_esp = r_ebp;
    /* 00535e6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535e6c: ret  */ FN_RET(0x00535e50); r_esp += 4; return;
}

void f_00535e70(void) /* sub_535E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535e70);
    /* 00535e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00535e73: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535e76: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00535e79: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 00535e7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00535e80: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00535e86: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00535e89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x535e8bu); call_ind(t); }
    /* 00535e8b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00535e8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00535e95: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00535e9c: jmp 0x535ea7 */ goto L_00535ea7;
L_00535e9e:; BB(0x00535e9e);
    /* 00535e9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535ea1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00535ea4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00535ea7:; BB(0x00535ea7);
    /* 00535ea7: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535eab: jge 0x535f10 */ if ((fS==fO)) goto L_00535f10;
L_00535ead:; BB(0x00535ead);
    /* 00535ead: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535eb0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00535eb3: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 00535eb7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00535eba: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ebe: je 0x535f04 */ if (fZ) goto L_00535f04;
L_00535ec0:; BB(0x00535ec0);
    /* 00535ec0: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ec4: je 0x535f04 */ if (fZ) goto L_00535f04;
L_00535ec6:; BB(0x00535ec6);
    /* 00535ec6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535ec9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00535ecc: cmp dword ptr [eax + edx*4 + 0x64], 0x3e8 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x64u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535ed4: jne 0x535ee6 */ if (!fZ) goto L_00535ee6;
L_00535ed6:; BB(0x00535ed6);
    /* 00535ed6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00535ed9: call 0x535e50 */ r_esp -= 4; W32(r_esp, 0x535edeu); f_00535e50();
    /* 00535ede: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00535ee1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00535ee4: jmp 0x535f04 */ goto L_00535f04;
L_00535ee6:; BB(0x00535ee6);
    /* 00535ee6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00535ee9: call 0x535e50 */ r_esp -= 4; W32(r_esp, 0x535eeeu); f_00535e50();
    /* 00535eee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535ef1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00535ef4: sub eax, dword ptr [edx + ecx*4 + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00535ef8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00535efb: jns 0x535f04 */ if (!fS) goto L_00535f04;
L_00535efd:; BB(0x00535efd);
    /* 00535efd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00535f04:; BB(0x00535f04);
    /* 00535f04: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535f07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535f0a: mov dword ptr [ebp + eax*4 - 0x20], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffe0u), r_ecx);
    /* 00535f0e: jmp 0x535e9e */ goto L_00535e9e;
L_00535f10:; BB(0x00535f10);
    /* 00535f10: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00535f17: jmp 0x535f22 */ goto L_00535f22;
L_00535f19:; BB(0x00535f19);
    /* 00535f19: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535f1c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00535f1f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00535f22:; BB(0x00535f22);
    /* 00535f22: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535f26: jge 0x535f4e */ if ((fS==fO)) goto L_00535f4e;
L_00535f28:; BB(0x00535f28);
    /* 00535f28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535f2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535f2e: cmp ecx, dword ptr [ebp + eax*4 - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535f32: jle 0x535f3c */ if ((fZ||fS!=fO)) goto L_00535f3c;
L_00535f34:; BB(0x00535f34);
    /* 00535f34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535f37: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00535f3a: jmp 0x535f46 */ goto L_00535f46;
L_00535f3c:; BB(0x00535f3c);
    /* 00535f3c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535f3f: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 00535f43: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_00535f46:; BB(0x00535f46);
    /* 00535f46: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00535f49: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00535f4c: jmp 0x535f19 */ goto L_00535f19;
L_00535f4e:; BB(0x00535f4e);
    /* 00535f4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535f51: mov esp, ebp */ r_esp = r_ebp;
    /* 00535f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535f54: ret  */ FN_RET(0x00535e70); r_esp += 4; return;
}

void f_00535f60(void) /* sub_535F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00535f60);
    /* 00535f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00535f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00535f63: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00535f66: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00535f6b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00535f6d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00535f70: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00535f73: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00535f76: call 0x536730 */ r_esp -= 4; W32(r_esp, 0x535f7bu); f_00536730();
    /* 00535f7b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00535f82: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00535f89: jmp 0x535f94 */ goto L_00535f94;
L_00535f8b:; BB(0x00535f8b);
    /* 00535f8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535f8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00535f91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00535f94:; BB(0x00535f94);
    /* 00535f94: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00535f98: jge 0x535fdc */ if ((fS==fO)) goto L_00535fdc;
L_00535f9a:; BB(0x00535f9a);
    /* 00535f9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535f9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00535f9e: push 0x6c590c */ { u32 v = 0x6c590cu; r_esp -= 4; W32(r_esp, v); }
    /* 00535fa3: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 00535fa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00535fa7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x535fadu); call_ind(t); }
    /* 00535fad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00535fb0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00535fb2: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 00535fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00535fb6: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00535fbc: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00535fbf: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x535fc4u); f_00607960();
    /* 00535fc4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00535fc7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00535fcb: je 0x535fda */ if (fZ) goto L_00535fda;
L_00535fcd:; BB(0x00535fcd);
    /* 00535fcd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00535fd0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00535fd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00535fd6: mov dword ptr [eax + edx*4 + 0x58], ecx */ W32((u32)(r_eax+r_edx*4+0x58u), r_ecx);
L_00535fda:; BB(0x00535fda);
    /* 00535fda: jmp 0x535f8b */ goto L_00535f8b;
L_00535fdc:; BB(0x00535fdc);
    /* 00535fdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00535fdf: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00535fe1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x535fe6u); f_00686d72();
    /* 00535fe6: mov esp, ebp */ r_esp = r_ebp;
    /* 00535fe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00535fe9: ret  */ FN_RET(0x00535f60); r_esp += 4; return;
}

