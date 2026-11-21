#include "protos.h"

void f_00568320(void) /* VPMultiState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568320);
    /* 00568320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568321: mov ebp, esp */ r_ebp = r_esp;
    /* 00568323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056832a: call 0x5d0980 */ r_esp -= 4; W32(r_esp, 0x56832fu); f_005d0980();
    /* 0056832f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568332: mov dword ptr [eax], 0x6ca190 */ W32((u32)(r_eax), 0x6ca190u);
    /* 00568338: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056833b: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00568342: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568345: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 0056834c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056834f: mov byte ptr [eax + 0x18], 0 */ W8((u32)(r_eax+0x18u), 0x0u);
    /* 00568353: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568356: mov esp, ebp */ r_esp = r_ebp;
    /* 00568358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568359: ret  */ FN_RET(0x00568320); r_esp += 4; return;
}

void f_00568360(void) /* VPMultiState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568360);
    /* 00568360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568361: mov ebp, esp */ r_ebp = r_esp;
    /* 00568363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00568365: push 0x6a5c58 */ { u32 v = 0x6a5c58u; r_esp -= 4; W32(r_esp, v); }
    /* 0056836a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00568370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568371: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568374: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00568379: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056837b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056837c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056837f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00568385: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00568388: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056838b: mov dword ptr [eax], 0x6ca190 */ W32((u32)(r_eax), 0x6ca190u);
    /* 00568391: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568398: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056839b: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0056839e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005683a1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005683a4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005683a7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005683ab: je 0x5683c0 */ if (fZ) goto L_005683c0;
L_005683ad:; BB(0x005683ad);
    /* 005683ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005683af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005683b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005683b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005683b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005683b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5683bbu); call_ind(t); }
    /* 005683bb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005683be: jmp 0x5683c7 */ goto L_005683c7;
L_005683c0:; BB(0x005683c0);
    /* 005683c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005683c7:; BB(0x005683c7);
    /* 005683c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005683ca: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005683cd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005683d0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005683d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005683d6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005683da: je 0x568402 */ if (fZ) goto L_00568402;
L_005683dc:; BB(0x005683dc);
    /* 005683dc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005683df: call 0x56a720 */ r_esp -= 4; W32(r_esp, 0x5683e4u); f_0056a720();
    /* 005683e4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005683e9: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005683ec: je 0x5683fa */ if (fZ) goto L_005683fa;
L_005683ee:; BB(0x005683ee);
    /* 005683ee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005683f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005683f2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5683f7u); f_00686cae();
    /* 005683f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005683fa:; BB(0x005683fa);
    /* 005683fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005683fd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00568400: jmp 0x568409 */ goto L_00568409;
L_00568402:; BB(0x00568402);
    /* 00568402: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00568409:; BB(0x00568409);
    /* 00568409: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00568410: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00568413: call 0x5d0a00 */ r_esp -= 4; W32(r_esp, 0x568418u); f_005d0a00();
    /* 00568418: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056841b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00568422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568423: mov esp, ebp */ r_esp = r_ebp;
    /* 00568425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568426: ret  */ FN_RET(0x00568360); r_esp += 4; return;
}

