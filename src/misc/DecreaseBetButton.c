#include "protos.h"

void f_0046a0b0(void) /* DecreaseBetButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046a0b0);
    /* 0046a0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046a0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046a0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046a0b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a0ba: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x46a0bfu); f_00601a80();
    /* 0046a0bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a0c2: mov dword ptr [eax], 0x6bb9ac */ W32((u32)(r_eax), 0x6bb9acu);
    /* 0046a0c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a0cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046a0ce: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 0046a0d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046a0d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0046a0d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046a0da: ret 4 */ FN_RET(0x0046a0b0); r_esp += 8; return;
}

void f_0046a0e0(void) /* DecreaseBetButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046a0e0);
    /* 0046a0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046a0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046a0e3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046a0e6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046a0eb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046a0ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046a0f0: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0046a0f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a0f5: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a0f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046a0fa: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a0fd: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0046a103: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46a105u); call_ind(t); }
    /* 0046a105: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a108: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0046a10e: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0046a114: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a117: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0046a11d: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0046a123: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046a125: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0046a12b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46a12du); call_ind(t); }
    /* 0046a12d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a12e: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x46a133u); f_0064cab0();
    /* 0046a133: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a136: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0046a139: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0046a13c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046a13f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046a142: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046a145: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0046a148: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x46a14du); f_004b7d90();
    /* 0046a14d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046a150: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a152: je 0x46a17e */ if (fZ) goto L_0046a17e;
L_0046a154:; BB(0x0046a154);
    /* 0046a154: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a156: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046a15c: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x46a161u); f_0047bd20();
    /* 0046a161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a162: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x46a167u); f_0064c8a0();
    /* 0046a167: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a16a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0046a16d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0046a170: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0046a173: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0046a176: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0046a179: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0046a17c: jmp 0x46a1a6 */ goto L_0046a1a6;
L_0046a17e:; BB(0x0046a17e);
    /* 0046a17e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a180: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046a186: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x46a18bu); f_0047bce0();
    /* 0046a18b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a18c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x46a191u); f_0064c8a0();
    /* 0046a191: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a194: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0046a197: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0046a19a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046a19d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0046a1a0: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0046a1a3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0046a1a6:; BB(0x0046a1a6);
    /* 0046a1a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a1a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a1ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1ae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a1b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a1b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1b6: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0046a1b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1ba: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0046a1bd: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x46a1c2u); f_0064c630();
    /* 0046a1c2: mov ecx, eax */ r_ecx = r_eax;
    /* 0046a1c4: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x46a1c9u); f_0064c6a0();
    /* 0046a1c9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046a1cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046a1ce: jne 0x46a1f4 */ if (!fZ) goto L_0046a1f4;
L_0046a1d0:; BB(0x0046a1d0);
    /* 0046a1d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a1d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1d8: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 0046a1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1dc: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0046a1df: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x46a1e4u); f_0064c630();
    /* 0046a1e4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046a1ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046a1ec: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046a1f2: jge 0x46a1f6 */ if ((fS==fO)) goto L_0046a1f6;
L_0046a1f4:; BB(0x0046a1f4);
    /* 0046a1f4: jmp 0x46a24f */ goto L_0046a24f;
L_0046a1f6:; BB(0x0046a1f6);
    /* 0046a1f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a1fc: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0046a1ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a200: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a204: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a207: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a208: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 0046a20b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a20c: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0046a20f: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x46a214u); f_0064c630();
    /* 0046a214: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0046a217: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a218: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046a21a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a21b: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x46a220u); f_0064c8d0();
    /* 0046a220: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a223: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0046a226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a227: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a22a: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0046a230: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0046a236: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046a239: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0046a23f: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 0046a245: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046a247: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046a24d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46a24fu); call_ind(t); }
L_0046a24f:; BB(0x0046a24f);
    /* 0046a24f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046a252: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0046a254: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x46a259u); f_00686d72();
    /* 0046a259: mov esp, ebp */ r_esp = r_ebp;
    /* 0046a25b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046a25c: ret  */ FN_RET(0x0046a0e0); r_esp += 4; return;
}

