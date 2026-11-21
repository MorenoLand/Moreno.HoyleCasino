#include "protos.h"

void f_0065e3c0(void) /* sub_65E3C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e3c0);
    /* 0065e3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e3c3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e3c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065e3cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e3cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065e3d0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0065e3d3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e3d6: movzx ecx, byte ptr [eax + 0x1d4] */ r_ecx = (u32)R8((u32)(r_eax+0x1d4u));
    /* 0065e3dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e3df: je 0x65e40c */ if (fZ) goto L_0065e40c;
L_0065e3e1:; BB(0x0065e3e1);
    /* 0065e3e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3e3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e3e6: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e3ebu); f_005fb300();
    /* 0065e3eb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0065e3ee: push 0x6deca8 */ { u32 v = 0x6deca8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3f3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65e3f8u); f_00630f40();
    /* 0065e3f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e3fc: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065e3ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065e401: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065e404: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0065e40a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65e40cu); call_ind(t); }
L_0065e40c:; BB(0x0065e40c);
    /* 0065e40c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e40e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e410: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e413: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e418u); f_005fb300();
    /* 0065e418: mov ecx, eax */ r_ecx = r_eax;
    /* 0065e41a: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x65e41fu); f_006026f0();
    /* 0065e41f: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e421: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e423: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e426: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e42bu); f_005fb300();
    /* 0065e42b: mov ecx, eax */ r_ecx = r_eax;
    /* 0065e42d: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x65e432u); f_006026f0();
    /* 0065e432: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e435: call 0x65e930 */ r_esp -= 4; W32(r_esp, 0x65e43au); f_0065e930();
    /* 0065e43a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e43c: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0065e43f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e440: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e445: push 0x6dec9c */ { u32 v = 0x6dec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e44a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0065e450: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0065e453: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0065e458: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0065e45b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065e45d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0065e460: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e462u); call_ind(t); }
    /* 0065e462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e464: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e467: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65e46cu); f_005fb720();
    /* 0065e46c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0065e46f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065e472: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e474: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065e477: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065e47d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e47fu); call_ind(t); }
    /* 0065e47f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e481: je 0x65e533 */ if (fZ) goto L_0065e533;
L_0065e487:; BB(0x0065e487);
    /* 0065e487: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e48a: movzx edx, byte ptr [ecx + 0x1d4] */ r_edx = (u32)R8((u32)(r_ecx+0x1d4u));
    /* 0065e491: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e493: je 0x65e510 */ if (fZ) goto L_0065e510;
L_0065e495:; BB(0x0065e495);
    /* 0065e495: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e49a: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0065e49d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e49e: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x65e4a3u); f_00686ec0();
    /* 0065e4a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e4a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e4a8: je 0x65e510 */ if (fZ) goto L_0065e510;
L_0065e4aa:; BB(0x0065e4aa);
    /* 0065e4aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4ac: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e4af: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65e4b4u); f_005fb720();
    /* 0065e4b4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0065e4b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4b9: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0065e4bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4bd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065e4c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065e4c2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065e4c5: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 0065e4cb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65e4cdu); call_ind(t); }
    /* 0065e4cd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065e4d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e4d2: je 0x65e4ed */ if (fZ) goto L_0065e4ed;
L_0065e4d4:; BB(0x0065e4d4);
    /* 0065e4d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4d6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0065e4d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4dc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e4df: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65e4e4u); f_005fb720();
    /* 0065e4e4: mov ecx, eax */ r_ecx = r_eax;
    /* 0065e4e6: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x65e4ebu); f_00628f40();
    /* 0065e4eb: jmp 0x65e50e */ goto L_0065e50e;
L_0065e4ed:; BB(0x0065e4ed);
    /* 0065e4ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4ef: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e4f2: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65e4f7u); f_005fb720();
    /* 0065e4f7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0065e4fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e4fe: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065e501: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065e503: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065e506: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 0065e50c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65e50eu); call_ind(t); }
L_0065e50e:; BB(0x0065e50e);
    /* 0065e50e: jmp 0x65e531 */ goto L_0065e531;
L_0065e510:; BB(0x0065e510);
    /* 0065e510: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e512: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e515: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65e51au); f_005fb720();
    /* 0065e51a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0065e51d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e51f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e521: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065e524: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e526: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065e529: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0065e52f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e531u); call_ind(t); }
L_0065e531:; BB(0x0065e531);
    /* 0065e531: jmp 0x65e546 */ goto L_0065e546;
L_0065e533:; BB(0x0065e533);
    /* 0065e533: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e535: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e53a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e53c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e53e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e541: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65e546u); f_0065c820();
L_0065e546:; BB(0x0065e546);
    /* 0065e546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e549: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e54b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65e550u); f_00686d72();
    /* 0065e550: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e552: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e553: ret  */ FN_RET(0x0065e3c0); r_esp += 4; return;
}

void f_0065e670(void) /* sub_65E670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e670);
    /* 0065e670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e671: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e675: push 0x6ac912 */ { u32 v = 0x6ac912u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e67a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065e680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e681: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e684: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065e689: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e68b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e68c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065e68f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065e695: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065e698: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e69b: call 0x65ff10 */ r_esp -= 4; W32(r_esp, 0x65e6a0u); f_0065ff10();
    /* 0065e6a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065e6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e6a5: je 0x65e6d2 */ if (fZ) goto L_0065e6d2;
L_0065e6a7:; BB(0x0065e6a7);
    /* 0065e6a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6a9: push 0x6decd4 */ { u32 v = 0x6decd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65e6b3u); f_00630f40();
    /* 0065e6b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e6b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6b7: push 0x6decbc */ { u32 v = 0x6decbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65e6c1u); f_00630f40();
    /* 0065e6c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e6c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6c5: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65e6cau); f_0062ff10();
    /* 0065e6ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e6cd: jmp 0x65e761 */ goto L_0065e761;
L_0065e6d2:; BB(0x0065e6d2);
    /* 0065e6d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e6d5: cmp dword ptr [ecx + 0x1c8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e6dc: jne 0x65e753 */ if (!fZ) goto L_0065e753;
L_0065e6de:; BB(0x0065e6de);
    /* 0065e6de: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e6e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65e6e8u); f_00686d82();
    /* 0065e6e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e6eb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065e6ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e6f5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e6f9: je 0x65e708 */ if (fZ) goto L_0065e708;
L_0065e6fb:; BB(0x0065e6fb);
    /* 0065e6fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e6fe: call 0x660b70 */ r_esp -= 4; W32(r_esp, 0x65e703u); f_00660b70();
    /* 0065e703: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065e706: jmp 0x65e70f */ goto L_0065e70f;
L_0065e708:; BB(0x0065e708);
    /* 0065e708: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0065e70f:; BB(0x0065e70f);
    /* 0065e70f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e712: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0065e715: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e71c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e71f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e722: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 0065e728: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e72b: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0065e731: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e734: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 0065e73a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e73c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0065e73f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e741u); call_ind(t); }
    /* 0065e741: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e745: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e748: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 0065e74e: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x65e753u); f_005f7340();
L_0065e753:; BB(0x0065e753);
    /* 0065e753: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e756: mov ecx, dword ptr [edx + 0x1c8] */ r_ecx = R32((u32)(r_edx+0x1c8u));
    /* 0065e75c: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x65e761u); f_005f85d0();
L_0065e761:; BB(0x0065e761);
    /* 0065e761: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e764: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e76b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e76c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e76e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e76f: ret  */ FN_RET(0x0065e670); r_esp += 4; return;
}

void f_0065e770(void) /* sub_65E770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e770);
    /* 0065e770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e771: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065e777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e77a: call 0x65c4d0 */ r_esp -= 4; W32(r_esp, 0x65e77fu); f_0065c4d0();
    /* 0065e77f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e782: call 0x65ea70 */ r_esp -= 4; W32(r_esp, 0x65e787u); f_0065ea70();
    /* 0065e787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e789: jne 0x65e7aa */ if (!fZ) goto L_0065e7aa;
L_0065e78b:; BB(0x0065e78b);
    /* 0065e78b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e78e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e790: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e793: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 0065e799: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e79bu); call_ind(t); }
    /* 0065e79b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065e79e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e7a0: je 0x65e7aa */ if (fZ) goto L_0065e7aa;
L_0065e7a2:; BB(0x0065e7a2);
    /* 0065e7a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e7a5: call 0x65e670 */ r_esp -= 4; W32(r_esp, 0x65e7aau); f_0065e670();
L_0065e7aa:; BB(0x0065e7aa);
    /* 0065e7aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e7ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e7ad: ret  */ FN_RET(0x0065e770); r_esp += 4; return;
}

void f_0065e7b0(void) /* sub_65E7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e7b0);
    /* 0065e7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065e7b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e7ba: movzx ecx, byte ptr [eax + 0x1d4] */ r_ecx = (u32)R8((u32)(r_eax+0x1d4u));
    /* 0065e7c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e7c3: je 0x65e7c9 */ if (fZ) goto L_0065e7c9;
L_0065e7c5:; BB(0x0065e7c5);
    /* 0065e7c5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065e7c7: jmp 0x65e7e2 */ goto L_0065e7e2;
L_0065e7c9:; BB(0x0065e7c9);
    /* 0065e7c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065e7cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e7cd: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065e7d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e7d4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e7da: mov eax, dword ptr [edx + 0x368] */ r_eax = R32((u32)(r_edx+0x368u));
    /* 0065e7e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e7e2u); call_ind(t); }
L_0065e7e2:; BB(0x0065e7e2);
    /* 0065e7e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e7e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e7e5: ret 4 */ FN_RET(0x0065e7b0); r_esp += 8; return;
}

void f_0065e930(void) /* sub_65E930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e930);
    /* 0065e930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e931: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e933: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e936: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065e93b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065e93d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065e940: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0065e943: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065e948: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e94a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e950: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0065e956: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e958u); call_ind(t); }
    /* 0065e958: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065e95b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e95d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e95f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e962: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x65e967u); f_0063a3e0();
    /* 0065e967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e96a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65e96fu); f_0063aac0();
    /* 0065e96f: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 0065e975: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0065e97c: jmp 0x65e987 */ goto L_0065e987;
L_0065e97e:; BB(0x0065e97e);
    /* 0065e97e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065e981: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e984: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0065e987:; BB(0x0065e987);
    /* 0065e987: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e98b: jge 0x65ea1a */ if ((fS==fO)) goto L_0065ea1a;
L_0065e991:; BB(0x0065e991);
    /* 0065e991: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065e994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e995: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e99a: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0065e99d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e99e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x65e9a4u); call_ind(t); }
    /* 0065e9a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e9a7: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0065e9aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e9ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e9ae: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x65e9b3u); f_0063ab10();
    /* 0065e9b3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065e9b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e9b8: je 0x65ea15 */ if (fZ) goto L_0065ea15;
L_0065e9ba:; BB(0x0065e9ba);
    /* 0065e9ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e9bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e9be: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e9c1: call 0x65e7b0 */ r_esp -= 4; W32(r_esp, 0x65e9c6u); f_0065e7b0();
    /* 0065e9c6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065e9c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e9cb: je 0x65e9cf */ if (fZ) goto L_0065e9cf;
L_0065e9cd:; BB(0x0065e9cd);
    /* 0065e9cd: jmp 0x65e97e */ goto L_0065e97e;
L_0065e9cf:; BB(0x0065e9cf);
    /* 0065e9cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e9d2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65e9d7u); f_0063aac0();
    /* 0065e9d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e9d9: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0065e9dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e9df: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65e9e4u); f_0063aac0();
    /* 0065e9e4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065e9e7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0065e9ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e9ed: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x65e9f2u); f_004842b0();
    /* 0065e9f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e9f3: mov al, byte ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd4u))) & 0xffu);
    /* 0065e9f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e9f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e9fa: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x65e9ffu); f_0057a470();
    /* 0065e9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ea03: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x65ea08u); f_00520e60();
    /* 0065ea08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea09: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065ea0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea0d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ea10: call 0x65e7f0 */ r_esp -= 4; W32(r_esp, 0x65ea15u); f_0065e7f0();
L_0065ea15:; BB(0x0065ea15);
    /* 0065ea15: jmp 0x65e97e */ goto L_0065e97e;
L_0065ea1a:; BB(0x0065ea1a);
    /* 0065ea1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea1c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ea1f: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ea24u); f_005fb720();
    /* 0065ea24: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ea26: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x65ea2bu); f_00628d80();
    /* 0065ea2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ea2e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065ea31: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065ea34: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065ea37: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ea3b: je 0x65ea50 */ if (fZ) goto L_0065ea50;
L_0065ea3d:; BB(0x0065ea3d);
    /* 0065ea3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea3f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ea42: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065ea44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065ea47: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065ea49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ea4bu); call_ind(t); }
    /* 0065ea4b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0065ea4e: jmp 0x65ea57 */ goto L_0065ea57;
L_0065ea50:; BB(0x0065ea50);
    /* 0065ea50: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0065ea57:; BB(0x0065ea57);
    /* 0065ea57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ea5a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ea5c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65ea61u); f_00686d72();
    /* 0065ea61: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ea63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ea64: ret  */ FN_RET(0x0065e930); r_esp += 4; return;
}

void f_0065ea70(void) /* sub_65EA70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ea70);
    /* 0065ea70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea71: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ea73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ea76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ea79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ea7e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ea83u); f_005fb720();
    /* 0065ea83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ea85: je 0x65eaa6 */ if (fZ) goto L_0065eaa6;
L_0065ea87:; BB(0x0065ea87);
    /* 0065ea87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ea89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ea8c: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ea91u); f_005fb720();
    /* 0065ea91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065ea94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ea97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ea99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ea9c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065eaa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65eaa4u); call_ind(t); }
    /* 0065eaa4: jmp 0x65eaa8 */ goto L_0065eaa8;
L_0065eaa6:; BB(0x0065eaa6);
    /* 0065eaa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0065eaa8:; BB(0x0065eaa8);
    /* 0065eaa8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065eaaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065eaab: ret  */ FN_RET(0x0065ea70); r_esp += 4; return;
}

void f_0065eab0(void) /* sub_65EAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065eab0);
    /* 0065eab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065eab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065eab3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065eab6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0065eab9: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0065eabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eabf: je 0x65eb8e */ if (fZ) goto L_0065eb8e;
L_0065eac5:; BB(0x0065eac5);
    /* 0065eac5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eac8: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065eace: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ead1: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65ead6u); f_00663c50();
    /* 0065ead6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ead8: je 0x65eb14 */ if (fZ) goto L_0065eb14;
L_0065eada:; BB(0x0065eada);
    /* 0065eada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eadc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eade: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eae0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eae3: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0065eae9: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065eaec: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65eaf1u); f_006639a0();
    /* 0065eaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eaf2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eaf5: add eax, 0x1d7 */ {  u32 a = r_eax; u32 b = 0x1d7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065eafa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eafb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eafe: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 0065eb04: call 0x660f70 */ r_esp -= 4; W32(r_esp, 0x65eb09u); f_00660f70();
    /* 0065eb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb0d: call 0x65e7f0 */ r_esp -= 4; W32(r_esp, 0x65eb12u); f_0065e7f0();
    /* 0065eb12: jmp 0x65eb3e */ goto L_0065eb3e;
L_0065eb14:; BB(0x0065eb14);
    /* 0065eb14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb18: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb1d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb20: add edx, 0x1d7 */ {  u32 a = r_edx; u32 b = 0x1d7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065eb26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb27: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb2a: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0065eb30: call 0x660f70 */ r_esp -= 4; W32(r_esp, 0x65eb35u); f_00660f70();
    /* 0065eb35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb39: call 0x65e7f0 */ r_esp -= 4; W32(r_esp, 0x65eb3eu); f_0065e7f0();
L_0065eb3e:; BB(0x0065eb3e);
    /* 0065eb3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb43: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65eb48u); f_005fb720();
    /* 0065eb48: mov ecx, eax */ r_ecx = r_eax;
    /* 0065eb4a: call 0x628d80 */ r_esp -= 4; W32(r_esp, 0x65eb4fu); f_00628d80();
    /* 0065eb4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb54: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65eb59u); f_005fb720();
    /* 0065eb59: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065eb5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065eb5f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065eb61: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065eb64: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0065eb6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65eb6cu); call_ind(t); }
    /* 0065eb6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb71: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 0065eb77: call 0x660f70 */ r_esp -= 4; W32(r_esp, 0x65eb7cu); f_00660f70();
    /* 0065eb7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eb7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb82: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65eb87u); f_005fb720();
    /* 0065eb87: mov ecx, eax */ r_ecx = r_eax;
    /* 0065eb89: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x65eb8eu); f_00628f40();
L_0065eb8e:; BB(0x0065eb8e);
    /* 0065eb8e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb91: cmp dword ptr [edx + 0x1c8], 0 */ {  u32 a = R32((u32)(r_edx+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eb98: je 0x65ebb5 */ if (fZ) goto L_0065ebb5;
L_0065eb9a:; BB(0x0065eb9a);
    /* 0065eb9a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eb9d: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0065eba3: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x65eba8u); f_005f8990();
    /* 0065eba8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ebab: mov dword ptr [ecx + 0x1c8], 0 */ W32((u32)(r_ecx+0x1c8u), 0x0u);
L_0065ebb5:; BB(0x0065ebb5);
    /* 0065ebb5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ebb8: cmp dword ptr [edx + 0x1e4], -1 */ {  u32 a = R32((u32)(r_edx+0x1e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ebbf: jne 0x65ec1b */ if (!fZ) goto L_0065ec1b;
L_0065ebc1:; BB(0x0065ebc1);
    /* 0065ebc1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ebc3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065ebc8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ebca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065ebd0: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0065ebd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ebd8u); call_ind(t); }
    /* 0065ebd8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065ebdb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ebdd: jne 0x65ec1b */ if (!fZ) goto L_0065ec1b;
L_0065ebdf:; BB(0x0065ebdf);
    /* 0065ebdf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ebe2: cmp dword ptr [edx + 0x1cc], 0 */ {  u32 a = R32((u32)(r_edx+0x1ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ebe9: je 0x65ec1b */ if (fZ) goto L_0065ec1b;
L_0065ebeb:; BB(0x0065ebeb);
    /* 0065ebeb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065ebf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ebf2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065ebf8: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 0065ebfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ec00u); call_ind(t); }
    /* 0065ec00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0065ec02: jle 0x65ec1b */ if ((fZ||fS!=fO)) goto L_0065ec1b;
L_0065ec04:; BB(0x0065ec04);
    /* 0065ec04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ec07: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0065ec0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec0e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065ec14: call 0x64f660 */ r_esp -= 4; W32(r_esp, 0x65ec19u); f_0064f660();
    /* 0065ec19: jmp 0x65ec5a */ goto L_0065ec5a;
L_0065ec1b:; BB(0x0065ec1b);
    /* 0065ec1b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ec1e: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 0065ec24: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065ec27: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ec2a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0065ec2d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ec31: je 0x65ec46 */ if (fZ) goto L_0065ec46;
L_0065ec33:; BB(0x0065ec33);
    /* 0065ec33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ec38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ec3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ec3d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065ec3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ec41u); call_ind(t); }
    /* 0065ec41: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ec44: jmp 0x65ec4d */ goto L_0065ec4d;
L_0065ec46:; BB(0x0065ec46);
    /* 0065ec46: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0065ec4d:; BB(0x0065ec4d);
    /* 0065ec4d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ec50: mov dword ptr [ecx + 0x1cc], 0 */ W32((u32)(r_ecx+0x1ccu), 0x0u);
L_0065ec5a:; BB(0x0065ec5a);
    /* 0065ec5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ec5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ec5d: ret 4 */ FN_RET(0x0065eab0); r_esp += 8; return;
}

void f_0065ec60(void) /* sub_65EC60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ec60);
    /* 0065ec60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec61: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ec63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ec67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ec6a: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0065ec70: call 0x660f70 */ r_esp -= 4; W32(r_esp, 0x65ec75u); f_00660f70();
    /* 0065ec75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ec79: call 0x65fb70 */ r_esp -= 4; W32(r_esp, 0x65ec7eu); f_0065fb70();
    /* 0065ec7e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065ec81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ec83: je 0x65ecaf */ if (fZ) goto L_0065ecaf;
L_0065ec85:; BB(0x0065ec85);
    /* 0065ec85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec87: push 0x6ded54 */ { u32 v = 0x6ded54u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec8c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65ec91u); f_00630f40();
    /* 0065ec91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ec94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec95: push 0x6ded3c */ { u32 v = 0x6ded3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065ec9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65ec9fu); f_00630f40();
    /* 0065ec9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065eca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eca3: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65eca8u); f_0062ff10();
    /* 0065eca8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ecab: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065ecad: jmp 0x65ed09 */ goto L_0065ed09;
L_0065ecaf:; BB(0x0065ecaf);
    /* 0065ecaf: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecb4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ecb7: mov ecx, dword ptr [edx + 0x1c8] */ r_ecx = R32((u32)(r_edx+0x1c8u));
    /* 0065ecbd: call 0x660f70 */ r_esp -= 4; W32(r_esp, 0x65ecc2u); f_00660f70();
    /* 0065ecc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecc3: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x65ecc8u); f_00686ec0();
    /* 0065ecc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065eccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eccd: jne 0x65ecf9 */ if (!fZ) goto L_0065ecf9;
L_0065eccf:; BB(0x0065eccf);
    /* 0065eccf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecd1: push 0x6ded24 */ { u32 v = 0x6ded24u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecd6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65ecdbu); f_00630f40();
    /* 0065ecdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ecde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ecdf: push 0x6ded08 */ { u32 v = 0x6ded08u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ece4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65ece9u); f_00630f40();
    /* 0065ece9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ecec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065eced: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65ecf2u); f_0062ff10();
    /* 0065ecf2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ecf5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065ecf7: jmp 0x65ed09 */ goto L_0065ed09;
L_0065ecf9:; BB(0x0065ecf9);
    /* 0065ecf9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ecfc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ecfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ed01: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0065ed07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ed09u); call_ind(t); }
L_0065ed09:; BB(0x0065ed09);
    /* 0065ed09: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ed0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ed0c: ret  */ FN_RET(0x0065ec60); r_esp += 4; return;
}

void f_0065ed10(void) /* sub_65ED10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ed10);
    /* 0065ed10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed11: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ed13: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ed16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065ed19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065ed20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ed25: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ed2au); f_005fb720();
    /* 0065ed2a: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ed2c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65ed31u); f_00615260();
    /* 0065ed31: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ed34: je 0x65ee19 */ if (fZ) goto L_0065ee19;
L_0065ed3a:; BB(0x0065ed3a);
    /* 0065ed3a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed3c: push 0x6de780 */ { u32 v = 0x6de780u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed41: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65ed46u); f_00630f40();
    /* 0065ed46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ed49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed4a: push 0x6ded70 */ { u32 v = 0x6ded70u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed4f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65ed54u); f_00630f40();
    /* 0065ed54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ed57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed58: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x65ed5du); f_0062ff10();
    /* 0065ed5d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ed60: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ed63: jne 0x65ee19 */ if (!fZ) goto L_0065ee19;
L_0065ed69:; BB(0x0065ed69);
    /* 0065ed69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ed6e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ed73u); f_005fb720();
    /* 0065ed73: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ed75: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65ed7au); f_00615260();
    /* 0065ed7a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065ed7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ed7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ed82: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ed87u); f_005fb720();
    /* 0065ed87: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065ed8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ed8d: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x65ed92u); f_005e4390();
    /* 0065ed92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ed94: je 0x65edaa */ if (fZ) goto L_0065edaa;
L_0065ed96:; BB(0x0065ed96);
    /* 0065ed96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ed99: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x65ed9eu); f_005e4390();
    /* 0065ed9e: mov ecx, eax */ r_ecx = r_eax;
    /* 0065eda0: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x65eda5u); f_00629c70();
    /* 0065eda5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065eda8: jmp 0x65edb1 */ goto L_0065edb1;
L_0065edaa:; BB(0x0065edaa);
    /* 0065edaa: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0065edb1:; BB(0x0065edb1);
    /* 0065edb1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065edb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065edb5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065edb8: call 0x660030 */ r_esp -= 4; W32(r_esp, 0x65edbdu); f_00660030();
    /* 0065edbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065edbf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065edc2: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65edc7u); f_005fb720();
    /* 0065edc7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065edca: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065edcd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065edcf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065edd2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065edd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65eddau); call_ind(t); }
    /* 0065edda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eddc: je 0x65ee01 */ if (fZ) goto L_0065ee01;
L_0065edde:; BB(0x0065edde);
    /* 0065edde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ede0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ede3: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ede8u); f_005fb720();
    /* 0065ede8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065edeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eded: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065edef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065edf2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065edf4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065edf7: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0065edfd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65edffu); call_ind(t); }
    /* 0065edff: jmp 0x65ee19 */ goto L_0065ee19;
L_0065ee01:; BB(0x0065ee01);
    /* 0065ee01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ee04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065ee06: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ee09: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0065ee0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ee11u); call_ind(t); }
    /* 0065ee11: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ee14: call 0x65e670 */ r_esp -= 4; W32(r_esp, 0x65ee19u); f_0065e670();
L_0065ee19:; BB(0x0065ee19);
    /* 0065ee19: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ee1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ee1c: ret  */ FN_RET(0x0065ed10); r_esp += 4; return;
}

void f_0065ef90(void) /* sub_65EF90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ef90);
    /* 0065ef90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef91: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ef93: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ef96: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065ef99: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0065ef9d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065efa0: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x65efa5u); f_00629c70();
    /* 0065efa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065efa6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065efac: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x65efb1u); f_006368b0();
    /* 0065efb1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065efb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065efb6: je 0x65efdd */ if (fZ) goto L_0065efdd;
L_0065efb8:; BB(0x0065efb8);
    /* 0065efb8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065efbb: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x65efc0u); f_00629c70();
    /* 0065efc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065efc1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065efc7: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x65efccu); f_006369b0();
    /* 0065efcc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065efd2: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065efd5: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0065efd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065efdb: jmp 0x65f015 */ goto L_0065f015;
L_0065efdd:; BB(0x0065efdd);
    /* 0065efdd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065efe3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065efe5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065efeb: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0065eff1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65eff3u); call_ind(t); }
    /* 0065eff3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065eff6: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 0065effa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065effc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065effe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f001: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x65f006u); f_0063a3e0();
    /* 0065f006: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065f009: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065f00c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f00d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f010: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x65f015u); f_0063ab10();
L_0065f015:; BB(0x0065f015);
    /* 0065f015: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065f018: movsx eax, byte ptr [edx + 0x3a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3au));
    /* 0065f01c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065f01f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f022: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f027u); f_0063aac0();
    /* 0065f027: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065f02a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0065f02c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f02f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f034u); f_0063aac0();
    /* 0065f034: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f036: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065f039: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f03d: jne 0x65f072 */ if (!fZ) goto L_0065f072;
L_0065f03f:; BB(0x0065f03f);
    /* 0065f03f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f044: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f047: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f04cu); f_0063aac0();
    /* 0065f04c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f04f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f050: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f055u); f_00686d8e();
    /* 0065f055: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f058: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065f05b: movsx ecx, byte ptr [eax + 0x3b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3bu));
    /* 0065f05f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065f062: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f065: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f06au); f_0063aac0();
    /* 0065f06a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065f06d: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0065f070: jmp 0x65f0db */ goto L_0065f0db;
L_0065f072:; BB(0x0065f072);
    /* 0065f072: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065f075: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f079: call 0x663bb0 */ r_esp -= 4; W32(r_esp, 0x65f07eu); f_00663bb0();
    /* 0065f07e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f081: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065f084: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f086: je 0x65f0a5 */ if (fZ) goto L_0065f0a5;
L_0065f088:; BB(0x0065f088);
    /* 0065f088: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065f08b: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065f08e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065f08f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f092: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f097u); f_0063aac0();
    /* 0065f097: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f09a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f09b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f0a0u); f_00686d8e();
    /* 0065f0a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f0a3: jmp 0x65f0db */ goto L_0065f0db;
L_0065f0a5:; BB(0x0065f0a5);
    /* 0065f0a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f0a8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f0adu); f_0063aac0();
    /* 0065f0ad: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 0065f0b3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f0bb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f0c0u); f_0063aac0();
    /* 0065f0c0: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065f0c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0c4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65f0c9u); f_00686d8e();
    /* 0065f0c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065f0cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f0cf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65f0d4u); f_0063aac0();
    /* 0065f0d4: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
L_0065f0db:; BB(0x0065f0db);
    /* 0065f0db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f0de: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x65f0e3u); f_0063b0a0();
    /* 0065f0e3: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0065f0e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f0e9: je 0x65f117 */ if (fZ) goto L_0065f117;
L_0065f0eb:; BB(0x0065f0eb);
    /* 0065f0eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065f0ee: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065f0f1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065f0f4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0065f0f7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065f0fb: je 0x65f110 */ if (fZ) goto L_0065f110;
L_0065f0fd:; BB(0x0065f0fd);
    /* 0065f0fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065f0ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f102: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065f104: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065f107: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065f109: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65f10bu); call_ind(t); }
    /* 0065f10b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065f10e: jmp 0x65f117 */ goto L_0065f117;
L_0065f110:; BB(0x0065f110);
    /* 0065f110: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065f117:; BB(0x0065f117);
    /* 0065f117: mov esp, ebp */ r_esp = r_ebp;
    /* 0065f119: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065f11a: ret 4 */ FN_RET(0x0065ef90); r_esp += 8; return;
}

