#include "protos.h"

void f_005f71f0(void) /* sciDialogBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f71f0);
    /* 005f71f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f71f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f71f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f71f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f71f9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f71fd: je 0x5f7207 */ if (fZ) goto L_005f7207;
L_005f71ff:; BB(0x005f71ff);
    /* 005f71ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f7202: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f7205: jmp 0x5f7213 */ goto L_005f7213;
L_005f7207:; BB(0x005f7207);
    /* 005f7207: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f720d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f7210: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005f7213:; BB(0x005f7213);
    /* 005f7213: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7218: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005f721d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7221: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f7224: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7225: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7228: call 0x5f7670 */ r_esp -= 4; W32(r_esp, 0x5f722du); f_005f7670();
    /* 005f722d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7230: mov dword ptr [edx], 0x6d6c64 */ W32((u32)(r_edx), 0x6d6c64u);
    /* 005f7236: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7239: mov dword ptr [eax + 0x1b4], 0 */ W32((u32)(r_eax+0x1b4u), 0x0u);
    /* 005f7243: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7246: mov byte ptr [ecx + 0x1b8], 0 */ W8((u32)(r_ecx+0x1b8u), 0x0u);
    /* 005f724d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7250: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7252: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7253: ret 8 */ FN_RET(0x005f71f0); r_esp += 12; return;
}

void f_005f7260(void) /* sciDialogBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f7260);
    /* 005f7260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f7261: mov ebp, esp */ r_ebp = r_esp;
    /* 005f7263: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f7265: push 0x6a9fe8 */ { u32 v = 0x6a9fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f726a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f7270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7271: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f7274: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f7279: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f727b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f727c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f727f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f7285: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f7288: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f728b: mov dword ptr [eax], 0x6d6c64 */ W32((u32)(r_eax), 0x6d6c64u);
    /* 005f7291: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7298: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f729b: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 005f72a1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f72a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f72a7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f72aa: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f72ae: je 0x5f72c3 */ if (fZ) goto L_005f72c3;
L_005f72b0:; BB(0x005f72b0);
    /* 005f72b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f72b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f72b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f72b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f72ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f72bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f72beu); call_ind(t); }
    /* 005f72be: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f72c1: jmp 0x5f72ca */ goto L_005f72ca;
L_005f72c3:; BB(0x005f72c3);
    /* 005f72c3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f72ca:; BB(0x005f72ca);
    /* 005f72ca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f72d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f72d4: call 0x5f79f0 */ r_esp -= 4; W32(r_esp, 0x5f72d9u); f_005f79f0();
    /* 005f72d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f72dc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f72e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f72e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005f72e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f72e7: ret  */ FN_RET(0x005f7260); r_esp += 4; return;
}

void f_005fb000(void) /* sciDialogBox::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fb000);
    /* 005fb000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb001: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fb007: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb00e: je 0x5fb027 */ if (fZ) goto L_005fb027;
L_005fb010:; BB(0x005fb010);
    /* 005fb010: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb014: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb01a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fb01c: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fb022: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005fb025: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fb027u); call_ind(t); }
L_005fb027:; BB(0x005fb027);
    /* 005fb027: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb029: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb02a: ret 4 */ FN_RET(0x005fb000); r_esp += 8; return;
}

