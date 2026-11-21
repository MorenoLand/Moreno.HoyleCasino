#include "protos.h"

void f_00447e30(void) /* LetItRidePlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447e30);
    /* 00447e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00447e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447e36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00447e39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447e3c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x447e41u); f_005e9e20();
    /* 00447e41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447e44: mov dword ptr [eax], 0x6b8b4c */ W32((u32)(r_eax), 0x6b8b4cu);
    /* 00447e4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00447e51: jmp 0x447e5c */ goto L_00447e5c;
L_00447e53:; BB(0x00447e53);
    /* 00447e53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447e56: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447e59: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00447e5c:; BB(0x00447e5c);
    /* 00447e5c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447e60: jge 0x447e72 */ if ((fS==fO)) goto L_00447e72;
L_00447e62:; BB(0x00447e62);
    /* 00447e62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00447e65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447e68: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 00447e70: jmp 0x447e53 */ goto L_00447e53;
L_00447e72:; BB(0x00447e72);
    /* 00447e72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447e75: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00447e7c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00447e7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00447e81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447e82: ret  */ FN_RET(0x00447e30); r_esp += 4; return;
}

void f_00447e90(void) /* LetItRidePlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00447e90);
    /* 00447e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00447e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00447e93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447e95: push 0x69ec67 */ { u32 v = 0x69ec67u; r_esp -= 4; W32(r_esp, v); }
    /* 00447e9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00447ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447ea1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00447ea4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00447ea9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00447eab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00447eac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00447eaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00447eb5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00447eb8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447ebb: mov dword ptr [eax], 0x6b8b4c */ W32((u32)(r_eax), 0x6b8b4cu);
    /* 00447ec1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00447ec8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00447ecf: jmp 0x447eda */ goto L_00447eda;
L_00447ed1:; BB(0x00447ed1);
    /* 00447ed1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447ed4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00447ed7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00447eda:; BB(0x00447eda);
    /* 00447eda: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00447ede: jge 0x447f15 */ if ((fS==fO)) goto L_00447f15;
L_00447ee0:; BB(0x00447ee0);
    /* 00447ee0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447ee3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447ee6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00447eea: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00447eed: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00447ef0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00447ef3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447ef7: je 0x447f0c */ if (fZ) goto L_00447f0c;
L_00447ef9:; BB(0x00447ef9);
    /* 00447ef9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447efb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00447efe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00447f00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00447f03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00447f05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447f07u); call_ind(t); }
    /* 00447f07: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00447f0a: jmp 0x447f13 */ goto L_00447f13;
L_00447f0c:; BB(0x00447f0c);
    /* 00447f0c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00447f13:; BB(0x00447f13);
    /* 00447f13: jmp 0x447ed1 */ goto L_00447ed1;
L_00447f15:; BB(0x00447f15);
    /* 00447f15: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447f18: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00447f1b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00447f1e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00447f21: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00447f24: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447f28: je 0x447f3d */ if (fZ) goto L_00447f3d;
L_00447f2a:; BB(0x00447f2a);
    /* 00447f2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447f2c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447f2f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00447f31: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00447f34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00447f36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x447f38u); call_ind(t); }
    /* 00447f38: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00447f3b: jmp 0x447f44 */ goto L_00447f44;
L_00447f3d:; BB(0x00447f3d);
    /* 00447f3d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00447f44:; BB(0x00447f44);
    /* 00447f44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447f4b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00447f4e: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x447f53u); f_005e9e40();
    /* 00447f53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447f56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447f5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00447f5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00447f60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00447f61: ret  */ FN_RET(0x00447e90); r_esp += 4; return;
}

