#include "protos.h"

void f_005a80d0(void) /* sub_5A80D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a80d0);
    /* 005a80d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a80d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a80d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a80d5: push 0x6a7995 */ { u32 v = 0x6a7995u; r_esp -= 4; W32(r_esp, v); }
    /* 005a80da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a80e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a80e1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a80e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a80e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a80eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a80ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a80ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a80f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a80f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a80fb: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a80ff: jne 0x5a816d */ if (!fZ) goto L_005a816d;
L_005a8101:; BB(0x005a8101);
    /* 005a8101: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8106: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a810bu); f_00686d82();
    /* 005a810b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a810e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a8111: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a8118: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a811c: je 0x5a812b */ if (fZ) goto L_005a812b;
L_005a811e:; BB(0x005a811e);
    /* 005a811e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8121: call 0x5a8960 */ r_esp -= 4; W32(r_esp, 0x5a8126u); f_005a8960();
    /* 005a8126: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a8129: jmp 0x5a8132 */ goto L_005a8132;
L_005a812b:; BB(0x005a812b);
    /* 005a812b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005a8132:; BB(0x005a8132);
    /* 005a8132: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a8135: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a8138: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a813f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8142: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8145: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 005a8148: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a814b: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005a814e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8151: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005a8154: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a8156: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005a8159: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a815bu); call_ind(t); }
    /* 005a815b: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8160: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8162: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8165: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005a8168: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5a816du); f_005f7340();
L_005a816d:; BB(0x005a816d);
    /* 005a816d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8170: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005a8173: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5a8178u); f_005f85d0();
    /* 005a8178: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a817a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a817d: call 0x5a8730 */ r_esp -= 4; W32(r_esp, 0x5a8182u); f_005a8730();
    /* 005a8182: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8185: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8189: jne 0x5a81cf */ if (!fZ) goto L_005a81cf;
L_005a818b:; BB(0x005a818b);
    /* 005a818b: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a818d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a8192u); f_00686d82();
    /* 005a8192: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8195: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a8198: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a819f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a81a3: je 0x5a81b2 */ if (fZ) goto L_005a81b2;
L_005a81a5:; BB(0x005a81a5);
    /* 005a81a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a81a8: call 0x5ab410 */ r_esp -= 4; W32(r_esp, 0x5a81adu); f_005ab410();
    /* 005a81ad: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a81b0: jmp 0x5a81b9 */ goto L_005a81b9;
L_005a81b2:; BB(0x005a81b2);
    /* 005a81b2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005a81b9:; BB(0x005a81b9);
    /* 005a81b9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a81bc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a81bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a81c6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a81c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a81cc: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_005a81cf:; BB(0x005a81cf);
    /* 005a81cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a81d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a81d4: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005a81d7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a81da: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005a81dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a81df: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005a81e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a81e4u); call_ind(t); }
    /* 005a81e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a81e7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005a81ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a81ed: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 005a81f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a81f2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005a81f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a81f7u); call_ind(t); }
    /* 005a81f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a81fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a8201: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a8202: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8204: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8205: ret  */ FN_RET(0x005a80d0); r_esp += 4; return;
}

void f_005a8210(void) /* sub_5A8210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8210);
    /* 005a8210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8211: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a8217: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a821b: jl 0x5a8223 */ if ((fS!=fO)) goto L_005a8223;
L_005a821d:; BB(0x005a821d);
    /* 005a821d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8221: jl 0x5a8225 */ if ((fS!=fO)) goto L_005a8225;
L_005a8223:; BB(0x005a8223);
    /* 005a8223: jmp 0x5a8293 */ goto L_005a8293;
L_005a8225:; BB(0x005a8225);
    /* 005a8225: cmp dword ptr [ebp + 0xc], 0x65 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8229: jne 0x5a825e */ if (!fZ) goto L_005a825e;
L_005a822b:; BB(0x005a822b);
    /* 005a822b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a822e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8231: cmp dword ptr [ecx + eax*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8236: je 0x5a825e */ if (fZ) goto L_005a825e;
L_005a8238:; BB(0x005a8238);
    /* 005a8238: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a823a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a823d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a823e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8241: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8244: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005a8248: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a824b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a824e: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005a8252: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a8254: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a825a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a825cu); call_ind(t); }
    /* 005a825c: jmp 0x5a8293 */ goto L_005a8293;
L_005a825e:; BB(0x005a825e);
    /* 005a825e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8261: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8264: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8269: je 0x5a8293 */ if (fZ) goto L_005a8293;
L_005a826b:; BB(0x005a826b);
    /* 005a826b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a826e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a826f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8272: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8273: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a8276: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8279: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a827d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a8280: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8283: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a8287: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005a8289: mov ecx, edx */ r_ecx = r_edx;
    /* 005a828b: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005a8291: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a8293u); call_ind(t); }
L_005a8293:; BB(0x005a8293);
    /* 005a8293: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8296: ret 8 */ FN_RET(0x005a8210); r_esp += 12; return;
}

void f_005a84c0(void) /* sub_5A84C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a84c0);
    /* 005a84c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a84c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a84c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a84c5: push 0x6a79bb */ { u32 v = 0x6a79bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005a84ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a84d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a84d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a84d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a84d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a84db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a84dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a84df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a84e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a84e8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a84eb: cmp dword ptr [eax + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a84ef: jne 0x5a855d */ if (!fZ) goto L_005a855d;
L_005a84f1:; BB(0x005a84f1);
    /* 005a84f1: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a84f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a84fbu); f_00686d82();
    /* 005a84fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a84fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a8501: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a8508: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a850c: je 0x5a851b */ if (fZ) goto L_005a851b;
L_005a850e:; BB(0x005a850e);
    /* 005a850e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8511: call 0x5a9ec0 */ r_esp -= 4; W32(r_esp, 0x5a8516u); f_005a9ec0();
    /* 005a8516: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a8519: jmp 0x5a8522 */ goto L_005a8522;
L_005a851b:; BB(0x005a851b);
    /* 005a851b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005a8522:; BB(0x005a8522);
    /* 005a8522: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a8525: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a8528: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a852f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8532: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8535: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005a8538: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a853b: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005a853e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8541: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005a8544: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a8546: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005a8549: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a854bu); call_ind(t); }
    /* 005a854b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005a854d: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8552: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8555: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 005a8558: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x5a855du); f_005f7320();
L_005a855d:; BB(0x005a855d);
    /* 005a855d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8560: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 005a8563: call 0x5aa000 */ r_esp -= 4; W32(r_esp, 0x5a8568u); f_005aa000();
    /* 005a8568: mov eax, dword ptr [0x7935fc] */ r_eax = R32((u32)(0x7935fcu));
    /* 005a856d: movzx ecx, byte ptr [eax + 7] */ r_ecx = (u32)R8((u32)(r_eax+0x7u));
    /* 005a8571: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8573: je 0x5a8580 */ if (fZ) goto L_005a8580;
L_005a8575:; BB(0x005a8575);
    /* 005a8575: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8578: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 005a857b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5a8580u); f_005f85d0();
L_005a8580:; BB(0x005a8580);
    /* 005a8580: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a8583: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a858a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a858b: mov esp, ebp */ r_esp = r_ebp;
    /* 005a858d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a858e: ret  */ FN_RET(0x005a84c0); r_esp += 4; return;
}

void f_005a8590(void) /* sub_5A8590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8590);
    /* 005a8590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8591: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a8597: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a859d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a85a2u); f_005da7b0();
    /* 005a85a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a85a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a85a7: je 0x5a85c8 */ if (fZ) goto L_005a85c8;
L_005a85a9:; BB(0x005a85a9);
    /* 005a85a9: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a85af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a85b1: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a85b7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 005a85bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a85bfu); call_ind(t); }
    /* 005a85bf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a85c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a85c4: jne 0x5a85c8 */ if (!fZ) goto L_005a85c8;
L_005a85c6:; BB(0x005a85c6);
    /* 005a85c6: jmp 0x5a8605 */ goto L_005a8605;
L_005a85c8:; BB(0x005a85c8);
    /* 005a85c8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a85ce: call 0x5b7d30 */ r_esp -= 4; W32(r_esp, 0x5a85d3u); f_005b7d30();
    /* 005a85d3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a85d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a85d8: jne 0x5a85f3 */ if (!fZ) goto L_005a85f3;
L_005a85da:; BB(0x005a85da);
    /* 005a85da: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005a85e0: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x5a85e5u); f_005df650();
    /* 005a85e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a85e6: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005a85ec: call 0x5aef40 */ r_esp -= 4; W32(r_esp, 0x5a85f1u); f_005aef40();
    /* 005a85f1: jmp 0x5a8605 */ goto L_005a8605;
L_005a85f3:; BB(0x005a85f3);
    /* 005a85f3: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 005a85f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a85fa: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a8600: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x5a8605u); f_005db8c0();
L_005a8605:; BB(0x005a8605);
    /* 005a8605: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8608: ret  */ FN_RET(0x005a8590); r_esp += 4; return;
}

void f_005a8610(void) /* sub_5A8610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8610);
    /* 005a8610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8611: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8615: push 0x6a79e1 */ { u32 v = 0x6a79e1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a861a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a8620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8621: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8624: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a8629: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a862b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a862c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a862f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a8635: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a8638: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a863b: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a863f: jne 0x5a86aa */ if (!fZ) goto L_005a86aa;
L_005a8641:; BB(0x005a8641);
    /* 005a8641: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8646: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5a864bu); f_00686d82();
    /* 005a864b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a864e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a8651: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a8658: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a865c: je 0x5a866b */ if (fZ) goto L_005a866b;
L_005a865e:; BB(0x005a865e);
    /* 005a865e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a8661: call 0x5abd70 */ r_esp -= 4; W32(r_esp, 0x5a8666u); f_005abd70();
    /* 005a8666: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a8669: jmp 0x5a8672 */ goto L_005a8672;
L_005a866b:; BB(0x005a866b);
    /* 005a866b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005a8672:; BB(0x005a8672);
    /* 005a8672: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a8675: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a8678: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a867f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8682: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a8685: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 005a8688: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a868b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005a868e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a8691: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005a8694: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005a8696: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005a8699: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a869bu); call_ind(t); }
    /* 005a869b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a869d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a869f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a86a2: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005a86a5: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5a86aau); f_005f7340();
L_005a86aa:; BB(0x005a86aa);
    /* 005a86aa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a86ad: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005a86b0: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5a86b5u); f_005f85d0();
    /* 005a86b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a86b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a86bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a86c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005a86c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a86c3: ret  */ FN_RET(0x005a8610); r_esp += 4; return;
}

void f_005a86d0(void) /* sub_5A86D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a86d0);
    /* 005a86d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a86d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a86d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a86d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a86d7: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a86dd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a86e2u); f_005da7b0();
    /* 005a86e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a86e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a86e7: je 0x5a8706 */ if (fZ) goto L_005a8706;
L_005a86e9:; BB(0x005a86e9);
    /* 005a86e9: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a86ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a86f1: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a86f7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 005a86fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a86ffu); call_ind(t); }
    /* 005a86ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a8702: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8704: je 0x5a8718 */ if (fZ) goto L_005a8718;
L_005a8706:; BB(0x005a8706);
    /* 005a8706: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a870c: call 0x5b7d30 */ r_esp -= 4; W32(r_esp, 0x5a8711u); f_005b7d30();
    /* 005a8711: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8714: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8716: jne 0x5a871a */ if (!fZ) goto L_005a871a;
L_005a8718:; BB(0x005a8718);
    /* 005a8718: jmp 0x5a872c */ goto L_005a872c;
L_005a871a:; BB(0x005a871a);
    /* 005a871a: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 005a871f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8721: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a8727: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x5a872cu); f_005db8c0();
L_005a872c:; BB(0x005a872c);
    /* 005a872c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a872e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a872f: ret  */ FN_RET(0x005a86d0); r_esp += 4; return;
}

void f_005a8730(void) /* sub_5A8730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8730);
    /* 005a8730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8731: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8733: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8736: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a8739: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a873f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5a8744u); f_005b4f00();
    /* 005a8744: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a8747: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a874a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a874b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8751: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a8756u); f_005b4e50();
    /* 005a8756: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a8759: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005a875d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a875f: je 0x5a8837 */ if (fZ) goto L_005a8837;
L_005a8765:; BB(0x005a8765);
    /* 005a8765: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8767: push 0x3154ea */ { u32 v = 0x3154eau; r_esp -= 4; W32(r_esp, v); }
    /* 005a876c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8772: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5a8777u); f_005f2b20();
    /* 005a8777: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8779: push 0x3154eb */ { u32 v = 0x3154ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005a877e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8784: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5a8789u); f_005f2b20();
    /* 005a8789: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a878b: push 0x3154ec */ { u32 v = 0x3154ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8790: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8796: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5a879bu); f_005f2b20();
    /* 005a879b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a879d: push 0x3154ed */ { u32 v = 0x3154edu; r_esp -= 4; W32(r_esp, v); }
    /* 005a87a2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a87a8: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5a87adu); f_005f2b20();
    /* 005a87ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a87af: push 0x3154ee */ { u32 v = 0x3154eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005a87b4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a87ba: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5a87bfu); f_005f2b20();
    /* 005a87bf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a87c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a87c3: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a87c9: call 0x5b3430 */ r_esp -= 4; W32(r_esp, 0x5a87ceu); f_005b3430();
    /* 005a87ce: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a87d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a87d3: jne 0x5a87e5 */ if (!fZ) goto L_005a87e5;
L_005a87d5:; BB(0x005a87d5);
    /* 005a87d5: push 0x3154ec */ { u32 v = 0x3154ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a87da: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a87e0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a87e5u); f_005f2ba0();
L_005a87e5:; BB(0x005a87e5);
    /* 005a87e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a87e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a87e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a87ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a87ed: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a87f3: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5a87f8u); f_005b3710();
    /* 005a87f8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a87fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a87fd: jne 0x5a880f */ if (!fZ) goto L_005a880f;
L_005a87ff:; BB(0x005a87ff);
    /* 005a87ff: push 0x3154ed */ { u32 v = 0x3154edu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8804: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a880a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a880fu); f_005f2ba0();
L_005a880f:; BB(0x005a880f);
    /* 005a880f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8813: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8819: call 0x5b37f0 */ r_esp -= 4; W32(r_esp, 0x5a881eu); f_005b37f0();
    /* 005a881e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8821: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8823: jne 0x5a8835 */ if (!fZ) goto L_005a8835;
L_005a8825:; BB(0x005a8825);
    /* 005a8825: push 0x3154ee */ { u32 v = 0x3154eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005a882a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8830: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8835u); f_005f2ba0();
L_005a8835:; BB(0x005a8835);
    /* 005a8835: jmp 0x5a8887 */ goto L_005a8887;
L_005a8837:; BB(0x005a8837);
    /* 005a8837: push 0x3154ea */ { u32 v = 0x3154eau; r_esp -= 4; W32(r_esp, v); }
    /* 005a883c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8842: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8847u); f_005f2ba0();
    /* 005a8847: push 0x3154eb */ { u32 v = 0x3154ebu; r_esp -= 4; W32(r_esp, v); }
    /* 005a884c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8852: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8857u); f_005f2ba0();
    /* 005a8857: push 0x3154ec */ { u32 v = 0x3154ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a885c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8862: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8867u); f_005f2ba0();
    /* 005a8867: push 0x3154ed */ { u32 v = 0x3154edu; r_esp -= 4; W32(r_esp, v); }
    /* 005a886c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8872: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8877u); f_005f2ba0();
    /* 005a8877: push 0x3154ee */ { u32 v = 0x3154eeu; r_esp -= 4; W32(r_esp, v); }
    /* 005a887c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8882: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8887u); f_005f2ba0();
L_005a8887:; BB(0x005a8887);
    /* 005a8887: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8889: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a888a: ret 4 */ FN_RET(0x005a8730); r_esp += 8; return;
}

void f_005a8890(void) /* sub_5A8890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8890);
    /* 005a8890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8891: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8893: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8896: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a8899: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a889f: call 0x5b5380 */ r_esp -= 4; W32(r_esp, 0x5a88a4u); f_005b5380();
    /* 005a88a4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a88a7: je 0x5a8948 */ if (fZ) goto L_005a8948;
L_005a88ad:; BB(0x005a88ad);
    /* 005a88ad: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a88b3: call 0x5b5380 */ r_esp -= 4; W32(r_esp, 0x5a88b8u); f_005b5380();
    /* 005a88b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a88bb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a88bf: jl 0x5a8948 */ if ((fS!=fO)) goto L_005a8948;
L_005a88c5:; BB(0x005a88c5);
    /* 005a88c5: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a88c9: jge 0x5a8948 */ if ((fS==fO)) goto L_005a8948;
L_005a88cb:; BB(0x005a88cb);
    /* 005a88cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a88ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a88cf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a88d4u); f_005dcb00();
    /* 005a88d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a88d7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005a88da: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a88de: je 0x5a8948 */ if (fZ) goto L_005a8948;
L_005a88e0:; BB(0x005a88e0);
    /* 005a88e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a88e3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a88e8u); f_0063aac0();
    /* 005a88e8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a88ea: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a88ed: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a88f1: je 0x5a890f */ if (fZ) goto L_005a890f;
L_005a88f3:; BB(0x005a88f3);
    /* 005a88f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a88f6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a88fbu); f_0063aac0();
    /* 005a88fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a88fd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005a8900: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8904: je 0x5a890f */ if (fZ) goto L_005a890f;
L_005a8906:; BB(0x005a8906);
    /* 005a8906: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005a890d: jmp 0x5a8916 */ goto L_005a8916;
L_005a890f:; BB(0x005a890f);
    /* 005a890f: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005a8916:; BB(0x005a8916);
    /* 005a8916: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005a891a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a891c: je 0x5a8948 */ if (fZ) goto L_005a8948;
L_005a891e:; BB(0x005a891e);
    /* 005a891e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8921: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8922: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8928: call 0x5b6700 */ r_esp -= 4; W32(r_esp, 0x5a892du); f_005b6700();
    /* 005a892d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a8930: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8932: je 0x5a8948 */ if (fZ) goto L_005a8948;
L_005a8934:; BB(0x005a8934);
    /* 005a8934: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8936: push 0x3154ef */ { u32 v = 0x3154efu; r_esp -= 4; W32(r_esp, v); }
    /* 005a893b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8941: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5a8946u); f_005f2b20();
    /* 005a8946: jmp 0x5a8958 */ goto L_005a8958;
L_005a8948:; BB(0x005a8948);
    /* 005a8948: push 0x3154ef */ { u32 v = 0x3154efu; r_esp -= 4; W32(r_esp, v); }
    /* 005a894d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005a8953: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5a8958u); f_005f2ba0();
L_005a8958:; BB(0x005a8958);
    /* 005a8958: mov esp, ebp */ r_esp = r_ebp;
    /* 005a895a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a895b: ret  */ FN_RET(0x005a8890); r_esp += 4; return;
}

void f_005a8e90(void) /* sub_5A8E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a8e90);
    /* 005a8e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a8e91: mov ebp, esp */ r_ebp = r_esp;
    /* 005a8e93: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a8e96: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005a8e99: mov dword ptr [ebp - 0x28], 0x20 */ W32((u32)(r_ebp+0xffffffd8u), 0x20u);
    /* 005a8ea0: mov dword ptr [ebp - 0x24], 0x22 */ W32((u32)(r_ebp+0xffffffdcu), 0x22u);
    /* 005a8ea7: mov dword ptr [ebp - 0x20], 0x20 */ W32((u32)(r_ebp+0xffffffe0u), 0x20u);
    /* 005a8eae: mov dword ptr [ebp - 0x1c], 0x40 */ W32((u32)(r_ebp+0xffffffe4u), 0x40u);
    /* 005a8eb5: mov dword ptr [ebp - 0x18], 0x20 */ W32((u32)(r_ebp+0xffffffe8u), 0x20u);
    /* 005a8ebc: mov dword ptr [ebp - 0x14], 0x5e */ W32((u32)(r_ebp+0xffffffecu), 0x5eu);
    /* 005a8ec3: mov dword ptr [ebp - 0x10], 0x20 */ W32((u32)(r_ebp+0xfffffff0u), 0x20u);
    /* 005a8eca: mov dword ptr [ebp - 0xc], 0x7c */ W32((u32)(r_ebp+0xfffffff4u), 0x7cu);
    /* 005a8ed1: mov dword ptr [ebp - 8], 5 */ W32((u32)(r_ebp+0xfffffff8u), 0x5u);
    /* 005a8ed8: mov dword ptr [ebp - 4], 0x9a */ W32((u32)(r_ebp+0xfffffffcu), 0x9au);
    /* 005a8edf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ee1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8ee4: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5a8ee9u); f_005fb2b0();
    /* 005a8ee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8eeb: jne 0x5a8f37 */ if (!fZ) goto L_005a8f37;
L_005a8eed:; BB(0x005a8eed);
    /* 005a8eed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8eef: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ef4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ef6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8ef8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8efb: mov ecx, dword ptr [ebp + eax*8 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 005a8eff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f00: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a8f03: mov eax, dword ptr [ebp + edx*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd8u));
    /* 005a8f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f08: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8f0a: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8f0e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005a8f11: add ecx, 0x1398 */ {  u32 a = r_ecx; u32 b = 0x1398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a8f17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f1c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8f1f: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5a8f24u); f_005f9ce0();
    /* 005a8f24: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8f28: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a8f2b: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5a8f30u); f_005fb2b0();
    /* 005a8f30: mov ecx, eax */ r_ecx = r_eax;
    /* 005a8f32: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5a8f37u); f_005eb5d0();
L_005a8f37:; BB(0x005a8f37);
    /* 005a8f37: mov esp, ebp */ r_esp = r_ebp;
    /* 005a8f39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a8f3a: ret 4 */ FN_RET(0x005a8e90); r_esp += 8; return;
}

