#include "protos.h"

void f_005da360(void) /* sub_5DA360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da360);
    /* 005da360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da361: mov ebp, esp */ r_ebp = r_esp;
    /* 005da363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da36a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da36b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da36d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da370: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005da373: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da376: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005da379: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005da37b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005da37e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da380u); call_ind(t); }
    /* 005da380: mov esp, ebp */ r_esp = r_ebp;
    /* 005da382: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da383: ret 4 */ FN_RET(0x005da360); r_esp += 8; return;
}

void f_005da390(void) /* sub_5DA390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da390);
    /* 005da390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da391: mov ebp, esp */ r_ebp = r_esp;
    /* 005da393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da397: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005da399: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da39b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da39e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005da3a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da3a4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005da3a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da3a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005da3ab: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005da3ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da3b0u); call_ind(t); }
    /* 005da3b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da3b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da3b7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005da3ba: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5da3bfu); f_005fc420();
    /* 005da3bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005da3c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da3c2: ret 4 */ FN_RET(0x005da390); r_esp += 8; return;
}

void f_005da3d0(void) /* sub_5DA3D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da3d0);
    /* 005da3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da3d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005da3d5: push 0x6a91fb */ { u32 v = 0x6a91fbu; r_esp -= 4; W32(r_esp, v); }
    /* 005da3da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005da3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da3e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da3e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005da3e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005da3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da3ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005da3ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005da3f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005da3f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da3fb: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da3ff: jne 0x5da450 */ if (!fZ) goto L_005da450;
L_005da401:; BB(0x005da401);
    /* 005da401: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005da403: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5da408u); f_00686d82();
    /* 005da408: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da40b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005da40e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005da415: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da419: je 0x5da428 */ if (fZ) goto L_005da428;
L_005da41b:; BB(0x005da41b);
    /* 005da41b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005da41e: call 0x5c9a50 */ r_esp -= 4; W32(r_esp, 0x5da423u); f_005c9a50();
    /* 005da423: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005da426: jmp 0x5da42f */ goto L_005da42f;
L_005da428:; BB(0x005da428);
    /* 005da428: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005da42f:; BB(0x005da42f);
    /* 005da42f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005da432: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005da435: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005da43c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da43f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da442: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 005da445: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005da448: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005da44b: call 0x5c9c70 */ r_esp -= 4; W32(r_esp, 0x5da450u); f_005c9c70();
L_005da450:; BB(0x005da450);
    /* 005da450: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da453: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005da45a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005da45b: mov esp, ebp */ r_esp = r_ebp;
    /* 005da45d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da45e: ret  */ FN_RET(0x005da3d0); r_esp += 4; return;
}

void f_005da460(void) /* sub_5DA460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da460);
    /* 005da460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da461: mov ebp, esp */ r_ebp = r_esp;
    /* 005da463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da467: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da46a: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da46e: je 0x5da47b */ if (fZ) goto L_005da47b;
L_005da470:; BB(0x005da470);
    /* 005da470: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da473: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005da476: call 0x5ca200 */ r_esp -= 4; W32(r_esp, 0x5da47bu); f_005ca200();
L_005da47b:; BB(0x005da47b);
    /* 005da47b: mov esp, ebp */ r_esp = r_ebp;
    /* 005da47d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da47e: ret  */ FN_RET(0x005da460); r_esp += 4; return;
}

void f_005da480(void) /* sub_5DA480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da480);
    /* 005da480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da481: mov ebp, esp */ r_ebp = r_esp;
    /* 005da483: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da484: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da487: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da48a: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da48e: je 0x5da49b */ if (fZ) goto L_005da49b;
L_005da490:; BB(0x005da490);
    /* 005da490: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da493: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 005da496: call 0x5ca110 */ r_esp -= 4; W32(r_esp, 0x5da49bu); f_005ca110();
L_005da49b:; BB(0x005da49b);
    /* 005da49b: mov esp, ebp */ r_esp = r_ebp;
    /* 005da49d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da49e: ret  */ FN_RET(0x005da480); r_esp += 4; return;
}

void f_005da7b0(void) /* sub_5DA7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da7b0);
    /* 005da7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da7b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da7b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da7b9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005da7bb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005da7c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da7c2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da7c8: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005da7ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da7d0u); call_ind(t); }
    /* 005da7d0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005da7d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7d5: je 0x5da7f1 */ if (fZ) goto L_005da7f1;
L_005da7d7:; BB(0x005da7d7);
    /* 005da7d7: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005da7dd: movzx eax, byte ptr [edx + 0x4ee8] */ r_eax = (u32)R8((u32)(r_edx+0x4ee8u));
    /* 005da7e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7e6: je 0x5da7f1 */ if (fZ) goto L_005da7f1;
L_005da7e8:; BB(0x005da7e8);
    /* 005da7e8: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005da7ef: jmp 0x5da7f8 */ goto L_005da7f8;
L_005da7f1:; BB(0x005da7f1);
    /* 005da7f1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005da7f8:; BB(0x005da7f8);
    /* 005da7f8: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005da7fb: jmp 0x5da7ff */ goto L_005da7ff;
L_005da7ff:; BB(0x005da7ff);
    /* 005da7ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005da801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da802: ret  */ FN_RET(0x005da7b0); r_esp += 4; return;
}

void f_005da810(void) /* sub_5DA810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da810);
    /* 005da810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da811: mov ebp, esp */ r_ebp = r_esp;
    /* 005da813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da817: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005da81c: mov al, byte ptr [eax + 0x4ee9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x4ee9u))) & 0xffu);
    /* 005da822: jmp 0x5da826 */ goto L_005da826;
L_005da826:; BB(0x005da826);
    /* 005da826: mov esp, ebp */ r_esp = r_ebp;
    /* 005da828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da829: ret  */ FN_RET(0x005da810); r_esp += 4; return;
}

void f_005da830(void) /* sub_5DA830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da830);
    /* 005da830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da831: mov ebp, esp */ r_ebp = r_esp;
    /* 005da833: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da836: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da839: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da83c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5da841u); f_005da7b0();
    /* 005da841: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005da844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da846: jne 0x5da860 */ if (!fZ) goto L_005da860;
L_005da848:; BB(0x005da848);
    /* 005da848: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da84b: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5da850u); f_005da810();
    /* 005da850: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005da853: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da855: jne 0x5da860 */ if (!fZ) goto L_005da860;
L_005da857:; BB(0x005da857);
    /* 005da857: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005da85e: jmp 0x5da867 */ goto L_005da867;
L_005da860:; BB(0x005da860);
    /* 005da860: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005da867:; BB(0x005da867);
    /* 005da867: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005da86a: jmp 0x5da86e */ goto L_005da86e;
L_005da86e:; BB(0x005da86e);
    /* 005da86e: mov esp, ebp */ r_esp = r_ebp;
    /* 005da870: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da871: ret  */ FN_RET(0x005da830); r_esp += 4; return;
}

void f_005da880(void) /* sub_5DA880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da880);
    /* 005da880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da881: mov ebp, esp */ r_ebp = r_esp;
    /* 005da883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da887: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005da88c: mov eax, dword ptr [eax + 0x4eec] */ r_eax = R32((u32)(r_eax+0x4eecu));
    /* 005da892: jmp 0x5da899 */ goto L_005da899;
L_005da899:; BB(0x005da899);
    /* 005da899: mov esp, ebp */ r_esp = r_ebp;
    /* 005da89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da89c: ret  */ FN_RET(0x005da880); r_esp += 4; return;
}

void f_005da8a0(void) /* sub_5DA8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da8a0);
    /* 005da8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da8a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da8a7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005da8ac: mov eax, dword ptr [eax + 0x4ef0] */ r_eax = R32((u32)(r_eax+0x4ef0u));
    /* 005da8b2: jmp 0x5da8b9 */ goto L_005da8b9;
L_005da8b9:; BB(0x005da8b9);
    /* 005da8b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005da8bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da8bc: ret  */ FN_RET(0x005da8a0); r_esp += 4; return;
}

void f_005da8c0(void) /* sub_5DA8C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da8c0);
    /* 005da8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da8c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da8c7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005da8cc: mov eax, dword ptr [eax + 0x4ef8] */ r_eax = R32((u32)(r_eax+0x4ef8u));
    /* 005da8d2: jmp 0x5da8d6 */ goto L_005da8d6;
L_005da8d6:; BB(0x005da8d6);
    /* 005da8d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005da8d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da8d9: ret  */ FN_RET(0x005da8c0); r_esp += 4; return;
}

void f_005da8e0(void) /* sub_5DA8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da8e0);
    /* 005da8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da8e5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da8e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da8eb: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5da8f0u); f_005da8a0();
    /* 005da8f0: mov esi, eax */ r_esi = r_eax;
    /* 005da8f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da8f5: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x5da8fau); f_005da8c0();
    /* 005da8fa: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005da8fc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005da8fe: jg 0x5da904 */ if ((!fZ&&fS==fO)) goto L_005da904;
L_005da900:; BB(0x005da900);
    /* 005da900: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005da902: jmp 0x5da91e */ goto L_005da91e;
L_005da904:; BB(0x005da904);
    /* 005da904: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da907: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5da90cu); f_005da8a0();
    /* 005da90c: mov esi, eax */ r_esi = r_eax;
    /* 005da90e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da911: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x5da916u); f_005da8c0();
    /* 005da916: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005da918: mov eax, esi */ r_eax = r_esi;
    /* 005da91a: jmp 0x5da91e */ goto L_005da91e;
L_005da91e:; BB(0x005da91e);
    /* 005da91e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da91f: mov esp, ebp */ r_esp = r_ebp;
    /* 005da921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da922: ret  */ FN_RET(0x005da8e0); r_esp += 4; return;
}

void f_005daa20(void) /* sub_5DAA20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daa20);
    /* 005daa20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daa21: mov ebp, esp */ r_ebp = r_esp;
    /* 005daa23: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005daa26: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005daa29: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005daa2f: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x5daa34u); f_00636610();
    /* 005daa34: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005daa37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005daa39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005daa3b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5daa40u); f_0064c8a0();
    /* 005daa40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daa43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005daa46: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005daa49: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005daa4c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005daa4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005daa52: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005daa55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005daa5c: jmp 0x5daa67 */ goto L_005daa67;
L_005daa5e:; BB(0x005daa5e);
    /* 005daa5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa61: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005daa64: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005daa67:; BB(0x005daa67);
    /* 005daa67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa6a: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daa6d: jge 0x5daac0 */ if ((fS==fO)) goto L_005daac0;
L_005daa6f:; BB(0x005daa6f);
    /* 005daa6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005daa72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa73: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005daa76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa77: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005daa7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daa7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa7f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5daa84u); f_005dcb00();
    /* 005daa84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daa87: mov ecx, eax */ r_ecx = r_eax;
    /* 005daa89: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5daa8eu); f_005d5a90();
    /* 005daa8e: mov ecx, eax */ r_ecx = r_eax;
    /* 005daa90: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5daa95u); f_0064c6e0();
    /* 005daa95: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005daa98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daa9a: je 0x5daabe */ if (fZ) goto L_005daabe;
L_005daa9c:; BB(0x005daa9c);
    /* 005daa9c: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005daa9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daaa0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daaa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daaa4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5daaa9u); f_005dcb00();
    /* 005daaa9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daaac: mov ecx, eax */ r_ecx = r_eax;
    /* 005daaae: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5daab3u); f_005d5a90();
    /* 005daab3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005daab5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005daab8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005daabb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005daabe:; BB(0x005daabe);
    /* 005daabe: jmp 0x5daa5e */ goto L_005daa5e;
L_005daac0:; BB(0x005daac0);
    /* 005daac0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005daac3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005daac6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005daac8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005daacb: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005daace: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005daad1: mov esp, ebp */ r_esp = r_ebp;
    /* 005daad3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daad4: ret 4 */ FN_RET(0x005daa20); r_esp += 8; return;
}

void f_005daae0(void) /* sub_5DAAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daae0);
    /* 005daae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daae1: mov ebp, esp */ r_ebp = r_esp;
    /* 005daae3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005daae6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005daae9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005daaf0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005daaf6: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x5daafbu); f_00636610();
    /* 005daafb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005daafe: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005dab01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dab02: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005dab05: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x5dab0au); f_005daa20();
    /* 005dab0a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dab11: jmp 0x5dab1c */ goto L_005dab1c;
L_005dab13:; BB(0x005dab13);
    /* 005dab13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab16: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dab19: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dab1c:; BB(0x005dab1c);
    /* 005dab1c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab1f: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab22: jge 0x5dab5b */ if ((fS==fO)) goto L_005dab5b;
L_005dab24:; BB(0x005dab24);
    /* 005dab24: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005dab27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dab28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dab2c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dab31u); f_005dcb00();
    /* 005dab31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dab34: mov ecx, eax */ r_ecx = r_eax;
    /* 005dab36: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dab3bu); f_005d5a90();
    /* 005dab3b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005dab3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dab3f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005dab41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dab42: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005dab45: call 0x64c720 */ r_esp -= 4; W32(r_esp, 0x5dab4au); f_0064c720();
    /* 005dab4a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dab4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab4f: je 0x5dab59 */ if (fZ) goto L_005dab59;
L_005dab51:; BB(0x005dab51);
    /* 005dab51: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab54: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005dab57: jmp 0x5dab5b */ goto L_005dab5b;
L_005dab59:; BB(0x005dab59);
    /* 005dab59: jmp 0x5dab13 */ goto L_005dab13;
L_005dab5b:; BB(0x005dab5b);
    /* 005dab5b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dab5e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dab61: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dab64: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dab67: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dab6e: jmp 0x5dab79 */ goto L_005dab79;
L_005dab70:; BB(0x005dab70);
    /* 005dab70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab73: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dab76: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005dab79:; BB(0x005dab79);
    /* 005dab79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab7c: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab7f: jge 0x5dac25 */ if ((fS==fO)) goto L_005dac25;
L_005dab85:; BB(0x005dab85);
    /* 005dab85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dab88: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab8b: je 0x5dac20 */ if (fZ) goto L_005dac20;
L_005dab91:; BB(0x005dab91);
    /* 005dab91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dab94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dab95: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dab9au); f_005dcb00();
    /* 005dab9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dab9d: mov ecx, eax */ r_ecx = r_eax;
    /* 005dab9f: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x5daba4u); f_005d5840();
    /* 005daba4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005daba7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daba9: je 0x5dac20 */ if (fZ) goto L_005dac20;
L_005dabab:; BB(0x005dabab);
    /* 005dabab: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005dabae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabaf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dabb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabb3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dabb8u); f_005dcb00();
    /* 005dabb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dabbb: mov ecx, eax */ r_ecx = r_eax;
    /* 005dabbd: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dabc2u); f_005d5a90();
    /* 005dabc2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005dabc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabc6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dabc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabc9: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005dabcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dabcd: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005dabd0: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5dabd5u); f_0064c630();
    /* 005dabd5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005dabd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabd9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dabdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabdc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005dabdf: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5dabe4u); f_0064c6e0();
    /* 005dabe4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dabe7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dabe9: je 0x5dac20 */ if (fZ) goto L_005dac20;
L_005dabeb:; BB(0x005dabeb);
    /* 005dabeb: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005dabee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dabf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dabf3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dabf8u); f_005dcb00();
    /* 005dabf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dabfb: mov ecx, eax */ r_ecx = r_eax;
    /* 005dabfd: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dac02u); f_005d5a90();
    /* 005dac02: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005dac05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dac08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac09: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005dac0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dac0d: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005dac10: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5dac15u); f_0064c630();
    /* 005dac15: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dac17: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005dac1a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dac1d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005dac20:; BB(0x005dac20);
    /* 005dac20: jmp 0x5dab70 */ goto L_005dab70;
L_005dac25:; BB(0x005dac25);
    /* 005dac25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dac28: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dac2b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005dac2d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dac30: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005dac33: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dac36: mov esp, ebp */ r_esp = r_ebp;
    /* 005dac38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac39: ret 4 */ FN_RET(0x005daae0); r_esp += 8; return;
}

void f_005dac40(void) /* sub_5DAC40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dac40);
    /* 005dac40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dac41: mov ebp, esp */ r_ebp = r_esp;
    /* 005dac43: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dac46: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dac49: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005dac4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dac4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dac50: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x5dac55u); f_005daa20();
    /* 005dac55: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005dac58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac59: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005dac5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dac62u); f_005dcb00();
    /* 005dac62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dac65: mov ecx, eax */ r_ecx = r_eax;
    /* 005dac67: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dac6cu); f_005d5a90();
    /* 005dac6c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005dac6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac70: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dac72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dac73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dac76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dac77: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005dac7a: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5dac7fu); f_0064c630();
    /* 005dac7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dac82: mov esp, ebp */ r_esp = r_ebp;
    /* 005dac84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac85: ret 8 */ FN_RET(0x005dac40); r_esp += 12; return;
}

void f_005dac90(void) /* sub_5DAC90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dac90);
    /* 005dac90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dac91: mov ebp, esp */ r_ebp = r_esp;
    /* 005dac93: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dac96: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005dac99: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005daca0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005daca6: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x5dacabu); f_00636610();
    /* 005dacab: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dacae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dacb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dacb2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5dacb7u); f_0064c8a0();
    /* 005dacb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dacba: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dacbd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005dacc0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dacc3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dacc6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dacc9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005daccc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005daccf: call 0x5daf50 */ r_esp -= 4; W32(r_esp, 0x5dacd4u); f_005daf50();
    /* 005dacd4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dacd7: je 0x5dace6 */ if (fZ) goto L_005dace6;
L_005dacd9:; BB(0x005dacd9);
    /* 005dacd9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005dacdc: call 0x5daf50 */ r_esp -= 4; W32(r_esp, 0x5dace1u); f_005daf50();
    /* 005dace1: jmp 0x5dad97 */ goto L_005dad97;
L_005dace6:; BB(0x005dace6);
    /* 005dace6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005daced: jmp 0x5dacf8 */ goto L_005dacf8;
L_005dacef:; BB(0x005dacef);
    /* 005dacef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dacf2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dacf5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005dacf8:; BB(0x005dacf8);
    /* 005dacf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dacfb: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dacfe: jge 0x5dad94 */ if ((fS==fO)) goto L_005dad94;
L_005dad04:; BB(0x005dad04);
    /* 005dad04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dad07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad08: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dad0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad0c: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005dad0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dad10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dad13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad14: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dad19u); f_005dcb00();
    /* 005dad19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dad1c: mov ecx, eax */ r_ecx = r_eax;
    /* 005dad1e: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dad23u); f_005d5a90();
    /* 005dad23: mov ecx, eax */ r_ecx = r_eax;
    /* 005dad25: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x5dad2au); f_0064c6e0();
    /* 005dad2a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dad2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad2f: je 0x5dad5b */ if (fZ) goto L_005dad5b;
L_005dad31:; BB(0x005dad31);
    /* 005dad31: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005dad34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dad35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dad38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad39: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dad3eu); f_005dcb00();
    /* 005dad3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dad41: mov ecx, eax */ r_ecx = r_eax;
    /* 005dad43: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dad48u); f_005d5a90();
    /* 005dad48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dad4a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005dad4d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005dad50: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dad53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dad56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dad59: jmp 0x5dad8f */ goto L_005dad8f;
L_005dad5b:; BB(0x005dad5b);
    /* 005dad5b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dad5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dad62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dad63: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005dad66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dad6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dad6b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dad70u); f_005dcb00();
    /* 005dad70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dad73: mov ecx, eax */ r_ecx = r_eax;
    /* 005dad75: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dad7au); f_005d5a90();
    /* 005dad7a: mov ecx, eax */ r_ecx = r_eax;
    /* 005dad7c: call 0x64c720 */ r_esp -= 4; W32(r_esp, 0x5dad81u); f_0064c720();
    /* 005dad81: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dad84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad86: je 0x5dad8f */ if (fZ) goto L_005dad8f;
L_005dad88:; BB(0x005dad88);
    /* 005dad88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005dad8f:; BB(0x005dad8f);
    /* 005dad8f: jmp 0x5dacef */ goto L_005dacef;
L_005dad94:; BB(0x005dad94);
    /* 005dad94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005dad97:; BB(0x005dad97);
    /* 005dad97: mov esp, ebp */ r_esp = r_ebp;
    /* 005dad99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad9a: ret  */ FN_RET(0x005dac90); r_esp += 4; return;
}

void f_005dada0(void) /* sub_5DADA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dada0);
    /* 005dada0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dada1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dada3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dada6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dada7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005dadaa: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005dadb1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dadb7: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x5dadbcu); f_00636610();
    /* 005dadbc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dadbf: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005dadc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dadc3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dadc6: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x5dadcbu); f_005daa20();
    /* 005dadcb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dadce: call 0x5daf50 */ r_esp -= 4; W32(r_esp, 0x5dadd3u); f_005daf50();
    /* 005dadd3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dadd6: je 0x5dade0 */ if (fZ) goto L_005dade0;
L_005dadd8:; BB(0x005dadd8);
    /* 005dadd8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005daddb: jmp 0x5daeb5 */ goto L_005daeb5;
L_005dade0:; BB(0x005dade0);
    /* 005dade0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005dade7: jmp 0x5dadf2 */ goto L_005dadf2;
L_005dade9:; BB(0x005dade9);
    /* 005dade9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dadec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dadef: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005dadf2:; BB(0x005dadf2);
    /* 005dadf2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dadf5: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dadf8: jge 0x5daeb2 */ if ((fS==fO)) goto L_005daeb2;
L_005dadfe:; BB(0x005dadfe);
    /* 005dadfe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dae01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dae02: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dae07u); f_005dcb00();
    /* 005dae07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dae0a: mov ecx, eax */ r_ecx = r_eax;
    /* 005dae0c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5dae11u); f_005d5a50();
    /* 005dae11: mov esi, eax */ r_esi = r_eax;
    /* 005dae13: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dae16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dae18: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dae1b: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005dae21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dae23u); call_ind(t); }
    /* 005dae23: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae25: jge 0x5dae2f */ if ((fS==fO)) goto L_005dae2f;
L_005dae27:; BB(0x005dae27);
    /* 005dae27: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dae2a: jmp 0x5daeb5 */ goto L_005daeb5;
L_005dae2f:; BB(0x005dae2f);
    /* 005dae2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dae32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dae33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dae36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dae37: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 005dae3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dae3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dae3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dae3f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dae44u); f_005dcb00();
    /* 005dae44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dae47: mov ecx, eax */ r_ecx = r_eax;
    /* 005dae49: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dae4eu); f_005d5a90();
    /* 005dae4e: mov ecx, eax */ r_ecx = r_eax;
    /* 005dae50: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x5dae55u); f_0064c6a0();
    /* 005dae55: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dae58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae5a: je 0x5daead */ if (fZ) goto L_005daead;
L_005dae5c:; BB(0x005dae5c);
    /* 005dae5c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dae5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dae60: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dae65u); f_005dcb00();
    /* 005dae65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dae68: mov ecx, eax */ r_ecx = r_eax;
    /* 005dae6a: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5dae6fu); f_005d5a50();
    /* 005dae6f: mov esi, eax */ r_esi = r_eax;
    /* 005dae71: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dae74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dae76: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dae79: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005dae7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dae81u); call_ind(t); }
    /* 005dae81: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae83: jle 0x5daead */ if ((fZ||fS!=fO)) goto L_005daead;
L_005dae85:; BB(0x005dae85);
    /* 005dae85: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 005dae88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dae89: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dae8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dae8d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dae92u); f_005dcb00();
    /* 005dae92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dae95: mov ecx, eax */ r_ecx = r_eax;
    /* 005dae97: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dae9cu); f_005d5a90();
    /* 005dae9c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dae9e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005daea1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005daea4: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005daea7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005daeaa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005daead:; BB(0x005daead);
    /* 005daead: jmp 0x5dade9 */ goto L_005dade9;
L_005daeb2:; BB(0x005daeb2);
    /* 005daeb2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_005daeb5:; BB(0x005daeb5);
    /* 005daeb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daeb6: mov esp, ebp */ r_esp = r_ebp;
    /* 005daeb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daeb9: ret  */ FN_RET(0x005dada0); r_esp += 4; return;
}

void f_005daec0(void) /* sub_5DAEC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daec0);
    /* 005daec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005daec3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005daec6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005daec7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005daeca: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005daed1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005daed7: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x5daedcu); f_00636610();
    /* 005daedc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005daedf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005daee6: jmp 0x5daef1 */ goto L_005daef1;
L_005daee8:; BB(0x005daee8);
    /* 005daee8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daeeb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005daeee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005daef1:; BB(0x005daef1);
    /* 005daef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daef4: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daef7: jge 0x5daf44 */ if ((fS==fO)) goto L_005daf44;
L_005daef9:; BB(0x005daef9);
    /* 005daef9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daefc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daefd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5daf02u); f_005dcb00();
    /* 005daf02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daf05: mov ecx, eax */ r_ecx = r_eax;
    /* 005daf07: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5daf0cu); f_005d5a50();
    /* 005daf0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005daf0e: jle 0x5daf42 */ if ((fZ||fS!=fO)) goto L_005daf42;
L_005daf10:; BB(0x005daf10);
    /* 005daf10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005daf14: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5daf19u); f_005dcb00();
    /* 005daf19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daf1c: mov ecx, eax */ r_ecx = r_eax;
    /* 005daf1e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5daf23u); f_005d5a50();
    /* 005daf23: mov esi, eax */ r_esi = r_eax;
    /* 005daf25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005daf28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005daf2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005daf2d: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005daf33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5daf35u); call_ind(t); }
    /* 005daf35: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf37: jl 0x5daf42 */ if ((fS!=fO)) goto L_005daf42;
L_005daf39:; BB(0x005daf39);
    /* 005daf39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005daf3c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005daf3f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005daf42:; BB(0x005daf42);
    /* 005daf42: jmp 0x5daee8 */ goto L_005daee8;
L_005daf44:; BB(0x005daf44);
    /* 005daf44: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005daf47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daf48: mov esp, ebp */ r_esp = r_ebp;
    /* 005daf4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daf4b: ret  */ FN_RET(0x005daec0); r_esp += 4; return;
}

void f_005daf50(void) /* sub_5DAF50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daf50);
    /* 005daf50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daf51: mov ebp, esp */ r_ebp = r_esp;
    /* 005daf53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005daf56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005daf57: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005daf5a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005daf61: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005daf68: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005daf6e: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x5daf73u); f_00636610();
    /* 005daf73: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005daf76: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005daf7d: jmp 0x5daf88 */ goto L_005daf88;
L_005daf7f:; BB(0x005daf7f);
    /* 005daf7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf82: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005daf85: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005daf88:; BB(0x005daf88);
    /* 005daf88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf8b: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf8e: jge 0x5dafe1 */ if ((fS==fO)) goto L_005dafe1;
L_005daf90:; BB(0x005daf90);
    /* 005daf90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daf93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005daf94: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5daf99u); f_005dcb00();
    /* 005daf99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daf9c: mov ecx, eax */ r_ecx = r_eax;
    /* 005daf9e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5dafa3u); f_005d5a50();
    /* 005dafa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005dafa5: jle 0x5dafdf */ if ((fZ||fS!=fO)) goto L_005dafdf;
L_005dafa7:; BB(0x005dafa7);
    /* 005dafa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dafab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dafb0u); f_005dcb00();
    /* 005dafb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dafb3: mov ecx, eax */ r_ecx = r_eax;
    /* 005dafb5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5dafbau); f_005d5a50();
    /* 005dafba: mov esi, eax */ r_esi = r_eax;
    /* 005dafbc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dafbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dafc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dafc4: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005dafca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dafccu); call_ind(t); }
    /* 005dafcc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dafce: jl 0x5dafdf */ if ((fS!=fO)) goto L_005dafdf;
L_005dafd0:; BB(0x005dafd0);
    /* 005dafd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dafd3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dafd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dafd9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dafdc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005dafdf:; BB(0x005dafdf);
    /* 005dafdf: jmp 0x5daf7f */ goto L_005daf7f;
L_005dafe1:; BB(0x005dafe1);
    /* 005dafe1: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dafe5: jne 0x5dafec */ if (!fZ) goto L_005dafec;
L_005dafe7:; BB(0x005dafe7);
    /* 005dafe7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dafea: jmp 0x5dafef */ goto L_005dafef;
L_005dafec:; BB(0x005dafec);
    /* 005dafec: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005dafef:; BB(0x005dafef);
    /* 005dafef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daff0: mov esp, ebp */ r_esp = r_ebp;
    /* 005daff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daff3: ret  */ FN_RET(0x005daf50); r_esp += 4; return;
}

