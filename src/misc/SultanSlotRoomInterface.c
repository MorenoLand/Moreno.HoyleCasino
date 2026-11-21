#include "protos.h"

void f_00579650(void) /* SultanSlotRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579650);
    /* 00579650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579651: mov ebp, esp */ r_ebp = r_esp;
    /* 00579653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579657: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057965a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x57965fu); f_005e9e20();
    /* 0057965f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579662: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 00579668: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057966b: mov dword ptr [ecx], 0x6cb524 */ W32((u32)(r_ecx), 0x6cb524u);
    /* 00579671: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579674: mov esp, ebp */ r_esp = r_ebp;
    /* 00579676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579677: ret  */ FN_RET(0x00579650); r_esp += 4; return;
}

void f_00579680(void) /* SultanSlotRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579680);
    /* 00579680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579681: mov ebp, esp */ r_ebp = r_esp;
    /* 00579683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00579685: push 0x6a662b */ { u32 v = 0x6a662bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057968a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00579690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579691: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579694: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00579699: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057969b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057969c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057969f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005796a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005796a8: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005796ad: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5796b2u); f_00686d82();
    /* 005796b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005796b5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005796b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005796bf: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005796c3: je 0x5796d2 */ if (fZ) goto L_005796d2;
L_005796c5:; BB(0x005796c5);
    /* 005796c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005796c8: call 0x578910 */ r_esp -= 4; W32(r_esp, 0x5796cdu); f_00578910();
    /* 005796cd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005796d0: jmp 0x5796d9 */ goto L_005796d9;
L_005796d2:; BB(0x005796d2);
    /* 005796d2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005796d9:; BB(0x005796d9);
    /* 005796d9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005796dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005796df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005796e6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005796e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005796ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005796f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005796f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005796f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005796f7: ret  */ FN_RET(0x00579680); r_esp += 4; return;
}

void f_00579700(void) /* SultanSlotRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579700);
    /* 00579700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579701: mov ebp, esp */ r_ebp = r_esp;
    /* 00579703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579707: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057970b: jne 0x579711 */ if (!fZ) goto L_00579711;
L_0057970d:; BB(0x0057970d);
    /* 0057970d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0057970f: jmp 0x57972d */ goto L_0057972d;
L_00579711:; BB(0x00579711);
    /* 00579711: push 0x6c54e0 */ { u32 v = 0x6c54e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579716: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57971bu); f_00630f40();
    /* 0057971b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057971e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057971f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00579722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579723: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x579728u); f_00686d8e();
    /* 00579728: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057972b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0057972d:; BB(0x0057972d);
    /* 0057972d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057972f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579730: ret 4 */ FN_RET(0x00579700); r_esp += 8; return;
}

void f_00579760(void) /* SultanSlotRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579760);
    /* 00579760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579761: mov ebp, esp */ r_ebp = r_esp;
    /* 00579763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579767: mov eax, 0x30fb10 */ r_eax = 0x30fb10u;
    /* 0057976c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057976e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057976f: ret  */ FN_RET(0x00579760); r_esp += 4; return;
}

void f_00579770(void) /* SultanSlotRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579770);
    /* 00579770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579771: mov ebp, esp */ r_ebp = r_esp;
    /* 00579773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579777: mov eax, 0x6cb67c */ r_eax = 0x6cb67cu;
    /* 0057977c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057977e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057977f: ret  */ FN_RET(0x00579770); r_esp += 4; return;
}

void f_00579790(void) /* SultanSlotRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579790);
    /* 00579790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579791: mov ebp, esp */ r_ebp = r_esp;
    /* 00579793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579797: mov eax, 0x74981c */ r_eax = 0x74981cu;
    /* 0057979c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057979e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057979f: ret  */ FN_RET(0x00579790); r_esp += 4; return;
}

void f_005797a0(void) /* SultanSlotRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005797a0);
    /* 005797a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005797a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005797a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005797a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005797a7: mov eax, 0x749828 */ r_eax = 0x749828u;
    /* 005797ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005797ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005797af: ret  */ FN_RET(0x005797a0); r_esp += 4; return;
}

void f_005797d0(void) /* SultanSlotRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005797d0);
    /* 005797d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005797d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005797d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005797d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005797d7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005797db: jne 0x5797e1 */ if (!fZ) goto L_005797e1;
L_005797dd:; BB(0x005797dd);
    /* 005797dd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005797df: jmp 0x579828 */ goto L_00579828;
L_005797e1:; BB(0x005797e1);
    /* 005797e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005797e4: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005797ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005797ed: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 005797f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005797f7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 005797fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00579801: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 00579808: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057980b: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 00579812: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00579815: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0057981c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057981f: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00579826: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00579828:; BB(0x00579828);
    /* 00579828: mov esp, ebp */ r_esp = r_ebp;
    /* 0057982a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057982b: ret 8 */ FN_RET(0x005797d0); r_esp += 12; return;
}

void f_00579830(void) /* SultanSlotRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579830);
    /* 00579830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579831: mov ebp, esp */ r_ebp = r_esp;
    /* 00579833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579837: mov eax, 8 */ r_eax = 0x8u;
    /* 0057983c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057983e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057983f: ret  */ FN_RET(0x00579830); r_esp += 4; return;
}

void f_00579840(void) /* SultanSlotRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579840);
    /* 00579840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579841: mov ebp, esp */ r_ebp = r_esp;
    /* 00579843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579847: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579849: mov esp, ebp */ r_esp = r_ebp;
    /* 0057984b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057984c: ret 4 */ FN_RET(0x00579840); r_esp += 8; return;
}

void f_00579850(void) /* SultanSlotRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579850);
    /* 00579850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579851: mov ebp, esp */ r_ebp = r_esp;
    /* 00579853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579857: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579859: mov esp, ebp */ r_esp = r_ebp;
    /* 0057985b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057985c: ret 4 */ FN_RET(0x00579850); r_esp += 8; return;
}

void f_00579860(void) /* SultanSlotRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579860);
    /* 00579860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579861: mov ebp, esp */ r_ebp = r_esp;
    /* 00579863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579866: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00579869: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057986d: jne 0x579873 */ if (!fZ) goto L_00579873;
L_0057986f:; BB(0x0057986f);
    /* 0057986f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579871: jmp 0x57988e */ goto L_0057988e;
L_00579873:; BB(0x00579873);
    /* 00579873: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00579876: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00579879: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057987c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00579882: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579885: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0057988c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0057988e:; BB(0x0057988e);
    /* 0057988e: mov esp, ebp */ r_esp = r_ebp;
    /* 00579890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579891: ret 4 */ FN_RET(0x00579860); r_esp += 8; return;
}

void f_005798b0(void) /* SultanSlotRoomInterface::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005798b0);
    /* 005798b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005798b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005798b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005798b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005798b7: mov eax, 0xe */ r_eax = 0xeu;
    /* 005798bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005798be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005798bf: ret  */ FN_RET(0x005798b0); r_esp += 4; return;
}

void f_005798d0(void) /* SultanSlotRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005798d0);
    /* 005798d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005798d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005798d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005798d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005798d7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005798d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005798db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005798dc: ret 8 */ FN_RET(0x005798d0); r_esp += 12; return;
}

void f_005798f0(void) /* SultanSlotRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005798f0);
    /* 005798f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005798f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005798f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005798f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005798f7: cmp dword ptr [ebp + 8], 0x3102e1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3102e1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005798fe: jne 0x579911 */ if (!fZ) goto L_00579911;
L_00579900:; BB(0x00579900);
    /* 00579900: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00579902: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00579908: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x57990du); f_00653bd0();
    /* 0057990d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0057990f: jmp 0x579913 */ goto L_00579913;
L_00579911:; BB(0x00579911);
    /* 00579911: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00579913:; BB(0x00579913);
    /* 00579913: mov esp, ebp */ r_esp = r_ebp;
    /* 00579915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579916: ret 4 */ FN_RET(0x005798f0); r_esp += 8; return;
}

void f_00579920(void) /* SultanSlotRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579920);
    /* 00579920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579921: mov ebp, esp */ r_ebp = r_esp;
    /* 00579923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579927: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579929: mov esp, ebp */ r_esp = r_ebp;
    /* 0057992b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057992c: ret 4 */ FN_RET(0x00579920); r_esp += 8; return;
}

void f_00579930(void) /* SultanSlotRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579930);
    /* 00579930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579931: mov ebp, esp */ r_ebp = r_esp;
    /* 00579933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579937: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579939: mov esp, ebp */ r_esp = r_ebp;
    /* 0057993b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057993c: ret 4 */ FN_RET(0x00579930); r_esp += 8; return;
}

void f_00579940(void) /* SultanSlotRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579940);
    /* 00579940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579941: mov ebp, esp */ r_ebp = r_esp;
    /* 00579943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579947: mov eax, 0x74982c */ r_eax = 0x74982cu;
    /* 0057994c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057994e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057994f: ret  */ FN_RET(0x00579940); r_esp += 4; return;
}

void f_00579950(void) /* SultanSlotRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579950);
    /* 00579950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579951: mov ebp, esp */ r_ebp = r_esp;
    /* 00579953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00579955: push 0x6a6654 */ { u32 v = 0x6a6654u; r_esp -= 4; W32(r_esp, v); }
    /* 0057995a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00579960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579962: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00579967: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579969: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057996a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057996d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00579973: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00579976: mov eax, dword ptr [0x793460] */ r_eax = R32((u32)(0x793460u));
    /* 0057997b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0057997e: jne 0x5799e9 */ if (!fZ) goto L_005799e9;
L_00579980:; BB(0x00579980);
    /* 00579980: mov ecx, dword ptr [0x793460] */ r_ecx = R32((u32)(0x793460u));
    /* 00579986: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00579989: mov dword ptr [0x793460], ecx */ W32((u32)(0x793460u), r_ecx);
    /* 0057998f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00579996: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057999c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057999e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005799a4: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 005799aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5799acu); call_ind(t); }
    /* 005799ac: mov dword ptr [0x749840], eax */ W32((u32)(0x749840u), r_eax);
    /* 005799b1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005799b6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005799b8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005799be: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 005799c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5799c6u); call_ind(t); }
    /* 005799c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005799c7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005799cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005799cf: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005799d5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005799db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5799ddu); call_ind(t); }
    /* 005799dd: mov dword ptr [0x749844], eax */ W32((u32)(0x749844u), r_eax);
    /* 005799e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005799e9:; BB(0x005799e9);
    /* 005799e9: cmp dword ptr [ebp + 8], 0x3102e2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3102e2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005799f0: jne 0x5799fb */ if (!fZ) goto L_005799fb;
L_005799f2:; BB(0x005799f2);
    /* 005799f2: mov eax, 0x74983c */ r_eax = 0x74983cu;
    /* 005799f7: jmp 0x5799fd */ goto L_005799fd;
L_005799fb:; BB(0x005799fb);
    /* 005799fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005799fd:; BB(0x005799fd);
    /* 005799fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579a00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579a07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579a08: mov esp, ebp */ r_esp = r_ebp;
    /* 00579a0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579a0b: ret 4 */ FN_RET(0x00579950); r_esp += 8; return;
}

void f_00579a10(void) /* SultanSlotRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579a10);
    /* 00579a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00579a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579a17: mov eax, 0x749650 */ r_eax = 0x749650u;
    /* 00579a1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00579a1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579a1f: ret  */ FN_RET(0x00579a10); r_esp += 4; return;
}

void f_00579a20(void) /* SultanSlotRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579a20);
    /* 00579a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00579a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579a27: mov eax, 0x7497e4 */ r_eax = 0x7497e4u;
    /* 00579a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00579a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579a2f: ret  */ FN_RET(0x00579a20); r_esp += 4; return;
}

void f_00579a30(void) /* SultanSlotRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579a30);
    /* 00579a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00579a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579a37: cmp dword ptr [ebp + 0xc], 0x30fb10 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30fb10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579a3e: je 0x579a44 */ if (fZ) goto L_00579a44;
L_00579a40:; BB(0x00579a40);
    /* 00579a40: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00579a42: jmp 0x579ab1 */ goto L_00579ab1;
L_00579a44:; BB(0x00579a44);
    /* 00579a44: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00579a4a: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x579a4fu); f_005de170();
    /* 00579a4f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00579a55: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x579a5au); f_005e2f90();
    /* 00579a5a: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00579a5f: mov dword ptr [eax + 0x4f14], 0xffffffff */ W32((u32)(r_eax+0x4f14u), 0xffffffffu);
    /* 00579a69: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00579a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579a6d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00579a73: call 0x5e05c0 */ r_esp -= 4; W32(r_esp, 0x579a78u); f_005e05c0();
    /* 00579a78: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00579a7e: mov dword ptr [edx + 0x4f10], eax */ W32((u32)(r_edx+0x4f10u), r_eax);
    /* 00579a84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00579a86: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00579a88: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00579a8d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00579a8f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00579a95: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 00579a9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579a9du); call_ind(t); }
    /* 00579a9d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00579aa0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579aa2: jne 0x579aaf */ if (!fZ) goto L_00579aaf;
L_00579aa4:; BB(0x00579aa4);
    /* 00579aa4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00579aaa: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x579aafu); f_005e3130();
L_00579aaf:; BB(0x00579aaf);
    /* 00579aaf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00579ab1:; BB(0x00579ab1);
    /* 00579ab1: mov esp, ebp */ r_esp = r_ebp;
    /* 00579ab3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579ab4: ret 8 */ FN_RET(0x00579a30); r_esp += 12; return;
}

