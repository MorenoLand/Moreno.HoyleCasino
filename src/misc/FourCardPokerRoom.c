#include "protos.h"

void f_00595cb0(void) /* FourCardPokerRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595cb0);
    /* 00595cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00595cb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595cb5: push 0x6a72e8 */ { u32 v = 0x6a72e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00595cba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595cc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595cc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595cc2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00595cc7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595cca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00595ccd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00595cd3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00595cd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595cd9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x595cdeu); f_005d7b60();
    /* 00595cde: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595ce5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595ce8: mov dword ptr [eax], 0x6ce474 */ W32((u32)(r_eax), 0x6ce474u);
    /* 00595cee: push 0xfde9 */ { u32 v = 0xfde9u; r_esp -= 4; W32(r_esp, v); }
    /* 00595cf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595cf6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x595cfbu); f_005f1ad0();
    /* 00595cfb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595cfe: mov dword ptr [0x7935a4], ecx */ W32((u32)(0x7935a4u), r_ecx);
    /* 00595d04: mov dword ptr [0x793598], 0 */ W32((u32)(0x793598u), 0x0u);
    /* 00595d0e: mov dword ptr [0x79359c], 0 */ W32((u32)(0x79359cu), 0x0u);
    /* 00595d18: mov dword ptr [0x7935a0], 0 */ W32((u32)(0x7935a0u), 0x0u);
    /* 00595d22: mov dword ptr [0x7935a8], 0 */ W32((u32)(0x7935a8u), 0x0u);
    /* 00595d2c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595d2f: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 00595d39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00595d40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595d43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595d46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595d4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595d4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00595d50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595d51: ret  */ FN_RET(0x00595cb0); r_esp += 4; return;
}

void f_00595d60(void) /* FourCardPokerRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595d60);
    /* 00595d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00595d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595d65: push 0x6a730b */ { u32 v = 0x6a730bu; r_esp -= 4; W32(r_esp, v); }
    /* 00595d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595d71: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595d74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00595d79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595d7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00595d7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00595d85: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00595d88: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00595d8b: mov dword ptr [eax], 0x6ce474 */ W32((u32)(r_eax), 0x6ce474u);
    /* 00595d91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595d98: mov dword ptr [0x7935a4], 0 */ W32((u32)(0x7935a4u), 0x0u);
    /* 00595da2: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 00595da8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00595dab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595dae: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00595db1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595db5: je 0x595dca */ if (fZ) goto L_00595dca;
L_00595db7:; BB(0x00595db7);
    /* 00595db7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595db9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595dbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595dbe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595dc1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00595dc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595dc5u); call_ind(t); }
    /* 00595dc5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00595dc8: jmp 0x595dd1 */ goto L_00595dd1;
L_00595dca:; BB(0x00595dca);
    /* 00595dca: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00595dd1:; BB(0x00595dd1);
    /* 00595dd1: mov dword ptr [0x793598], 0 */ W32((u32)(0x793598u), 0x0u);
    /* 00595ddb: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00595de1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00595de4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00595de7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00595dea: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595dee: je 0x595e03 */ if (fZ) goto L_00595e03;
L_00595df0:; BB(0x00595df0);
    /* 00595df0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595df2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00595df5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595df7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00595dfa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00595dfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595dfeu); call_ind(t); }
    /* 00595dfe: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00595e01: jmp 0x595e0a */ goto L_00595e0a;
L_00595e03:; BB(0x00595e03);
    /* 00595e03: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00595e0a:; BB(0x00595e0a);
    /* 00595e0a: mov dword ptr [0x79359c], 0 */ W32((u32)(0x79359cu), 0x0u);
    /* 00595e14: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 00595e1a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00595e1d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595e20: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00595e23: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595e27: je 0x595e3c */ if (fZ) goto L_00595e3c;
L_00595e29:; BB(0x00595e29);
    /* 00595e29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595e2b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595e2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595e30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595e33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00595e35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595e37u); call_ind(t); }
    /* 00595e37: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00595e3a: jmp 0x595e43 */ goto L_00595e43;
L_00595e3c:; BB(0x00595e3c);
    /* 00595e3c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00595e43:; BB(0x00595e43);
    /* 00595e43: mov dword ptr [0x7935a0], 0 */ W32((u32)(0x7935a0u), 0x0u);
    /* 00595e4d: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595e53: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00595e56: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00595e59: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00595e5c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595e60: je 0x595e75 */ if (fZ) goto L_00595e75;
L_00595e62:; BB(0x00595e62);
    /* 00595e62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595e64: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00595e67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595e69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00595e6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00595e6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595e70u); call_ind(t); }
    /* 00595e70: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00595e73: jmp 0x595e7c */ goto L_00595e7c;
L_00595e75:; BB(0x00595e75);
    /* 00595e75: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00595e7c:; BB(0x00595e7c);
    /* 00595e7c: mov dword ptr [0x7935a8], 0 */ W32((u32)(0x7935a8u), 0x0u);
    /* 00595e86: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00595e8d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00595e90: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x595e95u); f_005d7bd0();
    /* 00595e95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595e98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595e9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00595ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595ea3: ret  */ FN_RET(0x00595d60); r_esp += 4; return;
}

void f_00595eb0(void) /* FourCardPokerRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595eb0);
    /* 00595eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00595eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00595eb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595eb9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00595ebf: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x595ec4u); f_005df700();
    /* 00595ec4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00595ec7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595ec9: je 0x595eda */ if (fZ) goto L_00595eda;
L_00595ecb:; BB(0x00595ecb);
    /* 00595ecb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595ece: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x595ed3u); f_005da7b0();
    /* 00595ed3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00595ed6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595ed8: je 0x595edc */ if (fZ) goto L_00595edc;
L_00595eda:; BB(0x00595eda);
    /* 00595eda: jmp 0x595f0d */ goto L_00595f0d;
L_00595edc:; BB(0x00595edc);
    /* 00595edc: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00595ee2: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595ee6: je 0x595f0d */ if (fZ) goto L_00595f0d;
L_00595ee8:; BB(0x00595ee8);
    /* 00595ee8: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595eee: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x595ef3u); f_00597d30();
    /* 00595ef3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595ef4: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 00595efa: call 0x590850 */ r_esp -= 4; W32(r_esp, 0x595effu); f_00590850();
    /* 00595eff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595f00: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00595f05: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00595f08: call 0x592690 */ r_esp -= 4; W32(r_esp, 0x595f0du); f_00592690();
L_00595f0d:; BB(0x00595f0d);
    /* 00595f0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00595f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595f10: ret 4 */ FN_RET(0x00595eb0); r_esp += 8; return;
}

void f_00595f20(void) /* FourCardPokerRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595f20);
    /* 00595f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00595f23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595f26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00595f29: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595f2f: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x595f34u); f_00597d30();
    /* 00595f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595f35: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595f3b: call 0x598470 */ r_esp -= 4; W32(r_esp, 0x595f40u); f_00598470();
    /* 00595f40: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00595f43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595f45: je 0x595f61 */ if (fZ) goto L_00595f61;
L_00595f47:; BB(0x00595f47);
    /* 00595f47: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595f4d: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x595f52u); f_00597d00();
    /* 00595f52: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00595f55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00595f58: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00595f5f: jmp 0x595f79 */ goto L_00595f79;
L_00595f61:; BB(0x00595f61);
    /* 00595f61: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595f67: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x595f6cu); f_00597d00();
    /* 00595f6c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00595f6f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00595f72: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
L_00595f79:; BB(0x00595f79);
    /* 00595f79: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595f7f: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x595f84u); f_00597d00();
    /* 00595f84: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00595f87: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595f8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00595f8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00595f8f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00595f92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x595f94u); call_ind(t); }
    /* 00595f94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595f97: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x595f9cu); f_005db890();
    /* 00595f9c: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 00595fa2: call 0x595790 */ r_esp -= 4; W32(r_esp, 0x595fa7u); f_00595790();
    /* 00595fa7: mov esp, ebp */ r_esp = r_ebp;
    /* 00595fa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595faa: ret  */ FN_RET(0x00595f20); r_esp += 4; return;
}

void f_00595fb0(void) /* FourCardPokerRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00595fb0);
    /* 00595fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00595fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00595fb7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00595fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595fbd: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00595fc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00595fc1: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595fc7: call 0x599520 */ r_esp -= 4; W32(r_esp, 0x595fccu); f_00599520();
    /* 00595fcc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00595fd2: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x595fd7u); f_00637610();
    /* 00595fd7: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00595fdd: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x595fe2u); f_005db9b0();
    /* 00595fe2: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00595fe8: call 0x599210 */ r_esp -= 4; W32(r_esp, 0x595fedu); f_00599210();
    /* 00595fed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595fef: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 00595ff5: call 0x5956f0 */ r_esp -= 4; W32(r_esp, 0x595ffau); f_005956f0();
    /* 00595ffa: mov esp, ebp */ r_esp = r_ebp;
    /* 00595ffc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595ffd: ret 4 */ FN_RET(0x00595fb0); r_esp += 8; return;
}

void f_00596010(void) /* FourCardPokerRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596010);
    /* 00596010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596011: mov ebp, esp */ r_ebp = r_esp;
    /* 00596013: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596016: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00596019: mov dword ptr [ebp - 0x10], 0x1b8 */ W32((u32)(r_ebp+0xfffffff0u), 0x1b8u);
    /* 00596020: mov dword ptr [ebp - 0xc], 0x62 */ W32((u32)(r_ebp+0xfffffff4u), 0x62u);
    /* 00596027: mov dword ptr [ebp - 8], 0x20f */ W32((u32)(r_ebp+0xfffffff8u), 0x20fu);
    /* 0059602e: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00596035: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596038: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0059603c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059603e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059603f: ret 4 */ FN_RET(0x00596010); r_esp += 8; return;
}

void f_00596050(void) /* FourCardPokerRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596050);
    /* 00596050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596051: mov ebp, esp */ r_ebp = r_esp;
    /* 00596053: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596056: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00596059: mov dword ptr [ebp - 0x10], 0x10b */ W32((u32)(r_ebp+0xfffffff0u), 0x10bu);
    /* 00596060: mov dword ptr [ebp - 0xc], 0x10b */ W32((u32)(r_ebp+0xfffffff4u), 0x10bu);
    /* 00596067: mov dword ptr [ebp - 8], 0x51 */ W32((u32)(r_ebp+0xfffffff8u), 0x51u);
    /* 0059606e: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 00596075: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596078: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0059607c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059607e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059607f: ret 4 */ FN_RET(0x00596050); r_esp += 8; return;
}

void f_00596090(void) /* FourCardPokerRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596090);
    /* 00596090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596091: mov ebp, esp */ r_ebp = r_esp;
    /* 00596093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596097: cmp dword ptr [0x7935a8], 0 */ {  u32 a = R32((u32)(0x7935a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059609e: je 0x5960ad */ if (fZ) goto L_005960ad;
L_005960a0:; BB(0x005960a0);
    /* 005960a0: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005960a6: call 0x597d00 */ r_esp -= 4; W32(r_esp, 0x5960abu); f_00597d00();
    /* 005960ab: jmp 0x5960af */ goto L_005960af;
L_005960ad:; BB(0x005960ad);
    /* 005960ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005960af:; BB(0x005960af);
    /* 005960af: mov esp, ebp */ r_esp = r_ebp;
    /* 005960b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005960b2: ret  */ FN_RET(0x00596090); r_esp += 4; return;
}

void f_005960c0(void) /* FourCardPokerRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005960c0);
    /* 005960c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005960c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005960c3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005960c6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005960c9: mov dword ptr [ebp - 0x28], 0x132 */ W32((u32)(r_ebp+0xffffffd8u), 0x132u);
    /* 005960d0: mov dword ptr [ebp - 0x24], 0xf6 */ W32((u32)(r_ebp+0xffffffdcu), 0xf6u);
    /* 005960d7: mov dword ptr [ebp - 0x20], 0x96 */ W32((u32)(r_ebp+0xffffffe0u), 0x96u);
    /* 005960de: mov dword ptr [ebp - 0x1c], 0xf6 */ W32((u32)(r_ebp+0xffffffe4u), 0xf6u);
    /* 005960e5: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 005960ec: mov dword ptr [ebp - 0x14], 0x4c */ W32((u32)(r_ebp+0xffffffecu), 0x4cu);
    /* 005960f3: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 005960fa: mov dword ptr [ebp - 0xc], 0x4a */ W32((u32)(r_ebp+0xfffffff4u), 0x4au);
    /* 00596101: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596105: jge 0x59611f */ if ((fS==fO)) goto L_0059611f;
L_00596107:; BB(0x00596107);
    /* 00596107: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059610a: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0059610e: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00596112: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596115: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00596117: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0059611a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059611d: jmp 0x596159 */ goto L_00596159;
L_0059611f:; BB(0x0059611f);
    /* 0059611f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00596126: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059612d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0059612f: jne 0x596148 */ if (!fZ) goto L_00596148;
L_00596131:; BB(0x00596131);
    /* 00596131: push 0x85 */ { u32 v = 0x85u; r_esp -= 4; W32(r_esp, v); }
    /* 00596136: push 0x6ce770 */ { u32 v = 0x6ce770u; r_esp -= 4; W32(r_esp, v); }
    /* 0059613b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00596140: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x596145u); f_005e9f20();
    /* 00596145: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00596148:; BB(0x00596148);
    /* 00596148: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059614b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059614e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00596150: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596153: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00596156: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00596159:; BB(0x00596159);
    /* 00596159: mov esp, ebp */ r_esp = r_ebp;
    /* 0059615b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059615c: ret 8 */ FN_RET(0x005960c0); r_esp += 12; return;
}

void f_00596160(void) /* FourCardPokerRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596160);
    /* 00596160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596161: mov ebp, esp */ r_ebp = r_esp;
    /* 00596163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596167: mov eax, 0x416 */ r_eax = 0x416u;
    /* 0059616c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059616e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059616f: ret 4 */ FN_RET(0x00596160); r_esp += 8; return;
}

void f_00596180(void) /* FourCardPokerRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596180);
    /* 00596180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596181: mov ebp, esp */ r_ebp = r_esp;
    /* 00596183: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596186: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00596189: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059618c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059618d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596192u); f_005dcb00();
    /* 00596192: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596195: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00596198: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059619b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 005961a1: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 005961a4: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 005961a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005961aa: je 0x5961b1 */ if (fZ) goto L_005961b1;
L_005961ac:; BB(0x005961ac);
    /* 005961ac: jmp 0x596240 */ goto L_00596240;
L_005961b1:; BB(0x005961b1);
    /* 005961b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005961b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005961b5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5961bau); f_0064c8a0();
    /* 005961ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005961bd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005961c0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005961c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005961c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005961c9: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005961cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005961ce: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005961d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005961d8: jmp 0x5961e3 */ goto L_005961e3;
L_005961da:; BB(0x005961da);
    /* 005961da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005961dd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005961e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005961e3:; BB(0x005961e3);
    /* 005961e3: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005961e7: jge 0x596240 */ if ((fS==fO)) goto L_00596240;
L_005961e9:; BB(0x005961e9);
    /* 005961e9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005961ec: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005961ef: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005961f2: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 005961f7: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 005961fb: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005961fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00596201: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00596204: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00596207: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0059620b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059620d: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00596210: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00596213: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00596217: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059621a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059621d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596220: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596221: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00596224: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596225: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00596228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596229: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059622c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x596231u); f_0064c5c0();
    /* 00596231: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00596233: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00596236: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00596239: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0059623b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0059623e: jmp 0x5961da */ goto L_005961da;
L_00596240:; BB(0x00596240);
    /* 00596240: mov esp, ebp */ r_esp = r_ebp;
    /* 00596242: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596243: ret 8 */ FN_RET(0x00596180); r_esp += 12; return;
}

void f_00596250(void) /* FourCardPokerRoom::vfunc189 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596250);
    /* 00596250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596251: mov ebp, esp */ r_ebp = r_esp;
    /* 00596253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596257: mov eax, 0xc */ r_eax = 0xcu;
    /* 0059625c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059625e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059625f: ret  */ FN_RET(0x00596250); r_esp += 4; return;
}

void f_00596260(void) /* FourCardPokerRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596260);
    /* 00596260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596261: mov ebp, esp */ r_ebp = r_esp;
    /* 00596263: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596266: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00596269: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059626c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059626d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00596270: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x596275u); f_005d7f40();
    /* 00596275: cmp dword ptr [0x7935a8], 0 */ {  u32 a = R32((u32)(0x7935a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059627c: je 0x59628e */ if (fZ) goto L_0059628e;
L_0059627e:; BB(0x0059627e);
    /* 0059627e: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596284: call 0x5981b0 */ r_esp -= 4; W32(r_esp, 0x596289u); f_005981b0();
    /* 00596289: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059628c: jmp 0x596295 */ goto L_00596295;
L_0059628e:; BB(0x0059628e);
    /* 0059628e: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_00596295:; BB(0x00596295);
    /* 00596295: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00596298: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059629b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059629e: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005962a2: jne 0x596349 */ if (!fZ) goto L_00596349;
L_005962a8:; BB(0x005962a8);
    /* 005962a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005962ab: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005962af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005962b1: jne 0x596349 */ if (!fZ) goto L_00596349;
L_005962b7:; BB(0x005962b7);
    /* 005962b7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005962bb: je 0x596349 */ if (fZ) goto L_00596349;
L_005962c1:; BB(0x005962c1);
    /* 005962c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005962c4: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005962c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005962c9: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5962cfu); call_ind(t); }
    /* 005962cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005962d2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005962d5: cmp dword ptr [ebp - 0x1c], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005962d9: je 0x5962dd */ if (fZ) goto L_005962dd;
L_005962db:; BB(0x005962db);
    /* 005962db: jmp 0x596349 */ goto L_00596349;
L_005962dd:; BB(0x005962dd);
    /* 005962dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005962e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005962e1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5962e6u); f_005dcb00();
    /* 005962e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005962e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005962eb: je 0x596349 */ if (fZ) goto L_00596349;
L_005962ed:; BB(0x005962ed);
    /* 005962ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005962f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005962f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5962f6u); f_005dcb00();
    /* 005962f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005962f9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005962fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005962ff: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x596304u); f_0063aac0();
    /* 00596304: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00596306: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00596309: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059630d: je 0x59632b */ if (fZ) goto L_0059632b;
L_0059630f:; BB(0x0059630f);
    /* 0059630f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596312: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x596317u); f_0063aac0();
    /* 00596317: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00596319: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059631c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596320: je 0x59632b */ if (fZ) goto L_0059632b;
L_00596322:; BB(0x00596322);
    /* 00596322: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00596329: jmp 0x596332 */ goto L_00596332;
L_0059632b:; BB(0x0059632b);
    /* 0059632b: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00596332:; BB(0x00596332);
    /* 00596332: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00596336: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596338: je 0x596349 */ if (fZ) goto L_00596349;
L_0059633a:; BB(0x0059633a);
    /* 0059633a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059633d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059633e: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596344: call 0x599050 */ r_esp -= 4; W32(r_esp, 0x596349u); f_00599050();
L_00596349:; BB(0x00596349);
    /* 00596349: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059634c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00596350: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596352: jne 0x5963c9 */ if (!fZ) goto L_005963c9;
L_00596354:; BB(0x00596354);
    /* 00596354: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596357: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059635b: jne 0x5963c9 */ if (!fZ) goto L_005963c9;
L_0059635d:; BB(0x0059635d);
    /* 0059635d: cmp dword ptr [0x79359c], 0 */ {  u32 a = R32((u32)(0x79359cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596364: je 0x5963c9 */ if (fZ) goto L_005963c9;
L_00596366:; BB(0x00596366);
    /* 00596366: cmp dword ptr [0x7935a8], 0 */ {  u32 a = R32((u32)(0x7935a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059636d: je 0x5963c9 */ if (fZ) goto L_005963c9;
L_0059636f:; BB(0x0059636f);
    /* 0059636f: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00596375: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059637c: je 0x5963c9 */ if (fZ) goto L_005963c9;
L_0059637e:; BB(0x0059637e);
    /* 0059637e: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00596384: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059638b: je 0x5963c9 */ if (fZ) goto L_005963c9;
L_0059638d:; BB(0x0059638d);
    /* 0059638d: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00596392: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00596398: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x59639du); f_005f54a0();
    /* 0059639d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005963a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005963a2: jne 0x5963bc */ if (!fZ) goto L_005963bc;
L_005963a4:; BB(0x005963a4);
    /* 005963a4: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 005963aa: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 005963b0: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5963b5u); f_005f54a0();
    /* 005963b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005963b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005963ba: je 0x5963c9 */ if (fZ) goto L_005963c9;
L_005963bc:; BB(0x005963bc);
    /* 005963bc: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005963c2: mov byte ptr [ecx + 0x116], 1 */ W8((u32)(r_ecx+0x116u), 0x1u);
L_005963c9:; BB(0x005963c9);
    /* 005963c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005963cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005963cc: ret 4 */ FN_RET(0x00596260); r_esp += 8; return;
}

void f_005963d0(void) /* FourCardPokerRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005963d0);
    /* 005963d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005963d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005963d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005963d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005963d9: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005963df: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x5963e4u); f_00597d30();
    /* 005963e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005963e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5963eau); f_005dcb00();
    /* 005963ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005963ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005963ef: je 0x5964bc */ if (fZ) goto L_005964bc;
L_005963f5:; BB(0x005963f5);
    /* 005963f5: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005963fb: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x596400u); f_00597d30();
    /* 00596400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596401: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596406u); f_005dcb00();
    /* 00596406: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596409: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059640c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059640f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x596414u); f_0063aac0();
    /* 00596414: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00596416: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00596419: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059641d: je 0x59643b */ if (fZ) goto L_0059643b;
L_0059641f:; BB(0x0059641f);
    /* 0059641f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00596422: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x596427u); f_0063aac0();
    /* 00596427: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00596429: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0059642c: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596430: je 0x59643b */ if (fZ) goto L_0059643b;
L_00596432:; BB(0x00596432);
    /* 00596432: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00596439: jmp 0x596442 */ goto L_00596442;
L_0059643b:; BB(0x0059643b);
    /* 0059643b: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00596442:; BB(0x00596442);
    /* 00596442: movzx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 00596446: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596448: je 0x5964bc */ if (fZ) goto L_005964bc;
L_0059644a:; BB(0x0059644a);
    /* 0059644a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059644d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00596450: cmp dword ptr [ebp - 0x18], 0x314d1a */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x314d1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596457: je 0x59646d */ if (fZ) goto L_0059646d;
L_00596459:; BB(0x00596459);
    /* 00596459: cmp dword ptr [ebp - 0x18], 0x314d1b */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x314d1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596460: je 0x596486 */ if (fZ) goto L_00596486;
L_00596462:; BB(0x00596462);
    /* 00596462: cmp dword ptr [ebp - 0x18], 0x314d1c */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x314d1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596469: je 0x5964a1 */ if (fZ) goto L_005964a1;
L_0059646b:; BB(0x0059646b);
    /* 0059646b: jmp 0x5964bc */ goto L_005964bc;
L_0059646d:; BB(0x0059646d);
    /* 0059646d: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596473: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x596478u); f_00597d30();
    /* 00596478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596479: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059647f: call 0x599050 */ r_esp -= 4; W32(r_esp, 0x596484u); f_00599050();
    /* 00596484: jmp 0x5964bc */ goto L_005964bc;
L_00596486:; BB(0x00596486);
    /* 00596486: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00596488: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059648e: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x596493u); f_00597d30();
    /* 00596493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596494: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059649a: call 0x597ca0 */ r_esp -= 4; W32(r_esp, 0x59649fu); f_00597ca0();
    /* 0059649f: jmp 0x5964cc */ goto L_005964cc;
L_005964a1:; BB(0x005964a1);
    /* 005964a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005964a3: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005964a9: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x5964aeu); f_00597d30();
    /* 005964ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005964af: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005964b5: call 0x597ca0 */ r_esp -= 4; W32(r_esp, 0x5964bau); f_00597ca0();
    /* 005964ba: jmp 0x5964cc */ goto L_005964cc;
L_005964bc:; BB(0x005964bc);
    /* 005964bc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005964bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005964c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005964c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005964c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005964c7: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x5964ccu); f_005dc7d0();
L_005964cc:; BB(0x005964cc);
    /* 005964cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005964ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005964cf: ret 8 */ FN_RET(0x005963d0); r_esp += 12; return;
}

void f_005964e0(void) /* FourCardPokerRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005964e0);
    /* 005964e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005964e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005964e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005964e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005964e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005964ed: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x5964f2u); f_00636e70();
    /* 005964f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005964f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005964f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005964fa: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5964ffu); f_005fc420();
    /* 005964ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596502: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x596507u); f_005db890();
    /* 00596507: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 0059650d: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x596512u); f_00591a70();
    /* 00596512: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596518: call 0x599210 */ r_esp -= 4; W32(r_esp, 0x59651du); f_00599210();
    /* 0059651d: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 00596523: call 0x595790 */ r_esp -= 4; W32(r_esp, 0x596528u); f_00595790();
    /* 00596528: mov esp, ebp */ r_esp = r_ebp;
    /* 0059652a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059652b: ret 8 */ FN_RET(0x005964e0); r_esp += 12; return;
}

void f_00596530(void) /* FourCardPokerRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596530);
    /* 00596530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596531: mov ebp, esp */ r_ebp = r_esp;
    /* 00596533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596537: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00596539: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0059653f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x596544u); f_005fb350();
    /* 00596544: mov ecx, eax */ r_ecx = r_eax;
    /* 00596546: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x59654bu); f_00600230();
    /* 0059654b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059654c: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596552: call 0x599550 */ r_esp -= 4; W32(r_esp, 0x596557u); f_00599550();
    /* 00596557: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00596559: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0059655f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x596564u); f_005fb350();
    /* 00596564: mov ecx, eax */ r_ecx = r_eax;
    /* 00596566: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x59656bu); f_00600230();
    /* 0059656b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059656c: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596572: call 0x599520 */ r_esp -= 4; W32(r_esp, 0x596577u); f_00599520();
    /* 00596577: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0059657d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x596582u); f_005da830();
    /* 00596582: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00596585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596587: je 0x596596 */ if (fZ) goto L_00596596;
L_00596589:; BB(0x00596589);
    /* 00596589: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 0059658f: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x596594u); f_00591a70();
    /* 00596594: jmp 0x5965d4 */ goto L_005965d4;
L_00596596:; BB(0x00596596);
    /* 00596596: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059659c: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x5965a1u); f_00637610();
    /* 005965a1: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 005965a7: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x5965acu); f_00591a70();
    /* 005965ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005965af: movzx edx, byte ptr [ecx + 0x7c] */ r_edx = (u32)R8((u32)(r_ecx+0x7cu));
    /* 005965b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005965b5: je 0x5965d4 */ if (fZ) goto L_005965d4;
L_005965b7:; BB(0x005965b7);
    /* 005965b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005965ba: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 005965be: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005965c4: call 0x599210 */ r_esp -= 4; W32(r_esp, 0x5965c9u); f_00599210();
    /* 005965c9: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 005965cf: call 0x595790 */ r_esp -= 4; W32(r_esp, 0x5965d4u); f_00595790();
L_005965d4:; BB(0x005965d4);
    /* 005965d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005965d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005965d7: ret 8 */ FN_RET(0x00596530); r_esp += 12; return;
}

void f_005965e0(void) /* FourCardPokerRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005965e0);
    /* 005965e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005965e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005965e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005965e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005965e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005965f0: jmp 0x5965fb */ goto L_005965fb;
L_005965f2:; BB(0x005965f2);
    /* 005965f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005965f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005965f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005965fb:; BB(0x005965fb);
    /* 005965fb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005965ff: jge 0x596627 */ if ((fS==fO)) goto L_00596627;
L_00596601:; BB(0x00596601);
    /* 00596601: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596604: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 0059660a: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0059660e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596611: je 0x596625 */ if (fZ) goto L_00596625;
L_00596613:; BB(0x00596613);
    /* 00596613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596616: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 0059661c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00596620: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x596625u); f_005cd330();
L_00596625:; BB(0x00596625);
    /* 00596625: jmp 0x5965f2 */ goto L_005965f2;
L_00596627:; BB(0x00596627);
    /* 00596627: mov esp, ebp */ r_esp = r_ebp;
    /* 00596629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059662a: ret 4 */ FN_RET(0x005965e0); r_esp += 8; return;
}

void f_00596630(void) /* FourCardPokerRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596630);
    /* 00596630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596631: mov ebp, esp */ r_ebp = r_esp;
    /* 00596633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596637: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596639: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059663b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059663e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00596641: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596644: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00596647: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00596649: mov ecx, eax */ r_ecx = r_eax;
    /* 0059664b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059664e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x596650u); call_ind(t); }
    /* 00596650: mov esp, ebp */ r_esp = r_ebp;
    /* 00596652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596653: ret  */ FN_RET(0x00596630); r_esp += 4; return;
}

void f_00596660(void) /* FourCardPokerRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596660);
    /* 00596660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596661: mov ebp, esp */ r_ebp = r_esp;
    /* 00596663: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596665: push 0x6a735d */ { u32 v = 0x6a735du; r_esp -= 4; W32(r_esp, v); }
    /* 0059666a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00596670: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596671: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596674: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00596679: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059667b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059667c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059667f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00596685: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00596688: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059668b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x596690u); f_005d8230();
    /* 00596690: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 00596695: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59669au); f_00686d82();
    /* 0059669a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059669d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005966a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005966a7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005966ab: je 0x5966ba */ if (fZ) goto L_005966ba;
L_005966ad:; BB(0x005966ad);
    /* 005966ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005966b0: call 0x597ac0 */ r_esp -= 4; W32(r_esp, 0x5966b5u); f_00597ac0();
    /* 005966b5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005966b8: jmp 0x5966c1 */ goto L_005966c1;
L_005966ba:; BB(0x005966ba);
    /* 005966ba: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005966c1:; BB(0x005966c1);
    /* 005966c1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005966c4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005966c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005966ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005966d1: mov dword ptr [0x7935a8], ecx */ W32((u32)(0x7935a8u), r_ecx);
    /* 005966d7: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005966dd: call 0x5984f0 */ r_esp -= 4; W32(r_esp, 0x5966e2u); f_005984f0();
    /* 005966e2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005966e4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5966e9u); f_00686d82();
    /* 005966e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005966ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005966ef: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005966f6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005966fa: je 0x596709 */ if (fZ) goto L_00596709;
L_005966fc:; BB(0x005966fc);
    /* 005966fc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005966ff: call 0x58fe40 */ r_esp -= 4; W32(r_esp, 0x596704u); f_0058fe40();
    /* 00596704: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00596707: jmp 0x596710 */ goto L_00596710;
L_00596709:; BB(0x00596709);
    /* 00596709: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00596710:; BB(0x00596710);
    /* 00596710: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00596713: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00596716: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059671d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00596720: mov dword ptr [0x793598], eax */ W32((u32)(0x793598u), r_eax);
    /* 00596725: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059672a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59672fu); f_00686d82();
    /* 0059672f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596732: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00596735: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0059673c: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596740: je 0x59674f */ if (fZ) goto L_0059674f;
L_00596742:; BB(0x00596742);
    /* 00596742: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00596745: call 0x590cb0 */ r_esp -= 4; W32(r_esp, 0x59674au); f_00590cb0();
    /* 0059674a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0059674d: jmp 0x596756 */ goto L_00596756;
L_0059674f:; BB(0x0059674f);
    /* 0059674f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00596756:; BB(0x00596756);
    /* 00596756: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00596759: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059675c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00596763: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00596766: mov dword ptr [0x79359c], edx */ W32((u32)(0x79359cu), r_edx);
    /* 0059676c: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00596772: call 0x5911e0 */ r_esp -= 4; W32(r_esp, 0x596777u); f_005911e0();
    /* 00596777: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00596779: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59677eu); f_00686d82();
    /* 0059677e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596781: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00596784: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0059678b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059678f: je 0x59679e */ if (fZ) goto L_0059679e;
L_00596791:; BB(0x00596791);
    /* 00596791: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00596794: call 0x5947f0 */ r_esp -= 4; W32(r_esp, 0x596799u); f_005947f0();
    /* 00596799: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0059679c: jmp 0x5967a5 */ goto L_005967a5;
L_0059679e:; BB(0x0059679e);
    /* 0059679e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005967a5:; BB(0x005967a5);
    /* 005967a5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005967a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005967ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005967b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005967b5: mov dword ptr [0x7935a0], ecx */ W32((u32)(0x7935a0u), r_ecx);
    /* 005967bb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005967bd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5967c2u); f_00686d82();
    /* 005967c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005967c5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005967c8: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005967cf: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005967d3: je 0x5967f0 */ if (fZ) goto L_005967f0;
L_005967d5:; BB(0x005967d5);
    /* 005967d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005967d7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005967da: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5967dfu); f_005fc0d0();
    /* 005967df: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005967e2: mov dword ptr [edx], 0x6ce794 */ W32((u32)(r_edx), 0x6ce794u);
    /* 005967e8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005967eb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005967ee: jmp 0x5967f7 */ goto L_005967f7;
L_005967f0:; BB(0x005967f0);
    /* 005967f0: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005967f7:; BB(0x005967f7);
    /* 005967f7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005967fa: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005967fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00596804: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00596807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596808: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059680b: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x596810u); f_005f1b70();
    /* 00596810: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00596813: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00596816: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00596819: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059681c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059681e: mov ecx, eax */ r_ecx = r_eax;
    /* 00596820: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00596823: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x596825u); call_ind(t); }
    /* 00596825: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00596828: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x59682du); f_005d85e0();
    /* 0059682d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059682f: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 00596835: call 0x5956f0 */ r_esp -= 4; W32(r_esp, 0x59683au); f_005956f0();
    /* 0059683a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059683d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00596844: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00596845: mov esp, ebp */ r_esp = r_ebp;
    /* 00596847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596848: ret  */ FN_RET(0x00596660); r_esp += 4; return;
}

void f_00596850(void) /* FourCardPokerRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596850);
    /* 00596850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596851: mov ebp, esp */ r_ebp = r_esp;
    /* 00596853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596855: push 0x6a7383 */ { u32 v = 0x6a7383u; r_esp -= 4; W32(r_esp, v); }
    /* 0059685a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00596860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596861: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596864: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00596869: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059686b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059686c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059686f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00596875: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00596878: mov dword ptr [ebp - 0x1c], 0x6b30d8 */ W32((u32)(r_ebp+0xffffffe4u), 0x6b30d8u);
    /* 0059687f: mov dword ptr [ebp - 0x18], 0x6b30bc */ W32((u32)(r_ebp+0xffffffe8u), 0x6b30bcu);
    /* 00596886: mov dword ptr [ebp - 0x14], 0x32 */ W32((u32)(r_ebp+0xffffffecu), 0x32u);
    /* 0059688d: mov dword ptr [ebp - 0x10], 0x33 */ W32((u32)(r_ebp+0xfffffff0u), 0x33u);
    /* 00596894: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0059689b: jmp 0x5968a6 */ goto L_005968a6;
L_0059689d:; BB(0x0059689d);
    /* 0059689d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005968a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005968a3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005968a6:; BB(0x005968a6);
    /* 005968a6: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005968aa: jge 0x5968f9 */ if ((fS==fO)) goto L_005968f9;
L_005968ac:; BB(0x005968ac);
    /* 005968ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005968ae: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005968b0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005968b2: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005968b4: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005968b6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005968b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005968bb: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 005968bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005968c0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5968c5u); f_00630f40();
    /* 005968c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005968c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005968c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005968cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005968ce: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005968d1: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005968d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005968d5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005968d7: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005968dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005968df: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005968e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005968e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005968e6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005968e9: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5968eeu); f_005f9ef0();
    /* 005968ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005968ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005968f2: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5968f7u); f_005ff5a0();
    /* 005968f7: jmp 0x59689d */ goto L_0059689d;
L_005968f9:; BB(0x005968f9);
    /* 005968f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005968fb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596900: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596905: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059690a: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059690f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00596911: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00596913: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00596915: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0059691a: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 0059691f: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00596921: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596926: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00596928: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059692d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x596932u); f_00630f40();
    /* 00596932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596936: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00596938: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059693a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0059693d: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x596942u); f_005fa790();
    /* 00596942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596943: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596946: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x59694bu); f_005ff5a0();
    /* 0059694b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596950: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x596955u); f_00686d82();
    /* 00596955: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596958: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059695b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00596962: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596966: je 0x596981 */ if (fZ) goto L_00596981;
L_00596968:; BB(0x00596968);
    /* 00596968: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059696b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x596970u); f_005ec5a0();
    /* 00596970: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00596973: mov dword ptr [eax], 0x6ce7bc */ W32((u32)(r_eax), 0x6ce7bcu);
    /* 00596979: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059697c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0059697f: jmp 0x596988 */ goto L_00596988;
L_00596981:; BB(0x00596981);
    /* 00596981: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00596988:; BB(0x00596988);
    /* 00596988: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059698b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0059698e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00596995: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596997: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00596999: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059699b: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 005969a0: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005969a5: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005969a7: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005969ac: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005969ae: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005969b3: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005969b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005969b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005969b9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005969bc: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5969c1u); f_005fa5b0();
    /* 005969c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005969c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005969c5: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5969cau); f_005ff5a0();
    /* 005969ca: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 005969d0: call 0x5986a0 */ r_esp -= 4; W32(r_esp, 0x5969d5u); f_005986a0();
    /* 005969d5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005969d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005969da: je 0x5969fc */ if (fZ) goto L_005969fc;
L_005969dc:; BB(0x005969dc);
    /* 005969dc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005969de: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005969e4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5969e9u); f_005fb350();
    /* 005969e9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005969ec: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005969ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005969f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005969f4: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005969fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5969fcu); call_ind(t); }
L_005969fc:; BB(0x005969fc);
    /* 005969fc: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596a02: call 0x599780 */ r_esp -= 4; W32(r_esp, 0x596a07u); f_00599780();
    /* 00596a07: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00596a0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596a0c: je 0x596a2e */ if (fZ) goto L_00596a2e;
L_00596a0e:; BB(0x00596a0e);
    /* 00596a0e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00596a10: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00596a16: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x596a1bu); f_005fb350();
    /* 00596a1b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00596a1e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00596a21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00596a23: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00596a26: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00596a2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x596a2eu); call_ind(t); }
L_00596a2e:; BB(0x00596a2e);
    /* 00596a2e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00596a31: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 00596a35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00596a38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00596a3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00596a40: mov esp, ebp */ r_esp = r_ebp;
    /* 00596a42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596a43: ret 0x10 */ FN_RET(0x00596850); r_esp += 20; return;
}

void f_00596a50(void) /* FourCardPokerRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596a50);
    /* 00596a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00596a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596a57: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596a5d: call 0x5986a0 */ r_esp -= 4; W32(r_esp, 0x596a62u); f_005986a0();
    /* 00596a62: mov esp, ebp */ r_esp = r_ebp;
    /* 00596a64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596a65: ret  */ FN_RET(0x00596a50); r_esp += 4; return;
}

void f_00596a70(void) /* FourCardPokerRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596a70);
    /* 00596a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00596a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596a77: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 00596a7c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00596a82: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x596a87u); f_005df2e0();
    /* 00596a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596a88: push 0x314d19 */ { u32 v = 0x314d19u; r_esp -= 4; W32(r_esp, v); }
    /* 00596a8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596a90: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x596a95u); f_005f1e60();
    /* 00596a95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596a98: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x596a9du); f_0064e430();
    /* 00596a9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00596a9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596aa0: ret  */ FN_RET(0x00596a70); r_esp += 4; return;
}

void f_00596ab0(void) /* FourCardPokerRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596ab0);
    /* 00596ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00596ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596ab6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596ab9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00596abc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00596abf: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596ac6: je 0x596ad6 */ if (fZ) goto L_00596ad6;
L_00596ac8:; BB(0x00596ac8);
    /* 00596ac8: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596acf: je 0x596b27 */ if (fZ) goto L_00596b27;
L_00596ad1:; BB(0x00596ad1);
    /* 00596ad1: jmp 0x596b5c */ goto L_00596b5c;
L_00596ad6:; BB(0x00596ad6);
    /* 00596ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596ad8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00596add: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596ae0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x596ae5u); f_005fe640();
    /* 00596ae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596ae7: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00596aec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596aef: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x596af4u); f_005fe640();
    /* 00596af4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596af6: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00596afb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596afe: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x596b03u); f_005fe640();
    /* 00596b03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b05: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596b0d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x596b12u); f_005fe640();
    /* 00596b12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b14: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b16: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b18: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596b20: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x596b25u); f_005fe240();
    /* 00596b25: jmp 0x596b5c */ goto L_00596b5c;
L_00596b27:; BB(0x00596b27);
    /* 00596b27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b29: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00596b2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596b31: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x596b36u); f_005fe640();
    /* 00596b36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b3a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b3c: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b41: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596b44: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x596b49u); f_005fe240();
    /* 00596b49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596b4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b4d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b4f: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00596b54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596b57: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x596b5cu); f_005fe240();
L_00596b5c:; BB(0x00596b5c);
    /* 00596b5c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00596b5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596b60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00596b63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596b64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596b67: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x596b6cu); f_005d8670();
    /* 00596b6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00596b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596b6f: ret 8 */ FN_RET(0x00596ab0); r_esp += 12; return;
}

void f_00596b80(void) /* FourCardPokerRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596b80);
    /* 00596b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00596b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00596b87: cmp dword ptr [0x7935a8], 0 */ {  u32 a = R32((u32)(0x7935a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596b8e: jne 0x596b94 */ if (!fZ) goto L_00596b94;
L_00596b90:; BB(0x00596b90);
    /* 00596b90: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00596b92: jmp 0x596b9f */ goto L_00596b9f;
L_00596b94:; BB(0x00596b94);
    /* 00596b94: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596b9a: call 0x599160 */ r_esp -= 4; W32(r_esp, 0x596b9fu); f_00599160();
L_00596b9f:; BB(0x00596b9f);
    /* 00596b9f: mov esp, ebp */ r_esp = r_ebp;
    /* 00596ba1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596ba2: ret  */ FN_RET(0x00596b80); r_esp += 4; return;
}

void f_00596bb0(void) /* FourCardPokerRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596bb0);
    /* 00596bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00596bb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596bb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00596bb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00596bc0: jmp 0x596bcb */ goto L_00596bcb;
L_00596bc2:; BB(0x00596bc2);
    /* 00596bc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00596bc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596bc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00596bcb:; BB(0x00596bcb);
    /* 00596bcb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596bcf: jge 0x596c79 */ if ((fS==fO)) goto L_00596c79;
L_00596bd5:; BB(0x00596bd5);
    /* 00596bd5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596bd8: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596bdb: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00596bde: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00596be4: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00596be8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596beb: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596bee: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00596bf1: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00596bf7: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00596bfb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00596bfd: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00596c03: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x596c05u); call_ind(t); }
    /* 00596c05: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00596c08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596c0a: je 0x596c5c */ if (fZ) goto L_00596c5c;
L_00596c0c:; BB(0x00596c0c);
    /* 00596c0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596c0f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596c12: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00596c15: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00596c1b: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00596c1f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00596c22: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596c25: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00596c28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596c2b: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00596c2f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00596c31: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00596c34: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00596c37: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00596c3b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00596c3e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00596c41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00596c44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596c45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00596c48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596c49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596c4d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596c52u); f_005dcb00();
    /* 00596c52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596c55: mov ecx, eax */ r_ecx = r_eax;
    /* 00596c57: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x596c5cu); f_005d5cf0();
L_00596c5c:; BB(0x00596c5c);
    /* 00596c5c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596c5f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596c62: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00596c65: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00596c6b: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00596c6f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x596c74u); f_005cb9b0();
    /* 00596c74: jmp 0x596bc2 */ goto L_00596bc2;
L_00596c79:; BB(0x00596c79);
    /* 00596c79: mov esp, ebp */ r_esp = r_ebp;
    /* 00596c7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596c7c: ret 4 */ FN_RET(0x00596bb0); r_esp += 8; return;
}

void f_00596c80(void) /* FourCardPokerRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596c80);
    /* 00596c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00596c83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596c87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596c88: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00596c8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596c8f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596c94u); f_005dcb00();
    /* 00596c94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596c97: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00596c9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596c9e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00596ca4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596ca5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00596ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596ca9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596cac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596cad: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596cb3: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x596cb8u); f_00597d50();
    /* 00596cb8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596cbb: mov ecx, eax */ r_ecx = r_eax;
    /* 00596cbd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x596cc2u); f_0064c5c0();
    /* 00596cc2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00596cc4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00596cc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00596cca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596ccb: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596cd1: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x596cd6u); f_00597d50();
    /* 00596cd6: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00596cd9: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00596cdc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596ce0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596ce5u); f_005dcb00();
    /* 00596ce5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596ce8: mov ecx, eax */ r_ecx = r_eax;
    /* 00596cea: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x596cefu); f_0063b0a0();
    /* 00596cef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596cf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00596cf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00596cf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596cf4: ret 4 */ FN_RET(0x00596c80); r_esp += 8; return;
}

void f_00596d00(void) /* FourCardPokerRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596d00);
    /* 00596d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00596d03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596d06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596d07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00596d08: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00596d0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00596d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596d0f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596d14u); f_005dcb00();
    /* 00596d14: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596d17: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 00596d1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596d1e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 00596d24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596d25: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00596d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596d29: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596d2b: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596d31: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x596d36u); f_00597d50();
    /* 00596d36: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00596d39: mov ecx, eax */ r_ecx = r_eax;
    /* 00596d3b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x596d40u); f_0064c5c0();
    /* 00596d40: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00596d42: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00596d45: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596d47: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596d4d: call 0x597d50 */ r_esp -= 4; W32(r_esp, 0x596d52u); f_00597d50();
    /* 00596d52: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00596d55: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 00596d58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00596d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596d5c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596d61u); f_005dcb00();
    /* 00596d61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596d64: mov ecx, eax */ r_ecx = r_eax;
    /* 00596d66: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x596d6bu); f_0063b0a0();
    /* 00596d6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00596d6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00596d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00596d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00596d70: ret 4 */ FN_RET(0x00596d00); r_esp += 8; return;
}

