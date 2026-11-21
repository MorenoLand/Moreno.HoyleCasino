#include "protos.h"

void f_00425be0(void) /* CaribbeanStudState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425be0);
    /* 00425be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425be3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425be6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00425be9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425bec: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x425bf1u); f_005e9e20();
    /* 00425bf1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425bf4: mov dword ptr [eax], 0x6b6780 */ W32((u32)(r_eax), 0x6b6780u);
    /* 00425bfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425bfd: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00425c04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425c0b: jmp 0x425c16 */ goto L_00425c16;
L_00425c0d:; BB(0x00425c0d);
    /* 00425c0d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425c10: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425c13: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00425c16:; BB(0x00425c16);
    /* 00425c16: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425c1a: jge 0x425c2c */ if ((fS==fO)) goto L_00425c2c;
L_00425c1c:; BB(0x00425c1c);
    /* 00425c1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425c1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425c22: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 00425c2a: jmp 0x425c0d */ goto L_00425c0d;
L_00425c2c:; BB(0x00425c2c);
    /* 00425c2c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00425c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 00425c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425c32: ret  */ FN_RET(0x00425be0); r_esp += 4; return;
}

void f_00425c40(void) /* CaribbeanStudState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425c40);
    /* 00425c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00425c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425c45: push 0x69e3a8 */ { u32 v = 0x69e3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00425c4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00425c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425c51: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425c54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00425c59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425c5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00425c5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00425c65: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00425c68: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00425c6b: mov dword ptr [eax], 0x6b6780 */ W32((u32)(r_eax), 0x6b6780u);
    /* 00425c71: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425c78: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00425c7b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00425c7e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00425c81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425c84: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00425c87: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425c8b: je 0x425ca0 */ if (fZ) goto L_00425ca0;
L_00425c8d:; BB(0x00425c8d);
    /* 00425c8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425c8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00425c92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00425c94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00425c97: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425c99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425c9bu); call_ind(t); }
    /* 00425c9b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00425c9e: jmp 0x425ca7 */ goto L_00425ca7;
L_00425ca0:; BB(0x00425ca0);
    /* 00425ca0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00425ca7:; BB(0x00425ca7);
    /* 00425ca7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00425cae: jmp 0x425cb9 */ goto L_00425cb9;
L_00425cb0:; BB(0x00425cb0);
    /* 00425cb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425cb3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425cb6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00425cb9:; BB(0x00425cb9);
    /* 00425cb9: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425cbd: jge 0x425cf4 */ if ((fS==fO)) goto L_00425cf4;
L_00425cbf:; BB(0x00425cbf);
    /* 00425cbf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425cc2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00425cc5: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00425cc9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00425ccc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425ccf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00425cd2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425cd6: je 0x425ceb */ if (fZ) goto L_00425ceb;
L_00425cd8:; BB(0x00425cd8);
    /* 00425cd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425cda: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425cdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00425cdf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425ce2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00425ce4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x425ce6u); call_ind(t); }
    /* 00425ce6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00425ce9: jmp 0x425cf2 */ goto L_00425cf2;
L_00425ceb:; BB(0x00425ceb);
    /* 00425ceb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00425cf2:; BB(0x00425cf2);
    /* 00425cf2: jmp 0x425cb0 */ goto L_00425cb0;
L_00425cf4:; BB(0x00425cf4);
    /* 00425cf4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00425cfb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00425cfe: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x425d03u); f_005e9e40();
    /* 00425d03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425d06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00425d0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425d0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d11: ret  */ FN_RET(0x00425c40); r_esp += 4; return;
}

void f_004276f0(void) /* caribbeanstudstate::func_004276f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004276f0);
    /* 004276f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004276f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004276f3: sub esp, 0x9e0 */ {  u32 a = r_esp; u32 b = 0x9e0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004276f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004276fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427700: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00427703: mov dword ptr [ebp - 0x9dc], ecx */ W32((u32)(r_ebp+0xfffff624u), r_ecx);
    /* 00427709: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042770c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042770d: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00427713: call 0x41e290 */ r_esp -= 4; W32(r_esp, 0x427718u); f_0041e290();
    /* 00427718: mov byte ptr [ebp - 0x551], al */ W8((u32)(r_ebp+0xfffffaafu), (u8)r_eax);
    /* 0042771e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427720: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427724: mov ecx, dword ptr [ebp - 0x9dc] */ r_ecx = R32((u32)(r_ebp+0xfffff624u));
    /* 0042772a: call 0x426370 */ r_esp -= 4; W32(r_esp, 0x42772fu); f_00426370();
    /* 0042772f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427730: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427733: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00427736: mov eax, dword ptr [ebp - 0x9dc] */ r_eax = R32((u32)(r_ebp+0xfffff624u));
    /* 0042773c: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 00427740: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427741: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x427746u); f_00462ba0();
    /* 00427746: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427749: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0042774f: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427756: jne 0x42776f */ if (!fZ) goto L_0042776f;
L_00427758:; BB(0x00427758);
    /* 00427758: push 0x290 */ { u32 v = 0x290u; r_esp -= 4; W32(r_esp, v); }
    /* 0042775d: push 0x6b682c */ { u32 v = 0x6b682cu; r_esp -= 4; W32(r_esp, v); }
    /* 00427762: push 0x6b681c */ { u32 v = 0x6b681cu; r_esp -= 4; W32(r_esp, v); }
    /* 00427767: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42776cu); f_005e9f20();
    /* 0042776c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042776f:; BB(0x0042776f);
    /* 0042776f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00427775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427776: push 0x6b67f4 */ { u32 v = 0x6b67f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042777b: lea ecx, [ebp - 0x550] */ r_ecx = (u32)(r_ebp+0xfffffab0u);
    /* 00427781: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427782: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x427788u); call_ind(t); }
    /* 00427788: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042778b: lea edx, [ebp - 0x550] */ r_edx = (u32)(r_ebp+0xfffffab0u);
    /* 00427791: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427792: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x427797u); f_0062fde0();
    /* 00427797: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042779a: lea eax, [ebp - 0x9d8] */ r_eax = (u32)(r_ebp+0xfffff628u);
    /* 004277a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004277a1: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004277a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004277a8: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x4277adu); f_00462f40();
    /* 004277ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004277b0: movzx edx, byte ptr [ebp - 0x551] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffaafu));
    /* 004277b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004277b9: je 0x4277d0 */ if (fZ) goto L_004277d0;
L_004277bb:; BB(0x004277bb);
    /* 004277bb: push 0x6b67e0 */ { u32 v = 0x6b67e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004277c0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4277c5u); f_00630f40();
    /* 004277c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004277c8: mov dword ptr [ebp - 0x9e0], eax */ W32((u32)(r_ebp+0xfffff620u), r_eax);
    /* 004277ce: jmp 0x4277e3 */ goto L_004277e3;
L_004277d0:; BB(0x004277d0);
    /* 004277d0: push 0x6b67cc */ { u32 v = 0x6b67ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004277d5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4277dau); f_00630f40();
    /* 004277da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004277dd: mov dword ptr [ebp - 0x9e0], eax */ W32((u32)(r_ebp+0xfffff620u), r_eax);
L_004277e3:; BB(0x004277e3);
    /* 004277e3: mov eax, dword ptr [ebp - 0x9e0] */ r_eax = R32((u32)(r_ebp+0xfffff620u));
    /* 004277e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004277ea: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 004277f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004277f1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4277f6u); f_00686d8e();
    /* 004277f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004277f9: lea edx, [ebp - 0x510] */ r_edx = (u32)(r_ebp+0xfffffaf0u);
    /* 004277ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427800: mov al, byte ptr [ebp - 0x551] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffaafu))) & 0xffu);
    /* 00427806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427807: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0042780d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042780e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427811: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427812: mov ecx, dword ptr [0x790364] */ r_ecx = R32((u32)(0x790364u));
    /* 00427818: call 0x41e4d0 */ r_esp -= 4; W32(r_esp, 0x42781du); f_0041e4d0();
    /* 0042781d: lea eax, [ebp - 0x510] */ r_eax = (u32)(r_ebp+0xfffffaf0u);
    /* 00427823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427824: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0042782a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042782b: lea edx, [ebp - 0x9d8] */ r_edx = (u32)(r_ebp+0xfffff628u);
    /* 00427831: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427832: push 0x6b67a4 */ { u32 v = 0x6b67a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00427837: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42783cu); f_00630f40();
    /* 0042783c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042783f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427840: lea eax, [ebp - 0x958] */ r_eax = (u32)(r_ebp+0xfffff6a8u);
    /* 00427846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427847: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x42784du); call_ind(t); }
    /* 0042784d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427850: lea ecx, [ebp - 0x958] */ r_ecx = (u32)(r_ebp+0xfffff6a8u);
    /* 00427856: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427857: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042785c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x427861u); f_00630f40();
    /* 00427861: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427865: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00427867: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0042786d: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x427872u); f_0057be80();
    /* 00427872: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427875: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00427877: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x42787cu); f_00686d72();
    /* 0042787c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042787e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042787f: ret 4 */ FN_RET(0x004276f0); r_esp += 8; return;
}

