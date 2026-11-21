#include "protos.h"

void f_0042c340(void) /* sub_42C340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c340);
    /* 0042c340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c341: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c344: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042c347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c34a: mov ecx, dword ptr [eax + 0xb0c] */ r_ecx = R32((u32)(r_eax+0xb0cu));
    /* 0042c350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c351: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042c357: call 0x42a370 */ r_esp -= 4; W32(r_esp, 0x42c35cu); f_0042a370();
    /* 0042c35c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042c35f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c361: je 0x42c365 */ if (fZ) goto L_0042c365;
L_0042c363:; BB(0x0042c363);
    /* 0042c363: jmp 0x42c38a */ goto L_0042c38a;
L_0042c365:; BB(0x0042c365);
    /* 0042c365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c368: cmp dword ptr [eax + 0xae4], 0 */ {  u32 a = R32((u32)(r_eax+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c36f: je 0x42c38a */ if (fZ) goto L_0042c38a;
L_0042c371:; BB(0x0042c371);
    /* 0042c371: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c374: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 0042c37a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c37d: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 0042c383: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042c385: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042c388: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c38au); call_ind(t); }
L_0042c38a:; BB(0x0042c38a);
    /* 0042c38a: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c38c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c38d: ret  */ FN_RET(0x0042c340); r_esp += 4; return;
}

void f_0042c390(void) /* sub_42C390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c390);
    /* 0042c390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c391: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042c397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c39a: cmp dword ptr [eax + 0xae4], 0 */ {  u32 a = R32((u32)(r_eax+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c3a1: je 0x42c3cc */ if (fZ) goto L_0042c3cc;
L_0042c3a3:; BB(0x0042c3a3);
    /* 0042c3a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3a8: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 0042c3ae: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42c3b3u); f_005f5d50();
    /* 0042c3b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3b6: mov eax, dword ptr [edx + 0xae4] */ r_eax = R32((u32)(r_edx+0xae4u));
    /* 0042c3bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3bf: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 0042c3c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042c3c7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042c3ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c3ccu); call_ind(t); }
L_0042c3cc:; BB(0x0042c3cc);
    /* 0042c3cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3cf: cmp dword ptr [ecx + 0xae8], 0 */ {  u32 a = R32((u32)(r_ecx+0xae8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c3d6: je 0x42c403 */ if (fZ) goto L_0042c403;
L_0042c3d8:; BB(0x0042c3d8);
    /* 0042c3d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c3da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3dd: mov ecx, dword ptr [edx + 0xae8] */ r_ecx = R32((u32)(r_edx+0xae8u));
    /* 0042c3e3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42c3e8u); f_005f5d50();
    /* 0042c3e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3eb: mov ecx, dword ptr [eax + 0xae8] */ r_ecx = R32((u32)(r_eax+0xae8u));
    /* 0042c3f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c3f4: mov eax, dword ptr [edx + 0xae8] */ r_eax = R32((u32)(r_edx+0xae8u));
    /* 0042c3fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042c3fc: mov ecx, eax */ r_ecx = r_eax;
    /* 0042c3fe: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042c401: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c403u); call_ind(t); }
L_0042c403:; BB(0x0042c403);
    /* 0042c403: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c406: ret  */ FN_RET(0x0042c390); r_esp += 4; return;
}

void f_0042c410(void) /* sub_42C410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c410);
    /* 0042c410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c411: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042c415: push 0x69e568 */ { u32 v = 0x69e568u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c41a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042c420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c421: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c424: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042c429: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042c42b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c42c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042c42f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042c435: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042c438: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c43b: cmp dword ptr [eax + 0xae4], 0 */ {  u32 a = R32((u32)(r_eax+0xae4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c442: je 0x42c49b */ if (fZ) goto L_0042c49b;
L_0042c444:; BB(0x0042c444);
    /* 0042c444: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c446: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42c44bu); f_00686d82();
    /* 0042c44b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c44e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042c451: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042c458: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c45c: je 0x42c475 */ if (fZ) goto L_0042c475;
L_0042c45e:; BB(0x0042c45e);
    /* 0042c45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c464: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c466: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c468: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c46b: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x42c470u); f_00601110();
    /* 0042c470: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042c473: jmp 0x42c47c */ goto L_0042c47c;
L_0042c475:; BB(0x0042c475);
    /* 0042c475: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0042c47c:; BB(0x0042c47c);
    /* 0042c47c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c47f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042c482: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042c489: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c48d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c490: mov ecx, dword ptr [eax + 0xae4] */ r_ecx = R32((u32)(r_eax+0xae4u));
    /* 0042c496: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42c49bu); f_005f5d50();
L_0042c49b:; BB(0x0042c49b);
    /* 0042c49b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c49e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042c4a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042c4a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c4a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c4a9: ret  */ FN_RET(0x0042c410); r_esp += 4; return;
}

void f_0042c8a0(void) /* sub_42C8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c8a0);
    /* 0042c8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c8a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c8a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042c8a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042c8ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c8ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c8b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c8b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c8b4: call 0x42ca40 */ r_esp -= 4; W32(r_esp, 0x42c8b9u); f_0042ca40();
    /* 0042c8b9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042c8bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c8bf: cmp dword ptr [eax + edx*4 + 0xafc], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0xafcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c8c7: je 0x42c8ea */ if (fZ) goto L_0042c8ea;
L_0042c8c9:; BB(0x0042c8c9);
    /* 0042c8c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c8cc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c8cf: mov eax, dword ptr [edx + ecx*4 + 0xafc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xafcu));
    /* 0042c8d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c8d9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c8dc: mov ecx, dword ptr [edx + ecx*4 + 0xafc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xafcu));
    /* 0042c8e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042c8e5: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0042c8e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c8eau); call_ind(t); }
L_0042c8ea:; BB(0x0042c8ea);
    /* 0042c8ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c8ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c8f0: mov edx, dword ptr [ecx + eax*4 + 0xafc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xafcu));
    /* 0042c8f7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042c8fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042c8fd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042c900: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c904: je 0x42c919 */ if (fZ) goto L_0042c919;
L_0042c906:; BB(0x0042c906);
    /* 0042c906: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c90b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042c90d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c910: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c912: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c914u); call_ind(t); }
    /* 0042c914: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042c917: jmp 0x42c920 */ goto L_0042c920;
L_0042c919:; BB(0x0042c919);
    /* 0042c919: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0042c920:; BB(0x0042c920);
    /* 0042c920: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c923: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c926: mov dword ptr [edx + ecx*4 + 0xafc], 0 */ W32((u32)(r_edx+r_ecx*4+0xafcu), 0x0u);
    /* 0042c931: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c933: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c934: ret 8 */ FN_RET(0x0042c8a0); r_esp += 12; return;
}

void f_0042c940(void) /* sub_42C940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c940);
    /* 0042c940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c941: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c943: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c946: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042c949: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c94c: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42c951u); f_005cc2e0();
    /* 0042c951: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042c954: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c957: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042c95a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c95d: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0042c961: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042c964: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0042c967: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0042c96b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042c96e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0042c971: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c975: jle 0x42c9a8 */ if ((fZ||fS!=fO)) goto L_0042c9a8;
L_0042c977:; BB(0x0042c977);
    /* 0042c977: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c97a: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42c97fu); f_005cc2e0();
    /* 0042c97f: mov ecx, eax */ r_ecx = r_eax;
    /* 0042c981: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42c986u); f_005f5400();
    /* 0042c986: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c989: jl 0x42c9a8 */ if ((fS!=fO)) goto L_0042c9a8;
L_0042c98b:; BB(0x0042c98b);
    /* 0042c98b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c98e: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42c993u); f_005cc2e0();
    /* 0042c993: mov ecx, eax */ r_ecx = r_eax;
    /* 0042c995: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42c99au); f_005f5400();
    /* 0042c99a: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c99d: jg 0x42c9a8 */ if ((!fZ&&fS==fO)) goto L_0042c9a8;
L_0042c99f:; BB(0x0042c99f);
    /* 0042c99f: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0042c9a6: jmp 0x42c9af */ goto L_0042c9af;
L_0042c9a8:; BB(0x0042c9a8);
    /* 0042c9a8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0042c9af:; BB(0x0042c9af);
    /* 0042c9af: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0042c9b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c9b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c9b5: ret 8 */ FN_RET(0x0042c940); r_esp += 12; return;
}

void f_0042c9c0(void) /* sub_42C9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c9c0);
    /* 0042c9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c9c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c9c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042c9c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c9cc: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42c9d1u); f_005cc2e0();
    /* 0042c9d1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042c9d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c9d7: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042c9da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c9dd: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 0042c9e1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042c9e4: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0042c9e7: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0042c9eb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042c9ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0042c9f1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c9f5: jg 0x42ca28 */ if ((!fZ&&fS==fO)) goto L_0042ca28;
L_0042c9f7:; BB(0x0042c9f7);
    /* 0042c9f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c9fa: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42c9ffu); f_005cc2e0();
    /* 0042c9ff: mov ecx, eax */ r_ecx = r_eax;
    /* 0042ca01: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42ca06u); f_005f5400();
    /* 0042ca06: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ca09: jl 0x42ca28 */ if ((fS!=fO)) goto L_0042ca28;
L_0042ca0b:; BB(0x0042ca0b);
    /* 0042ca0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042ca0e: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42ca13u); f_005cc2e0();
    /* 0042ca13: mov ecx, eax */ r_ecx = r_eax;
    /* 0042ca15: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42ca1au); f_005f5400();
    /* 0042ca1a: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042ca1d: jg 0x42ca28 */ if ((!fZ&&fS==fO)) goto L_0042ca28;
L_0042ca1f:; BB(0x0042ca1f);
    /* 0042ca1f: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0042ca26: jmp 0x42ca2f */ goto L_0042ca2f;
L_0042ca28:; BB(0x0042ca28);
    /* 0042ca28: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0042ca2f:; BB(0x0042ca2f);
    /* 0042ca2f: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0042ca32: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ca34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ca35: ret 8 */ FN_RET(0x0042c9c0); r_esp += 12; return;
}

void f_0042ca40(void) /* sub_42CA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042ca40);
    /* 0042ca40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042ca41: mov ebp, esp */ r_ebp = r_esp;
    /* 0042ca43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ca46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042ca49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ca4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ca4f: cmp dword ptr [ecx + eax*4 + 0xaec], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xaecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ca57: je 0x42ca7c */ if (fZ) goto L_0042ca7c;
L_0042ca59:; BB(0x0042ca59);
    /* 0042ca59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ca5c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ca5f: mov ecx, dword ptr [eax + edx*4 + 0xaec] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xaecu));
    /* 0042ca66: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ca69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ca6c: mov edx, dword ptr [eax + edx*4 + 0xaec] */ r_edx = R32((u32)(r_eax+r_edx*4+0xaecu));
    /* 0042ca73: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042ca75: mov ecx, edx */ r_ecx = r_edx;
    /* 0042ca77: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0042ca7a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42ca7cu); call_ind(t); }
L_0042ca7c:; BB(0x0042ca7c);
    /* 0042ca7c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ca7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ca82: mov edx, dword ptr [ecx + eax*4 + 0xaec] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xaecu));
    /* 0042ca89: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042ca8c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ca8f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042ca92: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ca96: je 0x42caab */ if (fZ) goto L_0042caab;
L_0042ca98:; BB(0x0042ca98);
    /* 0042ca98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ca9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042ca9d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ca9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042caa2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042caa4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42caa6u); call_ind(t); }
    /* 0042caa6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042caa9: jmp 0x42cab2 */ goto L_0042cab2;
L_0042caab:; BB(0x0042caab);
    /* 0042caab: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0042cab2:; BB(0x0042cab2);
    /* 0042cab2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cab5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042cab8: mov dword ptr [edx + ecx*4 + 0xaec], 0 */ W32((u32)(r_edx+r_ecx*4+0xaecu), 0x0u);
    /* 0042cac3: mov esp, ebp */ r_esp = r_ebp;
    /* 0042cac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cac6: ret 8 */ FN_RET(0x0042ca40); r_esp += 12; return;
}

void f_0042cad0(void) /* sub_42CAD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cad0);
    /* 0042cad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cad1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042cad6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042cad7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042cada: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042cae1: jmp 0x42caec */ goto L_0042caec;
L_0042cae3:; BB(0x0042cae3);
    /* 0042cae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cae6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cae9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042caec:; BB(0x0042caec);
    /* 0042caec: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042caf0: jge 0x42cb61 */ if ((fS==fO)) goto L_0042cb61;
L_0042caf2:; BB(0x0042caf2);
    /* 0042caf2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042caf5: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cafb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cafe: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0042cb05: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042cb08: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cb0b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cb0d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cb10: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cb14: je 0x42cb5f */ if (fZ) goto L_0042cb5f;
L_0042cb16:; BB(0x0042cb16);
    /* 0042cb16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042cb19: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cb1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cb22: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 0042cb29: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042cb2c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cb2f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042cb31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cb34: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0042cb37: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042cb3a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cb3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cb40: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cb46: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cb49: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 0042cb50: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cb52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cb55: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0042cb58: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042cb5a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042cb5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42cb5fu); call_ind(t); }
L_0042cb5f:; BB(0x0042cb5f);
    /* 0042cb5f: jmp 0x42cae3 */ goto L_0042cae3;
L_0042cb61:; BB(0x0042cb61);
    /* 0042cb61: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042cb62: mov esp, ebp */ r_esp = r_ebp;
    /* 0042cb64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cb65: ret 8 */ FN_RET(0x0042cad0); r_esp += 12; return;
}

void f_0042cb70(void) /* sub_42CB70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cb70);
    /* 0042cb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cb73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042cb76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042cb79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042cb80: jmp 0x42cb8b */ goto L_0042cb8b;
L_0042cb82:; BB(0x0042cb82);
    /* 0042cb82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cb85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cb88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042cb8b:; BB(0x0042cb8b);
    /* 0042cb8b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cb8f: jge 0x42cbc5 */ if ((fS==fO)) goto L_0042cbc5;
L_0042cb91:; BB(0x0042cb91);
    /* 0042cb91: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042cb98: jmp 0x42cba3 */ goto L_0042cba3;
L_0042cb9a:; BB(0x0042cb9a);
    /* 0042cb9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cb9d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cba0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0042cba3:; BB(0x0042cba3);
    /* 0042cba3: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cba7: jge 0x42cbc3 */ if ((fS==fO)) goto L_0042cbc3;
L_0042cba9:; BB(0x0042cba9);
    /* 0042cba9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbac: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cbaf: je 0x42cbc1 */ if (fZ) goto L_0042cbc1;
L_0042cbb1:; BB(0x0042cbb1);
    /* 0042cbb1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cbb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cbb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cbb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042cbbc: call 0x5cc440 */ r_esp -= 4; W32(r_esp, 0x42cbc1u); f_005cc440();
L_0042cbc1:; BB(0x0042cbc1);
    /* 0042cbc1: jmp 0x42cb9a */ goto L_0042cb9a;
L_0042cbc3:; BB(0x0042cbc3);
    /* 0042cbc3: jmp 0x42cb82 */ goto L_0042cb82;
L_0042cbc5:; BB(0x0042cbc5);
    /* 0042cbc5: mov esp, ebp */ r_esp = r_ebp;
    /* 0042cbc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cbc8: ret 4 */ FN_RET(0x0042cb70); r_esp += 8; return;
}

void f_0042cbd0(void) /* sub_42CBD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cbd0);
    /* 0042cbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cbd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042cbd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042cbd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042cbe0: jmp 0x42cbeb */ goto L_0042cbeb;
L_0042cbe2:; BB(0x0042cbe2);
    /* 0042cbe2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cbe5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cbe8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042cbeb:; BB(0x0042cbeb);
    /* 0042cbeb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cbef: jge 0x42cc1d */ if ((fS==fO)) goto L_0042cc1d;
L_0042cbf1:; BB(0x0042cbf1);
    /* 0042cbf1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0042cbf8: jmp 0x42cc03 */ goto L_0042cc03;
L_0042cbfa:; BB(0x0042cbfa);
    /* 0042cbfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cbfd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cc00: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0042cc03:; BB(0x0042cc03);
    /* 0042cc03: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cc07: jge 0x42cc1b */ if ((fS==fO)) goto L_0042cc1b;
L_0042cc09:; BB(0x0042cc09);
    /* 0042cc09: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042cc0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042cc10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042cc14: call 0x42cad0 */ r_esp -= 4; W32(r_esp, 0x42cc19u); f_0042cad0();
    /* 0042cc19: jmp 0x42cbfa */ goto L_0042cbfa;
L_0042cc1b:; BB(0x0042cc1b);
    /* 0042cc1b: jmp 0x42cbe2 */ goto L_0042cbe2;
L_0042cc1d:; BB(0x0042cc1d);
    /* 0042cc1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042cc1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042cc20: ret  */ FN_RET(0x0042cbd0); r_esp += 4; return;
}

void f_0042cec0(void) /* sub_42CEC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cec0);
    /* 0042cec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cec5: push 0x69e600 */ { u32 v = 0x69e600u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ceca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042ced0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ced1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042ced4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042ced9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042cedb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cedc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042cedf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042cee5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042cee8: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042ceee: call 0x42bda0 */ r_esp -= 4; W32(r_esp, 0x42cef3u); f_0042bda0();
    /* 0042cef3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cef6: cmp dword ptr [eax + 0xae0], 0 */ {  u32 a = R32((u32)(r_eax+0xae0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cefd: jne 0x42cf49 */ if (!fZ) goto L_0042cf49;
L_0042ceff:; BB(0x0042ceff);
    /* 0042ceff: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf04: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42cf09u); f_00686d82();
    /* 0042cf09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042cf0c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042cf0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042cf16: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cf1a: je 0x42cf29 */ if (fZ) goto L_0042cf29;
L_0042cf1c:; BB(0x0042cf1c);
    /* 0042cf1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042cf1f: call 0x5cd360 */ r_esp -= 4; W32(r_esp, 0x42cf24u); f_005cd360();
    /* 0042cf24: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042cf27: jmp 0x42cf30 */ goto L_0042cf30;
L_0042cf29:; BB(0x0042cf29);
    /* 0042cf29: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0042cf30:; BB(0x0042cf30);
    /* 0042cf30: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cf33: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042cf36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042cf3d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cf40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042cf43: mov dword ptr [edx + 0xae0], eax */ W32((u32)(r_edx+0xae0u), r_eax);
L_0042cf49:; BB(0x0042cf49);
    /* 0042cf49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf4b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf4d: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf56: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cf59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042cf5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cf5e: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0042cf64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42cf66u); call_ind(t); }
    /* 0042cf66: sub eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042cf69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cf71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042cf73: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cf76: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 0042cf7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42cf7eu); call_ind(t); }
    /* 0042cf7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf7f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf81: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf83: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf85: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf8a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cf8d: mov ecx, dword ptr [ecx + 0xae0] */ r_ecx = R32((u32)(r_ecx+0xae0u));
    /* 0042cf93: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x42cf98u); f_005ec8f0();
    /* 0042cf98: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cf9d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cfa2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cfa7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cfaa: mov ecx, dword ptr [edx + 0xae0] */ r_ecx = R32((u32)(r_edx+0xae0u));
    /* 0042cfb0: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x42cfb5u); f_005ee8c0();
    /* 0042cfb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cfb7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cfb9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cfbc: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0042cfc2: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x42cfc7u); f_005ef340();
    /* 0042cfc7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cfca: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0042cfd0: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42cfd5u); f_005f5400();
    /* 0042cfd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cfd6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042cfdc: call 0x4388a0 */ r_esp -= 4; W32(r_esp, 0x42cfe1u); f_004388a0();
    /* 0042cfe1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042cfe4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cfe6: je 0x42d016 */ if (fZ) goto L_0042d016;
L_0042cfe8:; BB(0x0042cfe8);
    /* 0042cfe8: push 0x6b6cb4 */ { u32 v = 0x6b6cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042cfed: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42cff2u); f_00630f40();
    /* 0042cff2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042cff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cff6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042cff9: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0042cfff: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d002: mov eax, dword ptr [edx + 0xae0] */ r_eax = R32((u32)(r_edx+0xae0u));
    /* 0042d008: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d00a: mov ecx, eax */ r_ecx = r_eax;
    /* 0042d00c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0042d012: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d014u); call_ind(t); }
    /* 0042d014: jmp 0x42d040 */ goto L_0042d040;
L_0042d016:; BB(0x0042d016);
    /* 0042d016: push 0x6b6ca0 */ { u32 v = 0x6b6ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d01b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42d020u); f_00630f40();
    /* 0042d020: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d024: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d027: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 0042d02d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d030: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0042d036: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042d038: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0042d03e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d040u); call_ind(t); }
L_0042d040:; BB(0x0042d040);
    /* 0042d040: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d043: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 0042d049: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d04c: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0042d052: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042d054: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042d057: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d059u); call_ind(t); }
    /* 0042d059: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d05c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042d063: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042d064: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d067: ret  */ FN_RET(0x0042cec0); r_esp += 4; return;
}

