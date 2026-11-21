#include "protos.h"

void f_0056a380(void) /* sub_56A380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a380);
    /* 0056a380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a381: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a383: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a386: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056a389: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a390: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056a397: mov eax, dword ptr [0x793444] */ r_eax = R32((u32)(0x793444u));
    /* 0056a39c: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 0056a3a0: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a3a3: jne 0x56a3b2 */ if (!fZ) goto L_0056a3b2;
L_0056a3a5:; BB(0x0056a3a5);
    /* 0056a3a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a3a8: call 0x568890 */ r_esp -= 4; W32(r_esp, 0x56a3adu); f_00568890();
    /* 0056a3ad: jmp 0x56a50a */ goto L_0056a50a;
L_0056a3b2:; BB(0x0056a3b2);
    /* 0056a3b2: mov edx, dword ptr [0x793444] */ r_edx = R32((u32)(0x793444u));
    /* 0056a3b8: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0056a3bc: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a3bf: jne 0x56a3d0 */ if (!fZ) goto L_0056a3d0;
L_0056a3c1:; BB(0x0056a3c1);
    /* 0056a3c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a3c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a3c6: call 0x568950 */ r_esp -= 4; W32(r_esp, 0x56a3cbu); f_00568950();
    /* 0056a3cb: jmp 0x56a50a */ goto L_0056a50a;
L_0056a3d0:; BB(0x0056a3d0);
    /* 0056a3d0: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 0056a3d6: movsx edx, byte ptr [ecx + 0x19] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x19u));
    /* 0056a3da: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a3dd: jne 0x56a3ee */ if (!fZ) goto L_0056a3ee;
L_0056a3df:; BB(0x0056a3df);
    /* 0056a3df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a3e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a3e4: call 0x568950 */ r_esp -= 4; W32(r_esp, 0x56a3e9u); f_00568950();
    /* 0056a3e9: jmp 0x56a50a */ goto L_0056a50a;
L_0056a3ee:; BB(0x0056a3ee);
    /* 0056a3ee: mov eax, dword ptr [0x793444] */ r_eax = R32((u32)(0x793444u));
    /* 0056a3f3: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 0056a3f7: cmp ecx, 0x22 */ {  u32 a = r_ecx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a3fa: jne 0x56a40b */ if (!fZ) goto L_0056a40b;
L_0056a3fc:; BB(0x0056a3fc);
    /* 0056a3fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a3fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a401: call 0x568c80 */ r_esp -= 4; W32(r_esp, 0x56a406u); f_00568c80();
    /* 0056a406: jmp 0x56a50a */ goto L_0056a50a;
L_0056a40b:; BB(0x0056a40b);
    /* 0056a40b: mov edx, dword ptr [0x793444] */ r_edx = R32((u32)(0x793444u));
    /* 0056a411: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0056a415: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a418: jne 0x56a429 */ if (!fZ) goto L_0056a429;
L_0056a41a:; BB(0x0056a41a);
    /* 0056a41a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a41c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a41f: call 0x568c80 */ r_esp -= 4; W32(r_esp, 0x56a424u); f_00568c80();
    /* 0056a424: jmp 0x56a50a */ goto L_0056a50a;
L_0056a429:; BB(0x0056a429);
    /* 0056a429: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0056a430: jmp 0x56a43b */ goto L_0056a43b;
L_0056a432:; BB(0x0056a432);
    /* 0056a432: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a435: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a438: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0056a43b:; BB(0x0056a43b);
    /* 0056a43b: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a43f: jge 0x56a475 */ if ((fS==fO)) goto L_0056a475;
L_0056a441:; BB(0x0056a441);
    /* 0056a441: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a444: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a447: movzx ecx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x1au));
    /* 0056a44c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a44e: je 0x56a459 */ if (fZ) goto L_0056a459;
L_0056a450:; BB(0x0056a450);
    /* 0056a450: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a453: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a456: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056a459:; BB(0x0056a459);
    /* 0056a459: mov eax, dword ptr [0x793444] */ r_eax = R32((u32)(0x793444u));
    /* 0056a45e: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a461: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0056a465: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a468: je 0x56a473 */ if (fZ) goto L_0056a473;
L_0056a46a:; BB(0x0056a46a);
    /* 0056a46a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a46d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a470: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0056a473:; BB(0x0056a473);
    /* 0056a473: jmp 0x56a432 */ goto L_0056a432;
L_0056a475:; BB(0x0056a475);
    /* 0056a475: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a478: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a47b: je 0x56a484 */ if (fZ) goto L_0056a484;
L_0056a47d:; BB(0x0056a47d);
    /* 0056a47d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0056a47f: jmp 0x56a50a */ goto L_0056a50a;
L_0056a484:; BB(0x0056a484);
    /* 0056a484: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0056a48b: jmp 0x56a496 */ goto L_0056a496;
L_0056a48d:; BB(0x0056a48d);
    /* 0056a48d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a490: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a493: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0056a496:; BB(0x0056a496);
    /* 0056a496: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a49a: jge 0x56a508 */ if ((fS==fO)) goto L_0056a508;
L_0056a49c:; BB(0x0056a49c);
    /* 0056a49c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a49f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a4a2: movzx ecx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x1au));
    /* 0056a4a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a4a9: je 0x56a506 */ if (fZ) goto L_0056a506;
L_0056a4ab:; BB(0x0056a4ab);
    /* 0056a4ab: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056a4b2: jmp 0x56a4bd */ goto L_0056a4bd;
L_0056a4b4:; BB(0x0056a4b4);
    /* 0056a4b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a4b7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a4ba: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0056a4bd:; BB(0x0056a4bd);
    /* 0056a4bd: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a4c1: jge 0x56a4fc */ if ((fS==fO)) goto L_0056a4fc;
L_0056a4c3:; BB(0x0056a4c3);
    /* 0056a4c3: mov eax, dword ptr [0x793444] */ r_eax = R32((u32)(0x793444u));
    /* 0056a4c8: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a4cb: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0056a4cf: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a4d2: je 0x56a4fa */ if (fZ) goto L_0056a4fa;
L_0056a4d4:; BB(0x0056a4d4);
    /* 0056a4d4: mov edx, dword ptr [0x793444] */ r_edx = R32((u32)(0x793444u));
    /* 0056a4da: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a4dd: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0056a4e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a4e4: movzx edx, word ptr [ecx + eax*2 + 0x24] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x24u));
    /* 0056a4e9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a4ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a4ef: movzx eax, word ptr [ecx + eax*2 + 0x1a] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2+0x1au));
    /* 0056a4f4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a4f6: jne 0x56a4fa */ if (!fZ) goto L_0056a4fa;
L_0056a4f8:; BB(0x0056a4f8);
    /* 0056a4f8: jmp 0x56a4fc */ goto L_0056a4fc;
L_0056a4fa:; BB(0x0056a4fa);
    /* 0056a4fa: jmp 0x56a4b4 */ goto L_0056a4b4;
L_0056a4fc:; BB(0x0056a4fc);
    /* 0056a4fc: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a500: jne 0x56a506 */ if (!fZ) goto L_0056a506;
L_0056a502:; BB(0x0056a502);
    /* 0056a502: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0056a504: jmp 0x56a50a */ goto L_0056a50a;
L_0056a506:; BB(0x0056a506);
    /* 0056a506: jmp 0x56a48d */ goto L_0056a48d;
L_0056a508:; BB(0x0056a508);
    /* 0056a508: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0056a50a:; BB(0x0056a50a);
    /* 0056a50a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a50c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a50d: ret  */ FN_RET(0x0056a380); r_esp += 4; return;
}

void f_0056a510(void) /* sub_56A510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a510);
    /* 0056a510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a511: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a513: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a516: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056a519: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a51c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056a51f: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x56a524u); f_0056b910();
    /* 0056a524: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056a527: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0056a52b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a52d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a530: call 0x568450 */ r_esp -= 4; W32(r_esp, 0x56a535u); f_00568450();
    /* 0056a535: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a538: call 0x56a5d0 */ r_esp -= 4; W32(r_esp, 0x56a53du); f_0056a5d0();
    /* 0056a53d: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0056a540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a542: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a545: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a546: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a549: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0056a54c: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x56a551u); f_0056a7a0();
    /* 0056a551: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 0056a554: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a557: ret  */ FN_RET(0x0056a510); r_esp += 4; return;
}

void f_0056a560(void) /* sub_56A560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a560);
    /* 0056a560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a561: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056a567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a56a: call 0x56a5d0 */ r_esp -= 4; W32(r_esp, 0x56a56fu); f_0056a5d0();
    /* 0056a56f: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a572: ret  */ FN_RET(0x0056a560); r_esp += 4; return;
}

void f_0056a580(void) /* sub_56A580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a580);
    /* 0056a580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a581: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a583: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a586: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056a589: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a58c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056a58f: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x56a594u); f_0056b910();
    /* 0056a594: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a597: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056a59a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a59c: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0056a59f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a5a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a5a3: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x56a5a8u); f_005d0c30();
    /* 0056a5a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056a5aa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0056a5ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056a5b0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0056a5b2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0056a5b5: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 0056a5b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a5bb: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0056a5be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056a5c1: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x56a5c6u); f_0064c560();
    /* 0056a5c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a5c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a5c9: ret 4 */ FN_RET(0x0056a580); r_esp += 8; return;
}

void f_0056a5d0(void) /* sub_56A5D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a5d0);
    /* 0056a5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a5d3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a5d6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0056a5d9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056a5dc: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x56a5e1u); f_005d0aa0();
    /* 0056a5e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0056a5e4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0056a5eb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056a5ee: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056a5f1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056a5f4: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0056a5f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a5f8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056a5fb: call 0x56a580 */ r_esp -= 4; W32(r_esp, 0x56a600u); f_0056a580();
    /* 0056a600: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0056a603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a606: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56a60bu); f_005dcb00();
    /* 0056a60b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a60e: mov ecx, eax */ r_ecx = r_eax;
    /* 0056a610: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x56a615u); f_005d5ac0();
    /* 0056a615: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a618: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a619: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0056a61c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a61d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056a620: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x56a625u); f_005d0c30();
    /* 0056a625: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0056a627: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0056a62a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0056a62d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0056a630: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056a633: add eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a636: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056a639: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a63c: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a63f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056a642: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0056a645: call 0x64c540 */ r_esp -= 4; W32(r_esp, 0x56a64au); f_0064c540();
    /* 0056a64a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a64d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a64e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a651: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a652: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0056a655: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x56a65au); f_0064c7a0();
    /* 0056a65a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a65c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a65d: ret  */ FN_RET(0x0056a5d0); r_esp += 4; return;
}

void f_0056a660(void) /* sub_56A660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a660);
    /* 0056a660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a661: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a666: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056a669: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a66c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056a66f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056a672: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056a674: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a678: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0056a67b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a67d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a67e: ret  */ FN_RET(0x0056a660); r_esp += 4; return;
}

void f_0056a680(void) /* sub_56A680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a680);
    /* 0056a680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a681: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a683: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a686: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056a689: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a68c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056a68f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056a692: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a696: jne 0x56a6ce */ if (!fZ) goto L_0056a6ce;
L_0056a698:; BB(0x0056a698);
    /* 0056a698: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a69b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0056a69e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056a6a1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a6a5: jne 0x56a6ce */ if (!fZ) goto L_0056a6ce;
L_0056a6a7:; BB(0x0056a6a7);
    /* 0056a6a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a6aa: call 0x56a560 */ r_esp -= 4; W32(r_esp, 0x56a6afu); f_0056a560();
    /* 0056a6af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0056a6b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a6b4: jne 0x56a6ce */ if (!fZ) goto L_0056a6ce;
L_0056a6b6:; BB(0x0056a6b6);
    /* 0056a6b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a6b9: call 0x56a510 */ r_esp -= 4; W32(r_esp, 0x56a6beu); f_0056a510();
    /* 0056a6be: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056a6c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a6c3: jne 0x56a6ce */ if (!fZ) goto L_0056a6ce;
L_0056a6c5:; BB(0x0056a6c5);
    /* 0056a6c5: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0056a6cc: jmp 0x56a6d5 */ goto L_0056a6d5;
L_0056a6ce:; BB(0x0056a6ce);
    /* 0056a6ce: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0056a6d5:; BB(0x0056a6d5);
    /* 0056a6d5: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0056a6d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a6da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a6db: ret  */ FN_RET(0x0056a680); r_esp += 4; return;
}

void f_0056a6e0(void) /* sub_56A6E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a6e0);
    /* 0056a6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a6e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a6e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056a6e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a6f0: jmp 0x56a6fb */ goto L_0056a6fb;
L_0056a6f2:; BB(0x0056a6f2);
    /* 0056a6f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a6f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a6f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056a6fb:; BB(0x0056a6fb);
    /* 0056a6fb: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a6ff: jge 0x56a714 */ if ((fS==fO)) goto L_0056a714;
L_0056a701:; BB(0x0056a701);
    /* 0056a701: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a704: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a707: mov dword ptr [edx + ecx*4 + 0x2e8], 0 */ W32((u32)(r_edx+r_ecx*4+0x2e8u), 0x0u);
    /* 0056a712: jmp 0x56a6f2 */ goto L_0056a6f2;
L_0056a714:; BB(0x0056a714);
    /* 0056a714: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a717: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a71a: ret  */ FN_RET(0x0056a6e0); r_esp += 4; return;
}

void f_0056a720(void) /* sub_56A720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a720);
    /* 0056a720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a721: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a723: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a726: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056a729: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a730: jmp 0x56a73b */ goto L_0056a73b;
L_0056a732:; BB(0x0056a732);
    /* 0056a732: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a735: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a738: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056a73b:; BB(0x0056a73b);
    /* 0056a73b: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a73f: jge 0x56a79a */ if ((fS==fO)) goto L_0056a79a;
L_0056a741:; BB(0x0056a741);
    /* 0056a741: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a744: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a747: cmp dword ptr [edx + ecx*4 + 0x2e8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a74f: je 0x56a798 */ if (fZ) goto L_0056a798;
L_0056a751:; BB(0x0056a751);
    /* 0056a751: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a754: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a757: mov edx, dword ptr [ecx + eax*4 + 0x2e8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x2e8u));
    /* 0056a75e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0056a761: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a764: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056a767: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a76b: je 0x56a780 */ if (fZ) goto L_0056a780;
L_0056a76d:; BB(0x0056a76d);
    /* 0056a76d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a76f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a772: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056a774: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a777: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056a779: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56a77bu); call_ind(t); }
    /* 0056a77b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056a77e: jmp 0x56a787 */ goto L_0056a787;
L_0056a780:; BB(0x0056a780);
    /* 0056a780: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0056a787:; BB(0x0056a787);
    /* 0056a787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a78a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a78d: mov dword ptr [edx + ecx*4 + 0x2e8], 0 */ W32((u32)(r_edx+r_ecx*4+0x2e8u), 0x0u);
L_0056a798:; BB(0x0056a798);
    /* 0056a798: jmp 0x56a732 */ goto L_0056a732;
L_0056a79a:; BB(0x0056a79a);
    /* 0056a79a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a79c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a79d: ret  */ FN_RET(0x0056a720); r_esp += 4; return;
}

void f_0056a7a0(void) /* sub_56A7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a7a0);
    /* 0056a7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056a7a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a7aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056a7ad: mov dword ptr [eax + 0x2e0], ecx */ W32((u32)(r_eax+0x2e0u), r_ecx);
    /* 0056a7b3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056a7b6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056a7b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a7ba: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056a7c0: call 0x5d0a80 */ r_esp -= 4; W32(r_esp, 0x56a7c5u); f_005d0a80();
    /* 0056a7c5: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0056a7c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a7cb: je 0x56a7f8 */ if (fZ) goto L_0056a7f8;
L_0056a7cd:; BB(0x0056a7cd);
    /* 0056a7cd: cmp dword ptr [0x793440], 0 */ {  u32 a = R32((u32)(0x793440u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a7d4: je 0x56a7f8 */ if (fZ) goto L_0056a7f8;
L_0056a7d6:; BB(0x0056a7d6);
    /* 0056a7d6: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056a7dc: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 0056a7e2: call 0x563fb0 */ r_esp -= 4; W32(r_esp, 0x56a7e7u); f_00563fb0();
    /* 0056a7e7: mov edx, dword ptr [0x793440] */ r_edx = R32((u32)(0x793440u));
    /* 0056a7ed: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0056a7f3: call 0x564490 */ r_esp -= 4; W32(r_esp, 0x56a7f8u); f_00564490();
L_0056a7f8:; BB(0x0056a7f8);
    /* 0056a7f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a7fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a7fb: ret 8 */ FN_RET(0x0056a7a0); r_esp += 12; return;
}

void f_0056a800(void) /* sub_56A800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a800);
    /* 0056a800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a801: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a806: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056a809: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a810: jmp 0x56a81b */ goto L_0056a81b;
L_0056a812:; BB(0x0056a812);
    /* 0056a812: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a815: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a818: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056a81b:; BB(0x0056a81b);
    /* 0056a81b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a81f: jge 0x56a833 */ if ((fS==fO)) goto L_0056a833;
L_0056a821:; BB(0x0056a821);
    /* 0056a821: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a824: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a827: mov word ptr [edx + ecx*2 + 0x3ac], 0 */ W16((u32)(r_edx+r_ecx*2+0x3acu), 0x0u);
    /* 0056a831: jmp 0x56a812 */ goto L_0056a812;
L_0056a833:; BB(0x0056a833);
    /* 0056a833: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a835: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a837: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a83a: call 0x56a7a0 */ r_esp -= 4; W32(r_esp, 0x56a83fu); f_0056a7a0();
    /* 0056a83f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a842: call 0x56a860 */ r_esp -= 4; W32(r_esp, 0x56a847u); f_0056a860();
    /* 0056a847: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a84a: call 0x56a960 */ r_esp -= 4; W32(r_esp, 0x56a84fu); f_0056a960();
    /* 0056a84f: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a852: ret  */ FN_RET(0x0056a800); r_esp += 4; return;
}

void f_0056a860(void) /* sub_56A860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a860);
    /* 0056a860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a861: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a865: push 0x6a5cdf */ { u32 v = 0x6a5cdfu; r_esp -= 4; W32(r_esp, v); }
    /* 0056a86a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056a870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a871: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a874: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056a879: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056a87b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056a87c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056a87f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0056a885: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056a888: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056a88e: call 0x5687e0 */ r_esp -= 4; W32(r_esp, 0x56a893u); f_005687e0();
    /* 0056a893: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056a896: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0056a898: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0056a89a: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056a89d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056a8a0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056a8a7: jmp 0x56a8b2 */ goto L_0056a8b2;
L_0056a8a9:; BB(0x0056a8a9);
    /* 0056a8a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a8ac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056a8af: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0056a8b2:; BB(0x0056a8b2);
    /* 0056a8b2: cmp dword ptr [ebp - 0x10], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a8b6: jge 0x56a94c */ if ((fS==fO)) goto L_0056a94c;
L_0056a8bc:; BB(0x0056a8bc);
    /* 0056a8bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8be: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a8c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056a8c5: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56a8cau); f_0056b950();
    /* 0056a8ca: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056a8cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a8cf: jne 0x56a8d3 */ if (!fZ) goto L_0056a8d3;
L_0056a8d1:; BB(0x0056a8d1);
    /* 0056a8d1: jmp 0x56a8a9 */ goto L_0056a8a9;
L_0056a8d3:; BB(0x0056a8d3);
    /* 0056a8d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a8d6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056a8d9: cmp dword ptr [edx + ecx*4 + 0x2e8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a8e1: jne 0x56a931 */ if (!fZ) goto L_0056a931;
L_0056a8e3:; BB(0x0056a8e3);
    /* 0056a8e3: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a8e8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56a8edu); f_00686d82();
    /* 0056a8ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056a8f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056a8f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a8fa: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a8fe: je 0x56a90d */ if (fZ) goto L_0056a90d;
L_0056a900:; BB(0x0056a900);
    /* 0056a900: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056a903: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x56a908u); f_00642e10();
    /* 0056a908: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0056a90b: jmp 0x56a914 */ goto L_0056a914;
L_0056a90d:; BB(0x0056a90d);
    /* 0056a90d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0056a914:; BB(0x0056a914);
    /* 0056a914: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056a917: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056a91a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056a921: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a924: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056a927: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056a92a: mov dword ptr [edx + ecx*4 + 0x2e8], eax */ W32((u32)(r_edx+r_ecx*4+0x2e8u), r_eax);
L_0056a931:; BB(0x0056a931);
    /* 0056a931: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056a934: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a935: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056a938: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056a93b: mov ecx, dword ptr [eax + edx*4 + 0x2e8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2e8u));
    /* 0056a942: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x56a947u); f_00642e70();
    /* 0056a947: jmp 0x56a8a9 */ goto L_0056a8a9;
L_0056a94c:; BB(0x0056a94c);
    /* 0056a94c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a94f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056a956: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056a957: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a959: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a95a: ret  */ FN_RET(0x0056a860); r_esp += 4; return;
}

void f_0056a960(void) /* sub_56A960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a960);
    /* 0056a960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a961: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056a969: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a970: jmp 0x56a97b */ goto L_0056a97b;
L_0056a972:; BB(0x0056a972);
    /* 0056a972: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a975: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a978: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056a97b:; BB(0x0056a97b);
    /* 0056a97b: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a97f: jge 0x56a9b0 */ if ((fS==fO)) goto L_0056a9b0;
L_0056a981:; BB(0x0056a981);
    /* 0056a981: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a983: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a986: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a987: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a98a: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56a98fu); f_0056b950();
    /* 0056a98f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056a992: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a994: jne 0x56a998 */ if (!fZ) goto L_0056a998;
L_0056a996:; BB(0x0056a996);
    /* 0056a996: jmp 0x56a972 */ goto L_0056a972;
L_0056a998:; BB(0x0056a998);
    /* 0056a998: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a99a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a99c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a99f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056a9a2: mov ecx, dword ptr [ecx + eax*4 + 0x2e8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x2e8u));
    /* 0056a9a9: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x56a9aeu); f_006437d0();
    /* 0056a9ae: jmp 0x56a972 */ goto L_0056a972;
L_0056a9b0:; BB(0x0056a9b0);
    /* 0056a9b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0056a9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056a9b3: ret  */ FN_RET(0x0056a960); r_esp += 4; return;
}

void f_0056a9c0(void) /* sub_56A9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056a9c0);
    /* 0056a9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056a9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056a9c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056a9c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056a9c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056a9d0: jmp 0x56a9db */ goto L_0056a9db;
L_0056a9d2:; BB(0x0056a9d2);
    /* 0056a9d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a9d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056a9d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056a9db:; BB(0x0056a9db);
    /* 0056a9db: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056a9df: jge 0x56aa3d */ if ((fS==fO)) goto L_0056aa3d;
L_0056a9e1:; BB(0x0056a9e1);
    /* 0056a9e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056a9e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056a9e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056a9e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056a9ea: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56a9efu); f_0056b950();
    /* 0056a9ef: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056a9f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056a9f4: jne 0x56a9f8 */ if (!fZ) goto L_0056a9f8;
L_0056a9f6:; BB(0x0056a9f6);
    /* 0056a9f6: jmp 0x56a9d2 */ goto L_0056a9d2;
L_0056a9f8:; BB(0x0056a9f8);
    /* 0056a9f8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056a9ff: jmp 0x56aa0a */ goto L_0056aa0a;
L_0056aa01:; BB(0x0056aa01);
    /* 0056aa01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056aa04: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056aa07: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056aa0a:; BB(0x0056aa0a);
    /* 0056aa0a: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aa0e: jge 0x56aa3b */ if ((fS==fO)) goto L_0056aa3b;
L_0056aa10:; BB(0x0056aa10);
    /* 0056aa10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aa13: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056aa16: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056aa19: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056aa20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056aa23: mov word ptr [eax + ecx*2], 0 */ W16((u32)(r_eax+r_ecx*2), 0x0u);
    /* 0056aa29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aa2c: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056aa2f: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056aa32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056aa35: mov byte ptr [edx + eax], 0 */ W8((u32)(r_edx+r_eax), 0x0u);
    /* 0056aa39: jmp 0x56aa01 */ goto L_0056aa01;
L_0056aa3b:; BB(0x0056aa3b);
    /* 0056aa3b: jmp 0x56a9d2 */ goto L_0056a9d2;
L_0056aa3d:; BB(0x0056aa3d);
    /* 0056aa3d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056aa3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056aa40: ret  */ FN_RET(0x0056a9c0); r_esp += 4; return;
}

void f_0056aa50(void) /* sub_56AA50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056aa50);
    /* 0056aa50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056aa51: mov ebp, esp */ r_ebp = r_esp;
    /* 0056aa53: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056aa56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056aa59: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 0056aa5e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0056aa61: call 0x56b910 */ r_esp -= 4; W32(r_esp, 0x56aa66u); f_0056b910();
    /* 0056aa66: mov ecx, dword ptr [0x79343c] */ r_ecx = R32((u32)(0x79343cu));
    /* 0056aa6c: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0056aa6f: mov dword ptr [edx + 0x2e4], eax */ W32((u32)(r_edx+0x2e4u), r_eax);
    /* 0056aa75: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056aa7c: jmp 0x56aa87 */ goto L_0056aa87;
L_0056aa7e:; BB(0x0056aa7e);
    /* 0056aa7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aa81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056aa84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056aa87:; BB(0x0056aa87);
    /* 0056aa87: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aa8b: jge 0x56aa9f */ if ((fS==fO)) goto L_0056aa9f;
L_0056aa8d:; BB(0x0056aa8d);
    /* 0056aa8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aa90: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056aa93: mov word ptr [edx + ecx*2 + 0x3ac], 0 */ W16((u32)(r_edx+r_ecx*2+0x3acu), 0x0u);
    /* 0056aa9d: jmp 0x56aa7e */ goto L_0056aa7e;
L_0056aa9f:; BB(0x0056aa9f);
    /* 0056aa9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056aaa6: jmp 0x56aab1 */ goto L_0056aab1;
L_0056aaa8:; BB(0x0056aaa8);
    /* 0056aaa8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aaab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056aaae: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056aab1:; BB(0x0056aab1);
    /* 0056aab1: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aab5: jge 0x56ab15 */ if ((fS==fO)) goto L_0056ab15;
L_0056aab7:; BB(0x0056aab7);
    /* 0056aab7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056aab9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aabc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056aabd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056aac0: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56aac5u); f_0056b950();
    /* 0056aac5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056aac8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aaca: jne 0x56aace */ if (!fZ) goto L_0056aace;
L_0056aacc:; BB(0x0056aacc);
    /* 0056aacc: jmp 0x56aaa8 */ goto L_0056aaa8;
L_0056aace:; BB(0x0056aace);
    /* 0056aace: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0056aad5: jmp 0x56aae0 */ goto L_0056aae0;
L_0056aad7:; BB(0x0056aad7);
    /* 0056aad7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056aada: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056aadd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0056aae0:; BB(0x0056aae0);
    /* 0056aae0: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aae4: jge 0x56ab13 */ if ((fS==fO)) goto L_0056ab13;
L_0056aae6:; BB(0x0056aae6);
    /* 0056aae6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aae9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056aaec: mov ecx, dword ptr [edx + ecx*4 + 0x2e8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2e8u));
    /* 0056aaf3: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x56aaf8u); f_006436c0();
    /* 0056aaf8: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0056aafc: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056ab00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056ab04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ab08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ab0c: call 0x56b460 */ r_esp -= 4; W32(r_esp, 0x56ab11u); f_0056b460();
    /* 0056ab11: jmp 0x56aad7 */ goto L_0056aad7;
L_0056ab13:; BB(0x0056ab13);
    /* 0056ab13: jmp 0x56aaa8 */ goto L_0056aaa8;
L_0056ab15:; BB(0x0056ab15);
    /* 0056ab15: push 0x6ca230 */ { u32 v = 0x6ca230u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab1a: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x56ab1fu); f_0062fde0();
    /* 0056ab1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ab22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056ab25: call 0x56b260 */ r_esp -= 4; W32(r_esp, 0x56ab2au); f_0056b260();
    /* 0056ab2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ab2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ab2d: ret  */ FN_RET(0x0056aa50); r_esp += 4; return;
}

void f_0056ab30(void) /* sub_56AB30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ab30);
    /* 0056ab30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab31: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ab33: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ab36: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0056ab39: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056ab3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab3e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56ab43u); f_00641280();
    /* 0056ab43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ab46: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056ab49: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0056ab4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab4e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x56ab53u); f_00641290();
    /* 0056ab53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ab56: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056ab59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ab60: jmp 0x56ab6b */ goto L_0056ab6b;
L_0056ab62:; BB(0x0056ab62);
    /* 0056ab62: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ab65: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056ab68: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056ab6b:; BB(0x0056ab6b);
    /* 0056ab6b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ab6f: jge 0x56abd2 */ if ((fS==fO)) goto L_0056abd2;
L_0056ab71:; BB(0x0056ab71);
    /* 0056ab71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ab74: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ab77: movzx edx, word ptr [ecx + eax*2 + 0x3ac] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x3acu));
    /* 0056ab7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ab81: jne 0x56ab85 */ if (!fZ) goto L_0056ab85;
L_0056ab83:; BB(0x0056ab83);
    /* 0056ab83: jmp 0x56ab62 */ goto L_0056ab62;
L_0056ab85:; BB(0x0056ab85);
    /* 0056ab85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ab88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ab8b: mov dx, word ptr [ecx + eax*2 + 0x3ac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x3acu))) & 0xffffu);
    /* 0056ab93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ab94: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56ab99u); f_00641280();
    /* 0056ab99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ab9c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0056ab9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aba2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056aba5: mov dx, word ptr [ecx + eax*2 + 0x3ac] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x3acu))) & 0xffffu);
    /* 0056abad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056abae: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x56abb3u); f_00641290();
    /* 0056abb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056abb6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056abb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056abbc: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056abbf: jne 0x56abd0 */ if (!fZ) goto L_0056abd0;
L_0056abc1:; BB(0x0056abc1);
    /* 0056abc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056abc4: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056abc7: jne 0x56abd0 */ if (!fZ) goto L_0056abd0;
L_0056abc9:; BB(0x0056abc9);
    /* 0056abc9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0056abcb: jmp 0x56ac68 */ goto L_0056ac68;
L_0056abd0:; BB(0x0056abd0);
    /* 0056abd0: jmp 0x56ab62 */ goto L_0056ab62;
L_0056abd2:; BB(0x0056abd2);
    /* 0056abd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056abd9: jmp 0x56abe4 */ goto L_0056abe4;
L_0056abdb:; BB(0x0056abdb);
    /* 0056abdb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056abde: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056abe1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056abe4:; BB(0x0056abe4);
    /* 0056abe4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056abe8: jge 0x56ac66 */ if ((fS==fO)) goto L_0056ac66;
L_0056abea:; BB(0x0056abea);
    /* 0056abea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056abed: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056abf0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056abf3: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056abfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056abfd: movzx ecx, word ptr [edx + eax*2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*2));
    /* 0056ac01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ac03: jne 0x56ac07 */ if (!fZ) goto L_0056ac07;
L_0056ac05:; BB(0x0056ac05);
    /* 0056ac05: jmp 0x56abdb */ goto L_0056abdb;
L_0056ac07:; BB(0x0056ac07);
    /* 0056ac07: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056ac0a: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056ac0d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ac10: lea ecx, [eax + edx + 0xf6] */ r_ecx = (u32)(r_eax+r_edx+0xf6u);
    /* 0056ac17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ac1a: mov ax, word ptr [ecx + edx*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2))) & 0xffffu);
    /* 0056ac1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac1f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56ac24u); f_00641280();
    /* 0056ac24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ac27: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0056ac2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056ac2d: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056ac30: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056ac33: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056ac3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ac3d: mov dx, word ptr [eax + ecx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 0056ac41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac42: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x56ac47u); f_00641290();
    /* 0056ac47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056ac4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056ac4d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056ac50: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ac53: jne 0x56ac61 */ if (!fZ) goto L_0056ac61;
L_0056ac55:; BB(0x0056ac55);
    /* 0056ac55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056ac58: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ac5b: jne 0x56ac61 */ if (!fZ) goto L_0056ac61;
L_0056ac5d:; BB(0x0056ac5d);
    /* 0056ac5d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0056ac5f: jmp 0x56ac68 */ goto L_0056ac68;
L_0056ac61:; BB(0x0056ac61);
    /* 0056ac61: jmp 0x56abdb */ goto L_0056abdb;
L_0056ac66:; BB(0x0056ac66);
    /* 0056ac66: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0056ac68:; BB(0x0056ac68);
    /* 0056ac68: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ac6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ac6b: ret 8 */ FN_RET(0x0056ab30); r_esp += 12; return;
}

void f_0056ac70(void) /* sub_56AC70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ac70);
    /* 0056ac70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac71: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ac73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ac76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056ac79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ac80: jmp 0x56ac8b */ goto L_0056ac8b;
L_0056ac82:; BB(0x0056ac82);
    /* 0056ac82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ac85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056ac88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056ac8b:; BB(0x0056ac8b);
    /* 0056ac8b: cmp dword ptr [ebp - 4], 0x31 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ac8f: jge 0x56acd7 */ if ((fS==fO)) goto L_0056acd7;
L_0056ac91:; BB(0x0056ac91);
    /* 0056ac91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ac96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ac97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ac9a: call 0x56b950 */ r_esp -= 4; W32(r_esp, 0x56ac9fu); f_0056b950();
    /* 0056ac9f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056aca2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056aca4: jne 0x56aca8 */ if (!fZ) goto L_0056aca8;
L_0056aca6:; BB(0x0056aca6);
    /* 0056aca6: jmp 0x56ac82 */ goto L_0056ac82;
L_0056aca8:; BB(0x0056aca8);
    /* 0056aca8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056acab: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056acae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056acb1: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056acb8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056acbb: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0056acbf: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 0056acc3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056acc6: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056acc9: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056accc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0056accf: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0056acd2: mov byte ptr [edx + eax], cl */ W8((u32)(r_edx+r_eax), (u8)r_ecx);
    /* 0056acd5: jmp 0x56ac82 */ goto L_0056ac82;
L_0056acd7:; BB(0x0056acd7);
    /* 0056acd7: mov esp, ebp */ r_esp = r_ebp;
    /* 0056acd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056acda: ret 0xc */ FN_RET(0x0056ac70); r_esp += 16; return;
}

void f_0056ace0(void) /* sub_56ACE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ace0);
    /* 0056ace0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ace1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ace3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ace6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0056ace9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056acf0: jmp 0x56acfb */ goto L_0056acfb;
L_0056acf2:; BB(0x0056acf2);
    /* 0056acf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056acf5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056acf8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056acfb:; BB(0x0056acfb);
    /* 0056acfb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056acff: jge 0x56ad13 */ if ((fS==fO)) goto L_0056ad13;
L_0056ad01:; BB(0x0056ad01);
    /* 0056ad01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ad04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ad07: mov word ptr [edx + ecx*2 + 0x3ac], 0 */ W16((u32)(r_edx+r_ecx*2+0x3acu), 0x0u);
    /* 0056ad11: jmp 0x56acf2 */ goto L_0056acf2;
L_0056ad13:; BB(0x0056ad13);
    /* 0056ad13: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ad1a: jmp 0x56ad25 */ goto L_0056ad25;
L_0056ad1c:; BB(0x0056ad1c);
    /* 0056ad1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ad1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056ad22: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056ad25:; BB(0x0056ad25);
    /* 0056ad25: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ad29: jge 0x56ad60 */ if ((fS==fO)) goto L_0056ad60;
L_0056ad2b:; BB(0x0056ad2b);
    /* 0056ad2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ad2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ad2f: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056ad35: call 0x561ed0 */ r_esp -= 4; W32(r_esp, 0x56ad3au); f_00561ed0();
    /* 0056ad3a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0056ad3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ad3f: je 0x56ad5e */ if (fZ) goto L_0056ad5e;
L_0056ad41:; BB(0x0056ad41);
    /* 0056ad41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ad44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ad45: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056ad4b: call 0x561f00 */ r_esp -= 4; W32(r_esp, 0x56ad50u); f_00561f00();
    /* 0056ad50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ad53: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056ad56: mov word ptr [edx + ecx*2 + 0x3ac], ax */ W16((u32)(r_edx+r_ecx*2+0x3acu), (u16)r_eax);
L_0056ad5e:; BB(0x0056ad5e);
    /* 0056ad5e: jmp 0x56ad1c */ goto L_0056ad1c;
L_0056ad60:; BB(0x0056ad60);
    /* 0056ad60: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ad62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ad63: ret  */ FN_RET(0x0056ace0); r_esp += 4; return;
}

void f_0056ad70(void) /* sub_56AD70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ad70);
    /* 0056ad70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ad71: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ad73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ad74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0056ad77: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0056ad7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ad7d: jne 0x56ad83 */ if (!fZ) goto L_0056ad83;
L_0056ad7f:; BB(0x0056ad7f);
    /* 0056ad7f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0056ad81: jmp 0x56ad9d */ goto L_0056ad9d;
L_0056ad83:; BB(0x0056ad83);
    /* 0056ad83: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0056ad86: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056ad89: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056ad8c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0056ad8f: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 0056ad93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ad95: je 0x56ad9b */ if (fZ) goto L_0056ad9b;
L_0056ad97:; BB(0x0056ad97);
    /* 0056ad97: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0056ad99: jmp 0x56ad9d */ goto L_0056ad9d;
L_0056ad9b:; BB(0x0056ad9b);
    /* 0056ad9b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0056ad9d:; BB(0x0056ad9d);
    /* 0056ad9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ad9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ada0: ret 0xc */ FN_RET(0x0056ad70); r_esp += 16; return;
}

void f_0056adb0(void) /* sub_56ADB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056adb0);
    /* 0056adb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056adb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056adb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056adb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0056adb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056adc0: jmp 0x56adcb */ goto L_0056adcb;
L_0056adc2:; BB(0x0056adc2);
    /* 0056adc2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056adc5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056adc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056adcb:; BB(0x0056adcb);
    /* 0056adcb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056adcf: jge 0x56addf */ if ((fS==fO)) goto L_0056addf;
L_0056add1:; BB(0x0056add1);
    /* 0056add1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056add4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056add7: mov word ptr [edx + ecx*2], 0 */ W16((u32)(r_edx+r_ecx*2), 0x0u);
    /* 0056addd: jmp 0x56adc2 */ goto L_0056adc2;
L_0056addf:; BB(0x0056addf);
    /* 0056addf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ade6: jmp 0x56adf1 */ goto L_0056adf1;
L_0056ade8:; BB(0x0056ade8);
    /* 0056ade8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056adeb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056adee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056adf1:; BB(0x0056adf1);
    /* 0056adf1: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056adf5: jge 0x56ae3e */ if ((fS==fO)) goto L_0056ae3e;
L_0056adf7:; BB(0x0056adf7);
    /* 0056adf7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056adfa: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056adfd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056ae00: lea eax, [edx + ecx + 0xf6] */ r_eax = (u32)(r_edx+r_ecx+0xf6u);
    /* 0056ae07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ae0a: mov dx, word ptr [eax + ecx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_ecx*2))) & 0xffffu);
    /* 0056ae0e: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0056ae12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ae15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ae16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056ae19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ae1a: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056ae1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ae1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056ae22: call 0x56ad70 */ r_esp -= 4; W32(r_esp, 0x56ae27u); f_0056ad70();
    /* 0056ae27: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0056ae2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ae2c: jne 0x56ae3c */ if (!fZ) goto L_0056ae3c;
L_0056ae2e:; BB(0x0056ae2e);
    /* 0056ae2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ae31: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056ae34: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056ae38: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
L_0056ae3c:; BB(0x0056ae3c);
    /* 0056ae3c: jmp 0x56ade8 */ goto L_0056ade8;
L_0056ae3e:; BB(0x0056ae3e);
    /* 0056ae3e: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ae40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ae41: ret 8 */ FN_RET(0x0056adb0); r_esp += 12; return;
}

void f_0056ae50(void) /* sub_56AE50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056ae50);
    /* 0056ae50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ae51: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ae53: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ae56: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056ae5b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056ae5d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056ae60: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0056ae63: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0056ae66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ae67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056ae6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ae6b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056ae6e: call 0x56adb0 */ r_esp -= 4; W32(r_esp, 0x56ae73u); f_0056adb0();
    /* 0056ae73: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ae7a: jmp 0x56ae85 */ goto L_0056ae85;
L_0056ae7c:; BB(0x0056ae7c);
    /* 0056ae7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ae7f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056ae82: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056ae85:; BB(0x0056ae85);
    /* 0056ae85: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056ae89: jge 0x56aeb1 */ if ((fS==fO)) goto L_0056aeb1;
L_0056ae8b:; BB(0x0056ae8b);
    /* 0056ae8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056ae8e: mov cx, word ptr [ebp + eax*2 - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+r_eax*2+0xffffffecu))) & 0xffffu);
    /* 0056ae93: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
    /* 0056ae97: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0056ae9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056ae9d: je 0x56aeaf */ if (fZ) goto L_0056aeaf;
L_0056ae9f:; BB(0x0056ae9f);
    /* 0056ae9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056aea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056aea3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056aea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056aea7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056aeaa: call 0x56b490 */ r_esp -= 4; W32(r_esp, 0x56aeafu); f_0056b490();
L_0056aeaf:; BB(0x0056aeaf);
    /* 0056aeaf: jmp 0x56ae7c */ goto L_0056ae7c;
L_0056aeb1:; BB(0x0056aeb1);
    /* 0056aeb1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056aeb4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056aeb6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x56aebbu); f_00686d72();
    /* 0056aebb: mov esp, ebp */ r_esp = r_ebp;
    /* 0056aebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056aebe: ret 4 */ FN_RET(0x0056ae50); r_esp += 8; return;
}

void f_0056afb0(void) /* sub_56AFB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0056afb0);
    /* 0056afb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056afb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056afb3: sub esp, 0x4d0 */ {  u32 a = r_esp; u32 b = 0x4d0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056afb9: mov dword ptr [ebp - 0x4d0], ecx */ W32((u32)(r_ebp+0xfffffb30u), r_ecx);
    /* 0056afbf: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056afc6: jmp 0x56afd1 */ goto L_0056afd1;
L_0056afc8:; BB(0x0056afc8);
    /* 0056afc8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056afcb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056afce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056afd1:; BB(0x0056afd1);
    /* 0056afd1: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056afd5: jge 0x56b019 */ if ((fS==fO)) goto L_0056b019;
L_0056afd7:; BB(0x0056afd7);
    /* 0056afd7: mov dword ptr [ebp - 0x4cc], 0 */ W32((u32)(r_ebp+0xfffffb34u), 0x0u);
    /* 0056afe1: jmp 0x56aff2 */ goto L_0056aff2;
L_0056afe3:; BB(0x0056afe3);
    /* 0056afe3: mov ecx, dword ptr [ebp - 0x4cc] */ r_ecx = R32((u32)(r_ebp+0xfffffb34u));
    /* 0056afe9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0056afec: mov dword ptr [ebp - 0x4cc], ecx */ W32((u32)(r_ebp+0xfffffb34u), r_ecx);
L_0056aff2:; BB(0x0056aff2);
    /* 0056aff2: cmp dword ptr [ebp - 0x4cc], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xfffffb34u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056aff9: jge 0x56b017 */ if ((fS==fO)) goto L_0056b017;
L_0056affb:; BB(0x0056affb);
    /* 0056affb: mov edx, dword ptr [ebp - 0x4cc] */ r_edx = R32((u32)(r_ebp+0xfffffb34u));
    /* 0056b001: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b004: lea eax, [ebp + edx - 0x4c0] */ r_eax = (u32)(r_ebp+r_edx+0xfffffb40u);
    /* 0056b00b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b00e: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 0056b015: jmp 0x56afe3 */ goto L_0056afe3;
L_0056b017:; BB(0x0056b017);
    /* 0056b017: jmp 0x56afc8 */ goto L_0056afc8;
L_0056b019:; BB(0x0056b019);
    /* 0056b019: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056b020: jmp 0x56b02b */ goto L_0056b02b;
L_0056b022:; BB(0x0056b022);
    /* 0056b022: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b025: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056b028: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0056b02b:; BB(0x0056b02b);
    /* 0056b02b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b02f: jge 0x56b123 */ if ((fS==fO)) goto L_0056b123;
L_0056b035:; BB(0x0056b035);
    /* 0056b035: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056b038: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b03b: mov ecx, dword ptr [ebp - 0x4d0] */ r_ecx = R32((u32)(r_ebp+0xfffffb30u));
    /* 0056b041: lea edx, [ecx + eax + 0xf6] */ r_edx = (u32)(r_ecx+r_eax+0xf6u);
    /* 0056b048: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056b04b: mov cx, word ptr [edx + eax*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0056b04f: mov word ptr [ebp - 0x4c8], cx */ W16((u32)(r_ebp+0xfffffb38u), (u16)r_ecx);
    /* 0056b056: movzx edx, word ptr [ebp - 0x4c8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffb38u));
    /* 0056b05d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056b05f: jne 0x56b063 */ if (!fZ) goto L_0056b063;
L_0056b061:; BB(0x0056b061);
    /* 0056b061: jmp 0x56b022 */ goto L_0056b022;
L_0056b063:; BB(0x0056b063);
    /* 0056b063: mov ax, word ptr [ebp - 0x4c8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffb38u))) & 0xffffu);
    /* 0056b06a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056b06b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x56b070u); f_00641280();
    /* 0056b070: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b073: mov dword ptr [ebp - 0x4c4], eax */ W32((u32)(r_ebp+0xfffffb3cu), r_eax);
    /* 0056b079: mov cx, word ptr [ebp - 0x4c8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffb38u))) & 0xffffu);
    /* 0056b080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056b081: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x56b086u); f_00641290();
    /* 0056b086: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056b089: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0056b08c: cmp dword ptr [ebp - 0x4c4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffb3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b093: jge 0x56b09f */ if ((fS==fO)) goto L_0056b09f;
L_0056b095:; BB(0x0056b095);
    /* 0056b095: mov dword ptr [ebp - 0x4c4], 0 */ W32((u32)(r_ebp+0xfffffb3cu), 0x0u);
L_0056b09f:; BB(0x0056b09f);
    /* 0056b09f: cmp dword ptr [ebp - 0x4c4], 0x3b */ {  u32 a = R32((u32)(r_ebp+0xfffffb3cu)); u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b0a6: jle 0x56b0b2 */ if ((fZ||fS!=fO)) goto L_0056b0b2;
L_0056b0a8:; BB(0x0056b0a8);
    /* 0056b0a8: mov dword ptr [ebp - 0x4c4], 0x3b */ W32((u32)(r_ebp+0xfffffb3cu), 0x3bu);
L_0056b0b2:; BB(0x0056b0b2);
    /* 0056b0b2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b0b6: jge 0x56b0bf */ if ((fS==fO)) goto L_0056b0bf;
L_0056b0b8:; BB(0x0056b0b8);
    /* 0056b0b8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0056b0bf:; BB(0x0056b0bf);
    /* 0056b0bf: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b0c3: jle 0x56b0cc */ if ((fZ||fS!=fO)) goto L_0056b0cc;
L_0056b0c5:; BB(0x0056b0c5);
    /* 0056b0c5: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
L_0056b0cc:; BB(0x0056b0cc);
    /* 0056b0cc: mov edx, dword ptr [ebp - 0x4c4] */ r_edx = R32((u32)(r_ebp+0xfffffb3cu));
    /* 0056b0d2: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b0d5: lea eax, [ebp + edx - 0x4c0] */ r_eax = (u32)(r_ebp+r_edx+0xfffffb40u);
    /* 0056b0dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b0df: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0056b0e2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0056b0e5: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056b0e9: jl 0x56b0ef */ if ((fS!=fO)) goto L_0056b0ef;
L_0056b0eb:; BB(0x0056b0eb);
    /* 0056b0eb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0056b0ed: jmp 0x56b125 */ goto L_0056b125;
L_0056b0ef:; BB(0x0056b0ef);
    /* 0056b0ef: mov eax, dword ptr [ebp - 0x4c4] */ r_eax = R32((u32)(r_ebp+0xfffffb3cu));
    /* 0056b0f5: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b0f8: lea ecx, [ebp + eax - 0x4c0] */ r_ecx = (u32)(r_ebp+r_eax+0xfffffb40u);
    /* 0056b0ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b102: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0056b105: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056b108: mov ecx, dword ptr [ebp - 0x4c4] */ r_ecx = R32((u32)(r_ebp+0xfffffb3cu));
    /* 0056b10e: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056b111: lea edx, [ebp + ecx - 0x4c0] */ r_edx = (u32)(r_ebp+r_ecx+0xfffffb40u);
    /* 0056b118: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056b11b: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0056b11e: jmp 0x56b022 */ goto L_0056b022;
L_0056b123:; BB(0x0056b123);
    /* 0056b123: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0056b125:; BB(0x0056b125);
    /* 0056b125: mov esp, ebp */ r_esp = r_ebp;
    /* 0056b127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056b128: ret 4 */ FN_RET(0x0056afb0); r_esp += 8; return;
}

