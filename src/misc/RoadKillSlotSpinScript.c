#include "protos.h"

void f_0056fc80(void) /* RoadKillSlotSpinScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fc80);
    /* 0056fc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056fc87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc8c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x56fc91u); f_005fc0d0();
    /* 0056fc91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc94: mov dword ptr [eax], 0x6ca550 */ W32((u32)(r_eax), 0x6ca550u);
    /* 0056fc9a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056fc9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fc9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fca0: ret  */ FN_RET(0x0056fc80); r_esp += 4; return;
}

void f_0056fcd0(void) /* RoadKillSlotSpinScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056fcd0);
    /* 0056fcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fcd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcd5: push 0x6a5f3a */ { u32 v = 0x6a5f3au; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056fce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fce1: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056fce4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056fce9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056fcef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056fcf5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0056fcf8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056fcfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcfc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056fcff: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x56fd04u); f_005fc3a0();
    /* 0056fd04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056fd07: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0056fd0a: cmp dword ptr [ebp - 0x30], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0056fd0e: ja 0x5702a9 */ if ((!fC&&!fZ)) goto L_005702a9;
L_0056fd14:; BB(0x0056fd14);
    /* 0056fd14: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056fd17: jmp dword ptr [edx*4 + 0x5702bc] */ { u32 t = R32((u32)(r_edx*4+0x5702bcu)); switch (t) { case 0x56fd1eu: goto L_0056fd1e; case 0x56fee4u: goto L_0056fee4; case 0x56ff59u: goto L_0056ff59; case 0x57008bu: goto L_0057008b; case 0x570166u: goto L_00570166; case 0x570265u: goto L_00570265; default: UNSUP(0x0056fd17, "jump table entry is not a known target"); } }
L_0056fd1e:; BB(0x0056fd1e);
    /* 0056fd1e: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056fd24: call 0x56eb20 */ r_esp -= 4; W32(r_esp, 0x56fd29u); f_0056eb20();
    /* 0056fd29: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056fd30: jmp 0x56fd3b */ goto L_0056fd3b;
L_0056fd32:; BB(0x0056fd32);
    /* 0056fd32: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fd35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056fd38: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0056fd3b:; BB(0x0056fd3b);
    /* 0056fd3b: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fd3f: jge 0x56fd64 */ if ((fS==fO)) goto L_0056fd64;
L_0056fd41:; BB(0x0056fd41);
    /* 0056fd41: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fd44: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fd4a: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0056fd4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fd51: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fd57: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0056fd5b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056fd5d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056fd60: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56fd62u); call_ind(t); }
    /* 0056fd62: jmp 0x56fd32 */ goto L_0056fd32;
L_0056fd64:; BB(0x0056fd64);
    /* 0056fd64: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056fd6b: jmp 0x56fd76 */ goto L_0056fd76;
L_0056fd6d:; BB(0x0056fd6d);
    /* 0056fd6d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fd70: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056fd73: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0056fd76:; BB(0x0056fd76);
    /* 0056fd76: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fd7a: jge 0x56fe1d */ if ((fS==fO)) goto L_0056fe1d;
L_0056fd80:; BB(0x0056fd80);
    /* 0056fd80: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fd83: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fd89: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056fd8d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fd90: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fd96: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 0056fd9a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056fd9c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0056fd9f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56fda1u); call_ind(t); }
    /* 0056fda1: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fda3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56fda8u); f_00686d82();
    /* 0056fda8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fdab: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056fdae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056fdb5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fdb9: je 0x56fdce */ if (fZ) goto L_0056fdce;
L_0056fdbb:; BB(0x0056fdbb);
    /* 0056fdbb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdbd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdbf: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdc1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056fdc4: call 0x5714a0 */ r_esp -= 4; W32(r_esp, 0x56fdc9u); f_005714a0();
    /* 0056fdc9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0056fdcc: jmp 0x56fdd5 */ goto L_0056fdd5;
L_0056fdce:; BB(0x0056fdce);
    /* 0056fdce: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0056fdd5:; BB(0x0056fdd5);
    /* 0056fdd5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0056fdd8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056fddb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056fde2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fde5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fde6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fde9: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0056fdee: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 0056fdf2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56fdf7u); f_005f5d50();
    /* 0056fdf7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fdfa: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fe00: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056fe04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056fe07: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fe0d: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 0056fe11: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0056fe13: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056fe16: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56fe18u); call_ind(t); }
    /* 0056fe18: jmp 0x56fd6d */ goto L_0056fd6d;
L_0056fe1d:; BB(0x0056fe1d);
    /* 0056fe1d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe1f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56fe24u); f_00686d82();
    /* 0056fe24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fe27: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056fe2a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056fe31: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fe35: je 0x56fe4a */ if (fZ) goto L_0056fe4a;
L_0056fe37:; BB(0x0056fe37);
    /* 0056fe37: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe39: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe3b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe3d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056fe40: call 0x5714a0 */ r_esp -= 4; W32(r_esp, 0x56fe45u); f_005714a0();
    /* 0056fe45: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056fe48: jmp 0x56fe51 */ goto L_0056fe51;
L_0056fe4a:; BB(0x0056fe4a);
    /* 0056fe4a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0056fe51:; BB(0x0056fe51);
    /* 0056fe51: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056fe54: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056fe57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056fe5e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056fe61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe62: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056fe68: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0056fe6b: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x56fe70u); f_005f5d50();
    /* 0056fe70: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056fe75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056fe77: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056fe7d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0056fe80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56fe82u); call_ind(t); }
    /* 0056fe82: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056fe85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fe87: je 0x56febe */ if (fZ) goto L_0056febe;
L_0056fe89:; BB(0x0056fe89);
    /* 0056fe89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe8c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056fe92: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056fe95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe96: fld1  */ FPUSH(1.0);
    /* 0056fe98: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056fe9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe9d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fea1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fea3: push 0x19266 */ { u32 v = 0x19266u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fea8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0056feae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056feb0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056feb6: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0056febc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56febeu); call_ind(t); }
L_0056febe:; BB(0x0056febe);
    /* 0056febe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056fec3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056fec5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056fec8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056fecb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56fecdu); call_ind(t); }
    /* 0056fecd: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fed2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056fed5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056fed7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056feda: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056fedd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56fedfu); call_ind(t); }
    /* 0056fedf: jmp 0x5702a9 */ goto L_005702a9;
L_0056fee4:; BB(0x0056fee4);
    /* 0056fee4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fee6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056fee9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056feeb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056feee: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0056fef1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56fef3u); call_ind(t); }
    /* 0056fef3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056fef9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056fefb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056ff01: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0056ff04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ff06u); call_ind(t); }
    /* 0056ff06: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056ff09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ff0b: je 0x56ff45 */ if (fZ) goto L_0056ff45;
L_0056ff0d:; BB(0x0056ff0d);
    /* 0056ff0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff10: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0056ff16: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056ff19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff1a: fld1  */ FPUSH(1.0);
    /* 0056ff1c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056ff1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff21: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff25: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056ff28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff29: push 0x19265 */ { u32 v = 0x19265u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff2e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056ff33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056ff35: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056ff3b: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056ff41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ff43u); call_ind(t); }
    /* 0056ff43: jmp 0x56ff54 */ goto L_0056ff54;
L_0056ff45:; BB(0x0056ff45);
    /* 0056ff45: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff47: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056ff4a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056ff4c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056ff4f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0056ff52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ff54u); call_ind(t); }
L_0056ff54:; BB(0x0056ff54);
    /* 0056ff54: jmp 0x5702a9 */ goto L_005702a9;
L_0056ff59:; BB(0x0056ff59);
    /* 0056ff59: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056ff60: jmp 0x56ff6b */ goto L_0056ff6b;
L_0056ff62:; BB(0x0056ff62);
    /* 0056ff62: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ff65: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056ff68: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0056ff6b:; BB(0x0056ff6b);
    /* 0056ff6b: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ff6f: jge 0x56ff94 */ if ((fS==fO)) goto L_0056ff94;
L_0056ff71:; BB(0x0056ff71);
    /* 0056ff71: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ff74: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0056ff79: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0056ff7d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ff80: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0056ff85: mov edx, dword ptr [eax + edx*4 + 0x54] */ r_edx = R32((u32)(r_eax+r_edx*4+0x54u));
    /* 0056ff89: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056ff8b: mov ecx, edx */ r_ecx = r_edx;
    /* 0056ff8d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0056ff90: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56ff92u); call_ind(t); }
    /* 0056ff92: jmp 0x56ff62 */ goto L_0056ff62;
L_0056ff94:; BB(0x0056ff94);
    /* 0056ff94: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0056ff99: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0056ff9c: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0056ffa2: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0056ffa5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056ffa7: mov ecx, eax */ r_ecx = r_eax;
    /* 0056ffa9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0056ffac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ffaeu); call_ind(t); }
    /* 0056ffae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ffb0: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 0056ffb6: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0056ffb9: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0056ffbe: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0056ffc1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056ffc3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056ffc9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56ffcbu); call_ind(t); }
    /* 0056ffcb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ffcd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56ffd2u); f_00686d82();
    /* 0056ffd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ffd5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056ffd8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056ffdf: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ffe3: je 0x56fff4 */ if (fZ) goto L_0056fff4;
L_0056ffe5:; BB(0x0056ffe5);
    /* 0056ffe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ffe7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056ffea: call 0x571420 */ r_esp -= 4; W32(r_esp, 0x56ffefu); f_00571420();
    /* 0056ffef: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0056fff2: jmp 0x56fffb */ goto L_0056fffb;
L_0056fff4:; BB(0x0056fff4);
    /* 0056fff4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0056fffb:; BB(0x0056fffb);
    /* 0056fffb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0056fffe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00570001: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00570008: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057000b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057000c: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 00570011: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00570014: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x570019u); f_005f5d50();
    /* 00570019: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057001f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00570021: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00570027: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0057002a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57002cu); call_ind(t); }
    /* 0057002c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057002f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570031: je 0x570068 */ if (fZ) goto L_00570068;
L_00570033:; BB(0x00570033);
    /* 00570033: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570035: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570036: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0057003c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057003f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570040: fld1  */ FPUSH(1.0);
    /* 00570042: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00570045: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570047: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00570049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057004b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057004d: push 0x19264 */ { u32 v = 0x19264u; r_esp -= 4; W32(r_esp, v); }
    /* 00570052: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00570058: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057005a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00570060: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00570066: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570068u); call_ind(t); }
L_00570068:; BB(0x00570068);
    /* 00570068: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057006a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057006d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057006f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570072: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00570075: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570077u); call_ind(t); }
    /* 00570077: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00570079: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057007c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057007e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570081: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00570084: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570086u); call_ind(t); }
    /* 00570086: jmp 0x5702a9 */ goto L_005702a9;
L_0057008b:; BB(0x0057008b);
    /* 0057008b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00570091: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00570093: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00570099: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0057009c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57009eu); call_ind(t); }
    /* 0057009e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005700a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005700a3: je 0x570143 */ if (fZ) goto L_00570143;
L_005700a9:; BB(0x005700a9);
    /* 005700a9: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005700af: call 0x56f160 */ r_esp -= 4; W32(r_esp, 0x5700b4u); f_0056f160();
    /* 005700b4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005700b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005700b9: je 0x570101 */ if (fZ) goto L_00570101;
L_005700bb:; BB(0x005700bb);
    /* 005700bb: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005700c1: call 0x56f0d0 */ r_esp -= 4; W32(r_esp, 0x5700c6u); f_0056f0d0();
    /* 005700c6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005700c9: jne 0x570101 */ if (!fZ) goto L_00570101;
L_005700cb:; BB(0x005700cb);
    /* 005700cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005700cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005700ce: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005700d4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005700d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005700d8: fld1  */ FPUSH(1.0);
    /* 005700da: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005700dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005700df: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e5: push 0x1926d */ { u32 v = 0x1926du; r_esp -= 4; W32(r_esp, v); }
    /* 005700ea: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005700ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005700f1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005700f7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005700fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5700ffu); call_ind(t); }
    /* 005700ff: jmp 0x570143 */ goto L_00570143;
L_00570101:; BB(0x00570101);
    /* 00570101: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00570104: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0057010a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057010d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057010e: fld1  */ FPUSH(1.0);
    /* 00570110: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00570113: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00570115: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00570117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570119: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057011b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057011d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x570122u); f_0062fbf0();
    /* 00570122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00570125: lea ecx, [eax + eax + 0x1925d] */ r_ecx = (u32)(r_eax+r_eax+0x1925du);
    /* 0057012c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057012d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00570133: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00570135: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057013b: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00570141: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x570143u); call_ind(t); }
L_00570143:; BB(0x00570143);
    /* 00570143: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00570145: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570148: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057014a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057014d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00570150: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570152u); call_ind(t); }
    /* 00570152: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00570154: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570157: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00570159: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057015c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057015f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570161u); call_ind(t); }
    /* 00570161: jmp 0x5702a9 */ goto L_005702a9;
L_00570166:; BB(0x00570166);
    /* 00570166: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057016d: jmp 0x570178 */ goto L_00570178;
L_0057016f:; BB(0x0057016f);
    /* 0057016f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570172: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00570175: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00570178:; BB(0x00570178);
    /* 00570178: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057017c: jge 0x570211 */ if ((fS==fO)) goto L_00570211;
L_00570182:; BB(0x00570182);
    /* 00570182: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570184: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570187: mov eax, dword ptr [0x793450] */ r_eax = R32((u32)(0x793450u));
    /* 0057018c: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00570190: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x570195u); f_005f5d50();
    /* 00570195: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00570198: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0057019e: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 005701a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005701a5: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 005701ab: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 005701af: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005701b1: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005701b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5701b6u); call_ind(t); }
    /* 005701b6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005701b9: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005701bf: mov edx, dword ptr [ecx + eax*4 + 0xac] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xacu));
    /* 005701c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005701c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005701ca: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005701d0: mov edx, dword ptr [ecx + eax*4 + 0x34] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 005701d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005701d7: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 005701dd: mov ecx, dword ptr [ecx + eax*4 + 0x34] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x34u));
    /* 005701e1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005701e3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005701e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5701ebu); call_ind(t); }
    /* 005701eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005701ee: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 005701f4: mov eax, dword ptr [edx + ecx*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 005701f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005701fb: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 00570201: mov ecx, dword ptr [edx + ecx*4 + 0x34] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x34u));
    /* 00570205: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00570207: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057020a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57020cu); call_ind(t); }
    /* 0057020c: jmp 0x57016f */ goto L_0057016f;
L_00570211:; BB(0x00570211);
    /* 00570211: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00570216: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00570218: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057021e: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00570221: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570223u); call_ind(t); }
    /* 00570223: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00570226: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00570228: je 0x570235 */ if (fZ) goto L_00570235;
L_0057022a:; BB(0x0057022a);
    /* 0057022a: mov ecx, dword ptr [0x793450] */ r_ecx = R32((u32)(0x793450u));
    /* 00570230: call 0x56f1e0 */ r_esp -= 4; W32(r_esp, 0x570235u); f_0056f1e0();
L_00570235:; BB(0x00570235);
    /* 00570235: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570237: mov edx, dword ptr [0x793450] */ r_edx = R32((u32)(0x793450u));
    /* 0057023d: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 00570240: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x570245u); f_005f5d50();
    /* 00570245: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00570247: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057024a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057024c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057024f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00570252: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570254u); call_ind(t); }
    /* 00570254: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00570256: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570259: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057025b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057025e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00570261: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570263u); call_ind(t); }
    /* 00570263: jmp 0x5702a9 */ goto L_005702a9;
L_00570265:; BB(0x00570265);
    /* 00570265: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00570267: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 0057026d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00570270: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 00570275: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00570278: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057027a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057027d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57027fu); call_ind(t); }
    /* 0057027f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00570281: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 00570287: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057028a: mov eax, dword ptr [0x79344c] */ r_eax = R32((u32)(0x79344cu));
    /* 0057028f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00570292: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00570294: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00570297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x570299u); call_ind(t); }
    /* 00570299: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057029b: mov ecx, dword ptr [0x79344c] */ r_ecx = R32((u32)(0x79344cu));
    /* 005702a1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005702a4: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5702a9u); f_005fc420();
L_005702a9:; BB(0x005702a9);
    /* 005702a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005702ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005702b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005702b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005702b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005702b7: ret 4 */ FN_RET(0x0056fcd0); r_esp += 8; return;
}

