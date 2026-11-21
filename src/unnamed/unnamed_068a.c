#include "protos.h"

void f_0068a710(void) /* sub_68A710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068a710);
    /* 0068a710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a711: mov ebp, esp */ r_ebp = r_esp;
    /* 0068a713: sub esp, 0x24c */ {  u32 a = r_esp; u32 b = 0x24cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a719: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068a71e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a720: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068a723: mov dword ptr [ebp - 0x24c], ecx */ W32((u32)(r_ebp+0xfffffdb4u), r_ecx);
    /* 0068a729: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a72e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a730: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 0068a736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a737: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68a73cu); f_00686fa2();
    /* 0068a73c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a73f: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a744: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a746: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0068a74c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a74d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68a752u); f_00686fa2();
    /* 0068a752: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a755: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a75a: push 0x6e564c */ { u32 v = 0x6e564cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a75f: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 0068a765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a766: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x68a76cu); call_ind(t); }
    /* 0068a76c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a76f: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a774: push 0x6e5640 */ { u32 v = 0x6e5640u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a779: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 0068a77f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a780: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x68a786u); call_ind(t); }
    /* 0068a786: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a789: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a78d: je 0x68a799 */ if (fZ) goto L_0068a799;
L_0068a78f:; BB(0x0068a78f);
    /* 0068a78f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068a792: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0068a795: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a797: jne 0x68a7a0 */ if (!fZ) goto L_0068a7a0;
L_0068a799:; BB(0x0068a799);
    /* 0068a799: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068a79b: jmp 0x68a925 */ goto L_0068a925;
L_0068a7a0:; BB(0x0068a7a0);
    /* 0068a7a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7a4: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068a7aa: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068a7b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7b1: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x68a7b7u); call_ind(t); }
    /* 0068a7b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a7ba:; BB(0x0068a7ba);
    /* 0068a7ba: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 0068a7c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7c1: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 0068a7c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7c8: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068a7ce: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0068a7d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a7d5: call dword ptr [0x6b21f4] */ { u32 t = R32((u32)(0x6b21f4u)); r_esp -= 4; W32(r_esp, 0x68a7dbu); call_ind(t); }
    /* 0068a7db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a7de: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
    /* 0068a7e4: cmp dword ptr [ebp - 0x244], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7eb: je 0x68a7f6 */ if (fZ) goto L_0068a7f6;
L_0068a7ed:; BB(0x0068a7ed);
    /* 0068a7ed: cmp dword ptr [ebp - 0x244], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a7f4: jne 0x68a7fd */ if (!fZ) goto L_0068a7fd;
L_0068a7f6:; BB(0x0068a7f6);
    /* 0068a7f6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068a7f8: jmp 0x68a925 */ goto L_0068a925;
L_0068a7fd:; BB(0x0068a7fd);
    /* 0068a7fd: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a801: je 0x68a829 */ if (fZ) goto L_0068a829;
L_0068a803:; BB(0x0068a803);
    /* 0068a803: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068a806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a807: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 0068a80d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a80e: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68a813u); f_00686ecc();
    /* 0068a813: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a817: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a819: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 0068a81f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a820: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a826u); call_ind(t); }
    /* 0068a826: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a829:; BB(0x0068a829);
    /* 0068a829: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0068a82f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a830: lea ecx, [ebp - 0x138] */ r_ecx = (u32)(r_ebp+0xfffffec8u);
    /* 0068a836: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a837: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068a83d: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0068a843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a844: call dword ptr [0x6b21f4] */ { u32 t = R32((u32)(0x6b21f4u)); r_esp -= 4; W32(r_esp, 0x68a84au); call_ind(t); }
    /* 0068a84a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a84d: mov dword ptr [ebp - 0x244], eax */ W32((u32)(r_ebp+0xfffffdbcu), r_eax);
    /* 0068a853: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a857: je 0x68a891 */ if (fZ) goto L_0068a891;
L_0068a859:; BB(0x0068a859);
    /* 0068a859: cmp dword ptr [ebp - 0x244], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a860: je 0x68a891 */ if (fZ) goto L_0068a891;
L_0068a862:; BB(0x0068a862);
    /* 0068a862: cmp dword ptr [ebp - 0x244], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a869: je 0x68a891 */ if (fZ) goto L_0068a891;
L_0068a86b:; BB(0x0068a86b);
    /* 0068a86b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068a86e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a86f: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0068a875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a876: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68a87bu); f_00686ecc();
    /* 0068a87b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a87f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a881: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0068a887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a888: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68a88eu); call_ind(t); }
    /* 0068a88e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068a891:; BB(0x0068a891);
    /* 0068a891: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 0068a897: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a898: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068a89e: call 0x68afc0 */ r_esp -= 4; W32(r_esp, 0x68a8a3u); f_0068afc0();
    /* 0068a8a3: movsx edx, byte ptr [ebp - 0x240] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc0u));
    /* 0068a8aa: cmp edx, 0x3b */ {  u32 a = r_edx; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a8ad: jne 0x68a8b1 */ if (!fZ) goto L_0068a8b1;
L_0068a8af:; BB(0x0068a8af);
    /* 0068a8af: jmp 0x68a905 */ goto L_0068a905;
L_0068a8b1:; BB(0x0068a8b1);
    /* 0068a8b1: movsx eax, byte ptr [ebp - 0x240] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdc0u));
    /* 0068a8b8: cmp eax, 0x5b */ {  u32 a = r_eax; u32 b = 0x5bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a8bb: jne 0x68a905 */ if (!fZ) goto L_0068a905;
L_0068a8bd:; BB(0x0068a8bd);
    /* 0068a8bd: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8bf: lea ecx, [ebp - 0x23f] */ r_ecx = (u32)(r_ebp+0xfffffdc1u);
    /* 0068a8c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8c6: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x68a8ccu); call_ind(t); }
    /* 0068a8cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a8cf: mov dword ptr [ebp - 0x248], eax */ W32((u32)(r_ebp+0xfffffdb8u), r_eax);
    /* 0068a8d5: cmp dword ptr [ebp - 0x248], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a8dc: jne 0x68a8e0 */ if (!fZ) goto L_0068a8e0;
L_0068a8de:; BB(0x0068a8de);
    /* 0068a8de: jmp 0x68a905 */ goto L_0068a905;
L_0068a8e0:; BB(0x0068a8e0);
    /* 0068a8e0: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 0068a8e6: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0068a8e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068a8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8ed: lea ecx, [ebp - 0x23f] */ r_ecx = (u32)(r_ebp+0xfffffdc1u);
    /* 0068a8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a8f4: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x68a8fau); call_ind(t); }
    /* 0068a8fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a8fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a8ff: jne 0x68a905 */ if (!fZ) goto L_0068a905;
L_0068a901:; BB(0x0068a901);
    /* 0068a901: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0068a903: jmp 0x68a925 */ goto L_0068a925;
L_0068a905:; BB(0x0068a905);
    /* 0068a905: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068a90b: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0068a911: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a912: call dword ptr [0x6b21f0] */ { u32 t = R32((u32)(0x6b21f0u)); r_esp -= 4; W32(r_esp, 0x68a918u); call_ind(t); }
    /* 0068a918: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a91b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a91d: je 0x68a7ba */ if (fZ) goto L_0068a7ba;
L_0068a923:; BB(0x0068a923);
    /* 0068a923: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0068a925:; BB(0x0068a925);
    /* 0068a925: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068a928: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068a92a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68a92fu); f_00686d72();
    /* 0068a92f: mov esp, ebp */ r_esp = r_ebp;
    /* 0068a931: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068a932: ret 8 */ FN_RET(0x0068a710); r_esp += 12; return;
}

void f_0068a940(void) /* sub_68A940 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068a940);
    /* 0068a940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068a941: mov ebp, esp */ r_ebp = r_esp;
    /* 0068a943: sub esp, 0x25c */ {  u32 a = r_esp; u32 b = 0x25cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068a949: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068a94e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068a950: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068a953: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068a954: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 0068a95a: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a95f: push 0x6e564c */ { u32 v = 0x6e564cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068a964: lea eax, [ebp - 0x12c] */ r_eax = (u32)(r_ebp+0xfffffed4u);
    /* 0068a96a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a96b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x68a971u); call_ind(t); }
    /* 0068a971: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a974: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a979: push 0x6e5640 */ { u32 v = 0x6e5640u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a97e: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 0068a984: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a985: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x68a98bu); call_ind(t); }
    /* 0068a98b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a98e: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a993: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068a995: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 0068a99b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a99c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68a9a1u); f_00686fa2();
    /* 0068a9a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a9a4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a9a8: je 0x68a9c0 */ if (fZ) goto L_0068a9c0;
L_0068a9aa:; BB(0x0068a9aa);
    /* 0068a9aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068a9ad: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068a9b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a9b2: je 0x68a9c0 */ if (fZ) goto L_0068a9c0;
L_0068a9b4:; BB(0x0068a9b4);
    /* 0068a9b4: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a9b8: je 0x68a9c0 */ if (fZ) goto L_0068a9c0;
L_0068a9ba:; BB(0x0068a9ba);
    /* 0068a9ba: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a9be: jne 0x68a9c7 */ if (!fZ) goto L_0068a9c7;
L_0068a9c0:; BB(0x0068a9c0);
    /* 0068a9c0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068a9c2: jmp 0x68abf7 */ goto L_0068abf7;
L_0068a9c7:; BB(0x0068a9c7);
    /* 0068a9c7: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 0068a9cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9ce: lea eax, [ebp - 0x12c] */ r_eax = (u32)(r_ebp+0xfffffed4u);
    /* 0068a9d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9d5: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068a9db: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0068a9e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068a9e2: call dword ptr [0x6b21f4] */ { u32 t = R32((u32)(0x6b21f4u)); r_esp -= 4; W32(r_esp, 0x68a9e8u); call_ind(t); }
    /* 0068a9e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068a9eb: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 0068a9f1: cmp dword ptr [ebp - 0x254], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068a9f8: je 0x68aa03 */ if (fZ) goto L_0068aa03;
L_0068a9fa:; BB(0x0068a9fa);
    /* 0068a9fa: cmp dword ptr [ebp - 0x254], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffdacu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa01: jne 0x68aa0a */ if (!fZ) goto L_0068aa0a;
L_0068aa03:; BB(0x0068aa03);
    /* 0068aa03: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068aa05: jmp 0x68abf7 */ goto L_0068abf7;
L_0068aa0a:; BB(0x0068aa0a);
    /* 0068aa0a: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0068aa10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa11: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 0068aa17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa18: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068aa1e: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0068aa24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa25: call dword ptr [0x6b21f4] */ { u32 t = R32((u32)(0x6b21f4u)); r_esp -= 4; W32(r_esp, 0x68aa2bu); call_ind(t); }
    /* 0068aa2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068aa2e: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 0068aa34: lea ecx, [ebp - 0x248] */ r_ecx = (u32)(r_ebp+0xfffffdb8u);
    /* 0068aa3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa3b: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068aa41: call 0x68afc0 */ r_esp -= 4; W32(r_esp, 0x68aa46u); f_0068afc0();
    /* 0068aa46: movsx edx, byte ptr [ebp - 0x248] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdb8u));
    /* 0068aa4d: cmp edx, 0x3b */ {  u32 a = r_edx; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa50: jne 0x68aa57 */ if (!fZ) goto L_0068aa57;
L_0068aa52:; BB(0x0068aa52);
    /* 0068aa52: jmp 0x68abd7 */ goto L_0068abd7;
L_0068aa57:; BB(0x0068aa57);
    /* 0068aa57: movsx eax, byte ptr [ebp - 0x248] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdb8u));
    /* 0068aa5e: cmp eax, 0x5b */ {  u32 a = r_eax; u32 b = 0x5bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa61: jne 0x68aa6a */ if (!fZ) goto L_0068aa6a;
L_0068aa63:; BB(0x0068aa63);
    /* 0068aa63: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068aa65: jmp 0x68abf7 */ goto L_0068abf7;
L_0068aa6a:; BB(0x0068aa6a);
    /* 0068aa6a: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa6c: lea ecx, [ebp - 0x248] */ r_ecx = (u32)(r_ebp+0xfffffdb8u);
    /* 0068aa72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068aa73: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x68aa79u); call_ind(t); }
    /* 0068aa79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068aa7c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068aa7f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aa83: jne 0x68aa8a */ if (!fZ) goto L_0068aa8a;
L_0068aa85:; BB(0x0068aa85);
    /* 0068aa85: jmp 0x68abd7 */ goto L_0068abd7;
L_0068aa8a:; BB(0x0068aa8a);
    /* 0068aa8a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068aa8d: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0068aa90: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068aa93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068aa96: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068aa99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068aa9c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068aa9f: mov dword ptr [ebp - 0x250], ecx */ W32((u32)(r_ebp+0xfffffdb0u), r_ecx);
L_0068aaa5:; BB(0x0068aaa5);
    /* 0068aaa5: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068aaab: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068aaae: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aab1: jne 0x68aacd */ if (!fZ) goto L_0068aacd;
L_0068aab3:; BB(0x0068aab3);
    /* 0068aab3: mov ecx, dword ptr [ebp - 0x250] */ r_ecx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068aab9: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0068aabc: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068aac2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068aac5: mov dword ptr [ebp - 0x250], edx */ W32((u32)(r_ebp+0xfffffdb0u), r_edx);
    /* 0068aacb: jmp 0x68aaa5 */ goto L_0068aaa5;
L_0068aacd:; BB(0x0068aacd);
    /* 0068aacd: lea eax, [ebp - 0x248] */ r_eax = (u32)(r_ebp+0xfffffdb8u);
    /* 0068aad3: mov dword ptr [ebp - 0x250], eax */ W32((u32)(r_ebp+0xfffffdb0u), r_eax);
    /* 0068aad9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068aadc: mov dword ptr [ebp - 0x24c], ecx */ W32((u32)(r_ebp+0xfffffdb4u), r_ecx);
L_0068aae2:; BB(0x0068aae2);
    /* 0068aae2: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068aae8: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068aaeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aaed: je 0x68ab4a */ if (fZ) goto L_0068ab4a;
L_0068aaef:; BB(0x0068aaef);
    /* 0068aaef: mov ecx, dword ptr [ebp - 0x250] */ r_ecx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068aaf5: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0068aaf8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aafa: je 0x68ab4a */ if (fZ) goto L_0068ab4a;
L_0068aafc:; BB(0x0068aafc);
    /* 0068aafc: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068ab02: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068ab05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab06: call dword ptr [0x6b21e8] */ { u32 t = R32((u32)(0x6b21e8u)); r_esp -= 4; W32(r_esp, 0x68ab0cu); call_ind(t); }
    /* 0068ab0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ab0f: mov esi, eax */ r_esi = r_eax;
    /* 0068ab11: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068ab17: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068ab1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab1b: call dword ptr [0x6b21e8] */ { u32 t = R32((u32)(0x6b21e8u)); r_esp -= 4; W32(r_esp, 0x68ab21u); call_ind(t); }
    /* 0068ab21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ab24: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ab26: je 0x68ab2a */ if (fZ) goto L_0068ab2a;
L_0068ab28:; BB(0x0068ab28);
    /* 0068ab28: jmp 0x68ab4a */ goto L_0068ab4a;
L_0068ab2a:; BB(0x0068ab2a);
    /* 0068ab2a: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068ab30: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ab33: mov dword ptr [ebp - 0x24c], ecx */ W32((u32)(r_ebp+0xfffffdb4u), r_ecx);
    /* 0068ab39: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068ab3f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068ab42: mov dword ptr [ebp - 0x250], edx */ W32((u32)(r_ebp+0xfffffdb0u), r_edx);
    /* 0068ab48: jmp 0x68aae2 */ goto L_0068aae2;
L_0068ab4a:; BB(0x0068ab4a);
    /* 0068ab4a: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068ab50: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068ab53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ab55: jne 0x68ab64 */ if (!fZ) goto L_0068ab64;
L_0068ab57:; BB(0x0068ab57);
    /* 0068ab57: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068ab5d: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068ab60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ab62: je 0x68ab66 */ if (fZ) goto L_0068ab66;
L_0068ab64:; BB(0x0068ab64);
    /* 0068ab64: jmp 0x68abd7 */ goto L_0068abd7;
L_0068ab66:; BB(0x0068ab66);
    /* 0068ab66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ab69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab6a: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068ab70: call 0x68afc0 */ r_esp -= 4; W32(r_esp, 0x68ab75u); f_0068afc0();
    /* 0068ab75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ab78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab79: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68ab7eu); f_00686ecc();
    /* 0068ab7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ab81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ab84: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068ab87: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ab8a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0068ab8c: jae 0x68aba5 */ if (!fC) goto L_0068aba5;
L_0068ab8e:; BB(0x0068ab8e);
    /* 0068ab8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ab91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ab92: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68ab97u); f_00686ecc();
    /* 0068ab97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ab9a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ab9d: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
    /* 0068aba3: jmp 0x68abb1 */ goto L_0068abb1;
L_0068aba5:; BB(0x0068aba5);
    /* 0068aba5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068aba8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068abab: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
L_0068abb1:; BB(0x0068abb1);
    /* 0068abb1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0068abb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068abb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068abbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068abbc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068abbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068abc0: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x68abc6u); call_ind(t); }
    /* 0068abc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068abc9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068abcc: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068abcf: mov byte ptr [ecx - 1], 0 */ W8((u32)(r_ecx+0xffffffffu), 0x0u);
    /* 0068abd3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0068abd5: jmp 0x68abf7 */ goto L_0068abf7;
L_0068abd7:; BB(0x0068abd7);
    /* 0068abd7: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068abdd: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 0068abe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068abe4: call dword ptr [0x6b21f0] */ { u32 t = R32((u32)(0x6b21f0u)); r_esp -= 4; W32(r_esp, 0x68abeau); call_ind(t); }
    /* 0068abea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068abed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068abef: je 0x68a9c7 */ if (fZ) goto L_0068a9c7;
L_0068abf5:; BB(0x0068abf5);
    /* 0068abf5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0068abf7:; BB(0x0068abf7);
    /* 0068abf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068abf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068abfb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068abfd: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68ac02u); f_00686d72();
    /* 0068ac02: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ac04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ac05: ret 0xc */ FN_RET(0x0068a940); r_esp += 16; return;
}

void f_0068ac10(void) /* sub_68AC10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ac10);
    /* 0068ac10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac11: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ac13: sub esp, 0x260 */ {  u32 a = r_esp; u32 b = 0x260u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ac19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068ac1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068ac20: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068ac23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac24: mov dword ptr [ebp - 0x260], ecx */ W32((u32)(r_ebp+0xfffffda0u), r_ecx);
    /* 0068ac2a: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac2f: push 0x6e564c */ { u32 v = 0x6e564cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac34: lea eax, [ebp - 0x134] */ r_eax = (u32)(r_ebp+0xfffffeccu);
    /* 0068ac3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac3b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x68ac41u); call_ind(t); }
    /* 0068ac41: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ac44: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac49: push 0x6e5640 */ { u32 v = 0x6e5640u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac4e: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 0068ac54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac55: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x68ac5bu); call_ind(t); }
    /* 0068ac5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ac5e: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac65: lea edx, [ebp - 0x250] */ r_edx = (u32)(r_ebp+0xfffffdb0u);
    /* 0068ac6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac6c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68ac71u); f_00686fa2();
    /* 0068ac71: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ac74: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac78: je 0x68ac90 */ if (fZ) goto L_0068ac90;
L_0068ac7a:; BB(0x0068ac7a);
    /* 0068ac7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ac7d: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068ac80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac82: je 0x68ac90 */ if (fZ) goto L_0068ac90;
L_0068ac84:; BB(0x0068ac84);
    /* 0068ac84: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac88: je 0x68ac90 */ if (fZ) goto L_0068ac90;
L_0068ac8a:; BB(0x0068ac8a);
    /* 0068ac8a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ac8e: jne 0x68ac97 */ if (!fZ) goto L_0068ac97;
L_0068ac90:; BB(0x0068ac90);
    /* 0068ac90: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068ac92: jmp 0x68afad */ goto L_0068afad;
L_0068ac97:; BB(0x0068ac97);
    /* 0068ac97: lea edx, [ebp - 0x120] */ r_edx = (u32)(r_ebp+0xfffffee0u);
    /* 0068ac9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ac9e: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068aca4: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068acaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068acab: call dword ptr [0x6b21fc] */ { u32 t = R32((u32)(0x6b21fcu)); r_esp -= 4; W32(r_esp, 0x68acb1u); call_ind(t); }
    /* 0068acb1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068acb4: lea edx, [ebp - 0x118] */ r_edx = (u32)(r_ebp+0xfffffee8u);
    /* 0068acba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068acbb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068acbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068acbf: call dword ptr [0x6b21fc] */ { u32 t = R32((u32)(0x6b21fcu)); r_esp -= 4; W32(r_esp, 0x68acc5u); call_ind(t); }
    /* 0068acc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068acc8: lea ecx, [ebp - 0x250] */ r_ecx = (u32)(r_ebp+0xfffffdb0u);
    /* 0068acce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068accf: lea edx, [ebp - 0x134] */ r_edx = (u32)(r_ebp+0xfffffeccu);
    /* 0068acd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068acd6: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068acdc: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068ace2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ace3: call dword ptr [0x6b21f4] */ { u32 t = R32((u32)(0x6b21f4u)); r_esp -= 4; W32(r_esp, 0x68ace9u); call_ind(t); }
    /* 0068ace9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068acec: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
    /* 0068acf2: cmp dword ptr [ebp - 0x25c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068acf9: je 0x68ad04 */ if (fZ) goto L_0068ad04;
L_0068acfb:; BB(0x0068acfb);
    /* 0068acfb: cmp dword ptr [ebp - 0x25c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad02: jne 0x68ad0e */ if (!fZ) goto L_0068ad0e;
L_0068ad04:; BB(0x0068ad04);
    /* 0068ad04: jmp 0x68af29 */ goto L_0068af29;
L_0068ad0e:; BB(0x0068ad0e);
    /* 0068ad0e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068ad11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad12: lea eax, [ebp - 0x250] */ r_eax = (u32)(r_ebp+0xfffffdb0u);
    /* 0068ad18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad19: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68ad1eu); f_00686ecc();
    /* 0068ad1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ad21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad24: lea ecx, [ebp - 0x250] */ r_ecx = (u32)(r_ebp+0xfffffdb0u);
    /* 0068ad2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad2b: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68ad31u); call_ind(t); }
    /* 0068ad31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ad34: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0068ad3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad3b: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 0068ad41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad42: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068ad48: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0068ad4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad4f: call dword ptr [0x6b21f4] */ { u32 t = R32((u32)(0x6b21f4u)); r_esp -= 4; W32(r_esp, 0x68ad55u); call_ind(t); }
    /* 0068ad55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ad58: mov dword ptr [ebp - 0x25c], eax */ W32((u32)(r_ebp+0xfffffda4u), r_eax);
    /* 0068ad5e: cmp dword ptr [ebp - 0x25c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad65: je 0x68ad96 */ if (fZ) goto L_0068ad96;
L_0068ad67:; BB(0x0068ad67);
    /* 0068ad67: cmp dword ptr [ebp - 0x25c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffda4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ad6e: je 0x68ad96 */ if (fZ) goto L_0068ad96;
L_0068ad70:; BB(0x0068ad70);
    /* 0068ad70: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068ad73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad74: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0068ad7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad7b: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68ad80u); f_00686ecc();
    /* 0068ad80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ad83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad86: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0068ad8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad8d: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68ad93u); call_ind(t); }
    /* 0068ad93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068ad96:; BB(0x0068ad96);
    /* 0068ad96: lea eax, [ebp - 0x250] */ r_eax = (u32)(r_ebp+0xfffffdb0u);
    /* 0068ad9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ad9d: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068ada3: call 0x68afc0 */ r_esp -= 4; W32(r_esp, 0x68ada8u); f_0068afc0();
    /* 0068ada8: movsx ecx, byte ptr [ebp - 0x250] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdb0u));
    /* 0068adaf: cmp ecx, 0x3b */ {  u32 a = r_ecx; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068adb2: jne 0x68adb9 */ if (!fZ) goto L_0068adb9;
L_0068adb4:; BB(0x0068adb4);
    /* 0068adb4: jmp 0x68af0b */ goto L_0068af0b;
L_0068adb9:; BB(0x0068adb9);
    /* 0068adb9: movsx edx, byte ptr [ebp - 0x250] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdb0u));
    /* 0068adc0: cmp edx, 0x5b */ {  u32 a = r_edx; u32 b = 0x5bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068adc3: jne 0x68ae00 */ if (!fZ) goto L_0068ae00;
L_0068adc5:; BB(0x0068adc5);
    /* 0068adc5: lea eax, [ebp - 0x120] */ r_eax = (u32)(r_ebp+0xfffffee0u);
    /* 0068adcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068adcc: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068add2: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 0068add8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068add9: call dword ptr [0x6b21f8] */ { u32 t = R32((u32)(0x6b21f8u)); r_esp -= 4; W32(r_esp, 0x68addfu); call_ind(t); }
    /* 0068addf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ade2: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0068ade8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ade9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068adec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068aded: call dword ptr [0x6b21f8] */ { u32 t = R32((u32)(0x6b21f8u)); r_esp -= 4; W32(r_esp, 0x68adf3u); call_ind(t); }
    /* 0068adf3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068adf6: jmp 0x68af29 */ goto L_0068af29;
L_0068ae00:; BB(0x0068ae00);
    /* 0068ae00: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0068ae02: lea edx, [ebp - 0x250] */ r_edx = (u32)(r_ebp+0xfffffdb0u);
    /* 0068ae08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ae09: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x68ae0fu); call_ind(t); }
    /* 0068ae0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ae12: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068ae15: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae19: jne 0x68ae20 */ if (!fZ) goto L_0068ae20;
L_0068ae1b:; BB(0x0068ae1b);
    /* 0068ae1b: jmp 0x68af0b */ goto L_0068af0b;
L_0068ae20:; BB(0x0068ae20);
    /* 0068ae20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ae23: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0068ae26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ae29: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ae2c: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
L_0068ae32:; BB(0x0068ae32);
    /* 0068ae32: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068ae38: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068ae3b: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae3e: jne 0x68ae5a */ if (!fZ) goto L_0068ae5a;
L_0068ae40:; BB(0x0068ae40);
    /* 0068ae40: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068ae46: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0068ae49: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068ae4f: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0068ae52: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 0068ae58: jmp 0x68ae32 */ goto L_0068ae32;
L_0068ae5a:; BB(0x0068ae5a);
    /* 0068ae5a: lea eax, [ebp - 0x250] */ r_eax = (u32)(r_ebp+0xfffffdb0u);
    /* 0068ae60: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 0068ae66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ae69: mov dword ptr [ebp - 0x254], ecx */ W32((u32)(r_ebp+0xfffffdacu), r_ecx);
L_0068ae6f:; BB(0x0068ae6f);
    /* 0068ae6f: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068ae75: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068ae78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae7a: je 0x68aed7 */ if (fZ) goto L_0068aed7;
L_0068ae7c:; BB(0x0068ae7c);
    /* 0068ae7c: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068ae82: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0068ae85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ae87: je 0x68aed7 */ if (fZ) goto L_0068aed7;
L_0068ae89:; BB(0x0068ae89);
    /* 0068ae89: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068ae8f: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068ae92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ae93: call dword ptr [0x6b21e8] */ { u32 t = R32((u32)(0x6b21e8u)); r_esp -= 4; W32(r_esp, 0x68ae99u); call_ind(t); }
    /* 0068ae99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ae9c: mov esi, eax */ r_esi = r_eax;
    /* 0068ae9e: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068aea4: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068aea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068aea8: call dword ptr [0x6b21e8] */ { u32 t = R32((u32)(0x6b21e8u)); r_esp -= 4; W32(r_esp, 0x68aeaeu); call_ind(t); }
    /* 0068aeae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068aeb1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aeb3: je 0x68aeb7 */ if (fZ) goto L_0068aeb7;
L_0068aeb5:; BB(0x0068aeb5);
    /* 0068aeb5: jmp 0x68aed7 */ goto L_0068aed7;
L_0068aeb7:; BB(0x0068aeb7);
    /* 0068aeb7: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068aebd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068aec0: mov dword ptr [ebp - 0x254], ecx */ W32((u32)(r_ebp+0xfffffdacu), r_ecx);
    /* 0068aec6: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068aecc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068aecf: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 0068aed5: jmp 0x68ae6f */ goto L_0068ae6f;
L_0068aed7:; BB(0x0068aed7);
    /* 0068aed7: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068aedd: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068aee0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aee2: jne 0x68aef1 */ if (!fZ) goto L_0068aef1;
L_0068aee4:; BB(0x0068aee4);
    /* 0068aee4: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0068aeea: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0068aeed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aeef: je 0x68aef3 */ if (fZ) goto L_0068aef3;
L_0068aef1:; BB(0x0068aef1);
    /* 0068aef1: jmp 0x68af0b */ goto L_0068af0b;
L_0068aef3:; BB(0x0068aef3);
    /* 0068aef3: lea ecx, [ebp - 0x118] */ r_ecx = (u32)(r_ebp+0xfffffee8u);
    /* 0068aef9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068aefa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068aefd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068aefe: call dword ptr [0x6b21f8] */ { u32 t = R32((u32)(0x6b21f8u)); r_esp -= 4; W32(r_esp, 0x68af04u); call_ind(t); }
    /* 0068af04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af07: jmp 0x68af29 */ goto L_0068af29;
L_0068af0b:; BB(0x0068af0b);
    /* 0068af0b: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068af11: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0068af17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af18: call dword ptr [0x6b21f0] */ { u32 t = R32((u32)(0x6b21f0u)); r_esp -= 4; W32(r_esp, 0x68af1eu); call_ind(t); }
    /* 0068af1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af23: je 0x68ac97 */ if (fZ) goto L_0068ac97;
L_0068af29:; BB(0x0068af29);
    /* 0068af29: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068af2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068af30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af31: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68af36u); f_00686ecc();
    /* 0068af36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068af3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af40: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68af46u); call_ind(t); }
    /* 0068af46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af49: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068af4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af51: push 0x6e5658 */ { u32 v = 0x6e5658u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af56: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68af5cu); call_ind(t); }
    /* 0068af5c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af5f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068af62: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068af65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068af67: je 0x68af89 */ if (fZ) goto L_0068af89;
L_0068af69:; BB(0x0068af69);
    /* 0068af69: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068af6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af6d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068af70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af71: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68af76u); f_00686ecc();
    /* 0068af76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af7c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068af7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af80: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68af86u); call_ind(t); }
    /* 0068af86: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068af89:; BB(0x0068af89);
    /* 0068af89: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068af8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068af8d: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af92: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68af97u); f_00686ecc();
    /* 0068af97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068af9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068af9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068af9d: push 0x6d8c14 */ { u32 v = 0x6d8c14u; r_esp -= 4; W32(r_esp, v); }
    /* 0068afa2: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x68afa8u); call_ind(t); }
    /* 0068afa8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068afab: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0068afad:; BB(0x0068afad);
    /* 0068afad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068afae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068afb1: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068afb3: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x68afb8u); f_00686d72();
    /* 0068afb8: mov esp, ebp */ r_esp = r_ebp;
    /* 0068afba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068afbb: ret 0xc */ FN_RET(0x0068ac10); r_esp += 16; return;
}

void f_0068afc0(void) /* sub_68AFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068afc0);
    /* 0068afc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068afc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068afc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068afc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068afc9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068afcd: jne 0x68afd3 */ if (!fZ) goto L_0068afd3;
L_0068afcf:; BB(0x0068afcf);
    /* 0068afcf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068afd1: jmp 0x68b01a */ goto L_0068b01a;
L_0068afd3:; BB(0x0068afd3);
    /* 0068afd3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068afd6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0068afd9:; BB(0x0068afd9);
    /* 0068afd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068afdc: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0068afdf: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068afe2: jne 0x68afef */ if (!fZ) goto L_0068afef;
L_0068afe4:; BB(0x0068afe4);
    /* 0068afe4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068afe7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068afea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068afed: jmp 0x68afd9 */ goto L_0068afd9;
L_0068afef:; BB(0x0068afef);
    /* 0068afef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068aff2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068aff5: je 0x68b018 */ if (fZ) goto L_0068b018;
L_0068aff7:; BB(0x0068aff7);
    /* 0068aff7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068affa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068affb: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x68b000u); f_00686ecc();
    /* 0068b000: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068b003: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068b006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068b00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068b00b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068b00e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068b00f: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x68b015u); call_ind(t); }
    /* 0068b015: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068b018:; BB(0x0068b018);
    /* 0068b018: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0068b01a:; BB(0x0068b01a);
    /* 0068b01a: mov esp, ebp */ r_esp = r_ebp;
    /* 0068b01c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068b01d: ret 4 */ FN_RET(0x0068afc0); r_esp += 8; return;
}

