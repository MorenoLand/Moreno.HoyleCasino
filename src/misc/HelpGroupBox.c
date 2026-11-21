#include "protos.h"

void f_00680b70(void) /* HelpGroupBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680b70);
    /* 00680b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00680b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680b75: push 0x6add43 */ { u32 v = 0x6add43u; r_esp -= 4; W32(r_esp, v); }
    /* 00680b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680b81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680b84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00680b89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680b8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680b8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00680b8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00680b95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00680b98: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680b9b: call 0x625f10 */ r_esp -= 4; W32(r_esp, 0x680ba0u); f_00625f10();
    /* 00680ba0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680ba7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680baa: mov dword ptr [eax], 0x6e20cc */ W32((u32)(r_eax), 0x6e20ccu);
    /* 00680bb0: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680bb5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x680bbau); f_00686d82();
    /* 00680bba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680bbd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00680bc0: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00680bc4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680bc8: je 0x680bd7 */ if (fZ) goto L_00680bd7;
L_00680bca:; BB(0x00680bca);
    /* 00680bca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680bcd: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x680bd2u); f_005ec5a0();
    /* 00680bd2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00680bd5: jmp 0x680bde */ goto L_00680bde;
L_00680bd7:; BB(0x00680bd7);
    /* 00680bd7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00680bde:; BB(0x00680bde);
    /* 00680bde: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00680be1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00680be4: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680be8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680beb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680bee: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 00680bf1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680bf8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680bfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680bfe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680c05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680c06: mov esp, ebp */ r_esp = r_ebp;
    /* 00680c08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680c09: ret  */ FN_RET(0x00680b70); r_esp += 4; return;
}

void f_00680c10(void) /* HelpGroupBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680c10);
    /* 00680c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00680c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680c15: push 0x6add66 */ { u32 v = 0x6add66u; r_esp -= 4; W32(r_esp, v); }
    /* 00680c1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680c21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680c24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00680c29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680c2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00680c2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00680c35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00680c38: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680c3b: mov dword ptr [eax], 0x6e20cc */ W32((u32)(r_eax), 0x6e20ccu);
    /* 00680c41: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680c48: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680c4b: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00680c4e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00680c51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680c54: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00680c57: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680c5b: je 0x680c70 */ if (fZ) goto L_00680c70;
L_00680c5d:; BB(0x00680c5d);
    /* 00680c5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680c5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680c62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680c64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680c67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00680c69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680c6bu); call_ind(t); }
    /* 00680c6b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00680c6e: jmp 0x680c77 */ goto L_00680c77;
L_00680c70:; BB(0x00680c70);
    /* 00680c70: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00680c77:; BB(0x00680c77);
    /* 00680c77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680c7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680c81: call 0x625fe0 */ r_esp -= 4; W32(r_esp, 0x680c86u); f_00625fe0();
    /* 00680c86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680c89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680c90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680c91: mov esp, ebp */ r_esp = r_ebp;
    /* 00680c93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680c94: ret  */ FN_RET(0x00680c10); r_esp += 4; return;
}

