#include "protos.h"

void f_0042bf50(void) /* CrapsBetArea::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042bf50);
    /* 0042bf50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042bf51: mov ebp, esp */ r_ebp = r_esp;
    /* 0042bf53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042bf56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042bf59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bf5c: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x42bf61u); f_005cc1d0();
    /* 0042bf61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bf64: mov dword ptr [eax], 0x6b6b74 */ W32((u32)(r_eax), 0x6b6b74u);
    /* 0042bf6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bf6d: mov dword ptr [ecx + 0xae4], 0 */ W32((u32)(r_ecx+0xae4u), 0x0u);
    /* 0042bf77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bf7a: mov dword ptr [edx + 0xae8], 0 */ W32((u32)(r_edx+0xae8u), 0x0u);
    /* 0042bf84: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bf87: mov dword ptr [eax + 0xae0], 0 */ W32((u32)(r_eax+0xae0u), 0x0u);
    /* 0042bf91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042bf98: jmp 0x42bfa3 */ goto L_0042bfa3;
L_0042bf9a:; BB(0x0042bf9a);
    /* 0042bf9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bf9d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042bfa0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042bfa3:; BB(0x0042bfa3);
    /* 0042bfa3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042bfa7: jge 0x42bfcd */ if ((fS==fO)) goto L_0042bfcd;
L_0042bfa9:; BB(0x0042bfa9);
    /* 0042bfa9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bfac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bfaf: mov dword ptr [eax + edx*4 + 0xaec], 0 */ W32((u32)(r_eax+r_edx*4+0xaecu), 0x0u);
    /* 0042bfba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042bfbd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bfc0: mov dword ptr [edx + ecx*4 + 0xafc], 0 */ W32((u32)(r_edx+r_ecx*4+0xafcu), 0x0u);
    /* 0042bfcb: jmp 0x42bf9a */ goto L_0042bf9a;
L_0042bfcd:; BB(0x0042bfcd);
    /* 0042bfcd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042bfd0: mov esp, ebp */ r_esp = r_ebp;
    /* 0042bfd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042bfd3: ret  */ FN_RET(0x0042bf50); r_esp += 4; return;
}

void f_0042bfe0(void) /* CrapsBetArea::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042bfe0);
    /* 0042bfe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042bfe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042bfe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042bfe5: push 0x69e542 */ { u32 v = 0x69e542u; r_esp -= 4; W32(r_esp, v); }
    /* 0042bfea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042bff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bff1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042bff4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042bff9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042bffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042bffc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042bfff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042c005: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0042c008: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c00b: mov dword ptr [eax], 0x6b6b74 */ W32((u32)(r_eax), 0x6b6b74u);
    /* 0042c011: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042c018: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c01b: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 0042c021: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0042c024: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c027: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042c02a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c02e: je 0x42c043 */ if (fZ) goto L_0042c043;
L_0042c030:; BB(0x0042c030);
    /* 0042c030: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c032: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c035: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042c037: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c03a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c03c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c03eu); call_ind(t); }
    /* 0042c03e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0042c041: jmp 0x42c04a */ goto L_0042c04a;
L_0042c043:; BB(0x0042c043);
    /* 0042c043: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0042c04a:; BB(0x0042c04a);
    /* 0042c04a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c04d: mov edx, dword ptr [ecx + 0xae8] */ r_edx = R32((u32)(r_ecx+0xae8u));
    /* 0042c053: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0042c056: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042c059: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042c05c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c060: je 0x42c075 */ if (fZ) goto L_0042c075;
L_0042c062:; BB(0x0042c062);
    /* 0042c062: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c064: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c067: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042c069: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c06c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c06e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c070u); call_ind(t); }
    /* 0042c070: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0042c073: jmp 0x42c07c */ goto L_0042c07c;
L_0042c075:; BB(0x0042c075);
    /* 0042c075: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0042c07c:; BB(0x0042c07c);
    /* 0042c07c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c07f: mov edx, dword ptr [ecx + 0xae0] */ r_edx = R32((u32)(r_ecx+0xae0u));
    /* 0042c085: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0042c088: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c08b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042c08e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c092: je 0x42c0a7 */ if (fZ) goto L_0042c0a7;
L_0042c094:; BB(0x0042c094);
    /* 0042c094: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c096: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042c099: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042c09b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042c09e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c0a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c0a2u); call_ind(t); }
    /* 0042c0a2: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0042c0a5: jmp 0x42c0ae */ goto L_0042c0ae;
L_0042c0a7:; BB(0x0042c0a7);
    /* 0042c0a7: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0042c0ae:; BB(0x0042c0ae);
    /* 0042c0ae: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042c0b5: jmp 0x42c0c0 */ goto L_0042c0c0;
L_0042c0b7:; BB(0x0042c0b7);
    /* 0042c0b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c0ba: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042c0bd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0042c0c0:; BB(0x0042c0c0);
    /* 0042c0c0: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c0c4: jge 0x42c134 */ if ((fS==fO)) goto L_0042c134;
L_0042c0c6:; BB(0x0042c0c6);
    /* 0042c0c6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c0c9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c0cc: mov ecx, dword ptr [eax + edx*4 + 0xaec] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xaecu));
    /* 0042c0d3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0042c0d6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042c0d9: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0042c0dc: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c0e0: je 0x42c0f5 */ if (fZ) goto L_0042c0f5;
L_0042c0e2:; BB(0x0042c0e2);
    /* 0042c0e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c0e4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042c0e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042c0e9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042c0ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c0ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c0f0u); call_ind(t); }
    /* 0042c0f0: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0042c0f3: jmp 0x42c0fc */ goto L_0042c0fc;
L_0042c0f5:; BB(0x0042c0f5);
    /* 0042c0f5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0042c0fc:; BB(0x0042c0fc);
    /* 0042c0fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c0ff: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c102: mov eax, dword ptr [edx + ecx*4 + 0xafc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xafcu));
    /* 0042c109: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0042c10c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0042c10f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0042c112: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c116: je 0x42c12b */ if (fZ) goto L_0042c12b;
L_0042c118:; BB(0x0042c118);
    /* 0042c118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c11a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042c11d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c11f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0042c122: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042c124: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c126u); call_ind(t); }
    /* 0042c126: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0042c129: jmp 0x42c132 */ goto L_0042c132;
L_0042c12b:; BB(0x0042c12b);
    /* 0042c12b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0042c132:; BB(0x0042c132);
    /* 0042c132: jmp 0x42c0b7 */ goto L_0042c0b7;
L_0042c134:; BB(0x0042c134);
    /* 0042c134: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042c13b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0042c13e: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x42c143u); f_005cc230();
    /* 0042c143: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c146: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042c14d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042c14e: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c150: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c151: ret  */ FN_RET(0x0042bfe0); r_esp += 4; return;
}

void f_0042c160(void) /* CrapsBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c160);
    /* 0042c160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c161: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042c167: mov eax, 0xfa6 */ r_eax = 0xfa6u;
    /* 0042c16c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c16e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c16f: ret  */ FN_RET(0x0042c160); r_esp += 4; return;
}

void f_0042c170(void) /* CrapsBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c170);
    /* 0042c170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c171: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c173: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c176: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042c179: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 0042c180: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0042c187: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0042c18e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042c195: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c198: cmp dword ptr [eax + 0xb0c], 0xe */ {  u32 a = R32((u32)(r_eax+0xb0cu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c19f: jle 0x42c1bf */ if ((fZ||fS!=fO)) goto L_0042c1bf;
L_0042c1a1:; BB(0x0042c1a1);
    /* 0042c1a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c1a4: cmp dword ptr [ecx + 0xb0c], 0x16 */ {  u32 a = R32((u32)(r_ecx+0xb0cu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c1ab: jge 0x42c1bf */ if ((fS==fO)) goto L_0042c1bf;
L_0042c1ad:; BB(0x0042c1ad);
    /* 0042c1ad: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c1b0: mov eax, dword ptr [edx + 0xb0c] */ r_eax = R32((u32)(r_edx+0xb0cu));
    /* 0042c1b6: mov eax, dword ptr [eax*8 + 0x710ec0] */ r_eax = R32((u32)(r_eax*8+0x710ec0u));
    /* 0042c1bd: jmp 0x42c203 */ goto L_0042c203;
L_0042c1bf:; BB(0x0042c1bf);
    /* 0042c1bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c1c2: cmp dword ptr [ecx + 0xb0c], 0x18 */ {  u32 a = R32((u32)(r_ecx+0xb0cu)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c1c9: jle 0x42c1e9 */ if ((fZ||fS!=fO)) goto L_0042c1e9;
L_0042c1cb:; BB(0x0042c1cb);
    /* 0042c1cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c1ce: cmp dword ptr [edx + 0xb0c], 0x20 */ {  u32 a = R32((u32)(r_edx+0xb0cu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c1d5: jge 0x42c1e9 */ if ((fS==fO)) goto L_0042c1e9;
L_0042c1d7:; BB(0x0042c1d7);
    /* 0042c1d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c1da: mov ecx, dword ptr [eax + 0xb0c] */ r_ecx = R32((u32)(r_eax+0xb0cu));
    /* 0042c1e0: mov eax, dword ptr [ecx*8 + 0x710ea8] */ r_eax = R32((u32)(r_ecx*8+0x710ea8u));
    /* 0042c1e7: jmp 0x42c203 */ goto L_0042c203;
L_0042c1e9:; BB(0x0042c1e9);
    /* 0042c1e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c1ec: mov eax, dword ptr [edx + 0xb0c] */ r_eax = R32((u32)(r_edx+0xb0cu));
    /* 0042c1f2: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042c1f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c1f8: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 0042c1fc: mov eax, dword ptr [eax + edx*8 + 0x7105b8] */ r_eax = R32((u32)(r_eax+r_edx*8+0x7105b8u));
L_0042c203:; BB(0x0042c203);
    /* 0042c203: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c205: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c206: ret 8 */ FN_RET(0x0042c170); r_esp += 12; return;
}

void f_0042c210(void) /* CrapsBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c210);
    /* 0042c210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c211: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c213: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c216: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042c219: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 0042c220: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0042c227: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0042c22e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042c235: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c238: cmp dword ptr [eax + 0xb0c], 0xe */ {  u32 a = R32((u32)(r_eax+0xb0cu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c23f: jle 0x42c262 */ if ((fZ||fS!=fO)) goto L_0042c262;
L_0042c241:; BB(0x0042c241);
    /* 0042c241: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c244: cmp dword ptr [ecx + 0xb0c], 0x16 */ {  u32 a = R32((u32)(r_ecx+0xb0cu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c24b: jge 0x42c262 */ if ((fS==fO)) goto L_0042c262;
L_0042c24d:; BB(0x0042c24d);
    /* 0042c24d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c250: mov eax, dword ptr [edx + 0xb0c] */ r_eax = R32((u32)(r_edx+0xb0cu));
    /* 0042c256: mov eax, dword ptr [eax*8 + 0x710ec4] */ r_eax = R32((u32)(r_eax*8+0x710ec4u));
    /* 0042c25d: sub eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042c260: jmp 0x42c2ac */ goto L_0042c2ac;
L_0042c262:; BB(0x0042c262);
    /* 0042c262: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c265: cmp dword ptr [ecx + 0xb0c], 0x18 */ {  u32 a = R32((u32)(r_ecx+0xb0cu)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c26c: jle 0x42c28f */ if ((fZ||fS!=fO)) goto L_0042c28f;
L_0042c26e:; BB(0x0042c26e);
    /* 0042c26e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c271: cmp dword ptr [edx + 0xb0c], 0x20 */ {  u32 a = R32((u32)(r_edx+0xb0cu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042c278: jge 0x42c28f */ if ((fS==fO)) goto L_0042c28f;
L_0042c27a:; BB(0x0042c27a);
    /* 0042c27a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c27d: mov ecx, dword ptr [eax + 0xb0c] */ r_ecx = R32((u32)(r_eax+0xb0cu));
    /* 0042c283: mov eax, dword ptr [ecx*8 + 0x710eac] */ r_eax = R32((u32)(r_ecx*8+0x710eacu));
    /* 0042c28a: sub eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042c28d: jmp 0x42c2ac */ goto L_0042c2ac;
L_0042c28f:; BB(0x0042c28f);
    /* 0042c28f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c292: mov eax, dword ptr [edx + 0xb0c] */ r_eax = R32((u32)(r_edx+0xb0cu));
    /* 0042c298: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042c29b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c29e: mov edx, dword ptr [ebp + ecx*4 - 0x10] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff0u));
    /* 0042c2a2: mov eax, dword ptr [eax + edx*8 + 0x7105bc] */ r_eax = R32((u32)(r_eax+r_edx*8+0x7105bcu));
    /* 0042c2a9: sub eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0042c2ac:; BB(0x0042c2ac);
    /* 0042c2ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c2ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c2af: ret 8 */ FN_RET(0x0042c210); r_esp += 12; return;
}

void f_0042c2c0(void) /* CrapsBetArea::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c2c0);
    /* 0042c2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c2c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042c2c7: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0042c2cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c2ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c2cf: ret 8 */ FN_RET(0x0042c2c0); r_esp += 12; return;
}

void f_0042c2e0(void) /* CrapsBetArea::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c2e0);
    /* 0042c2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042c2e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042c2ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c2ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c2ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c2f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c2f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c2f7: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042c2fd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c2ffu); call_ind(t); }
    /* 0042c2ff: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042c302: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c304: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c305: ret 8 */ FN_RET(0x0042c2e0); r_esp += 12; return;
}

void f_0042c310(void) /* CrapsBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c310);
    /* 0042c310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c311: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042c317: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042c31a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c31b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c31e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c31f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c322: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c324: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042c327: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042c32d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c32fu); call_ind(t); }
    /* 0042c32f: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042c332: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c334: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c335: ret 8 */ FN_RET(0x0042c310); r_esp += 12; return;
}

void f_0042cc30(void) /* CrapsBetArea::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042cc30);
    /* 0042cc30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc31: mov ebp, esp */ r_ebp = r_esp;
    /* 0042cc33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc35: push 0x69e5da */ { u32 v = 0x69e5dau; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042cc40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc41: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042cc44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc45: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042cc4a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042cc4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc4d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042cc50: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042cc56: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042cc59: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042cc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc5d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cc60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc61: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cc64: call 0x5cc540 */ r_esp -= 4; W32(r_esp, 0x42cc69u); f_005cc540();
    /* 0042cc69: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042cc6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042cc70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc71: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cc74: call 0x5ccdf0 */ r_esp -= 4; W32(r_esp, 0x42cc79u); f_005ccdf0();
    /* 0042cc79: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042cc7c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042cc7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042cc83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cc84: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cc87: call 0x42c940 */ r_esp -= 4; W32(r_esp, 0x42cc8cu); f_0042c940();
    /* 0042cc8c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042cc8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cc91: je 0x42ce79 */ if (fZ) goto L_0042ce79;
L_0042cc97:; BB(0x0042cc97);
    /* 0042cc97: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cc9b: jne 0x42cca2 */ if (!fZ) goto L_0042cca2;
L_0042cc9d:; BB(0x0042cc9d);
    /* 0042cc9d: jmp 0x42cea0 */ goto L_0042cea0;
L_0042cca2:; BB(0x0042cca2);
    /* 0042cca2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cca5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cca8: cmp dword ptr [edx + ecx*4 + 0xaec], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xaecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ccb0: jne 0x42cd00 */ if (!fZ) goto L_0042cd00;
L_0042ccb2:; BB(0x0042ccb2);
    /* 0042ccb2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ccb7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42ccbcu); f_00686d82();
    /* 0042ccbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ccbf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042ccc2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042ccc9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042cccd: je 0x42ccdc */ if (fZ) goto L_0042ccdc;
L_0042cccf:; BB(0x0042cccf);
    /* 0042cccf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042ccd2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x42ccd7u); f_005eaaf0();
    /* 0042ccd7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042ccda: jmp 0x42cce3 */ goto L_0042cce3;
L_0042ccdc:; BB(0x0042ccdc);
    /* 0042ccdc: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0042cce3:; BB(0x0042cce3);
    /* 0042cce3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042cce6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042cce9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042ccf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ccf3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ccf6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042ccf9: mov dword ptr [edx + ecx*4 + 0xaec], eax */ W32((u32)(r_edx+r_ecx*4+0xaecu), r_eax);
L_0042cd00:; BB(0x0042cd00);
    /* 0042cd00: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cd03: call 0x5cc2e0 */ r_esp -= 4; W32(r_esp, 0x42cd08u); f_005cc2e0();
    /* 0042cd08: mov ecx, eax */ r_ecx = r_eax;
    /* 0042cd0a: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x42cd0fu); f_005f5400();
    /* 0042cd0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cd11: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042cd14: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0042cd17: add ecx, 0xfaf */ {  u32 a = r_ecx; u32 b = 0xfafu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cd1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042cd1e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042cd21: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cd24: mov ecx, dword ptr [eax + edx*4 + 0xaec] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xaecu));
    /* 0042cd2b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42cd30u); f_005eaf00();
    /* 0042cd30: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cd33: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cd36: mov eax, dword ptr [edx + ecx*4 + 0xaec] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xaecu));
    /* 0042cd3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cd40: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cd43: mov ecx, dword ptr [edx + ecx*4 + 0xaec] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xaecu));
    /* 0042cd4a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042cd4c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0042cd4f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42cd51u); call_ind(t); }
    /* 0042cd51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042cd54: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cd5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cd5d: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 0042cd64: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042cd67: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cd6a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042cd6c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042cd6f: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0042cd72: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042cd75: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cd78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cd7b: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cd81: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cd84: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 0042cd8b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042cd8d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042cd90: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0042cd93: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042cd95: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0042cd98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42cd9au); call_ind(t); }
    /* 0042cd9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cd9b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cd9e: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cda4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cda7: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0042cdae: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042cdb1: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cdb4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cdb6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042cdb9: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0042cdbc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042cdbf: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cdc2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042cdc5: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042cdcb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cdce: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 0042cdd5: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042cdd7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042cdda: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0042cddd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042cddf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0042cde2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42cde4u); call_ind(t); }
    /* 0042cde4: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042cde7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042cde8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cdeb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cdee: mov eax, dword ptr [edx + ecx*4 + 0xaec] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xaecu));
    /* 0042cdf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042cdf8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042cdfb: mov ecx, dword ptr [edx + ecx*4 + 0xaec] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xaecu));
    /* 0042ce02: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042ce04: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0042ce07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42ce09u); call_ind(t); }
    /* 0042ce09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ce0c: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042ce12: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce15: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 0042ce1c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042ce1f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042ce22: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042ce24: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042ce27: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0042ce2a: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x42ce2fu); f_005f53c0();
    /* 0042ce2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042ce32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042ce33: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ce36: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce39: mov ecx, dword ptr [eax + edx*4 + 0xaec] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xaecu));
    /* 0042ce40: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ce43: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce46: mov edx, dword ptr [eax + edx*4 + 0xaec] */ r_edx = R32((u32)(r_eax+r_edx*4+0xaecu));
    /* 0042ce4d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042ce4f: mov ecx, edx */ r_ecx = r_edx;
    /* 0042ce51: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0042ce54: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42ce56u); call_ind(t); }
    /* 0042ce56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ce59: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce5c: mov edx, dword ptr [ecx + eax*4 + 0xaec] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xaecu));
    /* 0042ce63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ce66: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce69: mov ecx, dword ptr [ecx + eax*4 + 0xaec] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xaecu));
    /* 0042ce70: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042ce72: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042ce75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ce77u); call_ind(t); }
    /* 0042ce77: jmp 0x42cea0 */ goto L_0042cea0;
L_0042ce79:; BB(0x0042ce79);
    /* 0042ce79: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042ce7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ce7d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ce80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ce81: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce84: call 0x42c9c0 */ r_esp -= 4; W32(r_esp, 0x42ce89u); f_0042c9c0();
    /* 0042ce89: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042ce8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ce8e: je 0x42cea0 */ if (fZ) goto L_0042cea0;
L_0042ce90:; BB(0x0042ce90);
    /* 0042ce90: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042ce93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ce94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ce97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ce98: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ce9b: call 0x42ca40 */ r_esp -= 4; W32(r_esp, 0x42cea0u); f_0042ca40();
L_0042cea0:; BB(0x0042cea0);
    /* 0042cea0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042cea3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042ceaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042ceab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042ceac: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ceae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ceaf: ret 8 */ FN_RET(0x0042cc30); r_esp += 12; return;
}

