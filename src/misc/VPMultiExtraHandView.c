#include "protos.h"

void f_00563b80(void) /* VPMultiExtraHandView::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00563b80);
    /* 00563b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00563b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00563b83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00563b86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00563b89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00563b8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00563b8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b90: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00563b92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563b95: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00563b9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x563b9du); call_ind(t); }
    /* 00563b9d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00563ba0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563ba2: je 0x563bde */ if (fZ) goto L_00563bde;
L_00563ba4:; BB(0x00563ba4);
    /* 00563ba4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00563ba7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00563baa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00563bad: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563bb1: je 0x563bb5 */ if (fZ) goto L_00563bb5;
L_00563bb3:; BB(0x00563bb3);
    /* 00563bb3: jmp 0x563bdc */ goto L_00563bdc;
L_00563bb5:; BB(0x00563bb5);
    /* 00563bb5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00563bb8: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00563bbc: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00563bc2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00563bc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563bcb: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00563bd1: mov dword ptr [eax + edx*4 + 0x848], 1 */ W32((u32)(r_eax+r_edx*4+0x848u), 0x1u);
L_00563bdc:; BB(0x00563bdc);
    /* 00563bdc: jmp 0x563bfd */ goto L_00563bfd;
L_00563bde:; BB(0x00563bde);
    /* 00563bde: mov eax, dword ptr [0x793440] */ r_eax = R32((u32)(0x793440u));
    /* 00563be3: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00563be9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563bec: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00563bf2: mov dword ptr [ecx + eax*4 + 0x848], 0 */ W32((u32)(r_ecx+r_eax*4+0x848u), 0x0u);
L_00563bfd:; BB(0x00563bfd);
    /* 00563bfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00563c00: cmp dword ptr [ecx + 0x178], 0 */ {  u32 a = R32((u32)(r_ecx+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00563c07: jne 0x563c1a */ if (!fZ) goto L_00563c1a;
L_00563c09:; BB(0x00563c09);
    /* 00563c09: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 00563c0f: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 00563c15: call 0x563c20 */ r_esp -= 4; W32(r_esp, 0x563c1au); f_00563c20();
L_00563c1a:; BB(0x00563c1a);
    /* 00563c1a: mov esp, ebp */ r_esp = r_ebp;
    /* 00563c1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00563c1d: ret 4 */ FN_RET(0x00563b80); r_esp += 8; return;
}

