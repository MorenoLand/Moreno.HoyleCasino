#include "protos.h"

void f_005d4a90(void) /* CasinoFaceDemoBackground::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4a90);
    /* 005d4a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a91: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a95: push 0x6a8fbb */ { u32 v = 0x6a8fbbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d4aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4aa1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4aa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d4aa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d4aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4aac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d4aaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d4ab5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d4ab8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4abb: mov dword ptr [eax], 0x6d3c0c */ W32((u32)(r_eax), 0x6d3c0cu);
    /* 005d4ac1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4ac8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4acb: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 005d4ad1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d4ad4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4ad7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d4ada: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4ade: je 0x5d4af3 */ if (fZ) goto L_005d4af3;
L_005d4ae0:; BB(0x005d4ae0);
    /* 005d4ae0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4ae2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4ae5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4ae7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4aea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4aec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4aeeu); call_ind(t); }
    /* 005d4aee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d4af1: jmp 0x5d4afa */ goto L_005d4afa;
L_005d4af3:; BB(0x005d4af3);
    /* 005d4af3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d4afa:; BB(0x005d4afa);
    /* 005d4afa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4afd: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005d4b03: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d4b06: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d4b09: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d4b0c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4b10: je 0x5d4b25 */ if (fZ) goto L_005d4b25;
L_005d4b12:; BB(0x005d4b12);
    /* 005d4b12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4b17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4b19: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4b1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4b1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4b20u); call_ind(t); }
    /* 005d4b20: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d4b23: jmp 0x5d4b2c */ goto L_005d4b2c;
L_005d4b25:; BB(0x005d4b25);
    /* 005d4b25: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d4b2c:; BB(0x005d4b2c);
    /* 005d4b2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d4b33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4b36: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x5d4b3bu); f_005eac00();
    /* 005d4b3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4b3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d4b45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d4b46: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4b48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4b49: ret  */ FN_RET(0x005d4a90); r_esp += 4; return;
}

void f_005d4b50(void) /* CasinoFaceDemoBackground::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4b50);
    /* 005d4b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d4b57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4b5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4b5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4b60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4b63: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005d4b69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4b6bu); call_ind(t); }
    /* 005d4b6b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d4b6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4b70: je 0x5d4b79 */ if (fZ) goto L_005d4b79;
L_005d4b72:; BB(0x005d4b72);
    /* 005d4b72: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d4b75: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_005d4b79:; BB(0x005d4b79);
    /* 005d4b79: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4b7c: ret 4 */ FN_RET(0x005d4b50); r_esp += 8; return;
}

