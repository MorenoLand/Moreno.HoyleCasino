#include "protos.h"

void f_005e4410(void) /* CasinoDemoNavigationRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4410);
    /* 005e4410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4411: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4415: push 0x6a97a8 */ { u32 v = 0x6a97a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e441a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e4420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4421: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4422: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e4427: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e4429: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e442a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e442d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e4433: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e4436: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4439: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x5e443eu); f_005d7b60();
    /* 005e443e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e4445: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4448: mov dword ptr [eax], 0x6d530c */ W32((u32)(r_eax), 0x6d530cu);
    /* 005e444e: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4453: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4456: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5e445bu); f_005f1ad0();
    /* 005e445b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4462: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4465: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e4468: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e446f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e4470: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4472: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4473: ret  */ FN_RET(0x005e4410); r_esp += 4; return;
}

void f_005e44a0(void) /* CasinoDemoNavigationRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e44a0);
    /* 005e44a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e44a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e44a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e44a5: push 0x6a981b */ { u32 v = 0x6a981bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e44aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e44b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e44b1: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e44b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e44b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e44bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e44bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e44bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e44c5: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005e44c8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e44cb: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5e44d0u); f_005d8230();
    /* 005e44d0: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e44d5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e44dau); f_00686d82();
    /* 005e44da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e44dd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e44e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e44e7: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e44eb: je 0x5e4509 */ if (fZ) goto L_005e4509;
L_005e44ed:; BB(0x005e44ed);
    /* 005e44ed: push 0x311a51 */ { u32 v = 0x311a51u; r_esp -= 4; W32(r_esp, v); }
    /* 005e44f2: push 0x311a51 */ { u32 v = 0x311a51u; r_esp -= 4; W32(r_esp, v); }
    /* 005e44f7: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e44fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e44ff: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e4504u); f_00603120();
    /* 005e4504: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005e4507: jmp 0x5e4510 */ goto L_005e4510;
L_005e4509:; BB(0x005e4509);
    /* 005e4509: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005e4510:; BB(0x005e4510);
    /* 005e4510: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e4513: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e4516: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e451d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e451f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4521: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4525: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4527: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e452c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e452e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4530: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4532: push 0x311a51 */ { u32 v = 0x311a51u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4537: push 0x311a51 */ { u32 v = 0x311a51u; r_esp -= 4; W32(r_esp, v); }
    /* 005e453c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e453f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4540: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4546: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4549: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e454eu); f_005f9de0();
    /* 005e454e: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4553: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e4558u); f_00686d82();
    /* 005e4558: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e455b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e455e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e4565: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4569: je 0x5e4587 */ if (fZ) goto L_005e4587;
L_005e456b:; BB(0x005e456b);
    /* 005e456b: push 0x311a52 */ { u32 v = 0x311a52u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4570: push 0x311a52 */ { u32 v = 0x311a52u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4575: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e457a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e457d: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e4582u); f_00603120();
    /* 005e4582: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005e4585: jmp 0x5e458e */ goto L_005e458e;
L_005e4587:; BB(0x005e4587);
    /* 005e4587: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005e458e:; BB(0x005e458e);
    /* 005e458e: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e4591: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e4594: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e459b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e459d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e459f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e45a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e45a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e45a5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45b0: push 0x311a52 */ { u32 v = 0x311a52u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45b5: push 0x311a52 */ { u32 v = 0x311a52u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e45bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e45be: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e45c4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e45c7: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e45ccu); f_005f9de0();
    /* 005e45cc: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45d1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e45d6u); f_00686d82();
    /* 005e45d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e45d9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e45dc: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e45e3: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e45e7: je 0x5e4605 */ if (fZ) goto L_005e4605;
L_005e45e9:; BB(0x005e45e9);
    /* 005e45e9: push 0x311a53 */ { u32 v = 0x311a53u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45ee: push 0x311a53 */ { u32 v = 0x311a53u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45f3: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e45f8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e45fb: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e4600u); f_00603120();
    /* 005e4600: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005e4603: jmp 0x5e460c */ goto L_005e460c;
L_005e4605:; BB(0x005e4605);
    /* 005e4605: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005e460c:; BB(0x005e460c);
    /* 005e460c: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005e460f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e4612: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e461b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e461d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e461f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4621: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4623: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4628: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e462a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e462c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e462e: push 0x311a53 */ { u32 v = 0x311a53u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4633: push 0x311a53 */ { u32 v = 0x311a53u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4638: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e463b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e463c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4642: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4645: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e464au); f_005f9de0();
    /* 005e464a: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e464f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e4654u); f_00686d82();
    /* 005e4654: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4657: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e465a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e4661: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4665: je 0x5e4683 */ if (fZ) goto L_005e4683;
L_005e4667:; BB(0x005e4667);
    /* 005e4667: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e466c: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4671: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4676: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e4679: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e467eu); f_00603120();
    /* 005e467e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005e4681: jmp 0x5e468a */ goto L_005e468a;
L_005e4683:; BB(0x005e4683);
    /* 005e4683: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005e468a:; BB(0x005e468a);
    /* 005e468a: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005e468d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e4690: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4699: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e469b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e469d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e469f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46ac: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46b1: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46b6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e46b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e46ba: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e46c0: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e46c3: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e46c8u); f_005f9de0();
    /* 005e46c8: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46cd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e46d2u); f_00686d82();
    /* 005e46d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e46d5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e46d8: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005e46df: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e46e3: je 0x5e4701 */ if (fZ) goto L_005e4701;
L_005e46e5:; BB(0x005e46e5);
    /* 005e46e5: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46ea: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46ef: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e46f4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e46f7: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e46fcu); f_00603120();
    /* 005e46fc: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005e46ff: jmp 0x5e4708 */ goto L_005e4708;
L_005e4701:; BB(0x005e4701);
    /* 005e4701: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005e4708:; BB(0x005e4708);
    /* 005e4708: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005e470b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e470e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4715: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4717: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4719: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e471b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e471d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e471f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4724: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4726: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4728: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e472a: push 0x311a55 */ { u32 v = 0x311a55u; r_esp -= 4; W32(r_esp, v); }
    /* 005e472f: push 0x311a55 */ { u32 v = 0x311a55u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4734: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e4737: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4738: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e473e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4741: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e4746u); f_005f9de0();
    /* 005e4746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4748: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e474d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e474f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4751: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4753: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4755: push 0x311a57 */ { u32 v = 0x311a57u; r_esp -= 4; W32(r_esp, v); }
    /* 005e475a: push 0x311a58 */ { u32 v = 0x311a58u; r_esp -= 4; W32(r_esp, v); }
    /* 005e475f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4761: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e4766: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005e4769: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e476eu); f_005f9ce0();
    /* 005e476e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e4771: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4774: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5e4779u); f_005eb240();
    /* 005e4779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e477a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e477c: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5e4781u); f_0062fc30();
    /* 005e4781: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4785: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e4788: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e478a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e478d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e4793: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4795u); call_ind(t); }
    /* 005e4795: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4797: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e479c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e479e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47a4: push 0x311a57 */ { u32 v = 0x311a57u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47a9: push 0x311a59 */ { u32 v = 0x311a59u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47b0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e47b6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005e47b9: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e47beu); f_005f9ce0();
    /* 005e47be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e47c1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e47c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e47c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e47c9: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005e47cc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e47ceu); call_ind(t); }
    /* 005e47ce: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47d3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e47d8u); f_00686d82();
    /* 005e47d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e47db: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005e47de: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005e47e5: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e47e9: je 0x5e4807 */ if (fZ) goto L_005e4807;
L_005e47eb:; BB(0x005e47eb);
    /* 005e47eb: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47f0: push 0x311a54 */ { u32 v = 0x311a54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47f5: push 0x311a50 */ { u32 v = 0x311a50u; r_esp -= 4; W32(r_esp, v); }
    /* 005e47fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e47fd: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5e4802u); f_00603120();
    /* 005e4802: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005e4805: jmp 0x5e480e */ goto L_005e480e;
L_005e4807:; BB(0x005e4807);
    /* 005e4807: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005e480e:; BB(0x005e480e);
    /* 005e480e: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005e4811: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e4814: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e481b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e481d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e481f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4821: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4825: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e482a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e482c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e482e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4830: push 0x311a56 */ { u32 v = 0x311a56u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4835: push 0x311a56 */ { u32 v = 0x311a56u; r_esp -= 4; W32(r_esp, v); }
    /* 005e483a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e483d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e483e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e4844: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e4847: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5e484cu); f_005f9de0();
    /* 005e484c: movzx eax, byte ptr [0x794908] */ r_eax = (u32)R8((u32)(0x794908u));
    /* 005e4853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4855: jne 0x5e48a7 */ if (!fZ) goto L_005e48a7;
L_005e4857:; BB(0x005e4857);
    /* 005e4857: mov byte ptr [0x794908], 1 */ W8((u32)(0x794908u), 0x1u);
    /* 005e485e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4860: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e4865u); f_00686d82();
    /* 005e4865: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e4868: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005e486b: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005e4872: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4876: je 0x5e4885 */ if (fZ) goto L_005e4885;
L_005e4878:; BB(0x005e4878);
    /* 005e4878: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e487b: call 0x5e4a00 */ r_esp -= 4; W32(r_esp, 0x5e4880u); f_005e4a00();
    /* 005e4880: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005e4883: jmp 0x5e488c */ goto L_005e488c;
L_005e4885:; BB(0x005e4885);
    /* 005e4885: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005e488c:; BB(0x005e488c);
    /* 005e488c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e488f: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005e4892: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e4899: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e489c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e489d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e48a0: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5e48a5u); f_005f1b70();
    /* 005e48a5: jmp 0x5e48ee */ goto L_005e48ee;
L_005e48a7:; BB(0x005e48a7);
    /* 005e48a7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e48a9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e48aeu); f_00686d82();
    /* 005e48ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e48b1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005e48b4: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005e48bb: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e48bf: je 0x5e48ce */ if (fZ) goto L_005e48ce;
L_005e48c1:; BB(0x005e48c1);
    /* 005e48c1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005e48c4: call 0x5e5840 */ r_esp -= 4; W32(r_esp, 0x5e48c9u); f_005e5840();
    /* 005e48c9: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005e48cc: jmp 0x5e48d5 */ goto L_005e48d5;
L_005e48ce:; BB(0x005e48ce);
    /* 005e48ce: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005e48d5:; BB(0x005e48d5);
    /* 005e48d5: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005e48d8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005e48db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e48e2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e48e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e48e6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e48e9: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5e48eeu); f_005f1b70();
L_005e48ee:; BB(0x005e48ee);
    /* 005e48ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e48f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e48f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e48f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e48fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e48fc: ret  */ FN_RET(0x005e44a0); r_esp += 4; return;
}

void f_005e4900(void) /* CasinoDemoNavigationRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4900);
    /* 005e4900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4901: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4906: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4909: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e490c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e490f: cmp dword ptr [ebp - 8], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4916: je 0x5e4923 */ if (fZ) goto L_005e4923;
L_005e4918:; BB(0x005e4918);
    /* 005e4918: cmp dword ptr [ebp - 8], 0x186d8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e491f: je 0x5e494f */ if (fZ) goto L_005e494f;
L_005e4921:; BB(0x005e4921);
    /* 005e4921: jmp 0x5e495e */ goto L_005e495e;
L_005e4923:; BB(0x005e4923);
    /* 005e4923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4925: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e492a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e492d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e4932u); f_005fe640();
    /* 005e4932: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4934: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4939: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e493c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e4941u); f_005fe640();
    /* 005e4941: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4943: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4945: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4948: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e494du); f_005fe640();
    /* 005e494d: jmp 0x5e495e */ goto L_005e495e;
L_005e494f:; BB(0x005e494f);
    /* 005e494f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e4951: push 0x186dd */ { u32 v = 0x186ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005e4956: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4959: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5e495eu); f_005fe640();
L_005e495e:; BB(0x005e495e);
    /* 005e495e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e4961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4962: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e4965: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4969: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5e496eu); f_005d8670();
    /* 005e496e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4971: ret 8 */ FN_RET(0x005e4900); r_esp += 12; return;
}

void f_005e4980(void) /* CasinoDemoNavigationRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4980);
    /* 005e4980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4981: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4987: call 0x631420 */ r_esp -= 4; W32(r_esp, 0x5e498cu); f_00631420();
    /* 005e498c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e498f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e4991: je 0x5e499f */ if (fZ) goto L_005e499f;
L_005e4993:; BB(0x005e4993);
    /* 005e4993: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e4996: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e499a: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5e499fu); f_005d7f40();
L_005e499f:; BB(0x005e499f);
    /* 005e499f: movzx edx, byte ptr [0x794909] */ r_edx = (u32)R8((u32)(0x794909u));
    /* 005e49a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e49a8: je 0x5e49dc */ if (fZ) goto L_005e49dc;
L_005e49aa:; BB(0x005e49aa);
    /* 005e49aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e49ad: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e49b1: je 0x5e49bc */ if (fZ) goto L_005e49bc;
L_005e49b3:; BB(0x005e49b3);
    /* 005e49b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e49b6: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e49ba: jne 0x5e49d3 */ if (!fZ) goto L_005e49d3;
L_005e49bc:; BB(0x005e49bc);
    /* 005e49bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e49be: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e49c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e49c3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005e49c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e49c9: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005e49cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e49ce: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005e49d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e49d3u); call_ind(t); }
L_005e49d3:; BB(0x005e49d3);
    /* 005e49d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e49d6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 005e49da: jmp 0x5e49e8 */ goto L_005e49e8;
L_005e49dc:; BB(0x005e49dc);
    /* 005e49dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e49df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e49e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e49e3: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5e49e8u); f_005d7f40();
L_005e49e8:; BB(0x005e49e8);
    /* 005e49e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005e49ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e49eb: ret 4 */ FN_RET(0x005e4980); r_esp += 8; return;
}

void f_005e6820(void) /* CasinoDemoNavigationRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e6820);
    /* 005e6820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e6821: mov ebp, esp */ r_ebp = r_esp;
    /* 005e6823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e6827: mov eax, 0x311a55 */ r_eax = 0x311a55u;
    /* 005e682c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e682f: ret  */ FN_RET(0x005e6820); r_esp += 4; return;
}

