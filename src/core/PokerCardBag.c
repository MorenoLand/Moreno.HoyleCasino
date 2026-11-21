#include "protos.h"

void f_00464770(void) /* PokerCardBag::func_00464770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464770);
    /* 00464770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464771: mov ebp, esp */ r_ebp = r_esp;
    /* 00464773: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464776: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464779: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046477c: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0046477f: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464785: jne 0x46479b */ if (!fZ) goto L_0046479b;
L_00464787:; BB(0x00464787);
    /* 00464787: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00464789: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 0046478e: push 0x6bab60 */ { u32 v = 0x6bab60u; r_esp -= 4; W32(r_esp, v); }
    /* 00464793: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464798u); f_005e9f20();
    /* 00464798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046479b:; BB(0x0046479b);
    /* 0046479b: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 004647a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004647a1: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 004647a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004647a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004647a8: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4647adu); f_00464480();
    /* 004647ad: mov ecx, eax */ r_ecx = r_eax;
    /* 004647af: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4647b4u); f_00464050();
    /* 004647b4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004647b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004647b9: je 0x4647cf */ if (fZ) goto L_004647cf;
L_004647bb:; BB(0x004647bb);
    /* 004647bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004647be: mov cl, byte ptr [eax + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x9u))) & 0xffu);
    /* 004647c1: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004647c4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004647c7: mov byte ptr [edx + 9], cl */ W8((u32)(r_edx+0x9u), (u8)r_ecx);
    /* 004647ca: jmp 0x464853 */ goto L_00464853;
L_004647cf:; BB(0x004647cf);
    /* 004647cf: mov eax, dword ptr [0x7907b4] */ r_eax = R32((u32)(0x7907b4u));
    /* 004647d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004647d5: lea ecx, [ebp - 2] */ r_ecx = (u32)(r_ebp+0xfffffffeu);
    /* 004647d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004647d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004647dc: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4647e1u); f_00464480();
    /* 004647e1: mov ecx, eax */ r_ecx = r_eax;
    /* 004647e3: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4647e8u); f_00464050();
    /* 004647e8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004647eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004647ed: je 0x464820 */ if (fZ) goto L_00464820;
L_004647ef:; BB(0x004647ef);
    /* 004647ef: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004647f2: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 004647f6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004647f9: jbe 0x46480f */ if ((fC||fZ)) goto L_0046480f;
L_004647fb:; BB(0x004647fb);
    /* 004647fb: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 004647fd: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464802: push 0x6bab50 */ { u32 v = 0x6bab50u; r_esp -= 4; W32(r_esp, v); }
    /* 00464807: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46480cu); f_005e9f20();
    /* 0046480c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046480f:; BB(0x0046480f);
    /* 0046480f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464812: mov cl, byte ptr [eax + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
    /* 00464815: add cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464818: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046481b: mov byte ptr [edx + 8], cl */ W8((u32)(r_edx+0x8u), (u8)r_ecx);
    /* 0046481e: jmp 0x464853 */ goto L_00464853;
L_00464820:; BB(0x00464820);
    /* 00464820: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464824: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464827: call 0x464c70 */ r_esp -= 4; W32(r_esp, 0x46482cu); f_00464c70();
    /* 0046482c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046482f: lea ecx, [ebp - 3] */ r_ecx = (u32)(r_ebp+0xfffffffdu);
    /* 00464832: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464833: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464836: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x46483bu); f_00464480();
    /* 0046483b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046483e: mov edx, 1 */ r_edx = 0x1u;
    /* 00464843: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00464845: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00464848: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0046484b: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0046484d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00464850: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_00464853:; BB(0x00464853);
    /* 00464853: mov esp, ebp */ r_esp = r_ebp;
    /* 00464855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464856: ret 4 */ FN_RET(0x00464770); r_esp += 8; return;
}

void f_004648b0(void) /* PokerCardBag::func_004648b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004648b0);
    /* 004648b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004648b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004648b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004648b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004648b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004648bc: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 004648bf: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004648c5: jne 0x4648db */ if (!fZ) goto L_004648db;
L_004648c7:; BB(0x004648c7);
    /* 004648c7: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 004648c9: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 004648ce: push 0x6bab60 */ { u32 v = 0x6bab60u; r_esp -= 4; W32(r_esp, v); }
    /* 004648d3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4648d8u); f_005e9f20();
    /* 004648d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004648db:; BB(0x004648db);
    /* 004648db: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 004648e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004648e1: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 004648e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004648e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004648e8: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4648edu); f_00464480();
    /* 004648ed: mov ecx, eax */ r_ecx = r_eax;
    /* 004648ef: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4648f4u); f_00464050();
    /* 004648f4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004648f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004648f9: je 0x46492e */ if (fZ) goto L_0046492e;
L_004648fb:; BB(0x004648fb);
    /* 004648fb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004648fe: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00464902: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464904: jne 0x46491a */ if (!fZ) goto L_0046491a;
L_00464906:; BB(0x00464906);
    /* 00464906: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00464908: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 0046490d: push 0x6bab98 */ { u32 v = 0x6bab98u; r_esp -= 4; W32(r_esp, v); }
    /* 00464912: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464917u); f_005e9f20();
    /* 00464917: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046491a:; BB(0x0046491a);
    /* 0046491a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046491d: mov cl, byte ptr [eax + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x9u))) & 0xffu);
    /* 00464920: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464923: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464926: mov byte ptr [edx + 9], cl */ W8((u32)(r_edx+0x9u), (u8)r_ecx);
    /* 00464929: jmp 0x4649b8 */ goto L_004649b8;
L_0046492e:; BB(0x0046492e);
    /* 0046492e: mov eax, dword ptr [0x7907b4] */ r_eax = R32((u32)(0x7907b4u));
    /* 00464933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464934: lea ecx, [ebp - 2] */ r_ecx = (u32)(r_ebp+0xfffffffeu);
    /* 00464937: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464938: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0046493b: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x464940u); f_00464480();
    /* 00464940: mov ecx, eax */ r_ecx = r_eax;
    /* 00464942: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x464947u); f_00464050();
    /* 00464947: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046494a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046494c: je 0x46497e */ if (fZ) goto L_0046497e;
L_0046494e:; BB(0x0046494e);
    /* 0046494e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464951: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 00464955: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464957: jne 0x46496d */ if (!fZ) goto L_0046496d;
L_00464959:; BB(0x00464959);
    /* 00464959: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0046495b: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464960: push 0x6bab90 */ { u32 v = 0x6bab90u; r_esp -= 4; W32(r_esp, v); }
    /* 00464965: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46496au); f_005e9f20();
    /* 0046496a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046496d:; BB(0x0046496d);
    /* 0046496d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464970: mov cl, byte ptr [eax + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
    /* 00464973: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464976: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464979: mov byte ptr [edx + 8], cl */ W8((u32)(r_edx+0x8u), (u8)r_ecx);
    /* 0046497c: jmp 0x4649b8 */ goto L_004649b8;
L_0046497e:; BB(0x0046497e);
    /* 0046497e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464982: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464985: call 0x464c70 */ r_esp -= 4; W32(r_esp, 0x46498au); f_00464c70();
    /* 0046498a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0046498d: lea ecx, [ebp - 3] */ r_ecx = (u32)(r_ebp+0xfffffffdu);
    /* 00464990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464991: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464994: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x464999u); f_00464480();
    /* 00464999: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0046499c: mov edx, 1 */ r_edx = 0x1u;
    /* 004649a1: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004649a3: mov eax, 0x1fff */ r_eax = 0x1fffu;
    /* 004649a8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004649aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004649ad: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 004649b0: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004649b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004649b5: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_004649b8:; BB(0x004649b8);
    /* 004649b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004649ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004649bb: ret 4 */ FN_RET(0x004648b0); r_esp += 8; return;
}

void f_00464a10(void) /* PokerCardBag::func_00464a10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464a10);
    /* 00464a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00464a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00464a17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464a1a: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00464a1d: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464a23: jne 0x464a39 */ if (!fZ) goto L_00464a39;
L_00464a25:; BB(0x00464a25);
    /* 00464a25: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00464a27: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464a2c: push 0x6bab60 */ { u32 v = 0x6bab60u; r_esp -= 4; W32(r_esp, v); }
    /* 00464a31: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464a36u); f_005e9f20();
    /* 00464a36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464a39:; BB(0x00464a39);
    /* 00464a39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464a3c: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00464a3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464a41: je 0x464a6e */ if (fZ) goto L_00464a6e;
L_00464a43:; BB(0x00464a43);
    /* 00464a43: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00464a49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464a4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464a4d: call 0x464300 */ r_esp -= 4; W32(r_esp, 0x464a52u); f_00464300();
    /* 00464a52: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464a55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464a56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464a59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464a5a: call 0x464e10 */ r_esp -= 4; W32(r_esp, 0x464a5fu); f_00464e10();
    /* 00464a5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00464a62: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464a64: jmp 0x464b7f */ goto L_00464b7f;
L_00464a6e:; BB(0x00464a6e);
    /* 00464a6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464a71: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00464a75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464a77: je 0x464aa7 */ if (fZ) goto L_00464aa7;
L_00464a79:; BB(0x00464a79);
    /* 00464a79: mov ecx, dword ptr [0x790754] */ r_ecx = R32((u32)(0x790754u));
    /* 00464a7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464a80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464a83: call 0x464300 */ r_esp -= 4; W32(r_esp, 0x464a88u); f_00464300();
    /* 00464a88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00464a8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464a8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464a8f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464a92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464a93: call 0x464e10 */ r_esp -= 4; W32(r_esp, 0x464a98u); f_00464e10();
    /* 00464a98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00464a9b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464a9d: jmp 0x464b7f */ goto L_00464b7f;
L_00464aa7:; BB(0x00464aa7);
    /* 00464aa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464aaa: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00464aae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464ab0: je 0x464adf */ if (fZ) goto L_00464adf;
L_00464ab2:; BB(0x00464ab2);
    /* 00464ab2: mov eax, dword ptr [0x790764] */ r_eax = R32((u32)(0x790764u));
    /* 00464ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464ab8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464abb: call 0x464300 */ r_esp -= 4; W32(r_esp, 0x464ac0u); f_00464300();
    /* 00464ac0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464ac7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00464aca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464acb: call 0x464e10 */ r_esp -= 4; W32(r_esp, 0x464ad0u); f_00464e10();
    /* 00464ad0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00464ad3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464ad5: jmp 0x464b7f */ goto L_00464b7f;
L_00464adf:; BB(0x00464adf);
    /* 00464adf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464ae2: movzx ecx, word ptr [eax + 6] */ r_ecx = (u32)R16((u32)(r_eax+0x6u));
    /* 00464ae6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464ae8: je 0x464b12 */ if (fZ) goto L_00464b12;
L_00464aea:; BB(0x00464aea);
    /* 00464aea: mov edx, dword ptr [0x790770] */ r_edx = R32((u32)(0x790770u));
    /* 00464af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464af1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464af4: call 0x464300 */ r_esp -= 4; W32(r_esp, 0x464af9u); f_00464300();
    /* 00464af9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464afd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b00: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00464b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464b04: call 0x464e10 */ r_esp -= 4; W32(r_esp, 0x464b09u); f_00464e10();
    /* 00464b09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00464b0c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464b0e: jmp 0x464b7f */ goto L_00464b7f;
L_00464b12:; BB(0x00464b12);
    /* 00464b12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b15: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 00464b19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00464b1b: jbe 0x464b48 */ if ((fC||fZ)) goto L_00464b48;
L_00464b1d:; BB(0x00464b1d);
    /* 00464b1d: mov ecx, dword ptr [0x790784] */ r_ecx = R32((u32)(0x790784u));
    /* 00464b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464b24: mov edx, dword ptr [0x7907b4] */ r_edx = R32((u32)(0x7907b4u));
    /* 00464b2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464b2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464b2e: call 0x464220 */ r_esp -= 4; W32(r_esp, 0x464b33u); f_00464220();
    /* 00464b33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b36: mov cl, byte ptr [eax + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
    /* 00464b39: sub cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464b3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b3f: mov byte ptr [edx + 8], cl */ W8((u32)(r_edx+0x8u), (u8)r_ecx);
    /* 00464b42: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464b44: jmp 0x464b7f */ goto L_00464b7f;
L_00464b48:; BB(0x00464b48);
    /* 00464b48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b4b: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00464b4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00464b51: jbe 0x464b7d */ if ((fC||fZ)) goto L_00464b7d;
L_00464b53:; BB(0x00464b53);
    /* 00464b53: mov edx, dword ptr [0x790780] */ r_edx = R32((u32)(0x790780u));
    /* 00464b59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464b5a: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 00464b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464b60: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464b63: call 0x464220 */ r_esp -= 4; W32(r_esp, 0x464b68u); f_00464220();
    /* 00464b68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b6b: mov dl, byte ptr [ecx + 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x9u))) & 0xffu);
    /* 00464b6e: sub dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00464b74: mov byte ptr [eax + 9], dl */ W8((u32)(r_eax+0x9u), (u8)r_edx);
    /* 00464b77: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464b79: jmp 0x464b7f */ goto L_00464b7f;
L_00464b7d:; BB(0x00464b7d);
    /* 00464b7d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00464b7f:; BB(0x00464b7f);
    /* 00464b7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00464b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464b82: ret 4 */ FN_RET(0x00464a10); r_esp += 8; return;
}

void f_00464b90(void) /* PokerCardBag::func_00464b90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464b90);
    /* 00464b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00464b93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464b96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00464b97: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464b9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464b9d: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00464ba0: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464ba6: jne 0x464bbf */ if (!fZ) goto L_00464bbf;
L_00464ba8:; BB(0x00464ba8);
    /* 00464ba8: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 00464bad: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464bb2: push 0x6bab60 */ { u32 v = 0x6bab60u; r_esp -= 4; W32(r_esp, v); }
    /* 00464bb7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464bbcu); f_005e9f20();
    /* 00464bbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464bbf:; BB(0x00464bbf);
    /* 00464bbf: mov eax, dword ptr [0x79077c] */ r_eax = R32((u32)(0x79077cu));
    /* 00464bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464bc5: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 00464bc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464bc9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464bcc: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x464bd1u); f_00464480();
    /* 00464bd1: mov ecx, eax */ r_ecx = r_eax;
    /* 00464bd3: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x464bd8u); f_00464050();
    /* 00464bd8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00464bdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464bdd: je 0x464bf6 */ if (fZ) goto L_00464bf6;
L_00464bdf:; BB(0x00464bdf);
    /* 00464bdf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464be2: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 00464be6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00464be8: jbe 0x464bf0 */ if ((fC||fZ)) goto L_00464bf0;
L_00464bea:; BB(0x00464bea);
    /* 00464bea: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464bec: jmp 0x464c5f */ goto L_00464c5f;
L_00464bf0:; BB(0x00464bf0);
    /* 00464bf0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464bf2: jmp 0x464c5f */ goto L_00464c5f;
L_00464bf6:; BB(0x00464bf6);
    /* 00464bf6: mov edx, dword ptr [0x7907b4] */ r_edx = R32((u32)(0x7907b4u));
    /* 00464bfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464bfd: lea eax, [ebp - 2] */ r_eax = (u32)(r_ebp+0xfffffffeu);
    /* 00464c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464c01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464c04: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x464c09u); f_00464480();
    /* 00464c09: mov ecx, eax */ r_ecx = r_eax;
    /* 00464c0b: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x464c10u); f_00464050();
    /* 00464c10: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00464c13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464c15: je 0x464c2e */ if (fZ) goto L_00464c2e;
L_00464c17:; BB(0x00464c17);
    /* 00464c17: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464c1a: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 00464c1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00464c20: jbe 0x464c28 */ if ((fC||fZ)) goto L_00464c28;
L_00464c22:; BB(0x00464c22);
    /* 00464c22: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464c24: jmp 0x464c5f */ goto L_00464c5f;
L_00464c28:; BB(0x00464c28);
    /* 00464c28: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464c2a: jmp 0x464c5f */ goto L_00464c5f;
L_00464c2e:; BB(0x00464c2e);
    /* 00464c2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464c31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464c32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464c35: call 0x464d40 */ r_esp -= 4; W32(r_esp, 0x464c3au); f_00464d40();
    /* 00464c3a: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 00464c3d: lea edx, [ebp - 3] */ r_edx = (u32)(r_ebp+0xfffffffdu);
    /* 00464c40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464c41: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464c44: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x464c49u); f_00464480();
    /* 00464c49: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464c4c: mov eax, 1 */ r_eax = 0x1u;
    /* 00464c51: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00464c53: and esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00464c55: je 0x464c5d */ if (fZ) goto L_00464c5d;
L_00464c57:; BB(0x00464c57);
    /* 00464c57: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00464c59: jmp 0x464c5f */ goto L_00464c5f;
L_00464c5d:; BB(0x00464c5d);
    /* 00464c5d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00464c5f:; BB(0x00464c5f);
    /* 00464c5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00464c60: mov esp, ebp */ r_esp = r_ebp;
    /* 00464c62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464c63: ret 4 */ FN_RET(0x00464b90); r_esp += 8; return;
}

void f_00464c70(void) /* PokerCardBag::func_00464c70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464c70);
    /* 00464c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00464c73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464c76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464c79: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 00464c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464c7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464c80: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464c85u); f_00464400();
    /* 00464c85: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464c88: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00464c8e: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00464c91: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464c93: jne 0x464ca2 */ if (!fZ) goto L_00464ca2;
L_00464c95:; BB(0x00464c95);
    /* 00464c95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464c98: jmp 0x464d34 */ goto L_00464d34;
L_00464ca2:; BB(0x00464ca2);
    /* 00464ca2: lea ecx, [ebp - 2] */ r_ecx = (u32)(r_ebp+0xfffffffeu);
    /* 00464ca5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464ca6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464ca9: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464caeu); f_00464400();
    /* 00464cae: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00464cb1: mov eax, dword ptr [0x790754] */ r_eax = R32((u32)(0x790754u));
    /* 00464cb6: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464cb9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464cbb: jne 0x464cc7 */ if (!fZ) goto L_00464cc7;
L_00464cbd:; BB(0x00464cbd);
    /* 00464cbd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464cc0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464cc3: jmp 0x464d34 */ goto L_00464d34;
L_00464cc7:; BB(0x00464cc7);
    /* 00464cc7: lea edx, [ebp - 3] */ r_edx = (u32)(r_ebp+0xfffffffdu);
    /* 00464cca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464ccb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464cce: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464cd3u); f_00464400();
    /* 00464cd3: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00464cd6: mov ecx, dword ptr [0x790764] */ r_ecx = R32((u32)(0x790764u));
    /* 00464cdc: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464cdf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464ce1: jne 0x464ced */ if (!fZ) goto L_00464ced;
L_00464ce3:; BB(0x00464ce3);
    /* 00464ce3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464ce6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464ce9: jmp 0x464d34 */ goto L_00464d34;
L_00464ced:; BB(0x00464ced);
    /* 00464ced: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00464cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464cf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464cf4: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464cf9u); f_00464400();
    /* 00464cf9: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464cfc: mov edx, dword ptr [0x790770] */ r_edx = R32((u32)(0x790770u));
    /* 00464d02: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00464d05: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464d07: jne 0x464d13 */ if (!fZ) goto L_00464d13;
L_00464d09:; BB(0x00464d09);
    /* 00464d09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464d0c: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464d0f: jmp 0x464d34 */ goto L_00464d34;
L_00464d13:; BB(0x00464d13);
    /* 00464d13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00464d15: jne 0x464d2e */ if (!fZ) goto L_00464d2e;
L_00464d17:; BB(0x00464d17);
    /* 00464d17: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00464d1c: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464d21: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00464d26: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464d2bu); f_005e9f20();
    /* 00464d2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464d2e:; BB(0x00464d2e);
    /* 00464d2e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464d31: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00464d34:; BB(0x00464d34);
    /* 00464d34: mov esp, ebp */ r_esp = r_ebp;
    /* 00464d36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464d37: ret 4 */ FN_RET(0x00464c70); r_esp += 8; return;
}

void f_00464d40(void) /* PokerCardBag::func_00464d40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464d40);
    /* 00464d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00464d43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00464d46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00464d49: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 00464d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464d4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464d50: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464d55u); f_00464400();
    /* 00464d55: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464d58: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00464d5e: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00464d61: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464d63: jne 0x464d72 */ if (!fZ) goto L_00464d72;
L_00464d65:; BB(0x00464d65);
    /* 00464d65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464d68: jmp 0x464e04 */ goto L_00464e04;
L_00464d72:; BB(0x00464d72);
    /* 00464d72: lea ecx, [ebp - 2] */ r_ecx = (u32)(r_ebp+0xfffffffeu);
    /* 00464d75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464d76: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464d79: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464d7eu); f_00464400();
    /* 00464d7e: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00464d81: mov eax, dword ptr [0x790754] */ r_eax = R32((u32)(0x790754u));
    /* 00464d86: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464d89: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464d8b: jne 0x464d97 */ if (!fZ) goto L_00464d97;
L_00464d8d:; BB(0x00464d8d);
    /* 00464d8d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464d90: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464d93: jmp 0x464e04 */ goto L_00464e04;
L_00464d97:; BB(0x00464d97);
    /* 00464d97: lea edx, [ebp - 3] */ r_edx = (u32)(r_ebp+0xfffffffdu);
    /* 00464d9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464d9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464d9e: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464da3u); f_00464400();
    /* 00464da3: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00464da6: mov ecx, dword ptr [0x790764] */ r_ecx = R32((u32)(0x790764u));
    /* 00464dac: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464daf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464db1: jne 0x464dbd */ if (!fZ) goto L_00464dbd;
L_00464db3:; BB(0x00464db3);
    /* 00464db3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464db6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464db9: jmp 0x464e04 */ goto L_00464e04;
L_00464dbd:; BB(0x00464dbd);
    /* 00464dbd: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00464dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00464dc1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464dc4: call 0x464400 */ r_esp -= 4; W32(r_esp, 0x464dc9u); f_00464400();
    /* 00464dc9: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00464dcc: mov edx, dword ptr [0x790770] */ r_edx = R32((u32)(0x790770u));
    /* 00464dd2: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00464dd5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464dd7: jne 0x464de3 */ if (!fZ) goto L_00464de3;
L_00464dd9:; BB(0x00464dd9);
    /* 00464dd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464ddc: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00464ddf: jmp 0x464e04 */ goto L_00464e04;
L_00464de3:; BB(0x00464de3);
    /* 00464de3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00464de5: jne 0x464dfe */ if (!fZ) goto L_00464dfe;
L_00464de7:; BB(0x00464de7);
    /* 00464de7: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00464dec: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464df1: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00464df6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464dfbu); f_005e9f20();
    /* 00464dfb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464dfe:; BB(0x00464dfe);
    /* 00464dfe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00464e01: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00464e04:; BB(0x00464e04);
    /* 00464e04: mov esp, ebp */ r_esp = r_ebp;
    /* 00464e06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464e07: ret 4 */ FN_RET(0x00464d40); r_esp += 8; return;
}

void f_00464e10(void) /* PokerCardBag::func_00464e10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00464e10);
    /* 00464e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00464e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00464e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00464e14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464e17: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00464e1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00464e1c: jne 0x464e35 */ if (!fZ) goto L_00464e35;
L_00464e1e:; BB(0x00464e1e);
    /* 00464e1e: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00464e23: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464e28: push 0x6baba0 */ { u32 v = 0x6baba0u; r_esp -= 4; W32(r_esp, v); }
    /* 00464e2d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464e32u); f_005e9f20();
    /* 00464e32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464e35:; BB(0x00464e35);
    /* 00464e35: mov eax, dword ptr [0x790758] */ r_eax = R32((u32)(0x790758u));
    /* 00464e3a: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00464e3c: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00464e3f: jmp 0x464e4a */ goto L_00464e4a;
L_00464e41:; BB(0x00464e41);
    /* 00464e41: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00464e44: add dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00464e47: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
L_00464e4a:; BB(0x00464e4a);
    /* 00464e4a: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00464e4e: mov ecx, dword ptr [0x7907a4] */ r_ecx = R32((u32)(0x7907a4u));
    /* 00464e54: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00464e57: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00464e59: jg 0x464ea6 */ if ((!fZ&&fS==fO)) goto L_00464ea6;
L_00464e5b:; BB(0x00464e5b);
    /* 00464e5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00464e5e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00464e61: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00464e65: mov eax, 1 */ r_eax = 0x1u;
    /* 00464e6a: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00464e6c: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00464e6e: je 0x464ea4 */ if (fZ) goto L_00464ea4;
L_00464e70:; BB(0x00464e70);
    /* 00464e70: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00464e73: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 00464e76: lea edx, [ebp - 2] */ r_edx = (u32)(r_ebp+0xfffffffeu);
    /* 00464e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00464e7a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00464e7d: call 0x464380 */ r_esp -= 4; W32(r_esp, 0x464e82u); f_00464380();
    /* 00464e82: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00464e86: mov eax, 1 */ r_eax = 0x1u;
    /* 00464e8b: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00464e8d: mov ecx, 0x1fff */ r_ecx = 0x1fffu;
    /* 00464e92: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00464e94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00464e97: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00464e9a: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00464e9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00464e9f: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00464ea2: jmp 0x464ec1 */ goto L_00464ec1;
L_00464ea4:; BB(0x00464ea4);
    /* 00464ea4: jmp 0x464e41 */ goto L_00464e41;
L_00464ea6:; BB(0x00464ea6);
    /* 00464ea6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00464ea8: jne 0x464ec1 */ if (!fZ) goto L_00464ec1;
L_00464eaa:; BB(0x00464eaa);
    /* 00464eaa: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 00464eaf: push 0x6bab74 */ { u32 v = 0x6bab74u; r_esp -= 4; W32(r_esp, v); }
    /* 00464eb4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00464eb9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x464ebeu); f_005e9f20();
    /* 00464ebe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00464ec1:; BB(0x00464ec1);
    /* 00464ec1: mov esp, ebp */ r_esp = r_ebp;
    /* 00464ec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00464ec4: ret  */ FN_RET(0x00464e10); r_esp += 4; return;
}

