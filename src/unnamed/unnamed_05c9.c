#include "protos.h"

void f_005c9030(void) /* sub_5C9030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9030);
    /* 005c9030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9031: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9037: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c903a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c903d: mov dword ptr [ecx + eax*4 + 0x18], 1 */ W32((u32)(r_ecx+r_eax*4+0x18u), 0x1u);
    /* 005c9045: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c9047: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c904a: ret 8 */ FN_RET(0x005c9030); r_esp += 12; return;
}

void f_005c9050(void) /* sub_5C9050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9050);
    /* 005c9050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9051: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c9059: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c905c: mov byte ptr [eax + 0x14], 1 */ W8((u32)(r_eax+0x14u), 0x1u);
    /* 005c9060: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9067: jmp 0x5c9072 */ goto L_005c9072;
L_005c9069:; BB(0x005c9069);
    /* 005c9069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c906c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c906f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c9072:; BB(0x005c9072);
    /* 005c9072: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9075: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c9078: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c907b: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c907d: jge 0x5c90b8 */ if ((fS==fO)) goto L_005c90b8;
L_005c907f:; BB(0x005c907f);
    /* 005c907f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9082: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9085: cmp dword ptr [eax + edx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c908a: jl 0x5c908e */ if ((fS!=fO)) goto L_005c908e;
L_005c908c:; BB(0x005c908c);
    /* 005c908c: jmp 0x5c9069 */ goto L_005c9069;
L_005c908e:; BB(0x005c908e);
    /* 005c908e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9091: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c9094: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9097: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c909a: mov ecx, dword ptr [edx + eax + 0x20] */ r_ecx = R32((u32)(r_edx+r_eax+0x20u));
    /* 005c909e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c90a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c90a2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5c90a7u); f_0062fbf0();
    /* 005c90a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c90aa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c90ac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c90af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c90b2: mov dword ptr [ecx + edx*4 + 0x18], eax */ W32((u32)(r_ecx+r_edx*4+0x18u), r_eax);
    /* 005c90b6: jmp 0x5c9069 */ goto L_005c9069;
L_005c90b8:; BB(0x005c90b8);
    /* 005c90b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c90ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c90bb: ret  */ FN_RET(0x005c9050); r_esp += 4; return;
}

void f_005c90c0(void) /* sub_5C90C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c90c0);
    /* 005c90c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c90c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c90c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c90c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c90c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c90cc: mov byte ptr [eax + 0x14], 1 */ W8((u32)(r_eax+0x14u), 0x1u);
    /* 005c90d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c90d7: jmp 0x5c90e2 */ goto L_005c90e2;
L_005c90d9:; BB(0x005c90d9);
    /* 005c90d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c90dc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c90df: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c90e2:; BB(0x005c90e2);
    /* 005c90e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c90e5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c90e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c90eb: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c90ed: jge 0x5c9126 */ if ((fS==fO)) goto L_005c9126;
L_005c90ef:; BB(0x005c90ef);
    /* 005c90ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c90f2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c90f5: cmp dword ptr [eax + edx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c90fa: jl 0x5c90fe */ if ((fS!=fO)) goto L_005c90fe;
L_005c90fc:; BB(0x005c90fc);
    /* 005c90fc: jmp 0x5c90d9 */ goto L_005c90d9;
L_005c90fe:; BB(0x005c90fe);
    /* 005c90fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9101: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c9104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9107: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c910a: mov ecx, dword ptr [edx + eax + 0x20] */ r_ecx = R32((u32)(r_edx+r_eax+0x20u));
    /* 005c910e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9111: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9112: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5c9117u); f_0062fbf0();
    /* 005c9117: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c911a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c911d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9120: mov dword ptr [ecx + edx*4 + 0x18], eax */ W32((u32)(r_ecx+r_edx*4+0x18u), r_eax);
    /* 005c9124: jmp 0x5c90d9 */ goto L_005c90d9;
L_005c9126:; BB(0x005c9126);
    /* 005c9126: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9129: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c912eu); f_005c9140();
    /* 005c912e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9130: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9131: ret  */ FN_RET(0x005c90c0); r_esp += 4; return;
}

void f_005c9550(void) /* sub_5C9550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9550);
    /* 005c9550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9551: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9553: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9556: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c9559: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c9560: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9563: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c9566: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005c9569: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c956c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c9573: jmp 0x5c957e */ goto L_005c957e;
L_005c9575:; BB(0x005c9575);
    /* 005c9575: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9578: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c957b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c957e:; BB(0x005c957e);
    /* 005c957e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9581: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c9584: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9587: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9589: jge 0x5c95c7 */ if ((fS==fO)) goto L_005c95c7;
L_005c958b:; BB(0x005c958b);
    /* 005c958b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c958e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c9591: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9594: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c9597: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 005c959a: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c959d: jne 0x5c95b7 */ if (!fZ) goto L_005c95b7;
L_005c959f:; BB(0x005c959f);
    /* 005c959f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c95a2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c95a5: mov dword ptr [edx + ecx*4], 1 */ W32((u32)(r_edx+r_ecx*4), 0x1u);
    /* 005c95ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c95af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c95b2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c95b5: jmp 0x5c9575 */ goto L_005c9575;
L_005c95b7:; BB(0x005c95b7);
    /* 005c95b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c95ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c95bd: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005c95c0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c95c3: jmp 0x5c95c7 */ goto L_005c95c7;
L_005c95c7:; BB(0x005c95c7);
    /* 005c95c7: jmp 0x5c95d2 */ goto L_005c95d2;
L_005c95c9:; BB(0x005c95c9);
    /* 005c95c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c95cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c95cf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005c95d2:; BB(0x005c95d2);
    /* 005c95d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c95d5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c95d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c95db: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c95dd: jge 0x5c961b */ if ((fS==fO)) goto L_005c961b;
L_005c95df:; BB(0x005c95df);
    /* 005c95df: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c95e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c95e5: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005c95e8: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95eb: je 0x5c9603 */ if (fZ) goto L_005c9603;
L_005c95ed:; BB(0x005c95ed);
    /* 005c95ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c95f0: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c95f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c95f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c95f9: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005c95fc: cmp ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95ff: je 0x5c9603 */ if (fZ) goto L_005c9603;
L_005c9601:; BB(0x005c9601);
    /* 005c9601: jmp 0x5c961b */ goto L_005c961b;
L_005c9603:; BB(0x005c9603);
    /* 005c9603: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9606: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c9609: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 005c9610: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9613: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9616: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c9619: jmp 0x5c95c9 */ goto L_005c95c9;
L_005c961b:; BB(0x005c961b);
    /* 005c961b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c961f: je 0x5c9629 */ if (fZ) goto L_005c9629;
L_005c9621:; BB(0x005c9621);
    /* 005c9621: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c9624: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9627: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005c9629:; BB(0x005c9629);
    /* 005c9629: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c962d: je 0x5c9637 */ if (fZ) goto L_005c9637;
L_005c962f:; BB(0x005c962f);
    /* 005c962f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005c9632: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9635: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_005c9637:; BB(0x005c9637);
    /* 005c9637: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9639: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c963a: ret 0x10 */ FN_RET(0x005c9550); r_esp += 20; return;
}

void f_005c9640(void) /* sub_5C9640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9640);
    /* 005c9640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9641: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9643: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9646: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c9649: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9650: jmp 0x5c965b */ goto L_005c965b;
L_005c9652:; BB(0x005c9652);
    /* 005c9652: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9655: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9658: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c965b:; BB(0x005c965b);
    /* 005c965b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c965e: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c9661: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c9664: cmp dword ptr [edx + ecx], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9668: je 0x5c96b4 */ if (fZ) goto L_005c96b4;
L_005c966a:; BB(0x005c966a);
    /* 005c966a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c966d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c9670: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c9673: mov edx, dword ptr [ecx + eax] */ r_edx = R32((u32)(r_ecx+r_eax));
    /* 005c9676: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9679: jne 0x5c96b2 */ if (!fZ) goto L_005c96b2;
L_005c967b:; BB(0x005c967b);
    /* 005c967b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c967e: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c9681: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9684: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005c9687: mov edx, dword ptr [eax + ecx*4 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x4u));
    /* 005c968b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005c968e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9692: je 0x5c96ad */ if (fZ) goto L_005c96ad;
L_005c9694:; BB(0x005c9694);
    /* 005c9694: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c9697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9698: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005c969b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c969c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c969f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c96a0: push 0x6d23f0 */ { u32 v = 0x6d23f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c96a5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5c96aau); f_0062fde0();
    /* 005c96aa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c96ad:; BB(0x005c96ad);
    /* 005c96ad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c96b0: jmp 0x5c96b6 */ goto L_005c96b6;
L_005c96b2:; BB(0x005c96b2);
    /* 005c96b2: jmp 0x5c9652 */ goto L_005c9652;
L_005c96b4:; BB(0x005c96b4);
    /* 005c96b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c96b6:; BB(0x005c96b6);
    /* 005c96b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005c96b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c96b9: ret 0x14 */ FN_RET(0x005c9640); r_esp += 24; return;
}

void f_005c96c0(void) /* sub_5C96C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c96c0);
    /* 005c96c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c96c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c96c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c96c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c96c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c96d0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c96d7: jmp 0x5c96e2 */ goto L_005c96e2;
L_005c96d9:; BB(0x005c96d9);
    /* 005c96d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c96dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c96df: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c96e2:; BB(0x005c96e2);
    /* 005c96e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c96e5: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c96e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c96eb: cmp dword ptr [edx + ecx], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c96ef: je 0x5c9735 */ if (fZ) goto L_005c9735;
L_005c96f1:; BB(0x005c96f1);
    /* 005c96f1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005c96f8: jmp 0x5c9703 */ goto L_005c9703;
L_005c96fa:; BB(0x005c96fa);
    /* 005c96fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c96fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9700: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005c9703:; BB(0x005c9703);
    /* 005c9703: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9707: jge 0x5c9733 */ if ((fS==fO)) goto L_005c9733;
L_005c9709:; BB(0x005c9709);
    /* 005c9709: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c970c: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c970f: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9712: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9715: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9718: cmp eax, dword ptr [ecx + edx*4 + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c971c: jge 0x5c9731 */ if ((fS==fO)) goto L_005c9731;
L_005c971e:; BB(0x005c971e);
    /* 005c971e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9721: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005c9724: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9727: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c972a: mov eax, dword ptr [ecx + edx*4 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x4u));
    /* 005c972e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c9731:; BB(0x005c9731);
    /* 005c9731: jmp 0x5c96fa */ goto L_005c96fa;
L_005c9733:; BB(0x005c9733);
    /* 005c9733: jmp 0x5c96d9 */ goto L_005c96d9;
L_005c9735:; BB(0x005c9735);
    /* 005c9735: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9738: mov esp, ebp */ r_esp = r_ebp;
    /* 005c973a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c973b: ret 4 */ FN_RET(0x005c96c0); r_esp += 8; return;
}

void f_005c9740(void) /* sub_5C9740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9740);
    /* 005c9740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9741: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9743: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9746: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c9749: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
    /* 005c974d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9750: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c9753: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9757: jge 0x5c9760 */ if ((fS==fO)) goto L_005c9760;
L_005c9759:; BB(0x005c9759);
    /* 005c9759: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c975b: jmp 0x5c993b */ goto L_005c993b;
L_005c9760:; BB(0x005c9760);
    /* 005c9760: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005c9767: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005c976e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9771: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c9774: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c9777: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c9779: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c977a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c977c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c977e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c9781: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9784: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c9787: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c978a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c978b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c978d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c978f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c9792: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c9799: jmp 0x5c97a4 */ goto L_005c97a4;
L_005c979b:; BB(0x005c979b);
    /* 005c979b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c979e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c97a1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005c97a4:; BB(0x005c97a4);
    /* 005c97a4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c97a7: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c97aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c97ad: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c97af: jge 0x5c9888 */ if ((fS==fO)) goto L_005c9888;
L_005c97b5:; BB(0x005c97b5);
    /* 005c97b5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c97b8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c97bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c97be: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c97c1: lea ecx, [edx + eax + 0x20] */ r_ecx = (u32)(r_edx+r_eax+0x20u);
    /* 005c97c5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c97c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c97cf: jmp 0x5c97da */ goto L_005c97da;
L_005c97d1:; BB(0x005c97d1);
    /* 005c97d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c97d4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c97d7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c97da:; BB(0x005c97da);
    /* 005c97da: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c97dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c97e0: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c97e2: jge 0x5c97fd */ if ((fS==fO)) goto L_005c97fd;
L_005c97e4:; BB(0x005c97e4);
    /* 005c97e4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c97e7: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c97ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c97ed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c97f0: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005c97f4: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c97f7: jne 0x5c97fb */ if (!fZ) goto L_005c97fb;
L_005c97f9:; BB(0x005c97f9);
    /* 005c97f9: jmp 0x5c97fd */ goto L_005c97fd;
L_005c97fb:; BB(0x005c97fb);
    /* 005c97fb: jmp 0x5c97d1 */ goto L_005c97d1;
L_005c97fd:; BB(0x005c97fd);
    /* 005c97fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c9800: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9803: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9805: jl 0x5c9809 */ if ((fS!=fO)) goto L_005c9809;
L_005c9807:; BB(0x005c9807);
    /* 005c9807: jmp 0x5c979b */ goto L_005c979b;
L_005c9809:; BB(0x005c9809);
    /* 005c9809: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 005c980d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9810: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9813: jmp 0x5c981e */ goto L_005c981e;
L_005c9815:; BB(0x005c9815);
    /* 005c9815: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9818: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c981b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c981e:; BB(0x005c981e);
    /* 005c981e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9821: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9824: jg 0x5c9875 */ if ((!fZ&&fS==fO)) goto L_005c9875;
L_005c9826:; BB(0x005c9826);
    /* 005c9826: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9829: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c982c: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9831: jl 0x5c9842 */ if ((fS!=fO)) goto L_005c9842;
L_005c9833:; BB(0x005c9833);
    /* 005c9833: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9836: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9839: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c983d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005c9840: jmp 0x5c9851 */ goto L_005c9851;
L_005c9842:; BB(0x005c9842);
    /* 005c9842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9845: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9848: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c984c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c984e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_005c9851:; BB(0x005c9851);
    /* 005c9851: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9854: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9858: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c985b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c985c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c985f: call 0x5be340 */ r_esp -= 4; W32(r_esp, 0x5c9864u); f_005be340();
    /* 005c9864: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9867: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005c986a: cmp eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c986d: jne 0x5c9873 */ if (!fZ) goto L_005c9873;
L_005c986f:; BB(0x005c986f);
    /* 005c986f: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
L_005c9873:; BB(0x005c9873);
    /* 005c9873: jmp 0x5c9815 */ goto L_005c9815;
L_005c9875:; BB(0x005c9875);
    /* 005c9875: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005c9879: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c987b: jne 0x5c9883 */ if (!fZ) goto L_005c9883;
L_005c987d:; BB(0x005c987d);
    /* 005c987d: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 005c9881: jmp 0x5c9888 */ goto L_005c9888;
L_005c9883:; BB(0x005c9883);
    /* 005c9883: jmp 0x5c979b */ goto L_005c979b;
L_005c9888:; BB(0x005c9888);
    /* 005c9888: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005c988c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c988e: je 0x5c9938 */ if (fZ) goto L_005c9938;
L_005c9894:; BB(0x005c9894);
    /* 005c9894: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c989b: jmp 0x5c98a6 */ goto L_005c98a6;
L_005c989d:; BB(0x005c989d);
    /* 005c989d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c98a0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c98a3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005c98a6:; BB(0x005c98a6);
    /* 005c98a6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c98a9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c98ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c98af: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c98b1: jge 0x5c9938 */ if ((fS==fO)) goto L_005c9938;
L_005c98b7:; BB(0x005c98b7);
    /* 005c98b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c98ba: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c98bd: jmp 0x5c98c8 */ goto L_005c98c8;
L_005c98bf:; BB(0x005c98bf);
    /* 005c98bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c98c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c98c5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c98c8:; BB(0x005c98c8);
    /* 005c98c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c98cb: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c98ce: jg 0x5c9933 */ if ((!fZ&&fS==fO)) goto L_005c9933;
L_005c98d0:; BB(0x005c98d0);
    /* 005c98d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c98d3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c98d6: cmp dword ptr [eax + edx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c98db: jl 0x5c98ec */ if ((fS!=fO)) goto L_005c98ec;
L_005c98dd:; BB(0x005c98dd);
    /* 005c98dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c98e0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c98e3: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005c98e7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c98ea: jmp 0x5c98fb */ goto L_005c98fb;
L_005c98ec:; BB(0x005c98ec);
    /* 005c98ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c98ef: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c98f2: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005c98f6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c98f8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_005c98fb:; BB(0x005c98fb);
    /* 005c98fb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c98fe: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9901: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9902: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9906: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9909: call 0x5be340 */ r_esp -= 4; W32(r_esp, 0x5c990eu); f_005be340();
    /* 005c990e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9911: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c9914: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9917: jne 0x5c9931 */ if (!fZ) goto L_005c9931;
L_005c9919:; BB(0x005c9919);
    /* 005c9919: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c991c: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c991f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9922: lea edx, [ecx + eax + 0x54] */ r_edx = (u32)(r_ecx+r_eax+0x54u);
    /* 005c9926: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9929: mov dword ptr [edx + eax*4 + 8], 0x32 */ W32((u32)(r_edx+r_eax*4+0x8u), 0x32u);
L_005c9931:; BB(0x005c9931);
    /* 005c9931: jmp 0x5c98bf */ goto L_005c98bf;
L_005c9933:; BB(0x005c9933);
    /* 005c9933: jmp 0x5c989d */ goto L_005c989d;
L_005c9938:; BB(0x005c9938);
    /* 005c9938: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
L_005c993b:; BB(0x005c993b);
    /* 005c993b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c993d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c993e: ret  */ FN_RET(0x005c9740); r_esp += 4; return;
}

void f_005c9940(void) /* sub_5C9940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9940);
    /* 005c9940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9941: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c994a: mov al, byte ptr [eax + 0xe4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xe4u))) & 0xffu);
    /* 005c9950: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9953: ret  */ FN_RET(0x005c9940); r_esp += 4; return;
}

void f_005c9960(void) /* sub_5C9960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9960);
    /* 005c9960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9961: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9966: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9969: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c996c: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c9971u); f_005c9140();
    /* 005c9971: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c9974: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9977: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c997c: jl 0x5c998d */ if ((fS!=fO)) goto L_005c998d;
L_005c997e:; BB(0x005c997e);
    /* 005c997e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c9981: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9984: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c9988: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c998b: jmp 0x5c999c */ goto L_005c999c;
L_005c998d:; BB(0x005c998d);
    /* 005c998d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c9990: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9993: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c9997: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9999: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005c999c:; BB(0x005c999c);
    /* 005c999c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c999f: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c99a2: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005c99a5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c99a8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005c99ab: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005c99ae: js 0x5c99b6 */ if (fS) goto L_005c99b6;
L_005c99b0:; BB(0x005c99b0);
    /* 005c99b0: cmp dword ptr [ebp + 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c99b4: jl 0x5c99ba */ if ((fS!=fO)) goto L_005c99ba;
L_005c99b6:; BB(0x005c99b6);
    /* 005c99b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c99b8: jmp 0x5c99cd */ goto L_005c99cd;
L_005c99ba:; BB(0x005c99ba);
    /* 005c99ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c99bd: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c99c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c99c3: lea eax, [edx + ecx + 0x54] */ r_eax = (u32)(r_edx+r_ecx+0x54u);
    /* 005c99c7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c99ca: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
L_005c99cd:; BB(0x005c99cd);
    /* 005c99cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005c99cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c99d0: ret 8 */ FN_RET(0x005c9960); r_esp += 12; return;
}

void f_005c99e0(void) /* sub_5C99E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c99e0);
    /* 005c99e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c99e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c99e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c99e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c99e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c99ec: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 005c99f2: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c99f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c99f8: mov dword ptr [edx + 0xe0], ecx */ W32((u32)(r_edx+0xe0u), r_ecx);
    /* 005c99fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9a01: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c9a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c9a07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a0a: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c9a0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9a11: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5c9a16u); f_005d0a20();
    /* 005c9a16: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9a18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9a19: ret 4 */ FN_RET(0x005c99e0); r_esp += 8; return;
}

void f_005c9c70(void) /* sub_5C9C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9c70);
    /* 005c9c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c71: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c75: push 0x6a8a20 */ { u32 v = 0x6a8a20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c9c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c81: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9c87: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c9c8c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c8f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c9c92: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c9c98: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005c9c9e: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005c9ca4: fstp qword ptr [ebp - 0x64] */ W_F64((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 005c9ca7: fld1  */ FPUSH(1.0);
    /* 005c9ca9: fstp qword ptr [ebp - 0x5c] */ W_F64((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 005c9cac: fld qword ptr [0x6be720] */ FPUSH(R_F64((u32)(0x6be720u)));
    /* 005c9cb2: fstp qword ptr [ebp - 0x54] */ W_F64((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 005c9cb5: fld qword ptr [0x6be518] */ FPUSH(R_F64((u32)(0x6be518u)));
    /* 005c9cbb: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 005c9cbe: fld qword ptr [0x6d2430] */ FPUSH(R_F64((u32)(0x6d2430u)));
    /* 005c9cc4: fstp qword ptr [ebp - 0x44] */ W_F64((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 005c9cc7: fld qword ptr [0x6be520] */ FPUSH(R_F64((u32)(0x6be520u)));
    /* 005c9ccd: fstp qword ptr [ebp - 0x3c] */ W_F64((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 005c9cd0: mov dword ptr [ebp - 0x2c], 0x1b7 */ W32((u32)(r_ebp+0xffffffd4u), 0x1b7u);
    /* 005c9cd7: mov dword ptr [ebp - 0x28], 0x1b4 */ W32((u32)(r_ebp+0xffffffd8u), 0x1b4u);
    /* 005c9cde: mov dword ptr [ebp - 0x24], 0x1e2 */ W32((u32)(r_ebp+0xffffffdcu), 0x1e2u);
    /* 005c9ce5: mov dword ptr [ebp - 0x20], 0x1b0 */ W32((u32)(r_ebp+0xffffffe0u), 0x1b0u);
    /* 005c9cec: mov dword ptr [ebp - 0x1c], 0x20b */ W32((u32)(r_ebp+0xffffffe4u), 0x20bu);
    /* 005c9cf3: mov dword ptr [ebp - 0x18], 0x1a8 */ W32((u32)(r_ebp+0xffffffe8u), 0x1a8u);
    /* 005c9cfa: mov dword ptr [ebp - 0x14], 0x22e */ W32((u32)(r_ebp+0xffffffecu), 0x22eu);
    /* 005c9d01: mov dword ptr [ebp - 0x10], 0x198 */ W32((u32)(r_ebp+0xfffffff0u), 0x198u);
    /* 005c9d08: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c9d0f: jmp 0x5c9d1a */ goto L_005c9d1a;
L_005c9d11:; BB(0x005c9d11);
    /* 005c9d11: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9d14: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9d17: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005c9d1a:; BB(0x005c9d1a);
    /* 005c9d1a: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9d1e: jge 0x5c9e15 */ if ((fS==fO)) goto L_005c9e15;
L_005c9d24:; BB(0x005c9d24);
    /* 005c9d24: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9d27: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9d2d: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d32: jne 0x5c9def */ if (!fZ) goto L_005c9def;
L_005c9d38:; BB(0x005c9d38);
    /* 005c9d38: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c9d42u); f_00686d82();
    /* 005c9d42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9d45: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005c9d48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9d4f: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d53: je 0x5c9d72 */ if (fZ) goto L_005c9d72;
L_005c9d55:; BB(0x005c9d55);
    /* 005c9d55: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9d58: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9d5b: fld qword ptr [ebp + eax*8 - 0x5c] */ FPUSH(R_F64((u32)(r_ebp+r_eax*8+0xffffffa4u)));
    /* 005c9d5f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005c9d62: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005c9d65: call 0x5ca9f0 */ r_esp -= 4; W32(r_esp, 0x5c9d6au); f_005ca9f0();
    /* 005c9d6a: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005c9d70: jmp 0x5c9d7c */ goto L_005c9d7c;
L_005c9d72:; BB(0x005c9d72);
    /* 005c9d72: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005c9d7c:; BB(0x005c9d7c);
    /* 005c9d7c: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c9d82: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005c9d85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c9d8c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9d8f: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9d95: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005c9d98: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005c9d9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d9e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9da0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9da3: mov eax, dword ptr [ebp + edx*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd8u));
    /* 005c9da7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9da8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9dab: mov edx, dword ptr [ebp + ecx*8 - 0x2c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u));
    /* 005c9daf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9db0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9db3: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9db9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9dbc: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9dc2: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005c9dc6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c9dcbu); f_005eae80();
    /* 005c9dcb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9dce: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9dd4: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005c9dd8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9ddb: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9de1: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005c9de5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c9de7: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005c9ded: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9defu); call_ind(t); }
L_005c9def:; BB(0x005c9def);
    /* 005c9def: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9df2: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9df8: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005c9dfc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9dff: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9e05: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005c9e09: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005c9e0b: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005c9e0e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c9e10u); call_ind(t); }
    /* 005c9e10: jmp 0x5c9d11 */ goto L_005c9d11;
L_005c9e15:; BB(0x005c9e15);
    /* 005c9e15: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c9e1c: jmp 0x5c9e27 */ goto L_005c9e27;
L_005c9e1e:; BB(0x005c9e1e);
    /* 005c9e1e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9e21: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c9e24: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005c9e27:; BB(0x005c9e27);
    /* 005c9e27: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9e2b: jge 0x5c9f10 */ if ((fS==fO)) goto L_005c9f10;
L_005c9e31:; BB(0x005c9e31);
    /* 005c9e31: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9e34: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9e3a: cmp dword ptr [edx + ecx*4 + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e3f: jne 0x5c9f0b */ if (!fZ) goto L_005c9f0b;
L_005c9e45:; BB(0x005c9e45);
    /* 005c9e45: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c9e4fu); f_00686d82();
    /* 005c9e4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9e52: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005c9e55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c9e5c: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e60: je 0x5c9e76 */ if (fZ) goto L_005c9e76;
L_005c9e62:; BB(0x005c9e62);
    /* 005c9e62: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e66: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c9e69: call 0x5cb320 */ r_esp -= 4; W32(r_esp, 0x5c9e6eu); f_005cb320();
    /* 005c9e6e: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005c9e74: jmp 0x5c9e80 */ goto L_005c9e80;
L_005c9e76:; BB(0x005c9e76);
    /* 005c9e76: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005c9e80:; BB(0x005c9e80);
    /* 005c9e80: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005c9e86: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005c9e89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c9e90: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9e93: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9e99: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005c9e9c: mov dword ptr [eax + edx*4 + 0x14], ecx */ W32((u32)(r_eax+r_edx*4+0x14u), r_ecx);
    /* 005c9ea0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9ea2: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9ea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9ea6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9ea8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9eab: add edx, 0x408 */ {  u32 a = r_edx; u32 b = 0x408u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c9eb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9eb2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9eb5: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9ebb: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 005c9ebf: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c9ec4u); f_005eae80();
    /* 005c9ec4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9ec7: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9ecd: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 005c9ed1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9ed4: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9eda: mov edx, dword ptr [eax + edx*4 + 0x14] */ r_edx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 005c9ede: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005c9ee0: mov ecx, edx */ r_ecx = r_edx;
    /* 005c9ee2: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005c9ee8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c9eeau); call_ind(t); }
    /* 005c9eea: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9eed: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9ef3: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 005c9ef7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9efa: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9f00: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 005c9f04: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c9f06: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c9f09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9f0bu); call_ind(t); }
L_005c9f0b:; BB(0x005c9f0b);
    /* 005c9f0b: jmp 0x5c9e1e */ goto L_005c9e1e;
L_005c9f10:; BB(0x005c9f10);
    /* 005c9f10: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9f16: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f1a: jne 0x5c9faf */ if (!fZ) goto L_005c9faf;
L_005c9f20:; BB(0x005c9f20);
    /* 005c9f20: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f25: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c9f2au); f_00686d82();
    /* 005c9f2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9f2d: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005c9f30: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c9f37: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f3b: je 0x5c9f4d */ if (fZ) goto L_005c9f4d;
L_005c9f3d:; BB(0x005c9f3d);
    /* 005c9f3d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005c9f40: call 0x5cb040 */ r_esp -= 4; W32(r_esp, 0x5c9f45u); f_005cb040();
    /* 005c9f45: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005c9f4b: jmp 0x5c9f57 */ goto L_005c9f57;
L_005c9f4d:; BB(0x005c9f4d);
    /* 005c9f4d: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005c9f57:; BB(0x005c9f57);
    /* 005c9f57: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005c9f5d: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 005c9f60: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c9f67: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9f6d: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c9f70: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005c9f73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f75: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f77: push 0x1c6 */ { u32 v = 0x1c6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f7c: push 0x199 */ { u32 v = 0x199u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f81: push 0x42e */ { u32 v = 0x42eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f86: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9f8c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005c9f8f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c9f94u); f_005eae80();
    /* 005c9f94: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9f9a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c9f9d: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9fa3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005c9fa6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c9fa8: mov ecx, eax */ r_ecx = r_eax;
    /* 005c9faa: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c9fad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9fafu); call_ind(t); }
L_005c9faf:; BB(0x005c9faf);
    /* 005c9faf: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9fb5: call 0x5ca570 */ r_esp -= 4; W32(r_esp, 0x5c9fbau); f_005ca570();
    /* 005c9fba: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005c9fc0: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fc4: jne 0x5ca05b */ if (!fZ) goto L_005ca05b;
L_005c9fca:; BB(0x005c9fca);
    /* 005c9fca: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9fcf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c9fd4u); f_00686d82();
    /* 005c9fd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9fd7: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005c9fdd: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c9fe4: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9feb: je 0x5ca000 */ if (fZ) goto L_005ca000;
L_005c9fed:; BB(0x005c9fed);
    /* 005c9fed: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c9ff3: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5c9ff8u); f_005ec5a0();
    /* 005c9ff8: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005c9ffe: jmp 0x5ca00a */ goto L_005ca00a;
L_005ca000:; BB(0x005ca000);
    /* 005ca000: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005ca00a:; BB(0x005ca00a);
    /* 005ca00a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005ca010: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 005ca013: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ca01a: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005ca020: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005ca023: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005ca026: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca028: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca02a: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca02f: push 0x1bd */ { u32 v = 0x1bdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca034: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca039: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca03b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca03d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca03f: push 0x6d2414 */ { u32 v = 0x6d2414u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca044: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ca049u); f_00630f40();
    /* 005ca049: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca04c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca04d: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005ca053: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005ca056: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5ca05bu); f_005ec8f0();
L_005ca05b:; BB(0x005ca05b);
    /* 005ca05b: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005ca061: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca065: jne 0x5ca0f9 */ if (!fZ) goto L_005ca0f9;
L_005ca06b:; BB(0x005ca06b);
    /* 005ca06b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca070: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ca075u); f_00686d82();
    /* 005ca075: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca078: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005ca07e: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005ca085: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca08c: je 0x5ca0a1 */ if (fZ) goto L_005ca0a1;
L_005ca08e:; BB(0x005ca08e);
    /* 005ca08e: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ca094: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5ca099u); f_005ec5a0();
    /* 005ca099: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005ca09f: jmp 0x5ca0ab */ goto L_005ca0ab;
L_005ca0a1:; BB(0x005ca0a1);
    /* 005ca0a1: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005ca0ab:; BB(0x005ca0ab);
    /* 005ca0ab: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005ca0b1: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005ca0b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ca0be: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005ca0c4: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005ca0ca: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005ca0cd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0cf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0d1: push 0x3e9 */ { u32 v = 0x3e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0d6: push 0x1ce */ { u32 v = 0x1ceu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0db: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0e0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0e2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0e4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0e6: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca0eb: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005ca0f1: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005ca0f4: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5ca0f9u); f_005ec8f0();
L_005ca0f9:; BB(0x005ca0f9);
    /* 005ca0f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ca0fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ca103: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ca104: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca107: ret  */ FN_RET(0x005c9c70); r_esp += 4; return;
}

