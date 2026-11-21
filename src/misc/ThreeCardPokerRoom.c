#include "protos.h"

void f_0053e9b0(void) /* ThreeCardPokerRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053e9b0);
    /* 0053e9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053e9b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9b5: push 0x6a4d08 */ { u32 v = 0x6a4d08u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053e9c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9c2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053e9c7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053e9c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9ca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053e9cd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053e9d3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053e9d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053e9d9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x53e9deu); f_005d7b60();
    /* 0053e9de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053e9e5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053e9e8: mov dword ptr [eax], 0x6c5dac */ W32((u32)(r_eax), 0x6c5dacu);
    /* 0053e9ee: push 0x310e98 */ { u32 v = 0x310e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0053e9f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053e9f6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x53e9fbu); f_005f1ad0();
    /* 0053e9fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053e9fe: mov dword ptr [0x7933e8], ecx */ W32((u32)(0x7933e8u), r_ecx);
    /* 0053ea04: mov dword ptr [0x7933ec], 0 */ W32((u32)(0x7933ecu), 0x0u);
    /* 0053ea0e: mov dword ptr [0x7933f0], 0 */ W32((u32)(0x7933f0u), 0x0u);
    /* 0053ea18: mov dword ptr [0x7933f4], 0 */ W32((u32)(0x7933f4u), 0x0u);
    /* 0053ea22: mov dword ptr [0x7933f8], 0 */ W32((u32)(0x7933f8u), 0x0u);
    /* 0053ea2c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ea33: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053ea36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ea39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053ea40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053ea41: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ea43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ea44: ret  */ FN_RET(0x0053e9b0); r_esp += 4; return;
}

void f_0053ea50(void) /* ThreeCardPokerRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ea50);
    /* 0053ea50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ea51: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ea53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ea55: push 0x6a4d2b */ { u32 v = 0x6a4d2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ea5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053ea60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ea61: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ea64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053ea69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053ea6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ea6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053ea6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053ea75: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0053ea78: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053ea7b: mov dword ptr [eax], 0x6c5dac */ W32((u32)(r_eax), 0x6c5dacu);
    /* 0053ea81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053ea88: mov dword ptr [0x7933e8], 0 */ W32((u32)(0x7933e8u), 0x0u);
    /* 0053ea92: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053ea98: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053ea9b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ea9e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0053eaa1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eaa5: je 0x53eaba */ if (fZ) goto L_0053eaba;
L_0053eaa7:; BB(0x0053eaa7);
    /* 0053eaa7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053eaa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053eaac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053eaae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053eab1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053eab3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53eab5u); call_ind(t); }
    /* 0053eab5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053eab8: jmp 0x53eac1 */ goto L_0053eac1;
L_0053eaba:; BB(0x0053eaba);
    /* 0053eaba: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0053eac1:; BB(0x0053eac1);
    /* 0053eac1: mov dword ptr [0x7933ec], 0 */ W32((u32)(0x7933ecu), 0x0u);
    /* 0053eacb: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053ead1: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053ead4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ead7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053eada: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eade: je 0x53eaf3 */ if (fZ) goto L_0053eaf3;
L_0053eae0:; BB(0x0053eae0);
    /* 0053eae0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053eae2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053eae5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053eae7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053eaea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053eaec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53eaeeu); call_ind(t); }
    /* 0053eaee: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0053eaf1: jmp 0x53eafa */ goto L_0053eafa;
L_0053eaf3:; BB(0x0053eaf3);
    /* 0053eaf3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0053eafa:; BB(0x0053eafa);
    /* 0053eafa: mov dword ptr [0x7933f0], 0 */ W32((u32)(0x7933f0u), 0x0u);
    /* 0053eb04: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053eb0a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053eb0d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053eb10: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053eb13: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eb17: je 0x53eb2c */ if (fZ) goto L_0053eb2c;
L_0053eb19:; BB(0x0053eb19);
    /* 0053eb19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053eb1b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053eb1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053eb20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053eb23: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053eb25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53eb27u); call_ind(t); }
    /* 0053eb27: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053eb2a: jmp 0x53eb33 */ goto L_0053eb33;
L_0053eb2c:; BB(0x0053eb2c);
    /* 0053eb2c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0053eb33:; BB(0x0053eb33);
    /* 0053eb33: mov dword ptr [0x7933f4], 0 */ W32((u32)(0x7933f4u), 0x0u);
    /* 0053eb3d: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 0053eb43: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053eb46: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053eb49: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0053eb4c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eb50: je 0x53eb65 */ if (fZ) goto L_0053eb65;
L_0053eb52:; BB(0x0053eb52);
    /* 0053eb52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053eb54: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053eb57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053eb59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053eb5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053eb5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53eb60u); call_ind(t); }
    /* 0053eb60: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053eb63: jmp 0x53eb6c */ goto L_0053eb6c;
L_0053eb65:; BB(0x0053eb65);
    /* 0053eb65: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0053eb6c:; BB(0x0053eb6c);
    /* 0053eb6c: mov dword ptr [0x7933f8], 0 */ W32((u32)(0x7933f8u), 0x0u);
    /* 0053eb76: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053eb7d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053eb80: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x53eb85u); f_005d7bd0();
    /* 0053eb85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053eb88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053eb8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053eb90: mov esp, ebp */ r_esp = r_ebp;
    /* 0053eb92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053eb93: ret  */ FN_RET(0x0053ea50); r_esp += 4; return;
}

void f_0053eba0(void) /* ThreeCardPokerRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053eba0);
    /* 0053eba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053eba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053eba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053eba5: push 0x6a4d7d */ { u32 v = 0x6a4d7du; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053ebb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebb1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ebb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053ebb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053ebbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053ebbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053ebc5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0053ebc8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053ebcb: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x53ebd0u); f_005d8230();
    /* 0053ebd0: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ebd5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ebdau); f_00686d82();
    /* 0053ebda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ebdd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053ebe0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053ebe7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ebeb: je 0x53ebfa */ if (fZ) goto L_0053ebfa;
L_0053ebed:; BB(0x0053ebed);
    /* 0053ebed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ebf0: call 0x5404f0 */ r_esp -= 4; W32(r_esp, 0x53ebf5u); f_005404f0();
    /* 0053ebf5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053ebf8: jmp 0x53ec01 */ goto L_0053ec01;
L_0053ebfa:; BB(0x0053ebfa);
    /* 0053ebfa: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0053ec01:; BB(0x0053ec01);
    /* 0053ec01: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053ec04: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053ec07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ec0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053ec11: mov dword ptr [0x7933ec], ecx */ W32((u32)(0x7933ecu), r_ecx);
    /* 0053ec17: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053ec1d: call 0x540700 */ r_esp -= 4; W32(r_esp, 0x53ec22u); f_00540700();
    /* 0053ec22: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ec24: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ec29u); f_00686d82();
    /* 0053ec29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ec2c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053ec2f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053ec36: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ec3a: je 0x53ec49 */ if (fZ) goto L_0053ec49;
L_0053ec3c:; BB(0x0053ec3c);
    /* 0053ec3c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ec3f: call 0x53d2e0 */ r_esp -= 4; W32(r_esp, 0x53ec44u); f_0053d2e0();
    /* 0053ec44: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053ec47: jmp 0x53ec50 */ goto L_0053ec50;
L_0053ec49:; BB(0x0053ec49);
    /* 0053ec49: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0053ec50:; BB(0x0053ec50);
    /* 0053ec50: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053ec53: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053ec56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ec5d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ec60: mov dword ptr [0x7933f0], eax */ W32((u32)(0x7933f0u), r_eax);
    /* 0053ec65: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ec6a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ec6fu); f_00686d82();
    /* 0053ec6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ec72: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053ec75: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053ec7c: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ec80: je 0x53ec8f */ if (fZ) goto L_0053ec8f;
L_0053ec82:; BB(0x0053ec82);
    /* 0053ec82: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053ec85: call 0x53a770 */ r_esp -= 4; W32(r_esp, 0x53ec8au); f_0053a770();
    /* 0053ec8a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0053ec8d: jmp 0x53ec96 */ goto L_0053ec96;
L_0053ec8f:; BB(0x0053ec8f);
    /* 0053ec8f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0053ec96:; BB(0x0053ec96);
    /* 0053ec96: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053ec99: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053ec9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053eca3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053eca6: mov dword ptr [0x7933f4], edx */ W32((u32)(0x7933f4u), r_edx);
    /* 0053ecac: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053ecb2: call 0x53aa90 */ r_esp -= 4; W32(r_esp, 0x53ecb7u); f_0053aa90();
    /* 0053ecb7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ecb9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ecbeu); f_00686d82();
    /* 0053ecbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ecc1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053ecc4: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0053eccb: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eccf: je 0x53ecde */ if (fZ) goto L_0053ecde;
L_0053ecd1:; BB(0x0053ecd1);
    /* 0053ecd1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053ecd4: call 0x539a10 */ r_esp -= 4; W32(r_esp, 0x53ecd9u); f_00539a10();
    /* 0053ecd9: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053ecdc: jmp 0x53ece5 */ goto L_0053ece5;
L_0053ecde:; BB(0x0053ecde);
    /* 0053ecde: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0053ece5:; BB(0x0053ece5);
    /* 0053ece5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053ece8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053eceb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ecf2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053ecf5: mov dword ptr [0x7933f8], ecx */ W32((u32)(0x7933f8u), r_ecx);
    /* 0053ecfb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ecfd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53ed02u); f_00686d82();
    /* 0053ed02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ed05: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053ed08: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0053ed0f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ed13: je 0x53ed30 */ if (fZ) goto L_0053ed30;
L_0053ed15:; BB(0x0053ed15);
    /* 0053ed15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ed17: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053ed1a: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x53ed1fu); f_005fc0d0();
    /* 0053ed1f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053ed22: mov dword ptr [edx], 0x6c60ac */ W32((u32)(r_edx), 0x6c60acu);
    /* 0053ed28: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0053ed2b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053ed2e: jmp 0x53ed37 */ goto L_0053ed37;
L_0053ed30:; BB(0x0053ed30);
    /* 0053ed30: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0053ed37:; BB(0x0053ed37);
    /* 0053ed37: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053ed3a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0053ed3d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ed44: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053ed47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ed48: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053ed4b: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x53ed50u); f_005f1b70();
    /* 0053ed50: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053ed53: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053ed56: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053ed59: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053ed5c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053ed5e: mov ecx, eax */ r_ecx = r_eax;
    /* 0053ed60: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0053ed63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ed65u); call_ind(t); }
    /* 0053ed65: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053ed68: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x53ed6du); f_005d85e0();
    /* 0053ed6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ed6f: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053ed75: call 0x53d320 */ r_esp -= 4; W32(r_esp, 0x53ed7au); f_0053d320();
    /* 0053ed7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ed7d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053ed84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053ed85: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ed87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ed88: ret  */ FN_RET(0x0053eba0); r_esp += 4; return;
}

void f_0053ed90(void) /* ThreeCardPokerRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ed90);
    /* 0053ed90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ed91: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ed93: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ed96: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053ed99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053ed9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ed9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053eda0: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x53eda5u); f_005d7f40();
    /* 0053eda5: cmp dword ptr [0x7933ec], 0 */ {  u32 a = R32((u32)(0x7933ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053edac: je 0x53edbe */ if (fZ) goto L_0053edbe;
L_0053edae:; BB(0x0053edae);
    /* 0053edae: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053edb4: call 0x540d00 */ r_esp -= 4; W32(r_esp, 0x53edb9u); f_00540d00();
    /* 0053edb9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053edbc: jmp 0x53edc5 */ goto L_0053edc5;
L_0053edbe:; BB(0x0053edbe);
    /* 0053edbe: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_0053edc5:; BB(0x0053edc5);
    /* 0053edc5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053edc8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053edcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053edce: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053edd2: jne 0x53ee79 */ if (!fZ) goto L_0053ee79;
L_0053edd8:; BB(0x0053edd8);
    /* 0053edd8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053eddb: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0053eddf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ede1: jne 0x53ee79 */ if (!fZ) goto L_0053ee79;
L_0053ede7:; BB(0x0053ede7);
    /* 0053ede7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053edeb: je 0x53ee79 */ if (fZ) goto L_0053ee79;
L_0053edf1:; BB(0x0053edf1);
    /* 0053edf1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053edf4: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0053edf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053edf9: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x53edffu); call_ind(t); }
    /* 0053edff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ee02: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053ee05: cmp dword ptr [ebp - 0x1c], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee09: je 0x53ee0d */ if (fZ) goto L_0053ee0d;
L_0053ee0b:; BB(0x0053ee0b);
    /* 0053ee0b: jmp 0x53ee79 */ goto L_0053ee79;
L_0053ee0d:; BB(0x0053ee0d);
    /* 0053ee0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ee10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ee11: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53ee16u); f_005dcb00();
    /* 0053ee16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ee19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee1b: je 0x53ee79 */ if (fZ) goto L_0053ee79;
L_0053ee1d:; BB(0x0053ee1d);
    /* 0053ee1d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ee20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ee21: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53ee26u); f_005dcb00();
    /* 0053ee26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ee29: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053ee2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053ee2f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53ee34u); f_0063aac0();
    /* 0053ee34: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053ee36: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053ee39: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee3d: je 0x53ee5b */ if (fZ) goto L_0053ee5b;
L_0053ee3f:; BB(0x0053ee3f);
    /* 0053ee3f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053ee42: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53ee47u); f_0063aac0();
    /* 0053ee47: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053ee49: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053ee4c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee50: je 0x53ee5b */ if (fZ) goto L_0053ee5b;
L_0053ee52:; BB(0x0053ee52);
    /* 0053ee52: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0053ee59: jmp 0x53ee62 */ goto L_0053ee62;
L_0053ee5b:; BB(0x0053ee5b);
    /* 0053ee5b: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0053ee62:; BB(0x0053ee62);
    /* 0053ee62: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0053ee66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee68: je 0x53ee79 */ if (fZ) goto L_0053ee79;
L_0053ee6a:; BB(0x0053ee6a);
    /* 0053ee6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ee6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ee6e: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053ee74: call 0x540ed0 */ r_esp -= 4; W32(r_esp, 0x53ee79u); f_00540ed0();
L_0053ee79:; BB(0x0053ee79);
    /* 0053ee79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ee7c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0053ee80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee82: jne 0x53eef9 */ if (!fZ) goto L_0053eef9;
L_0053ee84:; BB(0x0053ee84);
    /* 0053ee84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053ee87: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee8b: jne 0x53eef9 */ if (!fZ) goto L_0053eef9;
L_0053ee8d:; BB(0x0053ee8d);
    /* 0053ee8d: cmp dword ptr [0x7933f4], 0 */ {  u32 a = R32((u32)(0x7933f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee94: je 0x53eef9 */ if (fZ) goto L_0053eef9;
L_0053ee96:; BB(0x0053ee96);
    /* 0053ee96: cmp dword ptr [0x7933ec], 0 */ {  u32 a = R32((u32)(0x7933ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ee9d: je 0x53eef9 */ if (fZ) goto L_0053eef9;
L_0053ee9f:; BB(0x0053ee9f);
    /* 0053ee9f: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053eea5: cmp dword ptr [ecx + 0x94], 0 */ {  u32 a = R32((u32)(r_ecx+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eeac: je 0x53eef9 */ if (fZ) goto L_0053eef9;
L_0053eeae:; BB(0x0053eeae);
    /* 0053eeae: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053eeb4: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eebb: je 0x53eef9 */ if (fZ) goto L_0053eef9;
L_0053eebd:; BB(0x0053eebd);
    /* 0053eebd: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053eec2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053eec8: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x53eecdu); f_005f54a0();
    /* 0053eecd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053eed0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eed2: jne 0x53eeec */ if (!fZ) goto L_0053eeec;
L_0053eed4:; BB(0x0053eed4);
    /* 0053eed4: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053eeda: mov ecx, dword ptr [edx + 0x98] */ r_ecx = R32((u32)(r_edx+0x98u));
    /* 0053eee0: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x53eee5u); f_005f54a0();
    /* 0053eee5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053eee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053eeea: je 0x53eef9 */ if (fZ) goto L_0053eef9;
L_0053eeec:; BB(0x0053eeec);
    /* 0053eeec: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053eef2: mov byte ptr [ecx + 0xfa], 1 */ W8((u32)(r_ecx+0xfau), 0x1u);
L_0053eef9:; BB(0x0053eef9);
    /* 0053eef9: mov esp, ebp */ r_esp = r_ebp;
    /* 0053eefb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053eefc: ret 4 */ FN_RET(0x0053ed90); r_esp += 8; return;
}

void f_0053ef00(void) /* ThreeCardPokerRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ef00);
    /* 0053ef00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef01: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ef03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ef06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053ef09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053ef0c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053ef0f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ef16: je 0x53ef26 */ if (fZ) goto L_0053ef26;
L_0053ef18:; BB(0x0053ef18);
    /* 0053ef18: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053ef1f: je 0x53ef79 */ if (fZ) goto L_0053ef79;
L_0053ef21:; BB(0x0053ef21);
    /* 0053ef21: jmp 0x53efae */ goto L_0053efae;
L_0053ef26:; BB(0x0053ef26);
    /* 0053ef26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef28: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef30: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x53ef35u); f_005fe640();
    /* 0053ef35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef37: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef3f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x53ef44u); f_005fe640();
    /* 0053ef44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef46: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef4e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x53ef53u); f_005fe640();
    /* 0053ef53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef55: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef5a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef5d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x53ef62u); f_005fe640();
    /* 0053ef62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef64: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef66: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef68: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef70: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x53ef75u); f_005fe240();
    /* 0053ef75: jmp 0x53efae */ goto L_0053efae;
L_0053ef79:; BB(0x0053ef79);
    /* 0053ef79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef7b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef80: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef83: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x53ef88u); f_005fe640();
    /* 0053ef88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef8a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef8c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef8e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ef96: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x53ef9bu); f_005fe240();
    /* 0053ef9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053ef9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053efa1: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053efa6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053efa9: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x53efaeu); f_005fe240();
L_0053efae:; BB(0x0053efae);
    /* 0053efae: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053efb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053efb2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053efb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053efb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053efb9: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x53efbeu); f_005d8670();
    /* 0053efbe: mov esp, ebp */ r_esp = r_ebp;
    /* 0053efc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053efc1: ret 8 */ FN_RET(0x0053ef00); r_esp += 12; return;
}

void f_0053efd0(void) /* ThreeCardPokerRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053efd0);
    /* 0053efd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053efd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053efd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053efd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053efd7: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053efdc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053efe2: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x53efe7u); f_005df2e0();
    /* 0053efe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053efe8: push 0x310e99 */ { u32 v = 0x310e99u; r_esp -= 4; W32(r_esp, v); }
    /* 0053efed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053eff0: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x53eff5u); f_005f1e60();
    /* 0053eff5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053eff8: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x53effdu); f_0064e430();
    /* 0053effd: mov esp, ebp */ r_esp = r_ebp;
    /* 0053efff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f000: ret  */ FN_RET(0x0053efd0); r_esp += 4; return;
}

void f_0053f010(void) /* ThreeCardPokerRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f010);
    /* 0053f010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f011: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f013: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f016: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053f019: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053f01e: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053f024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f027: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f02a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f02b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f030u); f_005dcb00();
    /* 0053f030: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f033: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f035: je 0x53f121 */ if (fZ) goto L_0053f121;
L_0053f03b:; BB(0x0053f03b);
    /* 0053f03b: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053f040: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053f046: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053f049: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053f04c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f04d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f052u); f_005dcb00();
    /* 0053f052: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f055: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053f058: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053f05b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53f060u); f_0063aac0();
    /* 0053f060: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053f062: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053f065: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f069: je 0x53f087 */ if (fZ) goto L_0053f087;
L_0053f06b:; BB(0x0053f06b);
    /* 0053f06b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053f06e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x53f073u); f_0063aac0();
    /* 0053f073: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0053f075: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053f078: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f07c: je 0x53f087 */ if (fZ) goto L_0053f087;
L_0053f07e:; BB(0x0053f07e);
    /* 0053f07e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0053f085: jmp 0x53f08e */ goto L_0053f08e;
L_0053f087:; BB(0x0053f087);
    /* 0053f087: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0053f08e:; BB(0x0053f08e);
    /* 0053f08e: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0053f092: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f094: je 0x53f121 */ if (fZ) goto L_0053f121;
L_0053f09a:; BB(0x0053f09a);
    /* 0053f09a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f09d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053f0a0: cmp dword ptr [ebp - 0x2c], 0x310e9a */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x310e9au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f0a7: je 0x53f0bd */ if (fZ) goto L_0053f0bd;
L_0053f0a9:; BB(0x0053f0a9);
    /* 0053f0a9: cmp dword ptr [ebp - 0x2c], 0x310e9b */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x310e9bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f0b0: je 0x53f0dd */ if (fZ) goto L_0053f0dd;
L_0053f0b2:; BB(0x0053f0b2);
    /* 0053f0b2: cmp dword ptr [ebp - 0x2c], 0x310e9c */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x310e9cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f0b9: je 0x53f0ff */ if (fZ) goto L_0053f0ff;
L_0053f0bb:; BB(0x0053f0bb);
    /* 0053f0bb: jmp 0x53f121 */ goto L_0053f121;
L_0053f0bd:; BB(0x0053f0bd);
    /* 0053f0bd: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f0c3: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 0053f0c9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053f0cc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053f0cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f0d0: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f0d6: call 0x540ed0 */ r_esp -= 4; W32(r_esp, 0x53f0dbu); f_00540ed0();
    /* 0053f0db: jmp 0x53f121 */ goto L_0053f121;
L_0053f0dd:; BB(0x0053f0dd);
    /* 0053f0dd: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f0e3: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 0053f0e9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0053f0ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f0ee: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053f0f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f0f2: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f0f8: call 0x541600 */ r_esp -= 4; W32(r_esp, 0x53f0fdu); f_00541600();
    /* 0053f0fd: jmp 0x53f131 */ goto L_0053f131;
L_0053f0ff:; BB(0x0053f0ff);
    /* 0053f0ff: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f105: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 0053f10b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053f10e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f110: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053f113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f114: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f11a: call 0x541600 */ r_esp -= 4; W32(r_esp, 0x53f11fu); f_00541600();
    /* 0053f11f: jmp 0x53f131 */ goto L_0053f131;
L_0053f121:; BB(0x0053f121);
    /* 0053f121: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053f124: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f125: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053f128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f129: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053f12c: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x53f131u); f_005dc7d0();
L_0053f131:; BB(0x0053f131);
    /* 0053f131: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f134: ret 8 */ FN_RET(0x0053f010); r_esp += 12; return;
}

void f_0053f140(void) /* ThreeCardPokerRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f140);
    /* 0053f140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f141: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f147: cmp dword ptr [0x7933ec], 0 */ {  u32 a = R32((u32)(0x7933ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f14e: jne 0x53f154 */ if (!fZ) goto L_0053f154;
L_0053f150:; BB(0x0053f150);
    /* 0053f150: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0053f152: jmp 0x53f15f */ goto L_0053f15f;
L_0053f154:; BB(0x0053f154);
    /* 0053f154: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f15a: call 0x540a10 */ r_esp -= 4; W32(r_esp, 0x53f15fu); f_00540a10();
L_0053f15f:; BB(0x0053f15f);
    /* 0053f15f: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f161: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f162: ret  */ FN_RET(0x0053f140); r_esp += 4; return;
}

void f_0053f170(void) /* ThreeCardPokerRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f170);
    /* 0053f170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f171: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f173: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f176: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053f179: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053f17e: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053f184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f187: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f18a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f18b: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f191: call 0x540de0 */ r_esp -= 4; W32(r_esp, 0x53f196u); f_00540de0();
    /* 0053f196: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053f199: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f19b: je 0x53f1b7 */ if (fZ) goto L_0053f1b7;
L_0053f19d:; BB(0x0053f19d);
    /* 0053f19d: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f1a3: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x53f1a8u); f_00540af0();
    /* 0053f1a8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053f1ab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053f1ae: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 0053f1b5: jmp 0x53f1cf */ goto L_0053f1cf;
L_0053f1b7:; BB(0x0053f1b7);
    /* 0053f1b7: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f1bd: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x53f1c2u); f_00540af0();
    /* 0053f1c2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053f1c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053f1c8: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
L_0053f1cf:; BB(0x0053f1cf);
    /* 0053f1cf: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f1d5: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x53f1dau); f_00540af0();
    /* 0053f1da: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053f1dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053f1e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053f1e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053f1e5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0053f1e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53f1eau); call_ind(t); }
    /* 0053f1ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053f1ed: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x53f1f2u); f_005db890();
    /* 0053f1f2: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053f1f8: call 0x53d3c0 */ r_esp -= 4; W32(r_esp, 0x53f1fdu); f_0053d3c0();
    /* 0053f1fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f1ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f200: ret  */ FN_RET(0x0053f170); r_esp += 4; return;
}

void f_0053f210(void) /* ThreeCardPokerRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f210);
    /* 0053f210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f211: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f217: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0053f21b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f21d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0053f220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f221: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f227: call 0x5406d0 */ r_esp -= 4; W32(r_esp, 0x53f22cu); f_005406d0();
    /* 0053f22c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053f232: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x53f237u); f_00637610();
    /* 0053f237: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053f23d: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x53f242u); f_005db9b0();
    /* 0053f242: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f248: call 0x5408b0 */ r_esp -= 4; W32(r_esp, 0x53f24du); f_005408b0();
    /* 0053f24d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f24f: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053f255: call 0x53d320 */ r_esp -= 4; W32(r_esp, 0x53f25au); f_0053d320();
    /* 0053f25a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f25c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f25d: ret 4 */ FN_RET(0x0053f210); r_esp += 8; return;
}

void f_0053f260(void) /* ThreeCardPokerRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f260);
    /* 0053f260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f261: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f263: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f266: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053f269: mov dword ptr [ebp - 0x10], 0x1b8 */ W32((u32)(r_ebp+0xfffffff0u), 0x1b8u);
    /* 0053f270: mov dword ptr [ebp - 0xc], 0x62 */ W32((u32)(r_ebp+0xfffffff4u), 0x62u);
    /* 0053f277: mov dword ptr [ebp - 8], 0x20f */ W32((u32)(r_ebp+0xfffffff8u), 0x20fu);
    /* 0053f27e: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0053f285: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f288: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0053f28c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f28e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f28f: ret 4 */ FN_RET(0x0053f260); r_esp += 8; return;
}

void f_0053f2a0(void) /* ThreeCardPokerRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f2a0);
    /* 0053f2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f2a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f2a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053f2a9: mov dword ptr [ebp - 0x10], 0x10b */ W32((u32)(r_ebp+0xfffffff0u), 0x10bu);
    /* 0053f2b0: mov dword ptr [ebp - 0xc], 0x10b */ W32((u32)(r_ebp+0xfffffff4u), 0x10bu);
    /* 0053f2b7: mov dword ptr [ebp - 8], 0x51 */ W32((u32)(r_ebp+0xfffffff8u), 0x51u);
    /* 0053f2be: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 0053f2c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f2c8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0053f2cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f2ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f2cf: ret 4 */ FN_RET(0x0053f2a0); r_esp += 8; return;
}

void f_0053f2e0(void) /* ThreeCardPokerRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f2e0);
    /* 0053f2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f2e7: cmp dword ptr [0x7933ec], 0 */ {  u32 a = R32((u32)(0x7933ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f2ee: je 0x53f2fd */ if (fZ) goto L_0053f2fd;
L_0053f2f0:; BB(0x0053f2f0);
    /* 0053f2f0: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f2f6: call 0x540af0 */ r_esp -= 4; W32(r_esp, 0x53f2fbu); f_00540af0();
    /* 0053f2fb: jmp 0x53f2ff */ goto L_0053f2ff;
L_0053f2fd:; BB(0x0053f2fd);
    /* 0053f2fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0053f2ff:; BB(0x0053f2ff);
    /* 0053f2ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f302: ret  */ FN_RET(0x0053f2e0); r_esp += 4; return;
}

void f_0053f310(void) /* ThreeCardPokerRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f310);
    /* 0053f310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f311: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f316: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053f319: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053f320: jmp 0x53f32b */ goto L_0053f32b;
L_0053f322:; BB(0x0053f322);
    /* 0053f322: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f325: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f328: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0053f32b:; BB(0x0053f32b);
    /* 0053f32b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f32f: jge 0x53f357 */ if ((fS==fO)) goto L_0053f357;
L_0053f331:; BB(0x0053f331);
    /* 0053f331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f334: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053f33a: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0053f33e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f341: je 0x53f355 */ if (fZ) goto L_0053f355;
L_0053f343:; BB(0x0053f343);
    /* 0053f343: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f346: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053f34c: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0053f350: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x53f355u); f_005cd330();
L_0053f355:; BB(0x0053f355);
    /* 0053f355: jmp 0x53f322 */ goto L_0053f322;
L_0053f357:; BB(0x0053f357);
    /* 0053f357: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f35a: ret 4 */ FN_RET(0x0053f310); r_esp += 8; return;
}

void f_0053f360(void) /* ThreeCardPokerRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f360);
    /* 0053f360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f361: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f363: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f366: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053f369: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053f370: jmp 0x53f37b */ goto L_0053f37b;
L_0053f372:; BB(0x0053f372);
    /* 0053f372: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f375: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f378: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0053f37b:; BB(0x0053f37b);
    /* 0053f37b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f37f: jge 0x53f429 */ if ((fS==fO)) goto L_0053f429;
L_0053f385:; BB(0x0053f385);
    /* 0053f385: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f388: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f38b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f38e: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053f394: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0053f398: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f39b: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f39e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f3a1: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053f3a7: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0053f3ab: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0053f3ad: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0053f3b3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53f3b5u); call_ind(t); }
    /* 0053f3b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053f3b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f3ba: je 0x53f40c */ if (fZ) goto L_0053f40c;
L_0053f3bc:; BB(0x0053f3bc);
    /* 0053f3bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f3bf: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f3c2: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f3c5: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053f3cb: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0053f3cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053f3d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f3d5: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0053f3d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053f3db: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0053f3df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f3e1: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0053f3e4: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0053f3e7: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0053f3eb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0053f3ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053f3f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053f3f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f3f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053f3f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f3f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f3fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f3fd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f402u); f_005dcb00();
    /* 0053f402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f405: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f407: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x53f40cu); f_005d5cf0();
L_0053f40c:; BB(0x0053f40c);
    /* 0053f40c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f40f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f412: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f415: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053f41b: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0053f41f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x53f424u); f_005cb9b0();
    /* 0053f424: jmp 0x53f372 */ goto L_0053f372;
L_0053f429:; BB(0x0053f429);
    /* 0053f429: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f42b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f42c: ret 4 */ FN_RET(0x0053f360); r_esp += 8; return;
}

void f_0053f430(void) /* ThreeCardPokerRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f430);
    /* 0053f430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f431: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f433: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f436: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053f439: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f43b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f43d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53f442u); f_0064c8a0();
    /* 0053f442: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f445: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053f448: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0053f44b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053f44e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053f451: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0053f453: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053f456: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0053f459: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f45d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f462u); f_005dcb00();
    /* 0053f462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f465: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053f468: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053f46b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 0053f471: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 0053f474: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0053f478: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f47a: je 0x53f47e */ if (fZ) goto L_0053f47e;
L_0053f47c:; BB(0x0053f47c);
    /* 0053f47c: jmp 0x53f4ed */ goto L_0053f4ed;
L_0053f47e:; BB(0x0053f47e);
    /* 0053f47e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053f485: jmp 0x53f490 */ goto L_0053f490;
L_0053f487:; BB(0x0053f487);
    /* 0053f487: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f48a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053f48d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0053f490:; BB(0x0053f490);
    /* 0053f490: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f494: jge 0x53f4ed */ if ((fS==fO)) goto L_0053f4ed;
L_0053f496:; BB(0x0053f496);
    /* 0053f496: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053f499: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f49c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053f49f: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053f4a4: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0053f4a8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0053f4ab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053f4ae: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0053f4b1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053f4b4: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0053f4b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053f4ba: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0053f4bd: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 0053f4c0: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0053f4c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053f4c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053f4ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053f4cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f4ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053f4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f4d2: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0053f4d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f4d6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053f4d9: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x53f4deu); f_0064c5c0();
    /* 0053f4de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053f4e0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0053f4e3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053f4e6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0053f4e8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0053f4eb: jmp 0x53f487 */ goto L_0053f487;
L_0053f4ed:; BB(0x0053f4ed);
    /* 0053f4ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f4f0: ret 8 */ FN_RET(0x0053f430); r_esp += 12; return;
}

void f_0053f500(void) /* ThreeCardPokerRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f500);
    /* 0053f500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f501: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f507: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f50d: call 0x540670 */ r_esp -= 4; W32(r_esp, 0x53f512u); f_00540670();
    /* 0053f512: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f515: ret  */ FN_RET(0x0053f500); r_esp += 4; return;
}

void f_0053f520(void) /* ThreeCardPokerRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f520);
    /* 0053f520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f521: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f527: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f529: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f52b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f52e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053f531: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f534: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053f537: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053f539: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f53b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053f53e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53f540u); call_ind(t); }
    /* 0053f540: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f543: ret  */ FN_RET(0x0053f520); r_esp += 4; return;
}

void f_0053f550(void) /* ThreeCardPokerRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f550);
    /* 0053f550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f551: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f553: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f556: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f557: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f558: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053f55b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f55e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f55f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f564u); f_005dcb00();
    /* 0053f564: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f567: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 0053f56d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f56e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0053f574: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f575: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0053f578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f579: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f57b: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f581: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x53f586u); f_00540630();
    /* 0053f586: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f589: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f58b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x53f590u); f_0064c5c0();
    /* 0053f590: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0053f592: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0053f595: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f597: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f59d: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x53f5a2u); f_00540630();
    /* 0053f5a2: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 0053f5a5: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 0053f5a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f5b1u); f_005dcb00();
    /* 0053f5b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f5b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f5b6: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x53f5bbu); f_0063b0a0();
    /* 0053f5bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f5bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053f5bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f5bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f5c0: ret 4 */ FN_RET(0x0053f550); r_esp += 8; return;
}

void f_0053f5d0(void) /* ThreeCardPokerRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f5d0);
    /* 0053f5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f5d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f5d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053f5db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f5de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f5e4u); f_005dcb00();
    /* 0053f5e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f5e7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0053f5ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5ee: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 0053f5f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5f5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0053f5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f5fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f5fd: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f603: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x53f608u); f_00540630();
    /* 0053f608: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f60b: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f60d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x53f612u); f_0064c5c0();
    /* 0053f612: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0053f614: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0053f617: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053f61a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f61b: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f621: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x53f626u); f_00540630();
    /* 0053f626: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0053f629: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 0053f62c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053f62f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f630: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53f635u); f_005dcb00();
    /* 0053f635: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f638: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f63a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x53f63fu); f_0063b0a0();
    /* 0053f63f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053f640: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053f641: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f643: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f644: ret 4 */ FN_RET(0x0053f5d0); r_esp += 8; return;
}

void f_0053f650(void) /* ThreeCardPokerRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f650);
    /* 0053f650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f651: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f653: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f656: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0053f659: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f65b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053f661: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x53f666u); f_005df700();
    /* 0053f666: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053f669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f66b: je 0x53f67c */ if (fZ) goto L_0053f67c;
L_0053f66d:; BB(0x0053f66d);
    /* 0053f66d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053f670: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x53f675u); f_005da7b0();
    /* 0053f675: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053f678: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f67a: je 0x53f67e */ if (fZ) goto L_0053f67e;
L_0053f67c:; BB(0x0053f67c);
    /* 0053f67c: jmp 0x53f6b5 */ goto L_0053f6b5;
L_0053f67e:; BB(0x0053f67e);
    /* 0053f67e: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053f684: cmp dword ptr [edx + 0x4c], 0 */ {  u32 a = R32((u32)(r_edx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f688: je 0x53f6b5 */ if (fZ) goto L_0053f6b5;
L_0053f68a:; BB(0x0053f68a);
    /* 0053f68a: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053f68f: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053f695: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f698: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f69b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f69c: mov ecx, dword ptr [0x7933f8] */ r_ecx = R32((u32)(0x7933f8u));
    /* 0053f6a2: call 0x539f40 */ r_esp -= 4; W32(r_esp, 0x53f6a7u); f_00539f40();
    /* 0053f6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6a8: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053f6ad: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0053f6b0: call 0x53cf00 */ r_esp -= 4; W32(r_esp, 0x53f6b5u); f_0053cf00();
L_0053f6b5:; BB(0x0053f6b5);
    /* 0053f6b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f6b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f6b8: ret 4 */ FN_RET(0x0053f650); r_esp += 8; return;
}

void f_0053f6c0(void) /* ThreeCardPokerRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f6c0);
    /* 0053f6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f6c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f6c7: mov eax, 0x416 */ r_eax = 0x416u;
    /* 0053f6cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f6ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f6cf: ret 4 */ FN_RET(0x0053f6c0); r_esp += 8; return;
}

void f_0053f6e0(void) /* ThreeCardPokerRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f6e0);
    /* 0053f6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f6e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053f6ed: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x53f6f2u); f_00636e70();
    /* 0053f6f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f6f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f6f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053f6fa: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53f6ffu); f_005fc420();
    /* 0053f6ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f702: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x53f707u); f_005db890();
    /* 0053f707: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053f70d: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53f712u); f_0053b1a0();
    /* 0053f712: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f718: call 0x5408b0 */ r_esp -= 4; W32(r_esp, 0x53f71du); f_005408b0();
    /* 0053f71d: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053f723: call 0x53d3c0 */ r_esp -= 4; W32(r_esp, 0x53f728u); f_0053d3c0();
    /* 0053f728: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f72a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f72b: ret 8 */ FN_RET(0x0053f6e0); r_esp += 12; return;
}

void f_0053f730(void) /* ThreeCardPokerRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f730);
    /* 0053f730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f731: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f735: push 0x6a4da3 */ { u32 v = 0x6a4da3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f73a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053f740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f741: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f744: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053f749: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053f74b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f74c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053f74f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053f755: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053f758: mov dword ptr [ebp - 0x20], 0x6b30d8 */ W32((u32)(r_ebp+0xffffffe0u), 0x6b30d8u);
    /* 0053f75f: mov dword ptr [ebp - 0x1c], 0x6b30bc */ W32((u32)(r_ebp+0xffffffe4u), 0x6b30bcu);
    /* 0053f766: mov dword ptr [ebp - 0x14], 0x32 */ W32((u32)(r_ebp+0xffffffecu), 0x32u);
    /* 0053f76d: mov dword ptr [ebp - 0x10], 0x33 */ W32((u32)(r_ebp+0xfffffff0u), 0x33u);
    /* 0053f774: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0053f77b: jmp 0x53f786 */ goto L_0053f786;
L_0053f77d:; BB(0x0053f77d);
    /* 0053f77d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053f780: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f783: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0053f786:; BB(0x0053f786);
    /* 0053f786: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053f78a: jge 0x53f7d9 */ if ((fS==fO)) goto L_0053f7d9;
L_0053f78c:; BB(0x0053f78c);
    /* 0053f78c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f78e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f790: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f792: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f794: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f796: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f798: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053f79b: mov edx, dword ptr [ebp + ecx*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 0053f79f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7a0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53f7a5u); f_00630f40();
    /* 0053f7a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f7a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053f7ae: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053f7b1: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053f7b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7b5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7b7: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053f7bf: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0053f7c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7c6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0053f7c9: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x53f7ceu); f_005f9ef0();
    /* 0053f7ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f7d2: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x53f7d7u); f_005ff5a0();
    /* 0053f7d7: jmp 0x53f77d */ goto L_0053f77d;
L_0053f7d9:; BB(0x0053f7d9);
    /* 0053f7d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7db: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7e0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7e5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7ea: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7ef: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7f1: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7f5: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7fa: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f7ff: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f801: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f806: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f808: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f80d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53f812u); f_00630f40();
    /* 0053f812: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f815: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f816: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053f818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f81a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0053f81d: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x53f822u); f_005fa790();
    /* 0053f822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f823: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f826: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x53f82bu); f_005ff5a0();
    /* 0053f82b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f830: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53f835u); f_00686d82();
    /* 0053f835: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053f838: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053f83b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053f842: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f846: je 0x53f861 */ if (fZ) goto L_0053f861;
L_0053f848:; BB(0x0053f848);
    /* 0053f848: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053f84b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x53f850u); f_005ec5a0();
    /* 0053f850: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053f853: mov dword ptr [eax], 0x6c60d4 */ W32((u32)(r_eax), 0x6c60d4u);
    /* 0053f859: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053f85c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0053f85f: jmp 0x53f868 */ goto L_0053f868;
L_0053f861:; BB(0x0053f861);
    /* 0053f861: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0053f868:; BB(0x0053f868);
    /* 0053f868: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053f86b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0053f86e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053f875: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f877: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f879: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f87b: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f880: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f885: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053f887: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f88c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f88e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f893: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f895: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053f898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f899: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0053f89c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x53f8a1u); f_005fa5b0();
    /* 0053f8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f8a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053f8a5: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x53f8aau); f_005ff5a0();
    /* 0053f8aa: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f8b0: call 0x540670 */ r_esp -= 4; W32(r_esp, 0x53f8b5u); f_00540670();
    /* 0053f8b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053f8b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f8ba: je 0x53f8dc */ if (fZ) goto L_0053f8dc;
L_0053f8bc:; BB(0x0053f8bc);
    /* 0053f8bc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f8be: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0053f8c4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x53f8c9u); f_005fb350();
    /* 0053f8c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053f8cc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053f8cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053f8d1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0053f8d4: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0053f8da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53f8dcu); call_ind(t); }
L_0053f8dc:; BB(0x0053f8dc);
    /* 0053f8dc: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f8e2: call 0x5406b0 */ r_esp -= 4; W32(r_esp, 0x53f8e7u); f_005406b0();
    /* 0053f8e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053f8ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f8ec: je 0x53f90e */ if (fZ) goto L_0053f90e;
L_0053f8ee:; BB(0x0053f8ee);
    /* 0053f8ee: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f8f0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0053f8f6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x53f8fbu); f_005fb350();
    /* 0053f8fb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0053f8fe: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053f901: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053f903: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053f906: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0053f90c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53f90eu); call_ind(t); }
L_0053f90e:; BB(0x0053f90e);
    /* 0053f90e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053f911: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 0053f915: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053f918: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053f91f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053f920: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f922: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f923: ret 0x10 */ FN_RET(0x0053f730); r_esp += 20; return;
}

void f_0053f930(void) /* ThreeCardPokerRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f930);
    /* 0053f930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f931: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053f934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053f937: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f939: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0053f93f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x53f944u); f_005fb350();
    /* 0053f944: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f946: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x53f94bu); f_00600230();
    /* 0053f94b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f94c: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f952: call 0x540690 */ r_esp -= 4; W32(r_esp, 0x53f957u); f_00540690();
    /* 0053f957: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0053f959: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0053f95f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x53f964u); f_005fb350();
    /* 0053f964: mov ecx, eax */ r_ecx = r_eax;
    /* 0053f966: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x53f96bu); f_00600230();
    /* 0053f96b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053f96c: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f972: call 0x5406d0 */ r_esp -= 4; W32(r_esp, 0x53f977u); f_005406d0();
    /* 0053f977: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053f97d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x53f982u); f_005da830();
    /* 0053f982: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053f985: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f987: je 0x53f996 */ if (fZ) goto L_0053f996;
L_0053f989:; BB(0x0053f989);
    /* 0053f989: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053f98f: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53f994u); f_0053b1a0();
    /* 0053f994: jmp 0x53f9d4 */ goto L_0053f9d4;
L_0053f996:; BB(0x0053f996);
    /* 0053f996: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053f99c: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x53f9a1u); f_00637610();
    /* 0053f9a1: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053f9a7: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53f9acu); f_0053b1a0();
    /* 0053f9ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f9af: movzx edx, byte ptr [ecx + 0x7c] */ r_edx = (u32)R8((u32)(r_ecx+0x7cu));
    /* 0053f9b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053f9b5: je 0x53f9d4 */ if (fZ) goto L_0053f9d4;
L_0053f9b7:; BB(0x0053f9b7);
    /* 0053f9b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053f9ba: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 0053f9be: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053f9c4: call 0x5408b0 */ r_esp -= 4; W32(r_esp, 0x53f9c9u); f_005408b0();
    /* 0053f9c9: mov ecx, dword ptr [0x7933f0] */ r_ecx = R32((u32)(0x7933f0u));
    /* 0053f9cf: call 0x53d3c0 */ r_esp -= 4; W32(r_esp, 0x53f9d4u); f_0053d3c0();
L_0053f9d4:; BB(0x0053f9d4);
    /* 0053f9d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0053f9d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053f9d7: ret 8 */ FN_RET(0x0053f930); r_esp += 12; return;
}

void f_0053f9e0(void) /* ThreeCardPokerRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053f9e0);
    /* 0053f9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053f9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053f9e3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053f9e6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053f9e9: mov dword ptr [ebp - 0x28], 0x132 */ W32((u32)(r_ebp+0xffffffd8u), 0x132u);
    /* 0053f9f0: mov dword ptr [ebp - 0x24], 0xf6 */ W32((u32)(r_ebp+0xffffffdcu), 0xf6u);
    /* 0053f9f7: mov dword ptr [ebp - 0x20], 0x96 */ W32((u32)(r_ebp+0xffffffe0u), 0x96u);
    /* 0053f9fe: mov dword ptr [ebp - 0x1c], 0xf6 */ W32((u32)(r_ebp+0xffffffe4u), 0xf6u);
    /* 0053fa05: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 0053fa0c: mov dword ptr [ebp - 0x14], 0x4c */ W32((u32)(r_ebp+0xffffffecu), 0x4cu);
    /* 0053fa13: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 0053fa1a: mov dword ptr [ebp - 0xc], 0x4a */ W32((u32)(r_ebp+0xfffffff4u), 0x4au);
    /* 0053fa21: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0053fa28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053fa2f: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053fa33: jge 0x53fa4d */ if ((fS==fO)) goto L_0053fa4d;
L_0053fa35:; BB(0x0053fa35);
    /* 0053fa35: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053fa38: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0053fa3c: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 0053fa40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fa43: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0053fa45: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0053fa48: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fa4b: jmp 0x53fa79 */ goto L_0053fa79;
L_0053fa4d:; BB(0x0053fa4d);
    /* 0053fa4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0053fa4f: jne 0x53fa68 */ if (!fZ) goto L_0053fa68;
L_0053fa51:; BB(0x0053fa51);
    /* 0053fa51: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa56: push 0x6c6198 */ { u32 v = 0x6c6198u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa5b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0053fa60: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53fa65u); f_005e9f20();
    /* 0053fa65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053fa68:; BB(0x0053fa68);
    /* 0053fa68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053fa6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053fa6e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0053fa70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053fa73: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0053fa76: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0053fa79:; BB(0x0053fa79);
    /* 0053fa79: mov esp, ebp */ r_esp = r_ebp;
    /* 0053fa7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053fa7c: ret 8 */ FN_RET(0x0053f9e0); r_esp += 12; return;
}

