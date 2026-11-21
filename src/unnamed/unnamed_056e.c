#include "protos.h"

void f_0056e230(void) /* sub_56E230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e230);
    /* 0056e230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e231: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e235: push 0x6a5e40 */ { u32 v = 0x6a5e40u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e23a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056e240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e241: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e244: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056e249: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056e24b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e24c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056e24f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056e255: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0056e258: mov dword ptr [ebp - 0x34], 4 */ W32((u32)(r_ebp+0xffffffccu), 0x4u);
    /* 0056e25f: mov dword ptr [ebp - 0x30], 3 */ W32((u32)(r_ebp+0xffffffd0u), 0x3u);
    /* 0056e266: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0056e26d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0056e274: mov dword ptr [ebp - 0x24], 2 */ W32((u32)(r_ebp+0xffffffdcu), 0x2u);
    /* 0056e27b: mov dword ptr [ebp - 0x20], 5 */ W32((u32)(r_ebp+0xffffffe0u), 0x5u);
    /* 0056e282: mov dword ptr [ebp - 0x1c], 6 */ W32((u32)(r_ebp+0xffffffe4u), 0x6u);
    /* 0056e289: mov dword ptr [ebp - 0x18], 7 */ W32((u32)(r_ebp+0xffffffe8u), 0x7u);
    /* 0056e290: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 0056e297: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0056e29e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e2a1: call 0x56f0d0 */ r_esp -= 4; W32(r_esp, 0x56e2a6u); f_0056f0d0();
    /* 0056e2a6: mov eax, dword ptr [ebp + eax*4 - 0x34] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffccu));
    /* 0056e2aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2ab: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e2ae: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0056e2b1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e2b4: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056e2b7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056e2b9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056e2bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e2c1u); call_ind(t); }
    /* 0056e2c1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2c3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56e2c8u); f_00686d82();
    /* 0056e2c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e2cb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0056e2ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056e2d5: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e2d9: je 0x56e2f2 */ if (fZ) goto L_0056e2f2;
L_0056e2db:; BB(0x0056e2db);
    /* 0056e2db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e2e5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056e2e8: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x56e2edu); f_00601110();
    /* 0056e2ed: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0056e2f0: jmp 0x56e2f9 */ goto L_0056e2f9;
L_0056e2f2:; BB(0x0056e2f2);
    /* 0056e2f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0056e2f9:; BB(0x0056e2f9);
    /* 0056e2f9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0056e2fc: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0056e2ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e306: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056e309: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e30a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e30d: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056e310: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56e315u); f_005f5d50();
    /* 0056e315: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e318: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0056e31b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0056e31e: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056e321: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056e323: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056e326: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e328u); call_ind(t); }
    /* 0056e328: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e32b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056e332: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e333: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e335: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e336: ret  */ FN_RET(0x0056e230); r_esp += 4; return;
}

void f_0056e340(void) /* sub_56E340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e340);
    /* 0056e340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e341: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e345: push 0x6a5e66 */ { u32 v = 0x6a5e66u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e34a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056e350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e351: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e354: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056e359: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056e35b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e35c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056e35f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056e365: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056e368: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e36a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56e36fu); f_00686d82();
    /* 0056e36f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e372: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056e375: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056e37c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e380: je 0x56e391 */ if (fZ) goto L_0056e391;
L_0056e382:; BB(0x0056e382);
    /* 0056e382: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e384: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e387: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x56e38cu); f_00600a70();
    /* 0056e38c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056e38f: jmp 0x56e398 */ goto L_0056e398;
L_0056e391:; BB(0x0056e391);
    /* 0056e391: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0056e398:; BB(0x0056e398);
    /* 0056e398: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056e39b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056e39e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e3a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e3a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3a9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e3ac: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 0056e3af: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56e3b4u); f_005f5d50();
    /* 0056e3b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e3b7: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0056e3ba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e3bd: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0056e3c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e3c2: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e3c4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056e3c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e3c9u); call_ind(t); }
    /* 0056e3c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e3cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056e3d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e3d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e3d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e3d7: ret  */ FN_RET(0x0056e340); r_esp += 4; return;
}

void f_0056e3e0(void) /* sub_56E3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e3e0);
    /* 0056e3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3e5: push 0x6a5e8c */ { u32 v = 0x6a5e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056e3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e3f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056e3f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056e3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e3fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056e3ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056e405: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056e408: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056e40a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56e40fu); f_00686d82();
    /* 0056e40f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e412: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056e415: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056e41c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e420: je 0x56e431 */ if (fZ) goto L_0056e431;
L_0056e422:; BB(0x0056e422);
    /* 0056e422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e424: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e427: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x56e42cu); f_00600a70();
    /* 0056e42c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056e42f: jmp 0x56e438 */ goto L_0056e438;
L_0056e431:; BB(0x0056e431);
    /* 0056e431: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0056e438:; BB(0x0056e438);
    /* 0056e438: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056e43b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056e43e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056e445: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e448: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e449: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e44c: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0056e44f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56e454u); f_005f5d50();
    /* 0056e454: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e457: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056e45a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e45d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056e460: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e462: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e464: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056e467: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e469u); call_ind(t); }
    /* 0056e469: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e46c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056e473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056e474: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e476: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e477: ret  */ FN_RET(0x0056e3e0); r_esp += 4; return;
}

void f_0056e480(void) /* sub_56E480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e480);
    /* 0056e480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e481: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e487: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e48a: movzx ecx, byte ptr [eax + 0x99] */ r_ecx = (u32)R8((u32)(r_eax+0x99u));
    /* 0056e491: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e493: jne 0x56e4b7 */ if (!fZ) goto L_0056e4b7;
L_0056e495:; BB(0x0056e495);
    /* 0056e495: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e497: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e49a: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0056e49d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56e4a2u); f_005f5d50();
    /* 0056e4a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4a5: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056e4a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4ab: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056e4ae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056e4b0: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e4b2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056e4b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e4b7u); call_ind(t); }
L_0056e4b7:; BB(0x0056e4b7);
    /* 0056e4b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4bc: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0056e4bf: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56e4c4u); f_005f5d50();
    /* 0056e4c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4c7: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0056e4ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4cd: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0056e4d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e4d2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056e4d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e4d7u); call_ind(t); }
    /* 0056e4d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e4d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e4da: ret  */ FN_RET(0x0056e480); r_esp += 4; return;
}

void f_0056e4e0(void) /* sub_56E4E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e4e0);
    /* 0056e4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e4e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e4e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e4e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4ea: cmp dword ptr [eax + 0xa4], 2 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e4f1: jne 0x56e4f5 */ if (!fZ) goto L_0056e4f5;
L_0056e4f3:; BB(0x0056e4f3);
    /* 0056e4f3: jmp 0x56e54e */ goto L_0056e54e;
L_0056e4f5:; BB(0x0056e4f5);
    /* 0056e4f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e4f8: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e4ff: je 0x56e544 */ if (fZ) goto L_0056e544;
L_0056e501:; BB(0x0056e501);
    /* 0056e501: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e504: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0056e507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e50a: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0056e50d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e50f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0056e515: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e517u); call_ind(t); }
    /* 0056e517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e51a: cmp dword ptr [ecx + 0xa4], 2 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e521: jge 0x56e542 */ if ((fS==fO)) goto L_0056e542;
L_0056e523:; BB(0x0056e523);
    /* 0056e523: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e526: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0056e52c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056e52f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e530: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e533: call 0x56e0a0 */ r_esp -= 4; W32(r_esp, 0x56e538u); f_0056e0a0();
    /* 0056e538: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e53a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e53d: call 0x56dff0 */ r_esp -= 4; W32(r_esp, 0x56e542u); f_0056dff0();
L_0056e542:; BB(0x0056e542);
    /* 0056e542: jmp 0x56e54e */ goto L_0056e54e;
L_0056e544:; BB(0x0056e544);
    /* 0056e544: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e549: call 0x56e800 */ r_esp -= 4; W32(r_esp, 0x56e54eu); f_0056e800();
L_0056e54e:; BB(0x0056e54e);
    /* 0056e54e: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e551: ret  */ FN_RET(0x0056e4e0); r_esp += 4; return;
}

void f_0056e560(void) /* sub_56E560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e560);
    /* 0056e560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e561: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e567: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e56a: cmp dword ptr [eax + 0xa4], 2 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e571: jne 0x56e578 */ if (!fZ) goto L_0056e578;
L_0056e573:; BB(0x0056e573);
    /* 0056e573: jmp 0x56e613 */ goto L_0056e613;
L_0056e578:; BB(0x0056e578);
    /* 0056e578: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e57b: cmp dword ptr [ecx + 0xa0], 0 */ {  u32 a = R32((u32)(r_ecx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e582: je 0x56e5fc */ if (fZ) goto L_0056e5fc;
L_0056e584:; BB(0x0056e584);
    /* 0056e584: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e587: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0056e58a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e58d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0056e590: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e592: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0056e598: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e59au); call_ind(t); }
    /* 0056e59a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e59d: mov edx, 2 */ r_edx = 0x2u;
    /* 0056e5a2: sub edx, dword ptr [ecx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056e5a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5ab: cmp dword ptr [eax + 0xa0], edx */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056e5b1: jbe 0x56e5d6 */ if ((fC||fZ)) goto L_0056e5d6;
L_0056e5b3:; BB(0x0056e5b3);
    /* 0056e5b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5b6: mov edx, 2 */ r_edx = 0x2u;
    /* 0056e5bb: sub edx, dword ptr [ecx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056e5c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5c5: call 0x56dff0 */ r_esp -= 4; W32(r_esp, 0x56e5cau); f_0056dff0();
    /* 0056e5ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5cf: call 0x56e0a0 */ r_esp -= 4; W32(r_esp, 0x56e5d4u); f_0056e0a0();
    /* 0056e5d4: jmp 0x56e5fa */ goto L_0056e5fa;
L_0056e5d6:; BB(0x0056e5d6);
    /* 0056e5d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5d9: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0056e5df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5e3: call 0x56e0a0 */ r_esp -= 4; W32(r_esp, 0x56e5e8u); f_0056e0a0();
    /* 0056e5e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5eb: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0056e5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e5f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5f5: call 0x56dff0 */ r_esp -= 4; W32(r_esp, 0x56e5fau); f_0056dff0();
L_0056e5fa:; BB(0x0056e5fa);
    /* 0056e5fa: jmp 0x56e613 */ goto L_0056e613;
L_0056e5fc:; BB(0x0056e5fc);
    /* 0056e5fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e5ff: mov edx, 2 */ r_edx = 0x2u;
    /* 0056e604: sub edx, dword ptr [ecx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056e60a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e60b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e60e: call 0x56e800 */ r_esp -= 4; W32(r_esp, 0x56e613u); f_0056e800();
L_0056e613:; BB(0x0056e613);
    /* 0056e613: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e615: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e616: ret  */ FN_RET(0x0056e560); r_esp += 4; return;
}

void f_0056e640(void) /* sub_56E640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e640);
    /* 0056e640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e641: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e644: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e647: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e64a: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e651: je 0x56e6a4 */ if (fZ) goto L_0056e6a4;
L_0056e653:; BB(0x0056e653);
    /* 0056e653: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e656: mov byte ptr [ecx + 0x98], 0 */ W8((u32)(r_ecx+0x98u), 0x0u);
    /* 0056e65d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e660: call 0x56df20 */ r_esp -= 4; W32(r_esp, 0x56e665u); f_0056df20();
    /* 0056e665: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e66a: call 0x56e110 */ r_esp -= 4; W32(r_esp, 0x56e66fu); f_0056e110();
    /* 0056e66f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e671: mov edx, dword ptr [0x79344c] */ r_edx = R32((u32)(0x79344cu));
    /* 0056e677: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056e67a: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056e680: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0056e683: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e685: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056e688: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e68au); call_ind(t); }
    /* 0056e68a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e68c: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056e692: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056e695: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056e69a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056e69d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056e69f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056e6a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e6a4u); call_ind(t); }
L_0056e6a4:; BB(0x0056e6a4);
    /* 0056e6a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e6a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e6a7: ret  */ FN_RET(0x0056e640); r_esp += 4; return;
}

void f_0056e6b0(void) /* sub_56E6B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e6b0);
    /* 0056e6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e6b3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e6b6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0056e6b9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0056e6c0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0056e6c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6ca: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056e6d0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056e6d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6d4: fld1  */ FPUSH(1.0);
    /* 0056e6d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056e6d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6e1: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e6e6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056e6eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e6ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056e6f3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056e6f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e6fbu); call_ind(t); }
    /* 0056e6fb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e6fe: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0056e704: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e705: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0056e708: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e709: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e70c: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x56e711u); f_0056da30();
    /* 0056e711: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0056e713: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056e716: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056e719: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0056e71c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e71f: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0056e725: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e726: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 0056e729: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e72a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e72d: call 0x56da30 */ r_esp -= 4; W32(r_esp, 0x56e732u); f_0056da30();
    /* 0056e732: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0056e734: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056e737: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056e73a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056e73d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e73f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e742: call 0x56e0a0 */ r_esp -= 4; W32(r_esp, 0x56e747u); f_0056e0a0();
    /* 0056e747: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e749: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e74c: call 0x56e110 */ r_esp -= 4; W32(r_esp, 0x56e751u); f_0056e110();
    /* 0056e751: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e754: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0056e75a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e75b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e75e: call 0x56dff0 */ r_esp -= 4; W32(r_esp, 0x56e763u); f_0056dff0();
    /* 0056e763: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e76a: jl 0x56e77a */ if ((fS!=fO)) goto L_0056e77a;
L_0056e76c:; BB(0x0056e76c);
    /* 0056e76c: mov dword ptr [ebp - 0x10], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff0u), 0x3b9aca00u);
    /* 0056e773: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0056e77a:; BB(0x0056e77a);
    /* 0056e77a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e77d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0056e780: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e783: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0056e786: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056e788: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056e78e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e790u); call_ind(t); }
    /* 0056e790: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e793: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0056e796: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056e799: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0056e79c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056e79e: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0056e7a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56e7a6u); call_ind(t); }
    /* 0056e7a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056e7a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7aa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056e7ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7ae: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0056e7b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7b2: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0056e7b5: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x56e7bau); f_0064c5c0();
    /* 0056e7ba: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0056e7bc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056e7bf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056e7c2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0056e7c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e7c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e7cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7cf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e7d4u); f_005dcb00();
    /* 0056e7d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e7d7: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e7d9: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x56e7deu); f_005d5fb0();
    /* 0056e7de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e7e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7e2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056e7e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e7e8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e7edu); f_005dcb00();
    /* 0056e7ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e7f0: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e7f2: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x56e7f7u); f_005d5cf0();
    /* 0056e7f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e7f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e7fa: ret  */ FN_RET(0x0056e6b0); r_esp += 4; return;
}

void f_0056e930(void) /* sub_56E930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056e930);
    /* 0056e930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056e931: mov ebp, esp */ r_ebp = r_esp;
    /* 0056e933: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056e936: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056e939: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e93b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e93d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x56e942u); f_0064c8a0();
    /* 0056e942: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e945: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056e948: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0056e94b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056e94e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056e951: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056e954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056e957: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0056e95a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e95b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e95d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e962u); f_005dcb00();
    /* 0056e962: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e965: mov ecx, eax */ r_ecx = r_eax;
    /* 0056e967: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x56e96cu); f_005d5ac0();
    /* 0056e96c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e96f: cmp dword ptr [eax + 0x9c], 2 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e976: jle 0x56e98f */ if ((fZ||fS!=fO)) goto L_0056e98f;
L_0056e978:; BB(0x0056e978);
    /* 0056e978: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e97b: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0056e981: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e982: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e985: call 0x56e9f0 */ r_esp -= 4; W32(r_esp, 0x56e98au); f_0056e9f0();
    /* 0056e98a: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e98d: jl 0x56e9b8 */ if ((fS!=fO)) goto L_0056e9b8;
L_0056e98f:; BB(0x0056e98f);
    /* 0056e98f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e992: cmp dword ptr [eax + 0x9c], 2 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e999: jg 0x56e9e6 */ if ((!fZ&&fS==fO)) goto L_0056e9e6;
L_0056e99b:; BB(0x0056e99b);
    /* 0056e99b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e99f: jne 0x56e9e6 */ if (!fZ) goto L_0056e9e6;
L_0056e9a1:; BB(0x0056e9a1);
    /* 0056e9a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e9a4: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0056e9aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056e9ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e9ae: call 0x56eac0 */ r_esp -= 4; W32(r_esp, 0x56e9b3u); f_0056eac0();
    /* 0056e9b3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056e9b6: jge 0x56e9e6 */ if ((fS==fO)) goto L_0056e9e6;
L_0056e9b8:; BB(0x0056e9b8);
    /* 0056e9b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e9bb: cmp dword ptr [eax + 0xa0], 0 */ {  u32 a = R32((u32)(r_eax+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e9c2: jne 0x56e9e6 */ if (!fZ) goto L_0056e9e6;
L_0056e9c4:; BB(0x0056e9c4);
    /* 0056e9c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056e9c7: cmp dword ptr [ecx + 0xa4], 0 */ {  u32 a = R32((u32)(r_ecx+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056e9ce: jne 0x56e9e6 */ if (!fZ) goto L_0056e9e6;
L_0056e9d0:; BB(0x0056e9d0);
    /* 0056e9d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056e9d2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56e9d7u); f_005dcb00();
    /* 0056e9d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056e9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056e9db: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056e9e1: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x56e9e6u); f_005dbb70();
L_0056e9e6:; BB(0x0056e9e6);
    /* 0056e9e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0056e9e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056e9e9: ret  */ FN_RET(0x0056e930); r_esp += 4; return;
}

void f_0056eb20(void) /* sub_56EB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056eb20);
    /* 0056eb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb21: mov ebp, esp */ r_ebp = r_esp;
    /* 0056eb23: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056eb26: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056eb29: mov word ptr [ebp - 0x10], 0xffff */ W16((u32)(r_ebp+0xfffffff0u), 0xffffu);
    /* 0056eb2f: fldz  */ FPUSH(0.0);
    /* 0056eb31: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0056eb34: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 0056eb39: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56eb3eu); f_0062fbf0();
    /* 0056eb3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056eb41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056eb44: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0056eb4a: jmp 0x56eb58 */ goto L_0056eb58;
L_0056eb4c:; BB(0x0056eb4c);
    /* 0056eb4c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0056eb50: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0056eb54: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_0056eb58:; BB(0x0056eb58);
    /* 0056eb58: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0056eb5c: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056eb5f: jge 0x56eb91 */ if ((fS==fO)) goto L_0056eb91;
L_0056eb61:; BB(0x0056eb61);
    /* 0056eb61: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0056eb65: fld qword ptr [0x6ca358] */ FPUSH(R_F64((u32)(0x6ca358u)));
    /* 0056eb6b: fmul qword ptr [edx*8 + 0x748928] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x748928u));
    /* 0056eb72: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0056eb75: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0056eb78: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0056eb7b: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0056eb7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056eb80: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0056eb83: jp 0x56eb8f */ if (fP) goto L_0056eb8f;
L_0056eb85:; BB(0x0056eb85);
    /* 0056eb85: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0056eb89: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0056eb8d: jmp 0x56eb91 */ goto L_0056eb91;
L_0056eb8f:; BB(0x0056eb8f);
    /* 0056eb8f: jmp 0x56eb4c */ goto L_0056eb4c;
L_0056eb91:; BB(0x0056eb91);
    /* 0056eb91: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056eb95: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eb98: jne 0x56eba4 */ if (!fZ) goto L_0056eba4;
L_0056eb9a:; BB(0x0056eb9a);
    /* 0056eb9a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056eb9d: call 0x56ee90 */ r_esp -= 4; W32(r_esp, 0x56eba2u); f_0056ee90();
    /* 0056eba2: jmp 0x56ebb1 */ goto L_0056ebb1;
L_0056eba4:; BB(0x0056eba4);
    /* 0056eba4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0056eba8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eba9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ebac: call 0x56f040 */ r_esp -= 4; W32(r_esp, 0x56ebb1u); f_0056f040();
L_0056ebb1:; BB(0x0056ebb1);
    /* 0056ebb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ebb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ebb4: ret  */ FN_RET(0x0056eb20); r_esp += 4; return;
}

void f_0056ebc0(void) /* sub_56EBC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ebc0);
    /* 0056ebc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ebc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ebc3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ebc6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056ebc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ebd0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ebd3: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0056ebd9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056ebdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ebde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ebe1: call 0x56e0a0 */ r_esp -= 4; W32(r_esp, 0x56ebe6u); f_0056e0a0();
    /* 0056ebe6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ebe9: call 0x56f160 */ r_esp -= 4; W32(r_esp, 0x56ebeeu); f_0056f160();
    /* 0056ebee: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056ebf1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ebf3: jne 0x56ec0c */ if (!fZ) goto L_0056ec0c;
L_0056ebf5:; BB(0x0056ebf5);
    /* 0056ebf5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ebf8: call 0x56e480 */ r_esp -= 4; W32(r_esp, 0x56ebfdu); f_0056e480();
    /* 0056ebfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ebff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec02: call 0x56e110 */ r_esp -= 4; W32(r_esp, 0x56ec07u); f_0056e110();
    /* 0056ec07: jmp 0x56ec8c */ goto L_0056ec8c;
L_0056ec0c:; BB(0x0056ec0c);
    /* 0056ec0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec0f: call 0x56f0d0 */ r_esp -= 4; W32(r_esp, 0x56ec14u); f_0056f0d0();
    /* 0056ec14: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056ec17: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ec1b: jge 0x56ec56 */ if ((fS==fO)) goto L_0056ec56;
L_0056ec1d:; BB(0x0056ec1d);
    /* 0056ec1d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ec20: mov ecx, dword ptr [eax*4 + 0x7488f0] */ r_ecx = R32((u32)(r_eax*4+0x7488f0u));
    /* 0056ec27: imul ecx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056ec2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056ec2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec31: call 0x56e230 */ r_esp -= 4; W32(r_esp, 0x56ec36u); f_0056e230();
    /* 0056ec36: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec39: movzx eax, byte ptr [edx + 0x99] */ r_eax = (u32)R8((u32)(r_edx+0x99u));
    /* 0056ec40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec42: je 0x56ec56 */ if (fZ) goto L_0056ec56;
L_0056ec44:; BB(0x0056ec44);
    /* 0056ec44: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec48: je 0x56ec56 */ if (fZ) goto L_0056ec56;
L_0056ec4a:; BB(0x0056ec4a);
    /* 0056ec4a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ec4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ec4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec51: call 0x56f560 */ r_esp -= 4; W32(r_esp, 0x56ec56u); f_0056f560();
L_0056ec56:; BB(0x0056ec56);
    /* 0056ec56: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ec59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ec5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec5d: call 0x56e110 */ r_esp -= 4; W32(r_esp, 0x56ec62u); f_0056e110();
    /* 0056ec62: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec66: jne 0x56ec7e */ if (!fZ) goto L_0056ec7e;
L_0056ec68:; BB(0x0056ec68);
    /* 0056ec68: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec6b: movzx ecx, byte ptr [eax + 0x99] */ r_ecx = (u32)R8((u32)(r_eax+0x99u));
    /* 0056ec72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec74: jne 0x56ec7e */ if (!fZ) goto L_0056ec7e;
L_0056ec76:; BB(0x0056ec76);
    /* 0056ec76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec79: call 0x56f3e0 */ r_esp -= 4; W32(r_esp, 0x56ec7eu); f_0056f3e0();
L_0056ec7e:; BB(0x0056ec7e);
    /* 0056ec7e: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec82: jne 0x56ec8c */ if (!fZ) goto L_0056ec8c;
L_0056ec84:; BB(0x0056ec84);
    /* 0056ec84: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec87: call 0x56f870 */ r_esp -= 4; W32(r_esp, 0x56ec8cu); f_0056f870();
L_0056ec8c:; BB(0x0056ec8c);
    /* 0056ec8c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec8f: cmp dword ptr [edx + 0xa0], 0 */ {  u32 a = R32((u32)(r_edx+0xa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ec96: jne 0x56ecbe */ if (!fZ) goto L_0056ecbe;
L_0056ec98:; BB(0x0056ec98);
    /* 0056ec98: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ec9b: call 0x56e340 */ r_esp -= 4; W32(r_esp, 0x56eca0u); f_0056e340();
    /* 0056eca0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056eca3: movzx ecx, byte ptr [eax + 0x99] */ r_ecx = (u32)R8((u32)(r_eax+0x99u));
    /* 0056ecaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ecac: jne 0x56ecbe */ if (!fZ) goto L_0056ecbe;
L_0056ecae:; BB(0x0056ecae);
    /* 0056ecae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ecb1: call 0x56f870 */ r_esp -= 4; W32(r_esp, 0x56ecb6u); f_0056f870();
    /* 0056ecb6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ecb9: call 0x56e3e0 */ r_esp -= 4; W32(r_esp, 0x56ecbeu); f_0056e3e0();
L_0056ecbe:; BB(0x0056ecbe);
    /* 0056ecbe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ecc1: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0056ecc4: movzx ecx, byte ptr [eax + 0x190] */ r_ecx = (u32)R8((u32)(r_eax+0x190u));
    /* 0056eccb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eccd: je 0x56ecd9 */ if (fZ) goto L_0056ecd9;
L_0056eccf:; BB(0x0056eccf);
    /* 0056eccf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ecd2: mov byte ptr [edx + 0x99], 0 */ W8((u32)(r_edx+0x99u), 0x0u);
L_0056ecd9:; BB(0x0056ecd9);
    /* 0056ecd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ecdb: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056ece0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056ece3: mov edx, dword ptr [0x79344c] */ r_edx = R32((u32)(0x79344cu));
    /* 0056ece9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056ecec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056ecee: mov ecx, eax */ r_ecx = r_eax;
    /* 0056ecf0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056ecf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ecf5u); call_ind(t); }
    /* 0056ecf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ecf7: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0056ecfd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0056ed00: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0056ed05: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056ed08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056ed0a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056ed0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ed0fu); call_ind(t); }
    /* 0056ed0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ed11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ed12: ret  */ FN_RET(0x0056ebc0); r_esp += 4; return;
}

void f_0056ed20(void) /* sub_56ED20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ed20);
    /* 0056ed20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ed21: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ed23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ed25: push 0x6a5eb2 */ { u32 v = 0x6a5eb2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ed2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056ed30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ed31: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ed34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056ed39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056ed3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ed3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056ed3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056ed45: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0056ed48: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056ed4f: jmp 0x56ed5a */ goto L_0056ed5a;
L_0056ed51:; BB(0x0056ed51);
    /* 0056ed51: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ed54: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056ed57: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0056ed5a:; BB(0x0056ed5a);
    /* 0056ed5a: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ed5e: jge 0x56ed74 */ if ((fS==fO)) goto L_0056ed74;
L_0056ed60:; BB(0x0056ed60);
    /* 0056ed60: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ed63: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056ed66: cmp dword ptr [edx + ecx*4 + 0xbc], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ed6e: jne 0x56ed72 */ if (!fZ) goto L_0056ed72;
L_0056ed70:; BB(0x0056ed70);
    /* 0056ed70: jmp 0x56ed74 */ goto L_0056ed74;
L_0056ed72:; BB(0x0056ed72);
    /* 0056ed72: jmp 0x56ed51 */ goto L_0056ed51;
L_0056ed74:; BB(0x0056ed74);
    /* 0056ed74: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ed78: jne 0x56ed81 */ if (!fZ) goto L_0056ed81;
L_0056ed7a:; BB(0x0056ed7a);
    /* 0056ed7a: jmp 0x56ee76 */ goto L_0056ee76;
L_0056ed81:; BB(0x0056ed81);
    /* 0056ed81: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ed85: jne 0x56ed97 */ if (!fZ) goto L_0056ed97;
L_0056ed87:; BB(0x0056ed87);
    /* 0056ed87: mov eax, dword ptr [0x748918] */ r_eax = R32((u32)(0x748918u));
    /* 0056ed8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ed8d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056ed90: call 0x56e1a0 */ r_esp -= 4; W32(r_esp, 0x56ed95u); f_0056e1a0();
    /* 0056ed95: jmp 0x56edd3 */ goto L_0056edd3;
L_0056ed97:; BB(0x0056ed97);
    /* 0056ed97: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ed9b: jge 0x56edae */ if ((fS==fO)) goto L_0056edae;
L_0056ed9d:; BB(0x0056ed9d);
    /* 0056ed9d: mov ecx, dword ptr [0x74891c] */ r_ecx = R32((u32)(0x74891cu));
    /* 0056eda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eda4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056eda7: call 0x56e1a0 */ r_esp -= 4; W32(r_esp, 0x56edacu); f_0056e1a0();
    /* 0056edac: jmp 0x56edd3 */ goto L_0056edd3;
L_0056edae:; BB(0x0056edae);
    /* 0056edae: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056edb2: jge 0x56edc5 */ if ((fS==fO)) goto L_0056edc5;
L_0056edb4:; BB(0x0056edb4);
    /* 0056edb4: mov edx, dword ptr [0x748920] */ r_edx = R32((u32)(0x748920u));
    /* 0056edba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056edbb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056edbe: call 0x56e1a0 */ r_esp -= 4; W32(r_esp, 0x56edc3u); f_0056e1a0();
    /* 0056edc3: jmp 0x56edd3 */ goto L_0056edd3;
L_0056edc5:; BB(0x0056edc5);
    /* 0056edc5: mov eax, dword ptr [0x748924] */ r_eax = R32((u32)(0x748924u));
    /* 0056edca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056edcb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056edce: call 0x56e1a0 */ r_esp -= 4; W32(r_esp, 0x56edd3u); f_0056e1a0();
L_0056edd3:; BB(0x0056edd3);
    /* 0056edd3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0056edd5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56eddau); f_00686d82();
    /* 0056edda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056eddd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056ede0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ede7: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056edeb: je 0x56ee04 */ if (fZ) goto L_0056ee04;
L_0056eded:; BB(0x0056eded);
    /* 0056eded: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056edef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056edf1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056edf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056edf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056edf7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056edfa: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x56edffu); f_00601110();
    /* 0056edff: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056ee02: jmp 0x56ee0b */ goto L_0056ee0b;
L_0056ee04:; BB(0x0056ee04);
    /* 0056ee04: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0056ee0b:; BB(0x0056ee0b);
    /* 0056ee0b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056ee0e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056ee11: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056ee18: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056ee1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee1c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056ee1f: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0056ee22: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56ee27u); f_005f5d50();
    /* 0056ee27: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056ee2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056ee2f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056ee35: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0056ee38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ee3au); call_ind(t); }
    /* 0056ee3a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056ee3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ee3f: je 0x56ee76 */ if (fZ) goto L_0056ee76;
L_0056ee41:; BB(0x0056ee41);
    /* 0056ee41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee44: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056ee4a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056ee4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee4e: fld1  */ FPUSH(1.0);
    /* 0056ee50: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056ee53: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee55: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee5b: push 0x1926a */ { u32 v = 0x1926au; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee60: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0056ee66: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056ee68: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056ee6e: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0056ee74: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56ee76u); call_ind(t); }
L_0056ee76:; BB(0x0056ee76);
    /* 0056ee76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056ee79: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056ee80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056ee81: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ee83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ee84: ret  */ FN_RET(0x0056ed20); r_esp += 4; return;
}

void f_0056ee90(void) /* sub_56EE90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ee90);
    /* 0056ee90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee91: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ee93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056ee97: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056ee99: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56ee9eu); f_0062fbf0();
    /* 0056ee9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056eea1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eea4: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0056eeaa: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056eeac: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56eeb1u); f_0062fbf0();
    /* 0056eeb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056eeb4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eeb7: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0056eebd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eec0: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0056eec6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056eec7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eeca: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0056eed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056eed1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eed4: call 0x56f130 */ r_esp -= 4; W32(r_esp, 0x56eed9u); f_0056f130();
    /* 0056eed9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056eedc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056eede: je 0x56ef16 */ if (fZ) goto L_0056ef16;
L_0056eee0:; BB(0x0056eee0);
    /* 0056eee0: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0056eee2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56eee7u); f_0062fbf0();
    /* 0056eee7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056eeea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eeed: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0056eef3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eef6: cmp dword ptr [eax + 0xb4], 1 */ {  u32 a = R32((u32)(r_eax+0xb4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056eefd: jl 0x56ef14 */ if ((fS!=fO)) goto L_0056ef14;
L_0056eeff:; BB(0x0056eeff);
    /* 0056eeff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef02: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 0056ef08: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056ef0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef0e: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
L_0056ef14:; BB(0x0056ef14);
    /* 0056ef14: jmp 0x56ef29 */ goto L_0056ef29;
L_0056ef16:; BB(0x0056ef16);
    /* 0056ef16: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056ef18: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56ef1du); f_0062fbf0();
    /* 0056ef1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ef20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef23: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
L_0056ef29:; BB(0x0056ef29);
    /* 0056ef29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef2c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056ef32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ef33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef36: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0056ef3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ef3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef40: call 0x56f130 */ r_esp -= 4; W32(r_esp, 0x56ef45u); f_0056f130();
    /* 0056ef45: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056ef48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ef4a: je 0x56f022 */ if (fZ) goto L_0056f022;
L_0056ef50:; BB(0x0056ef50);
    /* 0056ef50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef53: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 0056ef59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ef5a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef5d: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0056ef63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ef64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef67: call 0x56f130 */ r_esp -= 4; W32(r_esp, 0x56ef6cu); f_0056f130();
    /* 0056ef6c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056ef6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ef71: je 0x56f022 */ if (fZ) goto L_0056f022;
L_0056ef77:; BB(0x0056ef77);
    /* 0056ef77: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ef79: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56ef7eu); f_0062fbf0();
    /* 0056ef7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ef81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef84: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0056ef8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef8d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ef90: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0056ef96: cmp ecx, dword ptr [eax + 0xb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ef9c: jl 0x56efd6 */ if ((fS!=fO)) goto L_0056efd6;
L_0056ef9e:; BB(0x0056ef9e);
    /* 0056ef9e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efa1: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0056efa7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056efaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efad: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0056efb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efb6: cmp dword ptr [edx + 0xb8], 1 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056efbd: jl 0x56efd4 */ if ((fS!=fO)) goto L_0056efd4;
L_0056efbf:; BB(0x0056efbf);
    /* 0056efbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efc2: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 0056efc8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056efcb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efce: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
L_0056efd4:; BB(0x0056efd4);
    /* 0056efd4: jmp 0x56f020 */ goto L_0056f020;
L_0056efd6:; BB(0x0056efd6);
    /* 0056efd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efd9: cmp dword ptr [eax + 0xb8], 1 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056efe0: jl 0x56f020 */ if ((fS!=fO)) goto L_0056f020;
L_0056efe2:; BB(0x0056efe2);
    /* 0056efe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056efe5: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0056efeb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056efee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056eff1: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 0056eff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056effa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056effd: mov eax, dword ptr [ecx + 0xb8] */ r_eax = R32((u32)(r_ecx+0xb8u));
    /* 0056f003: cmp eax, dword ptr [edx + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f009: jl 0x56f020 */ if ((fS!=fO)) goto L_0056f020;
L_0056f00b:; BB(0x0056f00b);
    /* 0056f00b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f00e: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0056f014: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056f017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f01a: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
L_0056f020:; BB(0x0056f020);
    /* 0056f020: jmp 0x56f035 */ goto L_0056f035;
L_0056f022:; BB(0x0056f022);
    /* 0056f022: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056f024: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x56f029u); f_0062fbf0();
    /* 0056f029: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f02c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056f02f: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
L_0056f035:; BB(0x0056f035);
    /* 0056f035: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f037: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f038: ret  */ FN_RET(0x0056ee90); r_esp += 4; return;
}

