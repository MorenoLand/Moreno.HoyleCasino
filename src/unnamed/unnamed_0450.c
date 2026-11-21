#include "protos.h"

void f_004502f0(void) /* sub_4502F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004502f0);
    /* 004502f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004502f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004502f3: sub esp, 0x2b0 */ {  u32 a = r_esp; u32 b = 0x2b0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004502f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004502fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004502fb: mov dword ptr [ebp - 0x2b0], ecx */ W32((u32)(r_ebp+0xfffffd50u), r_ecx);
    /* 00450301: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450307: movzx ecx, byte ptr [eax + 0x2c3] */ r_ecx = (u32)R8((u32)(r_eax+0x2c3u));
    /* 0045030e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450310: je 0x450323 */ if (fZ) goto L_00450323;
L_00450312:; BB(0x00450312);
    /* 00450312: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450318: movzx eax, byte ptr [edx + 0x2c0] */ r_eax = (u32)R8((u32)(r_edx+0x2c0u));
    /* 0045031f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450321: jne 0x45032a */ if (!fZ) goto L_0045032a;
L_00450323:; BB(0x00450323);
    /* 00450323: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00450325: jmp 0x450673 */ goto L_00450673;
L_0045032a:; BB(0x0045032a);
    /* 0045032a: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 00450334: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 0045033e: mov dword ptr [ebp - 0x2a0], 0 */ W32((u32)(r_ebp+0xfffffd60u), 0x0u);
    /* 00450348: mov dword ptr [ebp - 0x2ac], 0 */ W32((u32)(r_ebp+0xfffffd54u), 0x0u);
    /* 00450352: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 0045035c: jmp 0x45036d */ goto L_0045036d;
L_0045035e:; BB(0x0045035e);
    /* 0045035e: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 00450364: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450367: mov dword ptr [ebp - 0x29c], ecx */ W32((u32)(r_ebp+0xfffffd64u), r_ecx);
L_0045036d:; BB(0x0045036d);
    /* 0045036d: cmp dword ptr [ebp - 0x29c], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450374: jge 0x4503a2 */ if ((fS==fO)) goto L_004503a2;
L_00450376:; BB(0x00450376);
    /* 00450376: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045037c: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045037f: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450385: lea esi, [eax + edx + 0x18] */ r_esi = (u32)(r_eax+r_edx+0x18u);
    /* 00450389: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045038f: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450392: lea edi, [ebp + ecx - 0x298] */ r_edi = (u32)(r_ebp+r_ecx+0xfffffd68u);
    /* 00450399: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 0045039e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004503a0: jmp 0x45035e */ goto L_0045035e;
L_004503a2:; BB(0x004503a2);
    /* 004503a2: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004503a8: movzx eax, byte ptr [edx + 0x2be] */ r_eax = (u32)R8((u32)(r_edx+0x2beu));
    /* 004503af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004503b1: je 0x4503cb */ if (fZ) goto L_004503cb;
L_004503b3:; BB(0x004503b3);
    /* 004503b3: mov ecx, dword ptr [ebp - 0x26c] */ r_ecx = R32((u32)(r_ebp+0xfffffd94u));
    /* 004503b9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004503bc: mov dword ptr [ebp - 0x26c], ecx */ W32((u32)(r_ebp+0xfffffd94u), r_ecx);
    /* 004503c2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004503c5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004503c8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_004503cb:; BB(0x004503cb);
    /* 004503cb: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 004503d5: jmp 0x4503e6 */ goto L_004503e6;
L_004503d7:; BB(0x004503d7);
    /* 004503d7: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 004503dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004503e0: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
L_004503e6:; BB(0x004503e6);
    /* 004503e6: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004503ec: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 004503f2: cmp edx, dword ptr [ecx + 0x2f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004503f8: jge 0x45049b */ if ((fS==fO)) goto L_0045049b;
L_004503fe:; BB(0x004503fe);
    /* 004503fe: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 00450404: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0045040a: mov edx, dword ptr [ecx + eax*4 + 0x2d8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2d8u));
    /* 00450411: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450414: lea eax, [ebp + edx - 0x298] */ r_eax = (u32)(r_ebp+r_edx+0xfffffd68u);
    /* 0045041b: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450421: mov edx, dword ptr [ecx + 0x2d0] */ r_edx = R32((u32)(r_ecx+0x2d0u));
    /* 00450427: cmp dword ptr [eax + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045042c: je 0x450482 */ if (fZ) goto L_00450482;
L_0045042e:; BB(0x0045042e);
    /* 0045042e: cmp dword ptr [ebp - 0x2ac], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450435: jne 0x450450 */ if (!fZ) goto L_00450450;
L_00450437:; BB(0x00450437);
    /* 00450437: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045043d: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450443: mov edx, dword ptr [ecx + eax*4 + 0x2d8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2d8u));
    /* 0045044a: mov dword ptr [ebp - 0x2a4], edx */ W32((u32)(r_ebp+0xfffffd5cu), r_edx);
L_00450450:; BB(0x00450450);
    /* 00450450: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450456: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450459: mov dword ptr [ebp - 0x2ac], eax */ W32((u32)(r_ebp+0xfffffd54u), r_eax);
    /* 0045045f: cmp dword ptr [ebp - 0x2ac], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450466: jl 0x450480 */ if ((fS!=fO)) goto L_00450480;
L_00450468:; BB(0x00450468);
    /* 00450468: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0045046e: mov dword ptr [ebp - 0x2a0], ecx */ W32((u32)(r_ebp+0xfffffd60u), r_ecx);
    /* 00450474: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 0045047a: mov dword ptr [ebp - 0x2a8], edx */ W32((u32)(r_ebp+0xfffffd58u), r_edx);
L_00450480:; BB(0x00450480);
    /* 00450480: jmp 0x450496 */ goto L_00450496;
L_00450482:; BB(0x00450482);
    /* 00450482: mov dword ptr [ebp - 0x2ac], 0 */ W32((u32)(r_ebp+0xfffffd54u), 0x0u);
    /* 0045048c: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
L_00450496:; BB(0x00450496);
    /* 00450496: jmp 0x4503d7 */ goto L_004503d7;
L_0045049b:; BB(0x0045049b);
    /* 0045049b: cmp dword ptr [ebp - 0x2a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004504a2: je 0x450671 */ if (fZ) goto L_00450671;
L_004504a8:; BB(0x004504a8);
    /* 004504a8: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 004504ae: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 004504b4: mov dword ptr [eax + 0x344], ecx */ W32((u32)(r_eax+0x344u), r_ecx);
    /* 004504ba: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004504c0: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 004504c6: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 004504cc: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004504d2: movzx edx, byte ptr [ecx + 0x2be] */ r_edx = (u32)R8((u32)(r_ecx+0x2beu));
    /* 004504d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004504db: je 0x450617 */ if (fZ) goto L_00450617;
L_004504e1:; BB(0x004504e1);
    /* 004504e1: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 004504e7: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 004504ed: lea edx, [ecx + eax - 1] */ r_edx = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 004504f1: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004504f4: jne 0x45058e */ if (!fZ) goto L_0045058e;
L_004504fa:; BB(0x004504fa);
    /* 004504fa: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450500: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00450503: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450509: mov dword ptr [ecx + 0x34c], eax */ W32((u32)(r_ecx+0x34cu), r_eax);
    /* 0045050f: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450515: mov eax, dword ptr [edx + 0x348] */ r_eax = R32((u32)(r_edx+0x348u));
    /* 0045051b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045051e: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450524: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 0045052a: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450530: mov eax, dword ptr [edx + 0x34c] */ r_eax = R32((u32)(r_edx+0x34cu));
    /* 00450536: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00450539: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045053c: lea ecx, [ebp + eax - 0x298] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffd68u);
    /* 00450543: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450549: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 0045054f: cmp dword ptr [ecx + eax*4 + 4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450554: je 0x45058c */ if (fZ) goto L_0045058c;
L_00450556:; BB(0x00450556);
    /* 00450556: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 0045055c: mov edx, dword ptr [ecx + 0x348] */ r_edx = R32((u32)(r_ecx+0x348u));
    /* 00450562: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00450565: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0045056b: mov dword ptr [eax + 0x348], edx */ W32((u32)(r_eax+0x348u), r_edx);
    /* 00450571: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450577: mov edx, dword ptr [ecx + 0x344] */ r_edx = R32((u32)(r_ecx+0x344u));
    /* 0045057d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450580: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450586: mov dword ptr [eax + 0x344], edx */ W32((u32)(r_eax+0x344u), r_edx);
L_0045058c:; BB(0x0045058c);
    /* 0045058c: jmp 0x4505fc */ goto L_004505fc;
L_0045058e:; BB(0x0045058e);
    /* 0045058e: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450594: add ecx, dword ptr [ebp - 0x2a0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045059a: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004505a0: mov dword ptr [edx + 0x34c], ecx */ W32((u32)(r_edx+0x34cu), r_ecx);
    /* 004505a6: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 004505ac: cmp dword ptr [eax + 0x34c], 0xe */ {  u32 a = R32((u32)(r_eax+0x34cu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004505b3: je 0x4505fc */ if (fZ) goto L_004505fc;
L_004505b5:; BB(0x004505b5);
    /* 004505b5: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004505bb: mov edx, dword ptr [ecx + 0x34c] */ r_edx = R32((u32)(r_ecx+0x34cu));
    /* 004505c1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004505c4: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004505c7: lea eax, [ebp + edx - 0x298] */ r_eax = (u32)(r_ebp+r_edx+0xfffffd68u);
    /* 004505ce: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004505d4: mov edx, dword ptr [ecx + 0x2d0] */ r_edx = R32((u32)(r_ecx+0x2d0u));
    /* 004505da: cmp dword ptr [eax + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004505df: je 0x4505fc */ if (fZ) goto L_004505fc;
L_004505e1:; BB(0x004505e1);
    /* 004505e1: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 004505e7: mov ecx, dword ptr [eax + 0x344] */ r_ecx = R32((u32)(r_eax+0x344u));
    /* 004505ed: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004505f0: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 004505f6: mov dword ptr [edx + 0x344], ecx */ W32((u32)(r_edx+0x344u), r_ecx);
L_004505fc:; BB(0x004505fc);
    /* 004505fc: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450602: mov ecx, dword ptr [eax + 0x344] */ r_ecx = R32((u32)(r_eax+0x344u));
    /* 00450608: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045060b: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450611: mov dword ptr [edx + 0x344], ecx */ W32((u32)(r_edx+0x344u), r_ecx);
L_00450617:; BB(0x00450617);
    /* 00450617: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 00450621: jmp 0x450632 */ goto L_00450632;
L_00450623:; BB(0x00450623);
    /* 00450623: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 00450629: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045062c: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
L_00450632:; BB(0x00450632);
    /* 00450632: mov ecx, dword ptr [ebp - 0x2b0] */ r_ecx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450638: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045063e: cmp edx, dword ptr [ecx + 0x344] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x344u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450644: jge 0x45066d */ if ((fS==fO)) goto L_0045066d;
L_00450646:; BB(0x00450646);
    /* 00450646: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 0045064c: mov ecx, dword ptr [eax + 0x348] */ r_ecx = R32((u32)(r_eax+0x348u));
    /* 00450652: add ecx, dword ptr [ebp - 0x29c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd64u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450658: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045065e: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 00450664: mov dword ptr [eax + edx*4 + 0x328], ecx */ W32((u32)(r_eax+r_edx*4+0x328u), r_ecx);
    /* 0045066b: jmp 0x450623 */ goto L_00450623;
L_0045066d:; BB(0x0045066d);
    /* 0045066d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045066f: jmp 0x450673 */ goto L_00450673;
L_00450671:; BB(0x00450671);
    /* 00450671: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00450673:; BB(0x00450673);
    /* 00450673: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450674: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00450675: mov esp, ebp */ r_esp = r_ebp;
    /* 00450677: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450678: ret  */ FN_RET(0x004502f0); r_esp += 4; return;
}

void f_00450680(void) /* sub_450680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450680);
    /* 00450680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450681: mov ebp, esp */ r_ebp = r_esp;
    /* 00450683: sub esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450689: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045068a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045068b: mov dword ptr [ebp - 0x2ac], ecx */ W32((u32)(r_ebp+0xfffffd54u), r_ecx);
    /* 00450691: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450697: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 0045069e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004506a0: je 0x4506d5 */ if (fZ) goto L_004506d5;
L_004506a2:; BB(0x004506a2);
    /* 004506a2: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 004506a8: movzx eax, byte ptr [edx + 0x2c6] */ r_eax = (u32)R8((u32)(r_edx+0x2c6u));
    /* 004506af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004506b1: jne 0x4506d5 */ if (!fZ) goto L_004506d5;
L_004506b3:; BB(0x004506b3);
    /* 004506b3: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 004506b9: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 004506c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004506c2: je 0x4506d5 */ if (fZ) goto L_004506d5;
L_004506c4:; BB(0x004506c4);
    /* 004506c4: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 004506ca: movzx ecx, byte ptr [eax + 0x2c5] */ r_ecx = (u32)R8((u32)(r_eax+0x2c5u));
    /* 004506d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004506d3: jne 0x4506dc */ if (!fZ) goto L_004506dc;
L_004506d5:; BB(0x004506d5);
    /* 004506d5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004506d7: jmp 0x450b56 */ goto L_00450b56;
L_004506dc:; BB(0x004506dc);
    /* 004506dc: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 004506e6: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 004506f0: mov dword ptr [ebp - 0x2a0], 0 */ W32((u32)(r_ebp+0xfffffd60u), 0x0u);
    /* 004506fa: jmp 0x45070b */ goto L_0045070b;
L_004506fc:; BB(0x004506fc);
    /* 004506fc: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450702: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450705: mov dword ptr [ebp - 0x2a0], edx */ W32((u32)(r_ebp+0xfffffd60u), r_edx);
L_0045070b:; BB(0x0045070b);
    /* 0045070b: cmp dword ptr [ebp - 0x2a0], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffd60u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450712: jge 0x450740 */ if ((fS==fO)) goto L_00450740;
L_00450714:; BB(0x00450714);
    /* 00450714: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 0045071a: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045071d: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450723: lea esi, [ecx + eax + 0x18] */ r_esi = (u32)(r_ecx+r_eax+0x18u);
    /* 00450727: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 0045072d: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450730: lea edi, [ebp + edx - 0x298] */ r_edi = (u32)(r_ebp+r_edx+0xfffffd68u);
    /* 00450737: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 0045073c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0045073e: jmp 0x4506fc */ goto L_004506fc;
L_00450740:; BB(0x00450740);
    /* 00450740: mov eax, dword ptr [ebp - 0x26c] */ r_eax = R32((u32)(r_ebp+0xfffffd94u));
    /* 00450746: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00450749: mov dword ptr [ebp - 0x26c], eax */ W32((u32)(r_ebp+0xfffffd94u), r_eax);
    /* 0045074f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00450752: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00450755: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00450758: mov dword ptr [ebp - 0x2a0], 8 */ W32((u32)(r_ebp+0xfffffd60u), 0x8u);
    /* 00450762: jmp 0x450773 */ goto L_00450773;
L_00450764:; BB(0x00450764);
    /* 00450764: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 0045076a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045076d: mov dword ptr [ebp - 0x2a0], edx */ W32((u32)(r_ebp+0xfffffd60u), r_edx);
L_00450773:; BB(0x00450773);
    /* 00450773: cmp dword ptr [ebp - 0x2a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045077a: jle 0x4508ad */ if ((fZ||fS!=fO)) goto L_004508ad;
L_00450780:; BB(0x00450780);
    /* 00450780: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 0045078a: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 00450794: jmp 0x4507a5 */ goto L_004507a5;
L_00450796:; BB(0x00450796);
    /* 00450796: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 0045079c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045079f: mov dword ptr [ebp - 0x2a8], eax */ W32((u32)(r_ebp+0xfffffd58u), r_eax);
L_004507a5:; BB(0x004507a5);
    /* 004507a5: cmp dword ptr [ebp - 0x2a8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004507ac: jge 0x450815 */ if ((fS==fO)) goto L_00450815;
L_004507ae:; BB(0x004507ae);
    /* 004507ae: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 004507b4: add ecx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004507ba: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004507bd: cmp dword ptr [ebp + ecx - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_ecx+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004507c5: je 0x450801 */ if (fZ) goto L_00450801;
L_004507c7:; BB(0x004507c7);
    /* 004507c7: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 004507cd: add edx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004507d3: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004507d6: lea eax, [ebp + edx - 0x298] */ r_eax = (u32)(r_ebp+r_edx+0xfffffd68u);
    /* 004507dd: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 004507e3: mov edx, dword ptr [ecx + 0x2d0] */ r_edx = R32((u32)(r_ecx+0x2d0u));
    /* 004507e9: cmp dword ptr [eax + edx*4 + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004507ee: je 0x450801 */ if (fZ) goto L_00450801;
L_004507f0:; BB(0x004507f0);
    /* 004507f0: mov eax, dword ptr [ebp - 0x29c] */ r_eax = R32((u32)(r_ebp+0xfffffd64u));
    /* 004507f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004507f9: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
    /* 004507ff: jmp 0x450813 */ goto L_00450813;
L_00450801:; BB(0x00450801);
    /* 00450801: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450807: add ecx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045080d: mov dword ptr [ebp - 0x2a4], ecx */ W32((u32)(r_ebp+0xfffffd5cu), r_ecx);
L_00450813:; BB(0x00450813);
    /* 00450813: jmp 0x450796 */ goto L_00450796;
L_00450815:; BB(0x00450815);
    /* 00450815: cmp dword ptr [ebp - 0x29c], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045081c: jne 0x4508a8 */ if (!fZ) goto L_004508a8;
L_00450822:; BB(0x00450822);
    /* 00450822: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450828: mov dword ptr [edx + 0x344], 7 */ W32((u32)(r_edx+0x344u), 0x7u);
    /* 00450832: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450838: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 0045083e: mov dword ptr [eax + 0x348], ecx */ W32((u32)(r_eax+0x348u), r_ecx);
    /* 00450844: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0045084a: mov eax, dword ptr [ebp - 0x2a4] */ r_eax = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00450850: mov dword ptr [edx + 0x34c], eax */ W32((u32)(r_edx+0x34cu), r_eax);
    /* 00450856: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 00450860: jmp 0x450871 */ goto L_00450871;
L_00450862:; BB(0x00450862);
    /* 00450862: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450868: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045086b: mov dword ptr [ebp - 0x2a8], ecx */ W32((u32)(r_ebp+0xfffffd58u), r_ecx);
L_00450871:; BB(0x00450871);
    /* 00450871: cmp dword ptr [ebp - 0x2a8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450878: jge 0x4508a1 */ if ((fS==fO)) goto L_004508a1;
L_0045087a:; BB(0x0045087a);
    /* 0045087a: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450880: mov eax, dword ptr [edx + 0x348] */ r_eax = R32((u32)(r_edx+0x348u));
    /* 00450886: add eax, dword ptr [ebp - 0x2a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045088c: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450892: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450898: mov dword ptr [edx + ecx*4 + 0x328], eax */ W32((u32)(r_edx+r_ecx*4+0x328u), r_eax);
    /* 0045089f: jmp 0x450862 */ goto L_00450862;
L_004508a1:; BB(0x004508a1);
    /* 004508a1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004508a3: jmp 0x450b56 */ goto L_00450b56;
L_004508a8:; BB(0x004508a8);
    /* 004508a8: jmp 0x450764 */ goto L_00450764;
L_004508ad:; BB(0x004508ad);
    /* 004508ad: mov dword ptr [ebp - 0x2a0], 9 */ W32((u32)(r_ebp+0xfffffd60u), 0x9u);
    /* 004508b7: jmp 0x4508c8 */ goto L_004508c8;
L_004508b9:; BB(0x004508b9);
    /* 004508b9: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 004508bf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004508c2: mov dword ptr [ebp - 0x2a0], eax */ W32((u32)(r_ebp+0xfffffd60u), r_eax);
L_004508c8:; BB(0x004508c8);
    /* 004508c8: cmp dword ptr [ebp - 0x2a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004508cf: jle 0x450a02 */ if ((fZ||fS!=fO)) goto L_00450a02;
L_004508d5:; BB(0x004508d5);
    /* 004508d5: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 004508df: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 004508e9: jmp 0x4508fa */ goto L_004508fa;
L_004508eb:; BB(0x004508eb);
    /* 004508eb: mov ecx, dword ptr [ebp - 0x2a8] */ r_ecx = R32((u32)(r_ebp+0xfffffd58u));
    /* 004508f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004508f4: mov dword ptr [ebp - 0x2a8], ecx */ W32((u32)(r_ebp+0xfffffd58u), r_ecx);
L_004508fa:; BB(0x004508fa);
    /* 004508fa: cmp dword ptr [ebp - 0x2a8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450901: jge 0x45096a */ if ((fS==fO)) goto L_0045096a;
L_00450903:; BB(0x00450903);
    /* 00450903: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450909: add edx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045090f: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450912: cmp dword ptr [ebp + edx - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045091a: je 0x450956 */ if (fZ) goto L_00450956;
L_0045091c:; BB(0x0045091c);
    /* 0045091c: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450922: add eax, dword ptr [ebp - 0x2a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450928: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045092b: lea ecx, [ebp + eax - 0x298] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffd68u);
    /* 00450932: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450938: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 0045093e: cmp dword ptr [ecx + eax*4 + 4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450943: je 0x450956 */ if (fZ) goto L_00450956;
L_00450945:; BB(0x00450945);
    /* 00450945: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 0045094b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045094e: mov dword ptr [ebp - 0x29c], ecx */ W32((u32)(r_ebp+0xfffffd64u), r_ecx);
    /* 00450954: jmp 0x450968 */ goto L_00450968;
L_00450956:; BB(0x00450956);
    /* 00450956: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 0045095c: add edx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450962: mov dword ptr [ebp - 0x2a4], edx */ W32((u32)(r_ebp+0xfffffd5cu), r_edx);
L_00450968:; BB(0x00450968);
    /* 00450968: jmp 0x4508eb */ goto L_004508eb;
L_0045096a:; BB(0x0045096a);
    /* 0045096a: cmp dword ptr [ebp - 0x29c], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450971: jne 0x4509fd */ if (!fZ) goto L_004509fd;
L_00450977:; BB(0x00450977);
    /* 00450977: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 0045097d: mov dword ptr [eax + 0x344], 6 */ W32((u32)(r_eax+0x344u), 0x6u);
    /* 00450987: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0045098d: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450993: mov dword ptr [ecx + 0x348], edx */ W32((u32)(r_ecx+0x348u), r_edx);
    /* 00450999: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 0045099f: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 004509a5: mov dword ptr [eax + 0x34c], ecx */ W32((u32)(r_eax+0x34cu), r_ecx);
    /* 004509ab: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 004509b5: jmp 0x4509c6 */ goto L_004509c6;
L_004509b7:; BB(0x004509b7);
    /* 004509b7: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 004509bd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004509c0: mov dword ptr [ebp - 0x2a8], edx */ W32((u32)(r_ebp+0xfffffd58u), r_edx);
L_004509c6:; BB(0x004509c6);
    /* 004509c6: cmp dword ptr [ebp - 0x2a8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004509cd: jge 0x4509f6 */ if ((fS==fO)) goto L_004509f6;
L_004509cf:; BB(0x004509cf);
    /* 004509cf: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 004509d5: mov ecx, dword ptr [eax + 0x348] */ r_ecx = R32((u32)(r_eax+0x348u));
    /* 004509db: add ecx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004509e1: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 004509e7: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 004509ed: mov dword ptr [eax + edx*4 + 0x328], ecx */ W32((u32)(r_eax+r_edx*4+0x328u), r_ecx);
    /* 004509f4: jmp 0x4509b7 */ goto L_004509b7;
L_004509f6:; BB(0x004509f6);
    /* 004509f6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004509f8: jmp 0x450b56 */ goto L_00450b56;
L_004509fd:; BB(0x004509fd);
    /* 004509fd: jmp 0x4508b9 */ goto L_004508b9;
L_00450a02:; BB(0x00450a02);
    /* 00450a02: mov dword ptr [ebp - 0x2a0], 0xa */ W32((u32)(r_ebp+0xfffffd60u), 0xau);
    /* 00450a0c: jmp 0x450a1d */ goto L_00450a1d;
L_00450a0e:; BB(0x00450a0e);
    /* 00450a0e: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450a14: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00450a17: mov dword ptr [ebp - 0x2a0], ecx */ W32((u32)(r_ebp+0xfffffd60u), r_ecx);
L_00450a1d:; BB(0x00450a1d);
    /* 00450a1d: cmp dword ptr [ebp - 0x2a0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450a24: jle 0x450b54 */ if ((fZ||fS!=fO)) goto L_00450b54;
L_00450a2a:; BB(0x00450a2a);
    /* 00450a2a: mov dword ptr [ebp - 0x29c], 0 */ W32((u32)(r_ebp+0xfffffd64u), 0x0u);
    /* 00450a34: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 00450a3e: jmp 0x450a4f */ goto L_00450a4f;
L_00450a40:; BB(0x00450a40);
    /* 00450a40: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450a46: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450a49: mov dword ptr [ebp - 0x2a8], edx */ W32((u32)(r_ebp+0xfffffd58u), r_edx);
L_00450a4f:; BB(0x00450a4f);
    /* 00450a4f: cmp dword ptr [ebp - 0x2a8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450a56: jge 0x450abf */ if ((fS==fO)) goto L_00450abf;
L_00450a58:; BB(0x00450a58);
    /* 00450a58: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450a5e: add eax, dword ptr [ebp - 0x2a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450a64: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450a67: cmp dword ptr [ebp + eax - 0x298], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax+0xfffffd68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a6f: je 0x450aab */ if (fZ) goto L_00450aab;
L_00450a71:; BB(0x00450a71);
    /* 00450a71: mov ecx, dword ptr [ebp - 0x2a0] */ r_ecx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450a77: add ecx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450a7d: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450a80: lea edx, [ebp + ecx - 0x298] */ r_edx = (u32)(r_ebp+r_ecx+0xfffffd68u);
    /* 00450a87: mov eax, dword ptr [ebp - 0x2ac] */ r_eax = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450a8d: mov ecx, dword ptr [eax + 0x2d0] */ r_ecx = R32((u32)(r_eax+0x2d0u));
    /* 00450a93: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450a98: je 0x450aab */ if (fZ) goto L_00450aab;
L_00450a9a:; BB(0x00450a9a);
    /* 00450a9a: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 00450aa0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450aa3: mov dword ptr [ebp - 0x29c], edx */ W32((u32)(r_ebp+0xfffffd64u), r_edx);
    /* 00450aa9: jmp 0x450abd */ goto L_00450abd;
L_00450aab:; BB(0x00450aab);
    /* 00450aab: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450ab1: add eax, dword ptr [ebp - 0x2a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450ab7: mov dword ptr [ebp - 0x2a4], eax */ W32((u32)(r_ebp+0xfffffd5cu), r_eax);
L_00450abd:; BB(0x00450abd);
    /* 00450abd: jmp 0x450a40 */ goto L_00450a40;
L_00450abf:; BB(0x00450abf);
    /* 00450abf: cmp dword ptr [ebp - 0x29c], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffd64u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ac6: jne 0x450b4f */ if (!fZ) goto L_00450b4f;
L_00450acc:; BB(0x00450acc);
    /* 00450acc: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450ad2: mov dword ptr [ecx + 0x344], 5 */ W32((u32)(r_ecx+0x344u), 0x5u);
    /* 00450adc: mov edx, dword ptr [ebp - 0x2ac] */ r_edx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450ae2: mov eax, dword ptr [ebp - 0x2a0] */ r_eax = R32((u32)(r_ebp+0xfffffd60u));
    /* 00450ae8: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 00450aee: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450af4: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00450afa: mov dword ptr [ecx + 0x34c], edx */ W32((u32)(r_ecx+0x34cu), r_edx);
    /* 00450b00: mov dword ptr [ebp - 0x2a8], 0 */ W32((u32)(r_ebp+0xfffffd58u), 0x0u);
    /* 00450b0a: jmp 0x450b1b */ goto L_00450b1b;
L_00450b0c:; BB(0x00450b0c);
    /* 00450b0c: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450b12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450b15: mov dword ptr [ebp - 0x2a8], eax */ W32((u32)(r_ebp+0xfffffd58u), r_eax);
L_00450b1b:; BB(0x00450b1b);
    /* 00450b1b: cmp dword ptr [ebp - 0x2a8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffd58u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450b22: jge 0x450b4b */ if ((fS==fO)) goto L_00450b4b;
L_00450b24:; BB(0x00450b24);
    /* 00450b24: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450b2a: mov edx, dword ptr [ecx + 0x348] */ r_edx = R32((u32)(r_ecx+0x348u));
    /* 00450b30: add edx, dword ptr [ebp - 0x2a8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd58u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450b36: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 00450b3c: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00450b42: mov dword ptr [ecx + eax*4 + 0x328], edx */ W32((u32)(r_ecx+r_eax*4+0x328u), r_edx);
    /* 00450b49: jmp 0x450b0c */ goto L_00450b0c;
L_00450b4b:; BB(0x00450b4b);
    /* 00450b4b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00450b4d: jmp 0x450b56 */ goto L_00450b56;
L_00450b4f:; BB(0x00450b4f);
    /* 00450b4f: jmp 0x450a0e */ goto L_00450a0e;
L_00450b54:; BB(0x00450b54);
    /* 00450b54: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00450b56:; BB(0x00450b56);
    /* 00450b56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00450b57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00450b58: mov esp, ebp */ r_esp = r_ebp;
    /* 00450b5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450b5b: ret  */ FN_RET(0x00450680); r_esp += 4; return;
}

void f_00450b60(void) /* sub_450B60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450b60);
    /* 00450b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00450b63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450b66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00450b69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450b70: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00450b77: jmp 0x450b82 */ goto L_00450b82;
L_00450b79:; BB(0x00450b79);
    /* 00450b79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450b7c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450b7f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00450b82:; BB(0x00450b82);
    /* 00450b82: cmp dword ptr [ebp - 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450b86: jge 0x450bb1 */ if ((fS==fO)) goto L_00450bb1;
L_00450b88:; BB(0x00450b88);
    /* 00450b88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450b8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450b8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450b8f: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x450b94u); f_0044f700();
    /* 00450b94: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450b97: jne 0x450baf */ if (!fZ) goto L_00450baf;
L_00450b99:; BB(0x00450b99);
    /* 00450b99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450b9c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450b9f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00450ba2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450ba5: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ba8: jne 0x450baf */ if (!fZ) goto L_00450baf;
L_00450baa:; BB(0x00450baa);
    /* 00450baa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450bad: jmp 0x450bb3 */ goto L_00450bb3;
L_00450baf:; BB(0x00450baf);
    /* 00450baf: jmp 0x450b79 */ goto L_00450b79;
L_00450bb1:; BB(0x00450bb1);
    /* 00450bb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00450bb3:; BB(0x00450bb3);
    /* 00450bb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00450bb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450bb6: ret 8 */ FN_RET(0x00450b60); r_esp += 12; return;
}

void f_00450bc0(void) /* sub_450BC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450bc0);
    /* 00450bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00450bc3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450bc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00450bc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450bd0: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 00450bd7: jmp 0x450be2 */ goto L_00450be2;
L_00450bd9:; BB(0x00450bd9);
    /* 00450bd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450bdc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450bdf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00450be2:; BB(0x00450be2);
    /* 00450be2: cmp dword ptr [ebp - 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450be6: jge 0x450c11 */ if ((fS==fO)) goto L_00450c11;
L_00450be8:; BB(0x00450be8);
    /* 00450be8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450beb: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00450bee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00450bf1: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 00450bf4: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450bf7: jne 0x450c0f */ if (!fZ) goto L_00450c0f;
L_00450bf9:; BB(0x00450bf9);
    /* 00450bf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450bfc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450bff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00450c02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450c05: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450c08: jne 0x450c0f */ if (!fZ) goto L_00450c0f;
L_00450c0a:; BB(0x00450c0a);
    /* 00450c0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450c0d: jmp 0x450c13 */ goto L_00450c13;
L_00450c0f:; BB(0x00450c0f);
    /* 00450c0f: jmp 0x450bd9 */ goto L_00450bd9;
L_00450c11:; BB(0x00450c11);
    /* 00450c11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00450c13:; BB(0x00450c13);
    /* 00450c13: mov esp, ebp */ r_esp = r_ebp;
    /* 00450c15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450c16: ret 0xc */ FN_RET(0x00450bc0); r_esp += 16; return;
}

void f_00450c20(void) /* sub_450C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450c20);
    /* 00450c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00450c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00450c27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00450c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450c2e: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x450c33u); f_0044f700();
    /* 00450c33: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450c36: jle 0x450c3c */ if ((fZ||fS!=fO)) goto L_00450c3c;
L_00450c38:; BB(0x00450c38);
    /* 00450c38: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00450c3a: jmp 0x450c3e */ goto L_00450c3e;
L_00450c3c:; BB(0x00450c3c);
    /* 00450c3c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00450c3e:; BB(0x00450c3e);
    /* 00450c3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00450c40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450c41: ret 4 */ FN_RET(0x00450c20); r_esp += 8; return;
}

void f_00450c50(void) /* sub_450C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450c50);
    /* 00450c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00450c53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450c56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00450c59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450c60: jmp 0x450c6b */ goto L_00450c6b;
L_00450c62:; BB(0x00450c62);
    /* 00450c62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450c65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450c68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00450c6b:; BB(0x00450c6b);
    /* 00450c6b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450c6f: jge 0x450cc3 */ if ((fS==fO)) goto L_00450cc3;
L_00450c71:; BB(0x00450c71);
    /* 00450c71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450c74: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450c77: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00450c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c7d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450c80: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450c85u); f_0044f680();
    /* 00450c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450c86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450c89: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x450c8eu); f_00450c20();
    /* 00450c8e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00450c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450c93: jne 0x450cc1 */ if (!fZ) goto L_00450cc1;
L_00450c95:; BB(0x00450c95);
    /* 00450c95: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00450c98: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00450c9b: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00450c9e: jne 0x450cc1 */ if (!fZ) goto L_00450cc1;
L_00450ca0:; BB(0x00450ca0);
    /* 00450ca0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450ca3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450ca6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00450cab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00450cac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00450caf: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450cb4u); f_0044f680();
    /* 00450cb4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00450cb7: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00450cb9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00450cbc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450cbf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00450cc1:; BB(0x00450cc1);
    /* 00450cc1: jmp 0x450c62 */ goto L_00450c62;
L_00450cc3:; BB(0x00450cc3);
    /* 00450cc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00450cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450cc6: ret 0xc */ FN_RET(0x00450c50); r_esp += 16; return;
}

void f_00450cd0(void) /* sub_450CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450cd0);
    /* 00450cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00450cd3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450cd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00450cd9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00450ce0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00450ce3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00450ce6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450cea: je 0x450d05 */ if (fZ) goto L_00450d05;
L_00450cec:; BB(0x00450cec);
    /* 00450cec: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450cf0: je 0x450d7a */ if (fZ) goto L_00450d7a;
L_00450cf6:; BB(0x00450cf6);
    /* 00450cf6: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450cfa: je 0x450dec */ if (fZ) goto L_00450dec;
L_00450d00:; BB(0x00450d00);
    /* 00450d00: jmp 0x450e68 */ goto L_00450e68;
L_00450d05:; BB(0x00450d05);
    /* 00450d05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450d0c: jmp 0x450d17 */ goto L_00450d17;
L_00450d0e:; BB(0x00450d0e);
    /* 00450d0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d11: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450d14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00450d17:; BB(0x00450d17);
    /* 00450d17: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450d1b: jge 0x450d75 */ if ((fS==fO)) goto L_00450d75;
L_00450d1d:; BB(0x00450d1d);
    /* 00450d1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d20: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450d23: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00450d28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450d29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450d2c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450d31u); f_0044f680();
    /* 00450d31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450d32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450d35: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x450d3au); f_00450c20();
    /* 00450d3a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00450d3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450d3f: je 0x450d73 */ if (fZ) goto L_00450d73;
L_00450d41:; BB(0x00450d41);
    /* 00450d41: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450d45: je 0x450d5a */ if (fZ) goto L_00450d5a;
L_00450d47:; BB(0x00450d47);
    /* 00450d47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00450d4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d4d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00450d4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d52: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450d55: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00450d58: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00450d5a:; BB(0x00450d5a);
    /* 00450d5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d5d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450d60: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00450d65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450d66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450d69: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450d6eu); f_0044f680();
    /* 00450d6e: jmp 0x450e6a */ goto L_00450e6a;
L_00450d73:; BB(0x00450d73);
    /* 00450d73: jmp 0x450d0e */ goto L_00450d0e;
L_00450d75:; BB(0x00450d75);
    /* 00450d75: jmp 0x450e68 */ goto L_00450e68;
L_00450d7a:; BB(0x00450d7a);
    /* 00450d7a: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00450d81: jmp 0x450d8c */ goto L_00450d8c;
L_00450d83:; BB(0x00450d83);
    /* 00450d83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d86: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00450d89: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00450d8c:; BB(0x00450d8c);
    /* 00450d8c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450d90: jle 0x450dea */ if ((fZ||fS!=fO)) goto L_00450dea;
L_00450d92:; BB(0x00450d92);
    /* 00450d92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450d95: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450d98: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00450d9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450d9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450da1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450da6u); f_0044f680();
    /* 00450da6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450da7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450daa: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x450dafu); f_00450c20();
    /* 00450daf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00450db2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450db4: je 0x450de8 */ if (fZ) goto L_00450de8;
L_00450db6:; BB(0x00450db6);
    /* 00450db6: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450dba: je 0x450dcf */ if (fZ) goto L_00450dcf;
L_00450dbc:; BB(0x00450dbc);
    /* 00450dbc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00450dbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450dc2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00450dc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450dc7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00450dca: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00450dcd: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00450dcf:; BB(0x00450dcf);
    /* 00450dcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450dd2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450dd5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00450dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450ddb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450dde: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450de3u); f_0044f680();
    /* 00450de3: jmp 0x450e6a */ goto L_00450e6a;
L_00450de8:; BB(0x00450de8);
    /* 00450de8: jmp 0x450d83 */ goto L_00450d83;
L_00450dea:; BB(0x00450dea);
    /* 00450dea: jmp 0x450e68 */ goto L_00450e68;
L_00450dec:; BB(0x00450dec);
    /* 00450dec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450df3: jmp 0x450dfe */ goto L_00450dfe;
L_00450df5:; BB(0x00450df5);
    /* 00450df5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450df8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00450dfb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00450dfe:; BB(0x00450dfe);
    /* 00450dfe: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450e02: jge 0x450e68 */ if ((fS==fO)) goto L_00450e68;
L_00450e04:; BB(0x00450e04);
    /* 00450e04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450e07: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450e0a: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00450e0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00450e10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450e13: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450e18u); f_0044f680();
    /* 00450e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450e19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450e1c: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x450e21u); f_00450c20();
    /* 00450e21: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00450e24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450e26: je 0x450e66 */ if (fZ) goto L_00450e66;
L_00450e28:; BB(0x00450e28);
    /* 00450e28: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450e2c: jne 0x450e37 */ if (!fZ) goto L_00450e37;
L_00450e2e:; BB(0x00450e2e);
    /* 00450e2e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00450e35: jmp 0x450df5 */ goto L_00450df5;
L_00450e37:; BB(0x00450e37);
    /* 00450e37: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450e3b: je 0x450e50 */ if (fZ) goto L_00450e50;
L_00450e3d:; BB(0x00450e3d);
    /* 00450e3d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00450e40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450e43: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00450e45: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450e48: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00450e4b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00450e4e: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00450e50:; BB(0x00450e50);
    /* 00450e50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450e53: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450e56: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00450e5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450e5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450e5f: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x450e64u); f_0044f680();
    /* 00450e64: jmp 0x450e6a */ goto L_00450e6a;
L_00450e66:; BB(0x00450e66);
    /* 00450e66: jmp 0x450df5 */ goto L_00450df5;
L_00450e68:; BB(0x00450e68);
    /* 00450e68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00450e6a:; BB(0x00450e6a);
    /* 00450e6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00450e6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00450e6d: ret 0xc */ FN_RET(0x00450cd0); r_esp += 16; return;
}

void f_00450e70(void) /* sub_450E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00450e70);
    /* 00450e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00450e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00450e73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00450e76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00450e77: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00450e7a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450e7d: movzx ecx, byte ptr [eax + 0x2c5] */ r_ecx = (u32)R8((u32)(r_eax+0x2c5u));
    /* 00450e84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450e86: jne 0x450e8d */ if (!fZ) goto L_00450e8d;
L_00450e88:; BB(0x00450e88);
    /* 00450e88: jmp 0x4512b4 */ goto L_004512b4;
L_00450e8d:; BB(0x00450e8d);
    /* 00450e8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00450e90: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00450e96: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00450e99: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 00450e9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450ea2: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ea9: jne 0x450eb7 */ if (!fZ) goto L_00450eb7;
L_00450eab:; BB(0x00450eab);
    /* 00450eab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450eae: cmp dword ptr [edx + 0x2fc], 1 */ {  u32 a = R32((u32)(r_edx+0x2fcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450eb5: jne 0x450ee1 */ if (!fZ) goto L_00450ee1;
L_00450eb7:; BB(0x00450eb7);
    /* 00450eb7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450eba: mov ecx, dword ptr [eax + 0x2f4] */ r_ecx = R32((u32)(r_eax+0x2f4u));
    /* 00450ec0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450ec3: cmp dword ptr [edx + ecx*4 + 0x2d4], 0xe */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2d4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450ecb: jne 0x450fdd */ if (!fZ) goto L_00450fdd;
L_00450ed1:; BB(0x00450ed1);
    /* 00450ed1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450ed4: cmp dword ptr [eax + 0x2fc], 0xe */ {  u32 a = R32((u32)(r_eax+0x2fcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450edb: je 0x450fdd */ if (fZ) goto L_00450fdd;
L_00450ee1:; BB(0x00450ee1);
    /* 00450ee1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450ee4: movzx edx, byte ptr [ecx + 0x2be] */ r_edx = (u32)R8((u32)(r_ecx+0x2beu));
    /* 00450eeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450eed: je 0x450fa2 */ if (fZ) goto L_00450fa2;
L_00450ef3:; BB(0x00450ef3);
    /* 00450ef3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00450ef5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450ef8: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x450efdu); f_0044f700();
    /* 00450efd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f00: jne 0x450f3f */ if (!fZ) goto L_00450f3f;
L_00450f02:; BB(0x00450f02);
    /* 00450f02: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450f09: jmp 0x450f14 */ goto L_00450f14;
L_00450f0b:; BB(0x00450f0b);
    /* 00450f0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f0e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450f11: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00450f14:; BB(0x00450f14);
    /* 00450f14: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450f18: jge 0x450f3f */ if ((fS==fO)) goto L_00450f3f;
L_00450f1a:; BB(0x00450f1a);
    /* 00450f1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f1d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450f20: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00450f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450f26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450f29: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x450f2eu); f_0044f6c0();
    /* 00450f2e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f31: je 0x450f3d */ if (fZ) goto L_00450f3d;
L_00450f33:; BB(0x00450f33);
    /* 00450f33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00450f36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f39: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00450f3b: jmp 0x450f3f */ goto L_00450f3f;
L_00450f3d:; BB(0x00450f3d);
    /* 00450f3d: jmp 0x450f0b */ goto L_00450f0b;
L_00450f3f:; BB(0x00450f3f);
    /* 00450f3f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00450f41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450f44: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x450f49u); f_0044f700();
    /* 00450f49: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f4c: jne 0x450fa0 */ if (!fZ) goto L_00450fa0;
L_00450f4e:; BB(0x00450f4e);
    /* 00450f4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450f55: jmp 0x450f60 */ goto L_00450f60;
L_00450f57:; BB(0x00450f57);
    /* 00450f57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450f5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00450f60:; BB(0x00450f60);
    /* 00450f60: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450f64: jge 0x450fa0 */ if ((fS==fO)) goto L_00450fa0;
L_00450f66:; BB(0x00450f66);
    /* 00450f66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f69: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450f6c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00450f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00450f72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450f75: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x450f7au); f_0044f6c0();
    /* 00450f7a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f7d: je 0x450f9e */ if (fZ) goto L_00450f9e;
L_00450f7f:; BB(0x00450f7f);
    /* 00450f7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00450f82: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450f85: jne 0x450f91 */ if (!fZ) goto L_00450f91;
L_00450f87:; BB(0x00450f87);
    /* 00450f87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00450f8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f8d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00450f8f: jmp 0x450f9e */ goto L_00450f9e;
L_00450f91:; BB(0x00450f91);
    /* 00450f91: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00450f94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450f97: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00450f99: jmp 0x4512b4 */ goto L_004512b4;
L_00450f9e:; BB(0x00450f9e);
    /* 00450f9e: jmp 0x450f57 */ goto L_00450f57;
L_00450fa0:; BB(0x00450fa0);
    /* 00450fa0: jmp 0x450fdb */ goto L_00450fdb;
L_00450fa2:; BB(0x00450fa2);
    /* 00450fa2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00450fa4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450fa7: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x450facu); f_0044f700();
    /* 00450fac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450faf: jne 0x450fba */ if (!fZ) goto L_00450fba;
L_00450fb1:; BB(0x00450fb1);
    /* 00450fb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00450fb4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_00450fba:; BB(0x00450fba);
    /* 00450fba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00450fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450fbf: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x450fc4u); f_0044f700();
    /* 00450fc4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00450fc7: jne 0x450fdb */ if (!fZ) goto L_00450fdb;
L_00450fc9:; BB(0x00450fc9);
    /* 00450fc9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00450fcc: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00450fd2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00450fd5: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
L_00450fdb:; BB(0x00450fdb);
    /* 00450fdb: jmp 0x451048 */ goto L_00451048;
L_00450fdd:; BB(0x00450fdd);
    /* 00450fdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00450fe4: jmp 0x450fef */ goto L_00450fef;
L_00450fe6:; BB(0x00450fe6);
    /* 00450fe6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450fe9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00450fec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00450fef:; BB(0x00450fef);
    /* 00450fef: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00450ff3: jge 0x451048 */ if ((fS==fO)) goto L_00451048;
L_00450ff5:; BB(0x00450ff5);
    /* 00450ff5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00450ff8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00450ffb: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451001: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451004: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451009u); f_0044f680();
    /* 00451009: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045100c: jne 0x451046 */ if (!fZ) goto L_00451046;
L_0045100e:; BB(0x0045100e);
    /* 0045100e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451011: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451014: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045101a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045101d: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451022u); f_0044f6c0();
    /* 00451022: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451025: je 0x451046 */ if (fZ) goto L_00451046;
L_00451027:; BB(0x00451027);
    /* 00451027: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045102a: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045102d: jne 0x451039 */ if (!fZ) goto L_00451039;
L_0045102f:; BB(0x0045102f);
    /* 0045102f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451032: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451035: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451037: jmp 0x451046 */ goto L_00451046;
L_00451039:; BB(0x00451039);
    /* 00451039: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045103c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045103f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451041: jmp 0x4512b4 */ goto L_004512b4;
L_00451046:; BB(0x00451046);
    /* 00451046: jmp 0x450fe6 */ goto L_00450fe6;
L_00451048:; BB(0x00451048);
    /* 00451048: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045104f: jmp 0x45105a */ goto L_0045105a;
L_00451051:; BB(0x00451051);
    /* 00451051: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451054: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451057: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045105a:; BB(0x0045105a);
    /* 0045105a: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045105e: jge 0x4510c5 */ if ((fS==fO)) goto L_004510c5;
L_00451060:; BB(0x00451060);
    /* 00451060: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451063: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451066: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0045106b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045106c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045106f: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451074u); f_0044f680();
    /* 00451074: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451077: jne 0x45107b */ if (!fZ) goto L_0045107b;
L_00451079:; BB(0x00451079);
    /* 00451079: jmp 0x451051 */ goto L_00451051;
L_0045107b:; BB(0x0045107b);
    /* 0045107b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045107e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451081: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451087: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045108a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45108fu); f_0044f680();
    /* 0045108f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451092: mov edx, dword ptr [ecx + 0x2f4] */ r_edx = R32((u32)(r_ecx+0x2f4u));
    /* 00451098: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045109b: cmp eax, dword ptr [ecx + edx*4 + 0x2d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x2d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004510a2: jle 0x4510c3 */ if ((fZ||fS!=fO)) goto L_004510c3;
L_004510a4:; BB(0x004510a4);
    /* 004510a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004510a7: cmp dword ptr [edx], -1 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004510aa: jne 0x4510b6 */ if (!fZ) goto L_004510b6;
L_004510ac:; BB(0x004510ac);
    /* 004510ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004510af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510b2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004510b4: jmp 0x4510c3 */ goto L_004510c3;
L_004510b6:; BB(0x004510b6);
    /* 004510b6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004510b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510bc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004510be: jmp 0x4512b4 */ goto L_004512b4;
L_004510c3:; BB(0x004510c3);
    /* 004510c3: jmp 0x451051 */ goto L_00451051;
L_004510c5:; BB(0x004510c5);
    /* 004510c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004510cc: jmp 0x4510d7 */ goto L_004510d7;
L_004510ce:; BB(0x004510ce);
    /* 004510ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510d1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004510d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004510d7:; BB(0x004510d7);
    /* 004510d7: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004510db: jge 0x451244 */ if ((fS==fO)) goto L_00451244;
L_004510e1:; BB(0x004510e1);
    /* 004510e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004510e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004510e7: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004510ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004510ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004510f0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4510f5u); f_0044f680();
    /* 004510f5: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004510f8: jne 0x4510fc */ if (!fZ) goto L_004510fc;
L_004510fa:; BB(0x004510fa);
    /* 004510fa: jmp 0x4510ce */ goto L_004510ce;
L_004510fc:; BB(0x004510fc);
    /* 004510fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004510ff: cmp dword ptr [edx], -1 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451102: je 0x451136 */ if (fZ) goto L_00451136;
L_00451104:; BB(0x00451104);
    /* 00451104: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451107: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00451109: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045110c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451112: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451115: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45111au); f_0044f680();
    /* 0045111a: mov esi, eax */ r_esi = r_eax;
    /* 0045111c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045111f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451122: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451128: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045112b: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451130u); f_0044f680();
    /* 00451130: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451132: jne 0x451136 */ if (!fZ) goto L_00451136;
L_00451134:; BB(0x00451134);
    /* 00451134: jmp 0x4510ce */ goto L_004510ce;
L_00451136:; BB(0x00451136);
    /* 00451136: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045113d: jmp 0x451148 */ goto L_00451148;
L_0045113f:; BB(0x0045113f);
    /* 0045113f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451142: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00451145: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00451148:; BB(0x00451148);
    /* 00451148: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045114b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045114e: cmp eax, dword ptr [edx + 0x2f4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451154: jge 0x45123f */ if ((fS==fO)) goto L_0045123f;
L_0045115a:; BB(0x0045115a);
    /* 0045115a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045115d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451160: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451166: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451169: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45116eu); f_0044f680();
    /* 0045116e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451171: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451174: cmp eax, dword ptr [edx + ecx*4 + 0x2d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045117b: jne 0x45123a */ if (!fZ) goto L_0045123a;
L_00451181:; BB(0x00451181);
    /* 00451181: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451184: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451187: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045118c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045118d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451190: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451195u); f_0044f680();
    /* 00451195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451196: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451199: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x45119eu); f_00450c20();
    /* 0045119e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004511a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004511a3: je 0x45123a */ if (fZ) goto L_0045123a;
L_004511a9:; BB(0x004511a9);
    /* 004511a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004511ac: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004511af: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004511b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004511b8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4511bdu); f_0044f680();
    /* 004511bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004511be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004511c1: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4511c6u); f_0044f700();
    /* 004511c6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004511c9: jne 0x4511ec */ if (!fZ) goto L_004511ec;
L_004511cb:; BB(0x004511cb);
    /* 004511cb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004511ce: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004511d1: jne 0x4511df */ if (!fZ) goto L_004511df;
L_004511d3:; BB(0x004511d3);
    /* 004511d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004511d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004511d9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004511db: jmp 0x45123f */ goto L_0045123f;
L_004511df:; BB(0x004511df);
    /* 004511df: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004511e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004511e5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004511e7: jmp 0x4512b4 */ goto L_004512b4;
L_004511ec:; BB(0x004511ec);
    /* 004511ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004511ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004511f2: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004511f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004511f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004511fb: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451200u); f_0044f680();
    /* 00451200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451201: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451204: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x451209u); f_0044f700();
    /* 00451209: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045120c: jne 0x45123a */ if (!fZ) goto L_0045123a;
L_0045120e:; BB(0x0045120e);
    /* 0045120e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451211: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451214: jne 0x451230 */ if (!fZ) goto L_00451230;
L_00451216:; BB(0x00451216);
    /* 00451216: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451219: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045121c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0045121e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451221: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451224: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451227: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00451229: jmp 0x4512b4 */ goto L_004512b4;
L_00451230:; BB(0x00451230);
    /* 00451230: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00451233: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451236: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451238: jmp 0x4512b4 */ goto L_004512b4;
L_0045123a:; BB(0x0045123a);
    /* 0045123a: jmp 0x45113f */ goto L_0045113f;
L_0045123f:; BB(0x0045123f);
    /* 0045123f: jmp 0x4510ce */ goto L_004510ce;
L_00451244:; BB(0x00451244);
    /* 00451244: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045124b: jmp 0x451256 */ goto L_00451256;
L_0045124d:; BB(0x0045124d);
    /* 0045124d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451250: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00451253: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00451256:; BB(0x00451256);
    /* 00451256: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045125a: jge 0x4512b4 */ if ((fS==fO)) goto L_004512b4;
L_0045125c:; BB(0x0045125c);
    /* 0045125c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045125f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451262: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451267: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451268: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045126b: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451270u); f_0044f680();
    /* 00451270: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451273: jne 0x451277 */ if (!fZ) goto L_00451277;
L_00451275:; BB(0x00451275);
    /* 00451275: jmp 0x45124d */ goto L_0045124d;
L_00451277:; BB(0x00451277);
    /* 00451277: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045127a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045127d: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451283: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451286: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45128bu); f_0044f680();
    /* 0045128b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045128e: cmp eax, dword ptr [edx + 0x2d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451294: jge 0x4512b2 */ if ((fS==fO)) goto L_004512b2;
L_00451296:; BB(0x00451296);
    /* 00451296: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451299: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045129c: jne 0x4512a8 */ if (!fZ) goto L_004512a8;
L_0045129e:; BB(0x0045129e);
    /* 0045129e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004512a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004512a4: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004512a6: jmp 0x4512b2 */ goto L_004512b2;
L_004512a8:; BB(0x004512a8);
    /* 004512a8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004512ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004512ae: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004512b0: jmp 0x4512b4 */ goto L_004512b4;
L_004512b2:; BB(0x004512b2);
    /* 004512b2: jmp 0x45124d */ goto L_0045124d;
L_004512b4:; BB(0x004512b4);
    /* 004512b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004512b5: mov esp, ebp */ r_esp = r_ebp;
    /* 004512b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004512b8: ret 8 */ FN_RET(0x00450e70); r_esp += 12; return;
}

