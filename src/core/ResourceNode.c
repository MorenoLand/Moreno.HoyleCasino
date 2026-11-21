#include "protos.h"

void f_00603ae0(void) /* ResourceNode::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603ae0);
    /* 00603ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00603ae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00603ae5: push 0x6aaa01 */ { u32 v = 0x6aaa01u; r_esp -= 4; W32(r_esp, v); }
    /* 00603aea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00603af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603af1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603af4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00603af9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603afc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00603aff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00603b05: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00603b08: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00603b0f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b13: jne 0x603b17 */ if (!fZ) goto L_00603b17;
L_00603b15:; BB(0x00603b15);
    /* 00603b15: jmp 0x603b86 */ goto L_00603b86;
L_00603b17:; BB(0x00603b17);
    /* 00603b17: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00603b19: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603b1eu); f_00686d82();
    /* 00603b1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603b21: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00603b24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603b2b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603b2f: je 0x603b4a */ if (fZ) goto L_00603b4a;
L_00603b31:; BB(0x00603b31);
    /* 00603b31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603b34: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x603b39u); f_0062aea0();
    /* 00603b39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603b3c: mov dword ptr [eax], 0x6d7828 */ W32((u32)(r_eax), 0x6d7828u);
    /* 00603b42: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603b45: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00603b48: jmp 0x603b51 */ goto L_00603b51;
L_00603b4a:; BB(0x00603b4a);
    /* 00603b4a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00603b51:; BB(0x00603b51);
    /* 00603b51: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00603b54: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00603b57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603b5e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603b61: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00603b64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603b67: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00603b6a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00603b6d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603b70: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00603b77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603b7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603b7b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603b7e: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603b81: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x603b86u); f_0062aa20();
L_00603b86:; BB(0x00603b86);
    /* 00603b86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603b89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00603b90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00603b91: mov esp, ebp */ r_esp = r_ebp;
    /* 00603b93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603b94: ret 4 */ FN_RET(0x00603ae0); r_esp += 8; return;
}

void f_00603c50(void) /* ResourceNode::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603c50);
    /* 00603c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00603c53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00603c55: push 0x6aaa5e */ { u32 v = 0x6aaa5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00603c5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00603c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603c61: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603c64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00603c69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603c6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603c6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00603c6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00603c75: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00603c78: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00603c7f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00603c82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603c83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00603c86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603c87: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603c8a: call 0x6043a0 */ r_esp -= 4; W32(r_esp, 0x603c8fu); f_006043a0();
    /* 00603c8f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00603c92: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603c96: jne 0x603f81 */ if (!fZ) goto L_00603f81;
L_00603c9c:; BB(0x00603c9c);
    /* 00603c9c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00603c9e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603ca3u); f_00686d82();
    /* 00603ca3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603ca6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00603ca9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603cb0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603cb4: je 0x603ccf */ if (fZ) goto L_00603ccf;
L_00603cb6:; BB(0x00603cb6);
    /* 00603cb6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603cb9: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x603cbeu); f_0062aea0();
    /* 00603cbe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603cc1: mov dword ptr [edx], 0x6d7828 */ W32((u32)(r_edx), 0x6d7828u);
    /* 00603cc7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603cca: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00603ccd: jmp 0x603cd6 */ goto L_00603cd6;
L_00603ccf:; BB(0x00603ccf);
    /* 00603ccf: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00603cd6:; BB(0x00603cd6);
    /* 00603cd6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00603cd9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00603cdc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603ce3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603ce6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00603ce9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00603cec: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00603cef: cmp dword ptr [ebp - 0x5c], 0x20584554 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x20584554u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603cf6: jg 0x603d21 */ if ((!fZ&&fS==fO)) goto L_00603d21;
L_00603cf8:; BB(0x00603cf8);
    /* 00603cf8: cmp dword ptr [ebp - 0x5c], 0x20584554 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x20584554u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603cff: je 0x603e94 */ if (fZ) goto L_00603e94;
L_00603d05:; BB(0x00603d05);
    /* 00603d05: cmp dword ptr [ebp - 0x5c], 0x2033504d */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x2033504du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d0c: je 0x603ddf */ if (fZ) goto L_00603ddf;
L_00603d12:; BB(0x00603d12);
    /* 00603d12: cmp dword ptr [ebp - 0x5c], 0x2047474f */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x2047474fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d19: je 0x603e3b */ if (fZ) goto L_00603e3b;
L_00603d1f:; BB(0x00603d1f);
    /* 00603d1f: jmp 0x603d2a */ goto L_00603d2a;
L_00603d21:; BB(0x00603d21);
    /* 00603d21: cmp dword ptr [ebp - 0x5c], 0x474e4f53 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x474e4f53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d28: je 0x603d84 */ if (fZ) goto L_00603d84;
L_00603d2a:; BB(0x00603d2a);
    /* 00603d2a: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00603d2f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603d34u); f_00686d82();
    /* 00603d34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603d37: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00603d3a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00603d41: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d45: je 0x603d62 */ if (fZ) goto L_00603d62;
L_00603d47:; BB(0x00603d47);
    /* 00603d47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603d49: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603d4d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00603d50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603d51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00603d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603d55: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00603d58: call 0x61dc00 */ r_esp -= 4; W32(r_esp, 0x603d5du); f_0061dc00();
    /* 00603d5d: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00603d60: jmp 0x603d69 */ goto L_00603d69;
L_00603d62:; BB(0x00603d62);
    /* 00603d62: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00603d69:; BB(0x00603d69);
    /* 00603d69: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00603d6c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00603d6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603d76: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603d79: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603d7c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00603d7f: jmp 0x603ee8 */ goto L_00603ee8;
L_00603d84:; BB(0x00603d84);
    /* 00603d84: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00603d89: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603d8eu); f_00686d82();
    /* 00603d8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603d91: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00603d94: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00603d9b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603d9f: je 0x603dbd */ if (fZ) goto L_00603dbd;
L_00603da1:; BB(0x00603da1);
    /* 00603da1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603da3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603da6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603da7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00603daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603dab: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 00603db0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00603db3: call 0x61dc00 */ r_esp -= 4; W32(r_esp, 0x603db8u); f_0061dc00();
    /* 00603db8: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00603dbb: jmp 0x603dc4 */ goto L_00603dc4;
L_00603dbd:; BB(0x00603dbd);
    /* 00603dbd: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00603dc4:; BB(0x00603dc4);
    /* 00603dc4: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00603dc7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00603dca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603dd1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603dd4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00603dd7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00603dda: jmp 0x603ee8 */ goto L_00603ee8;
L_00603ddf:; BB(0x00603ddf);
    /* 00603ddf: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00603de4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603de9u); f_00686d82();
    /* 00603de9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603dec: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00603def: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00603df6: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603dfa: je 0x603e19 */ if (fZ) goto L_00603e19;
L_00603dfc:; BB(0x00603dfc);
    /* 00603dfc: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00603dff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603e00: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603e04: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00603e07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603e08: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00603e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603e0c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00603e0f: call 0x61dc00 */ r_esp -= 4; W32(r_esp, 0x603e14u); f_0061dc00();
    /* 00603e14: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00603e17: jmp 0x603e20 */ goto L_00603e20;
L_00603e19:; BB(0x00603e19);
    /* 00603e19: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00603e20:; BB(0x00603e20);
    /* 00603e20: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00603e23: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00603e26: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603e2d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603e30: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603e33: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00603e36: jmp 0x603ee8 */ goto L_00603ee8;
L_00603e3b:; BB(0x00603e3b);
    /* 00603e3b: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00603e40: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603e45u); f_00686d82();
    /* 00603e45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603e48: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00603e4b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00603e52: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603e56: je 0x603e75 */ if (fZ) goto L_00603e75;
L_00603e58:; BB(0x00603e58);
    /* 00603e58: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00603e5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603e5c: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603e60: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00603e63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603e64: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00603e67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603e68: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00603e6b: call 0x61dc00 */ r_esp -= 4; W32(r_esp, 0x603e70u); f_0061dc00();
    /* 00603e70: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00603e73: jmp 0x603e7c */ goto L_00603e7c;
L_00603e75:; BB(0x00603e75);
    /* 00603e75: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00603e7c:; BB(0x00603e7c);
    /* 00603e7c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00603e7f: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00603e82: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603e89: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603e8c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00603e8f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00603e92: jmp 0x603ee8 */ goto L_00603ee8;
L_00603e94:; BB(0x00603e94);
    /* 00603e94: push 0x96c */ { u32 v = 0x96cu; r_esp -= 4; W32(r_esp, v); }
    /* 00603e99: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x603e9eu); f_00686d82();
    /* 00603e9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603ea1: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00603ea4: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00603eab: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603eaf: je 0x603ecb */ if (fZ) goto L_00603ecb;
L_00603eb1:; BB(0x00603eb1);
    /* 00603eb1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603eb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603eb5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00603eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603eb9: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 00603ebe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00603ec1: call 0x615fe0 */ r_esp -= 4; W32(r_esp, 0x603ec6u); f_00615fe0();
    /* 00603ec6: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00603ec9: jmp 0x603ed2 */ goto L_00603ed2;
L_00603ecb:; BB(0x00603ecb);
    /* 00603ecb: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00603ed2:; BB(0x00603ed2);
    /* 00603ed2: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00603ed5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00603ed8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603edf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603ee2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00603ee5: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_00603ee8:; BB(0x00603ee8);
    /* 00603ee8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603eeb: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603eef: je 0x603f17 */ if (fZ) goto L_00603f17;
L_00603ef1:; BB(0x00603ef1);
    /* 00603ef1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603ef4: mov dword ptr [edx + 0xc], 1 */ W32((u32)(r_edx+0xcu), 0x1u);
    /* 00603efb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603eff: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00603f02: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603f05: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x603f0au); f_0062aa20();
    /* 00603f0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f0d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00603f10: jmp 0x603f96 */ goto L_00603f96;
L_00603f17:; BB(0x00603f17);
    /* 00603f17: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f1a: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603f1e: je 0x603f4f */ if (fZ) goto L_00603f4f;
L_00603f20:; BB(0x00603f20);
    /* 00603f20: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f23: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00603f26: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00603f29: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00603f2c: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00603f2f: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603f33: je 0x603f48 */ if (fZ) goto L_00603f48;
L_00603f35:; BB(0x00603f35);
    /* 00603f35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603f37: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00603f3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603f3c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00603f3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603f41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x603f43u); call_ind(t); }
    /* 00603f43: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00603f46: jmp 0x603f4f */ goto L_00603f4f;
L_00603f48:; BB(0x00603f48);
    /* 00603f48: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00603f4f:; BB(0x00603f4f);
    /* 00603f4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f52: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00603f55: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00603f58: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00603f5b: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603f5f: je 0x603f74 */ if (fZ) goto L_00603f74;
L_00603f61:; BB(0x00603f61);
    /* 00603f61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603f63: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00603f66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603f68: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00603f6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603f6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x603f6fu); call_ind(t); }
    /* 00603f6f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00603f72: jmp 0x603f7b */ goto L_00603f7b;
L_00603f74:; BB(0x00603f74);
    /* 00603f74: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00603f7b:; BB(0x00603f7b);
    /* 00603f7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603f7d: jmp 0x603f96 */ goto L_00603f96;
L_00603f81:; BB(0x00603f81);
    /* 00603f81: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f84: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00603f87: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603f8a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f8d: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00603f90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603f93: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
L_00603f96:; BB(0x00603f96);
    /* 00603f96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603f99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00603fa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00603fa1: mov esp, ebp */ r_esp = r_ebp;
    /* 00603fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603fa4: ret 0xc */ FN_RET(0x00603c50); r_esp += 16; return;
}

void f_00603fb0(void) /* ResourceNode::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603fb0);
    /* 00603fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00603fb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00603fb5: push 0x6aaa9a */ { u32 v = 0x6aaa9au; r_esp -= 4; W32(r_esp, v); }
    /* 00603fba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00603fc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603fc1: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603fc4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00603fc9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603fcc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00603fcf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00603fd5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00603fd8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00603fdf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00603fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603fe3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00603fe6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603fe7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00603fea: call 0x604400 */ r_esp -= 4; W32(r_esp, 0x603fefu); f_00604400();
    /* 00603fef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00603ff2: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603ff6: jne 0x60419c */ if (!fZ) goto L_0060419c;
L_00603ffc:; BB(0x00603ffc);
    /* 00603ffc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00603ffe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604003u); f_00686d82();
    /* 00604003: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604006: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00604009: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00604010: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604014: je 0x60402f */ if (fZ) goto L_0060402f;
L_00604016:; BB(0x00604016);
    /* 00604016: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604019: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x60401eu); f_0062aea0();
    /* 0060401e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00604021: mov dword ptr [edx], 0x6d7828 */ W32((u32)(r_edx), 0x6d7828u);
    /* 00604027: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060402a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0060402d: jmp 0x604036 */ goto L_00604036;
L_0060402f:; BB(0x0060402f);
    /* 0060402f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00604036:; BB(0x00604036);
    /* 00604036: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00604039: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060403c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00604043: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00604046: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00604049: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060404c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0060404f: cmp dword ptr [ebp - 0x44], 0x20584554 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x20584554u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604056: je 0x6040af */ if (fZ) goto L_006040af;
L_00604058:; BB(0x00604058);
    /* 00604058: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 0060405d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x604062u); f_00686d82();
    /* 00604062: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604065: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00604068: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060406f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604073: je 0x604090 */ if (fZ) goto L_00604090;
L_00604075:; BB(0x00604075);
    /* 00604075: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604077: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060407a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060407b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060407e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060407f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00604082: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604083: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00604086: call 0x61dd90 */ r_esp -= 4; W32(r_esp, 0x60408bu); f_0061dd90();
    /* 0060408b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0060408e: jmp 0x604097 */ goto L_00604097;
L_00604090:; BB(0x00604090);
    /* 00604090: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00604097:; BB(0x00604097);
    /* 00604097: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0060409a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0060409d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006040a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006040a7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006040aa: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006040ad: jmp 0x604103 */ goto L_00604103;
L_006040af:; BB(0x006040af);
    /* 006040af: push 0x96c */ { u32 v = 0x96cu; r_esp -= 4; W32(r_esp, v); }
    /* 006040b4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6040b9u); f_00686d82();
    /* 006040b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006040bc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006040bf: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006040c6: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006040ca: je 0x6040e6 */ if (fZ) goto L_006040e6;
L_006040cc:; BB(0x006040cc);
    /* 006040cc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006040cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006040d0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006040d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006040d4: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 006040d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006040dc: call 0x616050 */ r_esp -= 4; W32(r_esp, 0x6040e1u); f_00616050();
    /* 006040e1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006040e4: jmp 0x6040ed */ goto L_006040ed;
L_006040e6:; BB(0x006040e6);
    /* 006040e6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006040ed:; BB(0x006040ed);
    /* 006040ed: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006040f0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006040f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006040fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006040fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00604100: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_00604103:; BB(0x00604103);
    /* 00604103: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604106: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060410a: je 0x604132 */ if (fZ) goto L_00604132;
L_0060410c:; BB(0x0060410c);
    /* 0060410c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060410f: mov dword ptr [ecx + 0xc], 1 */ W32((u32)(r_ecx+0xcu), 0x1u);
    /* 00604116: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060411a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0060411d: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604120: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x604125u); f_0062aa20();
    /* 00604125: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604128: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060412b: jmp 0x6041b1 */ goto L_006041b1;
L_00604132:; BB(0x00604132);
    /* 00604132: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00604135: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604139: je 0x60416a */ if (fZ) goto L_0060416a;
L_0060413b:; BB(0x0060413b);
    /* 0060413b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060413e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00604141: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00604144: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00604147: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0060414a: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060414e: je 0x604163 */ if (fZ) goto L_00604163;
L_00604150:; BB(0x00604150);
    /* 00604150: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604152: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00604155: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00604157: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060415a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060415c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60415eu); call_ind(t); }
    /* 0060415e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00604161: jmp 0x60416a */ goto L_0060416a;
L_00604163:; BB(0x00604163);
    /* 00604163: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0060416a:; BB(0x0060416a);
    /* 0060416a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060416d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00604170: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00604173: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00604176: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060417a: je 0x60418f */ if (fZ) goto L_0060418f;
L_0060417c:; BB(0x0060417c);
    /* 0060417c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060417e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00604181: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00604183: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00604186: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604188: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60418au); call_ind(t); }
    /* 0060418a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0060418d: jmp 0x604196 */ goto L_00604196;
L_0060418f:; BB(0x0060418f);
    /* 0060418f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00604196:; BB(0x00604196);
    /* 00604196: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604198: jmp 0x6041b1 */ goto L_006041b1;
L_0060419c:; BB(0x0060419c);
    /* 0060419c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060419f: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006041a2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006041a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006041a8: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 006041ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006041ae: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_006041b1:; BB(0x006041b1);
    /* 006041b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006041b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006041bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006041bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006041be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006041bf: ret 8 */ FN_RET(0x00603fb0); r_esp += 12; return;
}

