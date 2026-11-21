#include "protos.h"

void f_004fb580(void) /* sub_4FB580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb580);
    /* 004fb580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb581: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb583: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb586: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004fb589: cmp dword ptr [0x791eb8], 0 */ {  u32 a = R32((u32)(0x791eb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb590: je 0x4fb5a0 */ if (fZ) goto L_004fb5a0;
L_004fb592:; BB(0x004fb592);
    /* 004fb592: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fb597: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb59e: jne 0x4fb5a5 */ if (!fZ) goto L_004fb5a5;
L_004fb5a0:; BB(0x004fb5a0);
    /* 004fb5a0: jmp 0x4fb633 */ goto L_004fb633;
L_004fb5a5:; BB(0x004fb5a5);
    /* 004fb5a5: mov dword ptr [ebp - 8], 7 */ W32((u32)(r_ebp+0xfffffff8u), 0x7u);
    /* 004fb5ac: jmp 0x4fb5b7 */ goto L_004fb5b7;
L_004fb5ae:; BB(0x004fb5ae);
    /* 004fb5ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb5b1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb5b4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004fb5b7:; BB(0x004fb5b7);
    /* 004fb5b7: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb5bb: jl 0x4fb633 */ if ((fS!=fO)) goto L_004fb633;
L_004fb5bd:; BB(0x004fb5bd);
    /* 004fb5bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb5c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb5c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb5c7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fb5ccu); f_0047e390();
    /* 004fb5cc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fb5cf: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb5d3: je 0x4fb614 */ if (fZ) goto L_004fb614;
L_004fb5d5:; BB(0x004fb5d5);
    /* 004fb5d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb5d8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fb5db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb5dc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fb5e1u); f_005dcb00();
    /* 004fb5e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb5e4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fb5e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fb5ea: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4fb5efu); f_0063aac0();
    /* 004fb5ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fb5f1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004fb5f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fb5f6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb5fa: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004fb5fd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fb600: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb602: jne 0x4fb614 */ if (!fZ) goto L_004fb614;
L_004fb604:; BB(0x004fb604);
    /* 004fb604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb606: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb609: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb60a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fb60d: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x4fb612u); f_005d9180();
    /* 004fb612: jmp 0x4fb62e */ goto L_004fb62e;
L_004fb614:; BB(0x004fb614);
    /* 004fb614: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb618: je 0x4fb62e */ if (fZ) goto L_004fb62e;
L_004fb61a:; BB(0x004fb61a);
    /* 004fb61a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb61c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb61f: call 0x4c6d90 */ r_esp -= 4; W32(r_esp, 0x4fb624u); f_004c6d90();
    /* 004fb624: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb626: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb629: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4fb62eu); f_004c7030();
L_004fb62e:; BB(0x004fb62e);
    /* 004fb62e: jmp 0x4fb5ae */ goto L_004fb5ae;
L_004fb633:; BB(0x004fb633);
    /* 004fb633: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb635: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb636: ret  */ FN_RET(0x004fb580); r_esp += 4; return;
}

void f_004fb770(void) /* sub_4FB770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb770);
    /* 004fb770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb771: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb777: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb77a: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004fb780: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 004fb786: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb787: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004fb78c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fb78e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb794: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 004fb79a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb79cu); call_ind(t); }
    /* 004fb79c: add eax, 0x186f9 */ {  u32 a = r_eax; u32 b = 0x186f9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb7a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb7a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb7a4: ret  */ FN_RET(0x004fb770); r_esp += 4; return;
}

void f_004fb840(void) /* sub_4FB840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb840);
    /* 004fb840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb841: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb847: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb84a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fb84d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb851: je 0x4fb860 */ if (fZ) goto L_004fb860;
L_004fb853:; BB(0x004fb853);
    /* 004fb853: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb855: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb858: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004fb85b: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fb860u); f_005fc420();
L_004fb860:; BB(0x004fb860);
    /* 004fb860: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb863: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fb866: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb869: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fb86c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fb86e: mov ecx, eax */ r_ecx = r_eax;
    /* 004fb870: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004fb873: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb875u); call_ind(t); }
    /* 004fb875: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb87b: call 0x636ee0 */ r_esp -= 4; W32(r_esp, 0x4fb880u); f_00636ee0();
    /* 004fb880: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb883: ret  */ FN_RET(0x004fb840); r_esp += 4; return;
}

void f_004fb890(void) /* sub_4FB890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb890);
    /* 004fb890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb891: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb893: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb896: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fb897: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004fb89a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fb89f: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004fb8a5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fb8a8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fb8ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb8ac: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x4fb8b1u); f_00520540();
    /* 004fb8b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb8b4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004fb8b7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb8ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb8c0: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 004fb8c6: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 004fb8c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb8cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb8d2: mov edx, dword ptr [ecx + 0xf0] */ r_edx = R32((u32)(r_ecx+0xf0u));
    /* 004fb8d8: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 004fb8db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb8e1: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4fb8e6u); f_0047bbc0();
    /* 004fb8e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb8e9: mov word ptr [ecx + 0x3c], ax */ W16((u32)(r_ecx+0x3cu), (u16)r_eax);
    /* 004fb8ed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb8f3: call 0x47cb80 */ r_esp -= 4; W32(r_esp, 0x4fb8f8u); f_0047cb80();
    /* 004fb8f8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb8fb: mov word ptr [edx + 0x3e], ax */ W16((u32)(r_edx+0x3eu), (u16)r_eax);
    /* 004fb8ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb905: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4fb90au); f_0047ce60();
    /* 004fb90a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb90d: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 004fb910: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fb916: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 004fb91c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fb91f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb922: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fb925: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 004fb928: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fb92d: mov cl, byte ptr [eax + 0x104] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x104u))) & 0xffu);
    /* 004fb933: mov byte ptr [ebp - 0x25], cl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_ecx);
    /* 004fb936: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb939: mov al, byte ptr [ebp - 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdbu))) & 0xffu);
    /* 004fb93c: mov byte ptr [edx + 0x28], al */ W8((u32)(r_edx+0x28u), (u8)r_eax);
    /* 004fb93f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb945: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 004fb94b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004fb94e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb951: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fb954: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004fb957: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fb95d: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 004fb963: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fb966: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb969: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fb96c: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 004fb96f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb975: call 0x47a510 */ r_esp -= 4; W32(r_esp, 0x4fb97au); f_0047a510();
    /* 004fb97a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb97d: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004fb980: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb987: jmp 0x4fb992 */ goto L_004fb992;
L_004fb989:; BB(0x004fb989);
    /* 004fb989: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb98c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fb98f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004fb992:; BB(0x004fb992);
    /* 004fb992: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb996: jge 0x4fb9b7 */ if ((fS==fO)) goto L_004fb9b7;
L_004fb998:; BB(0x004fb998);
    /* 004fb998: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb99b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb9a1: cmp dword ptr [ecx + eax*4 + 0x114], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb9a9: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004fb9ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb9af: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb9b2: mov byte ptr [eax + 0x29], dl */ W8((u32)(r_eax+0x29u), (u8)r_edx);
    /* 004fb9b5: jmp 0x4fb989 */ goto L_004fb989;
L_004fb9b7:; BB(0x004fb9b7);
    /* 004fb9b7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb9be: jmp 0x4fb9c9 */ goto L_004fb9c9;
L_004fb9c0:; BB(0x004fb9c0);
    /* 004fb9c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb9c3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb9c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004fb9c9:; BB(0x004fb9c9);
    /* 004fb9c9: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb9cd: jge 0x4fb9eb */ if ((fS==fO)) goto L_004fb9eb;
L_004fb9cf:; BB(0x004fb9cf);
    /* 004fb9cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb9d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb9d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb9d8: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fb9de: mov ecx, dword ptr [esi + ecx*4 + 0x108] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x108u));
    /* 004fb9e5: mov dword ptr [eax + edx*4 + 0x2c], ecx */ W32((u32)(r_eax+r_edx*4+0x2cu), r_ecx);
    /* 004fb9e9: jmp 0x4fb9c0 */ goto L_004fb9c0;
L_004fb9eb:; BB(0x004fb9eb);
    /* 004fb9eb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb9f2: jmp 0x4fb9fd */ goto L_004fb9fd;
L_004fb9f4:; BB(0x004fb9f4);
    /* 004fb9f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb9f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fb9fa: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004fb9fd:; BB(0x004fb9fd);
    /* 004fb9fd: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba01: jge 0x4fba1f */ if ((fS==fO)) goto L_004fba1f;
L_004fba03:; BB(0x004fba03);
    /* 004fba03: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fba06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fba09: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fba0c: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fba12: mov edx, dword ptr [esi + edx*4 + 0x3b4] */ r_edx = R32((u32)(r_esi+r_edx*4+0x3b4u));
    /* 004fba19: mov dword ptr [ecx + eax*4 + 0x40], edx */ W32((u32)(r_ecx+r_eax*4+0x40u), r_edx);
    /* 004fba1d: jmp 0x4fb9f4 */ goto L_004fb9f4;
L_004fba1f:; BB(0x004fba1f);
    /* 004fba1f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fba26: jmp 0x4fba31 */ goto L_004fba31;
L_004fba28:; BB(0x004fba28);
    /* 004fba28: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fba2b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fba2e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004fba31:; BB(0x004fba31);
    /* 004fba31: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fba35: jge 0x4fbb50 */ if ((fS==fO)) goto L_004fbb50;
L_004fba3b:; BB(0x004fba3b);
    /* 004fba3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fba3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fba3f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fba45: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fba4au); f_0047e390();
    /* 004fba4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fba4d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fba50: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fba53: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004fba56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fba59: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fba5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fba5f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fba62: mov dword ptr [edx + ecx + 0xe8], eax */ W32((u32)(r_edx+r_ecx+0xe8u), r_eax);
    /* 004fba69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fba6c: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4fba71u); f_004c6cb0();
    /* 004fba71: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fba74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fba77: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fba7a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fba7d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fba80: mov dword ptr [edx + ecx + 0xe4], eax */ W32((u32)(r_edx+r_ecx+0xe4u), r_eax);
    /* 004fba87: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fba8b: jne 0x4fba96 */ if (!fZ) goto L_004fba96;
L_004fba8d:; BB(0x004fba8d);
    /* 004fba8d: mov dword ptr [ebp - 0x44], 0xffffffff */ W32((u32)(r_ebp+0xffffffbcu), 0xffffffffu);
    /* 004fba94: jmp 0x4fbaa1 */ goto L_004fbaa1;
L_004fba96:; BB(0x004fba96);
    /* 004fba96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fba99: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4fba9eu); f_004c6a70();
    /* 004fba9e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_004fbaa1:; BB(0x004fbaa1);
    /* 004fbaa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbaa4: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbaa7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbaaa: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004fbaad: mov dword ptr [edx + ecx + 0xe0], eax */ W32((u32)(r_edx+r_ecx+0xe0u), r_eax);
    /* 004fbab4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbab7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbab8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fbabdu); f_005dcb00();
    /* 004fbabd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbac0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fbac3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbac6: call 0x4c6150 */ r_esp -= 4; W32(r_esp, 0x4fbacbu); f_004c6150();
    /* 004fbacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbacc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbacf: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbad2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbad5: lea ecx, [eax + edx + 0x7c] */ r_ecx = (u32)(r_eax+r_edx+0x7cu);
    /* 004fbad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbada: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4fbadfu); f_00686d8e();
    /* 004fbadf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbae2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbae5: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4fbaeau); f_004c61b0();
    /* 004fbaea: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004fbaed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbaef: jne 0x4fbb4b */ if (!fZ) goto L_004fbb4b;
L_004fbaf1:; BB(0x004fbaf1);
    /* 004fbaf1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbaf4: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 004fbaf7: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004fbafa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbafd: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb00: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb03: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004fbb06: mov dword ptr [eax + edx + 0xec], ecx */ W32((u32)(r_eax+r_edx+0xecu), r_ecx);
    /* 004fbb0d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbb10: mov eax, dword ptr [edx + 0x3fc] */ r_eax = R32((u32)(r_edx+0x3fcu));
    /* 004fbb16: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004fbb19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb1c: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb1f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb22: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fbb25: mov dword ptr [edx + ecx + 0xf0], eax */ W32((u32)(r_edx+r_ecx+0xf0u), r_eax);
    /* 004fbb2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbb2f: mov edx, dword ptr [ecx + 0x400] */ r_edx = R32((u32)(r_ecx+0x400u));
    /* 004fbb35: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004fbb38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb3b: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb41: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fbb44: mov dword ptr [ecx + eax + 0xf4], edx */ W32((u32)(r_ecx+r_eax+0xf4u), r_edx);
L_004fbb4b:; BB(0x004fbb4b);
    /* 004fbb4b: jmp 0x4fba28 */ goto L_004fba28;
L_004fbb50:; BB(0x004fbb50);
    /* 004fbb50: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fbb57: jmp 0x4fbb62 */ goto L_004fbb62;
L_004fbb59:; BB(0x004fbb59);
    /* 004fbb59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb5c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbb5f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004fbb62:; BB(0x004fbb62);
    /* 004fbb62: cmp dword ptr [ebp - 8], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbb66: jge 0x4fbc20 */ if ((fS==fO)) goto L_004fbc20;
L_004fbb6c:; BB(0x004fbb6c);
    /* 004fbb6c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb6f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb72: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb75: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb7b: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fbb81: mov ecx, dword ptr [esi + ecx + 0x120] */ r_ecx = R32((u32)(r_esi+r_ecx+0x120u));
    /* 004fbb88: mov dword ptr [eax + edx + 0x3f4], ecx */ W32((u32)(r_eax+r_edx+0x3f4u), r_ecx);
    /* 004fbb8f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb92: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbb98: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbb9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbb9e: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fbba4: mov edx, dword ptr [esi + edx + 0x12c] */ r_edx = R32((u32)(r_esi+r_edx+0x12cu));
    /* 004fbbab: mov dword ptr [ecx + eax + 0x400], edx */ W32((u32)(r_ecx+r_eax+0x400u), r_edx);
    /* 004fbbb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbbb5: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbbb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbbbb: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbbbe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbbc1: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fbbc7: mov eax, dword ptr [esi + eax + 0x124] */ r_eax = R32((u32)(r_esi+r_eax+0x124u));
    /* 004fbbce: mov dword ptr [edx + ecx + 0x3f8], eax */ W32((u32)(r_edx+r_ecx+0x3f8u), r_eax);
    /* 004fbbd5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbbd8: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbbdb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbbde: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbbe1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbbe4: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fbbea: mov ecx, dword ptr [esi + ecx + 0x130] */ r_ecx = R32((u32)(r_esi+r_ecx+0x130u));
    /* 004fbbf1: mov dword ptr [eax + edx + 0x404], ecx */ W32((u32)(r_eax+r_edx+0x404u), r_ecx);
    /* 004fbbf8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbbfb: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbbfe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc01: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbc04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbc07: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fbc0d: mov dl, byte ptr [esi + edx + 0x128] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+r_edx+0x128u))) & 0xffu);
    /* 004fbc14: mov byte ptr [ecx + eax + 0x3fc], dl */ W8((u32)(r_ecx+r_eax+0x3fcu), (u8)r_edx);
    /* 004fbc1b: jmp 0x4fbb59 */ goto L_004fbb59;
L_004fbc20:; BB(0x004fbc20);
    /* 004fbc20: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fbc27: jmp 0x4fbc32 */ goto L_004fbc32;
L_004fbc29:; BB(0x004fbc29);
    /* 004fbc29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc2c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbc2f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004fbc32:; BB(0x004fbc32);
    /* 004fbc32: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbc36: jge 0x4fbc54 */ if ((fS==fO)) goto L_004fbc54;
L_004fbc38:; BB(0x004fbc38);
    /* 004fbc38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc3b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbc3e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbc41: mov esi, dword ptr [0x791364] */ r_esi = R32((u32)(0x791364u));
    /* 004fbc47: mov eax, dword ptr [esi + eax*4 + 0x3e4] */ r_eax = R32((u32)(r_esi+r_eax*4+0x3e4u));
    /* 004fbc4e: mov dword ptr [edx + ecx*4 + 0x5c], eax */ W32((u32)(r_edx+r_ecx*4+0x5cu), r_eax);
    /* 004fbc52: jmp 0x4fbc29 */ goto L_004fbc29;
L_004fbc54:; BB(0x004fbc54);
    /* 004fbc54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbc57: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fbc5d: mov eax, dword ptr [edx + 0x400] */ r_eax = R32((u32)(r_edx+0x400u));
    /* 004fbc63: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 004fbc66: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fbc6c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x4fbc71u); f_006375b0();
    /* 004fbc71: mov ecx, eax */ r_ecx = r_eax;
    /* 004fbc73: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x4fbc78u); f_0063b0a0();
    /* 004fbc78: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x4fbc7du); f_00520d60();
    /* 004fbc7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fbc80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbc84: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x4fbc89u); f_005209d0();
    /* 004fbc89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbc8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fbc8d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fbc8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fbc90: ret  */ FN_RET(0x004fb890); r_esp += 4; return;
}

void f_004fbca0(void) /* sub_4FBCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fbca0);
    /* 004fbca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fbca1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fbca3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fbca6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fbca7: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 004fbcaa: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fbcaf: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 004fbcb5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fbcb8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fbcbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbcbc: call 0x520540 */ r_esp -= 4; W32(r_esp, 0x4fbcc1u); f_00520540();
    /* 004fbcc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbcc4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fbcc7: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 004fbcca: call 0x4fb840 */ r_esp -= 4; W32(r_esp, 0x4fbccfu); f_004fb840();
    /* 004fbccf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fbcd1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fbcd7: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x4fbcdcu); f_0047e540();
    /* 004fbcdc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fbce1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbce4: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004fbce7: mov dword ptr [eax + 0xec], edx */ W32((u32)(r_eax+0xecu), r_edx);
    /* 004fbced: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fbcf2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbcf5: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 004fbcf8: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 004fbcfe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd01: movsx ecx, word ptr [eax + 0x3c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x3cu));
    /* 004fbd05: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004fbd08: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fbd0e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004fbd11: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fbd14: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fbd17: mov dword ptr [eax + 0x488], ecx */ W32((u32)(r_eax+0x488u), r_ecx);
    /* 004fbd1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd20: movsx eax, word ptr [edx + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x3eu));
    /* 004fbd24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fbd2b: call 0x47cb10 */ r_esp -= 4; W32(r_esp, 0x4fbd30u); f_0047cb10();
    /* 004fbd30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd33: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004fbd36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbd37: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fbd3d: call 0x47ce80 */ r_esp -= 4; W32(r_esp, 0x4fbd42u); f_0047ce80();
    /* 004fbd42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd45: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 004fbd48: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004fbd4b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fbd51: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004fbd54: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004fbd57: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004fbd5a: mov dword ptr [eax + 0x100], ecx */ W32((u32)(r_eax+0x100u), r_ecx);
    /* 004fbd60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd63: mov al, byte ptr [edx + 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x28u))) & 0xffu);
    /* 004fbd66: mov byte ptr [ebp - 0x4d], al */ W8((u32)(r_ebp+0xffffffb3u), (u8)r_eax);
    /* 004fbd69: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fbd6f: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004fbd72: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004fbd75: mov al, byte ptr [ebp - 0x4d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb3u))) & 0xffu);
    /* 004fbd78: mov byte ptr [edx + 0x104], al */ W8((u32)(r_edx+0x104u), (u8)r_eax);
    /* 004fbd7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd81: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fbd84: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004fbd87: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fbd8c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 004fbd8f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004fbd92: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004fbd95: mov dword ptr [ecx + 0xf8], edx */ W32((u32)(r_ecx+0xf8u), r_edx);
    /* 004fbd9b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbd9e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004fbda1: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 004fbda4: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fbdaa: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004fbdad: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004fbdb0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004fbdb3: mov dword ptr [eax + 0xfc], ecx */ W32((u32)(r_eax+0xfcu), r_ecx);
    /* 004fbdb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbdc0: jmp 0x4fbdcb */ goto L_004fbdcb;
L_004fbdc2:; BB(0x004fbdc2);
    /* 004fbdc2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbdc5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fbdc8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004fbdcb:; BB(0x004fbdcb);
    /* 004fbdcb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbdcf: jge 0x4fbdec */ if ((fS==fO)) goto L_004fbdec;
L_004fbdd1:; BB(0x004fbdd1);
    /* 004fbdd1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdd4: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbdd7: movzx ecx, byte ptr [eax + 0x29] */ r_ecx = (u32)R8((u32)(r_eax+0x29u));
    /* 004fbddb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbdde: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fbde3: mov dword ptr [eax + edx*4 + 0x114], ecx */ W32((u32)(r_eax+r_edx*4+0x114u), r_ecx);
    /* 004fbdea: jmp 0x4fbdc2 */ goto L_004fbdc2;
L_004fbdec:; BB(0x004fbdec);
    /* 004fbdec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbdef: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004fbdf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbdf3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fbdf9: call 0x47a440 */ r_esp -= 4; W32(r_esp, 0x4fbdfeu); f_0047a440();
    /* 004fbdfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbe05: jmp 0x4fbe10 */ goto L_004fbe10;
L_004fbe07:; BB(0x004fbe07);
    /* 004fbe07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe0a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbe0d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004fbe10:; BB(0x004fbe10);
    /* 004fbe10: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbe14: jge 0x4fbe32 */ if ((fS==fO)) goto L_004fbe32;
L_004fbe16:; BB(0x004fbe16);
    /* 004fbe16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe19: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fbe1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe22: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe25: mov eax, dword ptr [esi + eax*4 + 0x2c] */ r_eax = R32((u32)(r_esi+r_eax*4+0x2cu));
    /* 004fbe29: mov dword ptr [edx + ecx*4 + 0x108], eax */ W32((u32)(r_edx+r_ecx*4+0x108u), r_eax);
    /* 004fbe30: jmp 0x4fbe07 */ goto L_004fbe07;
L_004fbe32:; BB(0x004fbe32);
    /* 004fbe32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbe39: jmp 0x4fbe44 */ goto L_004fbe44;
L_004fbe3b:; BB(0x004fbe3b);
    /* 004fbe3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe3e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fbe41: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004fbe44:; BB(0x004fbe44);
    /* 004fbe44: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbe48: jge 0x4fbe65 */ if ((fS==fO)) goto L_004fbe65;
L_004fbe4a:; BB(0x004fbe4a);
    /* 004fbe4a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe4d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fbe52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe55: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe58: mov ecx, dword ptr [esi + ecx*4 + 0x40] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x40u));
    /* 004fbe5c: mov dword ptr [eax + edx*4 + 0x3b4], ecx */ W32((u32)(r_eax+r_edx*4+0x3b4u), r_ecx);
    /* 004fbe63: jmp 0x4fbe3b */ goto L_004fbe3b;
L_004fbe65:; BB(0x004fbe65);
    /* 004fbe65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fbe6c: jmp 0x4fbe77 */ goto L_004fbe77;
L_004fbe6e:; BB(0x004fbe6e);
    /* 004fbe6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe71: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fbe74: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004fbe77:; BB(0x004fbe77);
    /* 004fbe77: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbe7b: jge 0x4fbff6 */ if ((fS==fO)) goto L_004fbff6;
L_004fbe81:; BB(0x004fbe81);
    /* 004fbe81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbe85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fbe8b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fbe90u); f_0047e390();
    /* 004fbe90: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fbe93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbe96: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbe99: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbe9c: mov eax, dword ptr [edx + ecx + 0xe8] */ r_eax = R32((u32)(r_edx+r_ecx+0xe8u));
    /* 004fbea3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004fbea6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fbea9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbeaa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fbeafu); f_005dcb00();
    /* 004fbeaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbeb2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fbeb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbeb8: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbebb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbebe: mov ecx, dword ptr [eax + edx + 0xe4] */ r_ecx = R32((u32)(r_eax+r_edx+0xe4u));
    /* 004fbec5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbec6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbec9: call 0x4c6d90 */ r_esp -= 4; W32(r_esp, 0x4fbeceu); f_004c6d90();
    /* 004fbece: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbed1: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbed4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbed7: cmp dword ptr [eax + edx + 0xe0], -1 */ {  u32 a = R32((u32)(r_eax+r_edx+0xe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbedf: je 0x4fbf24 */ if (fZ) goto L_004fbf24;
L_004fbee1:; BB(0x004fbee1);
    /* 004fbee1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbee4: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbee7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbeea: mov eax, dword ptr [edx + ecx + 0xe0] */ r_eax = R32((u32)(r_edx+r_ecx+0xe0u));
    /* 004fbef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbef2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbef5: call 0x4c6aa0 */ r_esp -= 4; W32(r_esp, 0x4fbefau); f_004c6aa0();
    /* 004fbefa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbefd: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbf00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf03: mov eax, dword ptr [edx + ecx + 0xe0] */ r_eax = R32((u32)(r_edx+r_ecx+0xe0u));
    /* 004fbf0a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fbf0d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004fbf14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fbf17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf18: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fbf1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf1c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbf1f: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4fbf24u); f_005d5af0();
L_004fbf24:; BB(0x004fbf24);
    /* 004fbf24: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbf27: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4fbf2cu); f_004c61b0();
    /* 004fbf2c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fbf2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fbf31: jne 0x4fbff1 */ if (!fZ) goto L_004fbff1;
L_004fbf37:; BB(0x004fbf37);
    /* 004fbf37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbf3a: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbf3d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf40: mov eax, dword ptr [edx + ecx + 0xec] */ r_eax = R32((u32)(r_edx+r_ecx+0xecu));
    /* 004fbf47: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004fbf4a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbf4d: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbf50: mov edx, dword ptr [ecx + 0x720648] */ r_edx = R32((u32)(r_ecx+0x720648u));
    /* 004fbf56: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004fbf59: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbf5c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbf5f: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 004fbf62: cmp dword ptr [ebp - 0x18], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbf66: jge 0x4fbf86 */ if ((fS==fO)) goto L_004fbf86;
L_004fbf68:; BB(0x004fbf68);
    /* 004fbf68: cmp dword ptr [ebp - 0x18], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fbf6c: jl 0x4fbf86 */ if ((fS!=fO)) goto L_004fbf86;
L_004fbf6e:; BB(0x004fbf6e);
    /* 004fbf6e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fbf71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbf72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbf75: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x4fbf7au); f_0063b490();
    /* 004fbf7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbf7d: mov dword ptr [eax + 0xc], 0xffffffff */ W32((u32)(r_eax+0xcu), 0xffffffffu);
    /* 004fbf84: jmp 0x4fbf8f */ goto L_004fbf8f;
L_004fbf86:; BB(0x004fbf86);
    /* 004fbf86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbf89: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fbf8c: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_004fbf8f:; BB(0x004fbf8f);
    /* 004fbf8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbf92: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbf95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbf98: mov edx, dword ptr [ecx + eax + 0xf0] */ r_edx = R32((u32)(r_ecx+r_eax+0xf0u));
    /* 004fbf9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbfa0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbfa3: call 0x4c67d0 */ r_esp -= 4; W32(r_esp, 0x4fbfa8u); f_004c67d0();
    /* 004fbfa8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fbfab: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbfae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fbfb1: mov edx, dword ptr [ecx + eax + 0xf4] */ r_edx = R32((u32)(r_ecx+r_eax+0xf4u));
    /* 004fbfb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbfb9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fbfbc: call 0x4c68c0 */ r_esp -= 4; W32(r_esp, 0x4fbfc1u); f_004c68c0();
    /* 004fbfc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fbfc4: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fbfc7: mov ecx, dword ptr [eax + 0x720650] */ r_ecx = R32((u32)(r_eax+0x720650u));
    /* 004fbfcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbfce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fbfd3u); f_00630f40();
    /* 004fbfd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fbfd6: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004fbfd9: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004fbfdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fbfdd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fbfe0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4fbfe5u); f_0063aac0();
    /* 004fbfe5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fbfe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fbfe9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4fbfeeu); f_00686d8e();
    /* 004fbfee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fbff1:; BB(0x004fbff1);
    /* 004fbff1: jmp 0x4fbe6e */ goto L_004fbe6e;
L_004fbff6:; BB(0x004fbff6);
    /* 004fbff6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fbff8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fbffe: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x4fc003u); f_006375d0();
    /* 004fc003: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fc006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc008: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fc00du); f_005dcb00();
    /* 004fc00d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc010: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 004fc016: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc017: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 004fc01d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc01e: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004fc021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc022: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc025: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc028: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x4fc02du); f_0064c630();
    /* 004fc02d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004fc02f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fc032: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fc035: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004fc038: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 004fc03b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc03d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fc042u); f_005dcb00();
    /* 004fc042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc045: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc047: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x4fc04cu); f_0063b0a0();
    /* 004fc04c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc053: jmp 0x4fc05e */ goto L_004fc05e;
L_004fc055:; BB(0x004fc055);
    /* 004fc055: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc058: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc05b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004fc05e:; BB(0x004fc05e);
    /* 004fc05e: cmp dword ptr [ebp - 4], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc062: jge 0x4fc11b */ if ((fS==fO)) goto L_004fc11b;
L_004fc068:; BB(0x004fc068);
    /* 004fc068: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc06b: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc06e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc071: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc074: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc07a: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc07d: mov edx, dword ptr [esi + edx + 0x3f4] */ r_edx = R32((u32)(r_esi+r_edx+0x3f4u));
    /* 004fc084: mov dword ptr [ecx + eax + 0x120], edx */ W32((u32)(r_ecx+r_eax+0x120u), r_edx);
    /* 004fc08b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc08e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc091: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc094: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc097: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fc09d: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0a0: mov eax, dword ptr [esi + eax + 0x400] */ r_eax = R32((u32)(r_esi+r_eax+0x400u));
    /* 004fc0a7: mov dword ptr [edx + ecx + 0x12c], eax */ W32((u32)(r_edx+r_ecx+0x12cu), r_eax);
    /* 004fc0ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc0b1: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc0b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc0b7: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc0ba: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc0bf: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0c2: mov ecx, dword ptr [esi + ecx + 0x3f8] */ r_ecx = R32((u32)(r_esi+r_ecx+0x3f8u));
    /* 004fc0c9: mov dword ptr [eax + edx + 0x124], ecx */ W32((u32)(r_eax+r_edx+0x124u), r_ecx);
    /* 004fc0d0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc0d3: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc0d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc0d9: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc0dc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc0e2: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc0e5: mov edx, dword ptr [esi + edx + 0x404] */ r_edx = R32((u32)(r_esi+r_edx+0x404u));
    /* 004fc0ec: mov dword ptr [ecx + eax + 0x130], edx */ W32((u32)(r_ecx+r_eax+0x130u), r_edx);
    /* 004fc0f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc0f6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc0f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc0fc: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004fc0ff: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fc105: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc108: mov al, byte ptr [esi + eax + 0x3fc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax+0x3fcu))) & 0xffu);
    /* 004fc10f: mov byte ptr [edx + ecx + 0x128], al */ W8((u32)(r_edx+r_ecx+0x128u), (u8)r_eax);
    /* 004fc116: jmp 0x4fc055 */ goto L_004fc055;
L_004fc11b:; BB(0x004fc11b);
    /* 004fc11b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc122: jmp 0x4fc12d */ goto L_004fc12d;
L_004fc124:; BB(0x004fc124);
    /* 004fc124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc127: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc12a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004fc12d:; BB(0x004fc12d);
    /* 004fc12d: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc131: jge 0x4fc14e */ if ((fS==fO)) goto L_004fc14e;
L_004fc133:; BB(0x004fc133);
    /* 004fc133: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc136: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc13b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc13e: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc141: mov ecx, dword ptr [esi + ecx*4 + 0x5c] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x5cu));
    /* 004fc145: mov dword ptr [eax + edx*4 + 0x3e4], ecx */ W32((u32)(r_eax+r_edx*4+0x3e4u), r_ecx);
    /* 004fc14c: jmp 0x4fc124 */ goto L_004fc124;
L_004fc14e:; BB(0x004fc14e);
    /* 004fc14e: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fc154: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc157: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 004fc15a: mov dword ptr [edx + 0x400], ecx */ W32((u32)(r_edx+0x400u), r_ecx);
    /* 004fc160: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc166: call 0x480d20 */ r_esp -= 4; W32(r_esp, 0x4fc16bu); f_00480d20();
    /* 004fc16b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fc16e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc171: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004fc172: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fc174: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004fc176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc177: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc17d: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x4fc182u); f_0047bc40();
    /* 004fc182: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc185: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004fc186: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fc188: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004fc18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc18b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc191: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x4fc196u); f_0047bc80();
    /* 004fc196: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc199: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc19a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc1a0: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x4fc1a5u); f_0047bcc0();
    /* 004fc1a5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fc1a8: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004fc1aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc1ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc1b1: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x4fc1b6u); f_0047bd00();
    /* 004fc1b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc1b8: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fc1be: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fc1c1: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fc1c6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fc1c9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fc1cb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fc1ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fc1d0u); call_ind(t); }
    /* 004fc1d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc1d6: call 0x47e860 */ r_esp -= 4; W32(r_esp, 0x4fc1dbu); f_0047e860();
    /* 004fc1db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fc1e2: jmp 0x4fc1ed */ goto L_004fc1ed;
L_004fc1e4:; BB(0x004fc1e4);
    /* 004fc1e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc1e7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc1ea: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004fc1ed:; BB(0x004fc1ed);
    /* 004fc1ed: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc1f1: jge 0x4fc206 */ if ((fS==fO)) goto L_004fc206;
L_004fc1f3:; BB(0x004fc1f3);
    /* 004fc1f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc1f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc1f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc1f9: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 004fc1ff: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x4fc204u); f_005d9180();
    /* 004fc204: jmp 0x4fc1e4 */ goto L_004fc1e4;
L_004fc206:; BB(0x004fc206);
    /* 004fc206: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fc207: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc20a: ret  */ FN_RET(0x004fbca0); r_esp += 4; return;
}

