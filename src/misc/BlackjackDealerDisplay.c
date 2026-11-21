#include "protos.h"

void f_0040c770(void) /* BlackjackDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040c770);
    /* 0040c770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040c771: mov ebp, esp */ r_ebp = r_esp;
    /* 0040c773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c775: push 0x69d9d8 */ { u32 v = 0x69d9d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c77a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040c780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c781: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040c784: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0040c789: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040c78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c78c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040c78f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0040c795: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0040c798: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0040c79f: mov dword ptr [ebp - 0x1c], 2 */ W32((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 0040c7a6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0040c7ad: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 0040c7b4: push 0x6b3878 */ { u32 v = 0x6b3878u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7b9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40c7beu); f_00630f40();
    /* 0040c7be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c7c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7c2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0040c7c8: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x40c7cdu); f_005f38b0();
    /* 0040c7cd: push 0x138d */ { u32 v = 0x138du; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7d2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0040c7d8: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x40c7ddu); f_005f1ad0();
    /* 0040c7dd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040c7e4: jmp 0x40c7ef */ goto L_0040c7ef;
L_0040c7e6:; BB(0x0040c7e6);
    /* 0040c7e6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c7e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040c7ec: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0040c7ef:; BB(0x0040c7ef);
    /* 0040c7ef: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c7f3: jge 0x40c855 */ if ((fS==fO)) goto L_0040c855;
L_0040c7f5:; BB(0x0040c7f5);
    /* 0040c7f5: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c7fa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40c7ffu); f_00686d82();
    /* 0040c7ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c802: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040c805: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040c80c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c810: je 0x40c81f */ if (fZ) goto L_0040c81f;
L_0040c812:; BB(0x0040c812);
    /* 0040c812: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040c815: call 0x40dc70 */ r_esp -= 4; W32(r_esp, 0x40c81au); f_0040dc70();
    /* 0040c81a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0040c81d: jmp 0x40c826 */ goto L_0040c826;
L_0040c81f:; BB(0x0040c81f);
    /* 0040c81f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0040c826:; BB(0x0040c826);
    /* 0040c826: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0040c829: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040c82c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c833: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c836: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c839: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c83c: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 0040c840: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c843: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c844: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c847: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c84a: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0040c84e: call 0x40de70 */ r_esp -= 4; W32(r_esp, 0x40c853u); f_0040de70();
    /* 0040c853: jmp 0x40c7e6 */ goto L_0040c7e6;
L_0040c855:; BB(0x0040c855);
    /* 0040c855: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0040c85c: jmp 0x40c867 */ goto L_0040c867;
L_0040c85e:; BB(0x0040c85e);
    /* 0040c85e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c861: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040c864: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0040c867:; BB(0x0040c867);
    /* 0040c867: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040c86b: jge 0x40c950 */ if ((fS==fO)) goto L_0040c950;
L_0040c871:; BB(0x0040c871);
    /* 0040c871: push 0xcc0 */ { u32 v = 0xcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c876: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40c87bu); f_00686d82();
    /* 0040c87b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c87e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040c881: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040c888: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c88c: je 0x40c89b */ if (fZ) goto L_0040c89b;
L_0040c88e:; BB(0x0040c88e);
    /* 0040c88e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040c891: call 0x40eca0 */ r_esp -= 4; W32(r_esp, 0x40c896u); f_0040eca0();
    /* 0040c896: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0040c899: jmp 0x40c8a2 */ goto L_0040c8a2;
L_0040c89b:; BB(0x0040c89b);
    /* 0040c89b: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0040c8a2:; BB(0x0040c8a2);
    /* 0040c8a2: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0040c8a5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040c8a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c8af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c8b2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c8b5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040c8b8: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 0040c8bc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8c4: push 0x138e */ { u32 v = 0x138eu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c8cc: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c8cf: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040c8d3: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40c8d8u); f_005eae80();
    /* 0040c8d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c8db: mov ecx, dword ptr [ebp + eax*4 - 0x20] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 0040c8df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c8e0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c8e3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c8e6: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040c8ea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c8ed: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c8f0: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040c8f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0040c8f6: mov ecx, edx */ r_ecx = r_edx;
    /* 0040c8f8: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0040c8fe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40c900u); call_ind(t); }
    /* 0040c900: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c902: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c905: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c908: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0040c90c: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x40c911u); f_005eb5d0();
    /* 0040c911: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c914: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040c919: mov ecx, dword ptr [eax + edx*4 + 0x468] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x468u));
    /* 0040c920: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040c921: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c924: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c927: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 0040c92b: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x40c930u); f_005cc2c0();
    /* 0040c930: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c933: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c936: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040c93a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040c93d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c940: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0040c944: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040c946: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0040c949: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40c94bu); call_ind(t); }
    /* 0040c94b: jmp 0x40c85e */ goto L_0040c85e;
L_0040c950:; BB(0x0040c950);
    /* 0040c950: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c955: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40c95au); f_00686d82();
    /* 0040c95a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c95d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040c960: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040c967: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c96b: je 0x40c986 */ if (fZ) goto L_0040c986;
L_0040c96d:; BB(0x0040c96d);
    /* 0040c96d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040c970: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x40c975u); f_005cd6a0();
    /* 0040c975: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040c978: mov dword ptr [eax], 0x6b37b4 */ W32((u32)(r_eax), 0x6b37b4u);
    /* 0040c97e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040c981: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0040c984: jmp 0x40c98d */ goto L_0040c98d;
L_0040c986:; BB(0x0040c986);
    /* 0040c986: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0040c98d:; BB(0x0040c98d);
    /* 0040c98d: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0040c990: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0040c993: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c99a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c99d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040c9a0: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0040c9a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9ad: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c9b0: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0040c9b3: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40c9b8u); f_005eae80();
    /* 0040c9b8: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0040c9bd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40c9c2u); f_00686d82();
    /* 0040c9c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c9c5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040c9c8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0040c9cf: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040c9d3: je 0x40c9e2 */ if (fZ) goto L_0040c9e2;
L_0040c9d5:; BB(0x0040c9d5);
    /* 0040c9d5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040c9d8: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x40c9ddu); f_005f5bf0();
    /* 0040c9dd: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0040c9e0: jmp 0x40c9e9 */ goto L_0040c9e9;
L_0040c9e2:; BB(0x0040c9e2);
    /* 0040c9e2: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0040c9e9:; BB(0x0040c9e9);
    /* 0040c9e9: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0040c9ec: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040c9ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040c9f6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040c9f9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040c9fc: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0040c9ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca01: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca0a: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca0f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040ca12: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0040ca15: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40ca1au); f_005eae80();
    /* 0040ca1a: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca1f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40ca24u); f_00686d82();
    /* 0040ca24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ca27: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040ca2a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0040ca31: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ca35: je 0x40ca44 */ if (fZ) goto L_0040ca44;
L_0040ca37:; BB(0x0040ca37);
    /* 0040ca37: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040ca3a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x40ca3fu); f_005f5bf0();
    /* 0040ca3f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0040ca42: jmp 0x40ca4b */ goto L_0040ca4b;
L_0040ca44:; BB(0x0040ca44);
    /* 0040ca44: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0040ca4b:; BB(0x0040ca4b);
    /* 0040ca4b: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0040ca4e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0040ca51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ca58: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040ca5b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0040ca5e: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0040ca61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca63: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca6c: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca71: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040ca74: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0040ca77: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40ca7cu); f_005eae80();
    /* 0040ca7c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ca81: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40ca86u); f_00686d82();
    /* 0040ca86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040ca89: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0040ca8c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0040ca93: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ca97: je 0x40caa6 */ if (fZ) goto L_0040caa6;
L_0040ca99:; BB(0x0040ca99);
    /* 0040ca99: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040ca9c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x40caa1u); f_005eaaf0();
    /* 0040caa1: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0040caa4: jmp 0x40caad */ goto L_0040caad;
L_0040caa6:; BB(0x0040caa6);
    /* 0040caa6: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_0040caad:; BB(0x0040caad);
    /* 0040caad: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0040cab0: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0040cab3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040caba: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0040cabd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0040cac0: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0040cac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040cac5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040cac7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cac9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cacb: push 0x13a1 */ { u32 v = 0x13a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040cad0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0040cad3: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 0040cad6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x40cadbu); f_005eae80();
    /* 0040cadb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040cade: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040cae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040cae6: mov esp, ebp */ r_esp = r_ebp;
    /* 0040cae8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040cae9: ret  */ FN_RET(0x0040c770); r_esp += 4; return;
}

