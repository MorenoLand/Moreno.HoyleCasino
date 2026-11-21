#include "protos.h"

void f_0051c580(void) /* PokerTournDialog::func_0051c580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c580);
    /* 0051c580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c581: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051c587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c58a: cmp dword ptr [eax + 0x1bc], -1 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051c591: jne 0x51c5b2 */ if (!fZ) goto L_0051c5b2;
L_0051c593:; BB(0x0051c593);
    /* 0051c593: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0051c595: jne 0x51c5ae */ if (!fZ) goto L_0051c5ae;
L_0051c597:; BB(0x0051c597);
    /* 0051c597: push 0x26f */ { u32 v = 0x26fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c59c: push 0x6c23ec */ { u32 v = 0x6c23ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c5a1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c5a6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51c5abu); f_005e9f20();
    /* 0051c5ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c5ae:; BB(0x0051c5ae);
    /* 0051c5ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051c5b0: jmp 0x51c5bb */ goto L_0051c5bb;
L_0051c5b2:; BB(0x0051c5b2);
    /* 0051c5b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051c5b5: mov eax, dword ptr [eax + 0x1bc] */ r_eax = R32((u32)(r_eax+0x1bcu));
L_0051c5bb:; BB(0x0051c5bb);
    /* 0051c5bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c5bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c5be: ret  */ FN_RET(0x0051c580); r_esp += 4; return;
}

void f_0051c820(void) /* PokerTournDialog::func_0051c820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051c820);
    /* 0051c820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051c821: mov ebp, esp */ r_ebp = r_esp;
    /* 0051c823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051c824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051c827: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c82b: jl 0x51c833 */ if ((fS!=fO)) goto L_0051c833;
L_0051c82d:; BB(0x0051c82d);
    /* 0051c82d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051c831: jle 0x51c84a */ if ((fZ||fS!=fO)) goto L_0051c84a;
L_0051c833:; BB(0x0051c833);
    /* 0051c833: push 0x2ae */ { u32 v = 0x2aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c838: push 0x6c23ec */ { u32 v = 0x6c23ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051c83d: push 0x6c2458 */ { u32 v = 0x6c2458u; r_esp -= 4; W32(r_esp, v); }
    /* 0051c842: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51c847u); f_005e9f20();
    /* 0051c847: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051c84a:; BB(0x0051c84a);
    /* 0051c84a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051c84d: mov eax, dword ptr [ecx*4 + 0x721948] */ r_eax = R32((u32)(r_ecx*4+0x721948u));
    /* 0051c854: mov esp, ebp */ r_esp = r_ebp;
    /* 0051c856: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051c857: ret 4 */ FN_RET(0x0051c820); r_esp += 8; return;
}

void f_0051e5f0(void) /* PokerTournDialog::func_0051e5f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e5f0);
    /* 0051e5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e5f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051e5f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e5fa: cmp dword ptr [eax + 0x1bc], -1 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e601: jne 0x51e622 */ if (!fZ) goto L_0051e622;
L_0051e603:; BB(0x0051e603);
    /* 0051e603: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0051e605: jne 0x51e61e */ if (!fZ) goto L_0051e61e;
L_0051e607:; BB(0x0051e607);
    /* 0051e607: push 0x486 */ { u32 v = 0x486u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e60c: push 0x6c23ec */ { u32 v = 0x6c23ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e611: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e616: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51e61bu); f_005e9f20();
    /* 0051e61b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e61e:; BB(0x0051e61e);
    /* 0051e61e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e620: jmp 0x51e62b */ goto L_0051e62b;
L_0051e622:; BB(0x0051e622);
    /* 0051e622: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e625: mov eax, dword ptr [eax + 0x1bc] */ r_eax = R32((u32)(r_eax+0x1bcu));
L_0051e62b:; BB(0x0051e62b);
    /* 0051e62b: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e62d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e62e: ret  */ FN_RET(0x0051e5f0); r_esp += 4; return;
}

void f_0051e770(void) /* PokerTournDialog::func_0051e770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e770);
    /* 0051e770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e771: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051e777: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e77b: jl 0x51e783 */ if ((fS!=fO)) goto L_0051e783;
L_0051e77d:; BB(0x0051e77d);
    /* 0051e77d: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e781: jle 0x51e79a */ if ((fZ||fS!=fO)) goto L_0051e79a;
L_0051e783:; BB(0x0051e783);
    /* 0051e783: push 0x4b4 */ { u32 v = 0x4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e788: push 0x6c23ec */ { u32 v = 0x6c23ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e78d: push 0x6c2458 */ { u32 v = 0x6c2458u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e792: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51e797u); f_005e9f20();
    /* 0051e797: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e79a:; BB(0x0051e79a);
    /* 0051e79a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051e79d: mov eax, dword ptr [ecx*4 + 0x721a10] */ r_eax = R32((u32)(r_ecx*4+0x721a10u));
    /* 0051e7a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e7a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e7a7: ret 4 */ FN_RET(0x0051e770); r_esp += 8; return;
}

void f_0051e8f0(void) /* PokerTournDialog::func_0051e8f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e8f0);
    /* 0051e8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e8f3: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e8f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051e8fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051e900: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051e903: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0051e909: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051e90f: cmp dword ptr [eax + 0x1c8], 3 */ {  u32 a = R32((u32)(r_eax+0x1c8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e916: jne 0x51e992 */ if (!fZ) goto L_0051e992;
L_0051e918:; BB(0x0051e918);
    /* 0051e918: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051e91e: mov dl, byte ptr [ecx + 0x1c0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1c0u))) & 0xffu);
    /* 0051e924: mov byte ptr [ebp - 0x111], dl */ W8((u32)(r_ebp+0xfffffeefu), (u8)r_edx);
    /* 0051e92a: movzx eax, byte ptr [ebp - 0x111] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffeefu));
    /* 0051e931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e933: je 0x51e948 */ if (fZ) goto L_0051e948;
L_0051e935:; BB(0x0051e935);
    /* 0051e935: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051e93b: call 0x4806f0 */ r_esp -= 4; W32(r_esp, 0x51e940u); f_004806f0();
    /* 0051e940: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0051e946: jmp 0x51e962 */ goto L_0051e962;
L_0051e948:; BB(0x0051e948);
    /* 0051e948: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051e94e: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51e953u); f_0051e5f0();
    /* 0051e953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e954: call 0x520850 */ r_esp -= 4; W32(r_esp, 0x51e959u); f_00520850();
    /* 0051e959: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e95c: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_0051e962:; BB(0x0051e962);
    /* 0051e962: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0051e968: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e969: call 0x520870 */ r_esp -= 4; W32(r_esp, 0x51e96eu); f_00520870();
    /* 0051e96e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e972: push 0x6bce24 */ { u32 v = 0x6bce24u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e977: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e97cu); f_00630f40();
    /* 0051e97c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e97f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e980: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0051e986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e987: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51e98du); call_ind(t); }
    /* 0051e98d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e990: jmp 0x51e9af */ goto L_0051e9af;
L_0051e992:; BB(0x0051e992);
    /* 0051e992: push 0x6bcdf4 */ { u32 v = 0x6bcdf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e997: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e99cu); f_00630f40();
    /* 0051e99c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e99f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a0: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0051e9a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9a7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x51e9acu); f_00686d8e();
    /* 0051e9ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051e9af:; BB(0x0051e9af);
    /* 0051e9af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9b1: push 0x6bcdd8 */ { u32 v = 0x6bcdd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51e9bbu); f_00630f40();
    /* 0051e9bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e9be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9bf: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0051e9c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e9c6: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x51e9cbu); f_0062ff10();
    /* 0051e9cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e9ce: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 0051e9d4: cmp dword ptr [ebp - 0x110], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e9db: jne 0x51e9df */ if (!fZ) goto L_0051e9df;
L_0051e9dd:; BB(0x0051e9dd);
    /* 0051e9dd: jmp 0x51ea5a */ goto L_0051ea5a;
L_0051e9df:; BB(0x0051e9df);
    /* 0051e9df: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051e9e5: mov al, byte ptr [edx + 0x1c0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1c0u))) & 0xffu);
    /* 0051e9eb: mov byte ptr [ebp - 0x112], al */ W8((u32)(r_ebp+0xfffffeeeu), (u8)r_eax);
    /* 0051e9f1: movzx ecx, byte ptr [ebp - 0x112] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeeeu));
    /* 0051e9f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051e9fa: je 0x51ea3f */ if (fZ) goto L_0051ea3f;
L_0051e9fc:; BB(0x0051e9fc);
    /* 0051e9fc: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0051ea02: cmp dword ptr [edx + 0x1c8], 3 */ {  u32 a = R32((u32)(r_edx+0x1c8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051ea09: jne 0x51ea25 */ if (!fZ) goto L_0051ea25;
L_0051ea0b:; BB(0x0051ea0b);
    /* 0051ea0b: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051ea11: call 0x4fc8e0 */ r_esp -= 4; W32(r_esp, 0x51ea16u); f_004fc8e0();
    /* 0051ea16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea18: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051ea1e: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x51ea23u); f_004fcb30();
    /* 0051ea23: jmp 0x51ea3d */ goto L_0051ea3d;
L_0051ea25:; BB(0x0051ea25);
    /* 0051ea25: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051ea2b: call 0x4fc8e0 */ r_esp -= 4; W32(r_esp, 0x51ea30u); f_004fc8e0();
    /* 0051ea30: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051ea38: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x51ea3du); f_0047fb90();
L_0051ea3d:; BB(0x0051ea3d);
    /* 0051ea3d: jmp 0x51ea5a */ goto L_0051ea5a;
L_0051ea3f:; BB(0x0051ea3f);
    /* 0051ea3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0051ea41: jne 0x51ea5a */ if (!fZ) goto L_0051ea5a;
L_0051ea43:; BB(0x0051ea43);
    /* 0051ea43: push 0x4f1 */ { u32 v = 0x4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea48: push 0x6c23ec */ { u32 v = 0x6c23ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea4d: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ea52: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51ea57u); f_005e9f20();
    /* 0051ea57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051ea5a:; BB(0x0051ea5a);
    /* 0051ea5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ea5d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ea5f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51ea64u); f_00686d72();
    /* 0051ea64: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ea66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ea67: ret  */ FN_RET(0x0051e8f0); r_esp += 4; return;
}

void f_0051ecb0(void) /* PokerTournDialog::func_0051ecb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051ecb0);
    /* 0051ecb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051ecb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051ecb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ecba: cmp dword ptr [eax + 0x22c], 4 */ {  u32 a = R32((u32)(r_eax+0x22cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051ecc1: jl 0x51ecda */ if ((fS!=fO)) goto L_0051ecda;
L_0051ecc3:; BB(0x0051ecc3);
    /* 0051ecc3: push 0x551 */ { u32 v = 0x551u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecc8: push 0x6c23ec */ { u32 v = 0x6c23ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051eccd: push 0x6c265c */ { u32 v = 0x6c265cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecd2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51ecd7u); f_005e9f20();
    /* 0051ecd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051ecda:; BB(0x0051ecda);
    /* 0051ecda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051ecdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecde: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ece1: mov ecx, dword ptr [eax + 0x22c] */ r_ecx = R32((u32)(r_eax+0x22cu));
    /* 0051ece7: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051ecea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051eced: lea eax, [edx + ecx + 0x230] */ r_eax = (u32)(r_edx+r_ecx+0x230u);
    /* 0051ecf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ecf5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x51ecfau); f_00686d8e();
    /* 0051ecfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ecfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ed00: mov edx, dword ptr [ecx + 0x22c] */ r_edx = R32((u32)(r_ecx+0x22cu));
    /* 0051ed06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ed09: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0051ed0c: mov dword ptr [eax + edx*4 + 0x3c0], ecx */ W32((u32)(r_eax+r_edx*4+0x3c0u), r_ecx);
    /* 0051ed13: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ed16: mov eax, dword ptr [edx + 0x22c] */ r_eax = R32((u32)(r_edx+0x22cu));
    /* 0051ed1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ed1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ed22: mov dword ptr [ecx + 0x22c], eax */ W32((u32)(r_ecx+0x22cu), r_eax);
    /* 0051ed28: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ed2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ed2b: ret 8 */ FN_RET(0x0051ecb0); r_esp += 12; return;
}

