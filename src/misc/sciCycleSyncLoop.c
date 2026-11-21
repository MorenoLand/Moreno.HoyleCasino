#include "protos.h"

void f_006009d0(void) /* sciCycleSyncLoop::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006009d0);
    /* 006009d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006009d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006009d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006009d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006009d5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006009d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006009db: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 006009e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006009e5: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006009e9: je 0x600a69 */ if (fZ) goto L_00600a69;
L_006009eb:; BB(0x006009eb);
    /* 006009eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006009ee: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006009f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006009f4: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006009f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006009f9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006009fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6009feu); call_ind(t); }
    /* 006009fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600a00: je 0x600a69 */ if (fZ) goto L_00600a69;
L_00600a02:; BB(0x00600a02);
    /* 00600a02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a05: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00600a08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a0b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00600a0e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600a10: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600a13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600a15u); call_ind(t); }
    /* 00600a15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a18: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00600a1b: movzx eax, byte ptr [eax + edx*2] */ r_eax = (u32)R8((u32)(r_eax+r_edx*2));
    /* 00600a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600a20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a23: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00600a26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a29: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00600a2c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600a2e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00600a34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600a36u); call_ind(t); }
    /* 00600a36: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00600a3c: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x600a41u); f_005f3e50();
    /* 00600a41: mov esi, eax */ r_esi = r_eax;
    /* 00600a43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a46: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00600a49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a4c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00600a4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00600a51: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00600a54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x600a56u); call_ind(t); }
    /* 00600a56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a59: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00600a5c: movzx eax, byte ptr [eax + edx*2 + 1] */ r_eax = (u32)R8((u32)(r_eax+r_edx*2+0x1u));
    /* 00600a61: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00600a63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600a66: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
L_00600a69:; BB(0x00600a69);
    /* 00600a69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600a6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00600a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600a6d: ret  */ FN_RET(0x006009d0); r_esp += 4; return;
}

