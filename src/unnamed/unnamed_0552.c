#include "protos.h"

void f_00552620(void) /* sub_552620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552620);
    /* 00552620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552621: mov ebp, esp */ r_ebp = r_esp;
    /* 00552623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00552625: push 0x6a5396 */ { u32 v = 0x6a5396u; r_esp -= 4; W32(r_esp, v); }
    /* 0055262a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00552630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552631: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552634: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00552639: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055263b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055263c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055263f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00552645: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00552648: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0055264b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00552651: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00552657: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0055265a: cmp dword ptr [ebp - 0x24], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055265e: ja 0x5526b4 */ if ((!fC&&!fZ)) goto L_005526b4;
L_00552660:; BB(0x00552660);
    /* 00552660: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00552663: movzx ecx, byte ptr [eax + 0x55270c] */ r_ecx = (u32)R8((u32)(r_eax+0x55270cu));
    /* 0055266a: jmp dword ptr [ecx*4 + 0x552704] */ { u32 t = R32((u32)(r_ecx*4+0x552704u)); switch (t) { case 0x552671u: goto L_00552671; case 0x5526b4u: goto L_005526b4; default: UNSUP(0x0055266a, "jump table entry is not a known target"); } }
L_00552671:; BB(0x00552671);
    /* 00552671: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552676: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55267bu); f_00686d82();
    /* 0055267b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055267e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00552681: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00552688: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055268c: je 0x55269b */ if (fZ) goto L_0055269b;
L_0055268e:; BB(0x0055268e);
    /* 0055268e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00552691: call 0x552720 */ r_esp -= 4; W32(r_esp, 0x552696u); f_00552720();
    /* 00552696: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00552699: jmp 0x5526a2 */ goto L_005526a2;
L_0055269b:; BB(0x0055269b);
    /* 0055269b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005526a2:; BB(0x005526a2);
    /* 005526a2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005526a5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005526a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005526af: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005526b2: jmp 0x5526f5 */ goto L_005526f5;
L_005526b4:; BB(0x005526b4);
    /* 005526b4: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 005526b9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5526beu); f_00686d82();
    /* 005526be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005526c1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005526c4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005526cb: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005526cf: je 0x5526de */ if (fZ) goto L_005526de;
L_005526d1:; BB(0x005526d1);
    /* 005526d1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005526d4: call 0x552c60 */ r_esp -= 4; W32(r_esp, 0x5526d9u); f_00552c60();
    /* 005526d9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005526dc: jmp 0x5526e5 */ goto L_005526e5;
L_005526de:; BB(0x005526de);
    /* 005526de: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005526e5:; BB(0x005526e5);
    /* 005526e5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005526e8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005526eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005526f2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_005526f5:; BB(0x005526f5);
    /* 005526f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005526f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005526ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00552700: mov esp, ebp */ r_esp = r_ebp;
    /* 00552702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552703: ret  */ FN_RET(0x00552620); r_esp += 4; return;
}

void f_00552e20(void) /* sub_552E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552e20);
    /* 00552e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00552e23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552e26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00552e29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00552e2c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00552e2f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00552e33: ja 0x552e69 */ if ((!fC&&!fZ)) goto L_00552e69;
L_00552e35:; BB(0x00552e35);
    /* 00552e35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552e38: jmp dword ptr [ecx*4 + 0x552e74] */ { u32 t = R32((u32)(r_ecx*4+0x552e74u)); switch (t) { case 0x552e3fu: goto L_00552e3f; case 0x552e46u: goto L_00552e46; case 0x552e4du: goto L_00552e4d; case 0x552e54u: goto L_00552e54; case 0x552e5bu: goto L_00552e5b; case 0x552e62u: goto L_00552e62; default: UNSUP(0x00552e38, "jump table entry is not a known target"); } }
L_00552e3f:; BB(0x00552e3f);
    /* 00552e3f: mov eax, 0x30f34a */ r_eax = 0x30f34au;
    /* 00552e44: jmp 0x552e6c */ goto L_00552e6c;
L_00552e46:; BB(0x00552e46);
    /* 00552e46: mov eax, 0x30f349 */ r_eax = 0x30f349u;
    /* 00552e4b: jmp 0x552e6c */ goto L_00552e6c;
L_00552e4d:; BB(0x00552e4d);
    /* 00552e4d: mov eax, 0x30f348 */ r_eax = 0x30f348u;
    /* 00552e52: jmp 0x552e6c */ goto L_00552e6c;
L_00552e54:; BB(0x00552e54);
    /* 00552e54: mov eax, 0x30f347 */ r_eax = 0x30f347u;
    /* 00552e59: jmp 0x552e6c */ goto L_00552e6c;
L_00552e5b:; BB(0x00552e5b);
    /* 00552e5b: mov eax, 0x30f34b */ r_eax = 0x30f34bu;
    /* 00552e60: jmp 0x552e6c */ goto L_00552e6c;
L_00552e62:; BB(0x00552e62);
    /* 00552e62: mov eax, 0x30f34c */ r_eax = 0x30f34cu;
    /* 00552e67: jmp 0x552e6c */ goto L_00552e6c;
L_00552e69:; BB(0x00552e69);
    /* 00552e69: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00552e6c:; BB(0x00552e6c);
    /* 00552e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00552e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552e6f: ret 4 */ FN_RET(0x00552e20); r_esp += 8; return;
}

void f_00552e90(void) /* sub_552E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552e90);
    /* 00552e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00552e93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552e96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00552e99: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00552ea0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00552ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552ea4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00552eaa: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00552ead: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x552eb2u); f_005fb300();
    /* 00552eb2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00552eb5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552eb9: je 0x552ecb */ if (fZ) goto L_00552ecb;
L_00552ebb:; BB(0x00552ebb);
    /* 00552ebb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552ebe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552ec0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552ec3: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00552ec9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x552ecbu); call_ind(t); }
L_00552ecb:; BB(0x00552ecb);
    /* 00552ecb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00552ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552ecf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552ed2: call 0x552e20 */ r_esp -= 4; W32(r_esp, 0x552ed7u); f_00552e20();
    /* 00552ed7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00552eda: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552ede: je 0x552ef1 */ if (fZ) goto L_00552ef1;
L_00552ee0:; BB(0x00552ee0);
    /* 00552ee0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552ee2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552ee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00552ee6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552eec: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x552ef1u); f_005f2b20();
L_00552ef1:; BB(0x00552ef1);
    /* 00552ef1: mov esp, ebp */ r_esp = r_ebp;
    /* 00552ef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552ef4: ret 4 */ FN_RET(0x00552e90); r_esp += 8; return;
}

void f_00552f00(void) /* sub_552F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552f00);
    /* 00552f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00552f03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552f06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00552f09: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00552f10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00552f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552f14: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00552f1a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00552f1d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x552f22u); f_005fb300();
    /* 00552f22: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00552f25: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552f29: je 0x552f3b */ if (fZ) goto L_00552f3b;
L_00552f2b:; BB(0x00552f2b);
    /* 00552f2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552f2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552f30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552f33: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00552f39: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x552f3bu); call_ind(t); }
L_00552f3b:; BB(0x00552f3b);
    /* 00552f3b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00552f3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552f3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552f42: call 0x552e20 */ r_esp -= 4; W32(r_esp, 0x552f47u); f_00552e20();
    /* 00552f47: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00552f4a: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552f4e: je 0x552f5f */ if (fZ) goto L_00552f5f;
L_00552f50:; BB(0x00552f50);
    /* 00552f50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f54: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552f5a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x552f5fu); f_005f2ba0();
L_00552f5f:; BB(0x00552f5f);
    /* 00552f5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00552f61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552f62: ret 4 */ FN_RET(0x00552f00); r_esp += 8; return;
}

void f_00552f70(void) /* sub_552F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552f70);
    /* 00552f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00552f73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552f76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00552f79: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 00552f80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00552f87: jmp 0x552f92 */ goto L_00552f92;
L_00552f89:; BB(0x00552f89);
    /* 00552f89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552f8c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00552f8f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00552f92:; BB(0x00552f92);
    /* 00552f92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552f95: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552f98: jge 0x552faf */ if ((fS==fO)) goto L_00552faf;
L_00552f9a:; BB(0x00552f9a);
    /* 00552f9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552f9d: mov eax, dword ptr [edx*4 + 0x73efe0] */ r_eax = R32((u32)(r_edx*4+0x73efe0u));
    /* 00552fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552fa5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552fa8: call 0x552f00 */ r_esp -= 4; W32(r_esp, 0x552fadu); f_00552f00();
    /* 00552fad: jmp 0x552f89 */ goto L_00552f89;
L_00552faf:; BB(0x00552faf);
    /* 00552faf: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00552fb4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552fba: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x552fbfu); f_005f2ba0();
    /* 00552fbf: push 0x30f343 */ { u32 v = 0x30f343u; r_esp -= 4; W32(r_esp, v); }
    /* 00552fc4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552fca: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x552fcfu); f_005f2ba0();
    /* 00552fcf: push 0x30f344 */ { u32 v = 0x30f344u; r_esp -= 4; W32(r_esp, v); }
    /* 00552fd4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552fda: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x552fdfu); f_005f2ba0();
    /* 00552fdf: push 0x30f345 */ { u32 v = 0x30f345u; r_esp -= 4; W32(r_esp, v); }
    /* 00552fe4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552fea: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x552fefu); f_005f2ba0();
    /* 00552fef: push 0x30f346 */ { u32 v = 0x30f346u; r_esp -= 4; W32(r_esp, v); }
    /* 00552ff4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00552ffa: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x552fffu); f_005f2ba0();
    /* 00552fff: mov esp, ebp */ r_esp = r_ebp;
    /* 00553001: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00553002: ret  */ FN_RET(0x00552f70); r_esp += 4; return;
}

