#include "protos.h"

void f_0044a110(void) /* sub_44A110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044a110);
    /* 0044a110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a111: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a113: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a116: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044a119: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044a11e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044a121: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a124: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a127: mov byte ptr [ecx + 0xc9], 1 */ W8((u32)(r_ecx+0xc9u), 0x1u);
    /* 0044a12e: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044a134: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x44a139u); f_004474b0();
    /* 0044a139: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044a13c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a13d: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a143: call 0x44ddc0 */ r_esp -= 4; W32(r_esp, 0x44a148u); f_0044ddc0();
    /* 0044a148: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044a14b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a14c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a151u); f_005dcb00();
    /* 0044a151: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a154: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044a157: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a15a: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 0044a161: mov esp, ebp */ r_esp = r_ebp;
    /* 0044a163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044a164: ret 4 */ FN_RET(0x0044a110); r_esp += 8; return;
}

void f_0044a170(void) /* sub_44A170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044a170);
    /* 0044a170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044a171: mov ebp, esp */ r_ebp = r_esp;
    /* 0044a173: sub esp, 0x13c */ {  u32 a = r_esp; u32 b = 0x13cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044a179: mov dword ptr [ebp - 0xf8], ecx */ W32((u32)(r_ebp+0xffffff08u), r_ecx);
    /* 0044a17f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a183: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44a188u); f_0064c8a0();
    /* 0044a188: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a18b: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0044a18e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0044a191: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044a194: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0044a197: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0044a19a: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0044a19d: mov dword ptr [ebp - 0x44], 0xffffffff */ W32((u32)(r_ebp+0xffffffbcu), 0xffffffffu);
    /* 0044a1a4: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0044a1ab: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 0044a1b2: fldz  */ FPUSH(0.0);
    /* 0044a1b4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0044a1b7: fld1  */ FPUSH(1.0);
    /* 0044a1b9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a1bc: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044a1c2: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0044a1c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044a1cb: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 0044a1d2: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 0044a1d9: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 0044a1e0: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a1e6: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 0044a1ec: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0044a1ef: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0044a1f2: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0044a1f8: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a1fe: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 0044a204: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 0044a20a: cmp dword ptr [ebp - 0xfc], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0044a211: ja 0x44a948 */ if ((!fC&&!fZ)) goto L_0044a948;
L_0044a217:; BB(0x0044a217);
    /* 0044a217: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0044a21d: jmp dword ptr [eax*4 + 0x44ab04] */ { u32 t = R32((u32)(r_eax*4+0x44ab04u)); switch (t) { case 0x44a224u: goto L_0044a224; case 0x44a239u: goto L_0044a239; case 0x44a2a5u: goto L_0044a2a5; case 0x44a24eu: goto L_0044a24e; case 0x44a58cu: goto L_0044a58c; case 0x44a938u: goto L_0044a938; case 0x44a941u: goto L_0044a941; default: UNSUP(0x0044a21d, "jump table entry is not a known target"); } }
L_0044a224:; BB(0x0044a224);
    /* 0044a224: mov dword ptr [ebp - 0x20], 0x7e8 */ W32((u32)(r_ebp+0xffffffe0u), 0x7e8u);
    /* 0044a22b: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0044a231: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a234: jmp 0x44a948 */ goto L_0044a948;
L_0044a239:; BB(0x0044a239);
    /* 0044a239: mov dword ptr [ebp - 0x20], 0x7eb */ W32((u32)(r_ebp+0xffffffe0u), 0x7ebu);
    /* 0044a240: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0044a246: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a249: jmp 0x44a948 */ goto L_0044a948;
L_0044a24e:; BB(0x0044a24e);
    /* 0044a24e: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a254: call 0x44d820 */ r_esp -= 4; W32(r_esp, 0x44a259u); f_0044d820();
    /* 0044a259: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044a25c: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a260: je 0x44a277 */ if (fZ) goto L_0044a277;
L_0044a262:; BB(0x0044a262);
    /* 0044a262: mov dword ptr [ebp - 0x20], 0x7ea */ W32((u32)(r_ebp+0xffffffe0u), 0x7eau);
    /* 0044a269: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0044a26f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a272: jmp 0x44a948 */ goto L_0044a948;
L_0044a277:; BB(0x0044a277);
    /* 0044a277: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a27d: call 0x44dc20 */ r_esp -= 4; W32(r_esp, 0x44a282u); f_0044dc20();
    /* 0044a282: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044a285: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a289: je 0x44a2a0 */ if (fZ) goto L_0044a2a0;
L_0044a28b:; BB(0x0044a28b);
    /* 0044a28b: mov dword ptr [ebp - 0x20], 0x7e9 */ W32((u32)(r_ebp+0xffffffe0u), 0x7e9u);
    /* 0044a292: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0044a298: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a29b: jmp 0x44a948 */ goto L_0044a948;
L_0044a2a0:; BB(0x0044a2a0);
    /* 0044a2a0: jmp 0x44a948 */ goto L_0044a948;
L_0044a2a5:; BB(0x0044a2a5);
    /* 0044a2a5: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 0044a2a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a2ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2ad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a2b2u); f_005dcb00();
    /* 0044a2b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a2b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0044a2b7: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x44a2bcu); f_005d6020();
    /* 0044a2bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a2bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2c0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a2c5u); f_005dcb00();
    /* 0044a2c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a2c8: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a2cf: jle 0x44a34f */ if ((fZ||fS!=fO)) goto L_0044a34f;
L_0044a2d1:; BB(0x0044a2d1);
    /* 0044a2d1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2d3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44a2d8u); f_0062fbf0();
    /* 0044a2d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a2db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a2dd: jne 0x44a34f */ if (!fZ) goto L_0044a34f;
L_0044a2df:; BB(0x0044a2df);
    /* 0044a2df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a2e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a2e3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a2e8u); f_005dcb00();
    /* 0044a2e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a2eb: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0044a2ee: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044a2f1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a2f6u); f_0063aac0();
    /* 0044a2f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a2f8: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0044a2fb: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a2ff: je 0x44a320 */ if (fZ) goto L_0044a320;
L_0044a301:; BB(0x0044a301);
    /* 0044a301: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044a304: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a309u); f_0063aac0();
    /* 0044a309: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a30b: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0044a30e: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a312: je 0x44a320 */ if (fZ) goto L_0044a320;
L_0044a314:; BB(0x0044a314);
    /* 0044a314: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
    /* 0044a31e: jmp 0x44a32a */ goto L_0044a32a;
L_0044a320:; BB(0x0044a320);
    /* 0044a320: mov dword ptr [ebp - 0x100], 1 */ W32((u32)(r_ebp+0xffffff00u), 0x1u);
L_0044a32a:; BB(0x0044a32a);
    /* 0044a32a: movzx ecx, byte ptr [ebp - 0x100] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff00u));
    /* 0044a331: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0044a333: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0044a335: and ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a338: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a33e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044a341: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0044a347: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a34a: jmp 0x44a948 */ goto L_0044a948;
L_0044a34f:; BB(0x0044a34f);
    /* 0044a34f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a353: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a358u); f_005dcb00();
    /* 0044a358: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a35b: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a362: jge 0x44a3e1 */ if ((fS==fO)) goto L_0044a3e1;
L_0044a364:; BB(0x0044a364);
    /* 0044a364: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a366: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44a36bu); f_0062fbf0();
    /* 0044a36b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a36e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a370: jne 0x44a3e1 */ if (!fZ) goto L_0044a3e1;
L_0044a372:; BB(0x0044a372);
    /* 0044a372: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a376: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a37bu); f_005dcb00();
    /* 0044a37b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a37e: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044a381: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0044a384: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a389u); f_0063aac0();
    /* 0044a389: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044a38b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0044a38e: cmp dword ptr [ebp - 0x70], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a392: je 0x44a3b3 */ if (fZ) goto L_0044a3b3;
L_0044a394:; BB(0x0044a394);
    /* 0044a394: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0044a397: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a39cu); f_0063aac0();
    /* 0044a39c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a39e: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0044a3a1: cmp dword ptr [ebp - 0x74], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a3a5: je 0x44a3b3 */ if (fZ) goto L_0044a3b3;
L_0044a3a7:; BB(0x0044a3a7);
    /* 0044a3a7: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 0044a3b1: jmp 0x44a3bd */ goto L_0044a3bd;
L_0044a3b3:; BB(0x0044a3b3);
    /* 0044a3b3: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
L_0044a3bd:; BB(0x0044a3bd);
    /* 0044a3bd: movzx eax, byte ptr [ebp - 0x104] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffefcu));
    /* 0044a3c4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0044a3c6: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0044a3c8: and eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a3cb: add eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a3d0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044a3d3: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 0044a3d9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a3dc: jmp 0x44a948 */ goto L_0044a948;
L_0044a3e1:; BB(0x0044a3e1);
    /* 0044a3e1: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044a3e7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a3ea: movzx edx, byte ptr [ecx + 0xec] */ r_edx = (u32)R8((u32)(r_ecx+0xecu));
    /* 0044a3f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a3f3: je 0x44a469 */ if (fZ) goto L_0044a469;
L_0044a3f5:; BB(0x0044a3f5);
    /* 0044a3f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a3f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a3f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a3feu); f_005dcb00();
    /* 0044a3fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a401: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0044a407: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0044a40d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a412u); f_0063aac0();
    /* 0044a412: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044a414: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0044a417: cmp dword ptr [ebp - 0x7c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a41b: je 0x44a43f */ if (fZ) goto L_0044a43f;
L_0044a41d:; BB(0x0044a41d);
    /* 0044a41d: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0044a423: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a428u); f_0063aac0();
    /* 0044a428: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a42a: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0044a42d: cmp dword ptr [ebp - 0x80], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a431: je 0x44a43f */ if (fZ) goto L_0044a43f;
L_0044a433:; BB(0x0044a433);
    /* 0044a433: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 0044a43d: jmp 0x44a449 */ goto L_0044a449;
L_0044a43f:; BB(0x0044a43f);
    /* 0044a43f: mov dword ptr [ebp - 0x108], 1 */ W32((u32)(r_ebp+0xfffffef8u), 0x1u);
L_0044a449:; BB(0x0044a449);
    /* 0044a449: movzx eax, byte ptr [ebp - 0x108] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffef8u));
    /* 0044a450: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0044a452: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0044a454: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044a457: add eax, 0x3fe */ {  u32 a = r_eax; u32 b = 0x3feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044a45c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044a45f: fld1  */ FPUSH(1.0);
    /* 0044a461: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a464: jmp 0x44a948 */ goto L_0044a948;
L_0044a469:; BB(0x0044a469);
    /* 0044a469: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a46d: jge 0x44a4f8 */ if ((fS==fO)) goto L_0044a4f8;
L_0044a473:; BB(0x0044a473);
    /* 0044a473: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a476: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a477: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a47cu); f_005dcb00();
    /* 0044a47c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a47f: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0044a485: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0044a48b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a490u); f_0063aac0();
    /* 0044a490: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a492: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0044a498: cmp dword ptr [ebp - 0x88], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a49f: je 0x44a4c9 */ if (fZ) goto L_0044a4c9;
L_0044a4a1:; BB(0x0044a4a1);
    /* 0044a4a1: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0044a4a7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a4acu); f_0063aac0();
    /* 0044a4ac: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a4ae: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0044a4b4: cmp dword ptr [ebp - 0x8c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a4bb: je 0x44a4c9 */ if (fZ) goto L_0044a4c9;
L_0044a4bd:; BB(0x0044a4bd);
    /* 0044a4bd: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0044a4c7: jmp 0x44a4d3 */ goto L_0044a4d3;
L_0044a4c9:; BB(0x0044a4c9);
    /* 0044a4c9: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
L_0044a4d3:; BB(0x0044a4d3);
    /* 0044a4d3: movzx ecx, byte ptr [ebp - 0x10c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffef4u));
    /* 0044a4da: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0044a4dc: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0044a4de: and ecx, 0xffffffe6 */ {  u32 a = r_ecx; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a4e1: add ecx, 0x402 */ {  u32 a = r_ecx; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a4e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044a4ea: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0044a4f0: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a4f3: jmp 0x44a948 */ goto L_0044a948;
L_0044a4f8:; BB(0x0044a4f8);
    /* 0044a4f8: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a4fc: jle 0x44a587 */ if ((fZ||fS!=fO)) goto L_0044a587;
L_0044a502:; BB(0x0044a502);
    /* 0044a502: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044a505: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a506: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a50bu); f_005dcb00();
    /* 0044a50b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a50e: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0044a514: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0044a51a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a51fu); f_0063aac0();
    /* 0044a51f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a521: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0044a527: cmp dword ptr [ebp - 0x94], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a52e: je 0x44a558 */ if (fZ) goto L_0044a558;
L_0044a530:; BB(0x0044a530);
    /* 0044a530: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0044a536: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a53bu); f_0063aac0();
    /* 0044a53b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044a53d: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0044a543: cmp dword ptr [ebp - 0x98], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a54a: je 0x44a558 */ if (fZ) goto L_0044a558;
L_0044a54c:; BB(0x0044a54c);
    /* 0044a54c: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 0044a556: jmp 0x44a562 */ goto L_0044a562;
L_0044a558:; BB(0x0044a558);
    /* 0044a558: mov dword ptr [ebp - 0x110], 1 */ W32((u32)(r_ebp+0xfffffef0u), 0x1u);
L_0044a562:; BB(0x0044a562);
    /* 0044a562: movzx edx, byte ptr [ebp - 0x110] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffef0u));
    /* 0044a569: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0044a56b: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0044a56d: and edx, 0xffffffec */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0044a570: add edx, 0x404 */ {  u32 a = r_edx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044a576: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044a579: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0044a57f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a582: jmp 0x44a948 */ goto L_0044a948;
L_0044a587:; BB(0x0044a587);
    /* 0044a587: jmp 0x44a948 */ goto L_0044a948;
L_0044a58c:; BB(0x0044a58c);
    /* 0044a58c: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044a592: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x44a597u); f_005dac90();
    /* 0044a597: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044a59a: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044a5a0: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x44a5a5u); f_005dada0();
    /* 0044a5a5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0044a5a8: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044a5ae: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x44a5b3u); f_005db190();
    /* 0044a5b3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044a5b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a5b8: je 0x44a6d2 */ if (fZ) goto L_0044a6d2;
L_0044a5be:; BB(0x0044a5be);
    /* 0044a5be: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a5c2: je 0x44a6d2 */ if (fZ) goto L_0044a6d2;
L_0044a5c8:; BB(0x0044a5c8);
    /* 0044a5c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a5cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a5cc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a5d1u); f_005dcb00();
    /* 0044a5d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a5d4: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0044a5da: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0044a5e0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a5e5u); f_0063aac0();
    /* 0044a5e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a5e7: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0044a5ed: cmp dword ptr [ebp - 0xa0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a5f4: je 0x44a61e */ if (fZ) goto L_0044a61e;
L_0044a5f6:; BB(0x0044a5f6);
    /* 0044a5f6: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0044a5fc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a601u); f_0063aac0();
    /* 0044a601: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a603: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0044a609: cmp dword ptr [ebp - 0xa4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a610: je 0x44a61e */ if (fZ) goto L_0044a61e;
L_0044a612:; BB(0x0044a612);
    /* 0044a612: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 0044a61c: jmp 0x44a628 */ goto L_0044a628;
L_0044a61e:; BB(0x0044a61e);
    /* 0044a61e: mov dword ptr [ebp - 0x114], 1 */ W32((u32)(r_ebp+0xfffffeecu), 0x1u);
L_0044a628:; BB(0x0044a628);
    /* 0044a628: movzx ecx, byte ptr [ebp - 0x114] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeecu));
    /* 0044a62f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a631: je 0x44a63f */ if (fZ) goto L_0044a63f;
L_0044a633:; BB(0x0044a633);
    /* 0044a633: mov dword ptr [ebp - 0x118], 0xffffffff */ W32((u32)(r_ebp+0xfffffee8u), 0xffffffffu);
    /* 0044a63d: jmp 0x44a648 */ goto L_0044a648;
L_0044a63f:; BB(0x0044a63f);
    /* 0044a63f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a642: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
L_0044a648:; BB(0x0044a648);
    /* 0044a648: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0044a64e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044a651: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a654: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a655: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a65au); f_005dcb00();
    /* 0044a65a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a65d: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0044a663: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0044a669: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a66eu); f_0063aac0();
    /* 0044a66e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a670: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0044a676: cmp dword ptr [ebp - 0xac], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a67d: je 0x44a6a7 */ if (fZ) goto L_0044a6a7;
L_0044a67f:; BB(0x0044a67f);
    /* 0044a67f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0044a685: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a68au); f_0063aac0();
    /* 0044a68a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a68c: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0044a692: cmp dword ptr [ebp - 0xb0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a699: je 0x44a6a7 */ if (fZ) goto L_0044a6a7;
L_0044a69b:; BB(0x0044a69b);
    /* 0044a69b: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 0044a6a5: jmp 0x44a6b1 */ goto L_0044a6b1;
L_0044a6a7:; BB(0x0044a6a7);
    /* 0044a6a7: mov dword ptr [ebp - 0x11c], 1 */ W32((u32)(r_ebp+0xfffffee4u), 0x1u);
L_0044a6b1:; BB(0x0044a6b1);
    /* 0044a6b1: movzx ecx, byte ptr [ebp - 0x11c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffee4u));
    /* 0044a6b8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0044a6ba: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0044a6bc: and ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a6bf: add ecx, 0x3fd */ {  u32 a = r_ecx; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a6c5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044a6c8: fld1  */ FPUSH(1.0);
    /* 0044a6ca: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a6cd: jmp 0x44a936 */ goto L_0044a936;
L_0044a6d2:; BB(0x0044a6d2);
    /* 0044a6d2: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a6d6: je 0x44a6ef */ if (fZ) goto L_0044a6ef;
L_0044a6d8:; BB(0x0044a6d8);
    /* 0044a6d8: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 0044a6db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a6dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a6df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a6e0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a6e5u); f_005dcb00();
    /* 0044a6e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a6e8: mov ecx, eax */ r_ecx = r_eax;
    /* 0044a6ea: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x44a6efu); f_005d6020();
L_0044a6ef:; BB(0x0044a6ef);
    /* 0044a6ef: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a6f3: je 0x44a823 */ if (fZ) goto L_0044a823;
L_0044a6f9:; BB(0x0044a6f9);
    /* 0044a6f9: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a6fd: jle 0x44a823 */ if ((fZ||fS!=fO)) goto L_0044a823;
L_0044a703:; BB(0x0044a703);
    /* 0044a703: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a705: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44a70au); f_0062fbf0();
    /* 0044a70a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a70f: jne 0x44a823 */ if (!fZ) goto L_0044a823;
L_0044a715:; BB(0x0044a715);
    /* 0044a715: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a718: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a719: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a71eu); f_005dcb00();
    /* 0044a71e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a721: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0044a727: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0044a72d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a732u); f_0063aac0();
    /* 0044a732: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a734: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 0044a73a: cmp dword ptr [ebp - 0xb8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a741: je 0x44a76b */ if (fZ) goto L_0044a76b;
L_0044a743:; BB(0x0044a743);
    /* 0044a743: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0044a749: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a74eu); f_0063aac0();
    /* 0044a74e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a750: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0044a756: cmp dword ptr [ebp - 0xbc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a75d: je 0x44a76b */ if (fZ) goto L_0044a76b;
L_0044a75f:; BB(0x0044a75f);
    /* 0044a75f: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
    /* 0044a769: jmp 0x44a775 */ goto L_0044a775;
L_0044a76b:; BB(0x0044a76b);
    /* 0044a76b: mov dword ptr [ebp - 0x120], 1 */ W32((u32)(r_ebp+0xfffffee0u), 0x1u);
L_0044a775:; BB(0x0044a775);
    /* 0044a775: movzx ecx, byte ptr [ebp - 0x120] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffee0u));
    /* 0044a77c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a77e: je 0x44a78c */ if (fZ) goto L_0044a78c;
L_0044a780:; BB(0x0044a780);
    /* 0044a780: mov dword ptr [ebp - 0x124], 0xffffffff */ W32((u32)(r_ebp+0xfffffedcu), 0xffffffffu);
    /* 0044a78a: jmp 0x44a795 */ goto L_0044a795;
L_0044a78c:; BB(0x0044a78c);
    /* 0044a78c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a78f: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
L_0044a795:; BB(0x0044a795);
    /* 0044a795: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0044a79b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044a79e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044a7a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a7a2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a7a7u); f_005dcb00();
    /* 0044a7a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a7aa: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0044a7b0: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0044a7b6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a7bbu); f_0063aac0();
    /* 0044a7bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044a7bd: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0044a7c3: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a7ca: je 0x44a7f4 */ if (fZ) goto L_0044a7f4;
L_0044a7cc:; BB(0x0044a7cc);
    /* 0044a7cc: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0044a7d2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a7d7u); f_0063aac0();
    /* 0044a7d7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a7d9: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0044a7df: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a7e6: je 0x44a7f4 */ if (fZ) goto L_0044a7f4;
L_0044a7e8:; BB(0x0044a7e8);
    /* 0044a7e8: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 0044a7f2: jmp 0x44a7fe */ goto L_0044a7fe;
L_0044a7f4:; BB(0x0044a7f4);
    /* 0044a7f4: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_0044a7fe:; BB(0x0044a7fe);
    /* 0044a7fe: movzx ecx, byte ptr [ebp - 0x128] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffed8u));
    /* 0044a805: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0044a807: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0044a809: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a80c: add ecx, 0x3f2 */ {  u32 a = r_ecx; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044a812: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044a815: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0044a81b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044a81e: jmp 0x44a936 */ goto L_0044a936;
L_0044a823:; BB(0x0044a823);
    /* 0044a823: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a827: je 0x44a936 */ if (fZ) goto L_0044a936;
L_0044a82d:; BB(0x0044a82d);
    /* 0044a82d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044a830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a831: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a836u); f_005dcb00();
    /* 0044a836: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a839: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0044a83f: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0044a845: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a84au); f_0063aac0();
    /* 0044a84a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a84c: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0044a852: cmp dword ptr [ebp - 0xd0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a859: je 0x44a883 */ if (fZ) goto L_0044a883;
L_0044a85b:; BB(0x0044a85b);
    /* 0044a85b: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0044a861: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a866u); f_0063aac0();
    /* 0044a866: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044a868: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 0044a86e: cmp dword ptr [ebp - 0xd4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a875: je 0x44a883 */ if (fZ) goto L_0044a883;
L_0044a877:; BB(0x0044a877);
    /* 0044a877: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 0044a881: jmp 0x44a88d */ goto L_0044a88d;
L_0044a883:; BB(0x0044a883);
    /* 0044a883: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
L_0044a88d:; BB(0x0044a88d);
    /* 0044a88d: movzx edx, byte ptr [ebp - 0x12c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffed4u));
    /* 0044a894: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a896: je 0x44a8a4 */ if (fZ) goto L_0044a8a4;
L_0044a898:; BB(0x0044a898);
    /* 0044a898: mov dword ptr [ebp - 0x130], 0xffffffff */ W32((u32)(r_ebp+0xfffffed0u), 0xffffffffu);
    /* 0044a8a2: jmp 0x44a8ad */ goto L_0044a8ad;
L_0044a8a4:; BB(0x0044a8a4);
    /* 0044a8a4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044a8a7: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
L_0044a8ad:; BB(0x0044a8ad);
    /* 0044a8ad: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0044a8b3: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0044a8b6: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044a8b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a8ba: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a8bfu); f_005dcb00();
    /* 0044a8bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a8c2: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0044a8c8: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0044a8ce: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a8d3u); f_0063aac0();
    /* 0044a8d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044a8d5: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0044a8db: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a8e2: je 0x44a90c */ if (fZ) goto L_0044a90c;
L_0044a8e4:; BB(0x0044a8e4);
    /* 0044a8e4: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0044a8ea: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44a8efu); f_0063aac0();
    /* 0044a8ef: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044a8f1: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 0044a8f7: cmp dword ptr [ebp - 0xe0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a8fe: je 0x44a90c */ if (fZ) goto L_0044a90c;
L_0044a900:; BB(0x0044a900);
    /* 0044a900: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 0044a90a: jmp 0x44a916 */ goto L_0044a916;
L_0044a90c:; BB(0x0044a90c);
    /* 0044a90c: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
L_0044a916:; BB(0x0044a916);
    /* 0044a916: movzx edx, byte ptr [ebp - 0x134] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeccu));
    /* 0044a91d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0044a91f: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0044a921: and edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0044a924: add edx, 0x3f3 */ {  u32 a = r_edx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044a92a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044a92d: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0044a933: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0044a936:; BB(0x0044a936);
    /* 0044a936: jmp 0x44a948 */ goto L_0044a948;
L_0044a938:; BB(0x0044a938);
    /* 0044a938: mov dword ptr [ebp - 0x1c], 0x29810 */ W32((u32)(r_ebp+0xffffffe4u), 0x29810u);
    /* 0044a93f: jmp 0x44a948 */ goto L_0044a948;
L_0044a941:; BB(0x0044a941);
    /* 0044a941: mov dword ptr [ebp - 0x1c], 0x29816 */ W32((u32)(r_ebp+0xffffffe4u), 0x29816u);
L_0044a948:; BB(0x0044a948);
    /* 0044a948: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044a94d: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0044a953: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0044a959: mov dword ptr [ecx + 0xf4], 0xffffffff */ W32((u32)(r_ecx+0xf4u), 0xffffffffu);
    /* 0044a963: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0044a969: mov dword ptr [edx + 0xf8], 0xffffffff */ W32((u32)(r_edx+0xf8u), 0xffffffffu);
    /* 0044a973: cmp dword ptr [ebp - 0x44], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a977: jne 0x44a9c5 */ if (!fZ) goto L_0044a9c5;
L_0044a979:; BB(0x0044a979);
    /* 0044a979: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a97d: jne 0x44a9a2 */ if (!fZ) goto L_0044a9a2;
L_0044a97f:; BB(0x0044a97f);
    /* 0044a97f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a981: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a983: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0044a988: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044a98b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0044a991: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044a994: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044a996: mov ecx, eax */ r_ecx = r_eax;
    /* 0044a998: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044a99b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44a99du); call_ind(t); }
    /* 0044a99d: jmp 0x44aafd */ goto L_0044aafd;
L_0044a9a2:; BB(0x0044a9a2);
    /* 0044a9a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044a9a4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0044a9aa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044a9ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a9ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044a9b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044a9b2: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044a9b8: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 0044a9bb: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x44a9c0u); f_005cd7c0();
    /* 0044a9c0: jmp 0x44aafd */ goto L_0044aafd;
L_0044a9c5:; BB(0x0044a9c5);
    /* 0044a9c5: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a9c9: je 0x44aa53 */ if (fZ) goto L_0044aa53;
L_0044a9cf:; BB(0x0044a9cf);
    /* 0044a9cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044a9d5: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x44a9dau); f_00636730();
    /* 0044a9da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044a9dc: je 0x44aa53 */ if (fZ) goto L_0044aa53;
L_0044a9de:; BB(0x0044a9de);
    /* 0044a9de: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044a9e2: jle 0x44aa76 */ if ((fZ||fS!=fO)) goto L_0044aa76;
L_0044a9e8:; BB(0x0044a9e8);
    /* 0044a9e8: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044a9eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044a9ec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44a9f1u); f_005dcb00();
    /* 0044a9f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044a9f4: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0044a9fa: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0044aa00: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44aa05u); f_0063aac0();
    /* 0044aa05: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044aa07: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0044aa0d: cmp dword ptr [ebp - 0xec], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aa14: je 0x44aa3e */ if (fZ) goto L_0044aa3e;
L_0044aa16:; BB(0x0044aa16);
    /* 0044aa16: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0044aa1c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44aa21u); f_0063aac0();
    /* 0044aa21: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044aa23: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 0044aa29: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aa30: je 0x44aa3e */ if (fZ) goto L_0044aa3e;
L_0044aa32:; BB(0x0044aa32);
    /* 0044aa32: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 0044aa3c: jmp 0x44aa48 */ goto L_0044aa48;
L_0044aa3e:; BB(0x0044aa3e);
    /* 0044aa3e: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
L_0044aa48:; BB(0x0044aa48);
    /* 0044aa48: movzx edx, byte ptr [ebp - 0x138] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffec8u));
    /* 0044aa4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aa51: je 0x44aa76 */ if (fZ) goto L_0044aa76;
L_0044aa53:; BB(0x0044aa53);
    /* 0044aa53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aa55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aa57: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0044aa5c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044aa5f: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0044aa65: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044aa68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044aa6a: mov ecx, eax */ r_ecx = r_eax;
    /* 0044aa6c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044aa6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44aa71u); call_ind(t); }
    /* 0044aa71: jmp 0x44aafd */ goto L_0044aafd;
L_0044aa76:; BB(0x0044aa76);
    /* 0044aa76: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aa7a: je 0x44aa87 */ if (fZ) goto L_0044aa87;
L_0044aa7c:; BB(0x0044aa7c);
    /* 0044aa7c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044aa7f: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 0044aa85: jmp 0x44aa98 */ goto L_0044aa98;
L_0044aa87:; BB(0x0044aa87);
    /* 0044aa87: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044aa8d: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x44aa92u); f_00636c50();
    /* 0044aa92: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
L_0044aa98:; BB(0x0044aa98);
    /* 0044aa98: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0044aa9e: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0044aaa1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044aaa4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044aaa7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044aaaa: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0044aaad: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0044aab0: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0044aab3: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0044aab6: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0044aab9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aabb: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0044aac1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044aac4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0044aaca: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0044aacd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044aacf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044aad2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44aad4u); call_ind(t); }
    /* 0044aad4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aad6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aad8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044aade: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x44aae3u); f_00637810();
    /* 0044aae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044aae4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0044aaea: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0044aaed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044aaee: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0044aaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044aaf2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044aaf8: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x44aafdu); f_00639390();
L_0044aafd:; BB(0x0044aafd);
    /* 0044aafd: mov esp, ebp */ r_esp = r_ebp;
    /* 0044aaff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ab00: ret  */ FN_RET(0x0044a170); r_esp += 4; return;
}

