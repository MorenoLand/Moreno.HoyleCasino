#include "protos.h"

void f_0064b920(void) /* PlaqueTag::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b920);
    /* 0064b920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b921: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064b927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b92a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x64b92fu); f_005eaaf0();
    /* 0064b92f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b932: mov dword ptr [eax], 0x6dcab4 */ W32((u32)(r_eax), 0x6dcab4u);
    /* 0064b938: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b93b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064b93e: mov dword ptr [ecx + 0x178], edx */ W32((u32)(r_ecx+0x178u), r_edx);
    /* 0064b944: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b947: mov dword ptr [eax + 0x17c], 0 */ W32((u32)(r_eax+0x17cu), 0x0u);
    /* 0064b951: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b954: mov dword ptr [ecx + 0x180], 0 */ W32((u32)(r_ecx+0x180u), 0x0u);
    /* 0064b95e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b961: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b964: ret 4 */ FN_RET(0x0064b920); r_esp += 8; return;
}

void f_0064b970(void) /* PlaqueTag::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b970);
    /* 0064b970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b971: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b975: push 0x6abf78 */ { u32 v = 0x6abf78u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b97a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b981: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b984: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064b989: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b98c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064b98f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064b995: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064b998: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b99b: mov dword ptr [eax], 0x6dcab4 */ W32((u32)(r_eax), 0x6dcab4u);
    /* 0064b9a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b9a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b9ab: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b9b2: je 0x64b9f3 */ if (fZ) goto L_0064b9f3;
L_0064b9b4:; BB(0x0064b9b4);
    /* 0064b9b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b9b7: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0064b9bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064b9c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064b9c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064b9c6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b9ca: je 0x64b9df */ if (fZ) goto L_0064b9df;
L_0064b9cc:; BB(0x0064b9cc);
    /* 0064b9cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b9ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b9d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b9d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b9d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b9d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b9dau); call_ind(t); }
    /* 0064b9da: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064b9dd: jmp 0x64b9e6 */ goto L_0064b9e6;
L_0064b9df:; BB(0x0064b9df);
    /* 0064b9df: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064b9e6:; BB(0x0064b9e6);
    /* 0064b9e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b9e9: mov dword ptr [eax + 0x17c], 0 */ W32((u32)(r_eax+0x17cu), 0x0u);
L_0064b9f3:; BB(0x0064b9f3);
    /* 0064b9f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b9f6: cmp dword ptr [ecx + 0x180], 0 */ {  u32 a = R32((u32)(r_ecx+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b9fd: je 0x64ba3e */ if (fZ) goto L_0064ba3e;
L_0064b9ff:; BB(0x0064b9ff);
    /* 0064b9ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ba02: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 0064ba08: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064ba0b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ba0e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064ba11: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ba15: je 0x64ba2a */ if (fZ) goto L_0064ba2a;
L_0064ba17:; BB(0x0064ba17);
    /* 0064ba17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ba19: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ba1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ba1e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ba21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ba23: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64ba25u); call_ind(t); }
    /* 0064ba25: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064ba28: jmp 0x64ba31 */ goto L_0064ba31;
L_0064ba2a:; BB(0x0064ba2a);
    /* 0064ba2a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0064ba31:; BB(0x0064ba31);
    /* 0064ba31: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ba34: mov dword ptr [eax + 0x180], 0 */ W32((u32)(r_eax+0x180u), 0x0u);
L_0064ba3e:; BB(0x0064ba3e);
    /* 0064ba3e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ba45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ba48: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x64ba4du); f_005eac00();
    /* 0064ba4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ba50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ba57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ba58: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ba5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ba5b: ret  */ FN_RET(0x0064b970); r_esp += 4; return;
}

void f_0064bbd0(void) /* PlaqueTag::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bbd0);
    /* 0064bbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bbd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bbd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bbd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bbda: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x64bbdfu); f_005eb570();
    /* 0064bbdf: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bbe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bbe2: ret  */ FN_RET(0x0064bbd0); r_esp += 4; return;
}

void f_0064bbf0(void) /* PlaqueTag::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064bbf0);
    /* 0064bbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064bbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064bbf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bbf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064bbf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bbfa: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x64bbffu); f_005eb5a0();
    /* 0064bbff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bc02: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bc09: je 0x64bc24 */ if (fZ) goto L_0064bc24;
L_0064bc0b:; BB(0x0064bc0b);
    /* 0064bc0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bc0e: mov edx, dword ptr [ecx + 0x180] */ r_edx = R32((u32)(r_ecx+0x180u));
    /* 0064bc14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bc17: mov ecx, dword ptr [eax + 0x180] */ r_ecx = R32((u32)(r_eax+0x180u));
    /* 0064bc1d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064bc1f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064bc22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bc24u); call_ind(t); }
L_0064bc24:; BB(0x0064bc24);
    /* 0064bc24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bc27: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bc2e: je 0x64bc49 */ if (fZ) goto L_0064bc49;
L_0064bc30:; BB(0x0064bc30);
    /* 0064bc30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bc33: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0064bc39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bc3c: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0064bc42: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064bc44: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064bc47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64bc49u); call_ind(t); }
L_0064bc49:; BB(0x0064bc49);
    /* 0064bc49: mov esp, ebp */ r_esp = r_ebp;
    /* 0064bc4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064bc4c: ret  */ FN_RET(0x0064bbf0); r_esp += 4; return;
}

void f_0064beb0(void) /* PlaqueTag::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064beb0);
    /* 0064beb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064beb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064beb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064beb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064beb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064beba: cmp dword ptr [eax + 0x180], 0 */ {  u32 a = R32((u32)(r_eax+0x180u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bec1: jne 0x64bec5 */ if (!fZ) goto L_0064bec5;
L_0064bec3:; BB(0x0064bec3);
    /* 0064bec3: jmp 0x64bef9 */ goto L_0064bef9;
L_0064bec5:; BB(0x0064bec5);
    /* 0064bec5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064bec8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064bec9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064becc: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x64bed1u); f_005f56a0();
    /* 0064bed1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064bed4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bed6: je 0x64bee7 */ if (fZ) goto L_0064bee7;
L_0064bed8:; BB(0x0064bed8);
    /* 0064bed8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bedb: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x64bee0u); f_005f54c0();
    /* 0064bee0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064bee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064bee5: je 0x64bef1 */ if (fZ) goto L_0064bef1;
L_0064bee7:; BB(0x0064bee7);
    /* 0064bee7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064beea: call 0x64be50 */ r_esp -= 4; W32(r_esp, 0x64beefu); f_0064be50();
    /* 0064beef: jmp 0x64bef9 */ goto L_0064bef9;
L_0064bef1:; BB(0x0064bef1);
    /* 0064bef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064bef4: call 0x64bc50 */ r_esp -= 4; W32(r_esp, 0x64bef9u); f_0064bc50();
L_0064bef9:; BB(0x0064bef9);
    /* 0064bef9: mov esp, ebp */ r_esp = r_ebp;
    /* 0064befb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064befc: ret 4 */ FN_RET(0x0064beb0); r_esp += 8; return;
}

