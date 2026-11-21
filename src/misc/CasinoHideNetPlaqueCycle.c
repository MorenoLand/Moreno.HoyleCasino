#include "protos.h"

void f_005d6980(void) /* CasinoHideNetPlaqueCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d6980);
    /* 005d6980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6981: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6985: push 0x6a90b7 */ { u32 v = 0x6a90b7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d698a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6991: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6994: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d6999: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d699b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d699c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d699f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d69a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d69a8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d69ab: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69b2: je 0x5d69c9 */ if (fZ) goto L_005d69c9;
L_005d69b4:; BB(0x005d69b4);
    /* 005d69b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d69b7: mov ecx, dword ptr [ecx + 0x49c] */ r_ecx = R32((u32)(r_ecx+0x49cu));
    /* 005d69bd: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5d69c2u); f_005f54c0();
    /* 005d69c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d69c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69c7: je 0x5d69e0 */ if (fZ) goto L_005d69e0;
L_005d69c9:; BB(0x005d69c9);
    /* 005d69c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69cd: je 0x5d69de */ if (fZ) goto L_005d69de;
L_005d69cf:; BB(0x005d69cf);
    /* 005d69cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d69d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d69d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d69d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d69d9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005d69dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d69deu); call_ind(t); }
L_005d69de:; BB(0x005d69de);
    /* 005d69de: jmp 0x5d6a3d */ goto L_005d6a3d;
L_005d69e0:; BB(0x005d69e0);
    /* 005d69e0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d69e2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d69e7u); f_00686d82();
    /* 005d69e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d69ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d69ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d69f4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69f8: je 0x5d6a17 */ if (fZ) goto L_005d6a17;
L_005d69fa:; BB(0x005d69fa);
    /* 005d69fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d69fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d69fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6a01: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5d6a06u); f_006010a0();
    /* 005d6a06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6a09: mov dword ptr [edx], 0x6d3de4 */ W32((u32)(r_edx), 0x6d3de4u);
    /* 005d6a0f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6a12: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d6a15: jmp 0x5d6a1e */ goto L_005d6a1e;
L_005d6a17:; BB(0x005d6a17);
    /* 005d6a17: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005d6a1e:; BB(0x005d6a1e);
    /* 005d6a1e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d6a21: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d6a24: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6a2b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d6a2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6a32: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005d6a38: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d6a3du); f_005f5d50();
L_005d6a3d:; BB(0x005d6a3d);
    /* 005d6a3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6a40: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6a47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6a48: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6a4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6a4b: ret 4 */ FN_RET(0x005d6980); r_esp += 8; return;
}

void f_005d7a70(void) /* CasinoHideNetPlaqueCycle::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7a70);
    /* 005d7a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7a77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7a7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7a7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7a81: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d7a87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7a89u); call_ind(t); }
    /* 005d7a89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7a8c: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 005d7a92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7a95: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 005d7a9b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d7a9d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d7aa0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7aa2u); call_ind(t); }
    /* 005d7aa2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7aa5: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005d7aab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7aae: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005d7ab4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d7ab6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d7ab9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7abbu); call_ind(t); }
    /* 005d7abb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7abd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7ac0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ac1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ac4: call 0x6010d0 */ r_esp -= 4; W32(r_esp, 0x5d7ac9u); f_006010d0();
    /* 005d7ac9: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7acc: ret 8 */ FN_RET(0x005d7a70); r_esp += 12; return;
}

void f_005d7ad0(void) /* CasinoHideNetPlaqueCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7ad0);
    /* 005d7ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7ad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ada: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d7add: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ae0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d7ae3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7ae5: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7ae7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d7aea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7aecu); call_ind(t); }
    /* 005d7aec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7aef: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x5d7af4u); f_006005d0();
    /* 005d7af4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7af7: ret  */ FN_RET(0x005d7ad0); r_esp += 4; return;
}

