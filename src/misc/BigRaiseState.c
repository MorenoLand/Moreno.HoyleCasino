#include "protos.h"

void f_005a1cc0(void) /* BigRaiseState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1cc0);
    /* 005a1cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1cc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1cc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a1cc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1ccc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5a1cd1u); f_005e9e20();
    /* 005a1cd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1cd4: mov dword ptr [eax], 0x6cf69c */ W32((u32)(r_eax), 0x6cf69cu);
    /* 005a1cda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1cdd: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005a1ce4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1ceb: jmp 0x5a1cf6 */ goto L_005a1cf6;
L_005a1ced:; BB(0x005a1ced);
    /* 005a1ced: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1cf0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a1cf3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005a1cf6:; BB(0x005a1cf6);
    /* 005a1cf6: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1cfa: jge 0x5a1d0c */ if ((fS==fO)) goto L_005a1d0c;
L_005a1cfc:; BB(0x005a1cfc);
    /* 005a1cfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1cff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1d02: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 005a1d0a: jmp 0x5a1ced */ goto L_005a1ced;
L_005a1d0c:; BB(0x005a1d0c);
    /* 005a1d0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1d0f: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1d11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1d12: ret  */ FN_RET(0x005a1cc0); r_esp += 4; return;
}

void f_005a1d20(void) /* BigRaiseState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1d20);
    /* 005a1d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d21: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1d23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d25: push 0x6a7888 */ { u32 v = 0x6a7888u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a1d30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d31: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1d34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a1d39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a1d3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a1d45: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a1d48: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1d4b: mov dword ptr [eax], 0x6cf69c */ W32((u32)(r_eax), 0x6cf69cu);
    /* 005a1d51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1d58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1d5b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005a1d5e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a1d61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a1d64: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a1d67: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1d6b: je 0x5a1d80 */ if (fZ) goto L_005a1d80;
L_005a1d6d:; BB(0x005a1d6d);
    /* 005a1d6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1d72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a1d74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1d77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a1d79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a1d7bu); call_ind(t); }
    /* 005a1d7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005a1d7e: jmp 0x5a1d87 */ goto L_005a1d87;
L_005a1d80:; BB(0x005a1d80);
    /* 005a1d80: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005a1d87:; BB(0x005a1d87);
    /* 005a1d87: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005a1d8e: jmp 0x5a1d99 */ goto L_005a1d99;
L_005a1d90:; BB(0x005a1d90);
    /* 005a1d90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a1d93: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1d96: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005a1d99:; BB(0x005a1d99);
    /* 005a1d99: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1d9d: jge 0x5a1dd4 */ if ((fS==fO)) goto L_005a1dd4;
L_005a1d9f:; BB(0x005a1d9f);
    /* 005a1d9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a1da2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1da5: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005a1da9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a1dac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1daf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a1db2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1db6: je 0x5a1dcb */ if (fZ) goto L_005a1dcb;
L_005a1db8:; BB(0x005a1db8);
    /* 005a1db8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1dba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a1dbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a1dbf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a1dc2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a1dc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a1dc6u); call_ind(t); }
    /* 005a1dc6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a1dc9: jmp 0x5a1dd2 */ goto L_005a1dd2;
L_005a1dcb:; BB(0x005a1dcb);
    /* 005a1dcb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005a1dd2:; BB(0x005a1dd2);
    /* 005a1dd2: jmp 0x5a1d90 */ goto L_005a1d90;
L_005a1dd4:; BB(0x005a1dd4);
    /* 005a1dd4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a1ddb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1dde: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5a1de3u); f_005e9e40();
    /* 005a1de3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1de6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a1ded: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1dee: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1df0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1df1: ret  */ FN_RET(0x005a1d20); r_esp += 4; return;
}

