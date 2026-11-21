#include "protos.h"

void f_0042d0f0(void) /* CrapsTable::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d0f0);
    /* 0042d0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d0f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d0f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042d0f9: mov dword ptr [ebp - 4], 0x37 */ W32((u32)(r_ebp+0xfffffffcu), 0x37u);
    /* 0042d100: jmp 0x42d10b */ goto L_0042d10b;
L_0042d102:; BB(0x0042d102);
    /* 0042d102: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d105: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d108: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042d10b:; BB(0x0042d10b);
    /* 0042d10b: cmp dword ptr [ebp - 4], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d10f: jg 0x42d156 */ if ((!fZ&&fS==fO)) goto L_0042d156;
L_0042d111:; BB(0x0042d111);
    /* 0042d111: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d115: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042d11b: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42d120u); f_00434880();
    /* 0042d120: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042d126: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042d12a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042d12d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042d130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d131: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d134: call 0x5eb6d0 */ r_esp -= 4; W32(r_esp, 0x42d139u); f_005eb6d0();
    /* 0042d139: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042d13c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d13e: je 0x42d14c */ if (fZ) goto L_0042d14c;
L_0042d140:; BB(0x0042d140);
    /* 0042d140: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d143: call 0x42cec0 */ r_esp -= 4; W32(r_esp, 0x42d148u); f_0042cec0();
    /* 0042d148: jmp 0x42d1b3 */ goto L_0042d1b3;
L_0042d14c:; BB(0x0042d14c);
    /* 0042d14c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d14f: call 0x42d070 */ r_esp -= 4; W32(r_esp, 0x42d154u); f_0042d070();
    /* 0042d154: jmp 0x42d102 */ goto L_0042d102;
L_0042d156:; BB(0x0042d156);
    /* 0042d156: mov dword ptr [ebp - 4], 0x31 */ W32((u32)(r_ebp+0xfffffffcu), 0x31u);
    /* 0042d15d: jmp 0x42d168 */ goto L_0042d168;
L_0042d15f:; BB(0x0042d15f);
    /* 0042d15f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d162: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042d165: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0042d168:; BB(0x0042d168);
    /* 0042d168: cmp dword ptr [ebp - 4], 0x36 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042d16c: jg 0x42d1b3 */ if ((!fZ&&fS==fO)) goto L_0042d1b3;
L_0042d16e:; BB(0x0042d16e);
    /* 0042d16e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d172: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042d178: call 0x434880 */ r_esp -= 4; W32(r_esp, 0x42d17du); f_00434880();
    /* 0042d17d: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042d183: mov eax, dword ptr [edx + eax*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*4+0x14u));
    /* 0042d187: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042d18a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042d18d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d18e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d191: call 0x5eb6d0 */ r_esp -= 4; W32(r_esp, 0x42d196u); f_005eb6d0();
    /* 0042d196: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042d199: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d19b: je 0x42d1a9 */ if (fZ) goto L_0042d1a9;
L_0042d19d:; BB(0x0042d19d);
    /* 0042d19d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d1a0: call 0x42cec0 */ r_esp -= 4; W32(r_esp, 0x42d1a5u); f_0042cec0();
    /* 0042d1a5: jmp 0x42d1b3 */ goto L_0042d1b3;
L_0042d1a9:; BB(0x0042d1a9);
    /* 0042d1a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d1ac: call 0x42d070 */ r_esp -= 4; W32(r_esp, 0x42d1b1u); f_0042d070();
    /* 0042d1b1: jmp 0x42d15f */ goto L_0042d15f;
L_0042d1b3:; BB(0x0042d1b3);
    /* 0042d1b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d1b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d1b6: ret 4 */ FN_RET(0x0042d0f0); r_esp += 8; return;
}

void f_0042d1c0(void) /* CrapsTable::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d1c0);
    /* 0042d1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d1c3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d1c6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042d1c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042d1cc: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0042d1d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1d1: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x42d1d7u); call_ind(t); }
    /* 0042d1d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d1da: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d1dd: jne 0x42d1ea */ if (!fZ) goto L_0042d1ea;
L_0042d1df:; BB(0x0042d1df);
    /* 0042d1df: mov ecx, dword ptr [0x7906d0] */ r_ecx = R32((u32)(0x7906d0u));
    /* 0042d1e5: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x42d1eau); f_005db240();
L_0042d1ea:; BB(0x0042d1ea);
    /* 0042d1ea: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042d1f0: mov eax, dword ptr [edx + 0xad8] */ r_eax = R32((u32)(r_edx+0xad8u));
    /* 0042d1f6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042d1f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d1fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d1fd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42d202u); f_005dcb00();
    /* 0042d202: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d207: je 0x42d265 */ if (fZ) goto L_0042d265;
L_0042d209:; BB(0x0042d209);
    /* 0042d209: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042d20f: mov eax, dword ptr [edx + 0xad8] */ r_eax = R32((u32)(r_edx+0xad8u));
    /* 0042d215: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0042d218: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042d21b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d21c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42d221u); f_005dcb00();
    /* 0042d221: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d224: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0042d227: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d22a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42d22fu); f_0063aac0();
    /* 0042d22f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042d231: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0042d234: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d238: je 0x42d256 */ if (fZ) goto L_0042d256;
L_0042d23a:; BB(0x0042d23a);
    /* 0042d23a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d23d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42d242u); f_0063aac0();
    /* 0042d242: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042d244: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042d247: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d24b: je 0x42d256 */ if (fZ) goto L_0042d256;
L_0042d24d:; BB(0x0042d24d);
    /* 0042d24d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0042d254: jmp 0x42d25d */ goto L_0042d25d;
L_0042d256:; BB(0x0042d256);
    /* 0042d256: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0042d25d:; BB(0x0042d25d);
    /* 0042d25d: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0042d261: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d263: jne 0x42d26a */ if (!fZ) goto L_0042d26a;
L_0042d265:; BB(0x0042d265);
    /* 0042d265: jmp 0x42d2f7 */ goto L_0042d2f7;
L_0042d26a:; BB(0x0042d26a);
    /* 0042d26a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042d26d: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0042d271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d272: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x42d278u); call_ind(t); }
    /* 0042d278: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d27b: cmp eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d27e: jne 0x42d29e */ if (!fZ) goto L_0042d29e;
L_0042d280:; BB(0x0042d280);
    /* 0042d280: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042d286: mov edx, dword ptr [ecx + 0xad8] */ r_edx = R32((u32)(r_ecx+0xad8u));
    /* 0042d28c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0042d28f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d293: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042d299: call 0x4362a0 */ r_esp -= 4; W32(r_esp, 0x42d29eu); f_004362a0();
L_0042d29e:; BB(0x0042d29e);
    /* 0042d29e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042d2a1: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0042d2a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2a6: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x42d2acu); call_ind(t); }
    /* 0042d2ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042d2af: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d2b2: jne 0x42d2f7 */ if (!fZ) goto L_0042d2f7;
L_0042d2b4:; BB(0x0042d2b4);
    /* 0042d2b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2b6: push 0x30dbd3 */ { u32 v = 0x30dbd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d2bb: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042d2c1: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x42d2c6u); f_005f2a60();
    /* 0042d2c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0042d2c8: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x42d2cdu); f_006026d0();
    /* 0042d2cd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042d2d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d2d2: je 0x42d2f7 */ if (fZ) goto L_0042d2f7;
L_0042d2d4:; BB(0x0042d2d4);
    /* 0042d2d4: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042d2da: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 0042d2e0: mov byte ptr [edx + 0x18c], 1 */ W8((u32)(r_edx+0x18cu), 0x1u);
    /* 0042d2e7: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042d2ec: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 0042d2f2: call 0x42d3f0 */ r_esp -= 4; W32(r_esp, 0x42d2f7u); f_0042d3f0();
L_0042d2f7:; BB(0x0042d2f7);
    /* 0042d2f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d2f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d2fa: ret 4 */ FN_RET(0x0042d1c0); r_esp += 8; return;
}

