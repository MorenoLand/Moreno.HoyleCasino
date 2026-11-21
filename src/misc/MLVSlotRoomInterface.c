#include "protos.h"

void f_005c8700(void) /* MLVSlotRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8700);
    /* 005c8700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8701: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8707: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c870a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5c870fu); f_005e9e20();
    /* 005c870f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8712: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 005c8718: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c871b: mov dword ptr [ecx], 0x6d2244 */ W32((u32)(r_ecx), 0x6d2244u);
    /* 005c8721: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8724: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8726: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8727: ret  */ FN_RET(0x005c8700); r_esp += 4; return;
}

void f_005c8730(void) /* MLVSlotRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8730);
    /* 005c8730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8731: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8735: push 0x6a896e */ { u32 v = 0x6a896eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c873a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c8740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8741: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8744: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c8749: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c874b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c874c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c874f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c8755: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c8758: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005c875d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c8762u); f_00686d82();
    /* 005c8762: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c8765: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c8768: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c876f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8773: je 0x5c8782 */ if (fZ) goto L_005c8782;
L_005c8775:; BB(0x005c8775);
    /* 005c8775: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c8778: call 0x5c8110 */ r_esp -= 4; W32(r_esp, 0x5c877du); f_005c8110();
    /* 005c877d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c8780: jmp 0x5c8789 */ goto L_005c8789;
L_005c8782:; BB(0x005c8782);
    /* 005c8782: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005c8789:; BB(0x005c8789);
    /* 005c8789: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c878c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c878f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c8796: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c8799: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c879c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c87a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c87a4: mov esp, ebp */ r_esp = r_ebp;
    /* 005c87a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c87a7: ret  */ FN_RET(0x005c8730); r_esp += 4; return;
}

void f_005c87b0(void) /* MLVSlotRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c87b0);
    /* 005c87b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c87b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c87b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c87b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c87b7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c87bb: jne 0x5c87c1 */ if (!fZ) goto L_005c87c1;
L_005c87bd:; BB(0x005c87bd);
    /* 005c87bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c87bf: jmp 0x5c87dd */ goto L_005c87dd;
L_005c87c1:; BB(0x005c87c1);
    /* 005c87c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c87c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c87c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c87c9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c87cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c87ceu); call_ind(t); }
    /* 005c87ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c87cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c87d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c87d3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5c87d8u); f_00686d8e();
    /* 005c87d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c87db: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c87dd:; BB(0x005c87dd);
    /* 005c87dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005c87df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c87e0: ret 4 */ FN_RET(0x005c87b0); r_esp += 8; return;
}

void f_005c8810(void) /* MLVSlotRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8810);
    /* 005c8810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8811: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8817: mov eax, 0x3158d0 */ r_eax = 0x3158d0u;
    /* 005c881c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c881e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c881f: ret  */ FN_RET(0x005c8810); r_esp += 4; return;
}

void f_005c8820(void) /* MLVSlotRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8820);
    /* 005c8820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8821: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8827: mov eax, 0x6d239c */ r_eax = 0x6d239cu;
    /* 005c882c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c882e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c882f: ret  */ FN_RET(0x005c8820); r_esp += 4; return;
}

void f_005c8840(void) /* MLVSlotRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8840);
    /* 005c8840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8841: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8847: mov eax, 0x75c978 */ r_eax = 0x75c978u;
    /* 005c884c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c884e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c884f: ret  */ FN_RET(0x005c8840); r_esp += 4; return;
}

void f_005c8850(void) /* MLVSlotRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8850);
    /* 005c8850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8851: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8857: mov eax, 0x75c97c */ r_eax = 0x75c97cu;
    /* 005c885c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c885e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c885f: ret  */ FN_RET(0x005c8850); r_esp += 4; return;
}

void f_005c8880(void) /* MLVSlotRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8880);
    /* 005c8880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8881: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8887: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c888b: jne 0x5c8891 */ if (!fZ) goto L_005c8891;
L_005c888d:; BB(0x005c888d);
    /* 005c888d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c888f: jmp 0x5c88d8 */ goto L_005c88d8;
L_005c8891:; BB(0x005c8891);
    /* 005c8891: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8894: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005c889a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c889d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 005c88a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c88a7: mov dword ptr [edx + 8], 1 */ W32((u32)(r_edx+0x8u), 0x1u);
    /* 005c88ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c88b1: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 005c88b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c88bb: mov dword ptr [ecx + 0x10], 1 */ W32((u32)(r_ecx+0x10u), 0x1u);
    /* 005c88c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c88c5: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005c88cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c88cf: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005c88d6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c88d8:; BB(0x005c88d8);
    /* 005c88d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c88da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c88db: ret 8 */ FN_RET(0x005c8880); r_esp += 12; return;
}

void f_005c88e0(void) /* MLVSlotRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c88e0);
    /* 005c88e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c88e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c88e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c88e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c88e7: mov eax, 8 */ r_eax = 0x8u;
    /* 005c88ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005c88ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c88ef: ret  */ FN_RET(0x005c88e0); r_esp += 4; return;
}

void f_005c88f0(void) /* MLVSlotRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c88f0);
    /* 005c88f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c88f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c88f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c88f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c88f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c88f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c88fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c88fc: ret 4 */ FN_RET(0x005c88f0); r_esp += 8; return;
}

void f_005c8900(void) /* MLVSlotRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8900);
    /* 005c8900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8901: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8907: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8909: mov esp, ebp */ r_esp = r_ebp;
    /* 005c890b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c890c: ret 4 */ FN_RET(0x005c8900); r_esp += 8; return;
}

void f_005c8910(void) /* MLVSlotRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8910);
    /* 005c8910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8911: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8913: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8916: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c8919: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c891d: jne 0x5c8923 */ if (!fZ) goto L_005c8923;
L_005c891f:; BB(0x005c891f);
    /* 005c891f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8921: jmp 0x5c893e */ goto L_005c893e;
L_005c8923:; BB(0x005c8923);
    /* 005c8923: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8926: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005c8929: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c892c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005c8932: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c8935: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005c893c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c893e:; BB(0x005c893e);
    /* 005c893e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8940: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8941: ret 4 */ FN_RET(0x005c8910); r_esp += 8; return;
}

void f_005c8960(void) /* MLVSlotRoomInterface::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8960);
    /* 005c8960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8961: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8967: mov eax, 0xe */ r_eax = 0xeu;
    /* 005c896c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c896e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c896f: ret  */ FN_RET(0x005c8960); r_esp += 4; return;
}

void f_005c8980(void) /* MLVSlotRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8980);
    /* 005c8980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8981: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8987: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c8989: mov esp, ebp */ r_esp = r_ebp;
    /* 005c898b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c898c: ret 8 */ FN_RET(0x005c8980); r_esp += 12; return;
}

void f_005c89a0(void) /* MLVSlotRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c89a0);
    /* 005c89a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c89a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c89a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c89a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c89a7: cmp dword ptr [ebp + 8], 0x3158d0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3158d0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c89ae: jne 0x5c89c1 */ if (!fZ) goto L_005c89c1;
L_005c89b0:; BB(0x005c89b0);
    /* 005c89b0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005c89b2: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 005c89b8: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x5c89bdu); f_00653bd0();
    /* 005c89bd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c89bf: jmp 0x5c89c3 */ goto L_005c89c3;
L_005c89c1:; BB(0x005c89c1);
    /* 005c89c1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005c89c3:; BB(0x005c89c3);
    /* 005c89c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005c89c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c89c6: ret 4 */ FN_RET(0x005c89a0); r_esp += 8; return;
}

void f_005c89d0(void) /* MLVSlotRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c89d0);
    /* 005c89d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c89d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c89d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c89d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c89d7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c89d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c89db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c89dc: ret 4 */ FN_RET(0x005c89d0); r_esp += 8; return;
}

void f_005c89e0(void) /* MLVSlotRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c89e0);
    /* 005c89e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c89e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c89e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c89e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c89e7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c89e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c89eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c89ec: ret 4 */ FN_RET(0x005c89e0); r_esp += 8; return;
}

void f_005c8a00(void) /* MLVSlotRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8a00);
    /* 005c8a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8a03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a05: push 0x6a8997 */ { u32 v = 0x6a8997u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c8a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c8a17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c8a19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c8a1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c8a23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c8a26: mov eax, dword ptr [0x793610] */ r_eax = R32((u32)(0x793610u));
    /* 005c8a2b: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c8a2e: jne 0x5c8a99 */ if (!fZ) goto L_005c8a99;
L_005c8a30:; BB(0x005c8a30);
    /* 005c8a30: mov ecx, dword ptr [0x793610] */ r_ecx = R32((u32)(0x793610u));
    /* 005c8a36: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005c8a39: mov dword ptr [0x793610], ecx */ W32((u32)(0x793610u), r_ecx);
    /* 005c8a3f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c8a46: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005c8a4c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c8a4e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8a54: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 005c8a5a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c8a5cu); call_ind(t); }
    /* 005c8a5c: mov dword ptr [0x75c984], eax */ W32((u32)(0x75c984u), r_eax);
    /* 005c8a61: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005c8a66: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c8a68: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8a6e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 005c8a74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c8a76u); call_ind(t); }
    /* 005c8a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8a77: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8a7d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c8a7f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8a85: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 005c8a8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c8a8du); call_ind(t); }
    /* 005c8a8d: mov dword ptr [0x75c988], eax */ W32((u32)(0x75c988u), r_eax);
    /* 005c8a92: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005c8a99:; BB(0x005c8a99);
    /* 005c8a99: cmp dword ptr [ebp + 8], 0x3158d6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3158d6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8aa0: jne 0x5c8aab */ if (!fZ) goto L_005c8aab;
L_005c8aa2:; BB(0x005c8aa2);
    /* 005c8aa2: mov eax, 0x75c980 */ r_eax = 0x75c980u;
    /* 005c8aa7: jmp 0x5c8aad */ goto L_005c8aad;
L_005c8aab:; BB(0x005c8aab);
    /* 005c8aab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c8aad:; BB(0x005c8aad);
    /* 005c8aad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c8ab0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c8ab7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c8ab8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8aba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8abb: ret 4 */ FN_RET(0x005c8a00); r_esp += 8; return;
}

void f_005c8ac0(void) /* MLVSlotRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8ac0);
    /* 005c8ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8ac7: mov eax, 0x75bbd8 */ r_eax = 0x75bbd8u;
    /* 005c8acc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8ace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8acf: ret  */ FN_RET(0x005c8ac0); r_esp += 4; return;
}

void f_005c8ad0(void) /* MLVSlotRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8ad0);
    /* 005c8ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8ad7: mov eax, 0x75c878 */ r_eax = 0x75c878u;
    /* 005c8adc: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8ade: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8adf: ret  */ FN_RET(0x005c8ad0); r_esp += 4; return;
}

void f_005c8ae0(void) /* MLVSlotRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c8ae0);
    /* 005c8ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c8ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c8ae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c8ae6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c8ae9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c8aec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c8aef: cmp dword ptr [ebp - 8], 0x3158d1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3158d1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8af6: jl 0x5c8b05 */ if ((fS!=fO)) goto L_005c8b05;
L_005c8af8:; BB(0x005c8af8);
    /* 005c8af8: cmp dword ptr [ebp - 8], 0x3158d5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3158d5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c8aff: jle 0x5c8b03 */ if ((fZ||fS!=fO)) goto L_005c8b03;
L_005c8b01:; BB(0x005c8b01);
    /* 005c8b01: jmp 0x5c8b05 */ goto L_005c8b05;
L_005c8b03:; BB(0x005c8b03);
    /* 005c8b03: jmp 0x5c8b09 */ goto L_005c8b09;
L_005c8b05:; BB(0x005c8b05);
    /* 005c8b05: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005c8b07: jmp 0x5c8b77 */ goto L_005c8b77;
L_005c8b09:; BB(0x005c8b09);
    /* 005c8b09: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b0f: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5c8b14u); f_005de170();
    /* 005c8b14: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b1a: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5c8b1fu); f_005e2f90();
    /* 005c8b1f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b25: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c8b28: mov dword ptr [ecx + 0x4f14], edx */ W32((u32)(r_ecx+0x4f14u), r_edx);
    /* 005c8b2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c8b31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c8b32: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b38: call 0x5e05c0 */ r_esp -= 4; W32(r_esp, 0x5c8b3du); f_005e05c0();
    /* 005c8b3d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b43: mov dword ptr [ecx + 0x4f10], eax */ W32((u32)(r_ecx+0x4f10u), r_eax);
    /* 005c8b49: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c8b4b: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005c8b4d: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005c8b53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c8b55: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b5b: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 005c8b61: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c8b63u); call_ind(t); }
    /* 005c8b63: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c8b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c8b68: jne 0x5c8b75 */ if (!fZ) goto L_005c8b75;
L_005c8b6a:; BB(0x005c8b6a);
    /* 005c8b6a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c8b70: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x5c8b75u); f_005e3130();
L_005c8b75:; BB(0x005c8b75);
    /* 005c8b75: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005c8b77:; BB(0x005c8b77);
    /* 005c8b77: mov esp, ebp */ r_esp = r_ebp;
    /* 005c8b79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c8b7a: ret 8 */ FN_RET(0x005c8ae0); r_esp += 12; return;
}

