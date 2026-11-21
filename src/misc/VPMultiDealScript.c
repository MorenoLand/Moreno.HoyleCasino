#include "protos.h"

void f_005652c0(void) /* VPMultiDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005652c0);
    /* 005652c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005652c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005652c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005652c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005652c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005652cc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5652d1u); f_005fc360();
    /* 005652d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005652d4: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005652d8: ja 0x56551b */ if ((!fC&&!fZ)) goto L_0056551b;
L_005652de:; BB(0x005652de);
    /* 005652de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005652e1: jmp dword ptr [eax*4 + 0x56553c] */ { u32 t = R32((u32)(r_eax*4+0x56553cu)); switch (t) { case 0x5652e8u: goto L_005652e8; case 0x56533du: goto L_0056533d; case 0x565351u: goto L_00565351; case 0x565367u: goto L_00565367; case 0x565417u: goto L_00565417; case 0x565431u: goto L_00565431; case 0x565447u: goto L_00565447; default: UNSUP(0x005652e1, "jump table entry is not a known target"); } }
L_005652e8:; BB(0x005652e8);
    /* 005652e8: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005652ee: call 0x5602a0 */ r_esp -= 4; W32(r_esp, 0x5652f3u); f_005602a0();
    /* 005652f3: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 005652f9: mov byte ptr [ecx + 0x18], 1 */ W8((u32)(r_ecx+0x18u), 0x1u);
    /* 005652fd: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 00565303: mov byte ptr [edx + 0x19], 0 */ W8((u32)(r_edx+0x19u), 0x0u);
    /* 00565307: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056530c: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00565312: call 0x5649e0 */ r_esp -= 4; W32(r_esp, 0x565317u); f_005649e0();
    /* 00565317: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056531d: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 00565327: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565329: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056532b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056532e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00565330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565333: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00565336: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x565338u); call_ind(t); }
    /* 00565338: jmp 0x565536 */ goto L_00565536;
L_0056533d:; BB(0x0056533d);
    /* 0056533d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565341: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00565347: call 0x5624e0 */ r_esp -= 4; W32(r_esp, 0x56534cu); f_005624e0();
    /* 0056534c: jmp 0x565536 */ goto L_00565536;
L_00565351:; BB(0x00565351);
    /* 00565351: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565353: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00565355: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565358: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056535a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056535d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00565360: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565362u); call_ind(t); }
    /* 00565362: jmp 0x565536 */ goto L_00565536;
L_00565367:; BB(0x00565367);
    /* 00565367: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056536d: cmp dword ptr [ecx + 0x14], 1 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565371: jl 0x565401 */ if ((fS!=fO)) goto L_00565401;
L_00565377:; BB(0x00565377);
    /* 00565377: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00565379: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056537f: call 0x562010 */ r_esp -= 4; W32(r_esp, 0x565384u); f_00562010();
    /* 00565384: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 0056538a: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00565390: call 0x564b10 */ r_esp -= 4; W32(r_esp, 0x565395u); f_00564b10();
    /* 00565395: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 0056539a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056539d: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x5653a2u); f_0056b910();
    /* 005653a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005653a5: jl 0x5653ee */ if ((fS!=fO)) goto L_005653ee;
L_005653a7:; BB(0x005653a7);
    /* 005653a7: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005653ad: add ecx, 0xf4 */ {  u32 a = r_ecx; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005653b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005653b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005653b5: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005653bb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005653be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005653bf: fld1  */ FPUSH(1.0);
    /* 005653c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005653c4: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005653c6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005653c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005653ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005653cc: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005653d2: call 0x5629a0 */ r_esp -= 4; W32(r_esp, 0x5653d7u); f_005629a0();
    /* 005653d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005653d8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005653de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005653e0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005653e6: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005653ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5653eeu); call_ind(t); }
L_005653ee:; BB(0x005653ee);
    /* 005653ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005653f0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005653f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005653f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005653f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005653fa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005653fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5653ffu); call_ind(t); }
    /* 005653ff: jmp 0x565412 */ goto L_00565412;
L_00565401:; BB(0x00565401);
    /* 00565401: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565403: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00565405: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565408: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056540a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056540d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00565410: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565412u); call_ind(t); }
L_00565412:; BB(0x00565412);
    /* 00565412: jmp 0x565536 */ goto L_00565536;
L_00565417:; BB(0x00565417);
    /* 00565417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056541a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056541b: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00565421: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00565427: call 0x564bd0 */ r_esp -= 4; W32(r_esp, 0x56542cu); f_00564bd0();
    /* 0056542c: jmp 0x565536 */ goto L_00565536;
L_00565431:; BB(0x00565431);
    /* 00565431: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565433: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00565435: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565438: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056543a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056543d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00565440: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565442u); call_ind(t); }
    /* 00565442: jmp 0x565536 */ goto L_00565536;
L_00565447:; BB(0x00565447);
    /* 00565447: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056544d: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00565450: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x565455u); f_0056b910();
    /* 00565455: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565458: jl 0x565474 */ if ((fS!=fO)) goto L_00565474;
L_0056545a:; BB(0x0056545a);
    /* 0056545a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056545c: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00565462: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00565468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565469: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056546f: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x565474u); f_005f4510();
L_00565474:; BB(0x00565474);
    /* 00565474: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056547a: call 0x5696d0 */ r_esp -= 4; W32(r_esp, 0x56547fu); f_005696d0();
    /* 0056547f: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 00565485: mov byte ptr [ecx + 0x18], 0 */ W8((u32)(r_ecx+0x18u), 0x0u);
    /* 00565489: mov edx, dword ptr [0x79343c] */ r_edx = R32((u32)(0x79343cu));
    /* 0056548f: movzx eax, byte ptr [edx + 0x19] */ r_eax = (u32)R8((u32)(r_edx+0x19u));
    /* 00565493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565495: je 0x565509 */ if (fZ) goto L_00565509;
L_00565497:; BB(0x00565497);
    /* 00565497: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00565499: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056549f: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 005654a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005654a6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005654ac: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5654b1u); f_005f4510();
    /* 005654b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005654b3: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 005654b8: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 005654be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005654bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005654c5: call 0x5f4510 */ r_esp -= 4; W32(r_esp, 0x5654cau); f_005f4510();
    /* 005654ca: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 005654d0: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005654d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005654d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005654d8: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005654de: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005654e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005654e2: fld1  */ FPUSH(1.0);
    /* 005654e4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005654e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005654e9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005654eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005654ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005654ef: push 0x31225f */ { u32 v = 0x31225fu; r_esp -= 4; W32(r_esp, v); }
    /* 005654f4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005654f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005654fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00565501: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00565507: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565509u); call_ind(t); }
L_00565509:; BB(0x00565509);
    /* 00565509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056550b: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00565511: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00565514: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x565519u); f_005fc420();
    /* 00565519: jmp 0x565536 */ goto L_00565536;
L_0056551b:; BB(0x0056551b);
    /* 0056551b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0056551d: jne 0x565536 */ if (!fZ) goto L_00565536;
L_0056551f:; BB(0x0056551f);
    /* 0056551f: push 0x884 */ { u32 v = 0x884u; r_esp -= 4; W32(r_esp, v); }
    /* 00565524: push 0x6c9734 */ { u32 v = 0x6c9734u; r_esp -= 4; W32(r_esp, v); }
    /* 00565529: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056552e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x565533u); f_005e9f20();
    /* 00565533: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00565536:; BB(0x00565536);
    /* 00565536: mov esp, ebp */ r_esp = r_ebp;
    /* 00565538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565539: ret  */ FN_RET(0x005652c0); r_esp += 4; return;
}

void f_0056a070(void) /* VPMultiDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a070);
    /* 0056a070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a071: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a075: push 0x6a5caf */ { u32 v = 0x6a5cafu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056a080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a081: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a084: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056a089: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056a08b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056a08e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a08f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056a092: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056a098: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0056a09b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a09d: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a0a3: call 0x561d40 */ r_esp -= 4; W32(r_esp, 0x56a0a8u); f_00561d40();
    /* 0056a0a8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0ab: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a0af: jne 0x56a148 */ if (!fZ) goto L_0056a148;
L_0056a0b5:; BB(0x0056a0b5);
    /* 0056a0b5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0b8: mov byte ptr [ecx + 0x3c], 0 */ W8((u32)(r_ecx+0x3cu), 0x0u);
    /* 0056a0bc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0bf: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0056a0c2: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x56a0c7u); f_0056b910();
    /* 0056a0c7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0056a0ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a0cc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056a0cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a0d0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0d3: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0056a0d6: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x56a0dbu); f_0056a7a0();
    /* 0056a0db: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0de: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0056a0e1: call 0x56a960 */ r_esp -= 4; W32(r_esp, 0x56a0e6u); f_0056a960();
    /* 0056a0e6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0e9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056a0ec: call 0x56aa50 */ r_esp -= 4; W32(r_esp, 0x56a0f1u); f_0056aa50();
    /* 0056a0f1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0f4: mov byte ptr [ecx + 0x30], 1 */ W8((u32)(r_ecx+0x30u), 0x1u);
    /* 0056a0f8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a0fb: mov byte ptr [edx + 0x2f], 0 */ W8((u32)(r_edx+0x2fu), 0x0u);
    /* 0056a0ff: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a102: call 0x5687b0 */ r_esp -= 4; W32(r_esp, 0x56a107u); f_005687b0();
    /* 0056a107: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a10a: call 0x569270 */ r_esp -= 4; W32(r_esp, 0x56a10fu); f_00569270();
    /* 0056a10f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056a116: jmp 0x56a121 */ goto L_0056a121;
L_0056a118:; BB(0x0056a118);
    /* 0056a118: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a11b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a11e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0056a121:; BB(0x0056a121);
    /* 0056a121: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a125: jge 0x56a136 */ if ((fS==fO)) goto L_0056a136;
L_0056a127:; BB(0x0056a127);
    /* 0056a127: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a12a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a12d: mov word ptr [edx + ecx*2 + 0x24], 0 */ W16((u32)(r_edx+r_ecx*2+0x24u), 0x0u);
    /* 0056a134: jmp 0x56a118 */ goto L_0056a118;
L_0056a136:; BB(0x0056a136);
    /* 0056a136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a138: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056a13d: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0056a143: call 0x5645c0 */ r_esp -= 4; W32(r_esp, 0x56a148u); f_005645c0();
L_0056a148:; BB(0x0056a148);
    /* 0056a148: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a14b: cmp dword ptr [ecx + 0x14], 1 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a14f: jne 0x56a1d0 */ if (!fZ) goto L_0056a1d0;
L_0056a151:; BB(0x0056a151);
    /* 0056a151: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a154: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0056a157: call 0x56b130 */ r_esp -= 4; W32(r_esp, 0x56a15cu); f_0056b130();
    /* 0056a15c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a15e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0056a164: call 0x5df7b0 */ r_esp -= 4; W32(r_esp, 0x56a169u); f_005df7b0();
    /* 0056a169: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056a16c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a16e: je 0x56a1c0 */ if (fZ) goto L_0056a1c0;
L_0056a170:; BB(0x0056a170);
    /* 0056a170: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a173: movzx edx, byte ptr [ecx + 0x30] */ r_edx = (u32)R8((u32)(r_ecx+0x30u));
    /* 0056a177: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a179: je 0x56a1c0 */ if (fZ) goto L_0056a1c0;
L_0056a17b:; BB(0x0056a17b);
    /* 0056a17b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a17e: call 0x56a380 */ r_esp -= 4; W32(r_esp, 0x56a183u); f_0056a380();
    /* 0056a183: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a186: mov byte ptr [ecx + 0x30], al */ W8((u32)(r_ecx+0x30u), (u8)r_eax);
    /* 0056a189: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a18c: movzx eax, byte ptr [edx + 0x30] */ r_eax = (u32)R8((u32)(r_edx+0x30u));
    /* 0056a190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a192: jne 0x56a1c0 */ if (!fZ) goto L_0056a1c0;
L_0056a194:; BB(0x0056a194);
    /* 0056a194: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a197: call 0x569270 */ r_esp -= 4; W32(r_esp, 0x56a19cu); f_00569270();
    /* 0056a19c: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a1a2: call 0x561e20 */ r_esp -= 4; W32(r_esp, 0x56a1a7u); f_00561e20();
    /* 0056a1a7: cmp dword ptr [0x793578], 0 */ {  u32 a = R32((u32)(0x793578u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a1ae: je 0x56a1bb */ if (fZ) goto L_0056a1bb;
L_0056a1b0:; BB(0x0056a1b0);
    /* 0056a1b0: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0056a1b6: call 0x57c140 */ r_esp -= 4; W32(r_esp, 0x56a1bbu); f_0057c140();
L_0056a1bb:; BB(0x0056a1bb);
    /* 0056a1bb: jmp 0x56a35b */ goto L_0056a35b;
L_0056a1c0:; BB(0x0056a1c0);
    /* 0056a1c0: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a1c5: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0056a1cb: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x56a1d0u); f_005f2ba0();
L_0056a1d0:; BB(0x0056a1d0);
    /* 0056a1d0: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a1d6: call 0x5623d0 */ r_esp -= 4; W32(r_esp, 0x56a1dbu); f_005623d0();
    /* 0056a1db: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056a1e2: jmp 0x56a1ed */ goto L_0056a1ed;
L_0056a1e4:; BB(0x0056a1e4);
    /* 0056a1e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a1e7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a1ea: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0056a1ed:; BB(0x0056a1ed);
    /* 0056a1ed: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a1f1: jge 0x56a208 */ if ((fS==fO)) goto L_0056a208;
L_0056a1f3:; BB(0x0056a1f3);
    /* 0056a1f3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a1f6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a1f9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a1fc: mov ax, word ptr [ecx + eax*2 + 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x24u))) & 0xffffu);
    /* 0056a201: mov word ptr [ebp + edx*2 - 0x24], ax */ W16((u32)(r_ebp+r_edx*2+0xffffffdcu), (u16)r_eax);
    /* 0056a206: jmp 0x56a1e4 */ goto L_0056a1e4;
L_0056a208:; BB(0x0056a208);
    /* 0056a208: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056a20f: jmp 0x56a21a */ goto L_0056a21a;
L_0056a211:; BB(0x0056a211);
    /* 0056a211: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a214: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a217: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0056a21a:; BB(0x0056a21a);
    /* 0056a21a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a21e: jge 0x56a2f8 */ if ((fS==fO)) goto L_0056a2f8;
L_0056a224:; BB(0x0056a224);
    /* 0056a224: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a227: mov ax, word ptr [ebp + edx*2 - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*2+0xffffffdcu))) & 0xffffu);
    /* 0056a22c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a22d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a230: call 0x568840 */ r_esp -= 4; W32(r_esp, 0x56a235u); f_00568840();
    /* 0056a235: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056a238: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a23a: jne 0x56a2f3 */ if (!fZ) goto L_0056a2f3;
L_0056a240:; BB(0x0056a240);
    /* 0056a240: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a243: movzx eax, word ptr [ebp + edx*2 - 0x24] */ r_eax = (u32)R16((u32)(r_ebp+r_edx*2+0xffffffdcu));
    /* 0056a248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a24a: je 0x56a265 */ if (fZ) goto L_0056a265;
L_0056a24c:; BB(0x0056a24c);
    /* 0056a24c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a24f: mov dx, word ptr [ebp + ecx*2 - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffdcu))) & 0xffffu);
    /* 0056a254: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a255: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a25b: call 0x562240 */ r_esp -= 4; W32(r_esp, 0x56a260u); f_00562240();
    /* 0056a260: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056a263: jmp 0x56a26b */ goto L_0056a26b;
L_0056a265:; BB(0x0056a265);
    /* 0056a265: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a268: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0056a26b:; BB(0x0056a26b);
    /* 0056a26b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a26e: call 0x5692f0 */ r_esp -= 4; W32(r_esp, 0x56a273u); f_005692f0();
    /* 0056a273: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a276: jne 0x56a289 */ if (!fZ) goto L_0056a289;
L_0056a278:; BB(0x0056a278);
    /* 0056a278: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a27b: mov dx, word ptr [ebp + ecx*2 - 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffdcu))) & 0xffffu);
    /* 0056a280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a281: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a284: call 0x569460 */ r_esp -= 4; W32(r_esp, 0x56a289u); f_00569460();
L_0056a289:; BB(0x0056a289);
    /* 0056a289: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a28c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0056a28f: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x56a294u); f_006436c0();
    /* 0056a294: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0056a298: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0056a29c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a29d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a2a0: call 0x569340 */ r_esp -= 4; W32(r_esp, 0x56a2a5u); f_00569340();
    /* 0056a2a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a2a8: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 0056a2ad: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0056a2b1: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0056a2b5: mov word ptr [ecx + 0x190], dx */ W16((u32)(r_ecx+0x190u), (u16)r_edx);
    /* 0056a2bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a2bf: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a2c5: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0056a2c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a2cc: mov dword ptr [edx + 0x1a0], eax */ W32((u32)(r_edx+0x1a0u), r_eax);
    /* 0056a2d2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a2d5: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 0056a2db: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056a2df: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a2e2: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 0056a2e8: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0056a2ec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056a2ee: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056a2f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56a2f3u); call_ind(t); }
L_0056a2f3:; BB(0x0056a2f3);
    /* 0056a2f3: jmp 0x56a211 */ goto L_0056a211;
L_0056a2f8:; BB(0x0056a2f8);
    /* 0056a2f8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056a2fb: call 0x569270 */ r_esp -= 4; W32(r_esp, 0x56a300u); f_00569270();
    /* 0056a300: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a302: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56a307u); f_00686d82();
    /* 0056a307: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a30a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0056a30d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a314: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a318: je 0x56a335 */ if (fZ) goto L_0056a335;
L_0056a31a:; BB(0x0056a31a);
    /* 0056a31a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a31c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056a31f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x56a324u); f_005fc0d0();
    /* 0056a324: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056a327: mov dword ptr [eax], 0x6ca210 */ W32((u32)(r_eax), 0x6ca210u);
    /* 0056a32d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056a330: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0056a333: jmp 0x56a33c */ goto L_0056a33c;
L_0056a335:; BB(0x0056a335);
    /* 0056a335: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0056a33c:; BB(0x0056a33c);
    /* 0056a33c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056a33f: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0056a342: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056a349: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056a34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a34d: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 0056a353: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0056a356: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x56a35bu); f_005fc420();
L_0056a35b:; BB(0x0056a35b);
    /* 0056a35b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a35e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056a365: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056a366: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056a369: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a36b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x56a370u); f_00686d72();
    /* 0056a370: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a373: ret  */ FN_RET(0x0056a070); r_esp += 4; return;
}

