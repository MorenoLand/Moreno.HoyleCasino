#include "protos.h"

void f_00446e30(void) /* LetItRideDealerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446e30);
    /* 00446e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00446e33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00446e35: push 0x69ec1b */ { u32 v = 0x69ec1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00446e3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00446e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446e41: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446e47: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00446e4c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446e4f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00446e52: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00446e58: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00446e5e: mov dword ptr [ebp - 0x40], 5 */ W32((u32)(r_ebp+0xffffffc0u), 0x5u);
    /* 00446e65: mov dword ptr [ebp - 0x3c], 4 */ W32((u32)(r_ebp+0xffffffc4u), 0x4u);
    /* 00446e6c: mov dword ptr [ebp - 0x38], 3 */ W32((u32)(r_ebp+0xffffffc8u), 0x3u);
    /* 00446e73: mov dword ptr [ebp - 0x34], 8 */ W32((u32)(r_ebp+0xffffffccu), 0x8u);
    /* 00446e7a: mov dword ptr [ebp - 0x30], 7 */ W32((u32)(r_ebp+0xffffffd0u), 0x7u);
    /* 00446e81: mov dword ptr [ebp - 0x2c], 6 */ W32((u32)(r_ebp+0xffffffd4u), 0x6u);
    /* 00446e88: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 00446e8f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00446e96: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00446e9d: mov dword ptr [ebp - 0x1c], 0xb */ W32((u32)(r_ebp+0xffffffe4u), 0xbu);
    /* 00446ea4: mov dword ptr [ebp - 0x18], 0xa */ W32((u32)(r_ebp+0xffffffe8u), 0xau);
    /* 00446eab: mov dword ptr [ebp - 0x14], 9 */ W32((u32)(r_ebp+0xffffffecu), 0x9u);
    /* 00446eb2: push 0x6b8b38 */ { u32 v = 0x6b8b38u; r_esp -= 4; W32(r_esp, v); }
    /* 00446eb7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x446ebcu); f_00630f40();
    /* 00446ebc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446ec0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00446ec6: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x446ecbu); f_005f38b0();
    /* 00446ecb: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446ed0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00446ed6: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x446edbu); f_005f1ad0();
    /* 00446edb: push 0x310ab3 */ { u32 v = 0x310ab3u; r_esp -= 4; W32(r_esp, v); }
    /* 00446ee0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00446ee6: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x446eebu); f_005f2ba0();
    /* 00446eeb: push 0x310ab4 */ { u32 v = 0x310ab4u; r_esp -= 4; W32(r_esp, v); }
    /* 00446ef0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00446ef6: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x446efbu); f_005f2ba0();
    /* 00446efb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00446f02: jmp 0x446f0d */ goto L_00446f0d;
L_00446f04:; BB(0x00446f04);
    /* 00446f04: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446f07: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446f0a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00446f0d:; BB(0x00446f0d);
    /* 00446f0d: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446f11: jge 0x447007 */ if ((fS==fO)) goto L_00447007;
L_00446f17:; BB(0x00446f17);
    /* 00446f17: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00446f19: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x446f1eu); f_00686d82();
    /* 00446f1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446f21: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00446f24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446f2b: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446f2f: je 0x446f41 */ if (fZ) goto L_00446f41;
L_00446f31:; BB(0x00446f31);
    /* 00446f31: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00446f34: call 0x447e30 */ r_esp -= 4; W32(r_esp, 0x446f39u); f_00447e30();
    /* 00446f39: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00446f3f: jmp 0x446f4b */ goto L_00446f4b;
L_00446f41:; BB(0x00446f41);
    /* 00446f41: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00446f4b:; BB(0x00446f4b);
    /* 00446f4b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00446f51: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00446f54: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00446f5b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446f5e: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00446f64: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00446f67: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 00446f6b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446f6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446f6f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446f72: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00446f78: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00446f7c: call 0x447f70 */ r_esp -= 4; W32(r_esp, 0x446f81u); f_00447f70();
    /* 00446f81: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446f86: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x446f8bu); f_00686d82();
    /* 00446f8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446f8e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00446f91: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00446f98: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446f9c: je 0x446fae */ if (fZ) goto L_00446fae;
L_00446f9e:; BB(0x00446f9e);
    /* 00446f9e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00446fa1: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x446fa6u); f_005ec5a0();
    /* 00446fa6: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00446fac: jmp 0x446fb8 */ goto L_00446fb8;
L_00446fae:; BB(0x00446fae);
    /* 00446fae: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00446fb8:; BB(0x00446fb8);
    /* 00446fb8: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00446fbe: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00446fc1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00446fc8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446fcb: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00446fd1: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00446fd4: mov dword ptr [ecx + eax*4 + 0x54], edx */ W32((u32)(r_ecx+r_eax*4+0x54u), r_edx);
    /* 00446fd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00446fda: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00446fdc: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00446fde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446fe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446fe2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00446fe4: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446fe9: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00446feb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446ff0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446ff3: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00446ff9: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 00446ffd: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x447002u); f_005ec8f0();
    /* 00447002: jmp 0x446f04 */ goto L_00446f04;
L_00447007:; BB(0x00447007);
    /* 00447007: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044700e: jmp 0x447019 */ goto L_00447019;
L_00447010:; BB(0x00447010);
    /* 00447010: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447013: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00447016: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00447019:; BB(0x00447019);
    /* 00447019: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044701d: jge 0x447137 */ if ((fS==fO)) goto L_00447137;
L_00447023:; BB(0x00447023);
    /* 00447023: push 0xae4 */ { u32 v = 0xae4u; r_esp -= 4; W32(r_esp, v); }
    /* 00447028: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44702du); f_00686d82();
    /* 0044702d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447030: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00447033: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0044703a: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044703e: je 0x447050 */ if (fZ) goto L_00447050;
L_00447040:; BB(0x00447040);
    /* 00447040: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00447043: call 0x4485e0 */ r_esp -= 4; W32(r_esp, 0x447048u); f_004485e0();
    /* 00447048: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0044704e: jmp 0x44705a */ goto L_0044705a;
L_00447050:; BB(0x00447050);
    /* 00447050: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0044705a:; BB(0x0044705a);
    /* 0044705a: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00447060: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00447063: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044706a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044706d: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447073: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00447076: mov dword ptr [edx + ecx*4 + 0x14], eax */ W32((u32)(r_edx+r_ecx*4+0x14u), r_eax);
    /* 0044707a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044707d: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447083: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00447087: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044708a: mov dword ptr [eax + 0xae0], ecx */ W32((u32)(r_eax+0xae0u), r_ecx);
    /* 00447090: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447092: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447094: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447096: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447098: push 0x310ab1 */ { u32 v = 0x310ab1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044709d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004470a0: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004470a6: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 004470aa: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4470afu); f_005eae80();
    /* 004470af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004470b2: mov edx, dword ptr [ebp + ecx*4 - 0x40] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc0u));
    /* 004470b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004470b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004470ba: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004470c0: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004470c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004470c7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004470cd: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 004470d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004470d3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004470d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4470dbu); call_ind(t); }
    /* 004470db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004470dd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004470e0: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004470e6: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 004470ea: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x4470efu); f_005eb5d0();
    /* 004470ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004470f2: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004470f8: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 004470fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004470fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447100: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447106: mov ecx, dword ptr [ecx + eax*4 + 0x14] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0044710a: call 0x5cc2c0 */ r_esp -= 4; W32(r_esp, 0x44710fu); f_005cc2c0();
    /* 0044710f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447112: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447118: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 0044711c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044711f: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447125: mov edx, dword ptr [eax + edx*4 + 0x14] */ r_edx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00447129: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044712b: mov ecx, edx */ r_ecx = r_edx;
    /* 0044712d: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00447130: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x447132u); call_ind(t); }
    /* 00447132: jmp 0x447010 */ goto L_00447010;
L_00447137:; BB(0x00447137);
    /* 00447137: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044713e: jmp 0x447149 */ goto L_00447149;
L_00447140:; BB(0x00447140);
    /* 00447140: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447143: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00447146: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00447149:; BB(0x00447149);
    /* 00447149: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044714d: jge 0x4471ce */ if ((fS==fO)) goto L_004471ce;
L_0044714f:; BB(0x0044714f);
    /* 0044714f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00447154: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x447159u); f_00686d82();
    /* 00447159: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044715c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0044715f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00447166: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044716a: je 0x44717c */ if (fZ) goto L_0044717c;
L_0044716c:; BB(0x0044716c);
    /* 0044716c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0044716f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x447174u); f_005eaaf0();
    /* 00447174: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0044717a: jmp 0x447186 */ goto L_00447186;
L_0044717c:; BB(0x0044717c);
    /* 0044717c: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00447186:; BB(0x00447186);
    /* 00447186: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0044718c: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0044718f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447196: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00447199: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0044719f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004471a2: mov dword ptr [eax + edx*4 + 0x44], ecx */ W32((u32)(r_eax+r_edx*4+0x44u), r_ecx);
    /* 004471a6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004471a9: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004471af: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 004471b3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004471b6: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004471bc: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 004471c0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004471c2: mov ecx, edx */ r_ecx = r_edx;
    /* 004471c4: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004471c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4471c9u); call_ind(t); }
    /* 004471c9: jmp 0x447140 */ goto L_00447140;
L_004471ce:; BB(0x004471ce);
    /* 004471ce: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 004471d3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4471d8u); f_00686d82();
    /* 004471d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004471db: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004471de: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004471e5: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004471e9: je 0x447207 */ if (fZ) goto L_00447207;
L_004471eb:; BB(0x004471eb);
    /* 004471eb: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004471ee: call 0x5cd6a0 */ r_esp -= 4; W32(r_esp, 0x4471f3u); f_005cd6a0();
    /* 004471f3: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 004471f6: mov dword ptr [eax], 0x6b8a74 */ W32((u32)(r_eax), 0x6b8a74u);
    /* 004471fc: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004471ff: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00447205: jmp 0x447211 */ goto L_00447211;
L_00447207:; BB(0x00447207);
    /* 00447207: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00447211:; BB(0x00447211);
    /* 00447211: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00447217: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0044721a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447221: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447227: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0044722a: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 0044722d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044722f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447231: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447233: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447235: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447237: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0044723d: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00447240: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x447245u); f_005eae80();
    /* 00447245: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0044724a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44724fu); f_00686d82();
    /* 0044724f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00447252: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00447255: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0044725c: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00447260: je 0x447272 */ if (fZ) goto L_00447272;
L_00447262:; BB(0x00447262);
    /* 00447262: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00447265: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x44726au); f_005f5bf0();
    /* 0044726a: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00447270: jmp 0x44727c */ goto L_0044727c;
L_00447272:; BB(0x00447272);
    /* 00447272: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0044727c:; BB(0x0044727c);
    /* 0044727c: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00447282: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00447285: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044728c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447292: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00447295: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00447298: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044729a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044729c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044729e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004472a0: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 004472a5: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 004472ab: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004472ae: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4472b3u); f_005eae80();
    /* 004472b3: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 004472b8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4472bdu); f_00686d82();
    /* 004472bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004472c0: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004472c3: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 004472ca: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004472ce: je 0x4472e0 */ if (fZ) goto L_004472e0;
L_004472d0:; BB(0x004472d0);
    /* 004472d0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004472d3: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x4472d8u); f_005f5bf0();
    /* 004472d8: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004472de: jmp 0x4472ea */ goto L_004472ea;
L_004472e0:; BB(0x004472e0);
    /* 004472e0: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_004472ea:; BB(0x004472ea);
    /* 004472ea: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 004472f0: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 004472f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004472fa: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447300: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00447303: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 00447306: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447308: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044730a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044730c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044730e: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 00447313: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447319: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0044731c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x447321u); f_005eae80();
    /* 00447321: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00447326: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44732bu); f_00686d82();
    /* 0044732b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044732e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00447331: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00447338: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044733c: je 0x44734e */ if (fZ) goto L_0044734e;
L_0044733e:; BB(0x0044733e);
    /* 0044733e: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00447341: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x447346u); f_005f5bf0();
    /* 00447346: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0044734c: jmp 0x447358 */ goto L_00447358;
L_0044734e:; BB(0x0044734e);
    /* 0044734e: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00447358:; BB(0x00447358);
    /* 00447358: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0044735e: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00447361: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00447368: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0044736e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00447371: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 00447374: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00447376: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00447378: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044737a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044737c: push 0x310ea0 */ { u32 v = 0x310ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 00447381: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00447387: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 0044738a: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x44738fu); f_005eae80();
    /* 0044738f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00447392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00447399: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044739a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044739c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044739d: ret  */ FN_RET(0x00446e30); r_esp += 4; return;
}

