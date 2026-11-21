#include "protos.h"

void f_005aea50(void) /* sub_5AEA50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aea50);
    /* 005aea50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aea51: mov ebp, esp */ r_ebp = r_esp;
    /* 005aea53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aea54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005aea57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aea5a: movzx ecx, byte ptr [eax + 0xb] */ r_ecx = (u32)R8((u32)(r_eax+0xbu));
    /* 005aea5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aea60: jne 0x5aea98 */ if (!fZ) goto L_005aea98;
L_005aea62:; BB(0x005aea62);
    /* 005aea62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aea65: mov byte ptr [edx + 0xb], 1 */ W8((u32)(r_edx+0xbu), 0x1u);
    /* 005aea69: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aea6b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005aea6d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aea73: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5aea78u); f_005b7310();
    /* 005aea78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aea7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aea7c: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005aea81: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aea84: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005aea8a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aea8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aea8f: mov ecx, eax */ r_ecx = r_eax;
    /* 005aea91: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aea94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aea96u); call_ind(t); }
    /* 005aea96: jmp 0x5aeb13 */ goto L_005aeb13;
L_005aea98:; BB(0x005aea98);
    /* 005aea98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aea9b: movzx edx, byte ptr [ecx + 0xe] */ r_edx = (u32)R8((u32)(r_ecx+0xeu));
    /* 005aea9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeaa1: jne 0x5aeada */ if (!fZ) goto L_005aeada;
L_005aeaa3:; BB(0x005aeaa3);
    /* 005aeaa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aeaa6: mov byte ptr [eax + 0xe], 1 */ W8((u32)(r_eax+0xeu), 0x1u);
    /* 005aeaaa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aeaad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aeaae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeab0: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aeab6: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5aeabbu); f_005b7310();
    /* 005aeabb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeabd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeabf: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005aeac5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aeac8: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aeace: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005aead1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aead3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aead6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aead8u); call_ind(t); }
    /* 005aead8: jmp 0x5aeb13 */ goto L_005aeb13;
L_005aeada:; BB(0x005aeada);
    /* 005aeada: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aeadd: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 005aeae1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aeae4: mov byte ptr [edx + 0xe], 0 */ W8((u32)(r_edx+0xeu), 0x0u);
    /* 005aeae8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aeaeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aeaec: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aeaf2: call 0x5b3e60 */ r_esp -= 4; W32(r_esp, 0x5aeaf7u); f_005b3e60();
    /* 005aeaf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeaf9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeafb: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aeb01: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005aeb04: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005aeb09: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aeb0c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aeb0e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aeb11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aeb13u); call_ind(t); }
L_005aeb13:; BB(0x005aeb13);
    /* 005aeb13: mov esp, ebp */ r_esp = r_ebp;
    /* 005aeb15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aeb16: ret 4 */ FN_RET(0x005aea50); r_esp += 8; return;
}

void f_005aeb20(void) /* sub_5AEB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aeb20);
    /* 005aeb20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aeb21: mov ebp, esp */ r_ebp = r_esp;
    /* 005aeb23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aeb26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005aeb29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aeb30: jmp 0x5aeb3b */ goto L_005aeb3b;
L_005aeb32:; BB(0x005aeb32);
    /* 005aeb32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aeb35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005aeb38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005aeb3b:; BB(0x005aeb3b);
    /* 005aeb3b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aeb3f: jge 0x5aeb4d */ if ((fS==fO)) goto L_005aeb4d;
L_005aeb41:; BB(0x005aeb41);
    /* 005aeb41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005aeb44: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005aeb47: mov byte ptr [ecx + 0x14], 0 */ W8((u32)(r_ecx+0x14u), 0x0u);
    /* 005aeb4b: jmp 0x5aeb32 */ goto L_005aeb32;
L_005aeb4d:; BB(0x005aeb4d);
    /* 005aeb4d: mov esp, ebp */ r_esp = r_ebp;
    /* 005aeb4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aeb50: ret  */ FN_RET(0x005aeb20); r_esp += 4; return;
}

void f_005aeb60(void) /* sub_5AEB60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aeb60);
    /* 005aeb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aeb61: mov ebp, esp */ r_ebp = r_esp;
    /* 005aeb63: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aeb66: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005aeb69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aeb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aeb6d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aeb72u); f_005dcb00();
    /* 005aeb72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aeb75: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005aeb78: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeb7b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5aeb80u); f_0063aac0();
    /* 005aeb80: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005aeb82: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005aeb85: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeb89: je 0x5aeba7 */ if (fZ) goto L_005aeba7;
L_005aeb8b:; BB(0x005aeb8b);
    /* 005aeb8b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeb8e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5aeb93u); f_0063aac0();
    /* 005aeb93: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aeb95: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005aeb98: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeb9c: je 0x5aeba7 */ if (fZ) goto L_005aeba7;
L_005aeb9e:; BB(0x005aeb9e);
    /* 005aeb9e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005aeba5: jmp 0x5aebae */ goto L_005aebae;
L_005aeba7:; BB(0x005aeba7);
    /* 005aeba7: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_005aebae:; BB(0x005aebae);
    /* 005aebae: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 005aebb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aebb4: je 0x5aeca0 */ if (fZ) goto L_005aeca0;
L_005aebba:; BB(0x005aebba);
    /* 005aebba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aebbc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005aebc2: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5aebc7u); f_005df700();
    /* 005aebc7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005aebca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aebcc: je 0x5aebfa */ if (fZ) goto L_005aebfa;
L_005aebce:; BB(0x005aebce);
    /* 005aebce: push 0x753238 */ { u32 v = 0x753238u; r_esp -= 4; W32(r_esp, v); }
    /* 005aebd3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005aebd5: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005aebdb: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5aebe0u); f_0057ab80();
    /* 005aebe0: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005aebe6: mov eax, dword ptr [edx + 0x5c8] */ r_eax = R32((u32)(r_edx+0x5c8u));
    /* 005aebec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aebed: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aebf3: call 0x5b7a70 */ r_esp -= 4; W32(r_esp, 0x5aebf8u); f_005b7a70();
    /* 005aebf8: jmp 0x5aec05 */ goto L_005aec05;
L_005aebfa:; BB(0x005aebfa);
    /* 005aebfa: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005aec00: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5aec05u); f_0057ae30();
L_005aec05:; BB(0x005aec05);
    /* 005aec05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aec08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aec09: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aec0eu); f_005dcb00();
    /* 005aec0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aec11: mov ecx, eax */ r_ecx = r_eax;
    /* 005aec13: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x5aec18u); f_005d5840();
    /* 005aec18: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005aec1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aec1d: jne 0x5aec89 */ if (!fZ) goto L_005aec89;
L_005aec1f:; BB(0x005aec1f);
    /* 005aec1f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aec25: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5aec2au); f_005da7b0();
    /* 005aec2a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005aec2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aec2f: je 0x5aec59 */ if (fZ) goto L_005aec59;
L_005aec31:; BB(0x005aec31);
    /* 005aec31: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aec34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aec35: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aec3au); f_005dcb00();
    /* 005aec3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aec3d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005aec40: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005aec43: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 005aec4a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005aec4d: call 0x5af1b0 */ r_esp -= 4; W32(r_esp, 0x5aec52u); f_005af1b0();
    /* 005aec52: jmp 0x5aee3d */ goto L_005aee3d;
L_005aec59:; BB(0x005aec59);
    /* 005aec59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aec5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aec5d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aec63: call 0x5b7d70 */ r_esp -= 4; W32(r_esp, 0x5aec68u); f_005b7d70();
    /* 005aec68: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005aec6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aec6d: je 0x5aec87 */ if (fZ) goto L_005aec87;
L_005aec6f:; BB(0x005aec6f);
    /* 005aec6f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005aec72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aec73: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aec78u); f_005dcb00();
    /* 005aec78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aec7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aec7c: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aec82: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x5aec87u); f_005dbb70();
L_005aec87:; BB(0x005aec87);
    /* 005aec87: jmp 0x5aec9b */ goto L_005aec9b;
L_005aec89:; BB(0x005aec89);
    /* 005aec89: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 005aec8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aec90: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aec96: call 0x5db7d0 */ r_esp -= 4; W32(r_esp, 0x5aec9bu); f_005db7d0();
L_005aec9b:; BB(0x005aec9b);
    /* 005aec9b: jmp 0x5aee3d */ goto L_005aee3d;
L_005aeca0:; BB(0x005aeca0);
    /* 005aeca0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005aeca3: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005aeca7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeca9: jne 0x5aecd0 */ if (!fZ) goto L_005aecd0;
L_005aecab:; BB(0x005aecab);
    /* 005aecab: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005aecae: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005aecb2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aecb4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005aecba: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5aecbfu); f_00637810();
    /* 005aecbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aecc0: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aecc6: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x5aeccbu); f_005da360();
    /* 005aeccb: jmp 0x5aee3d */ goto L_005aee3d;
L_005aecd0:; BB(0x005aecd0);
    /* 005aecd0: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005aecd3: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 005aecd7: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005aecdd: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5aece2u); f_0057ae30();
    /* 005aece2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aece5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aece6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aecebu); f_005dcb00();
    /* 005aeceb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aecee: mov ecx, eax */ r_ecx = r_eax;
    /* 005aecf0: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x5aecf5u); f_005d5840();
    /* 005aecf5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005aecf8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aecfa: je 0x5aede3 */ if (fZ) goto L_005aede3;
L_005aed00:; BB(0x005aed00);
    /* 005aed00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aed02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aed05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aed06: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005aed0c: call 0x5a5840 */ r_esp -= 4; W32(r_esp, 0x5aed11u); f_005a5840();
    /* 005aed11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aed12: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5aed17u); f_0064c8a0();
    /* 005aed17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aed1a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005aed1d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005aed20: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aed23: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005aed26: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aed29: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005aed2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aed2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aed30: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005aed33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aed34: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aed37: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005aed3d: mov eax, dword ptr [edx + ecx*4 + 0x580] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005aed44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aed47: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005aed4d: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005aed54: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005aed56: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005aed5c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aed5eu); call_ind(t); }
    /* 005aed5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aed61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aed62: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005aed68: call 0x5a6b70 */ r_esp -= 4; W32(r_esp, 0x5aed6du); f_005a6b70();
    /* 005aed6d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005aed70: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aed74: jle 0x5aedc8 */ if ((fZ||fS!=fO)) goto L_005aedc8;
L_005aed76:; BB(0x005aed76);
    /* 005aed76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aed78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aed7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aed7c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5aed81u); f_0064c8a0();
    /* 005aed81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aed84: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005aed87: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005aed8a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aed8d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005aed90: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aed93: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005aed96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aed98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aed9a: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005aed9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aed9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005aeda1: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005aeda6: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005aedad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005aedb0: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005aedb5: mov edx, dword ptr [eax + edx*4 + 0x634] */ r_edx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005aedbc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005aedbe: mov ecx, edx */ r_ecx = r_edx;
    /* 005aedc0: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005aedc6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aedc8u); call_ind(t); }
L_005aedc8:; BB(0x005aedc8);
    /* 005aedc8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aedcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aedcc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aedd1u); f_005dcb00();
    /* 005aedd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aedd4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005aedd7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005aedda: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 005aede1: jmp 0x5aee1f */ goto L_005aee1f;
L_005aede3:; BB(0x005aede3);
    /* 005aede3: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aede9: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5aedeeu); f_005da7b0();
    /* 005aedee: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005aedf1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aedf3: je 0x5aee10 */ if (fZ) goto L_005aee10;
L_005aedf5:; BB(0x005aedf5);
    /* 005aedf5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aedf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aedf9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aedfeu); f_005dcb00();
    /* 005aedfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aee01: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005aee04: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005aee07: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
    /* 005aee0e: jmp 0x5aee1f */ goto L_005aee1f;
L_005aee10:; BB(0x005aee10);
    /* 005aee10: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005aee13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aee14: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aee1a: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x5aee1fu); f_005d9570();
L_005aee1f:; BB(0x005aee1f);
    /* 005aee1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aee21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aee23: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 005aee28: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aee2b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005aee31: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aee34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aee36: mov ecx, eax */ r_ecx = r_eax;
    /* 005aee38: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aee3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aee3du); call_ind(t); }
L_005aee3d:; BB(0x005aee3d);
    /* 005aee3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005aee3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aee40: ret 4 */ FN_RET(0x005aeb60); r_esp += 8; return;
}

void f_005aee50(void) /* sub_5AEE50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aee50);
    /* 005aee50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aee51: mov ebp, esp */ r_ebp = r_esp;
    /* 005aee53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aee56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005aee59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aee5c: movzx ecx, byte ptr [eax + 0x10] */ r_ecx = (u32)R8((u32)(r_eax+0x10u));
    /* 005aee60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aee62: jne 0x5aeefc */ if (!fZ) goto L_005aeefc;
L_005aee68:; BB(0x005aee68);
    /* 005aee68: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aee6b: mov byte ptr [edx + 0x10], 1 */ W8((u32)(r_edx+0x10u), 0x1u);
    /* 005aee6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aee72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aee73: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5aee78u); f_005dcb00();
    /* 005aee78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aee7b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005aee7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aee81: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5aee86u); f_0063aac0();
    /* 005aee86: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005aee88: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005aee8b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aee8f: je 0x5aeead */ if (fZ) goto L_005aeead;
L_005aee91:; BB(0x005aee91);
    /* 005aee91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aee94: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5aee99u); f_0063aac0();
    /* 005aee99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aee9b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005aee9e: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeea2: je 0x5aeead */ if (fZ) goto L_005aeead;
L_005aeea4:; BB(0x005aeea4);
    /* 005aeea4: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005aeeab: jmp 0x5aeeb4 */ goto L_005aeeb4;
L_005aeead:; BB(0x005aeead);
    /* 005aeead: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005aeeb4:; BB(0x005aeeb4);
    /* 005aeeb4: movzx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005aeeb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeeba: je 0x5aeec5 */ if (fZ) goto L_005aeec5;
L_005aeebc:; BB(0x005aeebc);
    /* 005aeebc: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 005aeec3: jmp 0x5aeecb */ goto L_005aeecb;
L_005aeec5:; BB(0x005aeec5);
    /* 005aeec5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aeec8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005aeecb:; BB(0x005aeecb);
    /* 005aeecb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aeece: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aeecf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeed1: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aeed7: call 0x5b7310 */ r_esp -= 4; W32(r_esp, 0x5aeedcu); f_005b7310();
    /* 005aeedc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeede: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeee0: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005aeee5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aeee8: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005aeeee: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aeef1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aeef3: mov ecx, eax */ r_ecx = r_eax;
    /* 005aeef5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aeef8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aeefau); call_ind(t); }
    /* 005aeefa: jmp 0x5aef35 */ goto L_005aef35;
L_005aeefc:; BB(0x005aeefc);
    /* 005aeefc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aeeff: mov byte ptr [ecx + 0xd], 0 */ W8((u32)(r_ecx+0xdu), 0x0u);
    /* 005aef03: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aef06: mov byte ptr [edx + 0x10], 0 */ W8((u32)(r_edx+0x10u), 0x0u);
    /* 005aef0a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005aef0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aef0e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aef14: call 0x5b6c90 */ r_esp -= 4; W32(r_esp, 0x5aef19u); f_005b6c90();
    /* 005aef19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aef1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aef1d: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005aef23: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005aef26: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005aef2b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aef2e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aef30: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aef33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aef35u); call_ind(t); }
L_005aef35:; BB(0x005aef35);
    /* 005aef35: mov esp, ebp */ r_esp = r_ebp;
    /* 005aef37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aef38: ret 4 */ FN_RET(0x005aee50); r_esp += 8; return;
}

void f_005aef40(void) /* sub_5AEF40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aef40);
    /* 005aef40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aef41: mov ebp, esp */ r_ebp = r_esp;
    /* 005aef43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aef44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005aef47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef4a: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 005aef4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef51: mov byte ptr [ecx + 6], 0 */ W8((u32)(r_ecx+0x6u), 0x0u);
    /* 005aef55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef58: mov byte ptr [edx + 7], 0 */ W8((u32)(r_edx+0x7u), 0x0u);
    /* 005aef5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef5f: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 005aef63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef66: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 005aef6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef6d: mov byte ptr [edx + 0xb], 0 */ W8((u32)(r_edx+0xbu), 0x0u);
    /* 005aef71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef74: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 005aef78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef7b: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 005aef7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef82: mov byte ptr [edx + 0xd], 0 */ W8((u32)(r_edx+0xdu), 0x0u);
    /* 005aef86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef89: mov byte ptr [eax + 0xe], 0 */ W8((u32)(r_eax+0xeu), 0x0u);
    /* 005aef8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef90: mov byte ptr [ecx + 0x10], 0 */ W8((u32)(r_ecx+0x10u), 0x0u);
    /* 005aef94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef97: mov byte ptr [edx + 0x12], 0 */ W8((u32)(r_edx+0x12u), 0x0u);
    /* 005aef9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aef9e: mov byte ptr [eax + 0x11], 0 */ W8((u32)(r_eax+0x11u), 0x0u);
    /* 005aefa2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aefa5: mov byte ptr [ecx + 0x13], 0 */ W8((u32)(r_ecx+0x13u), 0x0u);
    /* 005aefa9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aefac: mov byte ptr [edx + 0xf], 0 */ W8((u32)(r_edx+0xfu), 0x0u);
    /* 005aefb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aefb3: mov byte ptr [eax + 0x18], 0 */ W8((u32)(r_eax+0x18u), 0x0u);
    /* 005aefb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aefba: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 005aefbe: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aefc2: jne 0x5aeff1 */ if (!fZ) goto L_005aeff1;
L_005aefc4:; BB(0x005aefc4);
    /* 005aefc4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aefca: call 0x5b6a60 */ r_esp -= 4; W32(r_esp, 0x5aefcfu); f_005b6a60();
    /* 005aefcf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005aefd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aefd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aefd5: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005aefda: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005aefdd: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005aefe3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005aefe6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aefe8: mov ecx, eax */ r_ecx = r_eax;
    /* 005aefea: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005aefed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aefefu); call_ind(t); }
    /* 005aefef: jmp 0x5af013 */ goto L_005af013;
L_005aeff1:; BB(0x005aeff1);
    /* 005aeff1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aeff4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aeff5: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeffa: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005af000: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005af003: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005af009: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005af00c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af00e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005af011: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af013u); call_ind(t); }
L_005af013:; BB(0x005af013);
    /* 005af013: mov esp, ebp */ r_esp = r_ebp;
    /* 005af015: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005af016: ret 4 */ FN_RET(0x005aef40); r_esp += 8; return;
}

