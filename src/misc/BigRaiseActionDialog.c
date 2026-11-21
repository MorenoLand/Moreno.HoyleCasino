#include "protos.h"

void f_0059cb50(void) /* BigRaiseActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059cb50);
    /* 0059cb50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb51: mov ebp, esp */ r_ebp = r_esp;
    /* 0059cb53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059cb57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cb5e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x59cb63u); f_005f71f0();
    /* 0059cb63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cb66: mov dword ptr [eax], 0x6cee64 */ W32((u32)(r_eax), 0x6cee64u);
    /* 0059cb6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cb6f: mov esp, ebp */ r_esp = r_ebp;
    /* 0059cb71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059cb72: ret  */ FN_RET(0x0059cb50); r_esp += 4; return;
}

void f_0059cba0(void) /* BigRaiseActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059cba0);
    /* 0059cba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059cba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059cba5: push 0x6a7562 */ { u32 v = 0x6a7562u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059cbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbb1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059cbb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059cbb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059cbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059cbbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059cbc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059cbc8: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cbcc: je 0x59cbda */ if (fZ) goto L_0059cbda;
L_0059cbce:; BB(0x0059cbce);
    /* 0059cbce: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cbd2: je 0x59cbda */ if (fZ) goto L_0059cbda;
L_0059cbd4:; BB(0x0059cbd4);
    /* 0059cbd4: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 0059cbd8: jmp 0x59cbde */ goto L_0059cbde;
L_0059cbda:; BB(0x0059cbda);
    /* 0059cbda: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_0059cbde:; BB(0x0059cbde);
    /* 0059cbde: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cbe2: je 0x59cbf0 */ if (fZ) goto L_0059cbf0;
L_0059cbe4:; BB(0x0059cbe4);
    /* 0059cbe4: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cbe8: je 0x59cbf0 */ if (fZ) goto L_0059cbf0;
L_0059cbea:; BB(0x0059cbea);
    /* 0059cbea: mov byte ptr [ebp - 0x1a], 0 */ W8((u32)(r_ebp+0xffffffe6u), 0x0u);
    /* 0059cbee: jmp 0x59cbf4 */ goto L_0059cbf4;
L_0059cbf0:; BB(0x0059cbf0);
    /* 0059cbf0: mov byte ptr [ebp - 0x1a], 1 */ W8((u32)(r_ebp+0xffffffe6u), 0x1u);
L_0059cbf4:; BB(0x0059cbf4);
    /* 0059cbf4: mov al, byte ptr [ebp - 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 0059cbf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbf8: mov cl, byte ptr [ebp - 0x1a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe6u))) & 0xffu);
    /* 0059cbfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cbfc: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059cc02: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x59cc07u); f_005a2020();
    /* 0059cc07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc08: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059cc0e: call 0x5a2a40 */ r_esp -= 4; W32(r_esp, 0x59cc13u); f_005a2a40();
    /* 0059cc13: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059cc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cc18: je 0x59cc1c */ if (fZ) goto L_0059cc1c;
L_0059cc1a:; BB(0x0059cc1a);
    /* 0059cc1a: jmp 0x59cc77 */ goto L_0059cc77;
L_0059cc1c:; BB(0x0059cc1c);
    /* 0059cc1c: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059cc22: call 0x59b800 */ r_esp -= 4; W32(r_esp, 0x59cc27u); f_0059b800();
    /* 0059cc27: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc29: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59cc2eu); f_00686d82();
    /* 0059cc2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cc31: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059cc34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059cc3b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cc3f: je 0x59cc52 */ if (fZ) goto L_0059cc52;
L_0059cc41:; BB(0x0059cc41);
    /* 0059cc41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059cc44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059cc48: call 0x59e5b0 */ r_esp -= 4; W32(r_esp, 0x59cc4du); f_0059e5b0();
    /* 0059cc4d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059cc50: jmp 0x59cc59 */ goto L_0059cc59;
L_0059cc52:; BB(0x0059cc52);
    /* 0059cc52: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0059cc59:; BB(0x0059cc59);
    /* 0059cc59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059cc5c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059cc5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059cc66: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059cc69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc6a: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059cc6f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059cc72: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59cc77u); f_005fc420();
L_0059cc77:; BB(0x0059cc77);
    /* 0059cc77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059cc7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059cc81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059cc82: mov esp, ebp */ r_esp = r_ebp;
    /* 0059cc84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059cc85: ret 4 */ FN_RET(0x0059cba0); r_esp += 8; return;
}

void f_0059cc90(void) /* BigRaiseActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059cc90);
    /* 0059cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0059cc93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cc94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059cc97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059cc9a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0059cc9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cca0: jne 0x59ccb1 */ if (!fZ) goto L_0059ccb1;
L_0059cca2:; BB(0x0059cca2);
    /* 0059cca2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cca5: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x59ccaau); f_005f88f0();
    /* 0059ccaa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059ccad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ccaf: je 0x59ccb6 */ if (fZ) goto L_0059ccb6;
L_0059ccb1:; BB(0x0059ccb1);
    /* 0059ccb1: jmp 0x59cdfd */ goto L_0059cdfd;
L_0059ccb6:; BB(0x0059ccb6);
    /* 0059ccb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059ccb9: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ccbd: jne 0x59cdf1 */ if (!fZ) goto L_0059cdf1;
L_0059ccc3:; BB(0x0059ccc3);
    /* 0059ccc3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059ccc6: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0059ccca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cccb: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x59ccd1u); call_ind(t); }
    /* 0059ccd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ccd4: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ccd7: jne 0x59ccf0 */ if (!fZ) goto L_0059ccf0;
L_0059ccd9:; BB(0x0059ccd9);
    /* 0059ccd9: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ccdf: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x59cce4u); f_005db240();
    /* 0059cce4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059cce7: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0059cceb: jmp 0x59cdf1 */ goto L_0059cdf1;
L_0059ccf0:; BB(0x0059ccf0);
    /* 0059ccf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059ccf3: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0059ccf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ccf8: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x59ccfeu); call_ind(t); }
    /* 0059ccfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cd01: cmp eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd04: jne 0x59cd41 */ if (!fZ) goto L_0059cd41;
L_0059cd06:; BB(0x0059cd06);
    /* 0059cd06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd08: push 0x315104 */ { u32 v = 0x315104u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd0d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059cd13: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x59cd18u); f_005f2a60();
    /* 0059cd18: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cd1a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x59cd1fu); f_006026d0();
    /* 0059cd1f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059cd22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd24: je 0x59cd41 */ if (fZ) goto L_0059cd41;
L_0059cd26:; BB(0x0059cd26);
    /* 0059cd26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cd2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059cd2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cd30: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0059cd33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59cd35u); call_ind(t); }
    /* 0059cd35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059cd38: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0059cd3c: jmp 0x59cdf1 */ goto L_0059cdf1;
L_0059cd41:; BB(0x0059cd41);
    /* 0059cd41: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059cd44: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0059cd48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd49: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x59cd4fu); call_ind(t); }
    /* 0059cd4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cd52: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd55: je 0x59cd6d */ if (fZ) goto L_0059cd6d;
L_0059cd57:; BB(0x0059cd57);
    /* 0059cd57: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059cd5a: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0059cd5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd5f: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x59cd65u); call_ind(t); }
    /* 0059cd65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cd68: cmp eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd6b: jne 0x59cda5 */ if (!fZ) goto L_0059cda5;
L_0059cd6d:; BB(0x0059cd6d);
    /* 0059cd6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd6f: push 0x315103 */ { u32 v = 0x315103u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd74: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059cd7a: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x59cd7fu); f_005f2a60();
    /* 0059cd7f: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cd81: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x59cd86u); f_006026d0();
    /* 0059cd86: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059cd89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cd8b: je 0x59cda5 */ if (fZ) goto L_0059cda5;
L_0059cd8d:; BB(0x0059cd8d);
    /* 0059cd8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cd8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cd92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059cd94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cd97: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0059cd9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59cd9cu); call_ind(t); }
    /* 0059cd9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059cd9f: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0059cda3: jmp 0x59cdf1 */ goto L_0059cdf1;
L_0059cda5:; BB(0x0059cda5);
    /* 0059cda5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059cda8: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0059cdac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cdad: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x59cdb3u); call_ind(t); }
    /* 0059cdb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cdb6: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cdb9: jne 0x59cdf1 */ if (!fZ) goto L_0059cdf1;
L_0059cdbb:; BB(0x0059cdbb);
    /* 0059cdbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cdbd: push 0x315105 */ { u32 v = 0x315105u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cdc2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059cdc8: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x59cdcdu); f_005f2a60();
    /* 0059cdcd: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cdcf: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x59cdd4u); f_006026d0();
    /* 0059cdd4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059cdd7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cdd9: je 0x59cdf1 */ if (fZ) goto L_0059cdf1;
L_0059cddb:; BB(0x0059cddb);
    /* 0059cddb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cddd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cde0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059cde2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cde5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0059cde8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59cdeau); call_ind(t); }
    /* 0059cdea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059cded: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0059cdf1:; BB(0x0059cdf1);
    /* 0059cdf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059cdf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cdf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cdf8: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x59cdfdu); f_005f72f0();
L_0059cdfd:; BB(0x0059cdfd);
    /* 0059cdfd: mov esp, ebp */ r_esp = r_ebp;
    /* 0059cdff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ce00: ret 4 */ FN_RET(0x0059cc90); r_esp += 8; return;
}

void f_0059ce10(void) /* BigRaiseActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ce10);
    /* 0059ce10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce11: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ce13: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ce16: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059ce19: mov dword ptr [ebp - 0x10], 0x6ceed4 */ W32((u32)(r_ebp+0xfffffff0u), 0x6ceed4u);
    /* 0059ce20: mov dword ptr [ebp - 0xc], 0x6ceeb8 */ W32((u32)(r_ebp+0xfffffff4u), 0x6ceeb8u);
    /* 0059ce27: mov dword ptr [ebp - 8], 0x6ceea4 */ W32((u32)(r_ebp+0xfffffff8u), 0x6ceea4u);
    /* 0059ce2e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0059ce35: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0059ce3c: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0059ce43: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ce49: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x59ce4eu); f_005a2020();
    /* 0059ce4e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059ce51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce53: push 0xfdea */ { u32 v = 0xfdeau; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059ce5b: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x59ce60u); f_005f83d0();
    /* 0059ce60: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059ce65: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x59ce6au); f_005f89d0();
    /* 0059ce6a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce6e: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce70: push 0x6b6084 */ { u32 v = 0x6b6084u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce75: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59ce7au); f_00630f40();
    /* 0059ce7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ce7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ce7e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059ce81: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x59ce86u); f_005f73e0();
    /* 0059ce86: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0059ce8d: jmp 0x59ce98 */ goto L_0059ce98;
L_0059ce8f:; BB(0x0059ce8f);
    /* 0059ce8f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059ce92: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059ce95: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0059ce98:; BB(0x0059ce98);
    /* 0059ce98: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059ce9c: jge 0x59cef5 */ if ((fS==fO)) goto L_0059cef5;
L_0059ce9e:; BB(0x0059ce9e);
    /* 0059ce9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cea0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059cea2: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0059cea4: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0059cea6: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cea8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059ceab: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 0059ceaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ceb0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59ceb5u); f_00630f40();
    /* 0059ceb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059ceb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ceb9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cebb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059cebe: imul eax, eax, 0x23 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x23u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059cec1: add eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059cec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cec5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059cec7: push 0xfdee */ { u32 v = 0xfdeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0059cecc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059cecf: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 0059ced3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ced4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ced6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059ced9: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x59cedeu); f_005f9de0();
    /* 0059cede: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cee0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059cee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cee4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059cee7: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x59ceecu); f_005fb300();
    /* 0059ceec: mov ecx, eax */ r_ecx = r_eax;
    /* 0059ceee: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x59cef3u); f_005eb700();
    /* 0059cef3: jmp 0x59ce8f */ goto L_0059ce8f;
L_0059cef5:; BB(0x0059cef5);
    /* 0059cef5: mov esp, ebp */ r_esp = r_ebp;
    /* 0059cef7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059cef8: ret  */ FN_RET(0x0059ce10); r_esp += 4; return;
}

