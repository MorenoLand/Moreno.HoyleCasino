#include "protos.h"

void f_0066f8b0(void) /* Rewards::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f8b0);
    /* 0066f8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f8b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f8b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066f8b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f8bc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x66f8c1u); f_005e9e20();
    /* 0066f8c1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f8c4: mov dword ptr [eax], 0x6e0ee4 */ W32((u32)(r_eax), 0x6e0ee4u);
    /* 0066f8ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066f8d1: jmp 0x66f8dc */ goto L_0066f8dc;
L_0066f8d3:; BB(0x0066f8d3);
    /* 0066f8d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f8d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f8d9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0066f8dc:; BB(0x0066f8dc);
    /* 0066f8dc: cmp dword ptr [ebp - 4], 0x2bc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2bcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066f8e3: jge 0x66f8f5 */ if ((fS==fO)) goto L_0066f8f5;
L_0066f8e5:; BB(0x0066f8e5);
    /* 0066f8e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f8e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f8eb: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 0066f8f3: jmp 0x66f8d3 */ goto L_0066f8d3;
L_0066f8f5:; BB(0x0066f8f5);
    /* 0066f8f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f8f8: mov dword ptr [ecx + 0xaf4], 0 */ W32((u32)(r_ecx+0xaf4u), 0x0u);
    /* 0066f902: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f905: mov dword ptr [edx + 0xaf8], 0 */ W32((u32)(r_edx+0xaf8u), 0x0u);
    /* 0066f90f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f912: mov dword ptr [eax + 0xb00], 0xffffffff */ W32((u32)(r_eax+0xb00u), 0xffffffffu);
    /* 0066f91c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f91f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066f922: mov dword ptr [ecx + 0xafc], edx */ W32((u32)(r_ecx+0xafcu), r_edx);
    /* 0066f928: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f92b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f92d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f92e: ret 4 */ FN_RET(0x0066f8b0); r_esp += 8; return;
}

void f_0066f960(void) /* rewards::func_0066f960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f960);
    /* 0066f960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f961: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f963: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066f966: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066f96b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066f96d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066f970: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0066f973: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f976: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066f979: mov dword ptr [eax + 0xafc], ecx */ W32((u32)(r_eax+0xafcu), r_ecx);
    /* 0066f97f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f982: call 0x6705c0 */ r_esp -= 4; W32(r_esp, 0x66f987u); f_006705c0();
    /* 0066f987: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f98a: cmp dword ptr [edx + 0xb00], -1 */ {  u32 a = R32((u32)(r_edx+0xb00u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f991: jne 0x66f9b0 */ if (!fZ) goto L_0066f9b0;
L_0066f993:; BB(0x0066f993);
    /* 0066f993: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066f995: jne 0x66f9ab */ if (!fZ) goto L_0066f9ab;
L_0066f997:; BB(0x0066f997);
    /* 0066f997: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f999: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f99e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9a3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66f9a8u); f_005e9f20();
    /* 0066f9a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066f9ab:; BB(0x0066f9ab);
    /* 0066f9ab: jmp 0x66fa91 */ goto L_0066fa91;
L_0066f9b0:; BB(0x0066f9b0);
    /* 0066f9b0: push 0x6d8524 */ { u32 v = 0x6d8524u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066f9b8: call 0x66fab0 */ r_esp -= 4; W32(r_esp, 0x66f9bdu); f_0066fab0();
    /* 0066f9bd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066f9c0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066f9c4: jne 0x66f9e3 */ if (!fZ) goto L_0066f9e3;
L_0066f9c6:; BB(0x0066f9c6);
    /* 0066f9c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0066f9c8: jne 0x66f9de */ if (!fZ) goto L_0066f9de;
L_0066f9ca:; BB(0x0066f9ca);
    /* 0066f9ca: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9cc: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9d1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9d6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66f9dbu); f_005e9f20();
    /* 0066f9db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066f9de:; BB(0x0066f9de);
    /* 0066f9de: jmp 0x66fa91 */ goto L_0066fa91;
L_0066f9e3:; BB(0x0066f9e3);
    /* 0066f9e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f9e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9e9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9eb: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0066f9ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9ef: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66f9f5u); call_ind(t); }
    /* 0066f9f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066f9f8: push 0x6e0ee8 */ { u32 v = 0x6e0ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f9fd: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0066fa00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa01: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fa06u); f_00686ec0();
    /* 0066fa06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fa0b: je 0x66fa27 */ if (fZ) goto L_0066fa27;
L_0066fa0d:; BB(0x0066fa0d);
    /* 0066fa0d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066fa0f: jne 0x66fa25 */ if (!fZ) goto L_0066fa25;
L_0066fa11:; BB(0x0066fa11);
    /* 0066fa11: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa13: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa18: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa1d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66fa22u); f_005e9f20();
    /* 0066fa22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066fa25:; BB(0x0066fa25);
    /* 0066fa25: jmp 0x66fa91 */ goto L_0066fa91;
L_0066fa27:; BB(0x0066fa27);
    /* 0066fa27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fa2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa2d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa2f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0066fa32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa33: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66fa39u); call_ind(t); }
    /* 0066fa39: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fa3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa42: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa44: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066fa47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa48: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66fa4eu); call_ind(t); }
    /* 0066fa4e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066fa54: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066fa57: mov dword ptr [ecx + 0xaf4], edx */ W32((u32)(r_ecx+0xaf4u), r_edx);
    /* 0066fa5d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066fa60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066fa63: mov dword ptr [eax + 0xaf8], ecx */ W32((u32)(r_eax+0xaf8u), r_ecx);
    /* 0066fa69: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fa6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa6d: push 0x2bc */ { u32 v = 0x2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa72: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa74: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066fa77: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066fa7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa7b: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66fa81u); call_ind(t); }
    /* 0066fa81: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fa84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fa87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fa88: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66fa8eu); call_ind(t); }
    /* 0066fa8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066fa91:; BB(0x0066fa91);
    /* 0066fa91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066fa94: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fa96: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66fa9bu); f_00686d72();
    /* 0066fa9b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066fa9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066fa9e: ret 4 */ FN_RET(0x0066f960); r_esp += 8; return;
}

void f_0066fab0(void) /* rewards::func_0066fab0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066fab0);
    /* 0066fab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066fab3: sub esp, 0x438 */ {  u32 a = r_esp; u32 b = 0x438u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fab9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066fabe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fac0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066fac3: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 0066fac9: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0066fad0: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fad5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fad7: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 0066fadd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fade: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x66fae3u); f_00686fa2();
    /* 0066fae3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fae6: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066faec: cmp dword ptr [ecx + 0xb00], 0 */ {  u32 a = R32((u32)(r_ecx+0xb00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066faf3: jge 0x66fafc */ if ((fS==fO)) goto L_0066fafc;
L_0066faf5:; BB(0x0066faf5);
    /* 0066faf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066faf7: jmp 0x66fc43 */ goto L_0066fc43;
L_0066fafc:; BB(0x0066fafc);
    /* 0066fafc: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066fb02: mov eax, dword ptr [edx + 0xb00] */ r_eax = R32((u32)(r_edx+0xb00u));
    /* 0066fb08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb09: push 0x6dedac */ { u32 v = 0x6dedacu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb0e: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 0066fb14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb15: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66fb1bu); call_ind(t); }
    /* 0066fb1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fb1e: lea edx, [ebp - 0x430] */ r_edx = (u32)(r_ebp+0xfffffbd0u);
    /* 0066fb24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb25: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0066fb2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb2c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66fb31u); f_00686d8e();
    /* 0066fb31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fb34: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066fb37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb38: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066fb3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb3f: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66fb44u); f_005ea9c0();
    /* 0066fb44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fb47: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 0066fb4d: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fb54: jne 0x66fbb0 */ if (!fZ) goto L_0066fbb0;
L_0066fb56:; BB(0x0066fb56);
    /* 0066fb56: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066fb5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb5f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fb64u); f_00686ec0();
    /* 0066fb64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fb67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fb69: jne 0x66fb78 */ if (!fZ) goto L_0066fb78;
L_0066fb6b:; BB(0x0066fb6b);
    /* 0066fb6b: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fb71: jmp 0x66fc43 */ goto L_0066fc43;
L_0066fb78:; BB(0x0066fb78);
    /* 0066fb78: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066fb7e: call 0x66fe10 */ r_esp -= 4; W32(r_esp, 0x66fb83u); f_0066fe10();
    /* 0066fb83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066fb86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb87: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066fb8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fb8e: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66fb93u); f_005ea9c0();
    /* 0066fb93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fb96: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 0066fb9c: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fba3: jne 0x66fbb0 */ if (!fZ) goto L_0066fbb0;
L_0066fba5:; BB(0x0066fba5);
    /* 0066fba5: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fbab: jmp 0x66fc43 */ goto L_0066fc43;
L_0066fbb0:; BB(0x0066fbb0);
    /* 0066fbb0: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbb5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066fbb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbb9: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fbbeu); f_00686ec0();
    /* 0066fbbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fbc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fbc3: je 0x66fc29 */ if (fZ) goto L_0066fc29;
L_0066fbc5:; BB(0x0066fbc5);
    /* 0066fbc5: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fbcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbcc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbd0: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 0066fbd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbd7: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66fbddu); call_ind(t); }
    /* 0066fbdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fbe0: push 0x6e0ee8 */ { u32 v = 0x6e0ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbe5: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0066fbeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fbec: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fbf1u); f_00686ec0();
    /* 0066fbf1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fbf4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0066fbf6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0066fbf8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066fbfb: jne 0x66fc29 */ if (!fZ) goto L_0066fc29;
L_0066fbfd:; BB(0x0066fbfd);
    /* 0066fbfd: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fc03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc04: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66fc0au); call_ind(t); }
    /* 0066fc0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fc0d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0066fc0f: jne 0x66fc25 */ if (!fZ) goto L_0066fc25;
L_0066fc11:; BB(0x0066fc11);
    /* 0066fc11: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc13: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc18: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc1d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66fc22u); f_005e9f20();
    /* 0066fc22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066fc25:; BB(0x0066fc25);
    /* 0066fc25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fc27: jmp 0x66fc43 */ goto L_0066fc43;
L_0066fc29:; BB(0x0066fc29);
    /* 0066fc29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc2d: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fc33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc34: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x66fc3au); call_ind(t); }
    /* 0066fc3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fc3d: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
L_0066fc43:; BB(0x0066fc43);
    /* 0066fc43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fc46: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fc48: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66fc4du); f_00686d72();
    /* 0066fc4d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066fc4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066fc50: ret 4 */ FN_RET(0x0066fab0); r_esp += 8; return;
}

void f_0066fc60(void) /* rewards::func_0066fc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066fc60);
    /* 0066fc60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc61: mov ebp, esp */ r_ebp = r_esp;
    /* 0066fc63: sub esp, 0x438 */ {  u32 a = r_esp; u32 b = 0x438u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fc69: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066fc6e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fc70: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066fc73: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 0066fc79: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066fc7f: cmp dword ptr [eax + 0xb00], 0 */ {  u32 a = R32((u32)(r_eax+0xb00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066fc86: jge 0x66fc8f */ if ((fS==fO)) goto L_0066fc8f;
L_0066fc88:; BB(0x0066fc88);
    /* 0066fc88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fc8a: jmp 0x66fdd9 */ goto L_0066fdd9;
L_0066fc8f:; BB(0x0066fc8f);
    /* 0066fc8f: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066fc95: mov edx, dword ptr [ecx + 0xb00] */ r_edx = R32((u32)(r_ecx+0xb00u));
    /* 0066fc9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fc9c: push 0x6deda0 */ { u32 v = 0x6deda0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fca1: lea eax, [ebp - 0x430] */ r_eax = (u32)(r_ebp+0xfffffbd0u);
    /* 0066fca7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fca8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66fcaeu); call_ind(t); }
    /* 0066fcae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fcb1: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 0066fcb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fcb8: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066fcbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fcbf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66fcc4u); f_00686d8e();
    /* 0066fcc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fcc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066fcca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fccb: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066fcd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fcd2: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66fcd7u); f_005ea9c0();
    /* 0066fcd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fcda: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 0066fce0: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fce7: jne 0x66fd43 */ if (!fZ) goto L_0066fd43;
L_0066fce9:; BB(0x0066fce9);
    /* 0066fce9: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fcee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066fcf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fcf2: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fcf7u); f_00686ec0();
    /* 0066fcf7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fcfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fcfc: jne 0x66fd0b */ if (!fZ) goto L_0066fd0b;
L_0066fcfe:; BB(0x0066fcfe);
    /* 0066fcfe: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fd04: jmp 0x66fdd9 */ goto L_0066fdd9;
L_0066fd0b:; BB(0x0066fd0b);
    /* 0066fd0b: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0066fd11: call 0x66ff30 */ r_esp -= 4; W32(r_esp, 0x66fd16u); f_0066ff30();
    /* 0066fd16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066fd19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd1a: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0066fd20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd21: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x66fd26u); f_005ea9c0();
    /* 0066fd26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fd29: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 0066fd2f: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fd36: jne 0x66fd43 */ if (!fZ) goto L_0066fd43;
L_0066fd38:; BB(0x0066fd38);
    /* 0066fd38: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fd3e: jmp 0x66fdd9 */ goto L_0066fdd9;
L_0066fd43:; BB(0x0066fd43);
    /* 0066fd43: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd48: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066fd4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd4c: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fd51u); f_00686ec0();
    /* 0066fd51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fd54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fd56: je 0x66fdbf */ if (fZ) goto L_0066fdbf;
L_0066fd58:; BB(0x0066fd58);
    /* 0066fd58: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fd5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd63: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 0066fd69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd6a: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66fd70u); call_ind(t); }
    /* 0066fd70: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fd73: push 0x6e0f0c */ { u32 v = 0x6e0f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd78: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 0066fd7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd7f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x66fd84u); f_00686ec0();
    /* 0066fd84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fd87: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0066fd89: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0066fd8b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066fd8e: jne 0x66fdbf */ if (!fZ) goto L_0066fdbf;
L_0066fd90:; BB(0x0066fd90);
    /* 0066fd90: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fd96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fd97: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66fd9du); call_ind(t); }
    /* 0066fd9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fda0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066fda2: jne 0x66fdbb */ if (!fZ) goto L_0066fdbb;
L_0066fda4:; BB(0x0066fda4);
    /* 0066fda4: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 0066fda9: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdae: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdb3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66fdb8u); f_005e9f20();
    /* 0066fdb8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066fdbb:; BB(0x0066fdbb);
    /* 0066fdbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fdbd: jmp 0x66fdd9 */ goto L_0066fdd9;
L_0066fdbf:; BB(0x0066fdbf);
    /* 0066fdbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdc3: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 0066fdc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdca: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x66fdd0u); call_ind(t); }
    /* 0066fdd0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fdd3: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
L_0066fdd9:; BB(0x0066fdd9);
    /* 0066fdd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fddc: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066fdde: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66fde3u); f_00686d72();
    /* 0066fde3: mov esp, ebp */ r_esp = r_ebp;
    /* 0066fde5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066fde6: ret 4 */ FN_RET(0x0066fc60); r_esp += 8; return;
}

void f_0066fe10(void) /* rewards::func_0066fe10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066fe10);
    /* 0066fe10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe11: mov ebp, esp */ r_ebp = r_esp;
    /* 0066fe13: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fe16: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066fe1b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066fe1d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066fe20: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0066fe23: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066fe26: call 0x6705c0 */ r_esp -= 4; W32(r_esp, 0x66fe2bu); f_006705c0();
    /* 0066fe2b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066fe2e: cmp dword ptr [eax + 0xb00], -1 */ {  u32 a = R32((u32)(r_eax+0xb00u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fe35: jne 0x66fe57 */ if (!fZ) goto L_0066fe57;
L_0066fe37:; BB(0x0066fe37);
    /* 0066fe37: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066fe39: jne 0x66fe52 */ if (!fZ) goto L_0066fe52;
L_0066fe3b:; BB(0x0066fe3b);
    /* 0066fe3b: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe40: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe45: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe4a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66fe4fu); f_005e9f20();
    /* 0066fe4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066fe52:; BB(0x0066fe52);
    /* 0066fe52: jmp 0x66ff1f */ goto L_0066ff1f;
L_0066fe57:; BB(0x0066fe57);
    /* 0066fe57: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe5c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066fe5f: call 0x66fab0 */ r_esp -= 4; W32(r_esp, 0x66fe64u); f_0066fab0();
    /* 0066fe64: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066fe67: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066fe6b: jne 0x66fe8d */ if (!fZ) goto L_0066fe8d;
L_0066fe6d:; BB(0x0066fe6d);
    /* 0066fe6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066fe6f: jne 0x66fe88 */ if (!fZ) goto L_0066fe88;
L_0066fe71:; BB(0x0066fe71);
    /* 0066fe71: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe76: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe7b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe80: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66fe85u); f_005e9f20();
    /* 0066fe85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066fe88:; BB(0x0066fe88);
    /* 0066fe88: jmp 0x66ff1f */ goto L_0066ff1f;
L_0066fe8d:; BB(0x0066fe8d);
    /* 0066fe8d: push 0x6e0ee8 */ { u32 v = 0x6e0ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe92: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0066fe95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fe96: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66fe9bu); f_00686d8e();
    /* 0066fe9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fe9e: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fea3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066fea9: call 0x634420 */ r_esp -= 4; W32(r_esp, 0x66feaeu); f_00634420();
    /* 0066feae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066feb1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0066feb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066febb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066febc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066febe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fec0: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0066fec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fec4: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66fecau); call_ind(t); }
    /* 0066feca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fecd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fed0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fed1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fed3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fed5: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0066fed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fed9: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66fedfu); call_ind(t); }
    /* 0066fedf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fee2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fee6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fee8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066feea: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0066feed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066feee: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66fef4u); call_ind(t); }
    /* 0066fef4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066fef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fefa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066fefb: push 0x2bc */ { u32 v = 0x2bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff00: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff02: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066ff05: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ff08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff09: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66ff0fu); call_ind(t); }
    /* 0066ff0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ff12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ff15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff16: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66ff1cu); call_ind(t); }
    /* 0066ff1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066ff1f:; BB(0x0066ff1f);
    /* 0066ff1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ff22: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ff24: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66ff29u); f_00686d72();
    /* 0066ff29: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ff2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ff2c: ret  */ FN_RET(0x0066fe10); r_esp += 4; return;
}

void f_0066ff30(void) /* rewards::func_0066ff30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ff30);
    /* 0066ff30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff31: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ff33: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ff36: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066ff3b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ff3d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066ff40: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0066ff43: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066ff46: call 0x6705c0 */ r_esp -= 4; W32(r_esp, 0x66ff4bu); f_006705c0();
    /* 0066ff4b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066ff4e: cmp dword ptr [eax + 0xb00], -1 */ {  u32 a = R32((u32)(r_eax+0xb00u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ff55: jne 0x66ff74 */ if (!fZ) goto L_0066ff74;
L_0066ff57:; BB(0x0066ff57);
    /* 0066ff57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0066ff59: jne 0x66ff72 */ if (!fZ) goto L_0066ff72;
L_0066ff5b:; BB(0x0066ff5b);
    /* 0066ff5b: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff60: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff65: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff6a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66ff6fu); f_005e9f20();
    /* 0066ff6f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066ff72:; BB(0x0066ff72);
    /* 0066ff72: jmp 0x66ffda */ goto L_0066ffda;
L_0066ff74:; BB(0x0066ff74);
    /* 0066ff74: push 0x6da58c */ { u32 v = 0x6da58cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff79: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066ff7c: call 0x66fc60 */ r_esp -= 4; W32(r_esp, 0x66ff81u); f_0066fc60();
    /* 0066ff81: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066ff84: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ff88: jne 0x66ffa7 */ if (!fZ) goto L_0066ffa7;
L_0066ff8a:; BB(0x0066ff8a);
    /* 0066ff8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066ff8c: jne 0x66ffa5 */ if (!fZ) goto L_0066ffa5;
L_0066ff8e:; BB(0x0066ff8e);
    /* 0066ff8e: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff93: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff98: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ff9d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66ffa2u); f_005e9f20();
    /* 0066ffa2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066ffa5:; BB(0x0066ffa5);
    /* 0066ffa5: jmp 0x66ffda */ goto L_0066ffda;
L_0066ffa7:; BB(0x0066ffa7);
    /* 0066ffa7: push 0x6e0f0c */ { u32 v = 0x6e0f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffac: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0066ffaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffb0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x66ffb5u); f_00686d8e();
    /* 0066ffb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ffb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ffbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffbc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffc0: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0066ffc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffc4: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66ffcau); call_ind(t); }
    /* 0066ffca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ffcd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ffd0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ffd1: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66ffd7u); call_ind(t); }
    /* 0066ffd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066ffda:; BB(0x0066ffda);
    /* 0066ffda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066ffdd: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066ffdf: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66ffe4u); f_00686d72();
    /* 0066ffe4: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ffe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ffe7: ret  */ FN_RET(0x0066ff30); r_esp += 4; return;
}

void f_0066fff0(void) /* rewards::func_0066fff0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066fff0);
    /* 0066fff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fff1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066fff3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066fff6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0066fff9: push 0x6da4f0 */ { u32 v = 0x6da4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066fffe: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00670001: call 0x66fc60 */ r_esp -= 4; W32(r_esp, 0x670006u); f_0066fc60();
    /* 00670006: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00670009: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067000d: jne 0x670031 */ if (!fZ) goto L_00670031;
L_0067000f:; BB(0x0067000f);
    /* 0067000f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00670011: jne 0x67002a */ if (!fZ) goto L_0067002a;
L_00670013:; BB(0x00670013);
    /* 00670013: push 0xed */ { u32 v = 0xedu; r_esp -= 4; W32(r_esp, v); }
    /* 00670018: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067001d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00670022: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x670027u); f_005e9f20();
    /* 00670027: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067002a:; BB(0x0067002a);
    /* 0067002a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067002c: jmp 0x670193 */ goto L_00670193;
L_00670031:; BB(0x00670031);
    /* 00670031: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00670033: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670035: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00670038: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670039: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x67003fu); call_ind(t); }
    /* 0067003f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670042: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670045: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00670048: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0067004b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067004c: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x670052u); call_ind(t); }
    /* 00670052: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670055: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00670058: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0067005b: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0067005e: mov byte ptr [ebp - 0x18], dl */ W8((u32)(r_ebp+0xffffffe8u), (u8)r_edx);
    /* 00670061: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00670064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670065: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670067: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00670069: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0067006c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067006d: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x670073u); call_ind(t); }
    /* 00670073: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670076: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00670079: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067007a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x670080u); call_ind(t); }
    /* 00670080: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670083: push 0x6da4f0 */ { u32 v = 0x6da4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670088: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067008b: call 0x66fab0 */ r_esp -= 4; W32(r_esp, 0x670090u); f_0066fab0();
    /* 00670090: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00670093: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670097: jne 0x6700bb */ if (!fZ) goto L_006700bb;
L_00670099:; BB(0x00670099);
    /* 00670099: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0067009b: jne 0x6700b4 */ if (!fZ) goto L_006700b4;
L_0067009d:; BB(0x0067009d);
    /* 0067009d: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 006700a2: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 006700a7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006700ac: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6700b1u); f_005e9f20();
    /* 006700b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006700b4:; BB(0x006700b4);
    /* 006700b4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006700b6: jmp 0x670193 */ goto L_00670193;
L_006700bb:; BB(0x006700bb);
    /* 006700bb: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 006700be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006700bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006700c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006700c3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006700c6: call 0x670520 */ r_esp -= 4; W32(r_esp, 0x6700cbu); f_00670520();
    /* 006700cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006700cd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006700cf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006700d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006700d3: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x6700d9u); call_ind(t); }
    /* 006700d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006700dc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006700df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006700e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006700e2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006700e4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006700e7: add eax, 0xaf4 */ {  u32 a = r_eax; u32 b = 0xaf4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006700ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006700ed: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x6700f3u); call_ind(t); }
    /* 006700f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006700f6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006700f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006700fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006700fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006700fe: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00670101: add edx, 0xaf8 */ {  u32 a = r_edx; u32 b = 0xaf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00670107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670108: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x67010eu); call_ind(t); }
    /* 0067010e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670111: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670115: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067011b: call 0x634560 */ r_esp -= 4; W32(r_esp, 0x670120u); f_00634560();
    /* 00670120: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670123: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670125: jne 0x67013f */ if (!fZ) goto L_0067013f;
L_00670127:; BB(0x00670127);
    /* 00670127: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067012d: call 0x6344d0 */ r_esp -= 4; W32(r_esp, 0x670132u); f_006344d0();
    /* 00670132: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00670135: lea eax, [edx + eax - 0x3e8] */ r_eax = (u32)(r_edx+r_eax+0xfffffc18u);
    /* 0067013c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0067013f:; BB(0x0067013f);
    /* 0067013f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00670142: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670143: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00670146: call 0x6704e0 */ r_esp -= 4; W32(r_esp, 0x67014bu); f_006704e0();
    /* 0067014b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0067014e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670150: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00670153: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00670156: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670157: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067015a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067015b: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x670161u); call_ind(t); }
    /* 00670161: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670164: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00670167: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670168: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067016a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067016c: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0067016f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670170: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x670176u); call_ind(t); }
    /* 00670176: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670179: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067017c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067017d: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x670183u); call_ind(t); }
    /* 00670183: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00670186: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067018c: call 0x634c70 */ r_esp -= 4; W32(r_esp, 0x670191u); f_00634c70();
    /* 00670191: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00670193:; BB(0x00670193);
    /* 00670193: mov esp, ebp */ r_esp = r_ebp;
    /* 00670195: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670196: ret 0xc */ FN_RET(0x0066fff0); r_esp += 16; return;
}

void f_00670380(void) /* rewards::func_00670380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670380);
    /* 00670380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670381: mov ebp, esp */ r_ebp = r_esp;
    /* 00670383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067038a: mov ecx, dword ptr [eax + 0xaf4] */ r_ecx = R32((u32)(r_eax+0xaf4u));
    /* 00670390: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00670393: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670396: mov dword ptr [edx + 0xaf4], ecx */ W32((u32)(r_edx+0xaf4u), r_ecx);
    /* 0067039c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067039f: cmp dword ptr [eax + 0xaf4], 0 */ {  u32 a = R32((u32)(r_eax+0xaf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006703a6: jge 0x6703bf */ if ((fS==fO)) goto L_006703bf;
L_006703a8:; BB(0x006703a8);
    /* 006703a8: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 006703ad: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 006703b2: push 0x6e0f14 */ { u32 v = 0x6e0f14u; r_esp -= 4; W32(r_esp, v); }
    /* 006703b7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6703bcu); f_005e9f20();
    /* 006703bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006703bf:; BB(0x006703bf);
    /* 006703bf: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006703c3: jle 0x6703da */ if ((fZ||fS!=fO)) goto L_006703da;
L_006703c5:; BB(0x006703c5);
    /* 006703c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006703c8: mov eax, dword ptr [edx + 0xaf8] */ r_eax = R32((u32)(r_edx+0xaf8u));
    /* 006703ce: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006703d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006703d4: mov dword ptr [ecx + 0xaf8], eax */ W32((u32)(r_ecx+0xaf8u), r_eax);
L_006703da:; BB(0x006703da);
    /* 006703da: mov esp, ebp */ r_esp = r_ebp;
    /* 006703dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006703dd: ret 4 */ FN_RET(0x00670380); r_esp += 8; return;
}

void f_006704e0(void) /* rewards::func_006704e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006704e0);
    /* 006704e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006704e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006704e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006704e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006704e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006704eb: jl 0x6704f6 */ if ((fS!=fO)) goto L_006704f6;
L_006704ed:; BB(0x006704ed);
    /* 006704ed: cmp dword ptr [ebp + 8], 0x2bc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2bcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006704f4: jl 0x67050d */ if ((fS!=fO)) goto L_0067050d;
L_006704f6:; BB(0x006704f6);
    /* 006704f6: push 0x17b */ { u32 v = 0x17bu; r_esp -= 4; W32(r_esp, v); }
    /* 006704fb: push 0x6e0ef0 */ { u32 v = 0x6e0ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670500: push 0x6e0f24 */ { u32 v = 0x6e0f24u; r_esp -= 4; W32(r_esp, v); }
    /* 00670505: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x67050au); f_005e9f20();
    /* 0067050a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0067050d:; BB(0x0067050d);
    /* 0067050d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00670510: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670513: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00670517: mov esp, ebp */ r_esp = r_ebp;
    /* 00670519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067051a: ret 4 */ FN_RET(0x006704e0); r_esp += 8; return;
}

