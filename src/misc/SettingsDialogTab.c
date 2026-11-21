#include "protos.h"

void f_0063f260(void) /* SettingsDialogTab::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f260);
    /* 0063f260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f261: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f263: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f266: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063f269: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063f26c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x63f271u); f_005f5400();
    /* 0063f271: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f274: jne 0x63f2d9 */ if (!fZ) goto L_0063f2d9;
L_0063f276:; BB(0x0063f276);
    /* 0063f276: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f27d: jmp 0x63f288 */ goto L_0063f288;
L_0063f27f:; BB(0x0063f27f);
    /* 0063f27f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f282: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f285: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063f288:; BB(0x0063f288);
    /* 0063f288: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f28e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f290: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f296: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063f29c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f29eu); call_ind(t); }
    /* 0063f29e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f2a1: jge 0x63f2d9 */ if ((fS==fO)) goto L_0063f2d9;
L_0063f2a3:; BB(0x0063f2a3);
    /* 0063f2a3: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f2a9: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063f2af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f2b2: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063f2b5: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f2b9: je 0x63f2d7 */ if (fZ) goto L_0063f2d7;
L_0063f2bb:; BB(0x0063f2bb);
    /* 0063f2bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2bd: mov edx, dword ptr [0x163068c] */ r_edx = R32((u32)(0x163068cu));
    /* 0063f2c3: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063f2c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f2cc: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063f2cf: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0063f2d2: call 0x646c20 */ r_esp -= 4; W32(r_esp, 0x63f2d7u); f_00646c20();
L_0063f2d7:; BB(0x0063f2d7);
    /* 0063f2d7: jmp 0x63f27f */ goto L_0063f27f;
L_0063f2d9:; BB(0x0063f2d9);
    /* 0063f2d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063f2dc: call 0x5ff730 */ r_esp -= 4; W32(r_esp, 0x63f2e1u); f_005ff730();
    /* 0063f2e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f2e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f2e4: ret  */ FN_RET(0x0063f260); r_esp += 4; return;
}

void f_0063f2f0(void) /* SettingsDialogTab::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f2f0);
    /* 0063f2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f2f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063f2f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063f2f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063f2fc: call 0x5ff6a0 */ r_esp -= 4; W32(r_esp, 0x63f301u); f_005ff6a0();
    /* 0063f301: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063f304: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x63f309u); f_005f5400();
    /* 0063f309: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f30c: jne 0x63f38c */ if (!fZ) goto L_0063f38c;
L_0063f30e:; BB(0x0063f30e);
    /* 0063f30e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063f315: jmp 0x63f320 */ goto L_0063f320;
L_0063f317:; BB(0x0063f317);
    /* 0063f317: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f31a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063f31d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063f320:; BB(0x0063f320);
    /* 0063f320: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f326: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063f328: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063f32e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063f334: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f336u); call_ind(t); }
    /* 0063f336: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f339: jge 0x63f373 */ if ((fS==fO)) goto L_0063f373;
L_0063f33b:; BB(0x0063f33b);
    /* 0063f33b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f341: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063f347: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f34a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063f34d: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f351: je 0x63f371 */ if (fZ) goto L_0063f371;
L_0063f353:; BB(0x0063f353);
    /* 0063f353: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f355: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063f357: mov edx, dword ptr [0x163068c] */ r_edx = R32((u32)(0x163068cu));
    /* 0063f35d: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063f363: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f366: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063f369: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0063f36c: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x63f371u); f_006464d0();
L_0063f371:; BB(0x0063f371);
    /* 0063f371: jmp 0x63f317 */ goto L_0063f317;
L_0063f373:; BB(0x0063f373);
    /* 0063f373: mov eax, dword ptr [0x163068c] */ r_eax = R32((u32)(0x163068cu));
    /* 0063f378: cmp dword ptr [eax + 0x1d4], 4 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063f37f: jle 0x63f38c */ if ((fZ||fS!=fO)) goto L_0063f38c;
L_0063f381:; BB(0x0063f381);
    /* 0063f381: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0063f387: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63f38cu); f_0063c620();
L_0063f38c:; BB(0x0063f38c);
    /* 0063f38c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f38e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f38f: ret  */ FN_RET(0x0063f2f0); r_esp += 4; return;
}

void f_0063f390(void) /* SettingsDialogTab::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063f390);
    /* 0063f390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063f391: mov ebp, esp */ r_ebp = r_esp;
    /* 0063f393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063f394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063f397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f39a: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x63f39fu); f_00600230();
    /* 0063f39f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0063f3a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063f3a4: je 0x63f3e6 */ if (fZ) goto L_0063f3e6;
L_0063f3a6:; BB(0x0063f3a6);
    /* 0063f3a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f3a9: call 0x602be0 */ r_esp -= 4; W32(r_esp, 0x63f3aeu); f_00602be0();
    /* 0063f3ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f3b1: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0063f3b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f3ba: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0063f3c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0063f3c2: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0063f3c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f3c7u); call_ind(t); }
    /* 0063f3c7: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063f3ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063f3cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f3ce: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0063f3d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f3d7: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0063f3dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0063f3df: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0063f3e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63f3e4u); call_ind(t); }
    /* 0063f3e4: jmp 0x63f3ee */ goto L_0063f3ee;
L_0063f3e6:; BB(0x0063f3e6);
    /* 0063f3e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063f3e9: call 0x602be0 */ r_esp -= 4; W32(r_esp, 0x63f3eeu); f_00602be0();
L_0063f3ee:; BB(0x0063f3ee);
    /* 0063f3ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0063f3f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063f3f1: ret  */ FN_RET(0x0063f390); r_esp += 4; return;
}

