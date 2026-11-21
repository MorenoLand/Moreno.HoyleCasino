#include "protos.h"

void f_005f0c20(void) /* CaretScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0c20);
    /* 005f0c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c21: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f0c27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c2c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5f0c31u); f_005fc0d0();
    /* 005f0c31: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c34: mov dword ptr [eax], 0x6d6558 */ W32((u32)(r_eax), 0x6d6558u);
    /* 005f0c3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f0c40: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005f0c43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c46: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0c49: ret 4 */ FN_RET(0x005f0c20); r_esp += 8; return;
}

void f_005f0c50(void) /* CaretScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0c50);
    /* 005f0c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0c53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0c56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f0c59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c5c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f0c5f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f0c62: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0c66: je 0x5f0c70 */ if (fZ) goto L_005f0c70;
L_005f0c68:; BB(0x005f0c68);
    /* 005f0c68: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0c6c: je 0x5f0c90 */ if (fZ) goto L_005f0c90;
L_005f0c6e:; BB(0x005f0c6e);
    /* 005f0c6e: jmp 0x5f0cae */ goto L_005f0cae;
L_005f0c70:; BB(0x005f0c70);
    /* 005f0c70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c75: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005f0c78: call 0x5f0bd0 */ r_esp -= 4; W32(r_esp, 0x5f0c7du); f_005f0bd0();
    /* 005f0c7d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f0c86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c89: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f0c8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0c8eu); call_ind(t); }
    /* 005f0c8e: jmp 0x5f0cae */ goto L_005f0cae;
L_005f0c90:; BB(0x005f0c90);
    /* 005f0c90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0c95: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005f0c98: call 0x5f0bd0 */ r_esp -= 4; W32(r_esp, 0x5f0c9du); f_005f0bd0();
    /* 005f0c9d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0c9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ca1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0ca4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0ca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0ca9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f0cac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f0caeu); call_ind(t); }
L_005f0cae:; BB(0x005f0cae);
    /* 005f0cae: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0cb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0cb1: ret  */ FN_RET(0x005f0c50); r_esp += 4; return;
}

