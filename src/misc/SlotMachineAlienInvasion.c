#include "protos.h"

void f_00532ef0(void) /* SlotMachineAlienInvasion::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532ef0);
    /* 00532ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00532ef3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00532ef5: push 0x6a4a1e */ { u32 v = 0x6a4a1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00532efa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00532f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532f01: sub esp, 0x168 */ {  u32 a = r_esp; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532f07: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00532f0c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00532f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532f0f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00532f12: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00532f18: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 00532f1e: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00532f23: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00532f29: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00532f2c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532f2f: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 00532f35: cmp dword ptr [ebp - 0x100], 0x1d */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00532f3c: ja 0x533bf7 */ if ((!fC&&!fZ)) goto L_00533bf7;
L_00532f42:; BB(0x00532f42);
    /* 00532f42: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00532f48: jmp dword ptr [eax*4 + 0x533c8c] */ { u32 t = R32((u32)(r_eax*4+0x533c8cu)); switch (t) { case 0x533bdau: goto L_00533bda; case 0x532fb6u: goto L_00532fb6; case 0x533151u: goto L_00533151; case 0x53301du: goto L_0053301d; case 0x5331b7u: goto L_005331b7; case 0x53321eu: goto L_0053321e; case 0x5330eau: goto L_005330ea; case 0x533083u: goto L_00533083; case 0x532f4fu: goto L_00532f4f; case 0x5339dfu: goto L_005339df; case 0x533bf7u: goto L_00533bf7; case 0x533285u: goto L_00533285; case 0x5332ebu: goto L_005332eb; case 0x5333b9u: goto L_005333b9; case 0x53341fu: goto L_0053341f; case 0x533486u: goto L_00533486; case 0x5334edu: goto L_005334ed; case 0x53356bu: goto L_0053356b; case 0x533352u: goto L_00533352; case 0x5336e7u: goto L_005336e7; case 0x533766u: goto L_00533766; case 0x533a5eu: goto L_00533a5e; case 0x533669u: goto L_00533669; case 0x5337e5u: goto L_005337e5; case 0x533863u: goto L_00533863; case 0x533addu: goto L_00533add; case 0x5335eau: goto L_005335ea; case 0x5338e2u: goto L_005338e2; case 0x533961u: goto L_00533961; case 0x533b5bu: goto L_00533b5b; default: UNSUP(0x00532f48, "jump table entry is not a known target"); } }
L_00532f4f:; BB(0x00532f4f);
    /* 00532f4f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00532f51: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x532f56u); f_00686d82();
    /* 00532f56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532f59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00532f5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00532f63: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532f67: je 0x532f8e */ if (fZ) goto L_00532f8e;
L_00532f69:; BB(0x00532f69);
    /* 00532f69: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532f6c: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x532f71u); f_00538560();
    /* 00532f71: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532f74: mov dword ptr [ecx], 0x6c5124 */ W32((u32)(r_ecx), 0x6c5124u);
    /* 00532f7a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532f7d: mov dword ptr [edx], 0x6c50ac */ W32((u32)(r_edx), 0x6c50acu);
    /* 00532f83: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532f86: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00532f8c: jmp 0x532f98 */ goto L_00532f98;
L_00532f8e:; BB(0x00532f8e);
    /* 00532f8e: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00532f98:; BB(0x00532f98);
    /* 00532f98: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00532f9e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00532fa1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00532fa8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00532fab: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 00532fb1: jmp 0x533c70 */ goto L_00533c70;
L_00532fb6:; BB(0x00532fb6);
    /* 00532fb6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00532fb8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x532fbdu); f_00686d82();
    /* 00532fbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00532fc0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00532fc3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00532fca: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532fce: je 0x532ff5 */ if (fZ) goto L_00532ff5;
L_00532fd0:; BB(0x00532fd0);
    /* 00532fd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532fd3: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x532fd8u); f_00538560();
    /* 00532fd8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532fdb: mov dword ptr [eax], 0x6c5124 */ W32((u32)(r_eax), 0x6c5124u);
    /* 00532fe1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532fe4: mov dword ptr [ecx], 0x6c5034 */ W32((u32)(r_ecx), 0x6c5034u);
    /* 00532fea: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532fed: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 00532ff3: jmp 0x532fff */ goto L_00532fff;
L_00532ff5:; BB(0x00532ff5);
    /* 00532ff5: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_00532fff:; BB(0x00532fff);
    /* 00532fff: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 00533005: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00533008: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053300f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00533012: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 00533018: jmp 0x533c70 */ goto L_00533c70;
L_0053301d:; BB(0x0053301d);
    /* 0053301d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053301f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533024u); f_00686d82();
    /* 00533024: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533027: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053302a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00533031: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533035: je 0x53305c */ if (fZ) goto L_0053305c;
L_00533037:; BB(0x00533037);
    /* 00533037: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053303a: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x53303fu); f_00538560();
    /* 0053303f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00533042: mov dword ptr [edx], 0x6c5124 */ W32((u32)(r_edx), 0x6c5124u);
    /* 00533048: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053304b: mov dword ptr [eax], 0x6c4fbc */ W32((u32)(r_eax), 0x6c4fbcu);
    /* 00533051: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00533054: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 0053305a: jmp 0x533066 */ goto L_00533066;
L_0053305c:; BB(0x0053305c);
    /* 0053305c: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00533066:; BB(0x00533066);
    /* 00533066: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0053306c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0053306f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533076: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00533079: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 0053307e: jmp 0x533c70 */ goto L_00533c70;
L_00533083:; BB(0x00533083);
    /* 00533083: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533085: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53308au); f_00686d82();
    /* 0053308a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053308d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00533090: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00533097: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053309b: je 0x5330c2 */ if (fZ) goto L_005330c2;
L_0053309d:; BB(0x0053309d);
    /* 0053309d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005330a0: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x5330a5u); f_00538560();
    /* 005330a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005330a8: mov dword ptr [ecx], 0x6c5124 */ W32((u32)(r_ecx), 0x6c5124u);
    /* 005330ae: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005330b1: mov dword ptr [edx], 0x6c4f44 */ W32((u32)(r_edx), 0x6c4f44u);
    /* 005330b7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005330ba: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 005330c0: jmp 0x5330cc */ goto L_005330cc;
L_005330c2:; BB(0x005330c2);
    /* 005330c2: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_005330cc:; BB(0x005330cc);
    /* 005330cc: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005330d2: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005330d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005330dc: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005330df: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 005330e5: jmp 0x533c70 */ goto L_00533c70;
L_005330ea:; BB(0x005330ea);
    /* 005330ea: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005330ec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5330f1u); f_00686d82();
    /* 005330f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005330f4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005330f7: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005330fe: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533102: je 0x533129 */ if (fZ) goto L_00533129;
L_00533104:; BB(0x00533104);
    /* 00533104: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00533107: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x53310cu); f_00538560();
    /* 0053310c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0053310f: mov dword ptr [eax], 0x6c5124 */ W32((u32)(r_eax), 0x6c5124u);
    /* 00533115: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00533118: mov dword ptr [ecx], 0x6c4ecc */ W32((u32)(r_ecx), 0x6c4eccu);
    /* 0053311e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00533121: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
    /* 00533127: jmp 0x533133 */ goto L_00533133;
L_00533129:; BB(0x00533129);
    /* 00533129: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_00533133:; BB(0x00533133);
    /* 00533133: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00533139: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053313c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533143: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00533146: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 0053314c: jmp 0x533c70 */ goto L_00533c70;
L_00533151:; BB(0x00533151);
    /* 00533151: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533153: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533158u); f_00686d82();
    /* 00533158: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053315b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053315e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00533165: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533169: je 0x533190 */ if (fZ) goto L_00533190;
L_0053316b:; BB(0x0053316b);
    /* 0053316b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053316e: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533173u); f_00538560();
    /* 00533173: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00533176: mov dword ptr [edx], 0x6c5124 */ W32((u32)(r_edx), 0x6c5124u);
    /* 0053317c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053317f: mov dword ptr [eax], 0x6c4e54 */ W32((u32)(r_eax), 0x6c4e54u);
    /* 00533185: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00533188: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0053318e: jmp 0x53319a */ goto L_0053319a;
L_00533190:; BB(0x00533190);
    /* 00533190: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_0053319a:; BB(0x0053319a);
    /* 0053319a: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005331a0: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005331a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005331aa: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005331ad: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 005331b2: jmp 0x533c70 */ goto L_00533c70;
L_005331b7:; BB(0x005331b7);
    /* 005331b7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005331b9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5331beu); f_00686d82();
    /* 005331be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005331c1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005331c4: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005331cb: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005331cf: je 0x5331f6 */ if (fZ) goto L_005331f6;
L_005331d1:; BB(0x005331d1);
    /* 005331d1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005331d4: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x5331d9u); f_00538560();
    /* 005331d9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005331dc: mov dword ptr [ecx], 0x6c5124 */ W32((u32)(r_ecx), 0x6c5124u);
    /* 005331e2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005331e5: mov dword ptr [edx], 0x6c4ddc */ W32((u32)(r_edx), 0x6c4ddcu);
    /* 005331eb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005331ee: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005331f4: jmp 0x533200 */ goto L_00533200;
L_005331f6:; BB(0x005331f6);
    /* 005331f6: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_00533200:; BB(0x00533200);
    /* 00533200: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00533206: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00533209: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533210: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00533213: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 00533219: jmp 0x533c70 */ goto L_00533c70;
L_0053321e:; BB(0x0053321e);
    /* 0053321e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533220: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533225u); f_00686d82();
    /* 00533225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533228: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053322b: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00533232: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533236: je 0x53325d */ if (fZ) goto L_0053325d;
L_00533238:; BB(0x00533238);
    /* 00533238: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053323b: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533240u); f_00538560();
    /* 00533240: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00533243: mov dword ptr [eax], 0x6c5124 */ W32((u32)(r_eax), 0x6c5124u);
    /* 00533249: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053324c: mov dword ptr [ecx], 0x6c4d64 */ W32((u32)(r_ecx), 0x6c4d64u);
    /* 00533252: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00533255: mov dword ptr [ebp - 0x120], edx */ W32((u32)(r_ebp+0xfffffee0u), r_edx);
    /* 0053325b: jmp 0x533267 */ goto L_00533267;
L_0053325d:; BB(0x0053325d);
    /* 0053325d: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_00533267:; BB(0x00533267);
    /* 00533267: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 0053326d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00533270: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533277: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053327a: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 00533280: jmp 0x533c70 */ goto L_00533c70;
L_00533285:; BB(0x00533285);
    /* 00533285: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533287: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53328cu); f_00686d82();
    /* 0053328c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053328f: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00533292: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00533299: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053329d: je 0x5332c4 */ if (fZ) goto L_005332c4;
L_0053329f:; BB(0x0053329f);
    /* 0053329f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005332a2: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x5332a7u); f_00538560();
    /* 005332a7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005332aa: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 005332b0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005332b3: mov dword ptr [eax], 0x6c4c74 */ W32((u32)(r_eax), 0x6c4c74u);
    /* 005332b9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005332bc: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 005332c2: jmp 0x5332ce */ goto L_005332ce;
L_005332c4:; BB(0x005332c4);
    /* 005332c4: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_005332ce:; BB(0x005332ce);
    /* 005332ce: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005332d4: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005332d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005332de: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005332e1: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 005332e6: jmp 0x533c70 */ goto L_00533c70;
L_005332eb:; BB(0x005332eb);
    /* 005332eb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005332ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5332f2u); f_00686d82();
    /* 005332f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005332f5: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005332f8: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005332ff: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533303: je 0x53332a */ if (fZ) goto L_0053332a;
L_00533305:; BB(0x00533305);
    /* 00533305: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00533308: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x53330du); f_00538560();
    /* 0053330d: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00533310: mov dword ptr [ecx], 0x6c4cec */ W32((u32)(r_ecx), 0x6c4cecu);
    /* 00533316: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00533319: mov dword ptr [edx], 0x6c4bfc */ W32((u32)(r_edx), 0x6c4bfcu);
    /* 0053331f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00533322: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00533328: jmp 0x533334 */ goto L_00533334;
L_0053332a:; BB(0x0053332a);
    /* 0053332a: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_00533334:; BB(0x00533334);
    /* 00533334: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0053333a: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0053333d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533344: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00533347: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 0053334d: jmp 0x533c70 */ goto L_00533c70;
L_00533352:; BB(0x00533352);
    /* 00533352: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533354: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533359u); f_00686d82();
    /* 00533359: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053335c: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0053335f: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00533366: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053336a: je 0x533391 */ if (fZ) goto L_00533391;
L_0053336c:; BB(0x0053336c);
    /* 0053336c: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0053336f: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533374u); f_00538560();
    /* 00533374: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00533377: mov dword ptr [eax], 0x6c4cec */ W32((u32)(r_eax), 0x6c4cecu);
    /* 0053337d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00533380: mov dword ptr [ecx], 0x6c4b84 */ W32((u32)(r_ecx), 0x6c4b84u);
    /* 00533386: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00533389: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0053338f: jmp 0x53339b */ goto L_0053339b;
L_00533391:; BB(0x00533391);
    /* 00533391: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_0053339b:; BB(0x0053339b);
    /* 0053339b: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 005333a1: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005333a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005333ab: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005333ae: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 005333b4: jmp 0x533c70 */ goto L_00533c70;
L_005333b9:; BB(0x005333b9);
    /* 005333b9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005333bb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5333c0u); f_00686d82();
    /* 005333c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005333c3: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005333c6: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 005333cd: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005333d1: je 0x5333f8 */ if (fZ) goto L_005333f8;
L_005333d3:; BB(0x005333d3);
    /* 005333d3: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005333d6: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x5333dbu); f_00538560();
    /* 005333db: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 005333de: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 005333e4: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005333e7: mov dword ptr [eax], 0x6c4b0c */ W32((u32)(r_eax), 0x6c4b0cu);
    /* 005333ed: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005333f0: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 005333f6: jmp 0x533402 */ goto L_00533402;
L_005333f8:; BB(0x005333f8);
    /* 005333f8: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_00533402:; BB(0x00533402);
    /* 00533402: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00533408: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0053340b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533412: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00533415: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 0053341a: jmp 0x533c70 */ goto L_00533c70;
L_0053341f:; BB(0x0053341f);
    /* 0053341f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533421: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533426u); f_00686d82();
    /* 00533426: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533429: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0053342c: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00533433: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533437: je 0x53345e */ if (fZ) goto L_0053345e;
L_00533439:; BB(0x00533439);
    /* 00533439: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0053343c: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533441u); f_00538560();
    /* 00533441: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00533444: mov dword ptr [ecx], 0x6c4cec */ W32((u32)(r_ecx), 0x6c4cecu);
    /* 0053344a: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0053344d: mov dword ptr [edx], 0x6c4a94 */ W32((u32)(r_edx), 0x6c4a94u);
    /* 00533453: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00533456: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0053345c: jmp 0x533468 */ goto L_00533468;
L_0053345e:; BB(0x0053345e);
    /* 0053345e: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_00533468:; BB(0x00533468);
    /* 00533468: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0053346e: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00533471: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533478: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0053347b: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 00533481: jmp 0x533c70 */ goto L_00533c70;
L_00533486:; BB(0x00533486);
    /* 00533486: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533488: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53348du); f_00686d82();
    /* 0053348d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533490: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00533493: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0053349a: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053349e: je 0x5334c5 */ if (fZ) goto L_005334c5;
L_005334a0:; BB(0x005334a0);
    /* 005334a0: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005334a3: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x5334a8u); f_00538560();
    /* 005334a8: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005334ab: mov dword ptr [eax], 0x6c4cec */ W32((u32)(r_eax), 0x6c4cecu);
    /* 005334b1: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005334b4: mov dword ptr [ecx], 0x6c4a1c */ W32((u32)(r_ecx), 0x6c4a1cu);
    /* 005334ba: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005334bd: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 005334c3: jmp 0x5334cf */ goto L_005334cf;
L_005334c5:; BB(0x005334c5);
    /* 005334c5: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_005334cf:; BB(0x005334cf);
    /* 005334cf: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 005334d5: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005334d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005334df: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005334e2: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 005334e8: jmp 0x533c70 */ goto L_00533c70;
L_005334ed:; BB(0x005334ed);
    /* 005334ed: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005334ef: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5334f4u); f_00686d82();
    /* 005334f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005334f7: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005334fd: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00533504: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053350b: je 0x53353e */ if (fZ) goto L_0053353e;
L_0053350d:; BB(0x0053350d);
    /* 0053350d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00533513: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533518u); f_00538560();
    /* 00533518: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0053351e: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 00533524: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0053352a: mov dword ptr [eax], 0x6c49a4 */ W32((u32)(r_eax), 0x6c49a4u);
    /* 00533530: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00533536: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 0053353c: jmp 0x533548 */ goto L_00533548;
L_0053353e:; BB(0x0053353e);
    /* 0053353e: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_00533548:; BB(0x00533548);
    /* 00533548: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0053354e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00533554: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053355b: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00533561: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 00533566: jmp 0x533c70 */ goto L_00533c70;
L_0053356b:; BB(0x0053356b);
    /* 0053356b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053356d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533572u); f_00686d82();
    /* 00533572: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533575: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0053357b: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 00533582: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533589: je 0x5335bc */ if (fZ) goto L_005335bc;
L_0053358b:; BB(0x0053358b);
    /* 0053358b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00533591: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533596u); f_00538560();
    /* 00533596: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0053359c: mov dword ptr [ecx], 0x6c4cec */ W32((u32)(r_ecx), 0x6c4cecu);
    /* 005335a2: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005335a8: mov dword ptr [edx], 0x6c492c */ W32((u32)(r_edx), 0x6c492cu);
    /* 005335ae: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005335b4: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 005335ba: jmp 0x5335c6 */ goto L_005335c6;
L_005335bc:; BB(0x005335bc);
    /* 005335bc: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_005335c6:; BB(0x005335c6);
    /* 005335c6: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 005335cc: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005335d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005335d9: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005335df: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 005335e5: jmp 0x533c70 */ goto L_00533c70;
L_005335ea:; BB(0x005335ea);
    /* 005335ea: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005335ec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5335f1u); f_00686d82();
    /* 005335f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005335f4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005335fa: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00533601: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533608: je 0x53363b */ if (fZ) goto L_0053363b;
L_0053360a:; BB(0x0053360a);
    /* 0053360a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00533610: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533615u); f_00538560();
    /* 00533615: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0053361b: mov dword ptr [eax], 0x6c4cec */ W32((u32)(r_eax), 0x6c4cecu);
    /* 00533621: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00533627: mov dword ptr [ecx], 0x6c48b4 */ W32((u32)(r_ecx), 0x6c48b4u);
    /* 0053362d: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00533633: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 00533639: jmp 0x533645 */ goto L_00533645;
L_0053363b:; BB(0x0053363b);
    /* 0053363b: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_00533645:; BB(0x00533645);
    /* 00533645: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 0053364b: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00533651: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533658: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0053365e: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 00533664: jmp 0x533c70 */ goto L_00533c70;
L_00533669:; BB(0x00533669);
    /* 00533669: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053366b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533670u); f_00686d82();
    /* 00533670: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533673: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00533679: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 00533680: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533687: je 0x5336ba */ if (fZ) goto L_005336ba;
L_00533689:; BB(0x00533689);
    /* 00533689: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0053368f: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533694u); f_00538560();
    /* 00533694: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0053369a: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 005336a0: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005336a6: mov dword ptr [eax], 0x6c483c */ W32((u32)(r_eax), 0x6c483cu);
    /* 005336ac: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005336b2: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 005336b8: jmp 0x5336c4 */ goto L_005336c4;
L_005336ba:; BB(0x005336ba);
    /* 005336ba: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_005336c4:; BB(0x005336c4);
    /* 005336c4: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005336ca: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 005336d0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005336d7: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005336dd: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 005336e2: jmp 0x533c70 */ goto L_00533c70;
L_005336e7:; BB(0x005336e7);
    /* 005336e7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005336e9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5336eeu); f_00686d82();
    /* 005336ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005336f1: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005336f7: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 005336fe: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533705: je 0x533738 */ if (fZ) goto L_00533738;
L_00533707:; BB(0x00533707);
    /* 00533707: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0053370d: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533712u); f_00538560();
    /* 00533712: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00533718: mov dword ptr [ecx], 0x6c4cec */ W32((u32)(r_ecx), 0x6c4cecu);
    /* 0053371e: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00533724: mov dword ptr [edx], 0x6c47c4 */ W32((u32)(r_edx), 0x6c47c4u);
    /* 0053372a: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00533730: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 00533736: jmp 0x533742 */ goto L_00533742;
L_00533738:; BB(0x00533738);
    /* 00533738: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_00533742:; BB(0x00533742);
    /* 00533742: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00533748: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0053374e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533755: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0053375b: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 00533761: jmp 0x533c70 */ goto L_00533c70;
L_00533766:; BB(0x00533766);
    /* 00533766: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533768: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53376du); f_00686d82();
    /* 0053376d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533770: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00533776: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 0053377d: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533784: je 0x5337b7 */ if (fZ) goto L_005337b7;
L_00533786:; BB(0x00533786);
    /* 00533786: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0053378c: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533791u); f_00538560();
    /* 00533791: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00533797: mov dword ptr [eax], 0x6c4cec */ W32((u32)(r_eax), 0x6c4cecu);
    /* 0053379d: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005337a3: mov dword ptr [ecx], 0x6c474c */ W32((u32)(r_ecx), 0x6c474cu);
    /* 005337a9: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005337af: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
    /* 005337b5: jmp 0x5337c1 */ goto L_005337c1;
L_005337b7:; BB(0x005337b7);
    /* 005337b7: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_005337c1:; BB(0x005337c1);
    /* 005337c1: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005337c7: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005337cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005337d4: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005337da: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 005337e0: jmp 0x533c70 */ goto L_00533c70;
L_005337e5:; BB(0x005337e5);
    /* 005337e5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005337e7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5337ecu); f_00686d82();
    /* 005337ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005337ef: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005337f5: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 005337fc: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533803: je 0x533836 */ if (fZ) goto L_00533836;
L_00533805:; BB(0x00533805);
    /* 00533805: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0053380b: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533810u); f_00538560();
    /* 00533810: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00533816: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 0053381c: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 00533822: mov dword ptr [eax], 0x6c46d4 */ W32((u32)(r_eax), 0x6c46d4u);
    /* 00533828: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0053382e: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 00533834: jmp 0x533840 */ goto L_00533840;
L_00533836:; BB(0x00533836);
    /* 00533836: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_00533840:; BB(0x00533840);
    /* 00533840: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 00533846: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0053384c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533853: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00533859: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 0053385e: jmp 0x533c70 */ goto L_00533c70;
L_00533863:; BB(0x00533863);
    /* 00533863: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533865: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53386au); f_00686d82();
    /* 0053386a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053386d: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00533873: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 0053387a: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533881: je 0x5338b4 */ if (fZ) goto L_005338b4;
L_00533883:; BB(0x00533883);
    /* 00533883: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00533889: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x53388eu); f_00538560();
    /* 0053388e: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00533894: mov dword ptr [ecx], 0x6c4cec */ W32((u32)(r_ecx), 0x6c4cecu);
    /* 0053389a: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005338a0: mov dword ptr [edx], 0x6c465c */ W32((u32)(r_edx), 0x6c465cu);
    /* 005338a6: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005338ac: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 005338b2: jmp 0x5338be */ goto L_005338be;
L_005338b4:; BB(0x005338b4);
    /* 005338b4: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_005338be:; BB(0x005338be);
    /* 005338be: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 005338c4: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005338ca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005338d1: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005338d7: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 005338dd: jmp 0x533c70 */ goto L_00533c70;
L_005338e2:; BB(0x005338e2);
    /* 005338e2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005338e4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5338e9u); f_00686d82();
    /* 005338e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005338ec: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005338f2: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 005338f9: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533900: je 0x533933 */ if (fZ) goto L_00533933;
L_00533902:; BB(0x00533902);
    /* 00533902: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00533908: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x53390du); f_00538560();
    /* 0053390d: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00533913: mov dword ptr [eax], 0x6c4cec */ W32((u32)(r_eax), 0x6c4cecu);
    /* 00533919: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0053391f: mov dword ptr [ecx], 0x6c45e4 */ W32((u32)(r_ecx), 0x6c45e4u);
    /* 00533925: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0053392b: mov dword ptr [ebp - 0x15c], edx */ W32((u32)(r_ebp+0xfffffea4u), r_edx);
    /* 00533931: jmp 0x53393d */ goto L_0053393d;
L_00533933:; BB(0x00533933);
    /* 00533933: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_0053393d:; BB(0x0053393d);
    /* 0053393d: mov eax, dword ptr [ebp - 0x15c] */ r_eax = R32((u32)(r_ebp+0xfffffea4u));
    /* 00533943: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00533949: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533950: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00533956: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 0053395c: jmp 0x533c70 */ goto L_00533c70;
L_00533961:; BB(0x00533961);
    /* 00533961: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533963: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533968u); f_00686d82();
    /* 00533968: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053396b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00533971: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 00533978: cmp dword ptr [ebp - 0xd0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053397f: je 0x5339b2 */ if (fZ) goto L_005339b2;
L_00533981:; BB(0x00533981);
    /* 00533981: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00533987: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x53398cu); f_00538560();
    /* 0053398c: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 00533992: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 00533998: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0053399e: mov dword ptr [eax], 0x6c456c */ W32((u32)(r_eax), 0x6c456cu);
    /* 005339a4: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 005339aa: mov dword ptr [ebp - 0x160], ecx */ W32((u32)(r_ebp+0xfffffea0u), r_ecx);
    /* 005339b0: jmp 0x5339bc */ goto L_005339bc;
L_005339b2:; BB(0x005339b2);
    /* 005339b2: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_005339bc:; BB(0x005339bc);
    /* 005339bc: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 005339c2: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 005339c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005339cf: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005339d5: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 005339da: jmp 0x533c70 */ goto L_00533c70;
L_005339df:; BB(0x005339df);
    /* 005339df: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005339e1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5339e6u); f_00686d82();
    /* 005339e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005339e9: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 005339ef: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 005339f6: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005339fd: je 0x533a30 */ if (fZ) goto L_00533a30;
L_005339ff:; BB(0x005339ff);
    /* 005339ff: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00533a05: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533a0au); f_00538560();
    /* 00533a0a: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00533a10: mov dword ptr [ecx], 0x6c5124 */ W32((u32)(r_ecx), 0x6c5124u);
    /* 00533a16: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00533a1c: mov dword ptr [edx], 0x6c44f4 */ W32((u32)(r_edx), 0x6c44f4u);
    /* 00533a22: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00533a28: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00533a2e: jmp 0x533a3a */ goto L_00533a3a;
L_00533a30:; BB(0x00533a30);
    /* 00533a30: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_00533a3a:; BB(0x00533a3a);
    /* 00533a3a: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 00533a40: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 00533a46: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533a4d: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00533a53: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 00533a59: jmp 0x533c70 */ goto L_00533c70;
L_00533a5e:; BB(0x00533a5e);
    /* 00533a5e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533a60: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533a65u); f_00686d82();
    /* 00533a65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533a68: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00533a6e: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 00533a75: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533a7c: je 0x533aaf */ if (fZ) goto L_00533aaf;
L_00533a7e:; BB(0x00533a7e);
    /* 00533a7e: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 00533a84: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533a89u); f_00538560();
    /* 00533a89: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00533a8f: mov dword ptr [eax], 0x6c4cec */ W32((u32)(r_eax), 0x6c4cecu);
    /* 00533a95: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 00533a9b: mov dword ptr [ecx], 0x6c447c */ W32((u32)(r_ecx), 0x6c447cu);
    /* 00533aa1: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00533aa7: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
    /* 00533aad: jmp 0x533ab9 */ goto L_00533ab9;
L_00533aaf:; BB(0x00533aaf);
    /* 00533aaf: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_00533ab9:; BB(0x00533ab9);
    /* 00533ab9: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 00533abf: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00533ac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533acc: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00533ad2: mov dword ptr [0x793394], ecx */ W32((u32)(0x793394u), r_ecx);
    /* 00533ad8: jmp 0x533c70 */ goto L_00533c70;
L_00533add:; BB(0x00533add);
    /* 00533add: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533adf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533ae4u); f_00686d82();
    /* 00533ae4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533ae7: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00533aed: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 00533af4: cmp dword ptr [ebp - 0xe8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533afb: je 0x533b2e */ if (fZ) goto L_00533b2e;
L_00533afd:; BB(0x00533afd);
    /* 00533afd: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00533b03: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533b08u); f_00538560();
    /* 00533b08: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00533b0e: mov dword ptr [edx], 0x6c4cec */ W32((u32)(r_edx), 0x6c4cecu);
    /* 00533b14: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 00533b1a: mov dword ptr [eax], 0x6c4404 */ W32((u32)(r_eax), 0x6c4404u);
    /* 00533b20: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00533b26: mov dword ptr [ebp - 0x16c], ecx */ W32((u32)(r_ebp+0xfffffe94u), r_ecx);
    /* 00533b2c: jmp 0x533b38 */ goto L_00533b38;
L_00533b2e:; BB(0x00533b2e);
    /* 00533b2e: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_00533b38:; BB(0x00533b38);
    /* 00533b38: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00533b3e: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 00533b44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533b4b: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 00533b51: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
    /* 00533b56: jmp 0x533c70 */ goto L_00533c70;
L_00533b5b:; BB(0x00533b5b);
    /* 00533b5b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533b5d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533b62u); f_00686d82();
    /* 00533b62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533b65: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00533b6b: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 00533b72: cmp dword ptr [ebp - 0xf0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533b79: je 0x533bac */ if (fZ) goto L_00533bac;
L_00533b7b:; BB(0x00533b7b);
    /* 00533b7b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00533b81: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533b86u); f_00538560();
    /* 00533b86: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00533b8c: mov dword ptr [ecx], 0x6c4cec */ W32((u32)(r_ecx), 0x6c4cecu);
    /* 00533b92: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 00533b98: mov dword ptr [edx], 0x6c438c */ W32((u32)(r_edx), 0x6c438cu);
    /* 00533b9e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00533ba4: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 00533baa: jmp 0x533bb6 */ goto L_00533bb6;
L_00533bac:; BB(0x00533bac);
    /* 00533bac: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
L_00533bb6:; BB(0x00533bb6);
    /* 00533bb6: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00533bbc: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 00533bc2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533bc9: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 00533bcf: mov dword ptr [0x793394], edx */ W32((u32)(0x793394u), r_edx);
    /* 00533bd5: jmp 0x533c70 */ goto L_00533c70;
L_00533bda:; BB(0x00533bda);
    /* 00533bda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00533bdc: jne 0x533bf5 */ if (!fZ) goto L_00533bf5;
L_00533bde:; BB(0x00533bde);
    /* 00533bde: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00533be3: push 0x6c4364 */ { u32 v = 0x6c4364u; r_esp -= 4; W32(r_esp, v); }
    /* 00533be8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00533bed: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x533bf2u); f_005e9f20();
    /* 00533bf2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00533bf5:; BB(0x00533bf5);
    /* 00533bf5: jmp 0x533c70 */ goto L_00533c70;
L_00533bf7:; BB(0x00533bf7);
    /* 00533bf7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00533bf9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x533bfeu); f_00686d82();
    /* 00533bfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533c01: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00533c07: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 00533c0e: cmp dword ptr [ebp - 0xf8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c15: je 0x533c48 */ if (fZ) goto L_00533c48;
L_00533c17:; BB(0x00533c17);
    /* 00533c17: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00533c1d: call 0x538560 */ r_esp -= 4; W32(r_esp, 0x533c22u); f_00538560();
    /* 00533c22: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 00533c28: mov dword ptr [edx], 0x6c5124 */ W32((u32)(r_edx), 0x6c5124u);
    /* 00533c2e: mov eax, dword ptr [ebp - 0xf8] */ r_eax = R32((u32)(r_ebp+0xffffff08u));
    /* 00533c34: mov dword ptr [eax], 0x6c50ac */ W32((u32)(r_eax), 0x6c50acu);
    /* 00533c3a: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00533c40: mov dword ptr [ebp - 0x174], ecx */ W32((u32)(r_ebp+0xfffffe8cu), r_ecx);
    /* 00533c46: jmp 0x533c52 */ goto L_00533c52;
L_00533c48:; BB(0x00533c48);
    /* 00533c48: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
L_00533c52:; BB(0x00533c52);
    /* 00533c52: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00533c58: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 00533c5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533c65: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 00533c6b: mov dword ptr [0x793394], eax */ W32((u32)(0x793394u), r_eax);
L_00533c70:; BB(0x00533c70);
    /* 00533c70: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 00533c76: call 0x5385a0 */ r_esp -= 4; W32(r_esp, 0x533c7bu); f_005385a0();
    /* 00533c7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00533c7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00533c85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00533c86: mov esp, ebp */ r_esp = r_ebp;
    /* 00533c88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533c89: ret  */ FN_RET(0x00532ef0); r_esp += 4; return;
}

void f_005344d0(void) /* SlotMachineAlienInvasion::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005344d0);
    /* 005344d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005344d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005344d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005344d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005344d7: mov eax, 0xae */ r_eax = 0xaeu;
    /* 005344dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005344de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005344df: ret  */ FN_RET(0x005344d0); r_esp += 4; return;
}

void f_00534720(void) /* SlotMachineAlienInvasion::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534720);
    /* 00534720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534721: mov ebp, esp */ r_ebp = r_esp;
    /* 00534723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534727: mov eax, 9 */ r_eax = 0x9u;
    /* 0053472c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053472e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053472f: ret  */ FN_RET(0x00534720); r_esp += 4; return;
}

void f_005386d0(void) /* SlotMachineAlienInvasion::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005386d0);
    /* 005386d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005386d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005386d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005386d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005386d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005386da: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005386dd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005386e0: mov eax, dword ptr [eax + ecx*4 + 0x72b270] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72b270u));
    /* 005386e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005386e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005386ea: ret 8 */ FN_RET(0x005386d0); r_esp += 12; return;
}

void f_005386f0(void) /* SlotMachineAlienInvasion::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005386f0);
    /* 005386f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005386f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005386f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005386f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005386f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005386fa: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005386fd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538700: mov eax, dword ptr [eax + ecx*4 + 0x72b378] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72b378u));
    /* 00538707: mov esp, ebp */ r_esp = r_ebp;
    /* 00538709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053870a: ret 8 */ FN_RET(0x005386f0); r_esp += 12; return;
}

void f_00538710(void) /* SlotMachineAlienInvasion::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538710);
    /* 00538710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538711: mov ebp, esp */ r_ebp = r_esp;
    /* 00538713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538717: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053871a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053871d: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538720: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538723: mov eax, dword ptr [eax + ecx*4 + 0x72b1b8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72b1b8u));
    /* 0053872a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053872c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053872d: ret 8 */ FN_RET(0x00538710); r_esp += 12; return;
}

void f_00538730(void) /* SlotMachineAlienInvasion::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538730);
    /* 00538730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538731: mov ebp, esp */ r_ebp = r_esp;
    /* 00538733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538737: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053873a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053873d: mov eax, dword ptr [eax + 0x72b698] */ r_eax = R32((u32)(r_eax+0x72b698u));
    /* 00538743: mov esp, ebp */ r_esp = r_ebp;
    /* 00538745: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538746: ret 4 */ FN_RET(0x00538730); r_esp += 8; return;
}

void f_00538750(void) /* SlotMachineAlienInvasion::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538750);
    /* 00538750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538751: mov ebp, esp */ r_ebp = r_esp;
    /* 00538753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538757: mov eax, 9 */ r_eax = 0x9u;
    /* 0053875c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053875e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053875f: ret  */ FN_RET(0x00538750); r_esp += 4; return;
}

void f_00538760(void) /* SlotMachineAlienInvasion::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538760);
    /* 00538760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538761: mov ebp, esp */ r_ebp = r_esp;
    /* 00538763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538767: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053876a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053876d: add eax, 0x72b678 */ {  u32 a = r_eax; u32 b = 0x72b678u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538772: mov esp, ebp */ r_esp = r_ebp;
    /* 00538774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538775: ret 4 */ FN_RET(0x00538760); r_esp += 8; return;
}

