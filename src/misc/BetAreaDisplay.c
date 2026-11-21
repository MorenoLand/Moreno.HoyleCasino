#include "protos.h"

void f_005cc1d0(void) /* BetAreaDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc1d0);
    /* 005cc1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc1da: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5cc1dfu); f_005eaaf0();
    /* 005cc1df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc1e2: mov dword ptr [eax], 0x6d287c */ W32((u32)(r_eax), 0x6d287cu);
    /* 005cc1e8: push 0x960 */ { u32 v = 0x960u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc1f2: add ecx, 0x17c */ {  u32 a = r_ecx; u32 b = 0x17cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc1f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc1f9: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5cc1feu); f_00686fa2();
    /* 005cc1fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc201: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc204: mov dword ptr [edx + 0x178], 0 */ W32((u32)(r_edx+0x178u), 0x0u);
    /* 005cc20e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc211: mov dword ptr [eax + 0xadc], 0 */ W32((u32)(r_eax+0xadcu), 0x0u);
    /* 005cc21b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc21e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc220: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc221: ret  */ FN_RET(0x005cc1d0); r_esp += 4; return;
}

void f_005cc230(void) /* BetAreaDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc230);
    /* 005cc230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc231: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc235: push 0x6a8b1b */ { u32 v = 0x6a8b1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cc23a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cc240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc241: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc244: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cc249: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cc24b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc24c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cc24f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cc255: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cc258: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc25b: mov dword ptr [eax], 0x6d287c */ W32((u32)(r_eax), 0x6d287cu);
    /* 005cc261: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cc268: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc26b: call 0x5ccd90 */ r_esp -= 4; W32(r_esp, 0x5cc270u); f_005ccd90();
    /* 005cc270: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc273: mov edx, dword ptr [ecx + 0xadc] */ r_edx = R32((u32)(r_ecx+0xadcu));
    /* 005cc279: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cc27c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc27f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cc282: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc286: je 0x5cc29b */ if (fZ) goto L_005cc29b;
L_005cc288:; BB(0x005cc288);
    /* 005cc288: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc28a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc28d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc28f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc292: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cc294: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc296u); call_ind(t); }
    /* 005cc296: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cc299: jmp 0x5cc2a2 */ goto L_005cc2a2;
L_005cc29b:; BB(0x005cc29b);
    /* 005cc29b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005cc2a2:; BB(0x005cc2a2);
    /* 005cc2a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cc2a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cc2ac: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x5cc2b1u); f_005eac00();
    /* 005cc2b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc2b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cc2bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cc2bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc2be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc2bf: ret  */ FN_RET(0x005cc230); r_esp += 4; return;
}

void f_005cda00(void) /* BetAreaDisplay::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cda00);
    /* 005cda00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cda01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cda03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cda07: mov eax, 0x1391 */ r_eax = 0x1391u;
    /* 005cda0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cda0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cda0f: ret  */ FN_RET(0x005cda00); r_esp += 4; return;
}

void f_005cda10(void) /* BetAreaDisplay::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cda10);
    /* 005cda10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cda11: mov ebp, esp */ r_ebp = r_esp;
    /* 005cda13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cda17: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cda1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cda1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cda1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda1f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda22: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cda24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda27: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005cda2d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cda2fu); call_ind(t); }
    /* 005cda2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cda31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cda32: ret 8 */ FN_RET(0x005cda10); r_esp += 12; return;
}

void f_005cda40(void) /* BetAreaDisplay::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cda40);
    /* 005cda40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cda41: mov ebp, esp */ r_ebp = r_esp;
    /* 005cda43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cda47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cda4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cda4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cda4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cda4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cda54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cda57: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 005cda5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cda5fu); call_ind(t); }
    /* 005cda5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cda61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cda62: ret 8 */ FN_RET(0x005cda40); r_esp += 12; return;
}

