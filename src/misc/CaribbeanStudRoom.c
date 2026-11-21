#include "protos.h"

void f_00423cc0(void) /* CaribbeanStudRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00423cc0);
    /* 00423cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00423cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00423cc5: push 0x69e298 */ { u32 v = 0x69e298u; r_esp -= 4; W32(r_esp, v); }
    /* 00423cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00423cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423cd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423cd2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00423cd7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00423cd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423cda: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00423cdd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00423ce3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00423ce6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423ce9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x423ceeu); f_005d7b60();
    /* 00423cee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00423cf5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423cf8: mov dword ptr [eax], 0x6b60e4 */ W32((u32)(r_eax), 0x6b60e4u);
    /* 00423cfe: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00423d03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423d06: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x423d0bu); f_005f1ad0();
    /* 00423d0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423d0e: mov dword ptr [0x790354], ecx */ W32((u32)(0x790354u), r_ecx);
    /* 00423d14: mov dword ptr [0x790358], 0 */ W32((u32)(0x790358u), 0x0u);
    /* 00423d1e: mov dword ptr [0x79035c], 0 */ W32((u32)(0x79035cu), 0x0u);
    /* 00423d28: mov dword ptr [0x790360], 0 */ W32((u32)(0x790360u), 0x0u);
    /* 00423d32: mov dword ptr [0x790364], 0 */ W32((u32)(0x790364u), 0x0u);
    /* 00423d3c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00423d43: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423d46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00423d49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00423d50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00423d51: mov esp, ebp */ r_esp = r_ebp;
    /* 00423d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423d54: ret  */ FN_RET(0x00423cc0); r_esp += 4; return;
}

void f_00423d60(void) /* CaribbeanStudRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00423d60);
    /* 00423d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00423d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00423d65: push 0x69e2bb */ { u32 v = 0x69e2bbu; r_esp -= 4; W32(r_esp, v); }
    /* 00423d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00423d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423d71: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00423d74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00423d79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00423d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423d7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00423d7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00423d85: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00423d88: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00423d8b: mov dword ptr [eax], 0x6b60e4 */ W32((u32)(r_eax), 0x6b60e4u);
    /* 00423d91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00423d98: mov dword ptr [0x790354], 0 */ W32((u32)(0x790354u), 0x0u);
    /* 00423da2: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00423da8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00423dab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00423dae: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00423db1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423db5: je 0x423dca */ if (fZ) goto L_00423dca;
L_00423db7:; BB(0x00423db7);
    /* 00423db7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423db9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423dbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423dbe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423dc1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00423dc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423dc5u); call_ind(t); }
    /* 00423dc5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00423dc8: jmp 0x423dd1 */ goto L_00423dd1;
L_00423dca:; BB(0x00423dca);
    /* 00423dca: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00423dd1:; BB(0x00423dd1);
    /* 00423dd1: mov dword ptr [0x790358], 0 */ W32((u32)(0x790358u), 0x0u);
    /* 00423ddb: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 00423de1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00423de4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00423de7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00423dea: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423dee: je 0x423e03 */ if (fZ) goto L_00423e03;
L_00423df0:; BB(0x00423df0);
    /* 00423df0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423df2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00423df5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423df7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00423dfa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00423dfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423dfeu); call_ind(t); }
    /* 00423dfe: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00423e01: jmp 0x423e0a */ goto L_00423e0a;
L_00423e03:; BB(0x00423e03);
    /* 00423e03: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00423e0a:; BB(0x00423e0a);
    /* 00423e0a: mov dword ptr [0x79035c], 0 */ W32((u32)(0x79035cu), 0x0u);
    /* 00423e14: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00423e1a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00423e1d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00423e20: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00423e23: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423e27: je 0x423e3c */ if (fZ) goto L_00423e3c;
L_00423e29:; BB(0x00423e29);
    /* 00423e29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423e2b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00423e2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423e30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00423e33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00423e35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423e37u); call_ind(t); }
    /* 00423e37: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00423e3a: jmp 0x423e43 */ goto L_00423e43;
L_00423e3c:; BB(0x00423e3c);
    /* 00423e3c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00423e43:; BB(0x00423e43);
    /* 00423e43: mov dword ptr [0x790360], 0 */ W32((u32)(0x790360u), 0x0u);
    /* 00423e4d: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00423e53: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00423e56: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00423e59: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00423e5c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423e60: je 0x423e75 */ if (fZ) goto L_00423e75;
L_00423e62:; BB(0x00423e62);
    /* 00423e62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423e64: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00423e67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423e69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00423e6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00423e6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423e70u); call_ind(t); }
    /* 00423e70: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00423e73: jmp 0x423e7c */ goto L_00423e7c;
L_00423e75:; BB(0x00423e75);
    /* 00423e75: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00423e7c:; BB(0x00423e7c);
    /* 00423e7c: mov dword ptr [0x790364], 0 */ W32((u32)(0x790364u), 0x0u);
    /* 00423e86: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00423e8d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00423e90: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x423e95u); f_005d7bd0();
    /* 00423e95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00423e98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00423e9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00423ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00423ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423ea3: ret  */ FN_RET(0x00423d60); r_esp += 4; return;
}

void f_00423eb0(void) /* CaribbeanStudRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00423eb0);
    /* 00423eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00423eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00423eb5: push 0x69e30d */ { u32 v = 0x69e30du; r_esp -= 4; W32(r_esp, v); }
    /* 00423eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00423ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423ec1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00423ec4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00423ec9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00423ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423ecc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00423ecf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00423ed5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00423ed8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00423edb: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x423ee0u); f_005d8230();
    /* 00423ee0: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00423ee5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x423eeau); f_00686d82();
    /* 00423eea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423eed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00423ef0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00423ef7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423efb: je 0x423f0a */ if (fZ) goto L_00423f0a;
L_00423efd:; BB(0x00423efd);
    /* 00423efd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00423f00: call 0x425be0 */ r_esp -= 4; W32(r_esp, 0x423f05u); f_00425be0();
    /* 00423f05: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00423f08: jmp 0x423f11 */ goto L_00423f11;
L_00423f0a:; BB(0x00423f0a);
    /* 00423f0a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00423f11:; BB(0x00423f11);
    /* 00423f11: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00423f14: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00423f17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00423f1e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00423f21: mov dword ptr [0x790358], ecx */ W32((u32)(0x790358u), r_ecx);
    /* 00423f27: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00423f2d: call 0x425df0 */ r_esp -= 4; W32(r_esp, 0x423f32u); f_00425df0();
    /* 00423f32: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00423f34: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x423f39u); f_00686d82();
    /* 00423f39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423f3c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00423f3f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00423f46: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423f4a: je 0x423f59 */ if (fZ) goto L_00423f59;
L_00423f4c:; BB(0x00423f4c);
    /* 00423f4c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00423f4f: call 0x422520 */ r_esp -= 4; W32(r_esp, 0x423f54u); f_00422520();
    /* 00423f54: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00423f57: jmp 0x423f60 */ goto L_00423f60;
L_00423f59:; BB(0x00423f59);
    /* 00423f59: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00423f60:; BB(0x00423f60);
    /* 00423f60: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00423f63: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00423f66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00423f6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00423f70: mov dword ptr [0x79035c], eax */ W32((u32)(0x79035cu), r_eax);
    /* 00423f75: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00423f7a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x423f7fu); f_00686d82();
    /* 00423f7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423f82: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00423f85: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00423f8c: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423f90: je 0x423f9f */ if (fZ) goto L_00423f9f;
L_00423f92:; BB(0x00423f92);
    /* 00423f92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00423f95: call 0x41e570 */ r_esp -= 4; W32(r_esp, 0x423f9au); f_0041e570();
    /* 00423f9a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00423f9d: jmp 0x423fa6 */ goto L_00423fa6;
L_00423f9f:; BB(0x00423f9f);
    /* 00423f9f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00423fa6:; BB(0x00423fa6);
    /* 00423fa6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00423fa9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00423fac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00423fb3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00423fb6: mov dword ptr [0x790360], edx */ W32((u32)(0x790360u), r_edx);
    /* 00423fbc: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00423fc2: call 0x41e910 */ r_esp -= 4; W32(r_esp, 0x423fc7u); f_0041e910();
    /* 00423fc7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00423fc9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x423fceu); f_00686d82();
    /* 00423fce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423fd1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00423fd4: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00423fdb: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423fdf: je 0x423fee */ if (fZ) goto L_00423fee;
L_00423fe1:; BB(0x00423fe1);
    /* 00423fe1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00423fe4: call 0x41dd00 */ r_esp -= 4; W32(r_esp, 0x423fe9u); f_0041dd00();
    /* 00423fe9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00423fec: jmp 0x423ff5 */ goto L_00423ff5;
L_00423fee:; BB(0x00423fee);
    /* 00423fee: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00423ff5:; BB(0x00423ff5);
    /* 00423ff5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00423ff8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00423ffb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00424002: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00424005: mov dword ptr [0x790364], ecx */ W32((u32)(0x790364u), r_ecx);
    /* 0042400b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0042400d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x424012u); f_00686d82();
    /* 00424012: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424015: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00424018: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0042401f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424023: je 0x424040 */ if (fZ) goto L_00424040;
L_00424025:; BB(0x00424025);
    /* 00424025: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424027: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042402a: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x42402fu); f_005fc0d0();
    /* 0042402f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00424032: mov dword ptr [edx], 0x6b63e4 */ W32((u32)(r_edx), 0x6b63e4u);
    /* 00424038: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0042403b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042403e: jmp 0x424047 */ goto L_00424047;
L_00424040:; BB(0x00424040);
    /* 00424040: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00424047:; BB(0x00424047);
    /* 00424047: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0042404a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0042404d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00424054: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00424057: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424058: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042405b: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x424060u); f_005f1b70();
    /* 00424060: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00424063: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00424066: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00424069: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042406c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042406e: mov ecx, eax */ r_ecx = r_eax;
    /* 00424070: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00424073: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x424075u); call_ind(t); }
    /* 00424075: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00424078: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x42407du); f_005d85e0();
    /* 0042407d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042407f: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 00424085: call 0x422560 */ r_esp -= 4; W32(r_esp, 0x42408au); f_00422560();
    /* 0042408a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042408d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00424094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00424095: mov esp, ebp */ r_esp = r_ebp;
    /* 00424097: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424098: ret  */ FN_RET(0x00423eb0); r_esp += 4; return;
}

void f_004240a0(void) /* CaribbeanStudRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004240a0);
    /* 004240a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004240a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004240a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004240a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004240a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004240ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004240ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004240b0: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x4240b5u); f_005d7f40();
    /* 004240b5: cmp dword ptr [0x790358], 0 */ {  u32 a = R32((u32)(0x790358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004240bc: je 0x4240ce */ if (fZ) goto L_004240ce;
L_004240be:; BB(0x004240be);
    /* 004240be: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004240c4: call 0x426420 */ r_esp -= 4; W32(r_esp, 0x4240c9u); f_00426420();
    /* 004240c9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004240cc: jmp 0x4240d5 */ goto L_004240d5;
L_004240ce:; BB(0x004240ce);
    /* 004240ce: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_004240d5:; BB(0x004240d5);
    /* 004240d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004240d8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004240db: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004240de: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004240e2: jne 0x424189 */ if (!fZ) goto L_00424189;
L_004240e8:; BB(0x004240e8);
    /* 004240e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004240eb: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004240ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004240f1: jne 0x424189 */ if (!fZ) goto L_00424189;
L_004240f7:; BB(0x004240f7);
    /* 004240f7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004240fb: je 0x424189 */ if (fZ) goto L_00424189;
L_00424101:; BB(0x00424101);
    /* 00424101: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424104: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00424108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424109: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x42410fu); call_ind(t); }
    /* 0042410f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424112: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00424115: cmp dword ptr [ebp - 0x1c], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424119: je 0x42411d */ if (fZ) goto L_0042411d;
L_0042411b:; BB(0x0042411b);
    /* 0042411b: jmp 0x424189 */ goto L_00424189;
L_0042411d:; BB(0x0042411d);
    /* 0042411d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424120: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424121: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424126u); f_005dcb00();
    /* 00424126: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042412b: je 0x424189 */ if (fZ) goto L_00424189;
L_0042412d:; BB(0x0042412d);
    /* 0042412d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424130: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424131: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424136u); f_005dcb00();
    /* 00424136: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424139: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042413c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042413f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x424144u); f_0063aac0();
    /* 00424144: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00424146: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00424149: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042414d: je 0x42416b */ if (fZ) goto L_0042416b;
L_0042414f:; BB(0x0042414f);
    /* 0042414f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424152: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x424157u); f_0063aac0();
    /* 00424157: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00424159: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042415c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424160: je 0x42416b */ if (fZ) goto L_0042416b;
L_00424162:; BB(0x00424162);
    /* 00424162: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00424169: jmp 0x424172 */ goto L_00424172;
L_0042416b:; BB(0x0042416b);
    /* 0042416b: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00424172:; BB(0x00424172);
    /* 00424172: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00424176: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424178: je 0x424189 */ if (fZ) goto L_00424189;
L_0042417a:; BB(0x0042417a);
    /* 0042417a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042417d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042417e: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424184: call 0x4266c0 */ r_esp -= 4; W32(r_esp, 0x424189u); f_004266c0();
L_00424189:; BB(0x00424189);
    /* 00424189: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042418c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00424190: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424192: jne 0x4241fd */ if (!fZ) goto L_004241fd;
L_00424194:; BB(0x00424194);
    /* 00424194: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424197: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042419b: jne 0x4241fd */ if (!fZ) goto L_004241fd;
L_0042419d:; BB(0x0042419d);
    /* 0042419d: cmp dword ptr [0x790360], 0 */ {  u32 a = R32((u32)(0x790360u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004241a4: je 0x4241fd */ if (fZ) goto L_004241fd;
L_004241a6:; BB(0x004241a6);
    /* 004241a6: cmp dword ptr [0x790358], 0 */ {  u32 a = R32((u32)(0x790358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004241ad: je 0x4241fd */ if (fZ) goto L_004241fd;
L_004241af:; BB(0x004241af);
    /* 004241af: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004241b5: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004241b9: je 0x4241fd */ if (fZ) goto L_004241fd;
L_004241bb:; BB(0x004241bb);
    /* 004241bb: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004241c1: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004241c5: je 0x4241fd */ if (fZ) goto L_004241fd;
L_004241c7:; BB(0x004241c7);
    /* 004241c7: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 004241cc: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004241cf: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x4241d4u); f_005f54a0();
    /* 004241d4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004241d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004241d9: jne 0x4241f0 */ if (!fZ) goto L_004241f0;
L_004241db:; BB(0x004241db);
    /* 004241db: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004241e1: mov ecx, dword ptr [edx + 0x7c] */ r_ecx = R32((u32)(r_edx+0x7cu));
    /* 004241e4: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x4241e9u); f_005f54a0();
    /* 004241e9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004241ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004241ee: je 0x4241fd */ if (fZ) goto L_004241fd;
L_004241f0:; BB(0x004241f0);
    /* 004241f0: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004241f6: mov byte ptr [ecx + 0xae], 1 */ W8((u32)(r_ecx+0xaeu), 0x1u);
L_004241fd:; BB(0x004241fd);
    /* 004241fd: mov esp, ebp */ r_esp = r_ebp;
    /* 004241ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424200: ret 4 */ FN_RET(0x004240a0); r_esp += 8; return;
}

void f_00424210(void) /* CaribbeanStudRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424210);
    /* 00424210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424211: mov ebp, esp */ r_ebp = r_esp;
    /* 00424213: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424216: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424219: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042421c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042421f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424226: je 0x424236 */ if (fZ) goto L_00424236;
L_00424228:; BB(0x00424228);
    /* 00424228: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042422f: je 0x424289 */ if (fZ) goto L_00424289;
L_00424231:; BB(0x00424231);
    /* 00424231: jmp 0x4242be */ goto L_004242be;
L_00424236:; BB(0x00424236);
    /* 00424236: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424238: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042423d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424240: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x424245u); f_005fe640();
    /* 00424245: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424247: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0042424c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042424f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x424254u); f_005fe640();
    /* 00424254: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424256: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0042425b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042425e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x424263u); f_005fe640();
    /* 00424263: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424265: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042426a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042426d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x424272u); f_005fe640();
    /* 00424272: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424274: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424276: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424278: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0042427d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424280: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x424285u); f_005fe240();
    /* 00424285: jmp 0x4242be */ goto L_004242be;
L_00424289:; BB(0x00424289);
    /* 00424289: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042428b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00424290: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424293: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x424298u); f_005fe640();
    /* 00424298: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042429a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042429c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042429e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 004242a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004242a6: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4242abu); f_005fe240();
    /* 004242ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004242ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004242af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004242b1: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 004242b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004242b9: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4242beu); f_005fe240();
L_004242be:; BB(0x004242be);
    /* 004242be: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004242c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004242c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004242c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004242c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004242c9: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x4242ceu); f_005d8670();
    /* 004242ce: mov esp, ebp */ r_esp = r_ebp;
    /* 004242d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004242d1: ret 8 */ FN_RET(0x00424210); r_esp += 12; return;
}

void f_004242e0(void) /* CaribbeanStudRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004242e0);
    /* 004242e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004242e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004242e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004242e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004242e7: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004242ec: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004242f2: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x4242f7u); f_005df2e0();
    /* 004242f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004242f8: push 0x3106c9 */ { u32 v = 0x3106c9u; r_esp -= 4; W32(r_esp, v); }
    /* 004242fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424300: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x424305u); f_005f1e60();
    /* 00424305: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424308: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x42430du); f_0064e430();
    /* 0042430d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042430f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424310: ret  */ FN_RET(0x004242e0); r_esp += 4; return;
}

void f_00424320(void) /* CaribbeanStudRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424320);
    /* 00424320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424321: mov ebp, esp */ r_ebp = r_esp;
    /* 00424323: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424326: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00424329: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0042432e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00424334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424337: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042433a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042433b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424340u); f_005dcb00();
    /* 00424340: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424343: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424345: je 0x424454 */ if (fZ) goto L_00424454;
L_0042434b:; BB(0x0042434b);
    /* 0042434b: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00424350: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00424356: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00424359: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042435c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042435d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424362u); f_005dcb00();
    /* 00424362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424365: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00424368: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042436b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x424370u); f_0063aac0();
    /* 00424370: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00424372: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00424375: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424379: je 0x424397 */ if (fZ) goto L_00424397;
L_0042437b:; BB(0x0042437b);
    /* 0042437b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042437e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x424383u); f_0063aac0();
    /* 00424383: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00424385: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00424388: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042438c: je 0x424397 */ if (fZ) goto L_00424397;
L_0042438e:; BB(0x0042438e);
    /* 0042438e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00424395: jmp 0x42439e */ goto L_0042439e;
L_00424397:; BB(0x00424397);
    /* 00424397: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0042439e:; BB(0x0042439e);
    /* 0042439e: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 004243a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004243a4: je 0x424454 */ if (fZ) goto L_00424454;
L_004243aa:; BB(0x004243aa);
    /* 004243aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004243ad: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004243b0: cmp dword ptr [ebp - 0x24], 0x3106ca */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3106cau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004243b7: je 0x4243d0 */ if (fZ) goto L_004243d0;
L_004243b9:; BB(0x004243b9);
    /* 004243b9: cmp dword ptr [ebp - 0x24], 0x3106cb */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3106cbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004243c0: je 0x4243f0 */ if (fZ) goto L_004243f0;
L_004243c2:; BB(0x004243c2);
    /* 004243c2: cmp dword ptr [ebp - 0x24], 0x3106cc */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3106ccu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004243c9: je 0x424422 */ if (fZ) goto L_00424422;
L_004243cb:; BB(0x004243cb);
    /* 004243cb: jmp 0x424454 */ goto L_00424454;
L_004243d0:; BB(0x004243d0);
    /* 004243d0: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004243d6: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004243dc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004243df: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004243e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004243e3: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004243e9: call 0x4266c0 */ r_esp -= 4; W32(r_esp, 0x4243eeu); f_004266c0();
    /* 004243ee: jmp 0x424454 */ goto L_00424454;
L_004243f0:; BB(0x004243f0);
    /* 004243f0: cmp dword ptr [0x790360], 0 */ {  u32 a = R32((u32)(0x790360u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004243f7: je 0x424420 */ if (fZ) goto L_00424420;
L_004243f9:; BB(0x004243f9);
    /* 004243f9: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004243ff: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424403: je 0x424420 */ if (fZ) goto L_00424420;
L_00424405:; BB(0x00424405);
    /* 00424405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424407: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 0042440d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00424410: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00424416: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00424419: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042441b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0042441e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x424420u); call_ind(t); }
L_00424420:; BB(0x00424420);
    /* 00424420: jmp 0x424464 */ goto L_00424464;
L_00424422:; BB(0x00424422);
    /* 00424422: cmp dword ptr [0x790360], 0 */ {  u32 a = R32((u32)(0x790360u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424429: je 0x424452 */ if (fZ) goto L_00424452;
L_0042442b:; BB(0x0042442b);
    /* 0042442b: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00424431: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424435: je 0x424452 */ if (fZ) goto L_00424452;
L_00424437:; BB(0x00424437);
    /* 00424437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424439: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 0042443f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00424442: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00424448: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0042444b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042444d: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00424450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x424452u); call_ind(t); }
L_00424452:; BB(0x00424452);
    /* 00424452: jmp 0x424464 */ goto L_00424464;
L_00424454:; BB(0x00424454);
    /* 00424454: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424457: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424458: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042445b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042445c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042445f: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x424464u); f_005dc7d0();
L_00424464:; BB(0x00424464);
    /* 00424464: mov esp, ebp */ r_esp = r_ebp;
    /* 00424466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424467: ret 8 */ FN_RET(0x00424320); r_esp += 12; return;
}

void f_00424470(void) /* CaribbeanStudRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424470);
    /* 00424470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424471: mov ebp, esp */ r_ebp = r_esp;
    /* 00424473: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424477: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042447a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042447c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042447e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x424483u); f_0064c8a0();
    /* 00424483: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424486: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00424489: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0042448c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042448f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00424492: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424495: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424498: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0042449e: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004244a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004244a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004244aa: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004244ad: jne 0x4245cb */ if (!fZ) goto L_004245cb;
L_004244b3:; BB(0x004244b3);
    /* 004244b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004244b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004244b7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4244bcu); f_005dcb00();
    /* 004244bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004244bf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004244c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004244c5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4244cau); f_0063aac0();
    /* 004244ca: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004244cc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004244cf: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004244d3: je 0x4244f1 */ if (fZ) goto L_004244f1;
L_004244d5:; BB(0x004244d5);
    /* 004244d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004244d8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4244ddu); f_0063aac0();
    /* 004244dd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004244df: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004244e2: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004244e6: je 0x4244f1 */ if (fZ) goto L_004244f1;
L_004244e8:; BB(0x004244e8);
    /* 004244e8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004244ef: jmp 0x4244f8 */ goto L_004244f8;
L_004244f1:; BB(0x004244f1);
    /* 004244f1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_004244f8:; BB(0x004244f8);
    /* 004244f8: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 004244fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004244fe: je 0x4245cb */ if (fZ) goto L_004245cb;
L_00424504:; BB(0x00424504);
    /* 00424504: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424508: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042450e: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x424513u); f_004272e0();
    /* 00424513: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00424516: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424518: jne 0x4245cb */ if (!fZ) goto L_004245cb;
L_0042451e:; BB(0x0042451e);
    /* 0042451e: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00424521: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424522: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424526: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042452c: call 0x4265a0 */ r_esp -= 4; W32(r_esp, 0x424531u); f_004265a0();
    /* 00424531: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424535: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42453au); f_005dcb00();
    /* 0042453a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042453d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042453f: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x424544u); f_005d5a50();
    /* 00424544: mov esi, eax */ r_esi = r_eax;
    /* 00424546: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00424549: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 0042454f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424551: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00424557: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0042455d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42455fu); call_ind(t); }
    /* 0042455f: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424562: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424564: jl 0x424585 */ if ((fS!=fO)) goto L_00424585;
L_00424566:; BB(0x00424566);
    /* 00424566: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042456a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42456fu); f_005dcb00();
    /* 0042456f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424572: mov ecx, eax */ r_ecx = r_eax;
    /* 00424574: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x424579u); f_005d5a50();
    /* 00424579: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042457c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042457f: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00424581: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424583: jge 0x4245ad */ if ((fS==fO)) goto L_004245ad;
L_00424585:; BB(0x00424585);
    /* 00424585: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424587: push 0x6b6428 */ { u32 v = 0x6b6428u; r_esp -= 4; W32(r_esp, v); }
    /* 0042458c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x424591u); f_00630f40();
    /* 00424591: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424595: push 0x6b6404 */ { u32 v = 0x6b6404u; r_esp -= 4; W32(r_esp, v); }
    /* 0042459a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42459fu); f_00630f40();
    /* 0042459f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004245a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004245a3: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x4245a8u); f_0062ff10();
    /* 004245a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004245ab: jmp 0x4245cb */ goto L_004245cb;
L_004245ad:; BB(0x004245ad);
    /* 004245ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004245b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004245b1: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004245b7: call 0x426620 */ r_esp -= 4; W32(r_esp, 0x4245bcu); f_00426620();
    /* 004245bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004245bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004245c0: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004245c6: call 0x41f9c0 */ r_esp -= 4; W32(r_esp, 0x4245cbu); f_0041f9c0();
L_004245cb:; BB(0x004245cb);
    /* 004245cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004245cc: mov esp, ebp */ r_esp = r_ebp;
    /* 004245ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004245cf: ret 4 */ FN_RET(0x00424470); r_esp += 8; return;
}

void f_004245e0(void) /* CaribbeanStudRoom::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004245e0);
    /* 004245e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004245e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004245e3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004245e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004245e9: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 004245ee: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004245f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004245f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004245fa: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004245fd: jne 0x424684 */ if (!fZ) goto L_00424684;
L_00424603:; BB(0x00424603);
    /* 00424603: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424607: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42460cu); f_005dcb00();
    /* 0042460c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042460f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00424612: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424615: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42461au); f_0063aac0();
    /* 0042461a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0042461c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042461f: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424623: je 0x424641 */ if (fZ) goto L_00424641;
L_00424625:; BB(0x00424625);
    /* 00424625: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424628: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42462du); f_0063aac0();
    /* 0042462d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042462f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00424632: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424636: je 0x424641 */ if (fZ) goto L_00424641;
L_00424638:; BB(0x00424638);
    /* 00424638: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0042463f: jmp 0x424648 */ goto L_00424648;
L_00424641:; BB(0x00424641);
    /* 00424641: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00424648:; BB(0x00424648);
    /* 00424648: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0042464c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042464e: je 0x424684 */ if (fZ) goto L_00424684;
L_00424650:; BB(0x00424650);
    /* 00424650: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424654: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042465a: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x42465fu); f_004272e0();
    /* 0042465f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00424662: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424664: je 0x424684 */ if (fZ) goto L_00424684;
L_00424666:; BB(0x00424666);
    /* 00424666: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042466a: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424670: call 0x426910 */ r_esp -= 4; W32(r_esp, 0x424675u); f_00426910();
    /* 00424675: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424678: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424679: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042467f: call 0x41fac0 */ r_esp -= 4; W32(r_esp, 0x424684u); f_0041fac0();
L_00424684:; BB(0x00424684);
    /* 00424684: mov esp, ebp */ r_esp = r_ebp;
    /* 00424686: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424687: ret 4 */ FN_RET(0x004245e0); r_esp += 8; return;
}

void f_00424690(void) /* CaribbeanStudRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424690);
    /* 00424690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424691: mov ebp, esp */ r_ebp = r_esp;
    /* 00424693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424697: cmp dword ptr [0x790358], 0 */ {  u32 a = R32((u32)(0x790358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042469e: jne 0x4246a4 */ if (!fZ) goto L_004246a4;
L_004246a0:; BB(0x004246a0);
    /* 004246a0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004246a2: jmp 0x4246af */ goto L_004246af;
L_004246a4:; BB(0x004246a4);
    /* 004246a4: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004246aa: call 0x426150 */ r_esp -= 4; W32(r_esp, 0x4246afu); f_00426150();
L_004246af:; BB(0x004246af);
    /* 004246af: mov esp, ebp */ r_esp = r_ebp;
    /* 004246b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004246b2: ret  */ FN_RET(0x00424690); r_esp += 4; return;
}

void f_004246c0(void) /* CaribbeanStudRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004246c0);
    /* 004246c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004246c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004246c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004246c6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004246c9: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 004246ce: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004246d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004246d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004246da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004246db: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004246e1: call 0x426500 */ r_esp -= 4; W32(r_esp, 0x4246e6u); f_00426500();
    /* 004246e6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004246e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004246eb: je 0x424707 */ if (fZ) goto L_00424707;
L_004246ed:; BB(0x004246ed);
    /* 004246ed: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004246f3: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x4246f8u); f_00426230();
    /* 004246f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004246fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004246fe: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00424705: jmp 0x42476c */ goto L_0042476c;
L_00424707:; BB(0x00424707);
    /* 00424707: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0042470d: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00424713: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00424716: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424719: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042471a: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424720: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x424725u); f_004272e0();
    /* 00424725: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00424728: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042472a: je 0x424754 */ if (fZ) goto L_00424754;
L_0042472c:; BB(0x0042472c);
    /* 0042472c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042472e: push 0x6b646c */ { u32 v = 0x6b646cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424733: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x424738u); f_00630f40();
    /* 00424738: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042473b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042473c: push 0x6b6448 */ { u32 v = 0x6b6448u; r_esp -= 4; W32(r_esp, v); }
    /* 00424741: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x424746u); f_00630f40();
    /* 00424746: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042474a: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x42474fu); f_0062ff10();
    /* 0042474f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424752: jmp 0x4247c4 */ goto L_004247c4;
L_00424754:; BB(0x00424754);
    /* 00424754: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042475a: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x42475fu); f_00426230();
    /* 0042475f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00424762: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424765: mov byte ptr [eax + 0x4a1], 1 */ W8((u32)(r_eax+0x4a1u), 0x1u);
L_0042476c:; BB(0x0042476c);
    /* 0042476c: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424772: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 00424778: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0042477b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042477e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042477f: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00424785: call 0x41f990 */ r_esp -= 4; W32(r_esp, 0x42478au); f_0041f990();
    /* 0042478a: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424790: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x424795u); f_00426230();
    /* 00424795: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00424798: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042479b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042479d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004247a0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 004247a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4247a5u); call_ind(t); }
    /* 004247a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004247a8: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x4247adu); f_005db890();
    /* 004247ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004247af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004247b1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004247b4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004247b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004247ba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004247bd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004247bf: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004247c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4247c4u); call_ind(t); }
L_004247c4:; BB(0x004247c4);
    /* 004247c4: mov esp, ebp */ r_esp = r_ebp;
    /* 004247c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004247c7: ret  */ FN_RET(0x004246c0); r_esp += 4; return;
}

void f_004247d0(void) /* CaribbeanStudRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004247d0);
    /* 004247d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004247d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004247d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004247d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004247d7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004247db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004247dd: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004247e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004247e1: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004247e7: call 0x425dc0 */ r_esp -= 4; W32(r_esp, 0x4247ecu); f_00425dc0();
    /* 004247ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004247ef: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x4247f4u); f_005db9b0();
    /* 004247f4: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004247fa: call 0x425fb0 */ r_esp -= 4; W32(r_esp, 0x4247ffu); f_00425fb0();
    /* 004247ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424801: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 00424807: call 0x422560 */ r_esp -= 4; W32(r_esp, 0x42480cu); f_00422560();
    /* 0042480c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042480e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042480f: ret 4 */ FN_RET(0x004247d0); r_esp += 8; return;
}

void f_00424820(void) /* CaribbeanStudRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424820);
    /* 00424820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424821: mov ebp, esp */ r_ebp = r_esp;
    /* 00424823: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424826: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00424829: mov dword ptr [ebp - 0x10], 0x1a0 */ W32((u32)(r_ebp+0xfffffff0u), 0x1a0u);
    /* 00424830: mov dword ptr [ebp - 0xc], 0x85 */ W32((u32)(r_ebp+0xfffffff4u), 0x85u);
    /* 00424837: mov dword ptr [ebp - 8], 0x219 */ W32((u32)(r_ebp+0xfffffff8u), 0x219u);
    /* 0042483e: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00424845: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424848: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0042484c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042484e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042484f: ret 4 */ FN_RET(0x00424820); r_esp += 8; return;
}

void f_00424860(void) /* CaribbeanStudRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424860);
    /* 00424860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424861: mov ebp, esp */ r_ebp = r_esp;
    /* 00424863: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424866: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00424869: mov dword ptr [ebp - 0x10], 0x124 */ W32((u32)(r_ebp+0xfffffff0u), 0x124u);
    /* 00424870: mov dword ptr [ebp - 0xc], 0x124 */ W32((u32)(r_ebp+0xfffffff4u), 0x124u);
    /* 00424877: mov dword ptr [ebp - 8], 0xf7 */ W32((u32)(r_ebp+0xfffffff8u), 0xf7u);
    /* 0042487e: mov dword ptr [ebp - 4], 0xf9 */ W32((u32)(r_ebp+0xfffffffcu), 0xf9u);
    /* 00424885: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424888: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0042488c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042488e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042488f: ret 4 */ FN_RET(0x00424860); r_esp += 8; return;
}

void f_004248a0(void) /* CaribbeanStudRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004248a0);
    /* 004248a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004248a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004248a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004248a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004248a7: cmp dword ptr [0x790358], 0 */ {  u32 a = R32((u32)(0x790358u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004248ae: je 0x4248bd */ if (fZ) goto L_004248bd;
L_004248b0:; BB(0x004248b0);
    /* 004248b0: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004248b6: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x4248bbu); f_00426230();
    /* 004248bb: jmp 0x4248bf */ goto L_004248bf;
L_004248bd:; BB(0x004248bd);
    /* 004248bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004248bf:; BB(0x004248bf);
    /* 004248bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004248c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004248c2: ret  */ FN_RET(0x004248a0); r_esp += 4; return;
}

void f_004248d0(void) /* CaribbeanStudRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004248d0);
    /* 004248d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004248d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004248d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004248d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004248d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004248e0: jmp 0x4248eb */ goto L_004248eb;
L_004248e2:; BB(0x004248e2);
    /* 004248e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004248e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004248e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004248eb:; BB(0x004248eb);
    /* 004248eb: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004248ef: jge 0x424917 */ if ((fS==fO)) goto L_00424917;
L_004248f1:; BB(0x004248f1);
    /* 004248f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004248f4: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 004248fa: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 004248fe: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424901: je 0x424915 */ if (fZ) goto L_00424915;
L_00424903:; BB(0x00424903);
    /* 00424903: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424906: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 0042490c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00424910: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x424915u); f_005cd330();
L_00424915:; BB(0x00424915);
    /* 00424915: jmp 0x4248e2 */ goto L_004248e2;
L_00424917:; BB(0x00424917);
    /* 00424917: mov esp, ebp */ r_esp = r_ebp;
    /* 00424919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042491a: ret 4 */ FN_RET(0x004248d0); r_esp += 8; return;
}

void f_00424920(void) /* CaribbeanStudRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424920);
    /* 00424920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424921: mov ebp, esp */ r_ebp = r_esp;
    /* 00424923: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424926: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00424929: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042492c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042492d: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424933: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x424938u); f_004272e0();
    /* 00424938: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042493b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042493d: je 0x42495d */ if (fZ) goto L_0042495d;
L_0042493f:; BB(0x0042493f);
    /* 0042493f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424943: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00424949: call 0x41fac0 */ r_esp -= 4; W32(r_esp, 0x42494eu); f_0041fac0();
    /* 0042494e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424952: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424958: call 0x426910 */ r_esp -= 4; W32(r_esp, 0x42495du); f_00426910();
L_0042495d:; BB(0x0042495d);
    /* 0042495d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00424964: jmp 0x42496f */ goto L_0042496f;
L_00424966:; BB(0x00424966);
    /* 00424966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424969: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042496c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042496f:; BB(0x0042496f);
    /* 0042496f: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424973: jge 0x424a1c */ if ((fS==fO)) goto L_00424a1c;
L_00424979:; BB(0x00424979);
    /* 00424979: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042497c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042497f: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 00424982: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00424988: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0042498c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042498f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424992: lea ecx, [edx + ecx*2] */ r_ecx = (u32)(r_edx+r_ecx*2);
    /* 00424995: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0042499b: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0042499f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004249a1: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004249a7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4249a9u); call_ind(t); }
    /* 004249a9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004249ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004249ae: je 0x424a00 */ if (fZ) goto L_00424a00;
L_004249b0:; BB(0x004249b0);
    /* 004249b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004249b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004249b6: lea eax, [edx + ecx*2] */ r_eax = (u32)(r_edx+r_ecx*2);
    /* 004249b9: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004249bf: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004249c3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004249c6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004249c9: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004249cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004249cf: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 004249d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004249d5: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004249d8: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 004249db: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 004249df: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004249e2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004249e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004249e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004249e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004249ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004249ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004249f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004249f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4249f6u); f_005dcb00();
    /* 004249f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004249f9: mov ecx, eax */ r_ecx = r_eax;
    /* 004249fb: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x424a00u); f_005d5cf0();
L_00424a00:; BB(0x00424a00);
    /* 00424a00: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424a03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424a06: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 00424a09: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00424a0e: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00424a12: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x424a17u); f_005cb9b0();
    /* 00424a17: jmp 0x424966 */ goto L_00424966;
L_00424a1c:; BB(0x00424a1c);
    /* 00424a1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00424a1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424a1f: ret 4 */ FN_RET(0x00424920); r_esp += 8; return;
}

void f_00424a30(void) /* CaribbeanStudRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424a30);
    /* 00424a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00424a33: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424a36: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00424a39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424a3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424a3d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x424a42u); f_0064c8a0();
    /* 00424a42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424a45: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00424a48: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00424a4b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00424a4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424a51: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00424a53: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424a56: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00424a59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424a5d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424a62u); f_005dcb00();
    /* 00424a62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424a65: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00424a68: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00424a6b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00424a71: mov byte ptr [ebp - 0x31], dl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_edx);
    /* 00424a74: movzx eax, byte ptr [ebp - 0x31] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00424a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424a7a: je 0x424a81 */ if (fZ) goto L_00424a81;
L_00424a7c:; BB(0x00424a7c);
    /* 00424a7c: jmp 0x424b3a */ goto L_00424b3a;
L_00424a81:; BB(0x00424a81);
    /* 00424a81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424a84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424a85: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424a8b: call 0x4272e0 */ r_esp -= 4; W32(r_esp, 0x424a90u); f_004272e0();
    /* 00424a90: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00424a93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424a95: je 0x424aca */ if (fZ) goto L_00424aca;
L_00424a97:; BB(0x00424a97);
    /* 00424a97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424a99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424a9b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x424aa0u); f_0064c8a0();
    /* 00424aa0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424aa3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00424aa6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00424aa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424aad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00424ab0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424ab1: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00424ab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424ab5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424ab8: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x424abdu); f_0064c5c0();
    /* 00424abd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00424abf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00424ac2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00424ac5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00424ac7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_00424aca:; BB(0x00424aca);
    /* 00424aca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00424ad1: jmp 0x424adc */ goto L_00424adc;
L_00424ad3:; BB(0x00424ad3);
    /* 00424ad3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424ad6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00424ad9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00424adc:; BB(0x00424adc);
    /* 00424adc: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424ae0: jge 0x424b3a */ if ((fS==fO)) goto L_00424b3a;
L_00424ae2:; BB(0x00424ae2);
    /* 00424ae2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424ae5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424ae8: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 00424aeb: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00424af1: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00424af5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00424af8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424afb: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00424afe: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00424b01: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 00424b05: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00424b07: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00424b0a: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00424b0d: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00424b11: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00424b14: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00424b17: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00424b1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b1b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00424b1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b1f: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00424b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424b23: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00424b26: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x424b2bu); f_0064c5c0();
    /* 00424b2b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00424b2d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00424b30: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00424b33: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00424b35: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00424b38: jmp 0x424ad3 */ goto L_00424ad3;
L_00424b3a:; BB(0x00424b3a);
    /* 00424b3a: mov esp, ebp */ r_esp = r_ebp;
    /* 00424b3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424b3d: ret 8 */ FN_RET(0x00424a30); r_esp += 12; return;
}

void f_00424b40(void) /* CaribbeanStudRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424b40);
    /* 00424b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00424b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424b47: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424b4d: call 0x425d60 */ r_esp -= 4; W32(r_esp, 0x424b52u); f_00425d60();
    /* 00424b52: mov esp, ebp */ r_esp = r_ebp;
    /* 00424b54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424b55: ret  */ FN_RET(0x00424b40); r_esp += 4; return;
}

void f_00424b60(void) /* CaribbeanStudRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424b60);
    /* 00424b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00424b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424b67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424b69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424b6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b6e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00424b71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424b74: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00424b77: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424b79: mov ecx, eax */ r_ecx = r_eax;
    /* 00424b7b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00424b7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x424b80u); call_ind(t); }
    /* 00424b80: mov esp, ebp */ r_esp = r_ebp;
    /* 00424b82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424b83: ret  */ FN_RET(0x00424b60); r_esp += 4; return;
}

void f_00424b90(void) /* CaribbeanStudRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424b90);
    /* 00424b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00424b93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424b96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424b97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424b98: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00424b9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424b9f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424ba4u); f_005dcb00();
    /* 00424ba4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424ba7: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 00424bad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424bae: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 00424bb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424bb5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00424bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424bb9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424bbb: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424bc1: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x424bc6u); f_00425d20();
    /* 00424bc6: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424bc9: mov ecx, eax */ r_ecx = r_eax;
    /* 00424bcb: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x424bd0u); f_0064c5c0();
    /* 00424bd0: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00424bd2: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00424bd5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424bd7: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424bdd: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x424be2u); f_00425d20();
    /* 00424be2: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00424be5: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 00424be8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424beb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424bec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424bf1u); f_005dcb00();
    /* 00424bf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424bf4: mov ecx, eax */ r_ecx = r_eax;
    /* 00424bf6: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x424bfbu); f_0063b0a0();
    /* 00424bfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424bfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424bfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00424bff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424c00: ret 4 */ FN_RET(0x00424b90); r_esp += 8; return;
}

void f_00424c10(void) /* CaribbeanStudRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424c10);
    /* 00424c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00424c13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424c16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00424c17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00424c18: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00424c1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424c1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c1f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424c24u); f_005dcb00();
    /* 00424c24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424c27: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00424c2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424c2e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00424c34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424c35: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00424c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424c3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424c3d: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424c43: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x424c48u); f_00425d20();
    /* 00424c48: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424c4b: mov ecx, eax */ r_ecx = r_eax;
    /* 00424c4d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x424c52u); f_0064c5c0();
    /* 00424c52: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00424c54: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00424c57: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00424c5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424c5b: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424c61: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x424c66u); f_00425d20();
    /* 00424c66: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00424c69: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00424c6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00424c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424c70: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x424c75u); f_005dcb00();
    /* 00424c75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424c78: mov ecx, eax */ r_ecx = r_eax;
    /* 00424c7a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x424c7fu); f_0063b0a0();
    /* 00424c7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00424c80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00424c81: mov esp, ebp */ r_esp = r_ebp;
    /* 00424c83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424c84: ret 4 */ FN_RET(0x00424c10); r_esp += 8; return;
}

void f_00424c90(void) /* CaribbeanStudRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424c90);
    /* 00424c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00424c93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424c96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00424c99: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424c9b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00424ca1: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x424ca6u); f_005df700();
    /* 00424ca6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00424ca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424cab: je 0x424cbc */ if (fZ) goto L_00424cbc;
L_00424cad:; BB(0x00424cad);
    /* 00424cad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00424cb0: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x424cb5u); f_005da7b0();
    /* 00424cb5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00424cb8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424cba: je 0x424cbe */ if (fZ) goto L_00424cbe;
L_00424cbc:; BB(0x00424cbc);
    /* 00424cbc: jmp 0x424cf5 */ goto L_00424cf5;
L_00424cbe:; BB(0x00424cbe);
    /* 00424cbe: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00424cc4: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424cc8: je 0x424cf5 */ if (fZ) goto L_00424cf5;
L_00424cca:; BB(0x00424cca);
    /* 00424cca: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00424ccf: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00424cd5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424cd8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424cdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424cdc: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00424ce2: call 0x41e290 */ r_esp -= 4; W32(r_esp, 0x424ce7u); f_0041e290();
    /* 00424ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ce8: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00424ced: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00424cf0: call 0x422110 */ r_esp -= 4; W32(r_esp, 0x424cf5u); f_00422110();
L_00424cf5:; BB(0x00424cf5);
    /* 00424cf5: mov esp, ebp */ r_esp = r_ebp;
    /* 00424cf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424cf8: ret 4 */ FN_RET(0x00424c90); r_esp += 8; return;
}

void f_00424d00(void) /* CaribbeanStudRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424d00);
    /* 00424d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00424d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424d07: mov eax, 0x416 */ r_eax = 0x416u;
    /* 00424d0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00424d0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424d0f: ret 4 */ FN_RET(0x00424d00); r_esp += 8; return;
}

void f_00424d20(void) /* CaribbeanStudRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424d20);
    /* 00424d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00424d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424d27: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00424d2d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x424d32u); f_00636e70();
    /* 00424d32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424d37: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00424d3a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x424d3fu); f_005fc420();
    /* 00424d3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00424d42: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x424d47u); f_005db890();
    /* 00424d47: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00424d4d: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x424d52u); f_0041f1b0();
    /* 00424d52: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424d58: call 0x425fb0 */ r_esp -= 4; W32(r_esp, 0x424d5du); f_00425fb0();
    /* 00424d5d: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 00424d63: call 0x422600 */ r_esp -= 4; W32(r_esp, 0x424d68u); f_00422600();
    /* 00424d68: mov esp, ebp */ r_esp = r_ebp;
    /* 00424d6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424d6b: ret 8 */ FN_RET(0x00424d20); r_esp += 12; return;
}

void f_00424d70(void) /* CaribbeanStudRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424d70);
    /* 00424d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00424d73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424d75: push 0x69e333 */ { u32 v = 0x69e333u; r_esp -= 4; W32(r_esp, v); }
    /* 00424d7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00424d80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424d81: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00424d84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00424d89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00424d8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424d8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00424d8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00424d95: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00424d98: mov dword ptr [ebp - 0x18], 0x6b30d8 */ W32((u32)(r_ebp+0xffffffe8u), 0x6b30d8u);
    /* 00424d9f: mov dword ptr [ebp - 0x14], 0x6b30bc */ W32((u32)(r_ebp+0xffffffecu), 0x6b30bcu);
    /* 00424da6: mov dword ptr [ebp - 0x20], 0x32 */ W32((u32)(r_ebp+0xffffffe0u), 0x32u);
    /* 00424dad: mov dword ptr [ebp - 0x1c], 0x33 */ W32((u32)(r_ebp+0xffffffe4u), 0x33u);
    /* 00424db4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00424dbb: jmp 0x424dc6 */ goto L_00424dc6;
L_00424dbd:; BB(0x00424dbd);
    /* 00424dbd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424dc0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424dc3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00424dc6:; BB(0x00424dc6);
    /* 00424dc6: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00424dca: jge 0x424e19 */ if ((fS==fO)) goto L_00424e19;
L_00424dcc:; BB(0x00424dcc);
    /* 00424dcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dce: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd2: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd4: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00424dd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424ddb: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 00424ddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424de0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x424de5u); f_00630f40();
    /* 00424de5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424de9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424deb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424dee: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00424df1: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00424df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424df5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00424df7: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00424dfc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00424dff: mov edx, dword ptr [ebp + ecx*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 00424e03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00424e04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e06: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424e09: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x424e0eu); f_005f9ef0();
    /* 00424e0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424e0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424e12: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x424e17u); f_005ff5a0();
    /* 00424e17: jmp 0x424dbd */ goto L_00424dbd;
L_00424e19:; BB(0x00424e19);
    /* 00424e19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e1b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424e20: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424e25: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424e2a: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e2f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424e31: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e33: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e35: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e3a: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e3f: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e41: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e46: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e48: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e4d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x424e52u); f_00630f40();
    /* 00424e52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424e56: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00424e58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e5a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424e5d: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x424e62u); f_005fa790();
    /* 00424e62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424e63: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424e66: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x424e6bu); f_005ff5a0();
    /* 00424e6b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00424e70: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x424e75u); f_00686d82();
    /* 00424e75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00424e78: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00424e7b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00424e82: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424e86: je 0x424ea1 */ if (fZ) goto L_00424ea1;
L_00424e88:; BB(0x00424e88);
    /* 00424e88: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00424e8b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x424e90u); f_005ec5a0();
    /* 00424e90: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00424e93: mov dword ptr [eax], 0x6b6494 */ W32((u32)(r_eax), 0x6b6494u);
    /* 00424e99: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00424e9c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00424e9f: jmp 0x424ea8 */ goto L_00424ea8;
L_00424ea1:; BB(0x00424ea1);
    /* 00424ea1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00424ea8:; BB(0x00424ea8);
    /* 00424ea8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00424eab: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00424eae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00424eb5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00424eb7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00424eb9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ebb: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ec0: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424ec5: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00424ec7: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ecc: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ece: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ed3: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00424ed5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00424ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ed9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424edc: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x424ee1u); f_005fa5b0();
    /* 00424ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ee2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00424ee5: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x424eeau); f_005ff5a0();
    /* 00424eea: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424ef0: call 0x425d60 */ r_esp -= 4; W32(r_esp, 0x424ef5u); f_00425d60();
    /* 00424ef5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00424ef8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424efa: je 0x424f1c */ if (fZ) goto L_00424f1c;
L_00424efc:; BB(0x00424efc);
    /* 00424efc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00424efe: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00424f04: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x424f09u); f_005fb350();
    /* 00424f09: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00424f0c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00424f0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424f11: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00424f14: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00424f1a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x424f1cu); call_ind(t); }
L_00424f1c:; BB(0x00424f1c);
    /* 00424f1c: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424f22: call 0x425da0 */ r_esp -= 4; W32(r_esp, 0x424f27u); f_00425da0();
    /* 00424f27: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00424f2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424f2c: je 0x424f4e */ if (fZ) goto L_00424f4e;
L_00424f2e:; BB(0x00424f2e);
    /* 00424f2e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00424f30: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00424f36: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x424f3bu); f_005fb350();
    /* 00424f3b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00424f3e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00424f41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00424f43: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00424f46: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00424f4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x424f4eu); call_ind(t); }
L_00424f4e:; BB(0x00424f4e);
    /* 00424f4e: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424f55: je 0x424fa5 */ if (fZ) goto L_00424fa5;
L_00424f57:; BB(0x00424f57);
    /* 00424f57: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00424f5d: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x424f62u); f_005cdd60();
    /* 00424f62: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00424f65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00424f67: je 0x424f88 */ if (fZ) goto L_00424f88;
L_00424f69:; BB(0x00424f69);
    /* 00424f69: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00424f6b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424f6e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x424f73u); f_005fb350();
    /* 00424f73: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00424f76: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00424f79: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00424f7b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00424f7e: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 00424f84: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x424f86u); call_ind(t); }
    /* 00424f86: jmp 0x424fa5 */ goto L_00424fa5;
L_00424f88:; BB(0x00424f88);
    /* 00424f88: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00424f8a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00424f8d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x424f92u); f_005fb350();
    /* 00424f92: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00424f95: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00424f98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00424f9a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00424f9d: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00424fa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x424fa5u); call_ind(t); }
L_00424fa5:; BB(0x00424fa5);
    /* 00424fa5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00424fa8: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 00424fac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00424faf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00424fb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00424fb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00424fb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00424fba: ret 0x10 */ FN_RET(0x00424d70); r_esp += 20; return;
}

void f_00424fc0(void) /* CaribbeanStudRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00424fc0);
    /* 00424fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00424fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00424fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00424fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00424fc7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00424fc9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00424fcf: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x424fd4u); f_005fb350();
    /* 00424fd4: mov ecx, eax */ r_ecx = r_eax;
    /* 00424fd6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x424fdbu); f_00600230();
    /* 00424fdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424fdc: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00424fe2: call 0x425d80 */ r_esp -= 4; W32(r_esp, 0x424fe7u); f_00425d80();
    /* 00424fe7: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00424fe9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00424fef: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x424ff4u); f_005fb350();
    /* 00424ff4: mov ecx, eax */ r_ecx = r_eax;
    /* 00424ff6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x424ffbu); f_00600230();
    /* 00424ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00424ffc: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00425002: call 0x425dc0 */ r_esp -= 4; W32(r_esp, 0x425007u); f_00425dc0();
    /* 00425007: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042500e: je 0x425035 */ if (fZ) goto L_00425035;
L_00425010:; BB(0x00425010);
    /* 00425010: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00425012: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00425015: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x42501au); f_005fb350();
    /* 0042501a: mov ecx, eax */ r_ecx = r_eax;
    /* 0042501c: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x425021u); f_00600230();
    /* 00425021: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00425024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425026: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00425029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042502a: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 00425030: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x425035u); f_005cdd10();
L_00425035:; BB(0x00425035);
    /* 00425035: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0042503b: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x425040u); f_005da830();
    /* 00425040: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00425043: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425045: je 0x425054 */ if (fZ) goto L_00425054;
L_00425047:; BB(0x00425047);
    /* 00425047: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 0042504d: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x425052u); f_0041f1b0();
    /* 00425052: jmp 0x425092 */ goto L_00425092;
L_00425054:; BB(0x00425054);
    /* 00425054: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0042505a: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x42505fu); f_00637610();
    /* 0042505f: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00425065: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x42506au); f_0041f1b0();
    /* 0042506a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042506d: movzx ecx, byte ptr [eax + 0x7c] */ r_ecx = (u32)R8((u32)(r_eax+0x7cu));
    /* 00425071: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425073: je 0x425092 */ if (fZ) goto L_00425092;
L_00425075:; BB(0x00425075);
    /* 00425075: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425078: mov byte ptr [edx + 0x7c], 0 */ W8((u32)(r_edx+0x7cu), 0x0u);
    /* 0042507c: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00425082: call 0x425fb0 */ r_esp -= 4; W32(r_esp, 0x425087u); f_00425fb0();
    /* 00425087: mov ecx, dword ptr [0x79035c] */ r_ecx = R32((u32)(0x79035cu));
    /* 0042508d: call 0x422600 */ r_esp -= 4; W32(r_esp, 0x425092u); f_00422600();
L_00425092:; BB(0x00425092);
    /* 00425092: mov esp, ebp */ r_esp = r_ebp;
    /* 00425094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425095: ret 8 */ FN_RET(0x00424fc0); r_esp += 12; return;
}

void f_004250a0(void) /* CaribbeanStudRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004250a0);
    /* 004250a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004250a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004250a3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004250a6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004250a9: mov dword ptr [ebp - 0x28], 0x149 */ W32((u32)(r_ebp+0xffffffd8u), 0x149u);
    /* 004250b0: mov dword ptr [ebp - 0x24], 0xdb */ W32((u32)(r_ebp+0xffffffdcu), 0xdbu);
    /* 004250b7: mov dword ptr [ebp - 0x20], 0x86 */ W32((u32)(r_ebp+0xffffffe0u), 0x86u);
    /* 004250be: mov dword ptr [ebp - 0x1c], 0xdb */ W32((u32)(r_ebp+0xffffffe4u), 0xdbu);
    /* 004250c5: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 004250cc: mov dword ptr [ebp - 0x14], 0x93 */ W32((u32)(r_ebp+0xffffffecu), 0x93u);
    /* 004250d3: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 004250da: mov dword ptr [ebp - 0xc], 0x93 */ W32((u32)(r_ebp+0xfffffff4u), 0x93u);
    /* 004250e1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004250e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004250ef: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004250f3: jge 0x42510d */ if ((fS==fO)) goto L_0042510d;
L_004250f5:; BB(0x004250f5);
    /* 004250f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004250f8: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 004250fc: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00425100: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00425103: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00425105: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425108: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042510b: jmp 0x425139 */ goto L_00425139;
L_0042510d:; BB(0x0042510d);
    /* 0042510d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0042510f: jne 0x425128 */ if (!fZ) goto L_00425128;
L_00425111:; BB(0x00425111);
    /* 00425111: push 0x1b9 */ { u32 v = 0x1b9u; r_esp -= 4; W32(r_esp, v); }
    /* 00425116: push 0x6b6558 */ { u32 v = 0x6b6558u; r_esp -= 4; W32(r_esp, v); }
    /* 0042511b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00425120: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x425125u); f_005e9f20();
    /* 00425125: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00425128:; BB(0x00425128);
    /* 00425128: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042512b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042512e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00425130: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425133: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00425136: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00425139:; BB(0x00425139);
    /* 00425139: mov esp, ebp */ r_esp = r_ebp;
    /* 0042513b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042513c: ret 8 */ FN_RET(0x004250a0); r_esp += 12; return;
}

