#include "protos.h"

void f_00469f20(void) /* IncreaseBetButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469f20);
    /* 00469f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00469f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00469f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00469f27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469f2a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x469f2fu); f_00601a80();
    /* 00469f2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469f32: mov dword ptr [eax], 0x6bb8b4 */ W32((u32)(r_eax), 0x6bb8b4u);
    /* 00469f38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469f3b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00469f3e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00469f44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00469f47: mov esp, ebp */ r_esp = r_ebp;
    /* 00469f49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00469f4a: ret 4 */ FN_RET(0x00469f20); r_esp += 8; return;
}

void f_00469f50(void) /* IncreaseBetButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00469f50);
    /* 00469f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00469f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00469f53: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00469f56: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00469f5b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00469f5d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00469f60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00469f61: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00469f64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469f66: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00469f69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00469f6b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00469f6e: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00469f74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x469f76u); call_ind(t); }
    /* 00469f76: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00469f79: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00469f7f: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00469f85: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00469f88: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00469f8e: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 00469f94: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00469f96: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00469f9c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x469f9eu); call_ind(t); }
    /* 00469f9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469f9f: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x469fa4u); f_0064cab0();
    /* 00469fa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469fa7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00469faa: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00469fad: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00469fb0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00469fb3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00469fb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00469fb9: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x469fbeu); f_004b7d90();
    /* 00469fbe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00469fc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00469fc3: je 0x469fef */ if (fZ) goto L_00469fef;
L_00469fc5:; BB(0x00469fc5);
    /* 00469fc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469fc7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469fcd: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x469fd2u); f_0047bd20();
    /* 00469fd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469fd3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x469fd8u); f_0064c8a0();
    /* 00469fd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00469fdb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00469fde: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00469fe1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00469fe4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00469fe7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00469fea: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00469fed: jmp 0x46a017 */ goto L_0046a017;
L_00469fef:; BB(0x00469fef);
    /* 00469fef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00469ff1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00469ff7: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x469ffcu); f_0047bce0();
    /* 00469ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00469ffd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x46a002u); f_0064c8a0();
    /* 0046a002: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a005: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0046a008: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0046a00b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0046a00e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0046a011: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0046a014: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0046a017:; BB(0x0046a017);
    /* 0046a017: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a01a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a01b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a01e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a01f: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0046a022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a023: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0046a026: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x46a02bu); f_0064c5c0();
    /* 0046a02b: mov esi, eax */ r_esi = r_eax;
    /* 0046a02d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046a033: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46a038u); f_0047e3b0();
    /* 0046a038: mov ecx, eax */ r_ecx = r_eax;
    /* 0046a03a: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x46a03fu); f_004c6a70();
    /* 0046a03f: cmp dword ptr [esi], eax */ {  u32 a = R32((u32)(r_esi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046a041: jle 0x46a045 */ if ((fZ||fS!=fO)) goto L_0046a045;
L_0046a043:; BB(0x0046a043);
    /* 0046a043: jmp 0x46a0a0 */ goto L_0046a0a0;
L_0046a045:; BB(0x0046a045);
    /* 0046a045: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a047: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046a04b: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0046a04e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a04f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046a052: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a053: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046a056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a057: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0046a05a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a05b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0046a05e: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x46a063u); f_0064c5c0();
    /* 0046a063: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0046a066: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a067: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0046a069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046a06a: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x46a06fu); f_0064c8d0();
    /* 0046a06f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046a072: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0046a075: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046a076: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0046a079: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0046a07f: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0046a085: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0046a088: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0046a08e: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 0046a094: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046a096: mov ecx, edx */ r_ecx = r_edx;
    /* 0046a098: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0046a09e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46a0a0u); call_ind(t); }
L_0046a0a0:; BB(0x0046a0a0);
    /* 0046a0a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046a0a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046a0a4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0046a0a6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x46a0abu); f_00686d72();
    /* 0046a0ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0046a0ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046a0ae: ret  */ FN_RET(0x00469f50); r_esp += 4; return;
}

