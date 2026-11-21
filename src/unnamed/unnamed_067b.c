#include "protos.h"

void f_0067b450(void) /* sub_67B450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067b450);
    /* 0067b450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b451: mov ebp, esp */ r_ebp = r_esp;
    /* 0067b453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b455: push 0x6ad98f */ { u32 v = 0x6ad98fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b45a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067b460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b461: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b467: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067b46c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067b46e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b46f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067b472: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067b478: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0067b47b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b47d: push 0x1f57 */ { u32 v = 0x1f57u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b482: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b487: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067b48c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067b48f: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67b494u); f_006044b0();
    /* 0067b494: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b496: push 0x1f58 */ { u32 v = 0x1f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b49b: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4a0: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067b4a6: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067b4a9: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67b4aeu); f_006044b0();
    /* 0067b4ae: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067b4b5: jmp 0x67b4c0 */ goto L_0067b4c0;
L_0067b4b7:; BB(0x0067b4b7);
    /* 0067b4b7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b4ba: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067b4bd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0067b4c0:; BB(0x0067b4c0);
    /* 0067b4c0: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b4c4: jge 0x67b4e6 */ if ((fS==fO)) goto L_0067b4e6;
L_0067b4c6:; BB(0x0067b4c6);
    /* 0067b4c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b4cb: add eax, 0x249f2d */ {  u32 a = r_eax; u32 b = 0x249f2du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067b4d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4d1: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4d6: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067b4dc: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067b4df: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67b4e4u); f_006044b0();
    /* 0067b4e4: jmp 0x67b4b7 */ goto L_0067b4b7;
L_0067b4e6:; BB(0x0067b4e6);
    /* 0067b4e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4e8: push 0x249f2c */ { u32 v = 0x249f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4ed: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4f2: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067b4f8: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067b4fb: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67b500u); f_006044b0();
    /* 0067b500: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067b503: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067b506: cmp dword ptr [ebp - 0x80], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067b50a: ja 0x67bec2 */ if ((!fC&&!fZ)) goto L_0067bec2;
L_0067b510:; BB(0x0067b510);
    /* 0067b510: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0067b513: movzx edx, byte ptr [ecx + 0x67bf08] */ r_edx = (u32)R8((u32)(r_ecx+0x67bf08u));
    /* 0067b51a: jmp dword ptr [edx*4 + 0x67bed4] */ { u32 t = R32((u32)(r_edx*4+0x67bed4u)); switch (t) { case 0x67b521u: goto L_0067b521; case 0x67b808u: goto L_0067b808; case 0x67b9a2u: goto L_0067b9a2; case 0x67bba9u: goto L_0067bba9; case 0x67bbf9u: goto L_0067bbf9; case 0x67bc78u: goto L_0067bc78; case 0x67bcfcu: goto L_0067bcfc; case 0x67be96u: goto L_0067be96; case 0x67beb5u: goto L_0067beb5; case 0x67ba5bu: goto L_0067ba5b; case 0x67baabu: goto L_0067baab; case 0x67bb2au: goto L_0067bb2a; case 0x67bec2u: goto L_0067bec2; default: UNSUP(0x0067b51a, "jump table entry is not a known target"); } }
L_0067b521:; BB(0x0067b521);
    /* 0067b521: mov word ptr [0x16306e4], 0 */ W16((u32)(0x16306e4u), 0x0u);
    /* 0067b52a: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b52f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b534u); f_00686d82();
    /* 0067b534: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b537: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067b53a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067b541: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b545: je 0x67b557 */ if (fZ) goto L_0067b557;
L_0067b547:; BB(0x0067b547);
    /* 0067b547: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067b54a: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67b54fu); f_005f5f50();
    /* 0067b54f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0067b555: jmp 0x67b561 */ goto L_0067b561;
L_0067b557:; BB(0x0067b557);
    /* 0067b557: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0067b561:; BB(0x0067b561);
    /* 0067b561: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0067b567: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067b56a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b571: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b574: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067b577: mov dword ptr [ecx + 0x240], edx */ W32((u32)(r_ecx+0x240u), r_edx);
    /* 0067b57d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b580: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 0067b586: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b589: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067b58c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067b58f: push 0x249f2c */ { u32 v = 0x249f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b594: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b597: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067b59d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67b5a2u); f_005eaf00();
    /* 0067b5a2: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b5a5: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 0067b5ab: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b5ae: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067b5b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067b5b6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067b5b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b5bbu); call_ind(t); }
    /* 0067b5bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b5bd: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b5c2: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b5c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b5c9: push 0x249f2c */ { u32 v = 0x249f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b5ce: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b5d1: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067b5d7: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67b5dcu); f_005eae80();
    /* 0067b5dc: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b5df: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 0067b5e5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b5e8: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067b5ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067b5f0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067b5f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b5f5u); call_ind(t); }
    /* 0067b5f5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b5f8: mov edx, dword ptr [ecx + 0x240] */ r_edx = R32((u32)(r_ecx+0x240u));
    /* 0067b5fe: mov dword ptr [edx + 0x184], 3 */ W32((u32)(r_edx+0x184u), 0x3u);
    /* 0067b608: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b60b: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 0067b611: mov dword ptr [ecx + 0x188], 0xa */ W32((u32)(r_ecx+0x188u), 0xau);
    /* 0067b61b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067b622: jmp 0x67b62d */ goto L_0067b62d;
L_0067b624:; BB(0x0067b624);
    /* 0067b624: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b627: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067b62a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0067b62d:; BB(0x0067b62d);
    /* 0067b62d: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b631: jge 0x67b713 */ if ((fS==fO)) goto L_0067b713;
L_0067b637:; BB(0x0067b637);
    /* 0067b637: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b63c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b641u); f_00686d82();
    /* 0067b641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b644: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067b647: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067b64e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b652: je 0x67b664 */ if (fZ) goto L_0067b664;
L_0067b654:; BB(0x0067b654);
    /* 0067b654: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b657: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67b65cu); f_005f5f50();
    /* 0067b65c: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0067b662: jmp 0x67b66e */ goto L_0067b66e;
L_0067b664:; BB(0x0067b664);
    /* 0067b664: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0067b66e:; BB(0x0067b66e);
    /* 0067b66e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0067b674: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067b677: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b67e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b681: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b684: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067b687: mov dword ptr [edx + ecx*4 + 0x234], eax */ W32((u32)(r_edx+r_ecx*4+0x234u), r_eax);
    /* 0067b68e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b691: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b694: mov eax, dword ptr [edx + ecx*4 + 0x234] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x234u));
    /* 0067b69b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b69e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067b6a1: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067b6a4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b6a7: add eax, 0x249f2d */ {  u32 a = r_eax; u32 b = 0x249f2du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067b6ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b6ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b6b0: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b6b3: mov ecx, dword ptr [edx + ecx*4 + 0x234] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x234u));
    /* 0067b6ba: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67b6bfu); f_005eaf00();
    /* 0067b6bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b6c2: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b6c5: mov edx, dword ptr [ecx + eax*4 + 0x234] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x234u));
    /* 0067b6cc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b6cf: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b6d2: mov ecx, dword ptr [ecx + eax*4 + 0x234] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x234u));
    /* 0067b6d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b6db: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067b6de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b6e0u); call_ind(t); }
    /* 0067b6e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b6e3: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b6e6: mov eax, dword ptr [edx + ecx*4 + 0x234] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x234u));
    /* 0067b6ed: mov dword ptr [eax + 0x184], 3 */ W32((u32)(r_eax+0x184u), 0x3u);
    /* 0067b6f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b6fa: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b6fd: mov eax, dword ptr [edx + ecx*4 + 0x234] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x234u));
    /* 0067b704: mov dword ptr [eax + 0x188], 3 */ W32((u32)(r_eax+0x188u), 0x3u);
    /* 0067b70e: jmp 0x67b624 */ goto L_0067b624;
L_0067b713:; BB(0x0067b713);
    /* 0067b713: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b715: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b71a: push -0x2b */ { u32 v = 0xffffffd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b71c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b71e: push 0x249f2d */ { u32 v = 0x249f2du; r_esp -= 4; W32(r_esp, v); }
    /* 0067b723: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b726: mov ecx, dword ptr [ecx + 0x234] */ r_ecx = R32((u32)(r_ecx+0x234u));
    /* 0067b72c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67b731u); f_005eae80();
    /* 0067b731: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b733: push 0xe678 */ { u32 v = 0xe678u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b738: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b73a: push -0x2b */ { u32 v = 0xffffffd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b73c: push 0x249f2e */ { u32 v = 0x249f2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b741: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b744: mov ecx, dword ptr [edx + 0x238] */ r_ecx = R32((u32)(r_edx+0x238u));
    /* 0067b74a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67b74fu); f_005eae80();
    /* 0067b74f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b751: push 0xe678 */ { u32 v = 0xe678u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b756: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b758: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b75a: push 0x249f2f */ { u32 v = 0x249f2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b75f: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b762: mov ecx, dword ptr [eax + 0x23c] */ r_ecx = R32((u32)(r_eax+0x23cu));
    /* 0067b768: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67b76du); f_005eae80();
    /* 0067b76d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067b774: jmp 0x67b77f */ goto L_0067b77f;
L_0067b776:; BB(0x0067b776);
    /* 0067b776: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b779: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067b77c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0067b77f:; BB(0x0067b77f);
    /* 0067b77f: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b783: jge 0x67b7aa */ if ((fS==fO)) goto L_0067b7aa;
L_0067b785:; BB(0x0067b785);
    /* 0067b785: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b788: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b78b: mov ecx, dword ptr [eax + edx*4 + 0x234] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x234u));
    /* 0067b792: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067b795: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b798: mov edx, dword ptr [eax + edx*4 + 0x234] */ r_edx = R32((u32)(r_eax+r_edx*4+0x234u));
    /* 0067b79f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067b7a1: mov ecx, edx */ r_ecx = r_edx;
    /* 0067b7a3: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0067b7a6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67b7a8u); call_ind(t); }
    /* 0067b7a8: jmp 0x67b776 */ goto L_0067b776;
L_0067b7aa:; BB(0x0067b7aa);
    /* 0067b7aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7ad: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067b7b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b7b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7b7: fld1  */ FPUSH(1.0);
    /* 0067b7b9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b7bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7be: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7c4: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b7c7: mov ecx, dword ptr [eax + 0x2a0] */ r_ecx = R32((u32)(r_eax+0x2a0u));
    /* 0067b7cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7ce: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067b7d4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067b7d6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b7dc: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0067b7e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67b7e4u); call_ind(t); }
    /* 0067b7e4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b7e8: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b7eb: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b7f1: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b7f4: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067b7fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b7fc: mov ecx, eax */ r_ecx = r_eax;
    /* 0067b7fe: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067b801: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b803u); call_ind(t); }
    /* 0067b803: jmp 0x67bec2 */ goto L_0067bec2;
L_0067b808:; BB(0x0067b808);
    /* 0067b808: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b80a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b80fu); f_00686d82();
    /* 0067b80f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b812: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0067b815: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067b81c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b820: je 0x67b83a */ if (fZ) goto L_0067b83a;
L_0067b822:; BB(0x0067b822);
    /* 0067b822: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b824: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b82a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067b82d: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67b832u); f_00606e60();
    /* 0067b832: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0067b838: jmp 0x67b844 */ goto L_0067b844;
L_0067b83a:; BB(0x0067b83a);
    /* 0067b83a: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0067b844:; BB(0x0067b844);
    /* 0067b844: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067b84a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0067b84d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b854: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067b857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b858: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b85b: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 0067b861: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67b866u); f_005f6050();
    /* 0067b866: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b868: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b86du); f_00686d82();
    /* 0067b86d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b870: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067b873: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067b87a: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b87e: je 0x67b898 */ if (fZ) goto L_0067b898;
L_0067b880:; BB(0x0067b880);
    /* 0067b880: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b884: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b888: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067b88b: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67b890u); f_00606e60();
    /* 0067b890: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0067b896: jmp 0x67b8a2 */ goto L_0067b8a2;
L_0067b898:; BB(0x0067b898);
    /* 0067b898: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0067b8a2:; BB(0x0067b8a2);
    /* 0067b8a2: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0067b8a8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0067b8ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b8b2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067b8b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8b6: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b8b9: mov ecx, dword ptr [eax + 0x234] */ r_ecx = R32((u32)(r_eax+0x234u));
    /* 0067b8bf: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67b8c4u); f_005f6050();
    /* 0067b8c4: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8c6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b8cbu); f_00686d82();
    /* 0067b8cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b8ce: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067b8d1: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067b8d8: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b8dc: je 0x67b8f6 */ if (fZ) goto L_0067b8f6;
L_0067b8de:; BB(0x0067b8de);
    /* 0067b8de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8e6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067b8e9: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67b8eeu); f_00606e60();
    /* 0067b8ee: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0067b8f4: jmp 0x67b900 */ goto L_0067b900;
L_0067b8f6:; BB(0x0067b8f6);
    /* 0067b8f6: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0067b900:; BB(0x0067b900);
    /* 0067b900: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0067b906: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0067b909: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b910: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067b913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b914: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b917: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0067b91d: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67b922u); f_005f6050();
    /* 0067b922: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b924: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b929u); f_00686d82();
    /* 0067b929: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b92c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067b92f: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067b936: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b93a: je 0x67b954 */ if (fZ) goto L_0067b954;
L_0067b93c:; BB(0x0067b93c);
    /* 0067b93c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b93e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b940: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b942: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b944: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067b947: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67b94cu); f_00606e60();
    /* 0067b94c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0067b952: jmp 0x67b95e */ goto L_0067b95e;
L_0067b954:; BB(0x0067b954);
    /* 0067b954: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0067b95e:; BB(0x0067b95e);
    /* 0067b95e: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0067b964: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0067b967: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b96e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067b971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b972: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b975: mov ecx, dword ptr [eax + 0x23c] */ r_ecx = R32((u32)(r_eax+0x23cu));
    /* 0067b97b: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67b980u); f_005f6050();
    /* 0067b980: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0067b982: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b984: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b987: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b98d: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b990: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067b996: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067b998: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067b99b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b99du); call_ind(t); }
    /* 0067b99d: jmp 0x67bec2 */ goto L_0067bec2;
L_0067b9a2:; BB(0x0067b9a2);
    /* 0067b9a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9a5: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067b9ab: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b9ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9af: fld1  */ FPUSH(1.0);
    /* 0067b9b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b9b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9bc: push 0x1f58 */ { u32 v = 0x1f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9c1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b9c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067b9c9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067b9cf: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067b9d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67b9d7u); call_ind(t); }
    /* 0067b9d7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9d9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67b9deu); f_00686d82();
    /* 0067b9de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b9e1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067b9e4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067b9eb: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b9ef: je 0x67ba0d */ if (fZ) goto L_0067ba0d;
L_0067b9f1:; BB(0x0067b9f1);
    /* 0067b9f1: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067b9f4: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067b9fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9fb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9fd: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067ba00: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67ba05u); f_00600f30();
    /* 0067ba05: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0067ba0b: jmp 0x67ba17 */ goto L_0067ba17;
L_0067ba0d:; BB(0x0067ba0d);
    /* 0067ba0d: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0067ba17:; BB(0x0067ba17);
    /* 0067ba17: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0067ba1d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067ba20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067ba27: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067ba2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ba2b: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba2e: mov ecx, dword ptr [edx + 0x240] */ r_ecx = R32((u32)(r_edx+0x240u));
    /* 0067ba34: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67ba39u); f_005f5d50();
    /* 0067ba39: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ba3b: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba3e: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067ba44: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba47: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067ba4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067ba4f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067ba51: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067ba54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ba56u); call_ind(t); }
    /* 0067ba56: jmp 0x67bec2 */ goto L_0067bec2;
L_0067ba5b:; BB(0x0067ba5b);
    /* 0067ba5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ba5d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba60: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067ba66: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67ba6bu); f_005f5d50();
    /* 0067ba6b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ba6d: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba70: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 0067ba76: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba79: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067ba7f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067ba81: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067ba87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ba89u); call_ind(t); }
    /* 0067ba89: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067ba8b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ba8d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba90: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067ba96: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067ba99: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067ba9f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067baa1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067baa4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67baa6u); call_ind(t); }
    /* 0067baa6: jmp 0x67bec2 */ goto L_0067bec2;
L_0067baab:; BB(0x0067baab);
    /* 0067baab: movsx ecx, word ptr [0x16306e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x16306e4u));
    /* 0067bab2: mov dx, word ptr [0x16306e4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x16306e4u))) & 0xffffu);
    /* 0067bab9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0067babd: mov word ptr [0x16306e4], dx */ W16((u32)(0x16306e4u), (u16)r_edx);
    /* 0067bac4: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bac7: jne 0x67baea */ if (!fZ) goto L_0067baea;
L_0067bac9:; BB(0x0067bac9);
    /* 0067bac9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bacb: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bacd: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bad0: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bad6: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bad9: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067badf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067bae1: mov ecx, eax */ r_ecx = r_eax;
    /* 0067bae3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067bae6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bae8u); call_ind(t); }
    /* 0067bae8: jmp 0x67bb25 */ goto L_0067bb25;
L_0067baea:; BB(0x0067baea);
    /* 0067baea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067baec: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067baef: mov edx, dword ptr [ecx + 0x240] */ r_edx = R32((u32)(r_ecx+0x240u));
    /* 0067baf5: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067baf8: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 0067bafe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067bb00: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067bb06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bb08u); call_ind(t); }
    /* 0067bb08: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb0a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb0c: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bb0f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067bb15: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bb18: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bb1e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067bb20: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067bb23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bb25u); call_ind(t); }
L_0067bb25:; BB(0x0067bb25);
    /* 0067bb25: jmp 0x67bec2 */ goto L_0067bec2;
L_0067bb2a:; BB(0x0067bb2a);
    /* 0067bb2a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb2c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67bb31u); f_00686d82();
    /* 0067bb31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067bb34: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067bb37: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0067bb3e: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bb42: je 0x67bb60 */ if (fZ) goto L_0067bb60;
L_0067bb44:; BB(0x0067bb44);
    /* 0067bb44: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bb47: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067bb4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb4e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb50: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067bb53: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67bb58u); f_00600f30();
    /* 0067bb58: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0067bb5e: jmp 0x67bb6a */ goto L_0067bb6a;
L_0067bb60:; BB(0x0067bb60);
    /* 0067bb60: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0067bb6a:; BB(0x0067bb6a);
    /* 0067bb6a: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0067bb70: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067bb73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067bb7a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067bb7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb7e: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bb81: mov ecx, dword ptr [edx + 0x240] */ r_ecx = R32((u32)(r_edx+0x240u));
    /* 0067bb87: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67bb8cu); f_005f5d50();
    /* 0067bb8c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bb8e: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bb91: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bb97: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bb9a: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067bba0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067bba2: mov ecx, eax */ r_ecx = r_eax;
    /* 0067bba4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067bba7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bba9u); call_ind(t); }
L_0067bba9:; BB(0x0067bba9);
    /* 0067bba9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bbab: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bbae: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067bbb4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67bbb9u); f_005f5d50();
    /* 0067bbb9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bbbb: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bbbe: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 0067bbc4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bbc7: mov ecx, dword ptr [ecx + 0x240] */ r_ecx = R32((u32)(r_ecx+0x240u));
    /* 0067bbcd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067bbcf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067bbd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bbd7u); call_ind(t); }
    /* 0067bbd7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067bbd9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bbdb: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bbde: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067bbe4: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bbe7: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bbed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067bbef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067bbf2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bbf4u); call_ind(t); }
    /* 0067bbf4: jmp 0x67bec2 */ goto L_0067bec2;
L_0067bbf9:; BB(0x0067bbf9);
    /* 0067bbf9: movsx ecx, word ptr [0x16306e4] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x16306e4u));
    /* 0067bc00: mov dx, word ptr [0x16306e4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x16306e4u))) & 0xffffu);
    /* 0067bc07: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0067bc0b: mov word ptr [0x16306e4], dx */ W16((u32)(0x16306e4u), (u16)r_edx);
    /* 0067bc12: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bc15: jne 0x67bc38 */ if (!fZ) goto L_0067bc38;
L_0067bc17:; BB(0x0067bc17);
    /* 0067bc17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc19: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc1b: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc1e: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bc24: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc27: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067bc2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067bc2f: mov ecx, eax */ r_ecx = r_eax;
    /* 0067bc31: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067bc34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bc36u); call_ind(t); }
    /* 0067bc36: jmp 0x67bc73 */ goto L_0067bc73;
L_0067bc38:; BB(0x0067bc38);
    /* 0067bc38: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc3a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc3d: mov edx, dword ptr [ecx + 0x240] */ r_edx = R32((u32)(r_ecx+0x240u));
    /* 0067bc43: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc46: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 0067bc4c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067bc4e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067bc54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bc56u); call_ind(t); }
    /* 0067bc56: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc58: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc5a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc5d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067bc63: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc66: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bc6c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067bc6e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067bc71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bc73u); call_ind(t); }
L_0067bc73:; BB(0x0067bc73);
    /* 0067bc73: jmp 0x67bec2 */ goto L_0067bec2;
L_0067bc78:; BB(0x0067bc78);
    /* 0067bc78: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc7a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67bc7fu); f_00686d82();
    /* 0067bc7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067bc82: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0067bc85: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0067bc8c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bc90: je 0x67bcac */ if (fZ) goto L_0067bcac;
L_0067bc92:; BB(0x0067bc92);
    /* 0067bc92: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bc95: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067bc9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bc9c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067bc9f: call 0x600f90 */ r_esp -= 4; W32(r_esp, 0x67bca4u); f_00600f90();
    /* 0067bca4: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0067bcaa: jmp 0x67bcb6 */ goto L_0067bcb6;
L_0067bcac:; BB(0x0067bcac);
    /* 0067bcac: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0067bcb6:; BB(0x0067bcb6);
    /* 0067bcb6: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0067bcbc: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067bcbf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067bcc6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0067bcc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bcca: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bccd: mov ecx, dword ptr [edx + 0x240] */ r_ecx = R32((u32)(r_edx+0x240u));
    /* 0067bcd3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67bcd8u); f_005f5d50();
    /* 0067bcd8: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067bcda: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bcdc: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bcdf: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067bce5: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bce8: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067bcee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067bcf0: mov ecx, eax */ r_ecx = r_eax;
    /* 0067bcf2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067bcf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67bcf7u); call_ind(t); }
    /* 0067bcf7: jmp 0x67bec2 */ goto L_0067bec2;
L_0067bcfc:; BB(0x0067bcfc);
    /* 0067bcfc: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067bcfe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67bd03u); f_00686d82();
    /* 0067bd03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067bd06: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0067bd09: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0067bd10: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bd14: je 0x67bd31 */ if (fZ) goto L_0067bd31;
L_0067bd16:; BB(0x0067bd16);
    /* 0067bd16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd18: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd21: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067bd24: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67bd29u); f_00606e60();
    /* 0067bd29: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0067bd2f: jmp 0x67bd3b */ goto L_0067bd3b;
L_0067bd31:; BB(0x0067bd31);
    /* 0067bd31: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0067bd3b:; BB(0x0067bd3b);
    /* 0067bd3b: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0067bd41: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0067bd44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067bd4b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067bd4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd4f: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bd52: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 0067bd58: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67bd5du); f_005f6050();
    /* 0067bd5d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd5f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67bd64u); f_00686d82();
    /* 0067bd64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067bd67: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0067bd6a: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0067bd71: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bd75: je 0x67bd8f */ if (fZ) goto L_0067bd8f;
L_0067bd77:; BB(0x0067bd77);
    /* 0067bd77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd79: push -0x2b */ { u32 v = 0xffffffd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bd7f: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067bd82: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67bd87u); f_00606e60();
    /* 0067bd87: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0067bd8d: jmp 0x67bd99 */ goto L_0067bd99;
L_0067bd8f:; BB(0x0067bd8f);
    /* 0067bd8f: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0067bd99:; BB(0x0067bd99);
    /* 0067bd99: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0067bd9f: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0067bda2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067bda9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067bdac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bdad: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bdb0: mov ecx, dword ptr [eax + 0x234] */ r_ecx = R32((u32)(r_eax+0x234u));
    /* 0067bdb6: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67bdbbu); f_005f6050();
    /* 0067bdbb: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067bdbd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67bdc2u); f_00686d82();
    /* 0067bdc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067bdc5: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0067bdc8: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0067bdcf: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bdd3: je 0x67bded */ if (fZ) goto L_0067bded;
L_0067bdd5:; BB(0x0067bdd5);
    /* 0067bdd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bdd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bdd9: push -0x2b */ { u32 v = 0xffffffd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bddb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bddd: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067bde0: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67bde5u); f_00606e60();
    /* 0067bde5: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0067bdeb: jmp 0x67bdf7 */ goto L_0067bdf7;
L_0067bded:; BB(0x0067bded);
    /* 0067bded: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0067bdf7:; BB(0x0067bdf7);
    /* 0067bdf7: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067bdfd: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0067be00: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067be07: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0067be0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067be0b: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067be0e: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0067be14: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67be19u); f_005f6050();
    /* 0067be19: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067be1b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67be20u); f_00686d82();
    /* 0067be20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067be23: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067be26: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0067be2d: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be31: je 0x67be4b */ if (fZ) goto L_0067be4b;
L_0067be33:; BB(0x0067be33);
    /* 0067be33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067be35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067be37: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067be39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067be3b: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0067be3e: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67be43u); f_00606e60();
    /* 0067be43: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0067be49: jmp 0x67be55 */ goto L_0067be55;
L_0067be4b:; BB(0x0067be4b);
    /* 0067be4b: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0067be55:; BB(0x0067be55);
    /* 0067be55: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0067be5b: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0067be5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067be65: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067be68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067be69: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067be6c: mov ecx, dword ptr [eax + 0x23c] */ r_ecx = R32((u32)(r_eax+0x23cu));
    /* 0067be72: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67be77u); f_005f6050();
    /* 0067be77: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067be79: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067be7b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067be7e: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067be84: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067be87: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067be8d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067be8f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067be92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67be94u); call_ind(t); }
    /* 0067be94: jmp 0x67bec2 */ goto L_0067bec2;
L_0067be96:; BB(0x0067be96);
    /* 0067be96: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067be98: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067be9a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0067be9d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067bea3: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067bea6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067beac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067beae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067beb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67beb3u); call_ind(t); }
    /* 0067beb3: jmp 0x67bec2 */ goto L_0067bec2;
L_0067beb5:; BB(0x0067beb5);
    /* 0067beb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067beb7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067bebd: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67bec2u); f_00650550();
L_0067bec2:; BB(0x0067bec2);
    /* 0067bec2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067bec5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067becc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067becd: mov esp, ebp */ r_esp = r_ebp;
    /* 0067becf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067bed0: ret 4 */ FN_RET(0x0067b450); r_esp += 8; return;
}

void f_0067bf40(void) /* sub_67BF40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067bf40);
    /* 0067bf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf41: mov ebp, esp */ r_ebp = r_esp;
    /* 0067bf43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf45: push 0x6ada10 */ { u32 v = 0x6ada10u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067bf50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf51: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067bf54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067bf59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067bf5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067bf5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067bf65: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0067bf68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf6a: push 0x1f56 */ { u32 v = 0x1f56u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf6f: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf74: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0067bf79: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0067bf7c: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67bf81u); f_006044b0();
    /* 0067bf81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf83: push 0x249f30 */ { u32 v = 0x249f30u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf88: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bf8d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0067bf93: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0067bf96: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67bf9bu); f_006044b0();
    /* 0067bf9b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0067bf9e: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0067bfa1: cmp dword ptr [ebp - 0x5c], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0067bfa5: ja 0x67c825 */ if ((!fC&&!fZ)) goto L_0067c825;
L_0067bfab:; BB(0x0067bfab);
    /* 0067bfab: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0067bfae: jmp dword ptr [eax*4 + 0x67c838] */ { u32 t = R32((u32)(r_eax*4+0x67c838u)); switch (t) { case 0x67bfb5u: goto L_0067bfb5; case 0x67c115u: goto L_0067c115; case 0x67c17bu: goto L_0067c17b; case 0x67c22bu: goto L_0067c22b; case 0x67c2f3u: goto L_0067c2f3; case 0x67c3eau: goto L_0067c3ea; case 0x67c457u: goto L_0067c457; case 0x67c51cu: goto L_0067c51c; case 0x67c57au: goto L_0067c57a; case 0x67c5bau: goto L_0067c5ba; case 0x67c5fau: goto L_0067c5fa; case 0x67c675u: goto L_0067c675; case 0x67c72cu: goto L_0067c72c; case 0x67c7e0u: goto L_0067c7e0; case 0x67c818u: goto L_0067c818; default: UNSUP(0x0067bfae, "jump table entry is not a known target"); } }
L_0067bfb5:; BB(0x0067bfb5);
    /* 0067bfb5: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067bfba: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67bfbfu); f_00686d82();
    /* 0067bfbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067bfc2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067bfc5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067bfcc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bfd0: je 0x67bfdf */ if (fZ) goto L_0067bfdf;
L_0067bfd2:; BB(0x0067bfd2);
    /* 0067bfd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067bfd5: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67bfdau); f_005f5f50();
    /* 0067bfda: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0067bfdd: jmp 0x67bfe6 */ goto L_0067bfe6;
L_0067bfdf:; BB(0x0067bfdf);
    /* 0067bfdf: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0067bfe6:; BB(0x0067bfe6);
    /* 0067bfe6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0067bfe9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0067bfec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067bff3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067bff6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067bff9: mov dword ptr [edx + 0x244], eax */ W32((u32)(r_edx+0x244u), r_eax);
    /* 0067bfff: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c002: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c008: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c00b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067c00e: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067c011: push 0x249f30 */ { u32 v = 0x249f30u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c016: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c019: mov ecx, dword ptr [edx + 0x244] */ r_ecx = R32((u32)(r_edx+0x244u));
    /* 0067c01f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67c024u); f_005eaf00();
    /* 0067c024: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c027: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c02d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c030: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0067c036: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067c038: mov ecx, eax */ r_ecx = r_eax;
    /* 0067c03a: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067c03d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c03fu); call_ind(t); }
    /* 0067c03f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c041: push 0xea60 */ { u32 v = 0xea60u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c048: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c04a: push 0x249f30 */ { u32 v = 0x249f30u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c04f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c052: mov ecx, dword ptr [ecx + 0x244] */ r_ecx = R32((u32)(r_ecx+0x244u));
    /* 0067c058: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x67c05du); f_005eae80();
    /* 0067c05d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c060: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0067c066: mov dword ptr [eax + 0x184], 5 */ W32((u32)(r_eax+0x184u), 0x5u);
    /* 0067c070: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c073: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c079: mov dword ptr [edx + 0x188], 7 */ W32((u32)(r_edx+0x188u), 0x7u);
    /* 0067c083: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c086: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c08c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c08f: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0067c095: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067c097: mov ecx, eax */ r_ecx = r_eax;
    /* 0067c099: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067c09c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c09eu); call_ind(t); }
    /* 0067c09e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0a0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c0a5u); f_00686d82();
    /* 0067c0a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c0a8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067c0ab: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067c0b2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c0b6: je 0x67c0cd */ if (fZ) goto L_0067c0cd;
L_0067c0b8:; BB(0x0067c0b8);
    /* 0067c0b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0c0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067c0c3: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67c0c8u); f_00606e60();
    /* 0067c0c8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0067c0cb: jmp 0x67c0d4 */ goto L_0067c0d4;
L_0067c0cd:; BB(0x0067c0cd);
    /* 0067c0cd: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0067c0d4:; BB(0x0067c0d4);
    /* 0067c0d4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067c0d7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0067c0da: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c0e1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067c0e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0e5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c0e8: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c0ee: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67c0f3u); f_005f6050();
    /* 0067c0f3: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c0f7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c0fa: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c100: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c103: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c109: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c10b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c10e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c110u); call_ind(t); }
    /* 0067c110: jmp 0x67c825 */ goto L_0067c825;
L_0067c115:; BB(0x0067c115);
    /* 0067c115: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c117: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c11a: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c120: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c123: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c129: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c12b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c131: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c133u); call_ind(t); }
    /* 0067c133: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c136: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c13c: mov dword ptr [edx + 0x184], 2 */ W32((u32)(r_edx+0x184u), 0x2u);
    /* 0067c146: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c149: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c14f: mov dword ptr [ecx + 0x188], 8 */ W32((u32)(r_ecx+0x188u), 0x8u);
    /* 0067c159: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c15b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c15d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c160: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c166: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c169: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067c16f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067c171: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c174: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c176u); call_ind(t); }
    /* 0067c176: jmp 0x67c825 */ goto L_0067c825;
L_0067c17b:; BB(0x0067c17b);
    /* 0067c17b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c17d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c182u); f_00686d82();
    /* 0067c182: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c185: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067c188: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067c18f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c193: je 0x67c1aa */ if (fZ) goto L_0067c1aa;
L_0067c195:; BB(0x0067c195);
    /* 0067c195: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c197: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c199: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c19b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c19d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067c1a0: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67c1a5u); f_00606e60();
    /* 0067c1a5: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0067c1a8: jmp 0x67c1b1 */ goto L_0067c1b1;
L_0067c1aa:; BB(0x0067c1aa);
    /* 0067c1aa: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0067c1b1:; BB(0x0067c1b1);
    /* 0067c1b1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0067c1b4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067c1b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c1be: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067c1c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1c2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c1c5: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c1cb: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67c1d0u); f_005f6050();
    /* 0067c1d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1d3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0067c1d9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067c1dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1dd: fld1  */ FPUSH(1.0);
    /* 0067c1df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067c1e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1e4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1ea: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c1ed: mov edx, dword ptr [ecx + 0x2a0] */ r_edx = R32((u32)(r_ecx+0x2a0u));
    /* 0067c1f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c1f4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067c1f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067c1fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067c201: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0067c207: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c209u); call_ind(t); }
    /* 0067c209: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c20b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c20d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c210: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c216: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c219: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c21f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c221: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c224: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c226u); call_ind(t); }
    /* 0067c226: jmp 0x67c825 */ goto L_0067c825;
L_0067c22b:; BB(0x0067c22b);
    /* 0067c22b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c22d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c230: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c236: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c239: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c23f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c241: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c247: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c249u); call_ind(t); }
    /* 0067c249: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c24e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c251: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c257: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c25a: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c260: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c262: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0067c265: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c267u); call_ind(t); }
    /* 0067c267: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c26a: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c270: mov dword ptr [edx + 0x184], 4 */ W32((u32)(r_edx+0x184u), 0x4u);
    /* 0067c27a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c27c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c281u); f_00686d82();
    /* 0067c281: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c284: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067c287: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067c28e: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c292: je 0x67c2ad */ if (fZ) goto L_0067c2ad;
L_0067c294:; BB(0x0067c294);
    /* 0067c294: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c297: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c29d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c29e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c2a0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067c2a3: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67c2a8u); f_00600f30();
    /* 0067c2a8: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0067c2ab: jmp 0x67c2b4 */ goto L_0067c2b4;
L_0067c2ad:; BB(0x0067c2ad);
    /* 0067c2ad: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0067c2b4:; BB(0x0067c2b4);
    /* 0067c2b4: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0067c2b7: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0067c2ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c2c1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067c2c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c2c5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c2c8: mov ecx, dword ptr [ecx + 0x244] */ r_ecx = R32((u32)(r_ecx+0x244u));
    /* 0067c2ce: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67c2d3u); f_005f5d50();
    /* 0067c2d3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c2d5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c2d8: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c2de: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c2e1: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067c2e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067c2e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067c2ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c2eeu); call_ind(t); }
    /* 0067c2ee: jmp 0x67c825 */ goto L_0067c825;
L_0067c2f3:; BB(0x0067c2f3);
    /* 0067c2f3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c2f6: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c2fc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c2ff: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c305: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c307: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067c30a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c30cu); call_ind(t); }
    /* 0067c30c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c30f: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c315: mov dword ptr [edx + 0x184], 6 */ W32((u32)(r_edx+0x184u), 0x6u);
    /* 0067c31f: push -0x12 */ { u32 v = 0xffffffeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c321: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c324: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c32a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c32d: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0067c333: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067c335: mov ecx, eax */ r_ecx = r_eax;
    /* 0067c337: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0067c33a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c33cu); call_ind(t); }
    /* 0067c33c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c33f: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c345: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c348: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c34e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c350: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067c353: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c355u); call_ind(t); }
    /* 0067c355: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c357: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c35a: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c360: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c363: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c369: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c36b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c371: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c373u); call_ind(t); }
    /* 0067c373: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c375: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c37au); f_00686d82();
    /* 0067c37a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c37d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067c380: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067c387: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c38b: je 0x67c3a2 */ if (fZ) goto L_0067c3a2;
L_0067c38d:; BB(0x0067c38d);
    /* 0067c38d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c38f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c391: push -0x1a */ { u32 v = 0xffffffe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c393: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c395: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067c398: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67c39du); f_00606e60();
    /* 0067c39d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0067c3a0: jmp 0x67c3a9 */ goto L_0067c3a9;
L_0067c3a2:; BB(0x0067c3a2);
    /* 0067c3a2: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0067c3a9:; BB(0x0067c3a9);
    /* 0067c3a9: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067c3ac: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0067c3af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c3b6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067c3b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c3ba: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c3bd: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c3c3: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67c3c8u); f_005f6050();
    /* 0067c3c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c3ca: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c3cc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c3cf: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c3d5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c3d8: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c3de: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c3e0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c3e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c3e5u); call_ind(t); }
    /* 0067c3e5: jmp 0x67c825 */ goto L_0067c825;
L_0067c3ea:; BB(0x0067c3ea);
    /* 0067c3ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c3ec: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c3ef: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c3f5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c3f8: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c3fe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c400: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c406: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c408u); call_ind(t); }
    /* 0067c408: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c40b: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c411: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c414: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c41a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c41c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0067c41f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c421u); call_ind(t); }
    /* 0067c421: mov dword ptr [0x16306ec], eax */ W32((u32)(0x16306ecu), r_eax);
    /* 0067c426: mov ecx, dword ptr [0x16306ec] */ r_ecx = R32((u32)(0x16306ecu));
    /* 0067c42c: sub ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c42f: mov dword ptr [0x16306e8], ecx */ W32((u32)(0x16306e8u), r_ecx);
    /* 0067c435: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c437: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c439: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c43c: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c442: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c445: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067c44b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067c44d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c452u); call_ind(t); }
    /* 0067c452: jmp 0x67c825 */ goto L_0067c825;
L_0067c457:; BB(0x0067c457);
    /* 0067c457: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c459: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c45c: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c462: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c465: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c46b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c46d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c473: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c475u); call_ind(t); }
    /* 0067c475: cmp dword ptr [0x16306e8], 0xffffff64 */ {  u32 a = R32((u32)(0x16306e8u)); u32 b = 0xffffff64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067c47f: jge 0x67c4a0 */ if ((fS==fO)) goto L_0067c4a0;
L_0067c481:; BB(0x0067c481);
    /* 0067c481: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c483: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c485: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c488: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c48e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c491: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c497: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c499: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c49c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c49eu); call_ind(t); }
    /* 0067c49e: jmp 0x67c517 */ goto L_0067c517;
L_0067c4a0:; BB(0x0067c4a0);
    /* 0067c4a0: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4a2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c4a7u); f_00686d82();
    /* 0067c4a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c4aa: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067c4ad: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0067c4b4: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c4b8: je 0x67c4d4 */ if (fZ) goto L_0067c4d4;
L_0067c4ba:; BB(0x0067c4ba);
    /* 0067c4ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4be: mov ecx, dword ptr [0x16306e8] */ r_ecx = R32((u32)(0x16306e8u));
    /* 0067c4c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4c7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067c4ca: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x67c4cfu); f_00606e60();
    /* 0067c4cf: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0067c4d2: jmp 0x67c4db */ goto L_0067c4db;
L_0067c4d4:; BB(0x0067c4d4);
    /* 0067c4d4: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0067c4db:; BB(0x0067c4db);
    /* 0067c4db: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067c4de: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0067c4e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c4e8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067c4eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4ec: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c4ef: mov ecx, dword ptr [ecx + 0x244] */ r_ecx = R32((u32)(r_ecx+0x244u));
    /* 0067c4f5: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x67c4fau); f_005f6050();
    /* 0067c4fa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4fe: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c501: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c507: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c50a: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0067c510: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067c512: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c515: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c517u); call_ind(t); }
L_0067c517:; BB(0x0067c517);
    /* 0067c517: jmp 0x67c825 */ goto L_0067c825;
L_0067c51c:; BB(0x0067c51c);
    /* 0067c51c: push 0xffffff64 */ { u32 v = 0xffffff64u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c521: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c524: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c52a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c52d: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c533: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c535: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0067c538: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c53au); call_ind(t); }
    /* 0067c53a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c53c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c53f: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c545: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c548: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c54e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c550: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c558u); call_ind(t); }
    /* 0067c558: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c55a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c55c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c55f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c565: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c568: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c56e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c570: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c573: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c575u); call_ind(t); }
    /* 0067c575: jmp 0x67c825 */ goto L_0067c825;
L_0067c57a:; BB(0x0067c57a);
    /* 0067c57a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c57c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c57f: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c585: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c588: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c58e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c590: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c596: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c598u); call_ind(t); }
    /* 0067c598: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c59a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c59c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c59f: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c5a5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c5a8: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c5ae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c5b0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c5b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c5b5u); call_ind(t); }
    /* 0067c5b5: jmp 0x67c825 */ goto L_0067c825;
L_0067c5ba:; BB(0x0067c5ba);
    /* 0067c5ba: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c5bc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c5bf: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c5c5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c5c8: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c5ce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c5d0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c5d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c5d8u); call_ind(t); }
    /* 0067c5d8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c5da: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067c5dc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c5df: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c5e5: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c5e8: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c5ee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c5f0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c5f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c5f5u); call_ind(t); }
    /* 0067c5f5: jmp 0x67c825 */ goto L_0067c825;
L_0067c5fa:; BB(0x0067c5fa);
    /* 0067c5fa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c5fc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c601u); f_00686d82();
    /* 0067c601: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c604: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067c607: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0067c60e: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c612: je 0x67c62d */ if (fZ) goto L_0067c62d;
L_0067c614:; BB(0x0067c614);
    /* 0067c614: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c617: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c61d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c61e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c620: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067c623: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67c628u); f_00600f30();
    /* 0067c628: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067c62b: jmp 0x67c634 */ goto L_0067c634;
L_0067c62d:; BB(0x0067c62d);
    /* 0067c62d: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0067c634:; BB(0x0067c634);
    /* 0067c634: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0067c637: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067c63a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c641: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067c644: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c645: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c648: mov ecx, dword ptr [edx + 0x244] */ r_ecx = R32((u32)(r_edx+0x244u));
    /* 0067c64e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67c653u); f_005f5d50();
    /* 0067c653: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c655: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c658: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c65e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c661: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c667: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067c669: mov ecx, eax */ r_ecx = r_eax;
    /* 0067c66b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067c66e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c670u); call_ind(t); }
    /* 0067c670: jmp 0x67c825 */ goto L_0067c825;
L_0067c675:; BB(0x0067c675);
    /* 0067c675: push 0xfffffedb */ { u32 v = 0xfffffedbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c67a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c67d: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c683: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c686: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c68c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c68e: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0067c691: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c693u); call_ind(t); }
    /* 0067c693: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c695: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c698: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c69e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c6a1: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c6a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c6a9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c6af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c6b1u); call_ind(t); }
    /* 0067c6b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c6b3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c6b8u); f_00686d82();
    /* 0067c6b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c6bb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067c6be: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0067c6c5: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c6c9: je 0x67c6e4 */ if (fZ) goto L_0067c6e4;
L_0067c6cb:; BB(0x0067c6cb);
    /* 0067c6cb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c6ce: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c6d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c6d5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c6d7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067c6da: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67c6dfu); f_00600f30();
    /* 0067c6df: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0067c6e2: jmp 0x67c6eb */ goto L_0067c6eb;
L_0067c6e4:; BB(0x0067c6e4);
    /* 0067c6e4: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0067c6eb:; BB(0x0067c6eb);
    /* 0067c6eb: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067c6ee: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067c6f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c6f8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067c6fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c6fc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c6ff: mov ecx, dword ptr [edx + 0x244] */ r_ecx = R32((u32)(r_edx+0x244u));
    /* 0067c705: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67c70au); f_005f5d50();
    /* 0067c70a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c70c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c70f: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c715: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c718: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c71e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067c720: mov ecx, eax */ r_ecx = r_eax;
    /* 0067c722: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067c725: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c727u); call_ind(t); }
    /* 0067c727: jmp 0x67c825 */ goto L_0067c825;
L_0067c72c:; BB(0x0067c72c);
    /* 0067c72c: push 0xfffffe52 */ { u32 v = 0xfffffe52u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c731: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c734: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c73a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c73d: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c743: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c745: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0067c748: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c74au); call_ind(t); }
    /* 0067c74a: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c74c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c74f: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c755: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c758: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c75e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c760: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0067c766: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c768u); call_ind(t); }
    /* 0067c768: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c76a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67c76fu); f_00686d82();
    /* 0067c76f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067c772: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067c775: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0067c77c: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c780: je 0x67c79b */ if (fZ) goto L_0067c79b;
L_0067c782:; BB(0x0067c782);
    /* 0067c782: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c785: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c78b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c78c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c78e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0067c791: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x67c796u); f_00600f30();
    /* 0067c796: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067c799: jmp 0x67c7a2 */ goto L_0067c7a2;
L_0067c79b:; BB(0x0067c79b);
    /* 0067c79b: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0067c7a2:; BB(0x0067c7a2);
    /* 0067c7a2: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0067c7a5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067c7a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067c7af: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067c7b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7b3: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c7b6: mov ecx, dword ptr [edx + 0x244] */ r_ecx = R32((u32)(r_edx+0x244u));
    /* 0067c7bc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67c7c1u); f_005f5d50();
    /* 0067c7c1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7c3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c7c6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c7cc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c7cf: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0067c7d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067c7d7: mov ecx, eax */ r_ecx = r_eax;
    /* 0067c7d9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067c7dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c7deu); call_ind(t); }
    /* 0067c7de: jmp 0x67c825 */ goto L_0067c825;
L_0067c7e0:; BB(0x0067c7e0);
    /* 0067c7e0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c7e3: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 0067c7e9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c7ec: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 0067c7f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c7f4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0067c7f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c7f9u); call_ind(t); }
    /* 0067c7f9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7fb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0067c7fd: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c800: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0067c806: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0067c809: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0067c80f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067c811: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067c814: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67c816u); call_ind(t); }
    /* 0067c816: jmp 0x67c825 */ goto L_0067c825;
L_0067c818:; BB(0x0067c818);
    /* 0067c818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c81a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067c820: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x67c825u); f_00650550();
L_0067c825:; BB(0x0067c825);
    /* 0067c825: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067c828: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067c82f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067c830: mov esp, ebp */ r_esp = r_ebp;
    /* 0067c832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067c833: ret 4 */ FN_RET(0x0067bf40); r_esp += 8; return;
}

