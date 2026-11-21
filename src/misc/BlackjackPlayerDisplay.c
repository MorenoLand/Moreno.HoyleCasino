#include "protos.h"

void f_0040dc70(void) /* BlackjackPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040dc70);
    /* 0040dc70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc71: mov ebp, esp */ r_ebp = r_esp;
    /* 0040dc73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040dc76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040dc79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc7c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x40dc81u); f_005e9e20();
    /* 0040dc81: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dc84: mov dword ptr [eax], 0x6b38ec */ W32((u32)(r_eax), 0x6b38ecu);
    /* 0040dc8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dc91: jmp 0x40dc9c */ goto L_0040dc9c;
L_0040dc93:; BB(0x0040dc93);
    /* 0040dc93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dc96: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040dc99: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040dc9c:; BB(0x0040dc9c);
    /* 0040dc9c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dca0: jge 0x40dcd5 */ if ((fS==fO)) goto L_0040dcd5;
L_0040dca2:; BB(0x0040dca2);
    /* 0040dca2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0040dca9: jmp 0x40dcb4 */ goto L_0040dcb4;
L_0040dcab:; BB(0x0040dcab);
    /* 0040dcab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dcae: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040dcb1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0040dcb4:; BB(0x0040dcb4);
    /* 0040dcb4: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dcb8: jge 0x40dcd3 */ if ((fS==fO)) goto L_0040dcd3;
L_0040dcba:; BB(0x0040dcba);
    /* 0040dcba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dcbd: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040dcc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dcc3: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 0040dcc7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040dcca: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 0040dcd1: jmp 0x40dcab */ goto L_0040dcab;
L_0040dcd3:; BB(0x0040dcd3);
    /* 0040dcd3: jmp 0x40dc93 */ goto L_0040dc93;
L_0040dcd5:; BB(0x0040dcd5);
    /* 0040dcd5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dcdc: jmp 0x40dce7 */ goto L_0040dce7;
L_0040dcde:; BB(0x0040dcde);
    /* 0040dcde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dce1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040dce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040dce7:; BB(0x0040dce7);
    /* 0040dce7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dceb: jge 0x40dd0b */ if ((fS==fO)) goto L_0040dd0b;
L_0040dced:; BB(0x0040dced);
    /* 0040dced: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dcf0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dcf3: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0040dcfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040dcfe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dd01: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
    /* 0040dd09: jmp 0x40dcde */ goto L_0040dcde;
L_0040dd0b:; BB(0x0040dd0b);
    /* 0040dd0b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dd0e: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dd10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dd11: ret  */ FN_RET(0x0040dc70); r_esp += 4; return;
}

void f_0040dd20(void) /* BlackjackPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040dd20);
    /* 0040dd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0040dd23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd25: push 0x69da78 */ { u32 v = 0x69da78u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040dd30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd31: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040dd34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040dd39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040dd3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040dd3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040dd45: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040dd48: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040dd4b: mov dword ptr [eax], 0x6b38ec */ W32((u32)(r_eax), 0x6b38ecu);
    /* 0040dd51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dd58: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040dd5f: jmp 0x40dd6a */ goto L_0040dd6a;
L_0040dd61:; BB(0x0040dd61);
    /* 0040dd61: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dd64: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040dd67: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040dd6a:; BB(0x0040dd6a);
    /* 0040dd6a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dd6e: jge 0x40ddc8 */ if ((fS==fO)) goto L_0040ddc8;
L_0040dd70:; BB(0x0040dd70);
    /* 0040dd70: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0040dd77: jmp 0x40dd82 */ goto L_0040dd82;
L_0040dd79:; BB(0x0040dd79);
    /* 0040dd79: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dd7c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040dd7f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0040dd82:; BB(0x0040dd82);
    /* 0040dd82: cmp dword ptr [ebp - 0x14], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dd86: jge 0x40ddc6 */ if ((fS==fO)) goto L_0040ddc6;
L_0040dd88:; BB(0x0040dd88);
    /* 0040dd88: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dd8b: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040dd8e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040dd91: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 0040dd95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dd98: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0040dd9b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040dd9e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040dda1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040dda4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dda8: je 0x40ddbd */ if (fZ) goto L_0040ddbd;
L_0040ddaa:; BB(0x0040ddaa);
    /* 0040ddaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ddac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ddaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040ddb1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ddb4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040ddb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40ddb8u); call_ind(t); }
    /* 0040ddb8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0040ddbb: jmp 0x40ddc4 */ goto L_0040ddc4;
L_0040ddbd:; BB(0x0040ddbd);
    /* 0040ddbd: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0040ddc4:; BB(0x0040ddc4);
    /* 0040ddc4: jmp 0x40dd79 */ goto L_0040dd79;
L_0040ddc6:; BB(0x0040ddc6);
    /* 0040ddc6: jmp 0x40dd61 */ goto L_0040dd61;
L_0040ddc8:; BB(0x0040ddc8);
    /* 0040ddc8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040ddcf: jmp 0x40ddda */ goto L_0040ddda;
L_0040ddd1:; BB(0x0040ddd1);
    /* 0040ddd1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040ddd4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ddd7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040ddda:; BB(0x0040ddda);
    /* 0040ddda: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040ddde: jge 0x40de48 */ if ((fS==fO)) goto L_0040de48;
L_0040dde0:; BB(0x0040dde0);
    /* 0040dde0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040dde3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040dde6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040ddea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040dded: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040ddf0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0040ddf3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ddf7: je 0x40de0c */ if (fZ) goto L_0040de0c;
L_0040ddf9:; BB(0x0040ddf9);
    /* 0040ddf9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ddfb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ddfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040de00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040de03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040de05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40de07u); call_ind(t); }
    /* 0040de07: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040de0a: jmp 0x40de13 */ goto L_0040de13;
L_0040de0c:; BB(0x0040de0c);
    /* 0040de0c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0040de13:; BB(0x0040de13);
    /* 0040de13: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040de16: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040de19: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040de1d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040de20: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040de23: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0040de26: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040de2a: je 0x40de3f */ if (fZ) goto L_0040de3f;
L_0040de2c:; BB(0x0040de2c);
    /* 0040de2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040de2e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040de31: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040de33: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040de36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040de38: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40de3au); call_ind(t); }
    /* 0040de3a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040de3d: jmp 0x40de46 */ goto L_0040de46;
L_0040de3f:; BB(0x0040de3f);
    /* 0040de3f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0040de46:; BB(0x0040de46);
    /* 0040de46: jmp 0x40ddd1 */ goto L_0040ddd1;
L_0040de48:; BB(0x0040de48);
    /* 0040de48: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040de4f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040de52: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x40de57u); f_005e9e40();
    /* 0040de57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040de5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040de61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040de62: mov esp, ebp */ r_esp = r_ebp;
    /* 0040de64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040de65: ret  */ FN_RET(0x0040dd20); r_esp += 4; return;
}

