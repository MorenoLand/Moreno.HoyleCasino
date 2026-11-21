#include "protos.h"

void f_005e0690(void) /* sub_5E0690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0690);
    /* 005e0690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0691: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0693: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0699: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e069e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e06a0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e06a3: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 005e06a9: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e06ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e06ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e06b0: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5e06b5u); f_005d5a90();
    /* 005e06b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e06b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e06b9: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e06beu); f_0064c8a0();
    /* 005e06be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e06c1: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005e06c7: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 005e06cd: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005e06d3: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005e06d9: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005e06df: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005e06e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e06e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e06e9: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e06eeu); f_0064c8a0();
    /* 005e06ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e06f1: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005e06f7: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 005e06fd: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005e0703: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005e0709: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005e070f: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005e0715: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0717: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0719: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e071eu); f_0064c8a0();
    /* 005e071e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0721: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005e0727: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 005e072d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005e0733: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 005e0739: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005e073f: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005e0745: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0748: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005e074e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0755: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005e075b: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5e0760u); f_005da7b0();
    /* 005e0760: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e0763: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0765: je 0x5e07fd */ if (fZ) goto L_005e07fd;
L_005e076b:; BB(0x005e076b);
    /* 005e076b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e076e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e0773u); f_0063aac0();
    /* 005e0773: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0776: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 005e077c: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 005e0782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0783: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e0789: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x5e078eu); f_006368b0();
    /* 005e078e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e0791: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0793: je 0x5e07fd */ if (fZ) goto L_005e07fd;
L_005e0795:; BB(0x005e0795);
    /* 005e0795: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0798: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e079du); f_0063aac0();
    /* 005e079d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e07a0: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005e07a6: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005e07ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e07b3: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5e07b8u); f_006369b0();
    /* 005e07b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e07b9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e07beu); f_005dcb00();
    /* 005e07be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e07c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e07c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07c7: mov ecx, dword ptr [eax + 0x4b8] */ r_ecx = R32((u32)(r_eax+0x4b8u));
    /* 005e07cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07ce: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 005e07d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07d5: lea eax, [ebp - 0xfc] */ r_eax = (u32)(r_ebp+0xffffff04u);
    /* 005e07db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e07dc: lea ecx, [ebp - 0xf4] */ r_ecx = (u32)(r_ebp+0xffffff0cu);
    /* 005e07e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e07e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e07e6: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5e07ebu); f_005d5a90();
    /* 005e07eb: mov ecx, eax */ r_ecx = r_eax;
    /* 005e07ed: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5e07f2u); f_0064c5c0();
    /* 005e07f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e07f4: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005e07f7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e07fa: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e07fd:; BB(0x005e07fd);
    /* 005e07fd: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 005e0803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0804: lea edx, [ebp - 0xc4] */ r_edx = (u32)(r_ebp+0xffffff3cu);
    /* 005e080a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e080b: lea eax, [ebp - 0xcc] */ r_eax = (u32)(r_ebp+0xffffff34u);
    /* 005e0811: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0812: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0815: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0816: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005e081c: call 0x5e0af0 */ r_esp -= 4; W32(r_esp, 0x5e0821u); f_005e0af0();
    /* 005e0821: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0823: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0825: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0827: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005e082c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e082e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0830: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0832: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0834: push 0x6d5030 */ { u32 v = 0x6d5030u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0839: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e083eu); f_00630f40();
    /* 005e083e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0842: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005e0844: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0846: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0849: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e084eu); f_005fa5b0();
    /* 005e084e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0850: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0852: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0854: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0859: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e085b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e085d: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0862: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0864: push 0x6d5010 */ { u32 v = 0x6d5010u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0869: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e086eu); f_00630f40();
    /* 005e086e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0872: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0874: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0876: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0879: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e087eu); f_005fa5b0();
    /* 005e087e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0880: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0882: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0884: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005e0887: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0888: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e088b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e088c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e088f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0890: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e0895u); f_0064c8d0();
    /* 005e0895: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0898: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e089a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e089c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e089e: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08a3: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08a5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08a7: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08ac: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08ae: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005e08b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08b2: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e08b9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e08beu); f_005fa5b0();
    /* 005e08be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08c0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08c4: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08c9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08cb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08cd: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08d2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e08d4: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08d9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e08deu); f_00630f40();
    /* 005e08de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e08e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e08e2: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e08e9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e08eeu); f_005fa5b0();
    /* 005e08ee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e08f4: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005e08f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e08f8: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005e08fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e08ff: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005e0905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0906: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e090bu); f_0064c8d0();
    /* 005e090b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e090e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0910: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0912: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0914: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0919: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e091b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e091d: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0922: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0924: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005e0927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0928: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005e092a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e092c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e092f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e0934u); f_005fa5b0();
    /* 005e0934: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0936: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0938: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e093a: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 005e093f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0941: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0943: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0948: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e094a: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e094f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e0954u); f_00630f40();
    /* 005e0954: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0958: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005e095a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e095c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e095f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e0964u); f_005fa5b0();
    /* 005e0964: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0966: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0968: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e096a: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005e096d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e096e: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005e0974: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0975: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 005e097b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e097c: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e0981u); f_0064c8d0();
    /* 005e0981: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0984: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0986: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0988: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e098a: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 005e098f: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0991: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0993: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0998: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e099a: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005e099d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e099e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e09a5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e09aau); f_005fa5b0();
    /* 005e09aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e09ac: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09b0: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 005e09b5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e09b7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e09b9: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e09be: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e09c0: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09c5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e09cau); f_00630f40();
    /* 005e09ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e09cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e09ce: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e09d5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e09dau); f_005fa5b0();
    /* 005e09da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09e0: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005e09e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09e4: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005e09ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e09eb: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005e09f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e09f2: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e09f7u); f_0064c8d0();
    /* 005e09f7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e09fa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e09fc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e09fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a00: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a05: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a07: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a09: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a0e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a10: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005e0a13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a14: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0a1b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e0a20u); f_005fa5b0();
    /* 005e0a20: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 005e0a2a: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 005e0a34: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005e0a3a: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e0a3fu); f_005d52e0();
    /* 005e0a3f: mov al, byte ptr [eax + 0x29] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x29u))) & 0xffu);
    /* 005e0a42: mov byte ptr [ebp - 0x105], al */ W8((u32)(r_ebp+0xfffffefbu), (u8)r_eax);
    /* 005e0a48: movzx ecx, byte ptr [ebp - 0x105] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffefbu));
    /* 005e0a4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0a51: je 0x5e0a64 */ if (fZ) goto L_005e0a64;
L_005e0a53:; BB(0x005e0a53);
    /* 005e0a53: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005e0a59: call 0x5d6bd0 */ r_esp -= 4; W32(r_esp, 0x5e0a5eu); f_005d6bd0();
    /* 005e0a5e: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
L_005e0a64:; BB(0x005e0a64);
    /* 005e0a64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a6a: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 005e0a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a71: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005e0a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a78: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005e0a7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a7f: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e0a84u); f_0064c8d0();
    /* 005e0a84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0a87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a89: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a8d: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a92: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a94: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a96: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a9b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0a9d: push 0x6d4fe8 */ { u32 v = 0x6d4fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0aa2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e0aa7u); f_00630f40();
    /* 005e0aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0aaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0aab: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0aaf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0ab2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e0ab7u); f_005fa5b0();
    /* 005e0ab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ab9: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0abb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0abd: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ac2: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ac4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ac6: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0acb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0acd: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 005e0ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ad4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ad8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0adb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e0ae0u); f_005fa5b0();
    /* 005e0ae0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0ae3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0ae5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e0aeau); f_00686d72();
    /* 005e0aea: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0aec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0aed: ret 8 */ FN_RET(0x005e0690); r_esp += 12; return;
}

void f_005e0af0(void) /* sub_5E0AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0af0);
    /* 005e0af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0af1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0af3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0af6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e0af9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e0b00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0b07: jmp 0x5e0b12 */ goto L_005e0b12;
L_005e0b09:; BB(0x005e0b09);
    /* 005e0b09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0b0c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0b0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e0b12:; BB(0x005e0b12);
    /* 005e0b12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0b15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0b17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0b1a: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005e0b20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0b22u); call_ind(t); }
    /* 005e0b22: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0b25: jge 0x5e0b82 */ if ((fS==fO)) goto L_005e0b82;
L_005e0b27:; BB(0x005e0b27);
    /* 005e0b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0b2a: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e0b2d: mov edx, dword ptr [ecx + 0x7947f4] */ r_edx = R32((u32)(r_ecx+0x7947f4u));
    /* 005e0b33: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e0b36: cmp dword ptr [0x163069c], 0 */ {  u32 a = R32((u32)(0x163069cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0b3d: je 0x5e0b60 */ if (fZ) goto L_005e0b60;
L_005e0b3f:; BB(0x005e0b3f);
    /* 005e0b3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0b42: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e0b45: mov ecx, dword ptr [eax + 0x7947f0] */ r_ecx = R32((u32)(r_eax+0x7947f0u));
    /* 005e0b4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b4c: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005e0b52: call 0x653e30 */ r_esp -= 4; W32(r_esp, 0x5e0b57u); f_00653e30();
    /* 005e0b57: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e0b5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0b5c: je 0x5e0b60 */ if (fZ) goto L_005e0b60;
L_005e0b5e:; BB(0x005e0b5e);
    /* 005e0b5e: jmp 0x5e0b09 */ goto L_005e0b09;
L_005e0b60:; BB(0x005e0b60);
    /* 005e0b60: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005e0b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b64: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e0b67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b68: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e0b6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e0b6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b70: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0b73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0b75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0b78: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005e0b7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0b80u); call_ind(t); }
    /* 005e0b80: jmp 0x5e0b09 */ goto L_005e0b09;
L_005e0b82:; BB(0x005e0b82);
    /* 005e0b82: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0b84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0b85: ret 0x10 */ FN_RET(0x005e0af0); r_esp += 20; return;
}

void f_005e0b90(void) /* sub_5E0B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0b90);
    /* 005e0b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0b91: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0b93: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0b96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e0b99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0ba0: jmp 0x5e0bab */ goto L_005e0bab;
L_005e0ba2:; BB(0x005e0ba2);
    /* 005e0ba2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0ba5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0ba8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e0bab:; BB(0x005e0bab);
    /* 005e0bab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e0bb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0bb3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e0bb9: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005e0bbf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0bc1u); call_ind(t); }
    /* 005e0bc1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0bc4: jge 0x5e0c35 */ if ((fS==fO)) goto L_005e0c35;
L_005e0bc6:; BB(0x005e0bc6);
    /* 005e0bc6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e0bcc: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005e0bcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0bd2: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e0bd5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e0bd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0bdb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e0be0u); f_0063aac0();
    /* 005e0be0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0be2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e0be5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e0be7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0beb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e0bee: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e0bf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0bf3: je 0x5e0bf7 */ if (fZ) goto L_005e0bf7;
L_005e0bf5:; BB(0x005e0bf5);
    /* 005e0bf5: jmp 0x5e0ba2 */ goto L_005e0ba2;
L_005e0bf7:; BB(0x005e0bf7);
    /* 005e0bf7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e0bfd: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005e0c00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0c03: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005e0c06: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x5e0c0bu); f_00520e60();
    /* 005e0c0b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e0c0e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e0c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c16: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5e0c1bu); f_00686ec0();
    /* 005e0c1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0c1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0c20: jne 0x5e0c30 */ if (!fZ) goto L_005e0c30;
L_005e0c22:; BB(0x005e0c22);
    /* 005e0c22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0c25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c26: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e0c2bu); f_005dcb00();
    /* 005e0c2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0c2e: jmp 0x5e0c37 */ goto L_005e0c37;
L_005e0c30:; BB(0x005e0c30);
    /* 005e0c30: jmp 0x5e0ba2 */ goto L_005e0ba2;
L_005e0c35:; BB(0x005e0c35);
    /* 005e0c35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e0c37:; BB(0x005e0c37);
    /* 005e0c37: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0c39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0c3a: ret 4 */ FN_RET(0x005e0b90); r_esp += 8; return;
}

void f_005e0c40(void) /* sub_5E0C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0c40);
    /* 005e0c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0c43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0c46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e0c49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e0c4c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005e0c52: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0c55: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005e0c5c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e0c5f: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005e0c65: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e0c68: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005e0c6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0c72: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0c75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0c76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0c79: call 0x5e0b90 */ r_esp -= 4; W32(r_esp, 0x5e0c7eu); f_005e0b90();
    /* 005e0c7e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e0c81: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0c85: jne 0x5e0c89 */ if (!fZ) goto L_005e0c89;
L_005e0c87:; BB(0x005e0c87);
    /* 005e0c87: jmp 0x5e0cb7 */ goto L_005e0cb7;
L_005e0c89:; BB(0x005e0c89);
    /* 005e0c89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0c8c: mov eax, dword ptr [edx + 0x4c4] */ r_eax = R32((u32)(r_edx+0x4c4u));
    /* 005e0c92: mov ecx, dword ptr [edx + 0x4c8] */ r_ecx = R32((u32)(r_edx+0x4c8u));
    /* 005e0c98: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e0c9b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e0c9d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005e0ca0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0ca3: mov ecx, dword ptr [eax + 0x4d4] */ r_ecx = R32((u32)(r_eax+0x4d4u));
    /* 005e0ca9: mov edx, dword ptr [eax + 0x4d8] */ r_edx = R32((u32)(r_eax+0x4d8u));
    /* 005e0caf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e0cb2: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e0cb4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005e0cb7:; BB(0x005e0cb7);
    /* 005e0cb7: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0cb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0cba: ret 0xc */ FN_RET(0x005e0c40); r_esp += 16; return;
}

void f_005e0cc0(void) /* sub_5E0CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0cc0);
    /* 005e0cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0cc3: sub esp, 0x418 */ {  u32 a = r_esp; u32 b = 0x418u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0cc9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e0cce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e0cd0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e0cd3: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 005e0cd9: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005e0ce0: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ce5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ce7: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005e0ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cee: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5e0cf3u); f_00686fa2();
    /* 005e0cf3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0cf6: push 0x6d5050 */ { u32 v = 0x6d5050u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0cfb: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e0d01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d02: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5e0d07u); f_00686ec6();
    /* 005e0d07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0d0a: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d0f: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e0d15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d16: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5e0d1bu); f_005ea9c0();
    /* 005e0d1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0d1e: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 005e0d24: cmp dword ptr [ebp - 0x410], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0d2b: je 0x5e0d63 */ if (fZ) goto L_005e0d63;
L_005e0d2d:; BB(0x005e0d2d);
    /* 005e0d2d: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005e0d33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d36: push 0x4e38 */ { u32 v = 0x4e38u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d3b: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005e0d41: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0d47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d48: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x5e0d4eu); call_ind(t); }
    /* 005e0d4e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0d51: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005e0d57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0d58: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5e0d5eu); call_ind(t); }
    /* 005e0d5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0d61: jmp 0x5e0ddf */ goto L_005e0ddf;
L_005e0d63:; BB(0x005e0d63);
    /* 005e0d63: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005e0d69: mov dword ptr [eax + 0x98], 1 */ W32((u32)(r_eax+0x98u), 0x1u);
    /* 005e0d73: mov dword ptr [ebp - 0x40c], 0 */ W32((u32)(r_ebp+0xfffffbf4u), 0x0u);
    /* 005e0d7d: jmp 0x5e0d8e */ goto L_005e0d8e;
L_005e0d7f:; BB(0x005e0d7f);
    /* 005e0d7f: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005e0d85: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0d88: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
L_005e0d8e:; BB(0x005e0d8e);
    /* 005e0d8e: cmp dword ptr [ebp - 0x40c], 0x3e9 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0d98: jge 0x5e0ddf */ if ((fS==fO)) goto L_005e0ddf;
L_005e0d9a:; BB(0x005e0d9a);
    /* 005e0d9a: mov dword ptr [ebp - 0x414], 0 */ W32((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 005e0da4: jmp 0x5e0db5 */ goto L_005e0db5;
L_005e0da6:; BB(0x005e0da6);
    /* 005e0da6: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 005e0dac: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0daf: mov dword ptr [ebp - 0x414], edx */ W32((u32)(r_ebp+0xfffffbecu), r_edx);
L_005e0db5:; BB(0x005e0db5);
    /* 005e0db5: cmp dword ptr [ebp - 0x414], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0dbc: jge 0x5e0ddd */ if ((fS==fO)) goto L_005e0ddd;
L_005e0dbe:; BB(0x005e0dbe);
    /* 005e0dbe: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005e0dc4: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e0dc7: add eax, dword ptr [ebp - 0x414] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0dcd: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 005e0dd3: mov byte ptr [ecx + eax + 0x9c], 0 */ W8((u32)(r_ecx+r_eax+0x9cu), 0x0u);
    /* 005e0ddb: jmp 0x5e0da6 */ goto L_005e0da6;
L_005e0ddd:; BB(0x005e0ddd);
    /* 005e0ddd: jmp 0x5e0d7f */ goto L_005e0d7f;
L_005e0ddf:; BB(0x005e0ddf);
    /* 005e0ddf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0de2: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0de4: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e0de9u); f_00686d72();
    /* 005e0de9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0dec: ret  */ FN_RET(0x005e0cc0); r_esp += 4; return;
}

void f_005e0df0(void) /* sub_5E0DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0df0);
    /* 005e0df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0df1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0df3: sub esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0df9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e0dfe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e0e00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e0e03: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
    /* 005e0e09: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005e0e10: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e17: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005e0e1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e1e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5e0e23u); f_00686fa2();
    /* 005e0e23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e26: push 0x6d5050 */ { u32 v = 0x6d5050u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e2b: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e0e31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e32: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5e0e37u); f_00686ec6();
    /* 005e0e37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e3a: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e3f: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e0e45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e46: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5e0e4bu); f_005ea9c0();
    /* 005e0e4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e4e: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 005e0e54: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0e5b: je 0x5e0e91 */ if (fZ) goto L_005e0e91;
L_005e0e5d:; BB(0x005e0e5d);
    /* 005e0e5d: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005e0e63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e66: push 0x4e38 */ { u32 v = 0x4e38u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e6b: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 005e0e71: add ecx, 0x98 */ {  u32 a = r_ecx; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0e77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e78: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x5e0e7eu); call_ind(t); }
    /* 005e0e7e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0e81: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005e0e87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0e88: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5e0e8eu); call_ind(t); }
    /* 005e0e8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e0e91:; BB(0x005e0e91);
    /* 005e0e91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0e94: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0e96: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e0e9bu); f_00686d72();
    /* 005e0e9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0e9e: ret  */ FN_RET(0x005e0df0); r_esp += 4; return;
}

void f_005e0ea0(void) /* sub_5E0EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0ea0);
    /* 005e0ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0ea3: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0ea6: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005e0ea9: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005e0eb0: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005e0eb3: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005e0eb9: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005e0ebc: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005e0ec3: jmp 0x5e0ece */ goto L_005e0ece;
L_005e0ec5:; BB(0x005e0ec5);
    /* 005e0ec5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0ec8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0ecb: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
L_005e0ece:; BB(0x005e0ece);
    /* 005e0ece: cmp dword ptr [ebp - 0x54], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0ed2: jge 0x5e0ee1 */ if ((fS==fO)) goto L_005e0ee1;
L_005e0ed4:; BB(0x005e0ed4);
    /* 005e0ed4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0ed7: mov dword ptr [ebp + eax*4 - 0x50], 0xffffffff */ W32((u32)(r_ebp+r_eax*4+0xffffffb0u), 0xffffffffu);
    /* 005e0edf: jmp 0x5e0ec5 */ goto L_005e0ec5;
L_005e0ee1:; BB(0x005e0ee1);
    /* 005e0ee1: cmp dword ptr [ebp - 0x60], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0ee5: je 0x5e0f41 */ if (fZ) goto L_005e0f41;
L_005e0ee7:; BB(0x005e0ee7);
    /* 005e0ee7: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0ee9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5e0eeeu); f_0062fbf0();
    /* 005e0eee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0ef1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0ef4: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005e0ef7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005e0efe: jmp 0x5e0f09 */ goto L_005e0f09;
L_005e0f00:; BB(0x005e0f00);
    /* 005e0f00: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0f03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0f06: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_005e0f09:; BB(0x005e0f09);
    /* 005e0f09: cmp dword ptr [ebp - 0x54], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0f0d: jge 0x5e0f26 */ if ((fS==fO)) goto L_005e0f26;
L_005e0f0f:; BB(0x005e0f0f);
    /* 005e0f0f: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0f12: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e0f15: cmp eax, dword ptr [ebp + edx*4 - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0f19: jne 0x5e0f24 */ if (!fZ) goto L_005e0f24;
L_005e0f1b:; BB(0x005e0f1b);
    /* 005e0f1b: mov dword ptr [ebp - 0x5c], 0xffffffff */ W32((u32)(r_ebp+0xffffffa4u), 0xffffffffu);
    /* 005e0f22: jmp 0x5e0f26 */ goto L_005e0f26;
L_005e0f24:; BB(0x005e0f24);
    /* 005e0f24: jmp 0x5e0f00 */ goto L_005e0f00;
L_005e0f26:; BB(0x005e0f26);
    /* 005e0f26: cmp dword ptr [ebp - 0x5c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0f2a: je 0x5e0f3f */ if (fZ) goto L_005e0f3f;
L_005e0f2c:; BB(0x005e0f2c);
    /* 005e0f2c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005e0f2f: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e0f32: mov dword ptr [ebp + ecx*4 - 0x50], edx */ W32((u32)(r_ebp+r_ecx*4+0xffffffb0u), r_edx);
    /* 005e0f36: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005e0f39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0f3c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_005e0f3f:; BB(0x005e0f3f);
    /* 005e0f3f: jmp 0x5e0ee1 */ goto L_005e0ee1;
L_005e0f41:; BB(0x005e0f41);
    /* 005e0f41: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005e0f48: jmp 0x5e0f53 */ goto L_005e0f53;
L_005e0f4a:; BB(0x005e0f4a);
    /* 005e0f4a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0f4d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0f50: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_005e0f53:; BB(0x005e0f53);
    /* 005e0f53: cmp dword ptr [ebp - 0x54], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0f57: jge 0x5e0f8a */ if ((fS==fO)) goto L_005e0f8a;
L_005e0f59:; BB(0x005e0f59);
    /* 005e0f59: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e0f5c: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e0f5f: add edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0f62: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005e0f65: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0f68: mov cl, byte ptr [ebp + ecx*4 - 0x50] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_ecx*4+0xffffffb0u))) & 0xffu);
    /* 005e0f6c: mov byte ptr [eax + edx + 0x9c], cl */ W8((u32)(r_eax+r_edx+0x9cu), (u8)r_ecx);
    /* 005e0f73: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0f76: mov eax, dword ptr [ebp + edx*4 - 0x50] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb0u));
    /* 005e0f7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f7b: push 0x6d505c */ { u32 v = 0x6d505cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f80: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5e0f85u); f_0062fde0();
    /* 005e0f85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0f88: jmp 0x5e0f4a */ goto L_005e0f4a;
L_005e0f8a:; BB(0x005e0f8a);
    /* 005e0f8a: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f8f: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5e0f94u); f_0062fde0();
    /* 005e0f94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0f97: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0f99: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e0f9c: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5e0fa1u); f_00635cb0();
    /* 005e0fa1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e0fa4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0fa6: je 0x5e0fc1 */ if (fZ) goto L_005e0fc1;
L_005e0fa8:; BB(0x005e0fa8);
    /* 005e0fa8: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0faf: jne 0x5e0fc1 */ if (!fZ) goto L_005e0fc1;
L_005e0fb1:; BB(0x005e0fb1);
    /* 005e0fb1: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 005e0fb7: call 0x5837d0 */ r_esp -= 4; W32(r_esp, 0x5e0fbcu); f_005837d0();
    /* 005e0fbc: jmp 0x5e1066 */ goto L_005e1066;
L_005e0fc1:; BB(0x005e0fc1);
    /* 005e0fc1: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e0fc4: call 0x5e1070 */ r_esp -= 4; W32(r_esp, 0x5e0fc9u); f_005e1070();
    /* 005e0fc9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0fcb: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e0fce: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5e0fd3u); f_00635cb0();
    /* 005e0fd3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e0fd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0fd8: je 0x5e1066 */ if (fZ) goto L_005e1066;
L_005e0fde:; BB(0x005e0fde);
    /* 005e0fde: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005e0fe5: jmp 0x5e0ff0 */ goto L_005e0ff0;
L_005e0fe7:; BB(0x005e0fe7);
    /* 005e0fe7: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0fea: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0fed: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_005e0ff0:; BB(0x005e0ff0);
    /* 005e0ff0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e0ff6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0ff8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e0ffe: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005e1004: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e1006u); call_ind(t); }
    /* 005e1006: cmp dword ptr [ebp - 0x54], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1009: jge 0x5e1066 */ if ((fS==fO)) goto L_005e1066;
L_005e100b:; BB(0x005e100b);
    /* 005e100b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e100e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e100f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e1014u); f_005dcb00();
    /* 005e1014: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1017: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005e101a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005e101d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e1022u); f_0063aac0();
    /* 005e1022: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e1024: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005e1027: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e102b: je 0x5e1049 */ if (fZ) goto L_005e1049;
L_005e102d:; BB(0x005e102d);
    /* 005e102d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005e1030: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e1035u); f_0063aac0();
    /* 005e1035: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e1037: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005e103a: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e103e: je 0x5e1049 */ if (fZ) goto L_005e1049;
L_005e1040:; BB(0x005e1040);
    /* 005e1040: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005e1047: jmp 0x5e1050 */ goto L_005e1050;
L_005e1049:; BB(0x005e1049);
    /* 005e1049: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
L_005e1050:; BB(0x005e1050);
    /* 005e1050: movzx ecx, byte ptr [ebp - 0x74] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff8cu));
    /* 005e1054: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1056: je 0x5e1064 */ if (fZ) goto L_005e1064;
L_005e1058:; BB(0x005e1058);
    /* 005e1058: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e105b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e105c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e105f: call 0x5e1410 */ r_esp -= 4; W32(r_esp, 0x5e1064u); f_005e1410();
L_005e1064:; BB(0x005e1064);
    /* 005e1064: jmp 0x5e0fe7 */ goto L_005e0fe7;
L_005e1066:; BB(0x005e1066);
    /* 005e1066: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1069: ret  */ FN_RET(0x005e0ea0); r_esp += 4; return;
}

