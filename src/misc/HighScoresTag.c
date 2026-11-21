#include "protos.h"

void f_0066f3f0(void) /* HighScoresTag::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f3f0);
    /* 0066f3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f3f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f3f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f3f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f3fa: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x66f3ffu); f_005ec5a0();
    /* 0066f3ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f402: mov dword ptr [eax], 0x6e0e14 */ W32((u32)(r_eax), 0x6e0e14u);
    /* 0066f408: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f40d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f410: add ecx, 0x1d0 */ {  u32 a = r_ecx; u32 b = 0x1d0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f416: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f417: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66f41cu); f_00686d8e();
    /* 0066f41c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f41f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f422: mov dword ptr [edx + 0x234], 0xffffffff */ W32((u32)(r_edx+0x234u), 0xffffffffu);
    /* 0066f42c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f42f: mov dword ptr [eax + 0x238], 0 */ W32((u32)(r_eax+0x238u), 0x0u);
    /* 0066f439: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f43c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f43e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f43f: ret  */ FN_RET(0x0066f3f0); r_esp += 4; return;
}

void f_0066f440(void) /* HighScoresTag::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f440);
    /* 0066f440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f441: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f445: push 0x6ad03e */ { u32 v = 0x6ad03eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066f44a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066f450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f451: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f454: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066f459: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f45c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066f45f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066f465: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066f468: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f46b: mov dword ptr [eax], 0x6e0e14 */ W32((u32)(r_eax), 0x6e0e14u);
    /* 0066f471: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f478: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f47b: cmp dword ptr [ecx + 0x238], 0 */ {  u32 a = R32((u32)(r_ecx+0x238u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f482: je 0x66f4c3 */ if (fZ) goto L_0066f4c3;
L_0066f484:; BB(0x0066f484);
    /* 0066f484: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f487: mov eax, dword ptr [edx + 0x238] */ r_eax = R32((u32)(r_edx+0x238u));
    /* 0066f48d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066f490: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066f493: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066f496: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f49a: je 0x66f4af */ if (fZ) goto L_0066f4af;
L_0066f49c:; BB(0x0066f49c);
    /* 0066f49c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f49e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066f4a1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066f4a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066f4a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f4a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66f4aau); call_ind(t); }
    /* 0066f4aa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066f4ad: jmp 0x66f4b6 */ goto L_0066f4b6;
L_0066f4af:; BB(0x0066f4af);
    /* 0066f4af: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0066f4b6:; BB(0x0066f4b6);
    /* 0066f4b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f4b9: mov dword ptr [eax + 0x238], 0 */ W32((u32)(r_eax+0x238u), 0x0u);
L_0066f4c3:; BB(0x0066f4c3);
    /* 0066f4c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066f4ca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066f4cd: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x66f4d2u); f_005ec760();
    /* 0066f4d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066f4d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066f4dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066f4dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f4df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f4e0: ret  */ FN_RET(0x0066f440); r_esp += 4; return;
}

void f_0066f810(void) /* HighScoresTag::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f810);
    /* 0066f810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f811: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f81a: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x66f81fu); f_005f62b0();
    /* 0066f81f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f822: cmp dword ptr [eax + 0x238], 0 */ {  u32 a = R32((u32)(r_eax+0x238u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f829: je 0x66f844 */ if (fZ) goto L_0066f844;
L_0066f82b:; BB(0x0066f82b);
    /* 0066f82b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f82e: mov edx, dword ptr [ecx + 0x238] */ r_edx = R32((u32)(r_ecx+0x238u));
    /* 0066f834: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f837: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0066f83d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066f83f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0066f842: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f844u); call_ind(t); }
L_0066f844:; BB(0x0066f844);
    /* 0066f844: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f847: ret  */ FN_RET(0x0066f810); r_esp += 4; return;
}

