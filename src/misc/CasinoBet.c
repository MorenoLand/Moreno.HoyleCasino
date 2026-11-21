#include "protos.h"

void f_005cb4b0(void) /* CasinoBet::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cb4b0);
    /* 005cb4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cb4b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4b5: push 0x6a8af8 */ { u32 v = 0x6a8af8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cb4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4c1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cb4c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cb4c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cb4cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cb4cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cb4cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cb4d5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cb4d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb4db: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x5cb4e0u); f_005f49d0();
    /* 005cb4e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cb4e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb4ea: mov dword ptr [eax], 0x6d277c */ W32((u32)(r_eax), 0x6d277cu);
    /* 005cb4f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb4f3: mov dword ptr [ecx + 0xe8], 1 */ W32((u32)(r_ecx+0xe8u), 0x1u);
    /* 005cb4fd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb500: mov dword ptr [edx + 0xec], 1 */ W32((u32)(r_edx+0xecu), 0x1u);
    /* 005cb50a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cb511: jmp 0x5cb51c */ goto L_005cb51c;
L_005cb513:; BB(0x005cb513);
    /* 005cb513: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb516: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cb519: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005cb51c:; BB(0x005cb51c);
    /* 005cb51c: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb520: jge 0x5cb56d */ if ((fS==fO)) goto L_005cb56d;
L_005cb522:; BB(0x005cb522);
    /* 005cb522: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005cb529: jmp 0x5cb534 */ goto L_005cb534;
L_005cb52b:; BB(0x005cb52b);
    /* 005cb52b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb52e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cb531: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005cb534:; BB(0x005cb534);
    /* 005cb534: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cb538: jge 0x5cb56b */ if ((fS==fO)) goto L_005cb56b;
L_005cb53a:; BB(0x005cb53a);
    /* 005cb53a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb53c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb53e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cb543u); f_0064c8a0();
    /* 005cb543: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb546: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cb549: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cb54c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cb54f: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cb552: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb555: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005cb559: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb55c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cb55f: mov dword ptr [ecx + edx*8], eax */ W32((u32)(r_ecx+r_edx*8), r_eax);
    /* 005cb562: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb565: mov dword ptr [ecx + edx*8 + 4], eax */ W32((u32)(r_ecx+r_edx*8+0x4u), r_eax);
    /* 005cb569: jmp 0x5cb52b */ goto L_005cb52b;
L_005cb56b:; BB(0x005cb56b);
    /* 005cb56b: jmp 0x5cb513 */ goto L_005cb513;
L_005cb56d:; BB(0x005cb56d);
    /* 005cb56d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cb574: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb577: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb57a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb581: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cb582: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb584: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb585: ret  */ FN_RET(0x005cb4b0); r_esp += 4; return;
}

void f_005cba10(void) /* CasinoBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cba10);
    /* 005cba10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cba11: mov ebp, esp */ r_ebp = r_esp;
    /* 005cba13: sub esp, 0x174 */ {  u32 a = r_esp; u32 b = 0x174u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cba19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cba1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cba20: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005cba23: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
    /* 005cba29: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cba2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cba30: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cba36: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 005cba3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cba3eu); call_ind(t); }
    /* 005cba3e: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005cba44: cmp dword ptr [ebp - 0x10c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cba4b: jne 0x5cba52 */ if (!fZ) goto L_005cba52;
L_005cba4d:; BB(0x005cba4d);
    /* 005cba4d: jmp 0x5cc1bc */ goto L_005cc1bc;
L_005cba52:; BB(0x005cba52);
    /* 005cba52: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cba58: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cba5a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cba60: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005cba66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cba68u); call_ind(t); }
    /* 005cba68: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 005cba6e: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cba74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cba76: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cba7c: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005cba82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cba84u); call_ind(t); }
    /* 005cba84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cba87: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cba8d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005cba90: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 005cba96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cba99: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cba9c: jl 0x5cbab2 */ if ((fS!=fO)) goto L_005cbab2;
L_005cba9e:; BB(0x005cba9e);
    /* 005cba9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cbaa1: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbaa4: jl 0x5cbab2 */ if ((fS!=fO)) goto L_005cbab2;
L_005cbaa6:; BB(0x005cbaa6);
    /* 005cbaa6: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
    /* 005cbab0: jmp 0x5cbabc */ goto L_005cbabc;
L_005cbab2:; BB(0x005cbab2);
    /* 005cbab2: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_005cbabc:; BB(0x005cbabc);
    /* 005cbabc: mov dl, byte ptr [ebp - 0x160] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffea0u))) & 0xffu);
    /* 005cbac2: mov byte ptr [ebp - 0x105], dl */ W8((u32)(r_ebp+0xfffffefbu), (u8)r_edx);
    /* 005cbac8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbaca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbacc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cbad1u); f_0064c8a0();
    /* 005cbad1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbad4: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005cbada: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005cbae0: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005cbae6: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005cbaec: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005cbaf2: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 005cbaf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbafa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbafc: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cbb01u); f_0064c8a0();
    /* 005cbb01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbb04: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005cbb0a: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 005cbb10: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005cbb16: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005cbb1c: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 005cbb22: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005cbb28: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 005cbb2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb2f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbb35: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x5cbb3au); f_005d5ac0();
    /* 005cbb3a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cbb3d: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbb40: jne 0x5cbb5f */ if (!fZ) goto L_005cbb5f;
L_005cbb42:; BB(0x005cbb42);
    /* 005cbb42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cbb45: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbb49: jne 0x5cbb5f */ if (!fZ) goto L_005cbb5f;
L_005cbb4b:; BB(0x005cbb4b);
    /* 005cbb4b: lea ecx, [ebp - 0xe4] */ r_ecx = (u32)(r_ebp+0xffffff1cu);
    /* 005cbb51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbb52: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbb58: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x5cbb5du); f_005d5de0();
    /* 005cbb5d: jmp 0x5cbb73 */ goto L_005cbb73;
L_005cbb5f:; BB(0x005cbb5f);
    /* 005cbb5f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cbb62: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cbb64: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005cbb67: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005cbb6d: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
L_005cbb73:; BB(0x005cbb73);
    /* 005cbb73: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 005cbb79: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cbb7c: mov eax, dword ptr [ebp - 0x15c] */ r_eax = R32((u32)(r_ebp+0xfffffea4u));
    /* 005cbb82: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005cbb86: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cbb89: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 005cbb8c: mov ecx, dword ptr [ecx + edx*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 005cbb90: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005cbb96: mov dword ptr [ebp - 0x100], ecx */ W32((u32)(r_ebp+0xffffff00u), r_ecx);
    /* 005cbb9c: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbba3: jne 0x5cbc24 */ if (!fZ) goto L_005cbc24;
L_005cbba5:; BB(0x005cbba5);
    /* 005cbba5: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbbac: jne 0x5cbc24 */ if (!fZ) goto L_005cbc24;
L_005cbbae:; BB(0x005cbbae);
    /* 005cbbae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbb0: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 005cbbb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbb7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cbbbcu); f_0064c8a0();
    /* 005cbbbc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbbbf: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005cbbc5: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 005cbbcb: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 005cbbd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbd2: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005cbbd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbd9: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbbdf: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x5cbbe4u); f_005d5e10();
    /* 005cbbe4: movzx edx, byte ptr [ebp - 0x105] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffefbu));
    /* 005cbbeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbbed: jne 0x5cbc24 */ if (!fZ) goto L_005cbc24;
L_005cbbef:; BB(0x005cbbef);
    /* 005cbbef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbf1: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 005cbbf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbbf8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cbbfdu); f_0064c8a0();
    /* 005cbbfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbc00: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005cbc06: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
    /* 005cbc0c: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 005cbc12: mov dword ptr [ebp - 0xe4], ecx */ W32((u32)(r_ebp+0xffffff1cu), r_ecx);
    /* 005cbc18: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 005cbc1e: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
L_005cbc24:; BB(0x005cbc24);
    /* 005cbc24: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cbc2a: add eax, dword ptr [ebp - 0xe4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cbc30: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005cbc36: movzx ecx, byte ptr [ebp - 0x105] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffefbu));
    /* 005cbc3d: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005cbc41: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005cbc43: je 0x5cbcb3 */ if (fZ) goto L_005cbcb3;
L_005cbc45:; BB(0x005cbc45);
    /* 005cbc45: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005cbc4b: cmp eax, dword ptr [ebp - 0xfc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbc51: jge 0x5cbcb3 */ if ((fS==fO)) goto L_005cbcb3;
L_005cbc53:; BB(0x005cbc53);
    /* 005cbc53: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc5a: jne 0x5cbcb3 */ if (!fZ) goto L_005cbcb3;
L_005cbc5c:; BB(0x005cbc5c);
    /* 005cbc5c: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005cbc62: cmp ecx, dword ptr [ebp - 0xfc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbc68: jl 0x5cbcb3 */ if ((fS!=fO)) goto L_005cbcb3;
L_005cbc6a:; BB(0x005cbc6a);
    /* 005cbc6a: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc71: jne 0x5cbc7c */ if (!fZ) goto L_005cbc7c;
L_005cbc73:; BB(0x005cbc73);
    /* 005cbc73: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc7a: je 0x5cbc8e */ if (fZ) goto L_005cbc8e;
L_005cbc7c:; BB(0x005cbc7c);
    /* 005cbc7c: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc83: jne 0x5cbcb3 */ if (!fZ) goto L_005cbcb3;
L_005cbc85:; BB(0x005cbc85);
    /* 005cbc85: cmp dword ptr [ebp - 0x100], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbc8c: jne 0x5cbcb3 */ if (!fZ) goto L_005cbcb3;
L_005cbc8e:; BB(0x005cbc8e);
    /* 005cbc8e: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 005cbc94: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005cbc9a: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005cbca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbca1: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cbca7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbca8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbcae: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x5cbcb3u); f_005d5e10();
L_005cbcb3:; BB(0x005cbcb3);
    /* 005cbcb3: movzx edx, byte ptr [ebp - 0x105] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffefbu));
    /* 005cbcba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbcbc: je 0x5cc020 */ if (fZ) goto L_005cc020;
L_005cbcc2:; BB(0x005cbcc2);
    /* 005cbcc2: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 005cbcc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbcc8: je 0x5cbedd */ if (fZ) goto L_005cbedd;
L_005cbcce:; BB(0x005cbcce);
    /* 005cbcce: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cbcd4: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbcd7: jne 0x5cbd61 */ if (!fZ) goto L_005cbd61;
L_005cbcdd:; BB(0x005cbcdd);
    /* 005cbcdd: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbce3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbce8u); f_0063aac0();
    /* 005cbce8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbcea: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005cbcf0: cmp dword ptr [ebp - 0x130], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbcf7: je 0x5cbd21 */ if (fZ) goto L_005cbd21;
L_005cbcf9:; BB(0x005cbcf9);
    /* 005cbcf9: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbcff: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbd04u); f_0063aac0();
    /* 005cbd04: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cbd06: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 005cbd0c: cmp dword ptr [ebp - 0x134], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbd13: je 0x5cbd21 */ if (fZ) goto L_005cbd21;
L_005cbd15:; BB(0x005cbd15);
    /* 005cbd15: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 005cbd1f: jmp 0x5cbd2b */ goto L_005cbd2b;
L_005cbd21:; BB(0x005cbd21);
    /* 005cbd21: mov dword ptr [ebp - 0x164], 1 */ W32((u32)(r_ebp+0xfffffe9cu), 0x1u);
L_005cbd2b:; BB(0x005cbd2b);
    /* 005cbd2b: movzx ecx, byte ptr [ebp - 0x164] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe9cu));
    /* 005cbd32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbd34: je 0x5cbd5c */ if (fZ) goto L_005cbd5c;
L_005cbd36:; BB(0x005cbd36);
    /* 005cbd36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd38: push 0x6c3864 */ { u32 v = 0x6c3864u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd3d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbd42u); f_00630f40();
    /* 005cbd42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbd45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd46: push 0x6c384c */ { u32 v = 0x6c384cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd4b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbd50u); f_00630f40();
    /* 005cbd50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbd53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbd54: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5cbd59u); f_0062ff10();
    /* 005cbd59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cbd5c:; BB(0x005cbd5c);
    /* 005cbd5c: jmp 0x5cc1bc */ goto L_005cc1bc;
L_005cbd61:; BB(0x005cbd61);
    /* 005cbd61: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cbd67: cmp edx, dword ptr [ebp - 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbd6d: jg 0x5cbd93 */ if ((!fZ&&fS==fO)) goto L_005cbd93;
L_005cbd6f:; BB(0x005cbd6f);
    /* 005cbd6f: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cbd75: cmp eax, dword ptr [ebp - 0xd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbd7b: jne 0x5cbe17 */ if (!fZ) goto L_005cbe17;
L_005cbd81:; BB(0x005cbd81);
    /* 005cbd81: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005cbd87: cmp ecx, dword ptr [ebp - 0xd4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbd8d: jle 0x5cbe17 */ if ((fZ||fS!=fO)) goto L_005cbe17;
L_005cbd93:; BB(0x005cbd93);
    /* 005cbd93: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbd99: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbd9eu); f_0063aac0();
    /* 005cbd9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbda0: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 005cbda6: cmp dword ptr [ebp - 0x138], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbdad: je 0x5cbdd7 */ if (fZ) goto L_005cbdd7;
L_005cbdaf:; BB(0x005cbdaf);
    /* 005cbdaf: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbdb5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbdbau); f_0063aac0();
    /* 005cbdba: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cbdbc: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005cbdc2: cmp dword ptr [ebp - 0x13c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbdc9: je 0x5cbdd7 */ if (fZ) goto L_005cbdd7;
L_005cbdcb:; BB(0x005cbdcb);
    /* 005cbdcb: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 005cbdd5: jmp 0x5cbde1 */ goto L_005cbde1;
L_005cbdd7:; BB(0x005cbdd7);
    /* 005cbdd7: mov dword ptr [ebp - 0x168], 1 */ W32((u32)(r_ebp+0xfffffe98u), 0x1u);
L_005cbde1:; BB(0x005cbde1);
    /* 005cbde1: movzx ecx, byte ptr [ebp - 0x168] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe98u));
    /* 005cbde8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbdea: je 0x5cbe12 */ if (fZ) goto L_005cbe12;
L_005cbdec:; BB(0x005cbdec);
    /* 005cbdec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbdee: push 0x6b8170 */ { u32 v = 0x6b8170u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbdf3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbdf8u); f_00630f40();
    /* 005cbdf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbdfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbdfc: push 0x6b814c */ { u32 v = 0x6b814cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe01: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbe06u); f_00630f40();
    /* 005cbe06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbe09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe0a: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5cbe0fu); f_0062ff10();
    /* 005cbe0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cbe12:; BB(0x005cbe12);
    /* 005cbe12: jmp 0x5cc1bc */ goto L_005cc1bc;
L_005cbe17:; BB(0x005cbe17);
    /* 005cbe17: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cbe1d: cmp edx, dword ptr [ebp - 0xfc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbe23: jge 0x5cbed8 */ if ((fS==fO)) goto L_005cbed8;
L_005cbe29:; BB(0x005cbe29);
    /* 005cbe29: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbe30: jne 0x5cbed8 */ if (!fZ) goto L_005cbed8;
L_005cbe36:; BB(0x005cbe36);
    /* 005cbe36: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 005cbe3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe3d: push 0x6d2858 */ { u32 v = 0x6d2858u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe42: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbe47u); f_00630f40();
    /* 005cbe47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbe4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe4b: lea ecx, [ebp - 0xd0] */ r_ecx = (u32)(r_ebp+0xffffff30u);
    /* 005cbe51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbe52: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cbe58u); call_ind(t); }
    /* 005cbe58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbe5b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbe61: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbe66u); f_0063aac0();
    /* 005cbe66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cbe68: mov dword ptr [ebp - 0x140], edx */ W32((u32)(r_ebp+0xfffffec0u), r_edx);
    /* 005cbe6e: cmp dword ptr [ebp - 0x140], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbe75: je 0x5cbe9f */ if (fZ) goto L_005cbe9f;
L_005cbe77:; BB(0x005cbe77);
    /* 005cbe77: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbe7d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbe82u); f_0063aac0();
    /* 005cbe82: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cbe84: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 005cbe8a: cmp dword ptr [ebp - 0x144], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbe91: je 0x5cbe9f */ if (fZ) goto L_005cbe9f;
L_005cbe93:; BB(0x005cbe93);
    /* 005cbe93: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 005cbe9d: jmp 0x5cbea9 */ goto L_005cbea9;
L_005cbe9f:; BB(0x005cbe9f);
    /* 005cbe9f: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
L_005cbea9:; BB(0x005cbea9);
    /* 005cbea9: movzx ecx, byte ptr [ebp - 0x16c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe94u));
    /* 005cbeb0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbeb2: je 0x5cbed3 */ if (fZ) goto L_005cbed3;
L_005cbeb4:; BB(0x005cbeb4);
    /* 005cbeb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbeb6: push 0x6d2844 */ { u32 v = 0x6d2844u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbebb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbec0u); f_00630f40();
    /* 005cbec0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbec4: lea edx, [ebp - 0xd0] */ r_edx = (u32)(r_ebp+0xffffff30u);
    /* 005cbeca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cbecb: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5cbed0u); f_0062ff10();
    /* 005cbed0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cbed3:; BB(0x005cbed3);
    /* 005cbed3: jmp 0x5cc1bc */ goto L_005cc1bc;
L_005cbed8:; BB(0x005cbed8);
    /* 005cbed8: jmp 0x5cbf93 */ goto L_005cbf93;
L_005cbedd:; BB(0x005cbedd);
    /* 005cbedd: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cbee3: cmp eax, dword ptr [ebp - 0xd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbee9: jg 0x5cbf0f */ if ((!fZ&&fS==fO)) goto L_005cbf0f;
L_005cbeeb:; BB(0x005cbeeb);
    /* 005cbeeb: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cbef1: cmp ecx, dword ptr [ebp - 0xd8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbef7: jne 0x5cbf93 */ if (!fZ) goto L_005cbf93;
L_005cbefd:; BB(0x005cbefd);
    /* 005cbefd: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005cbf03: cmp edx, dword ptr [ebp - 0xd4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbf09: jle 0x5cbf93 */ if ((fZ||fS!=fO)) goto L_005cbf93;
L_005cbf0f:; BB(0x005cbf0f);
    /* 005cbf0f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbf15: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbf1au); f_0063aac0();
    /* 005cbf1a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cbf1c: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 005cbf22: cmp dword ptr [ebp - 0x148], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf29: je 0x5cbf53 */ if (fZ) goto L_005cbf53;
L_005cbf2b:; BB(0x005cbf2b);
    /* 005cbf2b: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cbf31: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cbf36u); f_0063aac0();
    /* 005cbf36: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005cbf38: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 005cbf3e: cmp dword ptr [ebp - 0x14c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf45: je 0x5cbf53 */ if (fZ) goto L_005cbf53;
L_005cbf47:; BB(0x005cbf47);
    /* 005cbf47: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 005cbf51: jmp 0x5cbf5d */ goto L_005cbf5d;
L_005cbf53:; BB(0x005cbf53);
    /* 005cbf53: mov dword ptr [ebp - 0x170], 1 */ W32((u32)(r_ebp+0xfffffe90u), 0x1u);
L_005cbf5d:; BB(0x005cbf5d);
    /* 005cbf5d: movzx edx, byte ptr [ebp - 0x170] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe90u));
    /* 005cbf64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbf66: je 0x5cbf8e */ if (fZ) goto L_005cbf8e;
L_005cbf68:; BB(0x005cbf68);
    /* 005cbf68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf6a: push 0x6b8170 */ { u32 v = 0x6b8170u; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf6f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbf74u); f_00630f40();
    /* 005cbf74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbf77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf78: push 0x6b814c */ { u32 v = 0x6b814cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf7d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cbf82u); f_00630f40();
    /* 005cbf82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cbf85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cbf86: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5cbf8bu); f_0062ff10();
    /* 005cbf8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005cbf8e:; BB(0x005cbf8e);
    /* 005cbf8e: jmp 0x5cc1bc */ goto L_005cc1bc;
L_005cbf93:; BB(0x005cbf93);
    /* 005cbf93: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cbf99: add eax, dword ptr [ebp - 0xe4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cbf9f: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cbfa2: jle 0x5cbfb7 */ if ((fZ||fS!=fO)) goto L_005cbfb7;
L_005cbfa4:; BB(0x005cbfa4);
    /* 005cbfa4: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005cbfa8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cbfaa: je 0x5cbfb7 */ if (fZ) goto L_005cbfb7;
L_005cbfac:; BB(0x005cbfac);
    /* 005cbfac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cbfaf: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 005cbfb5: jmp 0x5cbfe6 */ goto L_005cbfe6;
L_005cbfb7:; BB(0x005cbfb7);
    /* 005cbfb7: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cbfbd: add eax, dword ptr [ebp - 0xe4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cbfc3: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005cbfc9: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005cbfcf: add ecx, dword ptr [ebp - 0xe0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cbfd5: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 005cbfdb: lea ecx, [ebp - 0xf8] */ r_ecx = (u32)(r_ebp+0xffffff08u);
    /* 005cbfe1: call 0x64c540 */ r_esp -= 4; W32(r_esp, 0x5cbfe6u); f_0064c540();
L_005cbfe6:; BB(0x005cbfe6);
    /* 005cbfe6: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 005cbfec: sub edx, dword ptr [ebp - 0x104] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffefcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cbff2: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cbff5: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005cbffb: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 005cc001: sub eax, dword ptr [ebp - 0x100] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff00u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cc007: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc00a: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005cc010: lea ecx, [ebp - 0xec] */ r_ecx = (u32)(r_ebp+0xffffff14u);
    /* 005cc016: call 0x64c540 */ r_esp -= 4; W32(r_esp, 0x5cc01bu); f_0064c540();
    /* 005cc01b: jmp 0x5cc0d6 */ goto L_005cc0d6;
L_005cc020:; BB(0x005cc020);
    /* 005cc020: cmp dword ptr [ebp - 0x104], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc027: jne 0x5cc02e */ if (!fZ) goto L_005cc02e;
L_005cc029:; BB(0x005cc029);
    /* 005cc029: jmp 0x5cc1bc */ goto L_005cc1bc;
L_005cc02e:; BB(0x005cc02e);
    /* 005cc02e: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cc034: add ecx, dword ptr [ebp - 0xe4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc03a: cmp ecx, dword ptr [ebp - 0xfc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc040: jge 0x5cc066 */ if ((fS==fO)) goto L_005cc066;
L_005cc042:; BB(0x005cc042);
    /* 005cc042: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 005cc04c: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cc052: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005cc058: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 005cc05e: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005cc064: jmp 0x5cc0d6 */ goto L_005cc0d6;
L_005cc066:; BB(0x005cc066);
    /* 005cc066: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005cc06c: add ecx, dword ptr [ebp - 0xe4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc072: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 005cc078: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 005cc07e: add edx, dword ptr [ebp - 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cc084: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 005cc08a: lea ecx, [ebp - 0xf8] */ r_ecx = (u32)(r_ebp+0xffffff08u);
    /* 005cc090: call 0x64c540 */ r_esp -= 4; W32(r_esp, 0x5cc095u); f_0064c540();
    /* 005cc095: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc09c: jge 0x5cc0be */ if ((fS==fO)) goto L_005cc0be;
L_005cc09e:; BB(0x005cc09e);
    /* 005cc09e: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cc0a4: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc0a7: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005cc0ad: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005cc0b3: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc0b6: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 005cc0bc: jmp 0x5cc0d6 */ goto L_005cc0d6;
L_005cc0be:; BB(0x005cc0be);
    /* 005cc0be: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005cc0c4: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005cc0ca: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005cc0d0: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
L_005cc0d6:; BB(0x005cc0d6);
    /* 005cc0d6: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005cc0dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0dd: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005cc0e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0e4: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cc0ea: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5cc0efu); f_005d5cf0();
    /* 005cc0ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc0f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0f3: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005cc0f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc0fa: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005cc100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc101: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 005cc107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc108: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 005cc10e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc110: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 005cc116: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005cc11c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc11eu); call_ind(t); }
    /* 005cc11e: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cc124: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cc129u); f_0063aac0();
    /* 005cc129: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005cc12b: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 005cc131: cmp dword ptr [ebp - 0x150], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc138: je 0x5cc162 */ if (fZ) goto L_005cc162;
L_005cc13a:; BB(0x005cc13a);
    /* 005cc13a: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cc140: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5cc145u); f_0063aac0();
    /* 005cc145: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc147: mov dword ptr [ebp - 0x154], edx */ W32((u32)(r_ebp+0xfffffeacu), r_edx);
    /* 005cc14d: cmp dword ptr [ebp - 0x154], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffeacu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc154: je 0x5cc162 */ if (fZ) goto L_005cc162;
L_005cc156:; BB(0x005cc156);
    /* 005cc156: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 005cc160: jmp 0x5cc16c */ goto L_005cc16c;
L_005cc162:; BB(0x005cc162);
    /* 005cc162: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
L_005cc16c:; BB(0x005cc16c);
    /* 005cc16c: movzx eax, byte ptr [ebp - 0x174] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe8cu));
    /* 005cc173: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc175: je 0x5cc1bc */ if (fZ) goto L_005cc1bc;
L_005cc177:; BB(0x005cc177);
    /* 005cc177: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005cc17d: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005cc183: mov byte ptr [ebp - 0x155], dl */ W8((u32)(r_ebp+0xfffffeabu), (u8)r_edx);
    /* 005cc189: movzx eax, byte ptr [ebp - 0x155] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeabu));
    /* 005cc190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc192: jne 0x5cc1bc */ if (!fZ) goto L_005cc1bc;
L_005cc194:; BB(0x005cc194);
    /* 005cc194: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc19b: jl 0x5cc1a6 */ if ((fS!=fO)) goto L_005cc1a6;
L_005cc19d:; BB(0x005cc19d);
    /* 005cc19d: cmp dword ptr [ebp - 0xe8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc1a4: jge 0x5cc1bc */ if ((fS==fO)) goto L_005cc1bc;
L_005cc1a6:; BB(0x005cc1a6);
    /* 005cc1a6: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cc1ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc1ae: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cc1b4: mov eax, dword ptr [edx + 0x28c] */ r_eax = R32((u32)(r_edx+0x28cu));
    /* 005cc1ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc1bcu); call_ind(t); }
L_005cc1bc:; BB(0x005cc1bc);
    /* 005cc1bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc1bf: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc1c1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5cc1c6u); f_00686d72();
    /* 005cc1c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc1c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc1c9: ret 0xc */ FN_RET(0x005cba10); r_esp += 16; return;
}

