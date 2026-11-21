#include "protos.h"

void f_00655a60(void) /* MusicListText::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00655a60);
    /* 00655a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00655a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00655a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655a65: push 0x6ac5b2 */ { u32 v = 0x6ac5b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00655a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00655a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655a71: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00655a74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00655a79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00655a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655a7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00655a7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00655a85: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00655a88: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655a8a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655a8d: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655a92u); f_005fb720();
    /* 00655a92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655a94: jne 0x655aad */ if (!fZ) goto L_00655aad;
L_00655a96:; BB(0x00655a96);
    /* 00655a96: push 0x1b1 */ { u32 v = 0x1b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00655a9b: push 0x6de0bc */ { u32 v = 0x6de0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00655aa0: push 0x6de094 */ { u32 v = 0x6de094u; r_esp -= 4; W32(r_esp, v); }
    /* 00655aa5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x655aaau); f_005e9f20();
    /* 00655aaa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00655aad:; BB(0x00655aad);
    /* 00655aad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00655ab4: jmp 0x655abf */ goto L_00655abf;
L_00655ab6:; BB(0x00655ab6);
    /* 00655ab6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00655ab9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00655abc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00655abf:; BB(0x00655abf);
    /* 00655abf: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00655ac5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00655ac7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655acd: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00655ad3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x655ad5u); call_ind(t); }
    /* 00655ad5: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00655ad8: jge 0x655b87 */ if ((fS==fO)) goto L_00655b87;
L_00655ade:; BB(0x00655ade);
    /* 00655ade: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00655ae0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x655ae5u); f_00686d82();
    /* 00655ae5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655ae8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00655aeb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00655af2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655af6: je 0x655b11 */ if (fZ) goto L_00655b11;
L_00655af8:; BB(0x00655af8);
    /* 00655af8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655afb: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x655b00u); f_00629ab0();
    /* 00655b00: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655b03: mov dword ptr [eax], 0x6de084 */ W32((u32)(r_eax), 0x6de084u);
    /* 00655b09: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00655b0c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00655b0f: jmp 0x655b18 */ goto L_00655b18;
L_00655b11:; BB(0x00655b11);
    /* 00655b11: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00655b18:; BB(0x00655b18);
    /* 00655b18: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00655b1b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00655b1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00655b25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00655b28: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00655b2b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00655b2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655b2f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00655b35: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00655b37: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655b3d: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00655b43: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x655b45u); call_ind(t); }
    /* 00655b45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655b48: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00655b4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655b4d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655b4f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655b52: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00655b55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655b56: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655b5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00655b5e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00655b64: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00655b6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x655b6cu); call_ind(t); }
    /* 00655b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655b6d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655b70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655b71: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655b73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655b76: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655b7bu); f_005fb720();
    /* 00655b7b: mov ecx, eax */ r_ecx = r_eax;
    /* 00655b7d: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x655b82u); f_00628980();
    /* 00655b82: jmp 0x655ab6 */ goto L_00655ab6;
L_00655b87:; BB(0x00655b87);
    /* 00655b87: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655b89: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655b8c: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655b91u); f_005fb720();
    /* 00655b91: mov ecx, eax */ r_ecx = r_eax;
    /* 00655b93: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x655b98u); f_00628d80();
    /* 00655b98: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00655b9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x655b9fu); f_00686d82();
    /* 00655b9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655ba2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00655ba5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00655bac: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00655bb0: je 0x655bcb */ if (fZ) goto L_00655bcb;
L_00655bb2:; BB(0x00655bb2);
    /* 00655bb2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655bb5: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x655bbau); f_00629ab0();
    /* 00655bba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655bbd: mov dword ptr [edx], 0x6de084 */ W32((u32)(r_edx), 0x6de084u);
    /* 00655bc3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00655bc6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00655bc9: jmp 0x655bd2 */ goto L_00655bd2;
L_00655bcb:; BB(0x00655bcb);
    /* 00655bcb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00655bd2:; BB(0x00655bd2);
    /* 00655bd2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00655bd5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00655bd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00655bdf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00655be2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00655be5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00655be8: mov dword ptr [eax + 0x14], 0xffffffff */ W32((u32)(r_eax+0x14u), 0xffffffffu);
    /* 00655bef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00655bf1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00655bf3: push 0x6de06c */ { u32 v = 0x6de06cu; r_esp -= 4; W32(r_esp, v); }
    /* 00655bf8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x655bfdu); f_00630f40();
    /* 00655bfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00655c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00655c01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00655c04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00655c05: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00655c07: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00655c0a: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x655c0fu); f_005fb720();
    /* 00655c0f: mov ecx, eax */ r_ecx = r_eax;
    /* 00655c11: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x655c16u); f_00628980();
    /* 00655c16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00655c19: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00655c20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00655c21: mov esp, ebp */ r_esp = r_ebp;
    /* 00655c23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00655c24: ret  */ FN_RET(0x00655a60); r_esp += 4; return;
}

