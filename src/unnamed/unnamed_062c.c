#include "protos.h"

void f_0062ccf0(void) /* sub_62CCF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ccf0);
    /* 0062ccf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ccf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ccf3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ccf6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062ccf9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062ccfc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062ccff: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0062cd02: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0062cd05: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd08: je 0x62cd14 */ if (fZ) goto L_0062cd14;
L_0062cd0a:; BB(0x0062cd0a);
    /* 0062cd0a: mov eax, 0xfffffffb */ r_eax = 0xfffffffbu;
    /* 0062cd0f: jmp 0x62cdc0 */ goto L_0062cdc0;
L_0062cd14:; BB(0x0062cd14);
    /* 0062cd14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062cd17: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0062cd1a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062cd1d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062cd1f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0062cd22: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062cd25: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062cd28: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd2a: je 0x62cd36 */ if (fZ) goto L_0062cd36;
L_0062cd2c:; BB(0x0062cd2c);
    /* 0062cd2c: mov eax, 0xfffffffb */ r_eax = 0xfffffffbu;
    /* 0062cd31: jmp 0x62cdc0 */ goto L_0062cdc0;
L_0062cd36:; BB(0x0062cd36);
    /* 0062cd36: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0062cd3d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0062cd44: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cd46: push 0x6d97b8 */ { u32 v = 0x6d97b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cd4b: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0062cd4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cd4f: call 0x6818d0 */ r_esp -= 4; W32(r_esp, 0x62cd54u); f_006818d0();
    /* 0062cd54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cd57: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062cd5a: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd5e: je 0x62cd65 */ if (fZ) goto L_0062cd65;
L_0062cd60:; BB(0x0062cd60);
    /* 0062cd60: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062cd63: jmp 0x62cdc0 */ goto L_0062cdc0;
L_0062cd65:; BB(0x0062cd65);
    /* 0062cd65: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cd67: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0062cd6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cd6b: call 0x681a00 */ r_esp -= 4; W32(r_esp, 0x62cd70u); f_00681a00();
    /* 0062cd70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cd73: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062cd76: cmp dword ptr [ebp - 0x3c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd7a: je 0x62cda6 */ if (fZ) goto L_0062cda6;
L_0062cd7c:; BB(0x0062cd7c);
    /* 0062cd7c: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0062cd7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cd80: call 0x682ff0 */ r_esp -= 4; W32(r_esp, 0x62cd85u); f_00682ff0();
    /* 0062cd85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cd88: cmp dword ptr [ebp - 0x3c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd8c: je 0x62cd9a */ if (fZ) goto L_0062cd9a;
L_0062cd8e:; BB(0x0062cd8e);
    /* 0062cd8e: cmp dword ptr [ebp - 0x3c], -5 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd92: jne 0x62cda1 */ if (!fZ) goto L_0062cda1;
L_0062cd94:; BB(0x0062cd94);
    /* 0062cd94: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cd98: jne 0x62cda1 */ if (!fZ) goto L_0062cda1;
L_0062cd9a:; BB(0x0062cd9a);
    /* 0062cd9a: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 0062cd9f: jmp 0x62cdc0 */ goto L_0062cdc0;
L_0062cda1:; BB(0x0062cda1);
    /* 0062cda1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0062cda4: jmp 0x62cdc0 */ goto L_0062cdc0;
L_0062cda6:; BB(0x0062cda6);
    /* 0062cda6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062cda9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062cdac: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062cdae: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0062cdb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cdb2: call 0x682ff0 */ r_esp -= 4; W32(r_esp, 0x62cdb7u); f_00682ff0();
    /* 0062cdb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cdba: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0062cdbd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_0062cdc0:; BB(0x0062cdc0);
    /* 0062cdc0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062cdc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062cdc3: ret  */ FN_RET(0x0062ccf0); r_esp += 4; return;
}

void f_0062ce00(void) /* sub_62CE00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ce00);
    /* 0062ce00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce01: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ce03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ce07: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0062ce0a: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062ce0d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062ce10: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0062ce13: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062ce16: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ce18: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062ce1b: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0062ce1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ce21: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ce24: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062ce27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ce2a: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0062ce2d: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062ce30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ce33: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0062ce36: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0062ce39: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062ce3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ce3e: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0062ce41: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062ce44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062ce46: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062ce49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ce4c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062ce4e: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0062ce51: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062ce53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ce56: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0062ce58: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ce5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ce5b: ret  */ FN_RET(0x0062ce00); r_esp += 4; return;
}

void f_0062ce60(void) /* sub_62CE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ce60);
    /* 0062ce60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce61: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ce63: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ce66: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062ce69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ce6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce6d: call dword ptr [0x6b21a0] */ { u32 t = R32((u32)(0x6b21a0u)); r_esp -= 4; W32(r_esp, 0x62ce73u); call_ind(t); }
    /* 0062ce73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ce76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062ce79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ce7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce7d: call 0x5ea5b0 */ r_esp -= 4; W32(r_esp, 0x62ce82u); f_005ea5b0();
    /* 0062ce82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ce85: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ce8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ce8e: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x62ce93u); f_005ea9c0();
    /* 0062ce93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ce96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ce99: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062ce9b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ce9e: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cea1: jne 0x62ceca */ if (!fZ) goto L_0062ceca;
L_0062cea3:; BB(0x0062cea3);
    /* 0062cea3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062cea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cea7: call dword ptr [0x6b22bc] */ { u32 t = R32((u32)(0x6b22bcu)); r_esp -= 4; W32(r_esp, 0x62ceadu); call_ind(t); }
    /* 0062cead: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ceb0: push 0x6d9880 */ { u32 v = 0x6d9880u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ceb5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062ceb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ceb9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62cebfu); call_ind(t); }
    /* 0062cebf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cec2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0062cec5: jmp 0x62d118 */ goto L_0062d118;
L_0062ceca:; BB(0x0062ceca);
    /* 0062ceca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062cecd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cece: call dword ptr [0x6b22bc] */ { u32 t = R32((u32)(0x6b22bcu)); r_esp -= 4; W32(r_esp, 0x62ced4u); call_ind(t); }
    /* 0062ced4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ced7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ced9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cedb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cede: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062cee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cee2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cee5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062cee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cee8: call 0x684ed0 */ r_esp -= 4; W32(r_esp, 0x62ceedu); f_00684ed0();
    /* 0062ceed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cef0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062cef3: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062cef7: jge 0x62cf31 */ if ((fS==fO)) goto L_0062cf31;
L_0062cef9:; BB(0x0062cef9);
    /* 0062cef9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cefc: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062cefe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ceff: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x62cf05u); call_ind(t); }
    /* 0062cf05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cf08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062cf0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf0f: call 0x62d750 */ r_esp -= 4; W32(r_esp, 0x62cf14u); f_0062d750();
    /* 0062cf14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf15: push 0x6d9860 */ { u32 v = 0x6d9860u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf1a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062cf1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf1e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62cf24u); call_ind(t); }
    /* 0062cf24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cf27: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0062cf2c: jmp 0x62d118 */ goto L_0062d118;
L_0062cf31:; BB(0x0062cf31);
    /* 0062cf31: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf36: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062cf39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf3a: call 0x685dd0 */ r_esp -= 4; W32(r_esp, 0x62cf3fu); f_00685dd0();
    /* 0062cf3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cf42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf45: mov dword ptr [edx + 0x2d8], eax */ W32((u32)(r_edx+0x2d8u), r_eax);
    /* 0062cf4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf4d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf50: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062cf53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cf54: call 0x685e10 */ r_esp -= 4; W32(r_esp, 0x62cf59u); f_00685e10();
    /* 0062cf59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cf5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf5f: mov dword ptr [ecx + 0x2dc], eax */ W32((u32)(r_ecx+0x2dcu), r_eax);
    /* 0062cf65: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf68: mov eax, dword ptr [edx + 0x2d8] */ r_eax = R32((u32)(r_edx+0x2d8u));
    /* 0062cf6e: cmp dword ptr [eax + 4], 1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cf72: jne 0x62cf83 */ if (!fZ) goto L_0062cf83;
L_0062cf74:; BB(0x0062cf74);
    /* 0062cf74: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf77: mov dword ptr [ecx + 0x2ec], 0x1101 */ W32((u32)(r_ecx+0x2ecu), 0x1101u);
    /* 0062cf81: jmp 0x62cf90 */ goto L_0062cf90;
L_0062cf83:; BB(0x0062cf83);
    /* 0062cf83: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cf86: mov dword ptr [edx + 0x2ec], 0x1103 */ W32((u32)(r_edx+0x2ecu), 0x1103u);
L_0062cf90:; BB(0x0062cf90);
    /* 0062cf90: call 0x68419c */ r_esp -= 4; W32(r_esp, 0x62cf95u); f_0068419c();
    /* 0062cf95: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062cf98: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062cf9c: jge 0x62d056 */ if ((fS==fO)) goto L_0062d056;
L_0062cfa2:; BB(0x0062cfa2);
    /* 0062cfa2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cfa5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062cfa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfa8: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x62cfaeu); call_ind(t); }
    /* 0062cfae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cfb1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062cfb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfb5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cfb8: call 0x62d750 */ r_esp -= 4; W32(r_esp, 0x62cfbdu); f_0062d750();
    /* 0062cfbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfbe: push 0x6d9844 */ { u32 v = 0x6d9844u; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062cfc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062cfc7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62cfcdu); call_ind(t); }
    /* 0062cfcd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062cfd0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cfd3: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cfd7: je 0x62cfe2 */ if (fZ) goto L_0062cfe2;
L_0062cfd9:; BB(0x0062cfd9);
    /* 0062cfd9: mov dword ptr [ebp - 0x14], 0x6d983c */ W32((u32)(r_ebp+0xffffffecu), 0x6d983cu);
    /* 0062cfe0: jmp 0x62cfe9 */ goto L_0062cfe9;
L_0062cfe2:; BB(0x0062cfe2);
    /* 0062cfe2: mov dword ptr [ebp - 0x14], 0x6d9834 */ W32((u32)(r_ebp+0xffffffecu), 0x6d9834u);
L_0062cfe9:; BB(0x0062cfe9);
    /* 0062cfe9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062cfec: cmp dword ptr [edx + 0x2dc], 0 */ {  u32 a = R32((u32)(r_edx+0x2dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062cff3: jne 0x62cffe */ if (!fZ) goto L_0062cffe;
L_0062cff5:; BB(0x0062cff5);
    /* 0062cff5: mov dword ptr [ebp - 0x18], 0x6d982c */ W32((u32)(r_ebp+0xffffffe8u), 0x6d982cu);
    /* 0062cffc: jmp 0x62d005 */ goto L_0062d005;
L_0062cffe:; BB(0x0062cffe);
    /* 0062cffe: mov dword ptr [ebp - 0x18], 0x6d981c */ W32((u32)(r_ebp+0xffffffe8u), 0x6d981cu);
L_0062d005:; BB(0x0062d005);
    /* 0062d005: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d008: cmp dword ptr [eax + 0x2d8], 0 */ {  u32 a = R32((u32)(r_eax+0x2d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d00f: jne 0x62d01a */ if (!fZ) goto L_0062d01a;
L_0062d011:; BB(0x0062d011);
    /* 0062d011: mov dword ptr [ebp - 0x1c], 0x6d982c */ W32((u32)(r_ebp+0xffffffe4u), 0x6d982cu);
    /* 0062d018: jmp 0x62d021 */ goto L_0062d021;
L_0062d01a:; BB(0x0062d01a);
    /* 0062d01a: mov dword ptr [ebp - 0x1c], 0x6d981c */ W32((u32)(r_ebp+0xffffffe4u), 0x6d981cu);
L_0062d021:; BB(0x0062d021);
    /* 0062d021: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062d024: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d025: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062d028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d029: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062d02c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d02d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062d030: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d031: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d034: call 0x62d750 */ r_esp -= 4; W32(r_esp, 0x62d039u); f_0062d750();
    /* 0062d039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d03a: push 0x6d97d0 */ { u32 v = 0x6d97d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d03f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062d042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d043: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62d049u); call_ind(t); }
    /* 0062d049: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d04c: mov eax, 0xfffffffd */ r_eax = 0xfffffffdu;
    /* 0062d051: jmp 0x62d118 */ goto L_0062d118;
L_0062d056:; BB(0x0062d056);
    /* 0062d056: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d057: fldz  */ FPUSH(0.0);
    /* 0062d059: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d05c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d05d: fldz  */ FPUSH(0.0);
    /* 0062d05f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d062: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d063: fldz  */ FPUSH(0.0);
    /* 0062d065: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d068: push 0x1004 */ { u32 v = 0x1004u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d06d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d070: mov ecx, dword ptr [eax + 0x2e8] */ r_ecx = R32((u32)(r_eax+0x2e8u));
    /* 0062d076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d077: call 0x6841f6 */ r_esp -= 4; W32(r_esp, 0x62d07cu); f_006841f6();
    /* 0062d07c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d07f: fldz  */ FPUSH(0.0);
    /* 0062d081: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d085: fldz  */ FPUSH(0.0);
    /* 0062d087: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d08a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d08b: fldz  */ FPUSH(0.0);
    /* 0062d08d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d090: push 0x1006 */ { u32 v = 0x1006u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d095: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d098: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0062d09e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d09f: call 0x6841f6 */ r_esp -= 4; W32(r_esp, 0x62d0a4u); f_006841f6();
    /* 0062d0a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d0a7: fldz  */ FPUSH(0.0);
    /* 0062d0a9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d0ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0ad: fldz  */ FPUSH(0.0);
    /* 0062d0af: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d0b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0b3: fldz  */ FPUSH(0.0);
    /* 0062d0b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d0b8: push 0x1005 */ { u32 v = 0x1005u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d0c0: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0062d0c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0c7: call 0x6841f6 */ r_esp -= 4; W32(r_esp, 0x62d0ccu); f_006841f6();
    /* 0062d0cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d0cf: fldz  */ FPUSH(0.0);
    /* 0062d0d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0062d0d4: push 0x1021 */ { u32 v = 0x1021u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d0dc: mov ecx, dword ptr [eax + 0x2e8] */ r_ecx = R32((u32)(r_eax+0x2e8u));
    /* 0062d0e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0e3: call 0x6841c0 */ r_esp -= 4; W32(r_esp, 0x62d0e8u); f_006841c0();
    /* 0062d0e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d0eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0ed: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062d0f5: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0062d0fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d0fc: call 0x6841ae */ r_esp -= 4; W32(r_esp, 0x62d101u); f_006841ae();
    /* 0062d101: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d104: push 0x6d97c0 */ { u32 v = 0x6d97c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d109: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062d10c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d10d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x62d113u); call_ind(t); }
    /* 0062d113: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062d116: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062d118:; BB(0x0062d118);
    /* 0062d118: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d11a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d11b: ret 8 */ FN_RET(0x0062ce60); r_esp += 12; return;
}

