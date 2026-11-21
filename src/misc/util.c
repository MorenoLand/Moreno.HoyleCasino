#include "protos.h"

void f_0062fbf0(void) /* util::func_0062fbf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fbf0);
    /* 0062fbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fbf3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fbf7: jge 0x62fc17 */ if ((fS==fO)) goto L_0062fc17;
L_0062fbf9:; BB(0x0062fbf9);
    /* 0062fbf9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fbfd: jge 0x62fc13 */ if ((fS==fO)) goto L_0062fc13;
L_0062fbff:; BB(0x0062fbff);
    /* 0062fbff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc01: push 0x6d9d04 */ { u32 v = 0x6d9d04u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc06: push 0x6d9cf8 */ { u32 v = 0x6d9cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc0b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62fc10u); f_005e9f20();
    /* 0062fc10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062fc13:; BB(0x0062fc13);
    /* 0062fc13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fc15: jmp 0x62fc23 */ goto L_0062fc23;
L_0062fc17:; BB(0x0062fc17);
    /* 0062fc17: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062fc1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc1b: call 0x62fba0 */ r_esp -= 4; W32(r_esp, 0x62fc20u); f_0062fba0();
    /* 0062fc20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062fc23:; BB(0x0062fc23);
    /* 0062fc23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fc24: ret  */ FN_RET(0x0062fbf0); r_esp += 4; return;
}

void f_0062fde0(void) /* util::func_0062fde0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fde0);
    /* 0062fde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fde3: sub esp, 0x810 */ {  u32 a = r_esp; u32 b = 0x810u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062fde9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062fdee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fdf0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062fdf3: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0062fdf6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062fdf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062fdfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fdfd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062fe00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe01: lea eax, [ebp - 0x810] */ r_eax = (u32)(r_ebp+0xfffff7f0u);
    /* 0062fe07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe08: call dword ptr [0x6b2180] */ { u32 t = R32((u32)(0x6b2180u)); r_esp -= 4; W32(r_esp, 0x62fe0eu); call_ind(t); }
    /* 0062fe0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe11: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062fe14: cmp dword ptr [ebp - 8], 0x7ff */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fe1b: jl 0x62fe34 */ if ((fS!=fO)) goto L_0062fe34;
L_0062fe1d:; BB(0x0062fe1d);
    /* 0062fe1d: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe22: push 0x6d9d04 */ { u32 v = 0x6d9d04u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe27: push 0x6d9d1c */ { u32 v = 0x6d9d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe2c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62fe31u); f_005e9f20();
    /* 0062fe31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062fe34:; BB(0x0062fe34);
    /* 0062fe34: lea edx, [ebp - 0x810] */ r_edx = (u32)(r_ebp+0xfffff7f0u);
    /* 0062fe3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe3b: call 0x62fe60 */ r_esp -= 4; W32(r_esp, 0x62fe40u); f_0062fe60();
    /* 0062fe40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fe43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062fe4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062fe4d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fe4f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62fe54u); f_00686d72();
    /* 0062fe54: mov esp, ebp */ r_esp = r_ebp;
    /* 0062fe56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fe57: ret  */ FN_RET(0x0062fde0); r_esp += 4; return;
}

void f_00630f40(void) /* util::func_00630f40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630f40);
    /* 00630f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00630f43: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630f4a: jne 0x630f63 */ if (!fZ) goto L_00630f63;
L_00630f4c:; BB(0x00630f4c);
    /* 00630f4c: push 0x2a2 */ { u32 v = 0x2a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00630f51: push 0x6d9d04 */ { u32 v = 0x6d9d04u; r_esp -= 4; W32(r_esp, v); }
    /* 00630f56: push 0x6d9d8c */ { u32 v = 0x6d9d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00630f5b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x630f60u); f_005e9f20();
    /* 00630f60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00630f63:; BB(0x00630f63);
    /* 00630f63: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00630f66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630f67: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00630f6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00630f6f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630f75: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00630f78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x630f7au); call_ind(t); }
    /* 00630f7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630f7b: ret  */ FN_RET(0x00630f40); r_esp += 4; return;
}

void f_00630f80(void) /* util::func_00630f80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00630f80);
    /* 00630f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00630f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00630f83: sub esp, 0x120 */ {  u32 a = r_esp; u32 b = 0x120u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00630f89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00630f8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00630f90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00630f93: cmp dword ptr [0x162ee84], 0 */ {  u32 a = R32((u32)(0x162ee84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00630f9a: jne 0x630fb3 */ if (!fZ) goto L_00630fb3;
L_00630f9c:; BB(0x00630f9c);
    /* 00630f9c: push 0x2a8 */ { u32 v = 0x2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00630fa1: push 0x6d9d04 */ { u32 v = 0x6d9d04u; r_esp -= 4; W32(r_esp, v); }
    /* 00630fa6: push 0x6d9d8c */ { u32 v = 0x6d9d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00630fab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x630fb0u); f_005e9f20();
    /* 00630fb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00630fb3:; BB(0x00630fb3);
    /* 00630fb3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00630fb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630fb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00630fba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00630fbb: push 0x6d9d94 */ { u32 v = 0x6d9d94u; r_esp -= 4; W32(r_esp, v); }
    /* 00630fc0: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 00630fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00630fc7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x630fcdu); call_ind(t); }
    /* 00630fcd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630fd0: lea ecx, [ebp - 0x120] */ r_ecx = (u32)(r_ebp+0xfffffee0u);
    /* 00630fd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00630fd7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00630fdd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00630fdf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00630fe5: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00630fe8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x630feau); call_ind(t); }
    /* 00630fea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00630fed: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00630fef: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x630ff4u); f_00686d72();
    /* 00630ff4: mov esp, ebp */ r_esp = r_ebp;
    /* 00630ff6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00630ff7: ret  */ FN_RET(0x00630f80); r_esp += 4; return;
}

