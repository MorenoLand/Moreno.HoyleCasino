#include "protos.h"

void f_00668620(void) /* savegame::func_00668620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00668620);
    /* 00668620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668621: mov ebp, esp */ r_ebp = r_esp;
    /* 00668623: sub esp, 0x48c */ {  u32 a = r_esp; u32 b = 0x48cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668629: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066862e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00668630: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00668633: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668634: mov dword ptr [ebp - 0x488], ecx */ W32((u32)(r_ebp+0xfffffb78u), r_ecx);
    /* 0066863a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0066863f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00668641: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668647: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0066864d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66864fu); call_ind(t); }
    /* 0066864f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00668652: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668654: jne 0x668688 */ if (!fZ) goto L_00668688;
L_00668656:; BB(0x00668656);
    /* 00668656: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668658: push 0x6dfd28 */ { u32 v = 0x6dfd28u; r_esp -= 4; W32(r_esp, v); }
    /* 0066865d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x668662u); f_00630f40();
    /* 00668662: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668665: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668666: push 0x6dfd0c */ { u32 v = 0x6dfd0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066866b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x668670u); f_00630f40();
    /* 00668670: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668674: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x668679u); f_0062ff10();
    /* 00668679: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066867c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066867f: je 0x668688 */ if (fZ) goto L_00668688;
L_00668681:; BB(0x00668681);
    /* 00668681: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00668683: jmp 0x668d1f */ goto L_00668d1f;
L_00668688:; BB(0x00668688);
    /* 00668688: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0066868f: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668694: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668696: lea edx, [ebp - 0x407] */ r_edx = (u32)(r_ebp+0xfffffbf9u);
    /* 0066869c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066869d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6686a2u); f_00686fa2();
    /* 006686a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006686a5: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 006686ab: call 0x673cb0 */ r_esp -= 4; W32(r_esp, 0x6686b0u); f_00673cb0();
    /* 006686b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006686b1: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 006686b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006686b8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6686bdu); f_00686d8e();
    /* 006686bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006686c0: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006686c5: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 006686cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006686cc: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6686d1u); f_005ea9c0();
    /* 006686d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006686d4: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 006686da: cmp dword ptr [ebp - 0x41c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006686e1: jne 0x6686ea */ if (!fZ) goto L_006686ea;
L_006686e3:; BB(0x006686e3);
    /* 006686e3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006686e5: jmp 0x668d1f */ goto L_00668d1f;
L_006686ea:; BB(0x006686ea);
    /* 006686ea: mov dword ptr [ebp - 0x434], 0x21496 */ W32((u32)(r_ebp+0xfffffbccu), 0x21496u);
    /* 006686f4: mov edx, dword ptr [ebp - 0x434] */ r_edx = R32((u32)(r_ebp+0xfffffbccu));
    /* 006686fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006686fb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x668700u); f_00686d82();
    /* 00668700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668703: mov dword ptr [ebp - 0x438], eax */ W32((u32)(r_ebp+0xfffffbc8u), r_eax);
    /* 00668709: cmp dword ptr [ebp - 0x438], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668710: je 0x668738 */ if (fZ) goto L_00668738;
L_00668712:; BB(0x00668712);
    /* 00668712: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 00668718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668719: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066871b: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00668721: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668722: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x668727u); f_00686fa2();
    /* 00668727: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066872a: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00668730: mov dword ptr [ebp - 0x48c], edx */ W32((u32)(r_ebp+0xfffffb74u), r_edx);
    /* 00668736: jmp 0x668742 */ goto L_00668742;
L_00668738:; BB(0x00668738);
    /* 00668738: mov dword ptr [ebp - 0x48c], 0 */ W32((u32)(r_ebp+0xfffffb74u), 0x0u);
L_00668742:; BB(0x00668742);
    /* 00668742: mov eax, dword ptr [ebp - 0x48c] */ r_eax = R32((u32)(r_ebp+0xfffffb74u));
    /* 00668748: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 0066874e: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668754: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668755: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668757: push 0x21496 */ { u32 v = 0x21496u; r_esp -= 4; W32(r_esp, v); }
    /* 0066875c: mov edx, dword ptr [ebp - 0x430] */ r_edx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00668762: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668763: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668769u); call_ind(t); }
    /* 00668769: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066876c: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00668772: movsx esi, byte ptr [eax] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00668775: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066877b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x668780u); f_005f3bf0();
    /* 00668780: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668782: je 0x6687a6 */ if (fZ) goto L_006687a6;
L_00668784:; BB(0x00668784);
    /* 00668784: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00668786: jne 0x66879f */ if (!fZ) goto L_0066879f;
L_00668788:; BB(0x00668788);
    /* 00668788: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066878d: push 0x6dfcf0 */ { u32 v = 0x6dfcf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668792: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00668797: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66879cu); f_005e9f20();
    /* 0066879c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066879f:; BB(0x0066879f);
    /* 0066879f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006687a1: jmp 0x668d1f */ goto L_00668d1f;
L_006687a6:; BB(0x006687a6);
    /* 006687a6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006687ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006687ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006687b3: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006687b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6687bbu); call_ind(t); }
    /* 006687bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006687bd: mov edx, 0x4c */ r_edx = 0x4cu;
    /* 006687c2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006687c4: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 006687c7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006687c9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006687cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006687cc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6687d1u); f_00686d82();
    /* 006687d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006687d4: mov dword ptr [ebp - 0x43c], eax */ W32((u32)(r_ebp+0xfffffbc4u), r_eax);
    /* 006687da: mov eax, dword ptr [ebp - 0x43c] */ r_eax = R32((u32)(r_ebp+0xfffffbc4u));
    /* 006687e0: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 006687e6: mov dword ptr [ebp - 0x414], 0 */ W32((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 006687f0: jmp 0x668801 */ goto L_00668801;
L_006687f2:; BB(0x006687f2);
    /* 006687f2: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 006687f8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006687fb: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
L_00668801:; BB(0x00668801);
    /* 00668801: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00668807: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00668809: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066880f: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00668815: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668817u); call_ind(t); }
    /* 00668817: cmp dword ptr [ebp - 0x414], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066881d: jge 0x668845 */ if ((fS==fO)) goto L_00668845;
L_0066881f:; BB(0x0066881f);
    /* 0066881f: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668826: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668828: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066882a: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00668830: imul ecx, ecx, 0x4c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00668833: add ecx, dword ptr [ebp - 0x42c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00668839: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066883a: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668840u); call_ind(t); }
    /* 00668840: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668843: jmp 0x6687f2 */ goto L_006687f2;
L_00668845:; BB(0x00668845);
    /* 00668845: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066884b: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x668850u); f_005f3bf0();
    /* 00668850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668851: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00668857: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00668859: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066885f: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 00668865: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668867u); call_ind(t); }
    /* 00668867: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 0066886d: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668874: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668876: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668878: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 0066887e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066887f: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668885u); call_ind(t); }
    /* 00668885: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668888: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0066888e: cmp edx, dword ptr [ebp - 0x40c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbf4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668894: je 0x668909 */ if (fZ) goto L_00668909;
L_00668896:; BB(0x00668896);
    /* 00668896: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668898: push 0x6dfcdc */ { u32 v = 0x6dfcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066889d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6688a2u); f_00630f40();
    /* 006688a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006688a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006688a6: push 0x6dfcc0 */ { u32 v = 0x6dfcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006688ab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6688b0u); f_00630f40();
    /* 006688b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006688b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006688b4: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x6688b9u); f_0062ff10();
    /* 006688b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006688bc: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 006688c2: mov dword ptr [ebp - 0x440], eax */ W32((u32)(r_ebp+0xfffffbc0u), r_eax);
    /* 006688c8: mov ecx, dword ptr [ebp - 0x440] */ r_ecx = R32((u32)(r_ebp+0xfffffbc0u));
    /* 006688ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006688cf: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6688d4u); f_00686cae();
    /* 006688d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006688d7: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006688dd: mov dword ptr [ebp - 0x444], edx */ W32((u32)(r_ebp+0xfffffbbcu), r_edx);
    /* 006688e3: mov eax, dword ptr [ebp - 0x444] */ r_eax = R32((u32)(r_ebp+0xfffffbbcu));
    /* 006688e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006688ea: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6688efu); f_00686cae();
    /* 006688ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006688f2: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 006688f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006688f9: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6688ffu); call_ind(t); }
    /* 006688ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668902: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00668904: jmp 0x668d1f */ goto L_00668d1f;
L_00668909:; BB(0x00668909);
    /* 00668909: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0066890f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668910: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x668915u); f_00686d82();
    /* 00668915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668918: mov dword ptr [ebp - 0x448], eax */ W32((u32)(r_ebp+0xfffffbb8u), r_eax);
    /* 0066891e: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 00668924: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 0066892a: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668930: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668931: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668933: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00668939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066893a: mov eax, dword ptr [ebp - 0x428] */ r_eax = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668941: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668947u); call_ind(t); }
    /* 00668947: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066894a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668950: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00668952: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668958: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0066895e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x668960u); call_ind(t); }
    /* 00668960: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00668963: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668965: je 0x668a44 */ if (fZ) goto L_00668a44;
L_0066896b:; BB(0x0066896b);
    /* 0066896b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00668971: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00668973: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668979: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 0066897f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668981u); call_ind(t); }
    /* 00668981: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
    /* 00668987: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0066898d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066898e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668990: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668992: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 00668998: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668999: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x66899fu); call_ind(t); }
    /* 0066899f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006689a2: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 006689a8: cmp edx, dword ptr [ebp - 0x420] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006689ae: je 0x668a42 */ if (fZ) goto L_00668a42;
L_006689b4:; BB(0x006689b4);
    /* 006689b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006689b6: push 0x6dfcdc */ { u32 v = 0x6dfcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006689bb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6689c0u); f_00630f40();
    /* 006689c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006689c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006689c4: push 0x6dfcc0 */ { u32 v = 0x6dfcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006689c9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6689ceu); f_00630f40();
    /* 006689ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006689d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006689d2: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x6689d7u); f_0062ff10();
    /* 006689d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006689da: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 006689e0: mov dword ptr [ebp - 0x44c], eax */ W32((u32)(r_ebp+0xfffffbb4u), r_eax);
    /* 006689e6: mov ecx, dword ptr [ebp - 0x44c] */ r_ecx = R32((u32)(r_ebp+0xfffffbb4u));
    /* 006689ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006689ed: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6689f2u); f_00686cae();
    /* 006689f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006689f5: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006689fb: mov dword ptr [ebp - 0x450], edx */ W32((u32)(r_ebp+0xfffffbb0u), r_edx);
    /* 00668a01: mov eax, dword ptr [ebp - 0x450] */ r_eax = R32((u32)(r_ebp+0xfffffbb0u));
    /* 00668a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668a08: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668a0du); f_00686cae();
    /* 00668a0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668a10: mov ecx, dword ptr [ebp - 0x428] */ r_ecx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668a16: mov dword ptr [ebp - 0x454], ecx */ W32((u32)(r_ebp+0xfffffbacu), r_ecx);
    /* 00668a1c: mov edx, dword ptr [ebp - 0x454] */ r_edx = R32((u32)(r_ebp+0xfffffbacu));
    /* 00668a22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668a23: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668a28u); f_00686cae();
    /* 00668a28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668a2b: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668a31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668a32: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x668a38u); call_ind(t); }
    /* 00668a38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668a3b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00668a3d: jmp 0x668d1f */ goto L_00668d1f;
L_00668a42:; BB(0x00668a42);
    /* 00668a42: jmp 0x668a5f */ goto L_00668a5f;
L_00668a44:; BB(0x00668a44);
    /* 00668a44: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668a4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668a4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668a4d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00668a4f: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 00668a55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668a56: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668a5cu); call_ind(t); }
    /* 00668a5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00668a5f:; BB(0x00668a5f);
    /* 00668a5f: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00668a65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668a66: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x668a6bu); f_00686d82();
    /* 00668a6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668a6e: mov dword ptr [ebp - 0x458], eax */ W32((u32)(r_ebp+0xfffffba8u), r_eax);
    /* 00668a74: mov ecx, dword ptr [ebp - 0x458] */ r_ecx = R32((u32)(r_ebp+0xfffffba8u));
    /* 00668a7a: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 00668a80: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668a86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668a87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668a89: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00668a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668a90: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668a96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668a97: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668a9du); call_ind(t); }
    /* 00668a9d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668aa0: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00668aa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668aa7: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x668aadu); call_ind(t); }
    /* 00668aad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668ab0: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668ab7: mov ecx, dword ptr [ebp - 0x488] */ r_ecx = R32((u32)(r_ebp+0xfffffb78u));
    /* 00668abd: call 0x6693f0 */ r_esp -= 4; W32(r_esp, 0x668ac2u); f_006693f0();
    /* 00668ac2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00668ac5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668ac7: je 0x668bc0 */ if (fZ) goto L_00668bc0;
L_00668acd:; BB(0x00668acd);
    /* 00668acd: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668ad4: mov ecx, dword ptr [ebp - 0x488] */ r_ecx = R32((u32)(r_ebp+0xfffffb78u));
    /* 00668ada: call 0x669580 */ r_esp -= 4; W32(r_esp, 0x668adfu); f_00669580();
    /* 00668adf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00668ae2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668ae4: je 0x668b9a */ if (fZ) goto L_00668b9a;
L_00668aea:; BB(0x00668aea);
    /* 00668aea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668aec: push 0x6dfca8 */ { u32 v = 0x6dfca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00668af1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x668af6u); f_00630f40();
    /* 00668af6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668af9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668afa: push 0x6dfc88 */ { u32 v = 0x6dfc88u; r_esp -= 4; W32(r_esp, v); }
    /* 00668aff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x668b04u); f_00630f40();
    /* 00668b04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668b08: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x668b0du); f_0062ff10();
    /* 00668b0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b10: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00668b16: call 0x673cb0 */ r_esp -= 4; W32(r_esp, 0x668b1bu); f_00673cb0();
    /* 00668b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668b1c: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x668b22u); call_ind(t); }
    /* 00668b22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b25: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00668b2b: mov dword ptr [ebp - 0x45c], ecx */ W32((u32)(r_ebp+0xfffffba4u), r_ecx);
    /* 00668b31: mov edx, dword ptr [ebp - 0x45c] */ r_edx = R32((u32)(r_ebp+0xfffffba4u));
    /* 00668b37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668b38: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668b3du); f_00686cae();
    /* 00668b3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b40: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668b46: mov dword ptr [ebp - 0x460], eax */ W32((u32)(r_ebp+0xfffffba0u), r_eax);
    /* 00668b4c: mov ecx, dword ptr [ebp - 0x460] */ r_ecx = R32((u32)(r_ebp+0xfffffba0u));
    /* 00668b52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668b53: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668b58u); f_00686cae();
    /* 00668b58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b5b: mov edx, dword ptr [ebp - 0x428] */ r_edx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668b61: mov dword ptr [ebp - 0x464], edx */ W32((u32)(r_ebp+0xfffffb9cu), r_edx);
    /* 00668b67: mov eax, dword ptr [ebp - 0x464] */ r_eax = R32((u32)(r_ebp+0xfffffb9cu));
    /* 00668b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668b6e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668b73u); f_00686cae();
    /* 00668b73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b76: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668b7c: mov dword ptr [ebp - 0x468], ecx */ W32((u32)(r_ebp+0xfffffb98u), r_ecx);
    /* 00668b82: mov edx, dword ptr [ebp - 0x468] */ r_edx = R32((u32)(r_ebp+0xfffffb98u));
    /* 00668b88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668b89: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668b8eu); f_00686cae();
    /* 00668b8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668b91: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00668b93: jmp 0x668d1f */ goto L_00668d1f;
L_00668b9a:; BB(0x00668b9a);
    /* 00668b9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668b9c: push 0x6dfca8 */ { u32 v = 0x6dfca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00668ba1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x668ba6u); f_00630f40();
    /* 00668ba6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668baa: push 0x6dfc64 */ { u32 v = 0x6dfc64u; r_esp -= 4; W32(r_esp, v); }
    /* 00668baf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x668bb4u); f_00630f40();
    /* 00668bb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668bb8: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x668bbdu); f_0062ff10();
    /* 00668bbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00668bc0:; BB(0x00668bc0);
    /* 00668bc0: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00668bc6: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x668bcbu); f_005f87d0();
    /* 00668bcb: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668bd2: mov ecx, dword ptr [ebp - 0x488] */ r_ecx = R32((u32)(r_ebp+0xfffffb78u));
    /* 00668bd8: call 0x668fa0 */ r_esp -= 4; W32(r_esp, 0x668bddu); f_00668fa0();
    /* 00668bdd: mov ecx, dword ptr [ebp - 0x488] */ r_ecx = R32((u32)(r_ebp+0xfffffb78u));
    /* 00668be3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00668be6: mov dword ptr [ebp - 0x484], edx */ W32((u32)(r_ebp+0xfffffb7cu), r_edx);
    /* 00668bec: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00668bf2: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00668bf5: mov dword ptr [ebp - 0x480], ecx */ W32((u32)(r_ebp+0xfffffb80u), r_ecx);
    /* 00668bfb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668c01: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x668c06u); f_006375b0();
    /* 00668c06: mov dword ptr [ebp - 0x47c], eax */ W32((u32)(r_ebp+0xfffffb84u), r_eax);
    /* 00668c0c: mov ecx, dword ptr [ebp - 0x47c] */ r_ecx = R32((u32)(r_ebp+0xfffffb84u));
    /* 00668c12: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x668c17u); f_0063aac0();
    /* 00668c17: mov edx, dword ptr [ebp - 0x480] */ r_edx = R32((u32)(r_ebp+0xfffffb80u));
    /* 00668c1d: mov cl, byte ptr [ebp - 0x484] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffb7cu))) & 0xffu);
    /* 00668c23: mov byte ptr [eax + edx + 0x5d], cl */ W8((u32)(r_eax+r_edx+0x5du), (u8)r_ecx);
    /* 00668c27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c29: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668c2f: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x668c34u); f_00650550();
    /* 00668c34: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668c3a: call 0x636ee0 */ r_esp -= 4; W32(r_esp, 0x668c3fu); f_00636ee0();
    /* 00668c3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c41: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668c47: call 0x5f45d0 */ r_esp -= 4; W32(r_esp, 0x668c4cu); f_005f45d0();
    /* 00668c4c: mov edx, dword ptr [ebp - 0x428] */ r_edx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668c52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668c53: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668c59: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x668c5eu); f_005f3bf0();
    /* 00668c5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668c5f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00668c64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00668c66: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668c6c: mov eax, dword ptr [edx + 0x330] */ r_eax = R32((u32)(r_edx+0x330u));
    /* 00668c72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x668c74u); call_ind(t); }
    /* 00668c74: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668c7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668c7b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00668c81: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00668c83: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668c89: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 00668c8f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x668c91u); call_ind(t); }
    /* 00668c91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668c93: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00668c98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00668c9a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00668ca0: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 00668ca6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x668ca8u); call_ind(t); }
    /* 00668ca8: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00668cae: mov dword ptr [ebp - 0x46c], ecx */ W32((u32)(r_ebp+0xfffffb94u), r_ecx);
    /* 00668cb4: mov edx, dword ptr [ebp - 0x46c] */ r_edx = R32((u32)(r_ebp+0xfffffb94u));
    /* 00668cba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668cbb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668cc0u); f_00686cae();
    /* 00668cc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668cc3: mov eax, dword ptr [ebp - 0x42c] */ r_eax = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00668cc9: mov dword ptr [ebp - 0x470], eax */ W32((u32)(r_ebp+0xfffffb90u), r_eax);
    /* 00668ccf: mov ecx, dword ptr [ebp - 0x470] */ r_ecx = R32((u32)(r_ebp+0xfffffb90u));
    /* 00668cd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668cd6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668cdbu); f_00686cae();
    /* 00668cdb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668cde: mov edx, dword ptr [ebp - 0x428] */ r_edx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00668ce4: mov dword ptr [ebp - 0x474], edx */ W32((u32)(r_ebp+0xfffffb8cu), r_edx);
    /* 00668cea: mov eax, dword ptr [ebp - 0x474] */ r_eax = R32((u32)(r_ebp+0xfffffb8cu));
    /* 00668cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668cf1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668cf6u); f_00686cae();
    /* 00668cf6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668cf9: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00668cff: mov dword ptr [ebp - 0x478], ecx */ W32((u32)(r_ebp+0xfffffb88u), r_ecx);
    /* 00668d05: mov edx, dword ptr [ebp - 0x478] */ r_edx = R32((u32)(r_ebp+0xfffffb88u));
    /* 00668d0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d0c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x668d11u); f_00686cae();
    /* 00668d11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668d14: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00668d19: mov byte ptr [eax + 0x40], 1 */ W8((u32)(r_eax+0x40u), 0x1u);
    /* 00668d1d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00668d1f:; BB(0x00668d1f);
    /* 00668d1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668d20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668d23: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668d25: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x668d2au); f_00686d72();
    /* 00668d2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00668d2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668d2d: ret  */ FN_RET(0x00668620); r_esp += 4; return;
}

void f_00668d30(void) /* savegame::func_00668d30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00668d30);
    /* 00668d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00668d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00668d33: sub esp, 0x410 */ {  u32 a = r_esp; u32 b = 0x410u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00668d39: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00668d3e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00668d40: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00668d43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00668d44: mov dword ptr [ebp - 0x410], ecx */ W32((u32)(r_ebp+0xfffffbf0u), r_ecx);
    /* 00668d4a: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 00668d51: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00668d56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668d58: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 00668d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668d5f: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x668d64u); f_00686fa2();
    /* 00668d64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668d67: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 00668d6d: call 0x673cb0 */ r_esp -= 4; W32(r_esp, 0x668d72u); f_00673cb0();
    /* 00668d72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668d73: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00668d79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d7a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x668d7fu); f_00686d8e();
    /* 00668d7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668d82: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00668d87: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00668d8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668d8e: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x668d93u); f_005ea9c0();
    /* 00668d93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668d96: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 00668d9c: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668da3: je 0x668dfc */ if (fZ) goto L_00668dfc;
L_00668da5:; BB(0x00668da5);
    /* 00668da5: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00668dab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00668dac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00668dae: push 0x21496 */ { u32 v = 0x21496u; r_esp -= 4; W32(r_esp, v); }
    /* 00668db3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00668db6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00668db7: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x668dbdu); call_ind(t); }
    /* 00668dbd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668dc0: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00668dc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00668dc7: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x668dcdu); call_ind(t); }
    /* 00668dcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00668dd0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00668dd3: movsx esi, byte ptr [eax] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00668dd6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00668ddc: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x668de1u); f_005f3bf0();
    /* 00668de1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00668de3: je 0x668dfc */ if (fZ) goto L_00668dfc;
L_00668de5:; BB(0x00668de5);
    /* 00668de5: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 00668dea: push 0x6dfcf0 */ { u32 v = 0x6dfcf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00668def: push 0x6dfd40 */ { u32 v = 0x6dfd40u; r_esp -= 4; W32(r_esp, v); }
    /* 00668df4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x668df9u); f_005e9f20();
    /* 00668df9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00668dfc:; BB(0x00668dfc);
    /* 00668dfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00668dfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00668e00: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00668e02: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x668e07u); f_00686d72();
    /* 00668e07: mov esp, ebp */ r_esp = r_ebp;
    /* 00668e09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00668e0a: ret 4 */ FN_RET(0x00668d30); r_esp += 8; return;
}

