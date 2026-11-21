#include "protos.h"

void f_005b5010(void) /* sub_5B5010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5010);
    /* 005b5010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5011: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5017: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b501a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b5020: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b5023: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5026: movsx eax, byte ptr [ecx + eax + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x68u));
    /* 005b502b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b502d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b502e: ret 8 */ FN_RET(0x005b5010); r_esp += 12; return;
}

void f_005b5040(void) /* sub_5B5040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5040);
    /* 005b5040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5041: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5043: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5046: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b5049: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b504d: jne 0x5b505e */ if (!fZ) goto L_005b505e;
L_005b504f:; BB(0x005b504f);
    /* 005b504f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5053: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5056: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b505bu); f_005b4e50();
    /* 005b505b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b505e:; BB(0x005b505e);
    /* 005b505e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b5065: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b5068: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5069: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b506c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b506d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5070: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b5075u); f_005b5830();
    /* 005b5075: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b5078: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b507f: jmp 0x5b508a */ goto L_005b508a;
L_005b5081:; BB(0x005b5081);
    /* 005b5081: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5084: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b5087: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b508a:; BB(0x005b508a);
    /* 005b508a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b508d: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5090: jge 0x5b50c1 */ if ((fS==fO)) goto L_005b50c1;
L_005b5092:; BB(0x005b5092);
    /* 005b5092: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5096: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b5099: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b509a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b509d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b509e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b50a1: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b50a6u); f_005b5f60();
    /* 005b50a6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b50a9: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b50ad: jne 0x5b50b6 */ if (!fZ) goto L_005b50b6;
L_005b50af:; BB(0x005b50af);
    /* 005b50af: mov dword ptr [ebp - 0x10], 0xb */ W32((u32)(r_ebp+0xfffffff0u), 0xbu);
L_005b50b6:; BB(0x005b50b6);
    /* 005b50b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b50b9: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b50bc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b50bf: jmp 0x5b5081 */ goto L_005b5081;
L_005b50c1:; BB(0x005b50c1);
    /* 005b50c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b50c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b50c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b50c7: ret 8 */ FN_RET(0x005b5040); r_esp += 12; return;
}

void f_005b5130(void) /* sub_5B5130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5130);
    /* 005b5130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5131: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5133: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5136: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b5139: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b513c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b513f: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b5146: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b5149: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b514c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b514f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5152: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b5156: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b5158: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b515b: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005b515e: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005b5162: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b5165: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b5168: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b516a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b516d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b516e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5171: call 0x5b60a0 */ r_esp -= 4; W32(r_esp, 0x5b5176u); f_005b60a0();
    /* 005b5176: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b5179: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b517b: je 0x5b5188 */ if (fZ) goto L_005b5188;
L_005b517d:; BB(0x005b517d);
    /* 005b517d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5180: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005b5181: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b5183: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b5185: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005b5188:; BB(0x005b5188);
    /* 005b5188: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b518b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b518e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005b5190: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5193: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005b5196: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5199: mov esp, ebp */ r_esp = r_ebp;
    /* 005b519b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b519c: ret 8 */ FN_RET(0x005b5130); r_esp += 12; return;
}

void f_005b51a0(void) /* sub_5B51A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b51a0);
    /* 005b51a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b51a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b51a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b51a6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b51a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b51ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b51af: mov edx, dword ptr [ecx + eax*4 + 0x580] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b51b6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005b51b9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b51bc: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b51bf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b51c2: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 005b51c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b51c8: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b51cb: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005b51ce: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005b51d2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b51d5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005b51d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b51da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b51dc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5b51e1u); f_0064c8a0();
    /* 005b51e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b51e4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b51e7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005b51ea: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b51ed: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b51f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b51f3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b51f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b51f9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005b51fa: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b51fc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b51fe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b5201: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5204: and edx, 0x80000001 */ {  u32 a = r_edx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 005b520a: jns 0x5b5211 */ if (!fS) goto L_005b5211;
L_005b520c:; BB(0x005b520c);
    /* 005b520c: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b520d: or edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b5210: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005b5211:; BB(0x005b5211);
    /* 005b5211: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5214: jne 0x5b521d */ if (!fZ) goto L_005b521d;
L_005b5216:; BB(0x005b5216);
    /* 005b5216: mov dword ptr [ebp - 0xc], 0x32 */ W32((u32)(r_ebp+0xfffffff4u), 0x32u);
L_005b521d:; BB(0x005b521d);
    /* 005b521d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5220: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5223: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005b5225: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5228: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005b522b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b522e: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5231: ret 8 */ FN_RET(0x005b51a0); r_esp += 12; return;
}

void f_005b5240(void) /* sub_5B5240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5240);
    /* 005b5240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5241: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5247: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b524a: mov eax, dword ptr [eax + 0x5d4] */ r_eax = R32((u32)(r_eax+0x5d4u));
    /* 005b5250: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5252: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5253: ret  */ FN_RET(0x005b5240); r_esp += 4; return;
}

void f_005b5260(void) /* sub_5B5260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5260);
    /* 005b5260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5261: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5263: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5266: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b5269: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b526d: jne 0x5b527e */ if (!fZ) goto L_005b527e;
L_005b526f:; BB(0x005b526f);
    /* 005b526f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5273: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5276: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b527bu); f_005b4e50();
    /* 005b527b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b527e:; BB(0x005b527e);
    /* 005b527e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b5285: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b5288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5289: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b528c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b528d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b5290: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b5295u); f_005b5830();
    /* 005b5295: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b5298: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b529f: jmp 0x5b52aa */ goto L_005b52aa;
L_005b52a1:; BB(0x005b52a1);
    /* 005b52a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b52a4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b52a7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b52aa:; BB(0x005b52aa);
    /* 005b52aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b52ad: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b52b0: jge 0x5b52ce */ if ((fS==fO)) goto L_005b52ce;
L_005b52b2:; BB(0x005b52b2);
    /* 005b52b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b52b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b52b6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b52b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b52ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b52bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b52be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b52c1: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b52c6u); f_005b5f60();
    /* 005b52c6: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b52c9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b52cc: jmp 0x5b52a1 */ goto L_005b52a1;
L_005b52ce:; BB(0x005b52ce);
    /* 005b52ce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b52d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005b52d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b52d4: ret 8 */ FN_RET(0x005b5260); r_esp += 12; return;
}

void f_005b52e0(void) /* sub_5B52E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b52e0);
    /* 005b52e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b52e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b52e3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b52e6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b52e9: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 005b52f0: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b52f7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b52fe: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b5305: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 005b530c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b530e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b5311: call 0x5b5ff0 */ r_esp -= 4; W32(r_esp, 0x5b5316u); f_005b5ff0();
    /* 005b5316: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b5319: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005b5320: jmp 0x5b532b */ goto L_005b532b;
L_005b5322:; BB(0x005b5322);
    /* 005b5322: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b5325: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b5328: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005b532b:; BB(0x005b532b);
    /* 005b532b: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b532f: jge 0x5b5379 */ if ((fS==fO)) goto L_005b5379;
L_005b5331:; BB(0x005b5331);
    /* 005b5331: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b5334: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5338: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5339: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b533c: call 0x5b5ff0 */ r_esp -= 4; W32(r_esp, 0x5b5341u); f_005b5ff0();
    /* 005b5341: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5344: jne 0x5b5377 */ if (!fZ) goto L_005b5377;
L_005b5346:; BB(0x005b5346);
    /* 005b5346: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b5349: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b534d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b534e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b5353u); f_005dcb00();
    /* 005b5353: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5356: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b5359: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b535c: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005b5362: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 005b5365: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005b5369: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b536b: je 0x5b5377 */ if (fZ) goto L_005b5377;
L_005b536d:; BB(0x005b536d);
    /* 005b536d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b5370: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b5374: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b5377:; BB(0x005b5377);
    /* 005b5377: jmp 0x5b5322 */ goto L_005b5322;
L_005b5379:; BB(0x005b5379);
    /* 005b5379: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b537c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b537e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b537f: ret  */ FN_RET(0x005b52e0); r_esp += 4; return;
}

void f_005b5380(void) /* sub_5B5380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5380);
    /* 005b5380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5381: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5383: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5386: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b5389: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b5390: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5397: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b539e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b53a5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b53ac: jmp 0x5b53b7 */ goto L_005b53b7;
L_005b53ae:; BB(0x005b53ae);
    /* 005b53ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b53b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b53b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b53b7:; BB(0x005b53b7);
    /* 005b53b7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b53bb: jge 0x5b544d */ if ((fS==fO)) goto L_005b544d;
L_005b53c1:; BB(0x005b53c1);
    /* 005b53c1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b53c4: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b53c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b53c9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b53ceu); f_005dcb00();
    /* 005b53ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b53d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b53d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b53d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b53dcu); f_0063aac0();
    /* 005b53dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b53de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b53e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b53e3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b53e7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b53ea: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005b53ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b53ef: jne 0x5b5448 */ if (!fZ) goto L_005b5448;
L_005b53f1:; BB(0x005b53f1);
    /* 005b53f1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b53f4: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b53f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b53f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b53feu); f_005dcb00();
    /* 005b53fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5401: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b5404: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5407: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 005b540d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 005b5410: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005b5414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5416: jne 0x5b5448 */ if (!fZ) goto L_005b5448;
L_005b5418:; BB(0x005b5418);
    /* 005b5418: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b541b: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b541f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5420: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b5425u); f_005dcb00();
    /* 005b5425: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5428: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b542b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b542e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 005b5434: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 005b5437: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 005b543b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b543d: jne 0x5b5448 */ if (!fZ) goto L_005b5448;
L_005b543f:; BB(0x005b543f);
    /* 005b543f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5442: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5446: jmp 0x5b5450 */ goto L_005b5450;
L_005b5448:; BB(0x005b5448);
    /* 005b5448: jmp 0x5b53ae */ goto L_005b53ae;
L_005b544d:; BB(0x005b544d);
    /* 005b544d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b5450:; BB(0x005b5450);
    /* 005b5450: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5452: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5453: ret  */ FN_RET(0x005b5380); r_esp += 4; return;
}

void f_005b5460(void) /* sub_5B5460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5460);
    /* 005b5460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5461: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5463: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5466: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b5469: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b546c: call 0x5b6630 */ r_esp -= 4; W32(r_esp, 0x5b5471u); f_005b6630();
    /* 005b5471: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b5474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5476: je 0x5b549c */ if (fZ) goto L_005b549c;
L_005b5478:; BB(0x005b5478);
    /* 005b5478: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b547a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b547c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b547e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b5481: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b5486u); f_005b5f60();
    /* 005b5486: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5489: jne 0x5b549c */ if (!fZ) goto L_005b549c;
L_005b548b:; BB(0x005b548b);
    /* 005b548b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b548d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b548f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b5492: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b5497u); f_005b5830();
    /* 005b5497: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b549a: je 0x5b54a4 */ if (fZ) goto L_005b54a4;
L_005b549c:; BB(0x005b549c);
    /* 005b549c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b549f: jmp 0x5b557d */ goto L_005b557d;
L_005b54a4:; BB(0x005b54a4);
    /* 005b54a4: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b54ab: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b54b2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b54b9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b54c0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b54c7: jmp 0x5b54d2 */ goto L_005b54d2;
L_005b54c9:; BB(0x005b54c9);
    /* 005b54c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b54cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b54cf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005b54d2:; BB(0x005b54d2);
    /* 005b54d2: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b54d6: jge 0x5b557a */ if ((fS==fO)) goto L_005b557a;
L_005b54dc:; BB(0x005b54dc);
    /* 005b54dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b54df: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b54e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b54e4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b54e9u); f_005dcb00();
    /* 005b54e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b54ec: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b54ef: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b54f2: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005b54f8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005b54fb: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005b54ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5501: je 0x5b5563 */ if (fZ) goto L_005b5563;
L_005b5503:; BB(0x005b5503);
    /* 005b5503: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5506: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b550a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b550b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b550e: call 0x5b33e0 */ r_esp -= 4; W32(r_esp, 0x5b5513u); f_005b33e0();
    /* 005b5513: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b5516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5518: je 0x5b5563 */ if (fZ) goto L_005b5563;
L_005b551a:; BB(0x005b551a);
    /* 005b551a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b551d: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5521: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5522: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b5525: call 0x5b8520 */ r_esp -= 4; W32(r_esp, 0x5b552au); f_005b8520();
    /* 005b552a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b552d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b552f: jne 0x5b5563 */ if (!fZ) goto L_005b5563;
L_005b5531:; BB(0x005b5531);
    /* 005b5531: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5534: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5539: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b553eu); f_005dcb00();
    /* 005b553e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5541: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b5544: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5547: mov cl, byte ptr [eax + 0x4a2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a2u))) & 0xffu);
    /* 005b554d: mov byte ptr [ebp - 0x21], cl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_ecx);
    /* 005b5550: movzx edx, byte ptr [ebp - 0x21] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005b5554: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5556: jne 0x5b5563 */ if (!fZ) goto L_005b5563;
L_005b5558:; BB(0x005b5558);
    /* 005b5558: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b555b: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b555f: jmp 0x5b557d */ goto L_005b557d;
L_005b5563:; BB(0x005b5563);
    /* 005b5563: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5565: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5568: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b556c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b556d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b5570: call 0x5b73c0 */ r_esp -= 4; W32(r_esp, 0x5b5575u); f_005b73c0();
    /* 005b5575: jmp 0x5b54c9 */ goto L_005b54c9;
L_005b557a:; BB(0x005b557a);
    /* 005b557a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b557d:; BB(0x005b557d);
    /* 005b557d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b557f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5580: ret  */ FN_RET(0x005b5460); r_esp += 4; return;
}

void f_005b5590(void) /* sub_5B5590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5590);
    /* 005b5590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5591: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5593: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5596: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b5599: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b55a0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b55a7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b55ae: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b55b5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b55bc: jmp 0x5b55c7 */ goto L_005b55c7;
L_005b55be:; BB(0x005b55be);
    /* 005b55be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b55c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b55c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b55c7:; BB(0x005b55c7);
    /* 005b55c7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b55cb: jge 0x5b5616 */ if ((fS==fO)) goto L_005b5616;
L_005b55cd:; BB(0x005b55cd);
    /* 005b55cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b55d0: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b55d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b55d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b55d8: call 0x5b60c0 */ r_esp -= 4; W32(r_esp, 0x5b55ddu); f_005b60c0();
    /* 005b55dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b55e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b55e2: je 0x5b5614 */ if (fZ) goto L_005b5614;
L_005b55e4:; BB(0x005b55e4);
    /* 005b55e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b55e7: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b55eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b55ec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b55f1u); f_005dcb00();
    /* 005b55f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b55f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b55f7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b55fa: mov cl, byte ptr [eax + 0x4a2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a2u))) & 0xffu);
    /* 005b5600: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 005b5603: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005b5607: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5609: jne 0x5b5614 */ if (!fZ) goto L_005b5614;
L_005b560b:; BB(0x005b560b);
    /* 005b560b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b560e: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b5612: jmp 0x5b5619 */ goto L_005b5619;
L_005b5614:; BB(0x005b5614);
    /* 005b5614: jmp 0x5b55be */ goto L_005b55be;
L_005b5616:; BB(0x005b5616);
    /* 005b5616: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b5619:; BB(0x005b5619);
    /* 005b5619: mov esp, ebp */ r_esp = r_ebp;
    /* 005b561b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b561c: ret  */ FN_RET(0x005b5590); r_esp += 4; return;
}

void f_005b5620(void) /* sub_5B5620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5620);
    /* 005b5620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5621: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5623: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5626: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005b5629: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b5630: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5637: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b563e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b5645: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b564c: jmp 0x5b5657 */ goto L_005b5657;
L_005b564e:; BB(0x005b564e);
    /* 005b564e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5651: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b5654: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b5657:; BB(0x005b5657);
    /* 005b5657: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b565b: jge 0x5b56aa */ if ((fS==fO)) goto L_005b56aa;
L_005b565d:; BB(0x005b565d);
    /* 005b565d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005b5664: jmp 0x5b566f */ goto L_005b566f;
L_005b5666:; BB(0x005b5666);
    /* 005b5666: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5669: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b566c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005b566f:; BB(0x005b566f);
    /* 005b566f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5672: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b5676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5677: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b567a: call 0x5b58f0 */ r_esp -= 4; W32(r_esp, 0x5b567fu); f_005b58f0();
    /* 005b567f: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5682: jge 0x5b56a8 */ if ((fS==fO)) goto L_005b56a8;
L_005b5684:; BB(0x005b5684);
    /* 005b5684: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5687: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5688: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b568b: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b568f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5690: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b5693: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5b5698u); f_005b5010();
    /* 005b5698: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b569b: jne 0x5b56a6 */ if (!fZ) goto L_005b56a6;
L_005b569d:; BB(0x005b569d);
    /* 005b569d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b56a0: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b56a4: jmp 0x5b56ad */ goto L_005b56ad;
L_005b56a6:; BB(0x005b56a6);
    /* 005b56a6: jmp 0x5b5666 */ goto L_005b5666;
L_005b56a8:; BB(0x005b56a8);
    /* 005b56a8: jmp 0x5b564e */ goto L_005b564e;
L_005b56aa:; BB(0x005b56aa);
    /* 005b56aa: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b56ad:; BB(0x005b56ad);
    /* 005b56ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005b56af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b56b0: ret  */ FN_RET(0x005b5620); r_esp += 4; return;
}

void f_005b56c0(void) /* sub_5B56C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b56c0);
    /* 005b56c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b56c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b56c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b56c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b56c9: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b56d0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b56d7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b56de: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b56e5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b56ec: jmp 0x5b56f7 */ goto L_005b56f7;
L_005b56ee:; BB(0x005b56ee);
    /* 005b56ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b56f1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b56f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b56f7:; BB(0x005b56f7);
    /* 005b56f7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b56fb: jge 0x5b571e */ if ((fS==fO)) goto L_005b571e;
L_005b56fd:; BB(0x005b56fd);
    /* 005b56fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5700: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5704: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5707: movzx ecx, byte ptr [eax + edx + 0x674] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x674u));
    /* 005b570f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5711: jne 0x5b571c */ if (!fZ) goto L_005b571c;
L_005b5713:; BB(0x005b5713);
    /* 005b5713: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5716: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b571a: jmp 0x5b5721 */ goto L_005b5721;
L_005b571c:; BB(0x005b571c);
    /* 005b571c: jmp 0x5b56ee */ goto L_005b56ee;
L_005b571e:; BB(0x005b571e);
    /* 005b571e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b5721:; BB(0x005b5721);
    /* 005b5721: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5723: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5724: ret  */ FN_RET(0x005b56c0); r_esp += 4; return;
}

void f_005b5730(void) /* sub_5B5730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5730);
    /* 005b5730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5731: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5733: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5736: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b5739: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b5740: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b5747: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b574e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b5755: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b575c: jmp 0x5b5767 */ goto L_005b5767;
L_005b575e:; BB(0x005b575e);
    /* 005b575e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5761: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b5764: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b5767:; BB(0x005b5767);
    /* 005b5767: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b576b: jge 0x5b57b4 */ if ((fS==fO)) goto L_005b57b4;
L_005b576d:; BB(0x005b576d);
    /* 005b576d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5770: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5774: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5775: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b577au); f_005dcb00();
    /* 005b577a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b577d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b5780: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5783: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 005b5789: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 005b578c: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005b5790: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5792: je 0x5b57b2 */ if (fZ) goto L_005b57b2;
L_005b5794:; BB(0x005b5794);
    /* 005b5794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5797: mov ecx, dword ptr [ebp + eax*4 - 0x10] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005b579b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b579c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b579f: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b57a4u); f_005b4e50();
    /* 005b57a4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b57a7: je 0x5b57b2 */ if (fZ) goto L_005b57b2;
L_005b57a9:; BB(0x005b57a9);
    /* 005b57a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b57ac: mov eax, dword ptr [ebp + edx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff0u));
    /* 005b57b0: jmp 0x5b57b7 */ goto L_005b57b7;
L_005b57b2:; BB(0x005b57b2);
    /* 005b57b2: jmp 0x5b575e */ goto L_005b575e;
L_005b57b4:; BB(0x005b57b4);
    /* 005b57b4: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b57b7:; BB(0x005b57b7);
    /* 005b57b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b57b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b57ba: ret  */ FN_RET(0x005b5730); r_esp += 4; return;
}

void f_005b57c0(void) /* sub_5B57C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b57c0);
    /* 005b57c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b57c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b57c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b57c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b57c9: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005b57d0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b57d7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005b57de: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b57e5: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b57ec: jmp 0x5b57f7 */ goto L_005b57f7;
L_005b57ee:; BB(0x005b57ee);
    /* 005b57ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b57f1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b57f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005b57f7:; BB(0x005b57f7);
    /* 005b57f7: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b57fb: jge 0x5b581f */ if ((fS==fO)) goto L_005b581f;
L_005b57fd:; BB(0x005b57fd);
    /* 005b57fd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5800: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b5804: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5805: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5808: call 0x5b6660 */ r_esp -= 4; W32(r_esp, 0x5b580du); f_005b6660();
    /* 005b580d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b5810: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5812: je 0x5b581d */ if (fZ) goto L_005b581d;
L_005b5814:; BB(0x005b5814);
    /* 005b5814: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5817: mov eax, dword ptr [ebp + ecx*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 005b581b: jmp 0x5b5822 */ goto L_005b5822;
L_005b581d:; BB(0x005b581d);
    /* 005b581d: jmp 0x5b57ee */ goto L_005b57ee;
L_005b581f:; BB(0x005b581f);
    /* 005b581f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005b5822:; BB(0x005b5822);
    /* 005b5822: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5825: ret  */ FN_RET(0x005b57c0); r_esp += 4; return;
}

void f_005b5830(void) /* sub_5B5830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5830);
    /* 005b5830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5831: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5833: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5836: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b5839: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b583d: jne 0x5b584e */ if (!fZ) goto L_005b584e;
L_005b583f:; BB(0x005b583f);
    /* 005b583f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5846: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b584bu); f_005b4e50();
    /* 005b584b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b584e:; BB(0x005b584e);
    /* 005b584e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b5855: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b585c: jmp 0x5b5867 */ goto L_005b5867;
L_005b585e:; BB(0x005b585e);
    /* 005b585e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5861: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5864: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005b5867:; BB(0x005b5867);
    /* 005b5867: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b586b: jge 0x5b5893 */ if ((fS==fO)) goto L_005b5893;
L_005b586d:; BB(0x005b586d);
    /* 005b586d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5870: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5871: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b5874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5875: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b5878: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5879: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b587c: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b5881u); f_005b5c60();
    /* 005b5881: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005b5884: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5886: je 0x5b5891 */ if (fZ) goto L_005b5891;
L_005b5888:; BB(0x005b5888);
    /* 005b5888: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b588b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b588e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b5891:; BB(0x005b5891);
    /* 005b5891: jmp 0x5b585e */ goto L_005b585e;
L_005b5893:; BB(0x005b5893);
    /* 005b5893: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5896: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5898: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5899: ret 8 */ FN_RET(0x005b5830); r_esp += 12; return;
}

void f_005b58a0(void) /* sub_5B58A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b58a0);
    /* 005b58a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b58a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b58a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b58a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b58a9: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b58af: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b58b4u); f_005da830();
    /* 005b58b4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b58b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b58b9: je 0x5b58cb */ if (fZ) goto L_005b58cb;
L_005b58bb:; BB(0x005b58bb);
    /* 005b58bb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b58c1: mov eax, dword ptr [ecx + 0x4ef4] */ r_eax = R32((u32)(r_ecx+0x4ef4u));
    /* 005b58c7: jmp 0x5b58e8 */ goto L_005b58e8;
L_005b58cb:; BB(0x005b58cb);
    /* 005b58cb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b58ce: mov eax, dword ptr [edx + 0x57c] */ r_eax = R32((u32)(r_edx+0x57cu));
    /* 005b58d4: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 005b58da: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b58dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b58e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005b58e1: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005b58e6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005b58e6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005b58e6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_005b58e8:; BB(0x005b58e8);
    /* 005b58e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b58ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b58eb: ret  */ FN_RET(0x005b58a0); r_esp += 4; return;
}

void f_005b58f0(void) /* sub_5B58F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b58f0);
    /* 005b58f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b58f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b58f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b58f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b58f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b5900: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b5907: jmp 0x5b5912 */ goto L_005b5912;
L_005b5909:; BB(0x005b5909);
    /* 005b5909: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b590c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b590f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005b5912:; BB(0x005b5912);
    /* 005b5912: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5916: jge 0x5b593c */ if ((fS==fO)) goto L_005b593c;
L_005b5918:; BB(0x005b5918);
    /* 005b5918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b591a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b591d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b591e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b5921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5922: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5925: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b592au); f_005b5c60();
    /* 005b592a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005b592d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b592f: je 0x5b593a */ if (fZ) goto L_005b593a;
L_005b5931:; BB(0x005b5931);
    /* 005b5931: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5934: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5937: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005b593a:; BB(0x005b593a);
    /* 005b593a: jmp 0x5b5909 */ goto L_005b5909;
L_005b593c:; BB(0x005b593c);
    /* 005b593c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b593f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5942: ret 4 */ FN_RET(0x005b58f0); r_esp += 8; return;
}

void f_005b5950(void) /* sub_5B5950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5950);
    /* 005b5950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5951: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5953: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5956: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b5959: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b595f: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b5964u); f_005da830();
    /* 005b5964: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b5967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5969: je 0x5b5971 */ if (fZ) goto L_005b5971;
L_005b596b:; BB(0x005b596b);
    /* 005b596b: mov al, 3 */ r_eax = (r_eax & 0xffffff00u) | ((0x3u) & 0xffu);
    /* 005b596d: jmp 0x5b5998 */ goto L_005b5998;
L_005b5971:; BB(0x005b5971);
    /* 005b5971: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 005b5978: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 005b597f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b5986: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5988: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b598b: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b5990u); f_005b5fb0();
    /* 005b5990: movsx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xau));
    /* 005b5994: mov al, byte ptr [ebp + ecx*4 - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+r_ecx*4+0xfffffff4u))) & 0xffu);
L_005b5998:; BB(0x005b5998);
    /* 005b5998: mov esp, ebp */ r_esp = r_ebp;
    /* 005b599a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b599b: ret  */ FN_RET(0x005b5950); r_esp += 4; return;
}

void f_005b5c30(void) /* sub_5B5C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5c30);
    /* 005b5c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c31: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5c37: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b5c3d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b5c42u); f_005da830();
    /* 005b5c42: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b5c45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5c47: je 0x5b5c4f */ if (fZ) goto L_005b5c4f;
L_005b5c49:; BB(0x005b5c49);
    /* 005b5c49: mov al, 0x50 */ r_eax = (r_eax & 0xffffff00u) | ((0x50u) & 0xffu);
    /* 005b5c4b: jmp 0x5b5c5c */ goto L_005b5c5c;
L_005b5c4f:; BB(0x005b5c4f);
    /* 005b5c4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5c54: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b5c59u); f_005b5fb0();
    /* 005b5c59: mov al, byte ptr [eax + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xcu))) & 0xffu);
L_005b5c5c:; BB(0x005b5c5c);
    /* 005b5c5c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5c5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5c5f: ret  */ FN_RET(0x005b5c30); r_esp += 4; return;
}

void f_005b5c60(void) /* sub_5B5C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5c60);
    /* 005b5c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5c67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5c6a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b5c70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5c73: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 005b5c77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b5c7a: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b5c7d: lea ecx, [edx + eax + 0x68] */ r_ecx = (u32)(r_edx+r_eax+0x68u);
    /* 005b5c81: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b5c84: mov ax, word ptr [ecx + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 005b5c88: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5c8b: ret 0xc */ FN_RET(0x005b5c60); r_esp += 16; return;
}

void f_005b5c90(void) /* sub_5B5C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5c90);
    /* 005b5c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c91: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5c97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b5c9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5c9d: mov eax, dword ptr [ecx + eax*4 + 0x5dc] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x5dcu));
    /* 005b5ca4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5ca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5ca7: ret 4 */ FN_RET(0x005b5c90); r_esp += 8; return;
}

void f_005b5cb0(void) /* sub_5B5CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5cb0);
    /* 005b5cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5cb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5cba: mov eax, dword ptr [eax + 0x5d8] */ r_eax = R32((u32)(r_eax+0x5d8u));
    /* 005b5cc0: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5cc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5cc3: ret  */ FN_RET(0x005b5cb0); r_esp += 4; return;
}

void f_005b5cd0(void) /* sub_5B5CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5cd0);
    /* 005b5cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5cd3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5cd6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b5cd9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b5ce0: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005b5ce7: jmp 0x5b5cf2 */ goto L_005b5cf2;
L_005b5ce9:; BB(0x005b5ce9);
    /* 005b5ce9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5cec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b5cef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005b5cf2:; BB(0x005b5cf2);
    /* 005b5cf2: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5cf6: jge 0x5b5d7d */ if ((fS==fO)) goto L_005b5d7d;
L_005b5cfc:; BB(0x005b5cfc);
    /* 005b5cfc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5cff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5d00: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b5d06: call 0x638ff0 */ r_esp -= 4; W32(r_esp, 0x5b5d0bu); f_00638ff0();
    /* 005b5d0b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b5d0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d10: jne 0x5b5d14 */ if (!fZ) goto L_005b5d14;
L_005b5d12:; BB(0x005b5d12);
    /* 005b5d12: jmp 0x5b5ce9 */ goto L_005b5ce9;
L_005b5d14:; BB(0x005b5d14);
    /* 005b5d14: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 005b5d18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5d1c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b5d1f: call 0x5b5c90 */ r_esp -= 4; W32(r_esp, 0x5b5d24u); f_005b5c90();
    /* 005b5d24: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b5d27: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d2b: je 0x5b5d35 */ if (fZ) goto L_005b5d35;
L_005b5d2d:; BB(0x005b5d2d);
    /* 005b5d2d: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d31: je 0x5b5d4d */ if (fZ) goto L_005b5d4d;
L_005b5d33:; BB(0x005b5d33);
    /* 005b5d33: jmp 0x5b5d59 */ goto L_005b5d59;
L_005b5d35:; BB(0x005b5d35);
    /* 005b5d35: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d39: jne 0x5b5d41 */ if (!fZ) goto L_005b5d41;
L_005b5d3b:; BB(0x005b5d3b);
    /* 005b5d3b: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005b5d3f: jmp 0x5b5d4b */ goto L_005b5d4b;
L_005b5d41:; BB(0x005b5d41);
    /* 005b5d41: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d45: jne 0x5b5d4b */ if (!fZ) goto L_005b5d4b;
L_005b5d47:; BB(0x005b5d47);
    /* 005b5d47: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_005b5d4b:; BB(0x005b5d4b);
    /* 005b5d4b: jmp 0x5b5d5d */ goto L_005b5d5d;
L_005b5d4d:; BB(0x005b5d4d);
    /* 005b5d4d: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d51: je 0x5b5d57 */ if (fZ) goto L_005b5d57;
L_005b5d53:; BB(0x005b5d53);
    /* 005b5d53: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_005b5d57:; BB(0x005b5d57);
    /* 005b5d57: jmp 0x5b5d5d */ goto L_005b5d5d;
L_005b5d59:; BB(0x005b5d59);
    /* 005b5d59: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_005b5d5d:; BB(0x005b5d5d);
    /* 005b5d5d: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005b5d61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d63: je 0x5b5d78 */ if (fZ) goto L_005b5d78;
L_005b5d65:; BB(0x005b5d65);
    /* 005b5d65: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5d68: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b5d6b: mov dword ptr [ebp + edx*4 - 0x10], eax */ W32((u32)(r_ebp+r_edx*4+0xfffffff0u), r_eax);
    /* 005b5d6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5d72: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b5d75: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005b5d78:; BB(0x005b5d78);
    /* 005b5d78: jmp 0x5b5ce9 */ goto L_005b5ce9;
L_005b5d7d:; BB(0x005b5d7d);
    /* 005b5d7d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5d81: jne 0x5b5d8a */ if (!fZ) goto L_005b5d8a;
L_005b5d83:; BB(0x005b5d83);
    /* 005b5d83: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b5d86: jmp 0x5b5d9f */ goto L_005b5d9f;
L_005b5d8a:; BB(0x005b5d8a);
    /* 005b5d8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b5d8d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b5d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5d91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b5d93: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5b5d98u); f_0062fc30();
    /* 005b5d98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5d9b: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
L_005b5d9f:; BB(0x005b5d9f);
    /* 005b5d9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5da1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5da2: ret 4 */ FN_RET(0x005b5cd0); r_esp += 8; return;
}

void f_005b5f60(void) /* sub_5B5F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5f60);
    /* 005b5f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f61: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5f63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5f66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b5f69: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005b5f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f6d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b5f70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f71: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b5f74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5f78: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5b5f7du); f_005b5c60();
    /* 005b5f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b5f7e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5b5f83u); f_00641280();
    /* 005b5f83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b5f86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b5f89: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b5f8d: jle 0x5b5f98 */ if ((fZ||fS!=fO)) goto L_005b5f98;
L_005b5f8f:; BB(0x005b5f8f);
    /* 005b5f8f: mov dword ptr [ebp - 0xc], 0xa */ W32((u32)(r_ebp+0xfffffff4u), 0xau);
    /* 005b5f96: jmp 0x5b5f9e */ goto L_005b5f9e;
L_005b5f98:; BB(0x005b5f98);
    /* 005b5f98: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b5f9b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005b5f9e:; BB(0x005b5f9e);
    /* 005b5f9e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b5fa1: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5fa4: ret 0xc */ FN_RET(0x005b5f60); r_esp += 16; return;
}

void f_005b5fb0(void) /* sub_5B5FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5fb0);
    /* 005b5fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b5fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b5fb7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b5fbb: jne 0x5b5fd5 */ if (!fZ) goto L_005b5fd5;
L_005b5fbd:; BB(0x005b5fbd);
    /* 005b5fbd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5fbf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b5fc5: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5b5fcau); f_006375b0();
    /* 005b5fca: mov ecx, eax */ r_ecx = r_eax;
    /* 005b5fcc: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5b5fd1u); f_0063aae0();
    /* 005b5fd1: jmp 0x5b5fea */ goto L_005b5fea;
L_005b5fd5:; BB(0x005b5fd5);
    /* 005b5fd5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b5fd7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005b5fdc: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005b5fdf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b5fe2: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 005b5fe5: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5b5feau); f_0063aae0();
L_005b5fea:; BB(0x005b5fea);
    /* 005b5fea: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5fec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5fed: ret 4 */ FN_RET(0x005b5fb0); r_esp += 8; return;
}

void f_005b5ff0(void) /* sub_5B5FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b5ff0);
    /* 005b5ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b5ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b5ff3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b5ff6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b5ff9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b6000: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b6007: jmp 0x5b6012 */ goto L_005b6012;
L_005b6009:; BB(0x005b6009);
    /* 005b6009: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b600c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b600f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005b6012:; BB(0x005b6012);
    /* 005b6012: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b6016: jge 0x5b6030 */ if ((fS==fO)) goto L_005b6030;
L_005b6018:; BB(0x005b6018);
    /* 005b6018: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b601b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b601c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b601f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b6020: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b6023: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b6028u); f_005b5830();
    /* 005b6028: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b602b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b602e: jmp 0x5b6009 */ goto L_005b6009;
L_005b6030:; BB(0x005b6030);
    /* 005b6030: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b6033: mov esp, ebp */ r_esp = r_ebp;
    /* 005b6035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b6036: ret 4 */ FN_RET(0x005b5ff0); r_esp += 8; return;
}

