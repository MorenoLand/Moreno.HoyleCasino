#include "protos.h"

void f_00606a60(void) /* sciMotion::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606a60);
    /* 00606a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00606a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606a67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606a6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00606a6d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00606a70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606a73: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00606a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606a77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606a7a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00606a7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606a7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606a81: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00606a83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606a86: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00606a89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606a8bu); call_ind(t); }
    /* 00606a8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00606a8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606a8e: ret 4 */ FN_RET(0x00606a60); r_esp += 8; return;
}

void f_00606de0(void) /* sciMotion::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606de0);
    /* 00606de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00606de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606dea: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606dee: je 0x606e05 */ if (fZ) goto L_00606e05;
L_00606df0:; BB(0x00606df0);
    /* 00606df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606df2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606df5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00606df8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606dfb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00606dfe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00606e00: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00606e03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606e05u); call_ind(t); }
L_00606e05:; BB(0x00606e05);
    /* 00606e05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e08: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 00606e0c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e0f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00606e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606e13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e16: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00606e19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606e1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e1d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00606e20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e23: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606e26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00606e28: mov ecx, eax */ r_ecx = r_eax;
    /* 00606e2a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00606e2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606e2fu); call_ind(t); }
    /* 00606e2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e32: movzx edx, byte ptr [ecx + 0xd] */ r_edx = (u32)R8((u32)(r_ecx+0xdu));
    /* 00606e36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606e38: je 0x606e4f */ if (fZ) goto L_00606e4f;
L_00606e3a:; BB(0x00606e3a);
    /* 00606e3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e3d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00606e40: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e43: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606e46: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00606e48: mov ecx, eax */ r_ecx = r_eax;
    /* 00606e4a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00606e4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606e4fu); call_ind(t); }
L_00606e4f:; BB(0x00606e4f);
    /* 00606e4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00606e51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606e54: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00606e57: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x606e5cu); f_005f6050();
    /* 00606e5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00606e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606e5f: ret  */ FN_RET(0x00606de0); r_esp += 4; return;
}

