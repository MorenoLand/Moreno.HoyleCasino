#include "protos.h"

void f_00423030(void) /* sub_423030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00423030);
    /* 00423030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00423031: mov ebp, esp */ r_ebp = r_esp;
    /* 00423033: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00423036: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00423039: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0042303e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00423041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423044: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00423047: mov byte ptr [ecx + 0xa9], 1 */ W8((u32)(r_ecx+0xa9u), 0x1u);
    /* 0042304e: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00423054: call 0x41f1b0 */ r_esp -= 4; W32(r_esp, 0x423059u); f_0041f1b0();
    /* 00423059: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042305c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042305d: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00423063: call 0x426ed0 */ r_esp -= 4; W32(r_esp, 0x423068u); f_00426ed0();
    /* 00423068: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042306b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042306c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423071u); f_005dcb00();
    /* 00423071: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423074: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00423077: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042307a: mov byte ptr [ecx + 0x4a2], 1 */ W8((u32)(r_ecx+0x4a2u), 0x1u);
    /* 00423081: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423083: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 00423089: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042308c: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00423092: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00423095: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423097: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042309a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42309cu); call_ind(t); }
    /* 0042309c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042309e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042309f: ret 4 */ FN_RET(0x00423030); r_esp += 8; return;
}

void f_004230b0(void) /* sub_4230B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004230b0);
    /* 004230b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004230b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004230b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004230b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004230b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004230ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004230bb: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004230c1: call 0x427300 */ r_esp -= 4; W32(r_esp, 0x4230c6u); f_00427300();
    /* 004230c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004230c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004230c9: ret 4 */ FN_RET(0x004230b0); r_esp += 8; return;
}

void f_004230d0(void) /* sub_4230D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004230d0);
    /* 004230d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004230d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004230d3: sub esp, 0x170 */ {  u32 a = r_esp; u32 b = 0x170u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004230d9: mov dword ptr [ebp - 0x120], ecx */ W32((u32)(r_ebp+0xfffffee0u), r_ecx);
    /* 004230df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004230e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004230e3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4230e8u); f_0064c8a0();
    /* 004230e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004230eb: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004230ee: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004230f1: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004230f4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004230f7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004230fa: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004230fd: mov dword ptr [ebp - 0x44], 0xffffffff */ W32((u32)(r_ebp+0xffffffbcu), 0xffffffffu);
    /* 00423104: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0042310b: mov dword ptr [ebp - 0x4c], 0xffffffff */ W32((u32)(r_ebp+0xffffffb4u), 0xffffffffu);
    /* 00423112: fldz  */ FPUSH(0.0);
    /* 00423114: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00423117: fld1  */ FPUSH(1.0);
    /* 00423119: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042311c: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00423122: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00423128: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0042312b: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00423132: mov dword ptr [ebp - 0x48], 0xffffffff */ W32((u32)(r_ebp+0xffffffb8u), 0xffffffffu);
    /* 00423139: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00423140: mov dword ptr [ebp - 0x50], 0xffffffff */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffffu);
    /* 00423147: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042314d: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 00423153: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00423156: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00423159: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0042315f: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00423165: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0042316b: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 00423171: cmp dword ptr [ebp - 0x124], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00423178: ja 0x423a6a */ if ((!fC&&!fZ)) goto L_00423a6a;
L_0042317e:; BB(0x0042317e);
    /* 0042317e: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 00423184: jmp dword ptr [eax*4 + 0x423c64] */ { u32 t = R32((u32)(r_eax*4+0x423c64u)); switch (t) { case 0x4231a0u: goto L_004231a0; case 0x42318bu: goto L_0042318b; case 0x4231b5u: goto L_004231b5; case 0x423684u: goto L_00423684; case 0x423a30u: goto L_00423a30; case 0x423a51u: goto L_00423a51; case 0x423a5au: goto L_00423a5a; case 0x423a63u: goto L_00423a63; default: UNSUP(0x00423184, "jump table entry is not a known target"); } }
L_0042318b:; BB(0x0042318b);
    /* 0042318b: mov dword ptr [ebp - 0x20], 0x803 */ W32((u32)(r_ebp+0xffffffe0u), 0x803u);
    /* 00423192: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00423198: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042319b: jmp 0x423a6a */ goto L_00423a6a;
L_004231a0:; BB(0x004231a0);
    /* 004231a0: mov dword ptr [ebp - 0x20], 0x7dd */ W32((u32)(r_ebp+0xffffffe0u), 0x7ddu);
    /* 004231a7: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 004231ad: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004231b0: jmp 0x423a6a */ goto L_00423a6a;
L_004231b5:; BB(0x004231b5);
    /* 004231b5: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004231b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004231b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004231bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004231bd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4231c2u); f_005dcb00();
    /* 004231c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004231c5: mov ecx, eax */ r_ecx = r_eax;
    /* 004231c7: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x4231ccu); f_005d6020();
    /* 004231cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004231cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004231d0: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004231d6: call 0x4275a0 */ r_esp -= 4; W32(r_esp, 0x4231dbu); f_004275a0();
    /* 004231db: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004231de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004231e0: je 0x423251 */ if (fZ) goto L_00423251;
L_004231e2:; BB(0x004231e2);
    /* 004231e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004231e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004231e6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4231ebu); f_005dcb00();
    /* 004231eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004231ee: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004231f1: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 004231f4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4231f9u); f_0063aac0();
    /* 004231f9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004231fb: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004231fe: cmp dword ptr [ebp - 0x68], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423202: je 0x423223 */ if (fZ) goto L_00423223;
L_00423204:; BB(0x00423204);
    /* 00423204: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00423207: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42320cu); f_0063aac0();
    /* 0042320c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0042320e: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00423211: cmp dword ptr [ebp - 0x6c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423215: je 0x423223 */ if (fZ) goto L_00423223;
L_00423217:; BB(0x00423217);
    /* 00423217: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 00423221: jmp 0x42322d */ goto L_0042322d;
L_00423223:; BB(0x00423223);
    /* 00423223: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_0042322d:; BB(0x0042322d);
    /* 0042322d: movzx edx, byte ptr [ebp - 0x128] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffed8u));
    /* 00423234: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00423236: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00423238: and edx, 0xfffff820 */ {  u32 a = r_edx; u32 b = 0xfffff820u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0042323e: add edx, 0x7df */ {  u32 a = r_edx; u32 b = 0x7dfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00423244: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00423247: fld1  */ FPUSH(1.0);
    /* 00423249: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042324c: jmp 0x423a6a */ goto L_00423a6a;
L_00423251:; BB(0x00423251);
    /* 00423251: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423254: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423255: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0042325b: call 0x427600 */ r_esp -= 4; W32(r_esp, 0x423260u); f_00427600();
    /* 00423260: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00423263: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423265: je 0x4232d6 */ if (fZ) goto L_004232d6;
L_00423267:; BB(0x00423267);
    /* 00423267: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042326a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042326b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423270u); f_005dcb00();
    /* 00423270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423273: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00423276: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00423279: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42327eu); f_0063aac0();
    /* 0042327e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00423280: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00423283: cmp dword ptr [ebp - 0x74], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423287: je 0x4232a8 */ if (fZ) goto L_004232a8;
L_00423289:; BB(0x00423289);
    /* 00423289: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0042328c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423291u); f_0063aac0();
    /* 00423291: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423293: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 00423296: cmp dword ptr [ebp - 0x78], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042329a: je 0x4232a8 */ if (fZ) goto L_004232a8;
L_0042329c:; BB(0x0042329c);
    /* 0042329c: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 004232a6: jmp 0x4232b2 */ goto L_004232b2;
L_004232a8:; BB(0x004232a8);
    /* 004232a8: mov dword ptr [ebp - 0x12c], 1 */ W32((u32)(r_ebp+0xfffffed4u), 0x1u);
L_004232b2:; BB(0x004232b2);
    /* 004232b2: movzx edx, byte ptr [ebp - 0x12c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffed4u));
    /* 004232b9: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 004232bb: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 004232bd: and edx, 0xfffff81f */ {  u32 a = r_edx; u32 b = 0xfffff81fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004232c3: add edx, 0x7e0 */ {  u32 a = r_edx; u32 b = 0x7e0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004232c9: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004232cc: fld1  */ FPUSH(1.0);
    /* 004232ce: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004232d1: jmp 0x423a6a */ goto L_00423a6a;
L_004232d6:; BB(0x004232d6);
    /* 004232d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004232d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004232da: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004232e0: call 0x427670 */ r_esp -= 4; W32(r_esp, 0x4232e5u); f_00427670();
    /* 004232e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004232e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004232ea: je 0x42336a */ if (fZ) goto L_0042336a;
L_004232ec:; BB(0x004232ec);
    /* 004232ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004232ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004232f0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4232f5u); f_005dcb00();
    /* 004232f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004232f8: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004232fe: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00423304: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423309u); f_0063aac0();
    /* 00423309: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042330b: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0042330e: cmp dword ptr [ebp - 0x80], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423312: je 0x42333c */ if (fZ) goto L_0042333c;
L_00423314:; BB(0x00423314);
    /* 00423314: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0042331a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42331fu); f_0063aac0();
    /* 0042331f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423321: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00423327: cmp dword ptr [ebp - 0x84], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042332e: je 0x42333c */ if (fZ) goto L_0042333c;
L_00423330:; BB(0x00423330);
    /* 00423330: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 0042333a: jmp 0x423346 */ goto L_00423346;
L_0042333c:; BB(0x0042333c);
    /* 0042333c: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
L_00423346:; BB(0x00423346);
    /* 00423346: movzx edx, byte ptr [ebp - 0x130] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffed0u));
    /* 0042334d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0042334f: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00423351: and edx, 0xfffffc2f */ {  u32 a = r_edx; u32 b = 0xfffffc2fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00423357: add edx, 0x7de */ {  u32 a = r_edx; u32 b = 0x7deu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042335d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00423360: fld1  */ FPUSH(1.0);
    /* 00423362: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00423365: jmp 0x423a6a */ goto L_00423a6a;
L_0042336a:; BB(0x0042336a);
    /* 0042336a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042336d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042336e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423373u); f_005dcb00();
    /* 00423373: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423376: cmp dword ptr [eax + 0x4a8], 3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042337d: jle 0x42341a */ if ((fZ||fS!=fO)) goto L_0042341a;
L_00423383:; BB(0x00423383);
    /* 00423383: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00423385: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x42338au); f_0062fbf0();
    /* 0042338a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042338d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042338f: jne 0x42341a */ if (!fZ) goto L_0042341a;
L_00423395:; BB(0x00423395);
    /* 00423395: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423399: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42339eu); f_005dcb00();
    /* 0042339e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004233a1: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004233a7: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004233ad: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4233b2u); f_0063aac0();
    /* 004233b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004233b4: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 004233ba: cmp dword ptr [ebp - 0x8c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004233c1: je 0x4233eb */ if (fZ) goto L_004233eb;
L_004233c3:; BB(0x004233c3);
    /* 004233c3: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 004233c9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4233ceu); f_0063aac0();
    /* 004233ce: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004233d0: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004233d6: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004233dd: je 0x4233eb */ if (fZ) goto L_004233eb;
L_004233df:; BB(0x004233df);
    /* 004233df: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 004233e9: jmp 0x4233f5 */ goto L_004233f5;
L_004233eb:; BB(0x004233eb);
    /* 004233eb: mov dword ptr [ebp - 0x134], 1 */ W32((u32)(r_ebp+0xfffffeccu), 0x1u);
L_004233f5:; BB(0x004233f5);
    /* 004233f5: movzx ecx, byte ptr [ebp - 0x134] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeccu));
    /* 004233fc: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004233fe: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00423400: and ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00423403: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00423409: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042340c: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00423412: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00423415: jmp 0x423a6a */ goto L_00423a6a;
L_0042341a:; BB(0x0042341a);
    /* 0042341a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042341d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042341e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423423u); f_005dcb00();
    /* 00423423: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423426: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0042342d: jge 0x4234c9 */ if ((fS==fO)) goto L_004234c9;
L_00423433:; BB(0x00423433);
    /* 00423433: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00423435: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x42343au); f_0062fbf0();
    /* 0042343a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042343d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042343f: jne 0x4234c9 */ if (!fZ) goto L_004234c9;
L_00423445:; BB(0x00423445);
    /* 00423445: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00423448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423449: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42344eu); f_005dcb00();
    /* 0042344e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423451: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00423457: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0042345d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423462u); f_0063aac0();
    /* 00423462: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423464: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0042346a: cmp dword ptr [ebp - 0x98], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423471: je 0x42349b */ if (fZ) goto L_0042349b;
L_00423473:; BB(0x00423473);
    /* 00423473: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00423479: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42347eu); f_0063aac0();
    /* 0042347e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423480: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00423486: cmp dword ptr [ebp - 0x9c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042348d: je 0x42349b */ if (fZ) goto L_0042349b;
L_0042348f:; BB(0x0042348f);
    /* 0042348f: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 00423499: jmp 0x4234a5 */ goto L_004234a5;
L_0042349b:; BB(0x0042349b);
    /* 0042349b: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
L_004234a5:; BB(0x004234a5);
    /* 004234a5: movzx eax, byte ptr [ebp - 0x138] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffec8u));
    /* 004234ac: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 004234ae: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004234b0: and eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004234b3: add eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004234b8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004234bb: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 004234c1: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004234c4: jmp 0x423a6a */ goto L_00423a6a;
L_004234c9:; BB(0x004234c9);
    /* 004234c9: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004234cf: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004234d2: movzx edx, byte ptr [ecx + 0xd0] */ r_edx = (u32)R8((u32)(r_ecx+0xd0u));
    /* 004234d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004234db: je 0x423561 */ if (fZ) goto L_00423561;
L_004234e1:; BB(0x004234e1);
    /* 004234e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004234e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004234e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4234eau); f_005dcb00();
    /* 004234ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004234ed: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 004234f3: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 004234f9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4234feu); f_0063aac0();
    /* 004234fe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423500: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00423506: cmp dword ptr [ebp - 0xa4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042350d: je 0x423537 */ if (fZ) goto L_00423537;
L_0042350f:; BB(0x0042350f);
    /* 0042350f: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00423515: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42351au); f_0063aac0();
    /* 0042351a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042351c: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00423522: cmp dword ptr [ebp - 0xa8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423529: je 0x423537 */ if (fZ) goto L_00423537;
L_0042352b:; BB(0x0042352b);
    /* 0042352b: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 00423535: jmp 0x423541 */ goto L_00423541;
L_00423537:; BB(0x00423537);
    /* 00423537: mov dword ptr [ebp - 0x13c], 1 */ W32((u32)(r_ebp+0xfffffec4u), 0x1u);
L_00423541:; BB(0x00423541);
    /* 00423541: movzx eax, byte ptr [ebp - 0x13c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffec4u));
    /* 00423548: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0042354a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0042354c: and eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0042354f: add eax, 0x3fe */ {  u32 a = r_eax; u32 b = 0x3feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00423554: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00423557: fld1  */ FPUSH(1.0);
    /* 00423559: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042355c: jmp 0x423a6a */ goto L_00423a6a;
L_00423561:; BB(0x00423561);
    /* 00423561: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423565: jge 0x4235f0 */ if ((fS==fO)) goto L_004235f0;
L_0042356b:; BB(0x0042356b);
    /* 0042356b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042356e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042356f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423574u); f_005dcb00();
    /* 00423574: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423577: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0042357d: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00423583: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423588u); f_0063aac0();
    /* 00423588: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042358a: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00423590: cmp dword ptr [ebp - 0xb0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423597: je 0x4235c1 */ if (fZ) goto L_004235c1;
L_00423599:; BB(0x00423599);
    /* 00423599: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0042359f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4235a4u); f_0063aac0();
    /* 004235a4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004235a6: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 004235ac: cmp dword ptr [ebp - 0xb4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004235b3: je 0x4235c1 */ if (fZ) goto L_004235c1;
L_004235b5:; BB(0x004235b5);
    /* 004235b5: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 004235bf: jmp 0x4235cb */ goto L_004235cb;
L_004235c1:; BB(0x004235c1);
    /* 004235c1: mov dword ptr [ebp - 0x140], 1 */ W32((u32)(r_ebp+0xfffffec0u), 0x1u);
L_004235cb:; BB(0x004235cb);
    /* 004235cb: movzx ecx, byte ptr [ebp - 0x140] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffec0u));
    /* 004235d2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004235d4: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004235d6: and ecx, 0xffffffe6 */ {  u32 a = r_ecx; u32 b = 0xffffffe6u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004235d9: add ecx, 0x402 */ {  u32 a = r_ecx; u32 b = 0x402u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004235df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004235e2: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004235e8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004235eb: jmp 0x423a6a */ goto L_00423a6a;
L_004235f0:; BB(0x004235f0);
    /* 004235f0: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004235f4: jle 0x42367f */ if ((fZ||fS!=fO)) goto L_0042367f;
L_004235fa:; BB(0x004235fa);
    /* 004235fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004235fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004235fe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423603u); f_005dcb00();
    /* 00423603: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423606: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0042360c: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00423612: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423617u); f_0063aac0();
    /* 00423617: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00423619: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0042361f: cmp dword ptr [ebp - 0xbc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423626: je 0x423650 */ if (fZ) goto L_00423650;
L_00423628:; BB(0x00423628);
    /* 00423628: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0042362e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423633u); f_0063aac0();
    /* 00423633: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423635: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0042363b: cmp dword ptr [ebp - 0xc0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423642: je 0x423650 */ if (fZ) goto L_00423650;
L_00423644:; BB(0x00423644);
    /* 00423644: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 0042364e: jmp 0x42365a */ goto L_0042365a;
L_00423650:; BB(0x00423650);
    /* 00423650: mov dword ptr [ebp - 0x144], 1 */ W32((u32)(r_ebp+0xfffffebcu), 0x1u);
L_0042365a:; BB(0x0042365a);
    /* 0042365a: movzx edx, byte ptr [ebp - 0x144] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffebcu));
    /* 00423661: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00423663: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00423665: and edx, 0xffffffec */ {  u32 a = r_edx; u32 b = 0xffffffecu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00423668: add edx, 0x404 */ {  u32 a = r_edx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042366e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00423671: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00423677: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0042367a: jmp 0x423a6a */ goto L_00423a6a;
L_0042367f:; BB(0x0042367f);
    /* 0042367f: jmp 0x423a6a */ goto L_00423a6a;
L_00423684:; BB(0x00423684);
    /* 00423684: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0042368a: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x42368fu); f_005dac90();
    /* 0042368f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00423692: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00423698: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x42369du); f_005dada0();
    /* 0042369d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004236a0: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 004236a6: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x4236abu); f_005db190();
    /* 004236ab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004236ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004236b0: je 0x4237ca */ if (fZ) goto L_004237ca;
L_004236b6:; BB(0x004236b6);
    /* 004236b6: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004236ba: je 0x4237ca */ if (fZ) goto L_004237ca;
L_004236c0:; BB(0x004236c0);
    /* 004236c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004236c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004236c4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4236c9u); f_005dcb00();
    /* 004236c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004236cc: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 004236d2: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004236d8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4236ddu); f_0063aac0();
    /* 004236dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004236df: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 004236e5: cmp dword ptr [ebp - 0xc8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004236ec: je 0x423716 */ if (fZ) goto L_00423716;
L_004236ee:; BB(0x004236ee);
    /* 004236ee: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004236f4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4236f9u); f_0063aac0();
    /* 004236f9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004236fb: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00423701: cmp dword ptr [ebp - 0xcc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423708: je 0x423716 */ if (fZ) goto L_00423716;
L_0042370a:; BB(0x0042370a);
    /* 0042370a: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 00423714: jmp 0x423720 */ goto L_00423720;
L_00423716:; BB(0x00423716);
    /* 00423716: mov dword ptr [ebp - 0x148], 1 */ W32((u32)(r_ebp+0xfffffeb8u), 0x1u);
L_00423720:; BB(0x00423720);
    /* 00423720: movzx ecx, byte ptr [ebp - 0x148] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeb8u));
    /* 00423727: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423729: je 0x423737 */ if (fZ) goto L_00423737;
L_0042372b:; BB(0x0042372b);
    /* 0042372b: mov dword ptr [ebp - 0x14c], 0xffffffff */ W32((u32)(r_ebp+0xfffffeb4u), 0xffffffffu);
    /* 00423735: jmp 0x423740 */ goto L_00423740;
L_00423737:; BB(0x00423737);
    /* 00423737: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042373a: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
L_00423740:; BB(0x00423740);
    /* 00423740: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00423746: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00423749: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042374c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042374d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423752u); f_005dcb00();
    /* 00423752: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423755: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0042375b: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00423761: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423766u); f_0063aac0();
    /* 00423766: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423768: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 0042376e: cmp dword ptr [ebp - 0xd4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423775: je 0x42379f */ if (fZ) goto L_0042379f;
L_00423777:; BB(0x00423777);
    /* 00423777: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0042377d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423782u); f_0063aac0();
    /* 00423782: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00423784: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0042378a: cmp dword ptr [ebp - 0xd8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423791: je 0x42379f */ if (fZ) goto L_0042379f;
L_00423793:; BB(0x00423793);
    /* 00423793: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
    /* 0042379d: jmp 0x4237a9 */ goto L_004237a9;
L_0042379f:; BB(0x0042379f);
    /* 0042379f: mov dword ptr [ebp - 0x150], 1 */ W32((u32)(r_ebp+0xfffffeb0u), 0x1u);
L_004237a9:; BB(0x004237a9);
    /* 004237a9: movzx ecx, byte ptr [ebp - 0x150] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeb0u));
    /* 004237b0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004237b2: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 004237b4: and ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004237b7: add ecx, 0x3fd */ {  u32 a = r_ecx; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004237bd: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004237c0: fld1  */ FPUSH(1.0);
    /* 004237c2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004237c5: jmp 0x423a2e */ goto L_00423a2e;
L_004237ca:; BB(0x004237ca);
    /* 004237ca: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004237ce: je 0x4237e7 */ if (fZ) goto L_004237e7;
L_004237d0:; BB(0x004237d0);
    /* 004237d0: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 004237d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004237d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004237d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004237d8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4237ddu); f_005dcb00();
    /* 004237dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004237e0: mov ecx, eax */ r_ecx = r_eax;
    /* 004237e2: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x4237e7u); f_005d6020();
L_004237e7:; BB(0x004237e7);
    /* 004237e7: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004237eb: je 0x42391b */ if (fZ) goto L_0042391b;
L_004237f1:; BB(0x004237f1);
    /* 004237f1: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004237f5: jle 0x42391b */ if ((fZ||fS!=fO)) goto L_0042391b;
L_004237fb:; BB(0x004237fb);
    /* 004237fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004237fd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x423802u); f_0062fbf0();
    /* 00423802: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423807: jne 0x42391b */ if (!fZ) goto L_0042391b;
L_0042380d:; BB(0x0042380d);
    /* 0042380d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00423810: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423811: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423816u); f_005dcb00();
    /* 00423816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423819: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0042381f: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00423825: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42382au); f_0063aac0();
    /* 0042382a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042382c: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00423832: cmp dword ptr [ebp - 0xe0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423839: je 0x423863 */ if (fZ) goto L_00423863;
L_0042383b:; BB(0x0042383b);
    /* 0042383b: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00423841: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423846u); f_0063aac0();
    /* 00423846: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00423848: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0042384e: cmp dword ptr [ebp - 0xe4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423855: je 0x423863 */ if (fZ) goto L_00423863;
L_00423857:; BB(0x00423857);
    /* 00423857: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 00423861: jmp 0x42386d */ goto L_0042386d;
L_00423863:; BB(0x00423863);
    /* 00423863: mov dword ptr [ebp - 0x154], 1 */ W32((u32)(r_ebp+0xfffffeacu), 0x1u);
L_0042386d:; BB(0x0042386d);
    /* 0042386d: movzx ecx, byte ptr [ebp - 0x154] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeacu));
    /* 00423874: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423876: je 0x423884 */ if (fZ) goto L_00423884;
L_00423878:; BB(0x00423878);
    /* 00423878: mov dword ptr [ebp - 0x158], 0xffffffff */ W32((u32)(r_ebp+0xfffffea8u), 0xffffffffu);
    /* 00423882: jmp 0x42388d */ goto L_0042388d;
L_00423884:; BB(0x00423884);
    /* 00423884: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00423887: mov dword ptr [ebp - 0x158], edx */ W32((u32)(r_ebp+0xfffffea8u), r_edx);
L_0042388d:; BB(0x0042388d);
    /* 0042388d: mov eax, dword ptr [ebp - 0x158] */ r_eax = R32((u32)(r_ebp+0xfffffea8u));
    /* 00423893: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00423896: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00423899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042389a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42389fu); f_005dcb00();
    /* 0042389f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004238a2: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 004238a8: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 004238ae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4238b3u); f_0063aac0();
    /* 004238b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004238b5: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 004238bb: cmp dword ptr [ebp - 0xec], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004238c2: je 0x4238ec */ if (fZ) goto L_004238ec;
L_004238c4:; BB(0x004238c4);
    /* 004238c4: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 004238ca: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4238cfu); f_0063aac0();
    /* 004238cf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004238d1: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 004238d7: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004238de: je 0x4238ec */ if (fZ) goto L_004238ec;
L_004238e0:; BB(0x004238e0);
    /* 004238e0: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 004238ea: jmp 0x4238f6 */ goto L_004238f6;
L_004238ec:; BB(0x004238ec);
    /* 004238ec: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
L_004238f6:; BB(0x004238f6);
    /* 004238f6: movzx ecx, byte ptr [ebp - 0x15c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffea4u));
    /* 004238fd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 004238ff: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00423901: and ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00423904: add ecx, 0x3f2 */ {  u32 a = r_ecx; u32 b = 0x3f2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042390a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042390d: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00423913: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00423916: jmp 0x423a2e */ goto L_00423a2e;
L_0042391b:; BB(0x0042391b);
    /* 0042391b: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042391f: je 0x423a2e */ if (fZ) goto L_00423a2e;
L_00423925:; BB(0x00423925);
    /* 00423925: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00423928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423929: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42392eu); f_005dcb00();
    /* 0042392e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423931: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00423937: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 0042393d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423942u); f_0063aac0();
    /* 00423942: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00423944: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0042394a: cmp dword ptr [ebp - 0xf8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423951: je 0x42397b */ if (fZ) goto L_0042397b;
L_00423953:; BB(0x00423953);
    /* 00423953: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00423959: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x42395eu); f_0063aac0();
    /* 0042395e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423960: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 00423966: cmp dword ptr [ebp - 0xfc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042396d: je 0x42397b */ if (fZ) goto L_0042397b;
L_0042396f:; BB(0x0042396f);
    /* 0042396f: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
    /* 00423979: jmp 0x423985 */ goto L_00423985;
L_0042397b:; BB(0x0042397b);
    /* 0042397b: mov dword ptr [ebp - 0x160], 1 */ W32((u32)(r_ebp+0xfffffea0u), 0x1u);
L_00423985:; BB(0x00423985);
    /* 00423985: movzx edx, byte ptr [ebp - 0x160] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffea0u));
    /* 0042398c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042398e: je 0x42399c */ if (fZ) goto L_0042399c;
L_00423990:; BB(0x00423990);
    /* 00423990: mov dword ptr [ebp - 0x164], 0xffffffff */ W32((u32)(r_ebp+0xfffffe9cu), 0xffffffffu);
    /* 0042399a: jmp 0x4239a5 */ goto L_004239a5;
L_0042399c:; BB(0x0042399c);
    /* 0042399c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0042399f: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
L_004239a5:; BB(0x004239a5);
    /* 004239a5: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 004239ab: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 004239ae: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004239b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004239b2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4239b7u); f_005dcb00();
    /* 004239b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004239ba: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 004239c0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004239c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4239cbu); f_0063aac0();
    /* 004239cb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004239cd: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 004239d3: cmp dword ptr [ebp - 0x104], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffefcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004239da: je 0x423a04 */ if (fZ) goto L_00423a04;
L_004239dc:; BB(0x004239dc);
    /* 004239dc: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004239e2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4239e7u); f_0063aac0();
    /* 004239e7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004239e9: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 004239ef: cmp dword ptr [ebp - 0x108], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004239f6: je 0x423a04 */ if (fZ) goto L_00423a04;
L_004239f8:; BB(0x004239f8);
    /* 004239f8: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 00423a02: jmp 0x423a0e */ goto L_00423a0e;
L_00423a04:; BB(0x00423a04);
    /* 00423a04: mov dword ptr [ebp - 0x168], 1 */ W32((u32)(r_ebp+0xfffffe98u), 0x1u);
L_00423a0e:; BB(0x00423a0e);
    /* 00423a0e: movzx edx, byte ptr [ebp - 0x168] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe98u));
    /* 00423a15: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00423a17: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00423a19: and edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00423a1c: add edx, 0x3f3 */ {  u32 a = r_edx; u32 b = 0x3f3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00423a22: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00423a25: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00423a2b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00423a2e:; BB(0x00423a2e);
    /* 00423a2e: jmp 0x423a6a */ goto L_00423a6a;
L_00423a30:; BB(0x00423a30);
    /* 00423a30: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00423a32: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x423a37u); f_0062fbf0();
    /* 00423a37: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423a3a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423a3d: jne 0x423a48 */ if (!fZ) goto L_00423a48;
L_00423a3f:; BB(0x00423a3f);
    /* 00423a3f: mov dword ptr [ebp - 0x1c], 0x2981f */ W32((u32)(r_ebp+0xffffffe4u), 0x2981fu);
    /* 00423a46: jmp 0x423a4f */ goto L_00423a4f;
L_00423a48:; BB(0x00423a48);
    /* 00423a48: mov dword ptr [ebp - 0x1c], 0x29810 */ W32((u32)(r_ebp+0xffffffe4u), 0x29810u);
L_00423a4f:; BB(0x00423a4f);
    /* 00423a4f: jmp 0x423a6a */ goto L_00423a6a;
L_00423a51:; BB(0x00423a51);
    /* 00423a51: mov dword ptr [ebp - 0x1c], 0x29816 */ W32((u32)(r_ebp+0xffffffe4u), 0x29816u);
    /* 00423a58: jmp 0x423a6a */ goto L_00423a6a;
L_00423a5a:; BB(0x00423a5a);
    /* 00423a5a: mov dword ptr [ebp - 0x1c], 0x29822 */ W32((u32)(r_ebp+0xffffffe4u), 0x29822u);
    /* 00423a61: jmp 0x423a6a */ goto L_00423a6a;
L_00423a63:; BB(0x00423a63);
    /* 00423a63: mov dword ptr [ebp - 0x1c], 0x29825 */ W32((u32)(r_ebp+0xffffffe4u), 0x29825u);
L_00423a6a:; BB(0x00423a6a);
    /* 00423a6a: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00423a6f: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00423a75: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00423a7b: mov dword ptr [ecx + 0xe0], 0xffffffff */ W32((u32)(r_ecx+0xe0u), 0xffffffffu);
    /* 00423a85: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00423a8b: mov dword ptr [edx + 0xe4], 0xffffffff */ W32((u32)(r_edx+0xe4u), 0xffffffffu);
    /* 00423a95: cmp dword ptr [ebp - 0x44], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423a99: jne 0x423b29 */ if (!fZ) goto L_00423b29;
L_00423a9f:; BB(0x00423a9f);
    /* 00423a9f: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423aa3: jne 0x423ac8 */ if (!fZ) goto L_00423ac8;
L_00423aa5:; BB(0x00423aa5);
    /* 00423aa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423aa7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423aa9: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00423aae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00423ab1: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00423ab7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00423aba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00423abc: mov ecx, eax */ r_ecx = r_eax;
    /* 00423abe: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00423ac1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423ac3u); call_ind(t); }
    /* 00423ac3: jmp 0x423c5f */ goto L_00423c5f;
L_00423ac8:; BB(0x00423ac8);
    /* 00423ac8: cmp dword ptr [ebp - 0x1c], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423acc: jne 0x423ade */ if (!fZ) goto L_00423ade;
L_00423ace:; BB(0x00423ace);
    /* 00423ace: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00423ad4: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00423ad7: mov byte ptr [edx + 0x190], 1 */ W8((u32)(r_edx+0x190u), 0x1u);
L_00423ade:; BB(0x00423ade);
    /* 00423ade: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423ae2: jne 0x423b02 */ if (!fZ) goto L_00423b02;
L_00423ae4:; BB(0x00423ae4);
    /* 00423ae4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423ae6: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00423aeb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00423aee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423aef: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00423af2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423af3: mov eax, dword ptr [0x790360] */ r_eax = R32((u32)(0x790360u));
    /* 00423af8: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00423afb: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x423b00u); f_005cd7c0();
    /* 00423b00: jmp 0x423b24 */ goto L_00423b24;
L_00423b02:; BB(0x00423b02);
    /* 00423b02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423b04: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00423b0a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00423b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423b0e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00423b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423b12: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00423b15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00423b16: mov edx, dword ptr [0x790360] */ r_edx = R32((u32)(0x790360u));
    /* 00423b1c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00423b1f: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x423b24u); f_005cd700();
L_00423b24:; BB(0x00423b24);
    /* 00423b24: jmp 0x423c5f */ goto L_00423c5f;
L_00423b29:; BB(0x00423b29);
    /* 00423b29: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423b2d: je 0x423bb7 */ if (fZ) goto L_00423bb7;
L_00423b33:; BB(0x00423b33);
    /* 00423b33: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00423b39: call 0x636730 */ r_esp -= 4; W32(r_esp, 0x423b3eu); f_00636730();
    /* 00423b3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423b40: je 0x423bb7 */ if (fZ) goto L_00423bb7;
L_00423b42:; BB(0x00423b42);
    /* 00423b42: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00423b46: jle 0x423bd8 */ if ((fZ||fS!=fO)) goto L_00423bd8;
L_00423b4c:; BB(0x00423b4c);
    /* 00423b4c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00423b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423b50: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x423b55u); f_005dcb00();
    /* 00423b55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00423b58: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00423b5e: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00423b64: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423b69u); f_0063aac0();
    /* 00423b69: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00423b6b: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00423b71: cmp dword ptr [ebp - 0x114], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423b78: je 0x423ba2 */ if (fZ) goto L_00423ba2;
L_00423b7a:; BB(0x00423b7a);
    /* 00423b7a: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 00423b80: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x423b85u); f_0063aac0();
    /* 00423b85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423b87: mov dword ptr [ebp - 0x118], edx */ W32((u32)(r_ebp+0xfffffee8u), r_edx);
    /* 00423b8d: cmp dword ptr [ebp - 0x118], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423b94: je 0x423ba2 */ if (fZ) goto L_00423ba2;
L_00423b96:; BB(0x00423b96);
    /* 00423b96: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 00423ba0: jmp 0x423bac */ goto L_00423bac;
L_00423ba2:; BB(0x00423ba2);
    /* 00423ba2: mov dword ptr [ebp - 0x16c], 1 */ W32((u32)(r_ebp+0xfffffe94u), 0x1u);
L_00423bac:; BB(0x00423bac);
    /* 00423bac: movzx eax, byte ptr [ebp - 0x16c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe94u));
    /* 00423bb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423bb5: je 0x423bd8 */ if (fZ) goto L_00423bd8;
L_00423bb7:; BB(0x00423bb7);
    /* 00423bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00423bb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423bbb: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00423bc1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00423bc4: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00423bc9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00423bcc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00423bce: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00423bd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423bd3u); call_ind(t); }
    /* 00423bd3: jmp 0x423c5f */ goto L_00423c5f;
L_00423bd8:; BB(0x00423bd8);
    /* 00423bd8: cmp dword ptr [ebp - 0x44], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00423bdc: je 0x423be9 */ if (fZ) goto L_00423be9;
L_00423bde:; BB(0x00423bde);
    /* 00423bde: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00423be1: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 00423be7: jmp 0x423bfa */ goto L_00423bfa;
L_00423be9:; BB(0x00423be9);
    /* 00423be9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00423bef: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x423bf4u); f_00636c50();
    /* 00423bf4: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
L_00423bfa:; BB(0x00423bfa);
    /* 00423bfa: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00423c00: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00423c03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00423c06: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00423c09: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00423c0c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00423c0f: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 00423c12: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00423c15: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00423c18: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00423c1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423c1d: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00423c23: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00423c26: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00423c2c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00423c2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00423c31: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00423c34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x423c36u); call_ind(t); }
    /* 00423c36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00423c38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00423c3a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00423c40: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x423c45u); f_00637810();
    /* 00423c45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423c46: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00423c4c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00423c4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00423c50: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00423c53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00423c54: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00423c5a: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x423c5fu); f_00639390();
L_00423c5f:; BB(0x00423c5f);
    /* 00423c5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00423c61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00423c62: ret  */ FN_RET(0x004230d0); r_esp += 4; return;
}

