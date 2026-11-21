#include "protos.h"

void f_0042da90(void) /* CrapsRollingDiceScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042da90);
    /* 0042da90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042da91: mov ebp, esp */ r_ebp = r_esp;
    /* 0042da93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042da95: push 0x69e64c */ { u32 v = 0x69e64cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042da9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042daa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042daa1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042daa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042daa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042daab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042daac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042daaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042dab5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042dab8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042dabb: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0042dabe: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0042dac1: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dac5: je 0x42dad6 */ if (fZ) goto L_0042dad6;
L_0042dac7:; BB(0x0042dac7);
    /* 0042dac7: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042dacb: je 0x42db73 */ if (fZ) goto L_0042db73;
L_0042dad1:; BB(0x0042dad1);
    /* 0042dad1: jmp 0x42dc32 */ goto L_0042dc32;
L_0042dad6:; BB(0x0042dad6);
    /* 0042dad6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dad8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042dadb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042dadd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042dae0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0042dae3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42dae5u); call_ind(t); }
    /* 0042dae5: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042daeb: call 0x42a200 */ r_esp -= 4; W32(r_esp, 0x42daf0u); f_0042a200();
    /* 0042daf0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042daf7: jmp 0x42db02 */ goto L_0042db02;
L_0042daf9:; BB(0x0042daf9);
    /* 0042daf9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042dafc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042daff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0042db02:; BB(0x0042db02);
    /* 0042db02: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042db06: jge 0x42db6e */ if ((fS==fO)) goto L_0042db6e;
L_0042db08:; BB(0x0042db08);
    /* 0042db08: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0042db0a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42db0fu); f_00686d82();
    /* 0042db0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042db12: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042db15: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042db1c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042db20: je 0x42db40 */ if (fZ) goto L_0042db40;
L_0042db22:; BB(0x0042db22);
    /* 0042db22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042db25: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0042db27: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0042db29: not ecx */ r_ecx = ~r_ecx;
    /* 0042db2b: and ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0042db2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042db2f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042db32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042db33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042db36: call 0x42d860 */ r_esp -= 4; W32(r_esp, 0x42db3bu); f_0042d860();
    /* 0042db3b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042db3e: jmp 0x42db47 */ goto L_0042db47;
L_0042db40:; BB(0x0042db40);
    /* 0042db40: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0042db47:; BB(0x0042db47);
    /* 0042db47: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042db4a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0042db4d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042db54: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042db57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042db58: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042db5b: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042db60: mov ecx, dword ptr [eax + edx*4 + 0x148] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x148u));
    /* 0042db67: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42db6cu); f_005f5d50();
    /* 0042db6c: jmp 0x42daf9 */ goto L_0042daf9;
L_0042db6e:; BB(0x0042db6e);
    /* 0042db6e: jmp 0x42dc4d */ goto L_0042dc4d;
L_0042db73:; BB(0x0042db73);
    /* 0042db73: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042db79: call 0x434390 */ r_esp -= 4; W32(r_esp, 0x42db7eu); f_00434390();
    /* 0042db7e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042db81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042db83: je 0x42db90 */ if (fZ) goto L_0042db90;
L_0042db85:; BB(0x0042db85);
    /* 0042db85: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042db8b: call 0x42a160 */ r_esp -= 4; W32(r_esp, 0x42db90u); f_0042a160();
L_0042db90:; BB(0x0042db90);
    /* 0042db90: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042db96: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 0042db9c: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042dba2: mov ecx, dword ptr [ecx + 0x164] */ r_ecx = R32((u32)(r_ecx+0x164u));
    /* 0042dba8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042dbaa: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0042dbad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42dbafu); call_ind(t); }
    /* 0042dbaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dbb1: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042dbb7: mov ecx, dword ptr [ecx + 0x164] */ r_ecx = R32((u32)(r_ecx+0x164u));
    /* 0042dbbd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42dbc2u); f_005f5d50();
    /* 0042dbc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dbc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dbc6: mov edx, dword ptr [0x7906d0] */ r_edx = R32((u32)(0x7906d0u));
    /* 0042dbcc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042dbcf: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042dbd5: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042dbd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042dbda: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042dbdd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42dbdfu); call_ind(t); }
    /* 0042dbdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dbe1: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042dbe7: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042dbea: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x42dbefu); f_005fc420();
    /* 0042dbef: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042dbf5: mov eax, dword ptr [edx + 0xab4] */ r_eax = R32((u32)(r_edx+0xab4u));
    /* 0042dbfb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042dbfe: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dc02: jl 0x42dc0a */ if ((fS!=fO)) goto L_0042dc0a;
L_0042dc04:; BB(0x0042dc04);
    /* 0042dc04: cmp dword ptr [ebp - 0x18], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042dc08: jl 0x42dc0c */ if ((fS!=fO)) goto L_0042dc0c;
L_0042dc0a:; BB(0x0042dc0a);
    /* 0042dc0a: jmp 0x42dc4d */ goto L_0042dc4d;
L_0042dc0c:; BB(0x0042dc0c);
    /* 0042dc0c: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042dc12: mov edx, dword ptr [ecx + 0xabc] */ r_edx = R32((u32)(r_ecx+0xabcu));
    /* 0042dc18: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0042dc1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042dc1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc1f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc21: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042dc24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc25: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 0042dc2b: call 0x5e7e00 */ r_esp -= 4; W32(r_esp, 0x42dc30u); f_005e7e00();
    /* 0042dc30: jmp 0x42dc4d */ goto L_0042dc4d;
L_0042dc32:; BB(0x0042dc32);
    /* 0042dc32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0042dc34: jne 0x42dc4d */ if (!fZ) goto L_0042dc4d;
L_0042dc36:; BB(0x0042dc36);
    /* 0042dc36: push 0x628 */ { u32 v = 0x628u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc3b: push 0x6b6c70 */ { u32 v = 0x6b6c70u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc40: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0042dc45: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42dc4au); f_005e9f20();
    /* 0042dc4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042dc4d:; BB(0x0042dc4d);
    /* 0042dc4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042dc50: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042dc57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042dc58: mov esp, ebp */ r_esp = r_ebp;
    /* 0042dc5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042dc5b: ret  */ FN_RET(0x0042da90); r_esp += 4; return;
}

void f_00436b80(void) /* CrapsRollingDiceScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00436b80);
    /* 00436b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00436b83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00436b85: push 0x69e824 */ { u32 v = 0x69e824u; r_esp -= 4; W32(r_esp, v); }
    /* 00436b8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00436b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436b91: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00436b94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00436b99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436b9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00436b9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00436ba5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00436ba8: push 0x6b7fb0 */ { u32 v = 0x6b7fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436bad: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x436bb2u); f_0062fde0();
    /* 00436bb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436bb5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436bb8: call 0x436ac0 */ r_esp -= 4; W32(r_esp, 0x436bbdu); f_00436ac0();
    /* 00436bbd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436bc0: mov byte ptr [eax + 0xad4], 1 */ W8((u32)(r_eax+0xad4u), 0x1u);
    /* 00436bc7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436bca: mov edx, dword ptr [ecx + 0xabc] */ r_edx = R32((u32)(r_ecx+0xabcu));
    /* 00436bd0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00436bd3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00436bd6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00436bd9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00436bdc: mov dword ptr [ecx + 0xabc], eax */ W32((u32)(r_ecx+0xabcu), r_eax);
    /* 00436be2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00436be4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x436be9u); f_00686d82();
    /* 00436be9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436bec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00436bef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00436bf6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436bfa: je 0x436c17 */ if (fZ) goto L_00436c17;
L_00436bfc:; BB(0x00436bfc);
    /* 00436bfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436bfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436c01: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x436c06u); f_005fc0d0();
    /* 00436c06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00436c09: mov dword ptr [edx], 0x6b7f90 */ W32((u32)(r_edx), 0x6b7f90u);
    /* 00436c0f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00436c12: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00436c15: jmp 0x436c1e */ goto L_00436c1e;
L_00436c17:; BB(0x00436c17);
    /* 00436c17: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00436c1e:; BB(0x00436c1e);
    /* 00436c1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00436c21: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00436c24: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00436c2b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00436c2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00436c2f: mov eax, dword ptr [0x7906d0] */ r_eax = R32((u32)(0x7906d0u));
    /* 00436c34: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00436c37: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x436c3cu); f_005fc420();
    /* 00436c3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436c3f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00436c45: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00436c48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436c49: fld1  */ FPUSH(1.0);
    /* 00436c4b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00436c4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c50: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c56: push 0x18a98 */ { u32 v = 0x18a98u; r_esp -= 4; W32(r_esp, v); }
    /* 00436c5b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00436c61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00436c63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00436c69: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00436c6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x436c71u); call_ind(t); }
    /* 00436c71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00436c74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00436c7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00436c7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00436c7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436c7f: ret  */ FN_RET(0x00436b80); r_esp += 4; return;
}

