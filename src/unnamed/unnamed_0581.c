#include "protos.h"

void f_00581610(void) /* sub_581610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00581610);
    /* 00581610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581611: mov ebp, esp */ r_ebp = r_esp;
    /* 00581613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581614: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00581617: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058161b: jl 0x581668 */ if ((fS!=fO)) goto L_00581668;
L_0058161d:; BB(0x0058161d);
    /* 0058161d: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581621: jg 0x581668 */ if ((!fZ&&fS==fO)) goto L_00581668;
L_00581623:; BB(0x00581623);
    /* 00581623: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00581626: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581629: cmp dword ptr [ecx + eax*4 + 0x4068], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x4068u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581631: jne 0x581642 */ if (!fZ) goto L_00581642;
L_00581633:; BB(0x00581633);
    /* 00581633: push 0x30dfe9 */ { u32 v = 0x30dfe9u; r_esp -= 4; W32(r_esp, v); }
    /* 00581638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058163b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x581640u); f_005eaf00();
    /* 00581640: jmp 0x58164f */ goto L_0058164f;
L_00581642:; BB(0x00581642);
    /* 00581642: push 0x30dfe8 */ { u32 v = 0x30dfe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00581647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058164a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x58164fu); f_005eaf00();
L_0058164f:; BB(0x0058164f);
    /* 0058164f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581652: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00581654: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581657: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0058165a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58165cu); call_ind(t); }
    /* 0058165c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058165f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00581662: mov dword ptr [eax + 0x407c], ecx */ W32((u32)(r_eax+0x407cu), r_ecx);
L_00581668:; BB(0x00581668);
    /* 00581668: mov esp, ebp */ r_esp = r_ebp;
    /* 0058166a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058166b: ret 4 */ FN_RET(0x00581610); r_esp += 8; return;
}

void f_00581670(void) /* sub_581670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00581670);
    /* 00581670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581671: mov ebp, esp */ r_ebp = r_esp;
    /* 00581673: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581676: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00581679: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058167c: mov dword ptr [eax + 0x4078], 0 */ W32((u32)(r_eax+0x4078u), 0x0u);
    /* 00581686: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581689: mov dword ptr [ecx + 0x407c], 0 */ W32((u32)(r_ecx+0x407cu), 0x0u);
    /* 00581693: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058169a: jmp 0x5816a5 */ goto L_005816a5;
L_0058169c:; BB(0x0058169c);
    /* 0058169c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058169f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005816a2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005816a5:; BB(0x005816a5);
    /* 005816a5: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005816a9: jge 0x58170f */ if ((fS==fO)) goto L_0058170f;
L_005816ab:; BB(0x005816ab);
    /* 005816ab: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005816b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005816b3: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005816b6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005816b9: lea edx, [ecx + eax + 0x39b8] */ r_edx = (u32)(r_ecx+r_eax+0x39b8u);
    /* 005816c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005816c1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5816c6u); f_00686d8e();
    /* 005816c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005816c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005816cc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005816cf: mov dword ptr [ecx + eax*4 + 0x4068], 0 */ W32((u32)(r_ecx+r_eax*4+0x4068u), 0x0u);
    /* 005816da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005816dd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005816e0: mov dword ptr [eax + edx*4 + 0x39f8], 0 */ W32((u32)(r_eax+r_edx*4+0x39f8u), 0x0u);
    /* 005816eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005816ee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005816f1: mov dword ptr [edx + ecx*4 + 0x3a08], 0 */ W32((u32)(r_edx+r_ecx*4+0x3a08u), 0x0u);
    /* 005816fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005816ff: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581702: mov dword ptr [ecx + eax*4 + 0x3a18], 0 */ W32((u32)(r_ecx+r_eax*4+0x3a18u), 0x0u);
    /* 0058170d: jmp 0x58169c */ goto L_0058169c;
L_0058170f:; BB(0x0058170f);
    /* 0058170f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00581716: jmp 0x581721 */ goto L_00581721;
L_00581718:; BB(0x00581718);
    /* 00581718: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058171b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058171e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00581721:; BB(0x00581721);
    /* 00581721: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581725: jge 0x581760 */ if ((fS==fO)) goto L_00581760;
L_00581727:; BB(0x00581727);
    /* 00581727: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058172e: jmp 0x581739 */ goto L_00581739;
L_00581730:; BB(0x00581730);
    /* 00581730: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581733: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581736: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00581739:; BB(0x00581739);
    /* 00581739: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058173d: jge 0x58175e */ if ((fS==fO)) goto L_0058175e;
L_0058173f:; BB(0x0058173f);
    /* 0058173f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581742: imul ecx, ecx, 0x190 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x190u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581748: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058174b: lea eax, [edx + ecx + 0x3a28] */ r_eax = (u32)(r_edx+r_ecx+0x3a28u);
    /* 00581752: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581755: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 0058175c: jmp 0x581730 */ goto L_00581730;
L_0058175e:; BB(0x0058175e);
    /* 0058175e: jmp 0x581718 */ goto L_00581718;
L_00581760:; BB(0x00581760);
    /* 00581760: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00581767: jmp 0x581772 */ goto L_00581772;
L_00581769:; BB(0x00581769);
    /* 00581769: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058176c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058176f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00581772:; BB(0x00581772);
    /* 00581772: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00581777: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581779: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0058177f: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00581785: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581787u); call_ind(t); }
    /* 00581787: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058178a: jge 0x5818df */ if ((fS==fO)) goto L_005818df;
L_00581790:; BB(0x00581790);
    /* 00581790: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581794: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x581799u); f_005dcb00();
    /* 00581799: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058179c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058179f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005817a2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5817a7u); f_0063aac0();
    /* 005817a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005817a9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005817ac: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005817b0: je 0x5817ce */ if (fZ) goto L_005817ce;
L_005817b2:; BB(0x005817b2);
    /* 005817b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005817b5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5817bau); f_0063aac0();
    /* 005817ba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005817bc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005817bf: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005817c3: je 0x5817ce */ if (fZ) goto L_005817ce;
L_005817c5:; BB(0x005817c5);
    /* 005817c5: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005817cc: jmp 0x5817d5 */ goto L_005817d5;
L_005817ce:; BB(0x005817ce);
    /* 005817ce: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_005817d5:; BB(0x005817d5);
    /* 005817d5: movzx ecx, byte ptr [ebp - 0x38] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc8u));
    /* 005817d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005817db: je 0x5818da */ if (fZ) goto L_005818da;
L_005817e1:; BB(0x005817e1);
    /* 005817e1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005817e4: cmp dword ptr [edx + 0x4078], 3 */ {  u32 a = R32((u32)(r_edx+0x4078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005817eb: jge 0x58181d */ if ((fS==fO)) goto L_0058181d;
L_005817ed:; BB(0x005817ed);
    /* 005817ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005817f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005817f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5817f6u); f_005dcb00();
    /* 005817f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005817f9: mov ecx, eax */ r_ecx = r_eax;
    /* 005817fb: call 0x5d5780 */ r_esp -= 4; W32(r_esp, 0x581800u); f_005d5780();
    /* 00581800: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00581803: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00581805: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00581807: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058180a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058180d: mov eax, dword ptr [edx + 0x4078] */ r_eax = R32((u32)(r_edx+0x4078u));
    /* 00581813: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581816: mov dword ptr [edx + eax*4 + 0x4068], ecx */ W32((u32)(r_edx+r_eax*4+0x4068u), r_ecx);
L_0058181d:; BB(0x0058181d);
    /* 0058181d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581821: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x581826u); f_005dcb00();
    /* 00581826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581829: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0058182c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058182f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x581834u); f_0063aac0();
    /* 00581834: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581837: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0058183a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058183d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058183e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581841: mov eax, dword ptr [edx + 0x4078] */ r_eax = R32((u32)(r_edx+0x4078u));
    /* 00581847: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0058184a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058184d: lea edx, [ecx + eax + 0x39b8] */ r_edx = (u32)(r_ecx+r_eax+0x39b8u);
    /* 00581854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581855: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x58185au); f_00686ec0();
    /* 0058185a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058185d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058185f: je 0x5818b6 */ if (fZ) goto L_005818b6;
L_00581861:; BB(0x00581861);
    /* 00581861: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581864: mov ecx, dword ptr [eax + 0x4078] */ r_ecx = R32((u32)(r_eax+0x4078u));
    /* 0058186a: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0058186d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581870: lea eax, [edx + ecx + 0x39b8] */ r_eax = (u32)(r_edx+r_ecx+0x39b8u);
    /* 00581877: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0058187a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0058187d: mov edx, dword ptr [ecx + 0x4078] */ r_edx = R32((u32)(r_ecx+0x4078u));
    /* 00581883: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581886: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581889: mov dword ptr [eax + 0x4078], edx */ W32((u32)(r_eax+0x4078u), r_edx);
    /* 0058188f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581892: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581893: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x581898u); f_005dcb00();
    /* 00581898: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058189b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0058189e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005818a1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5818a6u); f_0063aac0();
    /* 005818a6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005818a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005818aa: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005818ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005818ae: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5818b3u); f_00686d8e();
    /* 005818b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005818b6:; BB(0x005818b6);
    /* 005818b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005818b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005818ba: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5818bfu); f_005dcb00();
    /* 005818bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005818c2: mov ecx, eax */ r_ecx = r_eax;
    /* 005818c4: call 0x5d5780 */ r_esp -= 4; W32(r_esp, 0x5818c9u); f_005d5780();
    /* 005818c9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005818cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005818cd: push 0x6cc044 */ { u32 v = 0x6cc044u; r_esp -= 4; W32(r_esp, v); }
    /* 005818d2: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5818d7u); f_0062fde0();
    /* 005818d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005818da:; BB(0x005818da);
    /* 005818da: jmp 0x581769 */ goto L_00581769;
L_005818df:; BB(0x005818df);
    /* 005818df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005818e6: jmp 0x5818f1 */ goto L_005818f1;
L_005818e8:; BB(0x005818e8);
    /* 005818e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005818eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005818ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005818f1:; BB(0x005818f1);
    /* 005818f1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005818f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005818f7: cmp ecx, dword ptr [eax + 0x4078] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4078u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005818fd: jge 0x581933 */ if ((fS==fO)) goto L_00581933;
L_005818ff:; BB(0x005818ff);
    /* 005818ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00581901: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581904: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058190a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058190d: lea ecx, [eax + edx + 0x178] */ r_ecx = (u32)(r_eax+r_edx+0x178u);
    /* 00581914: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581915: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581918: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0058191b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058191e: lea ecx, [eax + edx + 0x39b8] */ r_ecx = (u32)(r_eax+r_edx+0x39b8u);
    /* 00581925: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581926: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058192c: call 0x5e2b90 */ r_esp -= 4; W32(r_esp, 0x581931u); f_005e2b90();
    /* 00581931: jmp 0x5818e8 */ goto L_005818e8;
L_00581933:; BB(0x00581933);
    /* 00581933: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00581939: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0058193f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00581942: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00581949: jmp 0x581954 */ goto L_00581954;
L_0058194b:; BB(0x0058194b);
    /* 0058194b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058194e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581951: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00581954:; BB(0x00581954);
    /* 00581954: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581957: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058195a: cmp eax, dword ptr [edx + 0x4078] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4078u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581960: jge 0x581ad1 */ if ((fS==fO)) goto L_00581ad1;
L_00581966:; BB(0x00581966);
    /* 00581966: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0058196d: jmp 0x581978 */ goto L_00581978;
L_0058196f:; BB(0x0058196f);
    /* 0058196f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581972: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581975: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00581978:; BB(0x00581978);
    /* 00581978: cmp dword ptr [ebp - 0x10], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058197c: jge 0x581aad */ if ((fS==fO)) goto L_00581aad;
L_00581982:; BB(0x00581982);
    /* 00581982: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581985: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058198b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058198e: lea ecx, [eax + edx + 0x178] */ r_ecx = (u32)(r_eax+r_edx+0x178u);
    /* 00581995: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581998: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058199b: cmp dword ptr [ecx + edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005819a0: je 0x581aa8 */ if (fZ) goto L_00581aa8;
L_005819a6:; BB(0x005819a6);
    /* 005819a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005819a9: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005819af: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005819b2: lea edx, [ecx + eax + 0x178] */ r_edx = (u32)(r_ecx+r_eax+0x178u);
    /* 005819b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005819bc: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005819bf: movsx ecx, byte ptr [edx + eax + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x4u));
    /* 005819c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005819c6: jne 0x581aa8 */ if (!fZ) goto L_00581aa8;
L_005819cc:; BB(0x005819cc);
    /* 005819cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005819cf: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005819d2: mov ecx, dword ptr [eax + edx*4 + 0x3a08] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3a08u));
    /* 005819d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005819dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005819df: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005819e2: mov dword ptr [eax + edx*4 + 0x3a08], ecx */ W32((u32)(r_eax+r_edx*4+0x3a08u), r_ecx);
    /* 005819e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005819ec: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005819f2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005819f5: lea eax, [edx + ecx + 0x178] */ r_eax = (u32)(r_edx+r_ecx+0x178u);
    /* 005819fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005819ff: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581a02: mov edx, dword ptr [eax + ecx + 0x1c] */ r_edx = R32((u32)(r_eax+r_ecx+0x1cu));
    /* 00581a06: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00581a09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581a0c: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581a12: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581a15: lea edx, [ecx + eax + 0x178] */ r_edx = (u32)(r_ecx+r_eax+0x178u);
    /* 00581a1c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581a1f: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581a22: movsx ecx, byte ptr [edx + eax + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x2u));
    /* 00581a27: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00581a2a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00581a2d: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581a30: jl 0x581a41 */ if ((fS!=fO)) goto L_00581a41;
L_00581a32:; BB(0x00581a32);
    /* 00581a32: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00581a35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00581a38: lea edx, [ecx + eax - 1] */ r_edx = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 00581a3c: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581a3f: jle 0x581a65 */ if ((fZ||fS!=fO)) goto L_00581a65;
L_00581a41:; BB(0x00581a41);
    /* 00581a41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00581a44: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581a49: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581a4c: jl 0x581aa8 */ if ((fS!=fO)) goto L_00581aa8;
L_00581a4e:; BB(0x00581a4e);
    /* 00581a4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00581a51: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581a57: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00581a5a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00581a5d: lea edx, [eax + edx - 1] */ r_edx = (u32)(r_eax+r_edx+0xffffffffu);
    /* 00581a61: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581a63: jg 0x581aa8 */ if ((!fZ&&fS==fO)) goto L_00581aa8;
L_00581a65:; BB(0x00581a65);
    /* 00581a65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581a68: imul eax, eax, 0x190 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x190u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581a6e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581a71: lea edx, [ecx + eax + 0x3a28] */ r_edx = (u32)(r_ecx+r_eax+0x3a28u);
    /* 00581a78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581a7b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581a7e: mov eax, dword ptr [ecx + eax*4 + 0x3a18] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x3a18u));
    /* 00581a85: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00581a88: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 00581a8b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581a8e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581a91: mov ecx, dword ptr [eax + edx*4 + 0x3a18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3a18u));
    /* 00581a98: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581a9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581a9e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581aa1: mov dword ptr [eax + edx*4 + 0x3a18], ecx */ W32((u32)(r_eax+r_edx*4+0x3a18u), r_ecx);
L_00581aa8:; BB(0x00581aa8);
    /* 00581aa8: jmp 0x58196f */ goto L_0058196f;
L_00581aad:; BB(0x00581aad);
    /* 00581aad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581ab0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581ab3: mov eax, dword ptr [edx + ecx*4 + 0x3a18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3a18u));
    /* 00581aba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581abb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581abe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581abf: push 0x6cc10c */ { u32 v = 0x6cc10cu; r_esp -= 4; W32(r_esp, v); }
    /* 00581ac4: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x581ac9u); f_0062fde0();
    /* 00581ac9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581acc: jmp 0x58194b */ goto L_0058194b;
L_00581ad1:; BB(0x00581ad1);
    /* 00581ad1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581ad4: mov dword ptr [edx + 0x4078], 0 */ W32((u32)(r_edx+0x4078u), 0x0u);
    /* 00581ade: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00581ae5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00581aec: jmp 0x581af7 */ goto L_00581af7;
L_00581aee:; BB(0x00581aee);
    /* 00581aee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581af1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581af4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00581af7:; BB(0x00581af7);
    /* 00581af7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581afb: jge 0x581b30 */ if ((fS==fO)) goto L_00581b30;
L_00581afd:; BB(0x00581afd);
    /* 00581afd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581b00: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b03: cmp dword ptr [edx + ecx*4 + 0x3a18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581b0b: je 0x581b2e */ if (fZ) goto L_00581b2e;
L_00581b0d:; BB(0x00581b0d);
    /* 00581b0d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b10: mov ecx, dword ptr [eax + 0x4078] */ r_ecx = R32((u32)(r_eax+0x4078u));
    /* 00581b16: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581b19: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b1c: mov dword ptr [edx + 0x4078], ecx */ W32((u32)(r_edx+0x4078u), r_ecx);
    /* 00581b22: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581b26: jne 0x581b2e */ if (!fZ) goto L_00581b2e;
L_00581b28:; BB(0x00581b28);
    /* 00581b28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00581b2b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00581b2e:; BB(0x00581b2e);
    /* 00581b2e: jmp 0x581aee */ goto L_00581aee;
L_00581b30:; BB(0x00581b30);
    /* 00581b30: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b33: cmp dword ptr [ecx + 0x4078], 0 */ {  u32 a = R32((u32)(r_ecx+0x4078u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581b3a: je 0x581b5a */ if (fZ) goto L_00581b5a;
L_00581b3c:; BB(0x00581b3c);
    /* 00581b3c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00581b3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581b40: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b43: call 0x581610 */ r_esp -= 4; W32(r_esp, 0x581b48u); f_00581610();
    /* 00581b48: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b4b: call 0x581b70 */ r_esp -= 4; W32(r_esp, 0x581b50u); f_00581b70();
    /* 00581b50: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b53: call 0x5822e0 */ r_esp -= 4; W32(r_esp, 0x581b58u); f_005822e0();
    /* 00581b58: jmp 0x581b67 */ goto L_00581b67;
L_00581b5a:; BB(0x00581b5a);
    /* 00581b5a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581b5f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581b62: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00581b65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581b67u); call_ind(t); }
L_00581b67:; BB(0x00581b67);
    /* 00581b67: mov esp, ebp */ r_esp = r_ebp;
    /* 00581b69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00581b6a: ret  */ FN_RET(0x00581670); r_esp += 4; return;
}

void f_00581b70(void) /* sub_581B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00581b70);
    /* 00581b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00581b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00581b73: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00581b79: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00581b7e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00581b80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00581b83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00581b84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00581b85: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00581b8b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581b91: mov ecx, dword ptr [eax + 0x407c] */ r_ecx = R32((u32)(r_eax+0x407cu));
    /* 00581b97: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00581b9a: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581ba0: lea eax, [edx + ecx + 0x39b8] */ r_eax = (u32)(r_edx+r_ecx+0x39b8u);
    /* 00581ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581ba8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581bae: mov edx, dword ptr [ecx + 0x4080] */ r_edx = R32((u32)(r_ecx+0x4080u));
    /* 00581bb4: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581bba: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 00581bc0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581bc2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00581bc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581bcau); call_ind(t); }
    /* 00581bca: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581bd0: mov edx, dword ptr [ecx + 0x4080] */ r_edx = R32((u32)(r_ecx+0x4080u));
    /* 00581bd6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581bdc: mov ecx, dword ptr [eax + 0x4080] */ r_ecx = R32((u32)(r_eax+0x4080u));
    /* 00581be2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581be4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581be7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581be9u); call_ind(t); }
    /* 00581be9: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581bef: call 0x582410 */ r_esp -= 4; W32(r_esp, 0x581bf4u); f_00582410();
    /* 00581bf4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581bfa: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 00581c00: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c06: cmp dword ptr [eax + edx*4 + 0x3a18], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x3a18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581c0e: jne 0x581c15 */ if (!fZ) goto L_00581c15;
L_00581c10:; BB(0x00581c10);
    /* 00581c10: jmp 0x58214a */ goto L_0058214a;
L_00581c15:; BB(0x00581c15);
    /* 00581c15: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c1b: mov edx, dword ptr [ecx + 0x407c] */ r_edx = R32((u32)(r_ecx+0x407cu));
    /* 00581c21: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c27: mov ecx, dword ptr [eax + edx*4 + 0x39f8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x39f8u));
    /* 00581c2e: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00581c31: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c37: mov eax, dword ptr [edx + 0x407c] */ r_eax = R32((u32)(r_edx+0x407cu));
    /* 00581c3d: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581c43: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c49: lea esi, [ecx + eax + 0x178] */ r_esi = (u32)(r_ecx+r_eax+0x178u);
    /* 00581c50: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c56: mov eax, dword ptr [edx + 0x407c] */ r_eax = R32((u32)(r_edx+0x407cu));
    /* 00581c5c: imul eax, eax, 0x190 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x190u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581c62: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581c68: lea edx, [ecx + eax + 0x3a28] */ r_edx = (u32)(r_ecx+r_eax+0x3a28u);
    /* 00581c6f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00581c72: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00581c75: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581c78: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00581c7a: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00581c7f: lea edi, [ebp - 0x28] */ r_edi = (u32)(r_ebp+0xffffffd8u);
    /* 00581c82: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00581c84: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00581c87: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00581c8a: movsx eax, byte ptr [ebp - 0x26] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdau));
    /* 00581c8e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00581c91: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00581c94: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00581c97: lea eax, [edx + ecx - 1] */ r_eax = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 00581c9b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00581c9e: cmp dword ptr [ebp - 0x30], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581ca5: jle 0x581cb3 */ if ((fZ||fS!=fO)) goto L_00581cb3;
L_00581ca7:; BB(0x00581ca7);
    /* 00581ca7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00581caa: sub ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00581cb0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00581cb3:; BB(0x00581cb3);
    /* 00581cb3: cmp dword ptr [ebp - 0x3c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581cb7: jle 0x581cd5 */ if ((fZ||fS!=fO)) goto L_00581cd5;
L_00581cb9:; BB(0x00581cb9);
    /* 00581cb9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00581cbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581cbd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00581cc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581cc1: push 0x6cc144 */ { u32 v = 0x6cc144u; r_esp -= 4; W32(r_esp, v); }
    /* 00581cc6: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00581cc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581cca: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x581cd0u); call_ind(t); }
    /* 00581cd0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581cd3: jmp 0x581ceb */ goto L_00581ceb;
L_00581cd5:; BB(0x00581cd5);
    /* 00581cd5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00581cd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581cd9: push 0x6cc13c */ { u32 v = 0x6cc13cu; r_esp -= 4; W32(r_esp, v); }
    /* 00581cde: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00581ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581ce2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x581ce8u); call_ind(t); }
    /* 00581ce8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00581ceb:; BB(0x00581ceb);
    /* 00581ceb: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00581cee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581cef: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581cf5: mov eax, dword ptr [edx + 0x4084] */ r_eax = R32((u32)(r_edx+0x4084u));
    /* 00581cfb: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581d01: mov ecx, dword ptr [ecx + 0x4084] */ r_ecx = R32((u32)(r_ecx+0x4084u));
    /* 00581d07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581d09: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00581d0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581d11u); call_ind(t); }
    /* 00581d11: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581d17: mov edx, dword ptr [ecx + 0x4084] */ r_edx = R32((u32)(r_ecx+0x4084u));
    /* 00581d1d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581d23: mov ecx, dword ptr [eax + 0x4084] */ r_ecx = R32((u32)(r_eax+0x4084u));
    /* 00581d29: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581d2b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581d2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581d30u); call_ind(t); }
    /* 00581d30: movsx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 00581d34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581d36: je 0x581d57 */ if (fZ) goto L_00581d57;
L_00581d38:; BB(0x00581d38);
    /* 00581d38: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581d3e: mov eax, dword ptr [edx + 0x4318] */ r_eax = R32((u32)(r_edx+0x4318u));
    /* 00581d44: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581d4a: mov ecx, dword ptr [ecx + 0x4318] */ r_ecx = R32((u32)(r_ecx+0x4318u));
    /* 00581d50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581d52: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581d55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581d57u); call_ind(t); }
L_00581d57:; BB(0x00581d57);
    /* 00581d57: movsx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd8u));
    /* 00581d5b: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581d5e: jg 0x581e03 */ if ((!fZ&&fS==fO)) goto L_00581e03;
L_00581d64:; BB(0x00581d64);
    /* 00581d64: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00581d6e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00581d75: jmp 0x581d80 */ goto L_00581d80;
L_00581d77:; BB(0x00581d77);
    /* 00581d77: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581d7a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581d7d: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_00581d80:; BB(0x00581d80);
    /* 00581d80: cmp dword ptr [ebp - 0x34], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581d84: jge 0x581da3 */ if ((fS==fO)) goto L_00581da3;
L_00581d86:; BB(0x00581d86);
    /* 00581d86: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581d89: movsx ecx, byte ptr [ebp + eax - 0x23] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xffffffddu));
    /* 00581d8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581d90: je 0x581da1 */ if (fZ) goto L_00581da1;
L_00581d92:; BB(0x00581d92);
    /* 00581d92: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00581d98: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00581d9b: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
L_00581da1:; BB(0x00581da1);
    /* 00581da1: jmp 0x581d77 */ goto L_00581d77;
L_00581da3:; BB(0x00581da3);
    /* 00581da3: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00581da9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581daa: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00581daf: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00581db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581db3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x581db9u); call_ind(t); }
    /* 00581db9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581dbc: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 00581dbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581dc0: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581dc6: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 00581dcc: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581dd2: mov eax, dword ptr [edx + 0x4088] */ r_eax = R32((u32)(r_edx+0x4088u));
    /* 00581dd8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00581dda: mov ecx, eax */ r_ecx = r_eax;
    /* 00581ddc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00581de2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581de4u); call_ind(t); }
    /* 00581de4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581dea: mov edx, dword ptr [ecx + 0x4088] */ r_edx = R32((u32)(r_ecx+0x4088u));
    /* 00581df0: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581df6: mov ecx, dword ptr [eax + 0x4088] */ r_ecx = R32((u32)(r_eax+0x4088u));
    /* 00581dfc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581dfe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581e01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581e03u); call_ind(t); }
L_00581e03:; BB(0x00581e03);
    /* 00581e03: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00581e06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581e07: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00581e0c: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 00581e0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581e10: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x581e16u); call_ind(t); }
    /* 00581e16: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581e19: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00581e1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581e1d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581e23: mov edx, dword ptr [ecx + 0x408c] */ r_edx = R32((u32)(r_ecx+0x408cu));
    /* 00581e29: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581e2f: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 00581e35: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581e37: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00581e3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581e3fu); call_ind(t); }
    /* 00581e3f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581e45: mov edx, dword ptr [ecx + 0x408c] */ r_edx = R32((u32)(r_ecx+0x408cu));
    /* 00581e4b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581e51: mov ecx, dword ptr [eax + 0x408c] */ r_ecx = R32((u32)(r_eax+0x408cu));
    /* 00581e57: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581e59: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581e5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581e5eu); call_ind(t); }
    /* 00581e5e: movsx ecx, byte ptr [ebp - 0x27] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd9u));
    /* 00581e62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581e63: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 00581e68: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 00581e6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581e6c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x581e72u); call_ind(t); }
    /* 00581e72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581e75: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00581e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581e79: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581e7f: mov edx, dword ptr [ecx + 0x4090] */ r_edx = R32((u32)(r_ecx+0x4090u));
    /* 00581e85: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581e8b: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 00581e91: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581e93: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00581e99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581e9bu); call_ind(t); }
    /* 00581e9b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581ea1: mov edx, dword ptr [ecx + 0x4090] */ r_edx = R32((u32)(r_ecx+0x4090u));
    /* 00581ea7: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581ead: mov ecx, dword ptr [eax + 0x4090] */ r_ecx = R32((u32)(r_eax+0x4090u));
    /* 00581eb3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581eb5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581eb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581ebau); call_ind(t); }
    /* 00581eba: movsx ecx, byte ptr [ebp - 0x27] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd9u));
    /* 00581ebe: imul ecx, dword ptr [ebp - 0x3c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffc4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00581ec2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00581ec3: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 00581ec8: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 00581ecb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00581ecc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x581ed2u); call_ind(t); }
    /* 00581ed2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00581ed5: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00581ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00581ed9: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581edf: mov edx, dword ptr [ecx + 0x4094] */ r_edx = R32((u32)(r_ecx+0x4094u));
    /* 00581ee5: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581eeb: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 00581ef1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581ef3: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00581ef9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581efbu); call_ind(t); }
    /* 00581efb: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581f01: mov edx, dword ptr [ecx + 0x4094] */ r_edx = R32((u32)(r_ecx+0x4094u));
    /* 00581f07: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581f0d: mov ecx, dword ptr [eax + 0x4094] */ r_ecx = R32((u32)(r_eax+0x4094u));
    /* 00581f13: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581f15: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581f18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581f1au); call_ind(t); }
    /* 00581f1a: movsx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd8u));
    /* 00581f1e: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00581f24: cmp dword ptr [ebp - 0x8c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00581f2b: ja 0x58214a */ if ((!fC&&!fZ)) goto L_0058214a;
L_00581f31:; BB(0x00581f31);
    /* 00581f31: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00581f37: jmp dword ptr [edx*4 + 0x58215c] */ { u32 t = R32((u32)(r_edx*4+0x58215cu)); switch (t) { case 0x581f3eu: goto L_00581f3e; case 0x581f9au: goto L_00581f9a; case 0x5820c2u: goto L_005820c2; case 0x582107u: goto L_00582107; default: UNSUP(0x00581f37, "jump table entry is not a known target"); } }
L_00581f3e:; BB(0x00581f3e);
    /* 00581f3e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00581f45: jmp 0x581f50 */ goto L_00581f50;
L_00581f47:; BB(0x00581f47);
    /* 00581f47: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581f4a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00581f4d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00581f50:; BB(0x00581f50);
    /* 00581f50: cmp dword ptr [ebp - 0x34], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581f54: jge 0x581f95 */ if ((fS==fO)) goto L_00581f95;
L_00581f56:; BB(0x00581f56);
    /* 00581f56: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581f59: movsx edx, byte ptr [ebp + ecx - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xffffffddu));
    /* 00581f5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00581f60: je 0x581f93 */ if (fZ) goto L_00581f93;
L_00581f62:; BB(0x00581f62);
    /* 00581f62: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00581f65: movsx ecx, byte ptr [ebp + eax - 0x23] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xffffffddu));
    /* 00581f6a: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581f70: mov eax, dword ptr [edx + ecx*4 + 0x4094] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4094u));
    /* 00581f77: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581f7a: movsx edx, byte ptr [ebp + ecx - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_ecx+0xffffffddu));
    /* 00581f7f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581f85: mov ecx, dword ptr [ecx + edx*4 + 0x4094] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x4094u));
    /* 00581f8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00581f8e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581f91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581f93u); call_ind(t); }
L_00581f93:; BB(0x00581f93);
    /* 00581f93: jmp 0x581f47 */ goto L_00581f47;
L_00581f95:; BB(0x00581f95);
    /* 00581f95: jmp 0x58214a */ goto L_0058214a;
L_00581f9a:; BB(0x00581f9a);
    /* 00581f9a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00581f9c: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581fa2: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 00581fa8: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581fae: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 00581fb4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581fb6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00581fbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581fbeu); call_ind(t); }
    /* 00581fbe: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00581fc4: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 00581fca: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581fd0: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 00581fd6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00581fd8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00581fdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x581fddu); call_ind(t); }
    /* 00581fdd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00581fe4: jmp 0x581fef */ goto L_00581fef;
L_00581fe6:; BB(0x00581fe6);
    /* 00581fe6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581fe9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00581fec: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00581fef:; BB(0x00581fef);
    /* 00581fef: cmp dword ptr [ebp - 0x34], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00581ff3: jge 0x582047 */ if ((fS==fO)) goto L_00582047;
L_00581ff5:; BB(0x00581ff5);
    /* 00581ff5: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00581ff8: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 00581ffe: mov ecx, dword ptr [eax + edx*4 + 0x4098] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 00582005: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00582008: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0058200e: mov edx, dword ptr [eax + edx*4 + 0x4098] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 00582015: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00582017: mov ecx, edx */ r_ecx = r_edx;
    /* 00582019: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0058201c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58201eu); call_ind(t); }
    /* 0058201e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00582021: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00582027: mov edx, dword ptr [ecx + eax*4 + 0x41b0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x41b0u));
    /* 0058202e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00582031: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00582037: mov ecx, dword ptr [ecx + eax*4 + 0x41b0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x41b0u));
    /* 0058203e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582040: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00582043: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582045u); call_ind(t); }
    /* 00582045: jmp 0x581fe6 */ goto L_00581fe6;
L_00582047:; BB(0x00582047);
    /* 00582047: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0058204e: jmp 0x582059 */ goto L_00582059;
L_00582050:; BB(0x00582050);
    /* 00582050: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00582053: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00582056: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00582059:; BB(0x00582059);
    /* 00582059: cmp dword ptr [ebp - 0x34], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058205d: jge 0x5820bd */ if ((fS==fO)) goto L_005820bd;
L_0058205f:; BB(0x0058205f);
    /* 0058205f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00582062: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00582065: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0058206b: mov ecx, dword ptr [eax + edx*4 + 0x4098] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 00582072: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00582075: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00582078: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0058207e: mov edx, dword ptr [eax + edx*4 + 0x4098] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4098u));
    /* 00582085: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00582087: mov ecx, edx */ r_ecx = r_edx;
    /* 00582089: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0058208c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58208eu); call_ind(t); }
    /* 0058208e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00582091: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00582094: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0058209a: mov edx, dword ptr [ecx + eax*4 + 0x40bc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x40bcu));
    /* 005820a1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005820a4: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005820a7: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005820ad: mov ecx, dword ptr [ecx + eax*4 + 0x40bc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x40bcu));
    /* 005820b4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005820b6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005820b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5820bbu); call_ind(t); }
    /* 005820bb: jmp 0x582050 */ goto L_00582050;
L_005820bd:; BB(0x005820bd);
    /* 005820bd: jmp 0x58214a */ goto L_0058214a;
L_005820c2:; BB(0x005820c2);
    /* 005820c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005820c4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005820ca: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 005820d0: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005820d6: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 005820dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005820de: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005820e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5820e6u); call_ind(t); }
    /* 005820e6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005820ec: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 005820f2: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005820f8: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 005820fe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582100: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00582103: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582105u); call_ind(t); }
    /* 00582105: jmp 0x58214a */ goto L_0058214a;
L_00582107:; BB(0x00582107);
    /* 00582107: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582109: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0058210f: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 00582115: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0058211b: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 00582121: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582123: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00582129: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58212bu); call_ind(t); }
    /* 0058212b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00582131: mov edx, dword ptr [ecx + 0x431c] */ r_edx = R32((u32)(r_ecx+0x431cu));
    /* 00582137: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0058213d: mov ecx, dword ptr [eax + 0x431c] */ r_ecx = R32((u32)(r_eax+0x431cu));
    /* 00582143: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582145: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00582148: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58214au); call_ind(t); }
L_0058214a:; BB(0x0058214a);
    /* 0058214a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058214b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058214c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058214f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00582151: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x582156u); f_00686d72();
    /* 00582156: mov esp, ebp */ r_esp = r_ebp;
    /* 00582158: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582159: ret  */ FN_RET(0x00581b70); r_esp += 4; return;
}

