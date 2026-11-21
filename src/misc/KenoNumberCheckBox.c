#include "protos.h"

void f_0058d320(void) /* KenoNumberCheckBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d320);
    /* 0058d320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d321: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058d327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d32a: call 0x5ffbb0 */ r_esp -= 4; W32(r_esp, 0x58d32fu); f_005ffbb0();
    /* 0058d32f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d332: mov dword ptr [eax], 0x6cd724 */ W32((u32)(r_eax), 0x6cd724u);
    /* 0058d338: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d33b: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
    /* 0058d345: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d348: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d34a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d34b: ret  */ FN_RET(0x0058d320); r_esp += 4; return;
}

void f_0058d350(void) /* KenoNumberCheckBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d350);
    /* 0058d350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d351: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d355: push 0x6a6f33 */ { u32 v = 0x6a6f33u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d35a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058d360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d361: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d364: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058d369: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058d36b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d36c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058d36f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058d375: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0058d378: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d37b: mov dword ptr [eax], 0x6cd724 */ W32((u32)(r_eax), 0x6cd724u);
    /* 0058d381: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d388: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d38b: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d392: je 0x58d3d3 */ if (fZ) goto L_0058d3d3;
L_0058d394:; BB(0x0058d394);
    /* 0058d394: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d397: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0058d39d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d3a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d3a3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058d3a6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d3aa: je 0x58d3bf */ if (fZ) goto L_0058d3bf;
L_0058d3ac:; BB(0x0058d3ac);
    /* 0058d3ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d3ae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d3b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d3b3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d3b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d3b8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58d3bau); call_ind(t); }
    /* 0058d3ba: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058d3bd: jmp 0x58d3c6 */ goto L_0058d3c6;
L_0058d3bf:; BB(0x0058d3bf);
    /* 0058d3bf: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0058d3c6:; BB(0x0058d3c6);
    /* 0058d3c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d3c9: mov dword ptr [eax + 0x208], 0 */ W32((u32)(r_eax+0x208u), 0x0u);
L_0058d3d3:; BB(0x0058d3d3);
    /* 0058d3d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058d3da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d3dd: call 0x5ffd40 */ r_esp -= 4; W32(r_esp, 0x58d3e2u); f_005ffd40();
    /* 0058d3e2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d3e5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058d3ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058d3ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d3ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d3f0: ret  */ FN_RET(0x0058d350); r_esp += 4; return;
}

void f_0058d400(void) /* KenoNumberCheckBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d400);
    /* 0058d400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d401: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058d407: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058d40a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d40b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d40e: call 0x5f4d00 */ r_esp -= 4; W32(r_esp, 0x58d413u); f_005f4d00();
    /* 0058d413: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d416: ret 4 */ FN_RET(0x0058d400); r_esp += 8; return;
}

void f_0058d420(void) /* KenoNumberCheckBox::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d420);
    /* 0058d420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d421: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058d427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d42a: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x58d42fu); f_005eb220();
    /* 0058d42f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058d432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d433: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058d438: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058d43e: call 0x585850 */ r_esp -= 4; W32(r_esp, 0x58d443u); f_00585850();
    /* 0058d443: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d445: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d446: ret  */ FN_RET(0x0058d420); r_esp += 4; return;
}

void f_0058d450(void) /* KenoNumberCheckBox::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d450);
    /* 0058d450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d451: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d455: push 0x6a6f59 */ { u32 v = 0x6a6f59u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d45a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058d460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d461: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d464: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058d469: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058d46b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d46c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058d46f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0058d475: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0058d478: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058d47e: call 0x58a470 */ r_esp -= 4; W32(r_esp, 0x58d483u); f_0058a470();
    /* 0058d483: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d486: jne 0x58d4a3 */ if (!fZ) goto L_0058d4a3;
L_0058d488:; BB(0x0058d488);
    /* 0058d488: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058d48d: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058d493: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058d496: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0058d499: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d49c: je 0x58d4a3 */ if (fZ) goto L_0058d4a3;
L_0058d49e:; BB(0x0058d49e);
    /* 0058d49e: jmp 0x58d60f */ goto L_0058d60f;
L_0058d4a3:; BB(0x0058d4a3);
    /* 0058d4a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d4a6: call 0x600160 */ r_esp -= 4; W32(r_esp, 0x58d4abu); f_00600160();
    /* 0058d4ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d4ae: cmp dword ptr [ecx + 0x208], 0 */ {  u32 a = R32((u32)(r_ecx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d4b5: jne 0x58d60f */ if (!fZ) goto L_0058d60f;
L_0058d4bb:; BB(0x0058d4bb);
    /* 0058d4bb: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d4c0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x58d4c5u); f_00686d82();
    /* 0058d4c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d4c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058d4cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058d4d2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d4d6: je 0x58d4e5 */ if (fZ) goto L_0058d4e5;
L_0058d4d8:; BB(0x0058d4d8);
    /* 0058d4d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058d4db: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58d4e0u); f_005ec5a0();
    /* 0058d4e0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058d4e3: jmp 0x58d4ec */ goto L_0058d4ec;
L_0058d4e5:; BB(0x0058d4e5);
    /* 0058d4e5: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0058d4ec:; BB(0x0058d4ec);
    /* 0058d4ec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058d4ef: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0058d4f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058d4f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d4fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058d4ff: mov dword ptr [eax + 0x208], ecx */ W32((u32)(r_eax+0x208u), r_ecx);
    /* 0058d505: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d508: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0058d50e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d511: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0058d514: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0058d517: push 0x6cc040 */ { u32 v = 0x6cc040u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d51c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d51f: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0058d525: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d528: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0058d52e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d530: mov ecx, eax */ r_ecx = r_eax;
    /* 0058d532: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058d538: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d53au); call_ind(t); }
    /* 0058d53a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d53b: mov ecx, esp */ r_ecx = r_esp;
    /* 0058d53d: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0058d544: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0058d547: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0058d54c: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0058d54f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d551: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d553: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d556: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0058d55c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x58d561u); f_005ecd00();
    /* 0058d561: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d564: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0058d56a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d56d: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0058d573: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d575: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0058d578: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d57au); call_ind(t); }
    /* 0058d57a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d57d: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x58d582u); f_005eb4b0();
    /* 0058d582: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058d585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d586: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d589: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x58d58eu); f_005eb470();
    /* 0058d58e: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058d591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d592: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d595: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0058d59b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d59e: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0058d5a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d5a6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0058d5a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d5abu); call_ind(t); }
    /* 0058d5ab: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0058d5ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d5b0: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0058d5b6: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x58d5bbu); f_005ecc60();
    /* 0058d5bb: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d5bd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d5c0: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 0058d5c6: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x58d5cbu); f_005eccb0();
    /* 0058d5cb: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d5cd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d5d0: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0058d5d6: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x58d5dbu); f_005ef310();
    /* 0058d5db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d5dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d5e0: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0058d5e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d5e9: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0058d5ef: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d5f1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0058d5f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d5f6u); call_ind(t); }
    /* 0058d5f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d5f9: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0058d5ff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058d602: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0058d608: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d60a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058d60d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d60fu); call_ind(t); }
L_0058d60f:; BB(0x0058d60f);
    /* 0058d60f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d612: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058d619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058d61a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d61c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d61d: ret  */ FN_RET(0x0058d450); r_esp += 4; return;
}

void f_0058d620(void) /* KenoNumberCheckBox::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d620);
    /* 0058d620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d621: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d623: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d626: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058d629: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d62c: call 0x6001b0 */ r_esp -= 4; W32(r_esp, 0x58d631u); f_006001b0();
    /* 0058d631: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d634: cmp dword ptr [eax + 0x208], 0 */ {  u32 a = R32((u32)(r_eax+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d63b: je 0x58d695 */ if (fZ) goto L_0058d695;
L_0058d63d:; BB(0x0058d63d);
    /* 0058d63d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d640: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0058d646: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d649: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0058d64f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058d651: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058d654: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d656u); call_ind(t); }
    /* 0058d656: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d659: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0058d65f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0058d662: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058d665: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058d668: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d66c: je 0x58d681 */ if (fZ) goto L_0058d681;
L_0058d66e:; BB(0x0058d66e);
    /* 0058d66e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d670: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d673: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058d678: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d67a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d67cu); call_ind(t); }
    /* 0058d67c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0058d67f: jmp 0x58d688 */ goto L_0058d688;
L_0058d681:; BB(0x0058d681);
    /* 0058d681: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0058d688:; BB(0x0058d688);
    /* 0058d688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d68b: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
L_0058d695:; BB(0x0058d695);
    /* 0058d695: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d698: ret  */ FN_RET(0x0058d620); r_esp += 4; return;
}

void f_005ffd60(void) /* KenoNumberCheckBox::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ffd60);
    /* 005ffd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd61: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffd63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ffd67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd69: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffd6c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ffd6f: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x5ffd74u); f_005f89f0();
    /* 005ffd74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffd77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffd7b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ffd7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffd80: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 005ffd86: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ffd88u); call_ind(t); }
    /* 005ffd88: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ffd8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffd8d: je 0x5ffdc3 */ if (fZ) goto L_005ffdc3;
L_005ffd8f:; BB(0x005ffd8f);
    /* 005ffd8f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffd91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffd94: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffd96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffd99: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005ffd9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffda1u); call_ind(t); }
    /* 005ffda1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffda4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffda6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffda9: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005ffdaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffdb1u); call_ind(t); }
    /* 005ffdb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffdb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffdb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffdb9: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005ffdbf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffdc1u); call_ind(t); }
    /* 005ffdc1: jmp 0x5ffdd5 */ goto L_005ffdd5;
L_005ffdc3:; BB(0x005ffdc3);
    /* 005ffdc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffdc8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffdca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffdcd: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005ffdd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffdd5u); call_ind(t); }
L_005ffdd5:; BB(0x005ffdd5);
    /* 005ffdd5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffdd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffddc: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x5ffde1u); f_005f4f50();
    /* 005ffde1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ffde4: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005ffde8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffdea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffdeb: ret 4 */ FN_RET(0x005ffd60); r_esp += 8; return;
}

void f_005ffdf0(void) /* KenoNumberCheckBox::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ffdf0);
    /* 005ffdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffdf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ffdf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffdf9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffdfc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ffdff: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x5ffe04u); f_005f89f0();
    /* 005ffe04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffe07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ffe0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe10: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 005ffe16: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ffe18u); call_ind(t); }
    /* 005ffe18: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ffe1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ffe1d: je 0x5ffe53 */ if (fZ) goto L_005ffe53;
L_005ffe1f:; BB(0x005ffe1f);
    /* 005ffe1f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe24: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffe26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe29: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005ffe2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffe31u); call_ind(t); }
    /* 005ffe31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffe36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe39: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005ffe3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffe41u); call_ind(t); }
    /* 005ffe41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffe46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe49: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005ffe4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffe51u); call_ind(t); }
    /* 005ffe51: jmp 0x5ffe65 */ goto L_005ffe65;
L_005ffe53:; BB(0x005ffe53);
    /* 005ffe53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe58: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ffe5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe5d: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005ffe63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ffe65u); call_ind(t); }
L_005ffe65:; BB(0x005ffe65);
    /* 005ffe65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffe68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffe6c: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x5ffe71u); f_005f4f50();
    /* 005ffe71: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ffe74: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005ffe78: mov esp, ebp */ r_esp = r_ebp;
    /* 005ffe7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ffe7b: ret 4 */ FN_RET(0x005ffdf0); r_esp += 8; return;
}

void f_005ffe80(void) /* KenoNumberCheckBox::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ffe80);
    /* 005ffe80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe81: mov ebp, esp */ r_ebp = r_esp;
    /* 005ffe83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ffe87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe8b: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005ffe8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe8f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005ffe92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe93: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ffe96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe97: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ffe9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ffe9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffe9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffea2: call 0x602830 */ r_esp -= 4; W32(r_esp, 0x5ffea7u); f_00602830();
    /* 005ffea7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffeaa: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005ffeb0: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5ffeb5u); f_005ef050();
    /* 005ffeb5: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ffeb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffeb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffebc: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 005ffec2: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5ffec7u); f_005ecc60();
    /* 005ffec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffeca: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005ffed0: call 0x5ef130 */ r_esp -= 4; W32(r_esp, 0x5ffed5u); f_005ef130();
    /* 005ffed5: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ffed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffed9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffedc: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005ffee2: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5ffee7u); f_005eccb0();
    /* 005ffee7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005ffeea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ffeeb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005ffeee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ffeef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffef2: call 0x600300 */ r_esp -= 4; W32(r_esp, 0x5ffef7u); f_00600300();
    /* 005ffef7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffefa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ffefc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ffeff: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005fff02: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fff04u); call_ind(t); }
    /* 005fff04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fff05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fff0a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff0d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fff10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fff12u); call_ind(t); }
    /* 005fff12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fff13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fff18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff1b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fff1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fff20u); call_ind(t); }
    /* 005fff20: mov esp, ebp */ r_esp = r_ebp;
    /* 005fff22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fff23: ret 0x1c */ FN_RET(0x005ffe80); r_esp += 32; return;
}

void f_005fff70(void) /* KenoNumberCheckBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fff70);
    /* 005fff70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fff71: mov ebp, esp */ r_ebp = r_esp;
    /* 005fff73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fff74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fff77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fff7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fff7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fff7e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5fff83u); f_005eaf00();
    /* 005fff83: mov esp, ebp */ r_esp = r_ebp;
    /* 005fff85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fff86: ret 4 */ FN_RET(0x005fff70); r_esp += 8; return;
}

void f_006000a0(void) /* KenoNumberCheckBox::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006000a0);
    /* 006000a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006000a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006000a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006000a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006000a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006000a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006000ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000b0: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006000b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6000b5u); call_ind(t); }
    /* 006000b5: mov esi, eax */ r_esi = r_eax;
    /* 006000b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000ba: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6000bfu); f_005f5590();
    /* 006000bf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006000c0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006000c2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006000c4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006000c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000c9: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 006000cf: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6000d4u); f_005f5590();
    /* 006000d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006000d5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006000d7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006000d9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006000db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000de: add esi, dword ptr [edx + 0x204] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x204u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006000e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006000e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006000ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000ed: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006000f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6000f2u); call_ind(t); }
    /* 006000f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000f5: add eax, dword ptr [ecx + 0x200] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x200u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006000fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006000fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006000ff: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00600105: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600108: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0060010e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600110: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00600113: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600115u); call_ind(t); }
    /* 00600115: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600116: mov esp, ebp */ r_esp = r_ebp;
    /* 00600118: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600119: ret  */ FN_RET(0x006000a0); r_esp += 4; return;
}

void f_00600120(void) /* KenoNumberCheckBox::vfunc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600120);
    /* 00600120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600121: mov ebp, esp */ r_ebp = r_esp;
    /* 00600123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060012a: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x60012fu); f_00600230();
    /* 0060012f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00600132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600134: je 0x600148 */ if (fZ) goto L_00600148;
L_00600136:; BB(0x00600136);
    /* 00600136: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600139: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060013b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060013e: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00600144: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600146u); call_ind(t); }
    /* 00600146: jmp 0x600158 */ goto L_00600158;
L_00600148:; BB(0x00600148);
    /* 00600148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060014b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060014d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600150: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00600156: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600158u); call_ind(t); }
L_00600158:; BB(0x00600158);
    /* 00600158: mov esp, ebp */ r_esp = r_ebp;
    /* 0060015a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060015b: ret  */ FN_RET(0x00600120); r_esp += 4; return;
}

void f_00600200(void) /* KenoNumberCheckBox::vfunc63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600200);
    /* 00600200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600201: mov ebp, esp */ r_ebp = r_esp;
    /* 00600203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600207: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060020a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060020e: je 0x60022c */ if (fZ) goto L_0060022c;
L_00600210:; BB(0x00600210);
    /* 00600210: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600213: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x600218u); f_005f5400();
    /* 00600218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600219: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060021c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060021f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600222: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600225: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600227: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0060022a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60022cu); call_ind(t); }
L_0060022c:; BB(0x0060022c);
    /* 0060022c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060022e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060022f: ret  */ FN_RET(0x00600200); r_esp += 4; return;
}

void f_00600250(void) /* KenoNumberCheckBox::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600250);
    /* 00600250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600251: mov ebp, esp */ r_ebp = r_esp;
    /* 00600253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060025a: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600261: je 0x60028e */ if (fZ) goto L_0060028e;
L_00600263:; BB(0x00600263);
    /* 00600263: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00600266: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600267: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060026a: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00600270: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600273: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00600279: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060027b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00600281: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600283u); call_ind(t); }
    /* 00600283: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00600286: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600288: je 0x60028e */ if (fZ) goto L_0060028e;
L_0060028a:; BB(0x0060028a);
    /* 0060028a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060028c: jmp 0x60029a */ goto L_0060029a;
L_0060028e:; BB(0x0060028e);
    /* 0060028e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00600291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600292: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600295: call 0x5eb6d0 */ r_esp -= 4; W32(r_esp, 0x60029au); f_005eb6d0();
L_0060029a:; BB(0x0060029a);
    /* 0060029a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060029c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060029d: ret 4 */ FN_RET(0x00600250); r_esp += 8; return;
}

void f_006002a0(void) /* KenoNumberCheckBox::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006002a0);
    /* 006002a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006002a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006002a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006002a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006002a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006002aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006002ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002ae: call 0x602b00 */ r_esp -= 4; W32(r_esp, 0x6002b3u); f_00602b00();
    /* 006002b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002b6: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 006002bc: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x6002c1u); f_005ef050();
    /* 006002c1: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006002c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006002c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002c8: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 006002ce: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x6002d3u); f_005ecc60();
    /* 006002d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002d6: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 006002dc: call 0x5ef130 */ r_esp -= 4; W32(r_esp, 0x6002e1u); f_005ef130();
    /* 006002e1: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006002e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006002e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006002e8: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 006002ee: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x6002f3u); f_005eccb0();
    /* 006002f3: mov esp, ebp */ r_esp = r_ebp;
    /* 006002f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006002f6: ret 4 */ FN_RET(0x006002a0); r_esp += 8; return;
}

void f_00600330(void) /* KenoNumberCheckBox::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600330);
    /* 00600330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600331: mov ebp, esp */ r_ebp = r_esp;
    /* 00600333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060033a: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 00600341: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600343: je 0x60038f */ if (fZ) goto L_0060038f;
L_00600345:; BB(0x00600345);
    /* 00600345: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600348: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060034b: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00600351: mov dword ptr [edx + 0x198], ecx */ W32((u32)(r_edx+0x198u), r_ecx);
    /* 00600357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060035a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060035d: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00600363: mov dword ptr [edx + 0x19c], ecx */ W32((u32)(r_edx+0x19cu), r_ecx);
    /* 00600369: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060036c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060036f: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00600375: mov dword ptr [edx + 0x1a0], ecx */ W32((u32)(r_edx+0x1a0u), r_ecx);
    /* 0060037b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060037e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600381: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00600387: mov dword ptr [edx + 0x1a4], ecx */ W32((u32)(r_edx+0x1a4u), r_ecx);
    /* 0060038d: jmp 0x6003d7 */ goto L_006003d7;
L_0060038f:; BB(0x0060038f);
    /* 0060038f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600392: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600395: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0060039b: mov dword ptr [edx + 0x198], ecx */ W32((u32)(r_edx+0x198u), r_ecx);
    /* 006003a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003a7: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 006003ad: mov dword ptr [edx + 0x19c], ecx */ W32((u32)(r_edx+0x19cu), r_ecx);
    /* 006003b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003b9: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 006003bf: mov dword ptr [edx + 0x1a0], ecx */ W32((u32)(r_edx+0x1a0u), r_ecx);
    /* 006003c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003cb: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 006003d1: mov dword ptr [edx + 0x1a4], ecx */ W32((u32)(r_edx+0x1a4u), r_ecx);
L_006003d7:; BB(0x006003d7);
    /* 006003d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006003da: call 0x602f60 */ r_esp -= 4; W32(r_esp, 0x6003dfu); f_00602f60();
    /* 006003df: mov esp, ebp */ r_esp = r_ebp;
    /* 006003e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006003e2: ret  */ FN_RET(0x00600330); r_esp += 4; return;
}

