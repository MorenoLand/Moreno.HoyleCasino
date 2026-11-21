#include "protos.h"

void f_005d2040(void) /* sub_5D2040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2040);
    /* 005d2040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2041: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2043: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2046: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d2049: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d204e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005d2051: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2053: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d2056: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2059: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d205eu); f_0063aac0();
    /* 005d205e: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 005d2064: push 0x6d3a14 */ { u32 v = 0x6d3a14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2069: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d206eu); f_00630f40();
    /* 005d206e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2071: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d2074: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d2079: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005d207c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d207e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d2081: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d2084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2085: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2088: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d208du); f_0063aac0();
    /* 005d208d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d2090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2091: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d2096u); f_00686d8e();
    /* 005d2096: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d2099: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d209f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005d20a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d20a4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d20a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d20aa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d20afu); f_0063aac0();
    /* 005d20af: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 005d20b6: push 0x6d39f4 */ { u32 v = 0x6d39f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d20bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d20c0u); f_00630f40();
    /* 005d20c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d20c3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d20c6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d20cc: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005d20cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d20d1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d20d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d20d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d20d8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d20db: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d20de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d20df: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d20e4u); f_00686d8e();
    /* 005d20e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d20e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005d20e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d20ea: ret  */ FN_RET(0x005d2040); r_esp += 4; return;
}

void f_005d2180(void) /* sub_5D2180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2180);
    /* 005d2180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2181: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2183: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2186: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d2189: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 005d2190: mov dword ptr [ebp - 0x20], 7 */ W32((u32)(r_ebp+0xffffffe0u), 0x7u);
    /* 005d2197: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 005d219e: mov dword ptr [ebp - 0x18], 6 */ W32((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 005d21a5: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 005d21ac: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005d21b3: mov dword ptr [ebp - 0xc], 8 */ W32((u32)(r_ebp+0xfffffff4u), 0x8u);
    /* 005d21ba: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005d21c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d21c8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d21ca: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d21cf: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d21d2: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d21d7u); f_005fb2b0();
    /* 005d21d7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d21da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d21dd: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 005d21e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d21e2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d21e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d21e7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d21ea: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d21f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d21f2u); call_ind(t); }
    /* 005d21f2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d21f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d21fa: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d21fd: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d2202u); f_005fb2b0();
    /* 005d2202: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d2205: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d2208: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d220a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d220d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005d2210: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d2212u); call_ind(t); }
    /* 005d2212: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2214: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2215: ret 4 */ FN_RET(0x005d2180); r_esp += 8; return;
}

void f_005d2220(void) /* sub_5D2220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2220);
    /* 005d2220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2221: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2223: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2226: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d2229: mov dword ptr [ebp - 0x24], 3 */ W32((u32)(r_ebp+0xffffffdcu), 0x3u);
    /* 005d2230: mov dword ptr [ebp - 0x20], 7 */ W32((u32)(r_ebp+0xffffffe0u), 0x7u);
    /* 005d2237: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 005d223e: mov dword ptr [ebp - 0x18], 6 */ W32((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 005d2245: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
    /* 005d224c: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005d2253: mov dword ptr [ebp - 0xc], 8 */ W32((u32)(r_ebp+0xfffffff4u), 0x8u);
    /* 005d225a: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005d2261: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d2268: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d226a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d226f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d2272: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d2277u); f_005fb2b0();
    /* 005d2277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d2279: je 0x5d22cb */ if (fZ) goto L_005d22cb;
L_005d227b:; BB(0x005d227b);
    /* 005d227b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d227d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d2283: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d2286: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d228bu); f_005fb2b0();
    /* 005d228b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d228e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d2291: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d2297: mov ecx, dword ptr [ebp + eax*4 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 005d229b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d229c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d229f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d22a1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d22a4: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005d22aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d22acu); call_ind(t); }
    /* 005d22ac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d22ae: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d22b3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d22b6: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d22bbu); f_005fb2b0();
    /* 005d22bb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d22be: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d22c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d22c3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d22c6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d22c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d22cbu); call_ind(t); }
L_005d22cb:; BB(0x005d22cb);
    /* 005d22cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005d22cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d22ce: ret  */ FN_RET(0x005d2220); r_esp += 4; return;
}

void f_005d22d0(void) /* sub_5D22D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d22d0);
    /* 005d22d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d22d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d22d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d22d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d22d9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d22db: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d22e0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d22e3: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d22e8u); f_005fb2b0();
    /* 005d22e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d22ea: je 0x5d230c */ if (fZ) goto L_005d230c;
L_005d22ec:; BB(0x005d22ec);
    /* 005d22ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d22ee: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d22f4: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d22f7: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d22fcu); f_005fb2b0();
    /* 005d22fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d22ff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2302: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d2304: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2307: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005d230a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d230cu); call_ind(t); }
L_005d230c:; BB(0x005d230c);
    /* 005d230c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d230e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d230f: ret  */ FN_RET(0x005d22d0); r_esp += 4; return;
}

void f_005d2370(void) /* sub_5D2370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2370);
    /* 005d2370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2371: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2373: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2376: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d2379: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d237c: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005d2382: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d2385: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2388: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d238b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d238e: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d2392: ja 0x5d240c */ if ((!fC&&!fZ)) goto L_005d240c;
L_005d2394:; BB(0x005d2394);
    /* 005d2394: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2397: jmp dword ptr [eax*4 + 0x5d2414] */ { u32 t = R32((u32)(r_eax*4+0x5d2414u)); switch (t) { case 0x5d239eu: goto L_005d239e; case 0x5d23acu: goto L_005d23ac; case 0x5d23bau: goto L_005d23ba; case 0x5d23c8u: goto L_005d23c8; case 0x5d23d6u: goto L_005d23d6; case 0x5d23e4u: goto L_005d23e4; case 0x5d23f2u: goto L_005d23f2; case 0x5d2400u: goto L_005d2400; default: UNSUP(0x005d2397, "jump table entry is not a known target"); } }
L_005d239e:; BB(0x005d239e);
    /* 005d239e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d23a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d23a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23a5: call 0x5d34e0 */ r_esp -= 4; W32(r_esp, 0x5d23aau); f_005d34e0();
    /* 005d23aa: jmp 0x5d240c */ goto L_005d240c;
L_005d23ac:; BB(0x005d23ac);
    /* 005d23ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d23af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d23b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23b3: call 0x5d3a40 */ r_esp -= 4; W32(r_esp, 0x5d23b8u); f_005d3a40();
    /* 005d23b8: jmp 0x5d240c */ goto L_005d240c;
L_005d23ba:; BB(0x005d23ba);
    /* 005d23ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d23bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d23be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23c1: call 0x5d29f0 */ r_esp -= 4; W32(r_esp, 0x5d23c6u); f_005d29f0();
    /* 005d23c6: jmp 0x5d240c */ goto L_005d240c;
L_005d23c8:; BB(0x005d23c8);
    /* 005d23c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d23cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d23cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23cf: call 0x5d3190 */ r_esp -= 4; W32(r_esp, 0x5d23d4u); f_005d3190();
    /* 005d23d4: jmp 0x5d240c */ goto L_005d240c;
L_005d23d6:; BB(0x005d23d6);
    /* 005d23d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d23d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d23da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23dd: call 0x5d2ef0 */ r_esp -= 4; W32(r_esp, 0x5d23e2u); f_005d2ef0();
    /* 005d23e2: jmp 0x5d240c */ goto L_005d240c;
L_005d23e4:; BB(0x005d23e4);
    /* 005d23e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d23e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d23e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23eb: call 0x5d26e0 */ r_esp -= 4; W32(r_esp, 0x5d23f0u); f_005d26e0();
    /* 005d23f0: jmp 0x5d240c */ goto L_005d240c;
L_005d23f2:; BB(0x005d23f2);
    /* 005d23f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d23f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d23f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d23f9: call 0x5d24e0 */ r_esp -= 4; W32(r_esp, 0x5d23feu); f_005d24e0();
    /* 005d23fe: jmp 0x5d240c */ goto L_005d240c;
L_005d2400:; BB(0x005d2400);
    /* 005d2400: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d2403: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d2404: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2407: call 0x5d2440 */ r_esp -= 4; W32(r_esp, 0x5d240cu); f_005d2440();
L_005d240c:; BB(0x005d240c);
    /* 005d240c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d240e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d240f: ret 4 */ FN_RET(0x005d2370); r_esp += 8; return;
}

void f_005d2440(void) /* sub_5D2440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2440);
    /* 005d2440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2441: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2446: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d2449: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d244c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d244f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2452: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2455: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d2458: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d245c: ja 0x5d24b8 */ if ((!fC&&!fZ)) goto L_005d24b8;
L_005d245e:; BB(0x005d245e);
    /* 005d245e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2461: jmp dword ptr [edx*4 + 0x5d24c0] */ { u32 t = R32((u32)(r_edx*4+0x5d24c0u)); switch (t) { case 0x5d2468u: goto L_005d2468; case 0x5d2474u: goto L_005d2474; case 0x5d247eu: goto L_005d247e; case 0x5d248au: goto L_005d248a; case 0x5d2496u: goto L_005d2496; case 0x5d24a2u: goto L_005d24a2; case 0x5d24aeu: goto L_005d24ae; default: UNSUP(0x005d2461, "jump table entry is not a known target"); } }
L_005d2468:; BB(0x005d2468);
    /* 005d2468: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d246a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d246d: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2472u); f_005d16b0();
    /* 005d2472: jmp 0x5d24b8 */ goto L_005d24b8;
L_005d2474:; BB(0x005d2474);
    /* 005d2474: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2477: call 0x5dc1c0 */ r_esp -= 4; W32(r_esp, 0x5d247cu); f_005dc1c0();
    /* 005d247c: jmp 0x5d24b8 */ goto L_005d24b8;
L_005d247e:; BB(0x005d247e);
    /* 005d247e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2480: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2483: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2488u); f_005d16b0();
    /* 005d2488: jmp 0x5d24b8 */ goto L_005d24b8;
L_005d248a:; BB(0x005d248a);
    /* 005d248a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d248c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d248f: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2494u); f_005d16b0();
    /* 005d2494: jmp 0x5d24b8 */ goto L_005d24b8;
L_005d2496:; BB(0x005d2496);
    /* 005d2496: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2498: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d249b: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d24a0u); f_005d16b0();
    /* 005d24a0: jmp 0x5d24b8 */ goto L_005d24b8;
L_005d24a2:; BB(0x005d24a2);
    /* 005d24a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d24a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d24a7: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d24acu); f_005d16b0();
    /* 005d24ac: jmp 0x5d24b8 */ goto L_005d24b8;
L_005d24ae:; BB(0x005d24ae);
    /* 005d24ae: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d24b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d24b3: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d24b8u); f_005d16b0();
L_005d24b8:; BB(0x005d24b8);
    /* 005d24b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005d24ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d24bb: ret 4 */ FN_RET(0x005d2440); r_esp += 8; return;
}

void f_005d24e0(void) /* sub_5D24E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d24e0);
    /* 005d24e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d24e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d24e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d24e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d24e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d24ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d24ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d24f2: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d24f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d24f8: cmp dword ptr [ebp - 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d24fc: ja 0x5d268f */ if ((!fC&&!fZ)) goto L_005d268f;
L_005d2502:; BB(0x005d2502);
    /* 005d2502: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2505: jmp dword ptr [edx*4 + 0x5d2698] */ { u32 t = R32((u32)(r_edx*4+0x5d2698u)); switch (t) { case 0x5d250cu: goto L_005d250c; case 0x5d251bu: goto L_005d251b; case 0x5d2537u: goto L_005d2537; case 0x5d2553u: goto L_005d2553; case 0x5d256fu: goto L_005d256f; case 0x5d258bu: goto L_005d258b; case 0x5d25a7u: goto L_005d25a7; case 0x5d25c3u: goto L_005d25c3; case 0x5d25dfu: goto L_005d25df; case 0x5d25fbu: goto L_005d25fb; case 0x5d2614u: goto L_005d2614; case 0x5d262du: goto L_005d262d; case 0x5d2646u: goto L_005d2646; case 0x5d265fu: goto L_005d265f; case 0x5d2678u: goto L_005d2678; default: UNSUP(0x005d2505, "jump table entry is not a known target"); } }
L_005d250c:; BB(0x005d250c);
    /* 005d250c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d250e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2511: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2516u); f_005d16b0();
    /* 005d2516: jmp 0x5d268f */ goto L_005d268f;
L_005d251b:; BB(0x005d251b);
    /* 005d251b: push 0x30ef5f */ { u32 v = 0x30ef5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2520: push 0x30ef87 */ { u32 v = 0x30ef87u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2525: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2528: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d252a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d252d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2530: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2532u); call_ind(t); }
    /* 005d2532: jmp 0x5d268f */ goto L_005d268f;
L_005d2537:; BB(0x005d2537);
    /* 005d2537: push 0x30f34e */ { u32 v = 0x30f34eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d253c: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2541: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2544: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2549: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d254c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d254eu); call_ind(t); }
    /* 005d254e: jmp 0x5d268f */ goto L_005d268f;
L_005d2553:; BB(0x005d2553);
    /* 005d2553: push 0x30f350 */ { u32 v = 0x30f350u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2558: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 005d255d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2560: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2562: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2565: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2568: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d256au); call_ind(t); }
    /* 005d256a: jmp 0x5d268f */ goto L_005d268f;
L_005d256f:; BB(0x005d256f);
    /* 005d256f: push 0x30f356 */ { u32 v = 0x30f356u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2574: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d257c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d257e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2581: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2584: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2586u); call_ind(t); }
    /* 005d2586: jmp 0x5d268f */ goto L_005d268f;
L_005d258b:; BB(0x005d258b);
    /* 005d258b: push 0x311675 */ { u32 v = 0x311675u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2590: push 0x31167a */ { u32 v = 0x31167au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2598: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d259a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d259d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d25a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d25a2u); call_ind(t); }
    /* 005d25a2: jmp 0x5d268f */ goto L_005d268f;
L_005d25a7:; BB(0x005d25a7);
    /* 005d25a7: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d25ac: push 0x30ef87 */ { u32 v = 0x30ef87u; r_esp -= 4; W32(r_esp, v); }
    /* 005d25b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d25b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d25b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d25b9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d25bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d25beu); call_ind(t); }
    /* 005d25be: jmp 0x5d268f */ goto L_005d268f;
L_005d25c3:; BB(0x005d25c3);
    /* 005d25c3: push 0x30eb70 */ { u32 v = 0x30eb70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d25c8: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d25cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d25d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d25d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d25d5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d25d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d25dau); call_ind(t); }
    /* 005d25da: jmp 0x5d268f */ goto L_005d268f;
L_005d25df:; BB(0x005d25df);
    /* 005d25df: push 0x30dbd0 */ { u32 v = 0x30dbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d25e4: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d25e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d25ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d25ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d25f1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d25f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d25f6u); call_ind(t); }
    /* 005d25f6: jmp 0x5d268f */ goto L_005d268f;
L_005d25fb:; BB(0x005d25fb);
    /* 005d25fb: push 0x311280 */ { u32 v = 0x311280u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2600: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2605: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2608: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d260a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d260d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2610: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2612u); call_ind(t); }
    /* 005d2612: jmp 0x5d268f */ goto L_005d268f;
L_005d2614:; BB(0x005d2614);
    /* 005d2614: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2619: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d261e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2621: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2623: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2626: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2629: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d262bu); call_ind(t); }
    /* 005d262b: jmp 0x5d268f */ goto L_005d268f;
L_005d262d:; BB(0x005d262d);
    /* 005d262d: push 0x310e98 */ { u32 v = 0x310e98u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2632: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d263a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d263c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d263f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2642: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2644u); call_ind(t); }
    /* 005d2644: jmp 0x5d268f */ goto L_005d268f;
L_005d2646:; BB(0x005d2646);
    /* 005d2646: push 0x30d7e8 */ { u32 v = 0x30d7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d264b: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2650: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2653: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2655: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2658: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d265b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d265du); call_ind(t); }
    /* 005d265d: jmp 0x5d268f */ goto L_005d268f;
L_005d265f:; BB(0x005d265f);
    /* 005d265f: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2664: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2669: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d266c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d266e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2671: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2674: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2676u); call_ind(t); }
    /* 005d2676: jmp 0x5d268f */ goto L_005d268f;
L_005d2678:; BB(0x005d2678);
    /* 005d2678: push 0x30e3a0 */ { u32 v = 0x30e3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d267d: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2682: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2685: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d268a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d268d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d268fu); call_ind(t); }
L_005d268f:; BB(0x005d268f);
    /* 005d268f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2692: ret 4 */ FN_RET(0x005d24e0); r_esp += 8; return;
}

void f_005d26e0(void) /* sub_5D26E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d26e0);
    /* 005d26e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d26e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d26e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d26e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d26e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d26ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d26ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d26f2: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d26f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d26f8: cmp dword ptr [ebp - 8], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d26fc: ja 0x5d297e */ if ((!fC&&!fZ)) goto L_005d297e;
L_005d2702:; BB(0x005d2702);
    /* 005d2702: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2705: jmp dword ptr [edx*4 + 0x5d2984] */ { u32 t = R32((u32)(r_edx*4+0x5d2984u)); switch (t) { case 0x5d270cu: goto L_005d270c; case 0x5d271bu: goto L_005d271b; case 0x5d2737u: goto L_005d2737; case 0x5d2753u: goto L_005d2753; case 0x5d276fu: goto L_005d276f; case 0x5d278bu: goto L_005d278b; case 0x5d27a7u: goto L_005d27a7; case 0x5d27c3u: goto L_005d27c3; case 0x5d285eu: goto L_005d285e; case 0x5d287au: goto L_005d287a; case 0x5d28b2u: goto L_005d28b2; case 0x5d28ceu: goto L_005d28ce; case 0x5d28eau: goto L_005d28ea; case 0x5d2903u: goto L_005d2903; case 0x5d291cu: goto L_005d291c; case 0x5d2935u: goto L_005d2935; case 0x5d294eu: goto L_005d294e; case 0x5d2967u: goto L_005d2967; case 0x5d2896u: goto L_005d2896; case 0x5d27dfu: goto L_005d27df; case 0x5d27fbu: goto L_005d27fb; case 0x5d2817u: goto L_005d2817; case 0x5d2826u: goto L_005d2826; case 0x5d2842u: goto L_005d2842; default: UNSUP(0x005d2705, "jump table entry is not a known target"); } }
L_005d270c:; BB(0x005d270c);
    /* 005d270c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d270e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2711: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2716u); f_005d16b0();
    /* 005d2716: jmp 0x5d297e */ goto L_005d297e;
L_005d271b:; BB(0x005d271b);
    /* 005d271b: push 0x30ef60 */ { u32 v = 0x30ef60u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2720: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2725: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2728: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d272a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d272d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2730: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2732u); call_ind(t); }
    /* 005d2732: jmp 0x5d297e */ goto L_005d297e;
L_005d2737:; BB(0x005d2737);
    /* 005d2737: push 0x30ef65 */ { u32 v = 0x30ef65u; r_esp -= 4; W32(r_esp, v); }
    /* 005d273c: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2744: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2746: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2749: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d274c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d274eu); call_ind(t); }
    /* 005d274e: jmp 0x5d297e */ goto L_005d297e;
L_005d2753:; BB(0x005d2753);
    /* 005d2753: push 0x30ef61 */ { u32 v = 0x30ef61u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2758: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d275d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2760: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2762: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2765: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2768: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d276au); call_ind(t); }
    /* 005d276a: jmp 0x5d297e */ goto L_005d297e;
L_005d276f:; BB(0x005d276f);
    /* 005d276f: push 0x30f354 */ { u32 v = 0x30f354u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2774: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2779: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d277c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d277e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2781: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2784: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2786u); call_ind(t); }
    /* 005d2786: jmp 0x5d297e */ goto L_005d297e;
L_005d278b:; BB(0x005d278b);
    /* 005d278b: push 0x30f34f */ { u32 v = 0x30f34fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2790: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2795: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2798: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d279a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d279d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d27a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d27a2u); call_ind(t); }
    /* 005d27a2: jmp 0x5d297e */ goto L_005d297e;
L_005d27a7:; BB(0x005d27a7);
    /* 005d27a7: push 0x311675 */ { u32 v = 0x311675u; r_esp -= 4; W32(r_esp, v); }
    /* 005d27ac: push 0x311677 */ { u32 v = 0x311677u; r_esp -= 4; W32(r_esp, v); }
    /* 005d27b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d27b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d27b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d27b9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d27bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d27beu); call_ind(t); }
    /* 005d27be: jmp 0x5d297e */ goto L_005d297e;
L_005d27c3:; BB(0x005d27c3);
    /* 005d27c3: push 0x311676 */ { u32 v = 0x311676u; r_esp -= 4; W32(r_esp, v); }
    /* 005d27c8: push 0x311678 */ { u32 v = 0x311678u; r_esp -= 4; W32(r_esp, v); }
    /* 005d27cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d27d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d27d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d27d5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d27d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d27dau); call_ind(t); }
    /* 005d27da: jmp 0x5d297e */ goto L_005d297e;
L_005d27df:; BB(0x005d27df);
    /* 005d27df: push 0x30eb70 */ { u32 v = 0x30eb70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d27e4: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d27e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d27ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d27ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d27f1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d27f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d27f6u); call_ind(t); }
    /* 005d27f6: jmp 0x5d297e */ goto L_005d297e;
L_005d27fb:; BB(0x005d27fb);
    /* 005d27fb: push 0x30dbd0 */ { u32 v = 0x30dbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2800: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2805: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2808: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d280a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d280d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2810: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2812u); call_ind(t); }
    /* 005d2812: jmp 0x5d297e */ goto L_005d297e;
L_005d2817:; BB(0x005d2817);
    /* 005d2817: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d281c: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2821u); f_005d16b0();
    /* 005d2821: jmp 0x5d297e */ goto L_005d297e;
L_005d2826:; BB(0x005d2826);
    /* 005d2826: push 0x31222e */ { u32 v = 0x31222eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d282b: push 0x312236 */ { u32 v = 0x312236u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2830: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2833: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2835: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2838: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d283b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d283du); call_ind(t); }
    /* 005d283d: jmp 0x5d297e */ goto L_005d297e;
L_005d2842:; BB(0x005d2842);
    /* 005d2842: push 0x312233 */ { u32 v = 0x312233u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2847: push 0x312237 */ { u32 v = 0x312237u; r_esp -= 4; W32(r_esp, v); }
    /* 005d284c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d284f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2854: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2857: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2859u); call_ind(t); }
    /* 005d2859: jmp 0x5d297e */ goto L_005d297e;
L_005d285e:; BB(0x005d285e);
    /* 005d285e: push 0x30e3a0 */ { u32 v = 0x30e3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2863: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2868: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d286b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d286d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2870: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2873: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2875u); call_ind(t); }
    /* 005d2875: jmp 0x5d297e */ goto L_005d297e;
L_005d287a:; BB(0x005d287a);
    /* 005d287a: push 0x30e3a0 */ { u32 v = 0x30e3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d287f: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2884: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2887: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2889: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d288c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d288f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2891u); call_ind(t); }
    /* 005d2891: jmp 0x5d297e */ goto L_005d297e;
L_005d2896:; BB(0x005d2896);
    /* 005d2896: push 0x30e3a0 */ { u32 v = 0x30e3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d289b: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d28a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28a8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d28ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d28adu); call_ind(t); }
    /* 005d28ad: jmp 0x5d297e */ goto L_005d297e;
L_005d28b2:; BB(0x005d28b2);
    /* 005d28b2: push 0x30e3a4 */ { u32 v = 0x30e3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28b7: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d28c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28c4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d28c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d28c9u); call_ind(t); }
    /* 005d28c9: jmp 0x5d297e */ goto L_005d297e;
L_005d28ce:; BB(0x005d28ce);
    /* 005d28ce: push 0x30e3a4 */ { u32 v = 0x30e3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28d3: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d28dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28e0: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d28e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d28e5u); call_ind(t); }
    /* 005d28e5: jmp 0x5d297e */ goto L_005d297e;
L_005d28ea:; BB(0x005d28ea);
    /* 005d28ea: push 0x30e3a4 */ { u32 v = 0x30e3a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28ef: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d28f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d28f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d28fc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d28ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2901u); call_ind(t); }
    /* 005d2901: jmp 0x5d297e */ goto L_005d297e;
L_005d2903:; BB(0x005d2903);
    /* 005d2903: push 0x30d7e8 */ { u32 v = 0x30d7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2908: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d290d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2910: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2912: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2915: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2918: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d291au); call_ind(t); }
    /* 005d291a: jmp 0x5d297e */ goto L_005d297e;
L_005d291c:; BB(0x005d291c);
    /* 005d291c: push 0x30d7e8 */ { u32 v = 0x30d7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2921: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2926: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2929: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d292b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d292e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2931: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2933u); call_ind(t); }
    /* 005d2933: jmp 0x5d297e */ goto L_005d297e;
L_005d2935:; BB(0x005d2935);
    /* 005d2935: push 0x30d7e8 */ { u32 v = 0x30d7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d293a: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d293f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2942: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2944: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2947: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d294a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d294cu); call_ind(t); }
    /* 005d294c: jmp 0x5d297e */ goto L_005d297e;
L_005d294e:; BB(0x005d294e);
    /* 005d294e: push 0x3154e8 */ { u32 v = 0x3154e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2953: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2958: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d295b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d295d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2960: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2963: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2965u); call_ind(t); }
    /* 005d2965: jmp 0x5d297e */ goto L_005d297e;
L_005d2967:; BB(0x005d2967);
    /* 005d2967: push 0x3154e8 */ { u32 v = 0x3154e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d296c: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2971: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2974: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2976: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2979: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d297c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d297eu); call_ind(t); }
L_005d297e:; BB(0x005d297e);
    /* 005d297e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2981: ret 4 */ FN_RET(0x005d26e0); r_esp += 8; return;
}

void f_005d29f0(void) /* sub_5D29F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d29f0);
    /* 005d29f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d29f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d29f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d29f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d29f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d29fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d29ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2a02: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2a05: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d2a08: cmp dword ptr [ebp - 8], 0x27 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d2a0c: ja 0x5d2e3f */ if ((!fC&&!fZ)) goto L_005d2e3f;
L_005d2a12:; BB(0x005d2a12);
    /* 005d2a12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2a15: jmp dword ptr [edx*4 + 0x5d2e48] */ { u32 t = R32((u32)(r_edx*4+0x5d2e48u)); switch (t) { case 0x5d2a1cu: goto L_005d2a1c; case 0x5d2a2bu: goto L_005d2a2b; case 0x5d2a38u: goto L_005d2a38; case 0x5d2a54u: goto L_005d2a54; case 0x5d2a70u: goto L_005d2a70; case 0x5d2a8cu: goto L_005d2a8c; case 0x5d2aa8u: goto L_005d2aa8; case 0x5d2ac4u: goto L_005d2ac4; case 0x5d2ae0u: goto L_005d2ae0; case 0x5d2afcu: goto L_005d2afc; case 0x5d2b18u: goto L_005d2b18; case 0x5d2b34u: goto L_005d2b34; case 0x5d2b50u: goto L_005d2b50; case 0x5d2dc4u: goto L_005d2dc4; case 0x5d2dddu: goto L_005d2ddd; case 0x5d2df6u: goto L_005d2df6; case 0x5d2e0fu: goto L_005d2e0f; case 0x5d2e28u: goto L_005d2e28; case 0x5d2dabu: goto L_005d2dab; case 0x5d2b6cu: goto L_005d2b6c; case 0x5d2b88u: goto L_005d2b88; case 0x5d2ba4u: goto L_005d2ba4; case 0x5d2bc0u: goto L_005d2bc0; case 0x5d2bdcu: goto L_005d2bdc; case 0x5d2bf8u: goto L_005d2bf8; case 0x5d2c14u: goto L_005d2c14; case 0x5d2c30u: goto L_005d2c30; case 0x5d2c4cu: goto L_005d2c4c; case 0x5d2c68u: goto L_005d2c68; case 0x5d2c84u: goto L_005d2c84; case 0x5d2ca0u: goto L_005d2ca0; case 0x5d2cbcu: goto L_005d2cbc; case 0x5d2cd8u: goto L_005d2cd8; case 0x5d2cf4u: goto L_005d2cf4; case 0x5d2d10u: goto L_005d2d10; case 0x5d2d2cu: goto L_005d2d2c; case 0x5d2d48u: goto L_005d2d48; case 0x5d2d64u: goto L_005d2d64; case 0x5d2d80u: goto L_005d2d80; case 0x5d2d9cu: goto L_005d2d9c; default: UNSUP(0x005d2a15, "jump table entry is not a known target"); } }
L_005d2a1c:; BB(0x005d2a1c);
    /* 005d2a1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a21: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2a26u); f_005d16b0();
    /* 005d2a26: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2a2b:; BB(0x005d2a2b);
    /* 005d2a2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a2e: call 0x5dc1c0 */ r_esp -= 4; W32(r_esp, 0x5d2a33u); f_005dc1c0();
    /* 005d2a33: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2a38:; BB(0x005d2a38);
    /* 005d2a38: push 0x30ef74 */ { u32 v = 0x30ef74u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a3d: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a45: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d2a47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a4a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2a4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2a4fu); call_ind(t); }
    /* 005d2a4f: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2a54:; BB(0x005d2a54);
    /* 005d2a54: push 0x30ef77 */ { u32 v = 0x30ef77u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a59: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2a63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a66: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2a69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2a6bu); call_ind(t); }
    /* 005d2a6b: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2a70:; BB(0x005d2a70);
    /* 005d2a70: push 0x30ef7b */ { u32 v = 0x30ef7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a75: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a7d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2a7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a82: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2a85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2a87u); call_ind(t); }
    /* 005d2a87: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2a8c:; BB(0x005d2a8c);
    /* 005d2a8c: push 0x30ef77 */ { u32 v = 0x30ef77u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a91: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2a96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2a9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2a9e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2aa1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2aa3u); call_ind(t); }
    /* 005d2aa3: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2aa8:; BB(0x005d2aa8);
    /* 005d2aa8: push 0x30ef7a */ { u32 v = 0x30ef7au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aad: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ab2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2ab5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2ab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2aba: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2abd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2abfu); call_ind(t); }
    /* 005d2abf: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2ac4:; BB(0x005d2ac4);
    /* 005d2ac4: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ac9: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ace: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2ad1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2ad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2ad6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2ad9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2adbu); call_ind(t); }
    /* 005d2adb: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2ae0:; BB(0x005d2ae0);
    /* 005d2ae0: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ae5: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2aea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2aed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2aef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2af2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2af5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2af7u); call_ind(t); }
    /* 005d2af7: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2afc:; BB(0x005d2afc);
    /* 005d2afc: push 0x30f356 */ { u32 v = 0x30f356u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b01: push 0x30f358 */ { u32 v = 0x30f358u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b06: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2b0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b0e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2b11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2b13u); call_ind(t); }
    /* 005d2b13: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2b18:; BB(0x005d2b18);
    /* 005d2b18: push 0x30f352 */ { u32 v = 0x30f352u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b1d: push 0x30f359 */ { u32 v = 0x30f359u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b2a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2b2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2b2fu); call_ind(t); }
    /* 005d2b2f: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2b34:; BB(0x005d2b34);
    /* 005d2b34: push 0x30f353 */ { u32 v = 0x30f353u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b39: push 0x30f359 */ { u32 v = 0x30f359u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2b43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b46: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2b49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2b4bu); call_ind(t); }
    /* 005d2b4b: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2b50:; BB(0x005d2b50);
    /* 005d2b50: push 0x30f350 */ { u32 v = 0x30f350u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b55: push 0x30f358 */ { u32 v = 0x30f358u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2b5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b62: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2b65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2b67u); call_ind(t); }
    /* 005d2b67: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2b6c:; BB(0x005d2b6c);
    /* 005d2b6c: push 0x30ef73 */ { u32 v = 0x30ef73u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b71: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2b7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b7e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2b81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2b83u); call_ind(t); }
    /* 005d2b83: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2b88:; BB(0x005d2b88);
    /* 005d2b88: push 0x30ef79 */ { u32 v = 0x30ef79u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b8d: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2b92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2b97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2b9a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2b9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2b9fu); call_ind(t); }
    /* 005d2b9f: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2ba4:; BB(0x005d2ba4);
    /* 005d2ba4: push 0x30ef76 */ { u32 v = 0x30ef76u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ba9: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2bb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2bb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2bb6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2bb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2bbbu); call_ind(t); }
    /* 005d2bbb: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2bc0:; BB(0x005d2bc0);
    /* 005d2bc0: push 0x30ef73 */ { u32 v = 0x30ef73u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bc5: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2bcd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2bcf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2bd2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2bd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2bd7u); call_ind(t); }
    /* 005d2bd7: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2bdc:; BB(0x005d2bdc);
    /* 005d2bdc: push 0x30ef79 */ { u32 v = 0x30ef79u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2be1: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2be6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2be9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2beb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2bee: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2bf1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2bf3u); call_ind(t); }
    /* 005d2bf3: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2bf8:; BB(0x005d2bf8);
    /* 005d2bf8: push 0x30ef76 */ { u32 v = 0x30ef76u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2bfd: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2c07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c0a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2c0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2c0fu); call_ind(t); }
    /* 005d2c0f: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2c14:; BB(0x005d2c14);
    /* 005d2c14: push 0x30ef78 */ { u32 v = 0x30ef78u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c19: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2c23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c26: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2c29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2c2bu); call_ind(t); }
    /* 005d2c2b: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2c30:; BB(0x005d2c30);
    /* 005d2c30: push 0x30ef75 */ { u32 v = 0x30ef75u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c35: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2c3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c42: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2c45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2c47u); call_ind(t); }
    /* 005d2c47: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2c4c:; BB(0x005d2c4c);
    /* 005d2c4c: push 0x30ef72 */ { u32 v = 0x30ef72u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c51: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2c5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c5e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2c61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2c63u); call_ind(t); }
    /* 005d2c63: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2c68:; BB(0x005d2c68);
    /* 005d2c68: push 0x30ef78 */ { u32 v = 0x30ef78u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c6d: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c75: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2c77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c7a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2c7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2c7fu); call_ind(t); }
    /* 005d2c7f: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2c84:; BB(0x005d2c84);
    /* 005d2c84: push 0x30ef75 */ { u32 v = 0x30ef75u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c89: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2c8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2c93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2c96: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2c99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2c9bu); call_ind(t); }
    /* 005d2c9b: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2ca0:; BB(0x005d2ca0);
    /* 005d2ca0: push 0x30ef70 */ { u32 v = 0x30ef70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ca5: push 0x30ef87 */ { u32 v = 0x30ef87u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2caa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2cad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2caf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2cb2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2cb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2cb7u); call_ind(t); }
    /* 005d2cb7: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2cbc:; BB(0x005d2cbc);
    /* 005d2cbc: push 0x30ef6f */ { u32 v = 0x30ef6fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cc1: push 0x30ef84 */ { u32 v = 0x30ef84u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2cc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2ccb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2cce: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2cd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2cd3u); call_ind(t); }
    /* 005d2cd3: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2cd8:; BB(0x005d2cd8);
    /* 005d2cd8: push 0x30ef71 */ { u32 v = 0x30ef71u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cdd: push 0x30ef84 */ { u32 v = 0x30ef84u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ce2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2ce5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2ce7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2cea: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2ced: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2cefu); call_ind(t); }
    /* 005d2cef: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2cf4:; BB(0x005d2cf4);
    /* 005d2cf4: push 0x30ef5f */ { u32 v = 0x30ef5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cf9: push 0x30ef84 */ { u32 v = 0x30ef84u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2cfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2d03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d06: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2d09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2d0bu); call_ind(t); }
    /* 005d2d0b: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2d10:; BB(0x005d2d10);
    /* 005d2d10: push 0x30f34e */ { u32 v = 0x30f34eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d15: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d1d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2d1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d22: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2d25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2d27u); call_ind(t); }
    /* 005d2d27: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2d2c:; BB(0x005d2d2c);
    /* 005d2d2c: push 0x30f350 */ { u32 v = 0x30f350u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d31: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2d3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d3e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2d41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2d43u); call_ind(t); }
    /* 005d2d43: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2d48:; BB(0x005d2d48);
    /* 005d2d48: push 0x30f356 */ { u32 v = 0x30f356u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d4d: push 0x30f35a */ { u32 v = 0x30f35au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2d57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d5a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2d5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2d5fu); call_ind(t); }
    /* 005d2d5f: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2d64:; BB(0x005d2d64);
    /* 005d2d64: push 0x311675 */ { u32 v = 0x311675u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d69: push 0x31167a */ { u32 v = 0x31167au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2d73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d76: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2d79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2d7bu); call_ind(t); }
    /* 005d2d7b: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2d80:; BB(0x005d2d80);
    /* 005d2d80: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d85: push 0x30ef87 */ { u32 v = 0x30ef87u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2d8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2d92: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2d95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2d97u); call_ind(t); }
    /* 005d2d97: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2d9c:; BB(0x005d2d9c);
    /* 005d2d9c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2d9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2da1: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d2da6u); f_005d16b0();
    /* 005d2da6: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2dab:; BB(0x005d2dab);
    /* 005d2dab: push 0x310e98 */ { u32 v = 0x310e98u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2db0: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2db5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2db8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2dba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2dbd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2dc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2dc2u); call_ind(t); }
    /* 005d2dc2: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2dc4:; BB(0x005d2dc4);
    /* 005d2dc4: push 0x310e98 */ { u32 v = 0x310e98u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dc9: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2dd1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2dd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2dd6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2dd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2ddbu); call_ind(t); }
    /* 005d2ddb: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2ddd:; BB(0x005d2ddd);
    /* 005d2ddd: push 0x310e98 */ { u32 v = 0x310e98u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2de2: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2de7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2dea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2dec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2def: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2df2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2df4u); call_ind(t); }
    /* 005d2df4: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2df6:; BB(0x005d2df6);
    /* 005d2df6: push 0x314d18 */ { u32 v = 0x314d18u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2dfb: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2e03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2e05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2e08: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2e0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2e0du); call_ind(t); }
    /* 005d2e0d: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2e0f:; BB(0x005d2e0f);
    /* 005d2e0f: push 0x314d18 */ { u32 v = 0x314d18u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e14: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2e1c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2e1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2e21: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2e24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2e26u); call_ind(t); }
    /* 005d2e26: jmp 0x5d2e3f */ goto L_005d2e3f;
L_005d2e28:; BB(0x005d2e28);
    /* 005d2e28: push 0x314d18 */ { u32 v = 0x314d18u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e2d: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2e32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2e35: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2e37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2e3a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2e3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2e3fu); call_ind(t); }
L_005d2e3f:; BB(0x005d2e3f);
    /* 005d2e3f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2e41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2e42: ret 4 */ FN_RET(0x005d29f0); r_esp += 8; return;
}

void f_005d2ef0(void) /* sub_5D2EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d2ef0);
    /* 005d2ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d2ef3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d2ef6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d2ef9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d2efc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d2eff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2f02: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d2f05: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d2f08: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d2f0c: ja 0x5d3135 */ if ((!fC&&!fZ)) goto L_005d3135;
L_005d2f12:; BB(0x005d2f12);
    /* 005d2f12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d2f15: jmp dword ptr [edx*4 + 0x5d313c] */ { u32 t = R32((u32)(r_edx*4+0x5d313cu)); switch (t) { case 0x5d2f1cu: goto L_005d2f1c; case 0x5d2f29u: goto L_005d2f29; case 0x5d2f45u: goto L_005d2f45; case 0x5d2f61u: goto L_005d2f61; case 0x5d2f7du: goto L_005d2f7d; case 0x5d2f99u: goto L_005d2f99; case 0x5d2fb5u: goto L_005d2fb5; case 0x5d2fceu: goto L_005d2fce; case 0x5d2feau: goto L_005d2fea; case 0x5d3006u: goto L_005d3006; case 0x5d3022u: goto L_005d3022; case 0x5d303eu: goto L_005d303e; case 0x5d305au: goto L_005d305a; case 0x5d3076u: goto L_005d3076; case 0x5d3092u: goto L_005d3092; case 0x5d30aeu: goto L_005d30ae; case 0x5d30c7u: goto L_005d30c7; case 0x5d30e0u: goto L_005d30e0; case 0x5d30f9u: goto L_005d30f9; case 0x5d3112u: goto L_005d3112; case 0x5d312bu: goto L_005d312b; default: UNSUP(0x005d2f15, "jump table entry is not a known target"); } }
L_005d2f1c:; BB(0x005d2f1c);
    /* 005d2f1c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f1f: call 0x5dc1c0 */ r_esp -= 4; W32(r_esp, 0x5d2f24u); f_005dc1c0();
    /* 005d2f24: jmp 0x5d3135 */ goto L_005d3135;
L_005d2f29:; BB(0x005d2f29);
    /* 005d2f29: push 0x30ef74 */ { u32 v = 0x30ef74u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f2e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d2f38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f3b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2f3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2f40u); call_ind(t); }
    /* 005d2f40: jmp 0x5d3135 */ goto L_005d3135;
L_005d2f45:; BB(0x005d2f45);
    /* 005d2f45: push 0x30ef77 */ { u32 v = 0x30ef77u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f4a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f52: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2f54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f57: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2f5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2f5cu); call_ind(t); }
    /* 005d2f5c: jmp 0x5d3135 */ goto L_005d3135;
L_005d2f61:; BB(0x005d2f61);
    /* 005d2f61: push 0x30ef7b */ { u32 v = 0x30ef7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f66: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2f70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f73: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2f76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2f78u); call_ind(t); }
    /* 005d2f78: jmp 0x5d3135 */ goto L_005d3135;
L_005d2f7d:; BB(0x005d2f7d);
    /* 005d2f7d: push 0x30ef77 */ { u32 v = 0x30ef77u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f82: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2f8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2f8f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2f92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2f94u); call_ind(t); }
    /* 005d2f94: jmp 0x5d3135 */ goto L_005d3135;
L_005d2f99:; BB(0x005d2f99);
    /* 005d2f99: push 0x30ef7a */ { u32 v = 0x30ef7au; r_esp -= 4; W32(r_esp, v); }
    /* 005d2f9e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2fa6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2fa8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2fab: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2fae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2fb0u); call_ind(t); }
    /* 005d2fb0: jmp 0x5d3135 */ goto L_005d3135;
L_005d2fb5:; BB(0x005d2fb5);
    /* 005d2fb5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fb7: push 0x30dfb9 */ { u32 v = 0x30dfb9u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2fbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2fc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2fc4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2fc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2fc9u); call_ind(t); }
    /* 005d2fc9: jmp 0x5d3135 */ goto L_005d3135;
L_005d2fce:; BB(0x005d2fce);
    /* 005d2fce: push 0x30f34e */ { u32 v = 0x30f34eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fd3: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2fdb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2fdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2fe0: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2fe3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d2fe5u); call_ind(t); }
    /* 005d2fe5: jmp 0x5d3135 */ goto L_005d3135;
L_005d2fea:; BB(0x005d2fea);
    /* 005d2fea: push 0x30f350 */ { u32 v = 0x30f350u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2fef: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2ff4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2ff7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d2ff9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d2ffc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d2fff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3001u); call_ind(t); }
    /* 005d3001: jmp 0x5d3135 */ goto L_005d3135;
L_005d3006:; BB(0x005d3006);
    /* 005d3006: push 0x30f355 */ { u32 v = 0x30f355u; r_esp -= 4; W32(r_esp, v); }
    /* 005d300b: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3010: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3013: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3015: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3018: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d301b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d301du); call_ind(t); }
    /* 005d301d: jmp 0x5d3135 */ goto L_005d3135;
L_005d3022:; BB(0x005d3022);
    /* 005d3022: push 0x30f356 */ { u32 v = 0x30f356u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3027: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d302c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d302f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3031: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3034: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3037: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3039u); call_ind(t); }
    /* 005d3039: jmp 0x5d3135 */ goto L_005d3135;
L_005d303e:; BB(0x005d303e);
    /* 005d303e: push 0x30ef68 */ { u32 v = 0x30ef68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3043: push 0x30ef81 */ { u32 v = 0x30ef81u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d304b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d304d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3050: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3053: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3055u); call_ind(t); }
    /* 005d3055: jmp 0x5d3135 */ goto L_005d3135;
L_005d305a:; BB(0x005d305a);
    /* 005d305a: push 0x30ef6e */ { u32 v = 0x30ef6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d305f: push 0x30ef82 */ { u32 v = 0x30ef82u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3064: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3067: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3069: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d306c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d306f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3071u); call_ind(t); }
    /* 005d3071: jmp 0x5d3135 */ goto L_005d3135;
L_005d3076:; BB(0x005d3076);
    /* 005d3076: push 0x30ef6b */ { u32 v = 0x30ef6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d307b: push 0x30ef80 */ { u32 v = 0x30ef80u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3080: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3083: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3085: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3088: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d308b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d308du); call_ind(t); }
    /* 005d308d: jmp 0x5d3135 */ goto L_005d3135;
L_005d3092:; BB(0x005d3092);
    /* 005d3092: push 0x30dbd0 */ { u32 v = 0x30dbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3097: push 0x1393 */ { u32 v = 0x1393u; r_esp -= 4; W32(r_esp, v); }
    /* 005d309c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d309f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d30a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30a4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d30a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d30a9u); call_ind(t); }
    /* 005d30a9: jmp 0x5d3135 */ goto L_005d3135;
L_005d30ae:; BB(0x005d30ae);
    /* 005d30ae: push 0x30dbd0 */ { u32 v = 0x30dbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30b3: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d30bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30c0: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d30c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d30c5u); call_ind(t); }
    /* 005d30c5: jmp 0x5d3135 */ goto L_005d3135;
L_005d30c7:; BB(0x005d30c7);
    /* 005d30c7: push 0x30dbd0 */ { u32 v = 0x30dbd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30cc: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d30d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30d9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d30dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d30deu); call_ind(t); }
    /* 005d30de: jmp 0x5d3135 */ goto L_005d3135;
L_005d30e0:; BB(0x005d30e0);
    /* 005d30e0: push 0x30eb70 */ { u32 v = 0x30eb70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30e5: push 0x1393 */ { u32 v = 0x1393u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d30ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d30f2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d30f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d30f7u); call_ind(t); }
    /* 005d30f7: jmp 0x5d3135 */ goto L_005d3135;
L_005d30f9:; BB(0x005d30f9);
    /* 005d30f9: push 0x30eb70 */ { u32 v = 0x30eb70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d30fe: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3103: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3106: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3108: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d310b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d310e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3110u); call_ind(t); }
    /* 005d3110: jmp 0x5d3135 */ goto L_005d3135;
L_005d3112:; BB(0x005d3112);
    /* 005d3112: push 0x30eb70 */ { u32 v = 0x30eb70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3117: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d311c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d311f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3121: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3124: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3127: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3129u); call_ind(t); }
    /* 005d3129: jmp 0x5d3135 */ goto L_005d3135;
L_005d312b:; BB(0x005d312b);
    /* 005d312b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d312d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3130: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d3135u); f_005d16b0();
L_005d3135:; BB(0x005d3135);
    /* 005d3135: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3137: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3138: ret 4 */ FN_RET(0x005d2ef0); r_esp += 8; return;
}

