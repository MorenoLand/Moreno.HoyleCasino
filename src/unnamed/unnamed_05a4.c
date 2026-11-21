#include "protos.h"

void f_005a4390(void) /* sub_5A4390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a4390);
    /* 005a4390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4391: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4393: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a4396: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005a4399: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a439c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a439f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a43a2: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 005a43a6: mov eax, dword ptr [ecx + eax + 0x4c] */ r_eax = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 005a43aa: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a43ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a43b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a43b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a43b4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a43b9u); f_0064c8a0();
    /* 005a43b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a43bc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005a43bf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005a43c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a43c5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a43c8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a43cb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a43ce: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a43d5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a43d8: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5a43ddu); f_005f5400();
    /* 005a43dd: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a43e3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a43e6: mov dword ptr [ecx + eax*4 + 0x98], edx */ W32((u32)(r_ecx+r_eax*4+0x98u), r_edx);
    /* 005a43ed: cmp dword ptr [ebp + 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a43f1: jne 0x5a443e */ if (!fZ) goto L_005a443e;
L_005a43f3:; BB(0x005a43f3);
    /* 005a43f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a43f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a43f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a43fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a43fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a43fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a43ff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4404u); f_005dcb00();
    /* 005a4404: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4407: mov ecx, eax */ r_ecx = r_eax;
    /* 005a4409: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5a440eu); f_005d5cf0();
    /* 005a440e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a4411: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5a4416u); f_005f5400();
    /* 005a4416: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a441c: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 005a4420: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005a4423: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4425: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a4428: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4429: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a442c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a442e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a4431: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005a4437: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a4439u); call_ind(t); }
    /* 005a4439: jmp 0x5a47fd */ goto L_005a47fd;
L_005a443e:; BB(0x005a443e);
    /* 005a443e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a4441: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4442: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4447u); f_005dcb00();
    /* 005a4447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a444a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a444d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a4450: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5a4455u); f_005d52e0();
    /* 005a4455: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005a4458: mov byte ptr [ebp - 0x49], dl */ W8((u32)(r_ebp+0xffffffb7u), (u8)r_edx);
    /* 005a445b: movsx eax, byte ptr [ebp - 0x49] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffb7u));
    /* 005a445f: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a4465: mov dword ptr [ecx + 0x114], eax */ W32((u32)(r_ecx+0x114u), r_eax);
    /* 005a446b: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a4471: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a4476: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 005a447c: cmp ecx, dword ptr [eax + 0x114] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4482: je 0x5a4493 */ if (fZ) goto L_005a4493;
L_005a4484:; BB(0x005a4484);
    /* 005a4484: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 005a448a: cmp dword ptr [edx + 0x114], 0 */ {  u32 a = R32((u32)(r_edx+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4491: je 0x5a44ad */ if (fZ) goto L_005a44ad;
L_005a4493:; BB(0x005a4493);
    /* 005a4493: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a4496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4497: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a449cu); f_005dcb00();
    /* 005a449c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a449f: mov ecx, eax */ r_ecx = r_eax;
    /* 005a44a1: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5a44a6u); f_005d5a50();
    /* 005a44a6: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a44ab: jl 0x5a44b2 */ if ((fS!=fO)) goto L_005a44b2;
L_005a44ad:; BB(0x005a44ad);
    /* 005a44ad: jmp 0x5a47fd */ goto L_005a47fd;
L_005a44b2:; BB(0x005a44b2);
    /* 005a44b2: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005a44b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44b8: je 0x5a4601 */ if (fZ) goto L_005a4601;
L_005a44be:; BB(0x005a44be);
    /* 005a44be: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44c2: jne 0x5a44cd */ if (!fZ) goto L_005a44cd;
L_005a44c4:; BB(0x005a44c4);
    /* 005a44c4: mov dword ptr [ebp - 0x14], 0x32 */ W32((u32)(r_ebp+0xffffffecu), 0x32u);
    /* 005a44cb: jmp 0x5a453d */ goto L_005a453d;
L_005a44cd:; BB(0x005a44cd);
    /* 005a44cd: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44d1: jne 0x5a44dc */ if (!fZ) goto L_005a44dc;
L_005a44d3:; BB(0x005a44d3);
    /* 005a44d3: mov dword ptr [ebp - 0x14], 0x28 */ W32((u32)(r_ebp+0xffffffecu), 0x28u);
    /* 005a44da: jmp 0x5a453d */ goto L_005a453d;
L_005a44dc:; BB(0x005a44dc);
    /* 005a44dc: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44e0: jne 0x5a44eb */ if (!fZ) goto L_005a44eb;
L_005a44e2:; BB(0x005a44e2);
    /* 005a44e2: mov dword ptr [ebp - 0x14], 0x1e */ W32((u32)(r_ebp+0xffffffecu), 0x1eu);
    /* 005a44e9: jmp 0x5a453d */ goto L_005a453d;
L_005a44eb:; BB(0x005a44eb);
    /* 005a44eb: cmp dword ptr [ebp + 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44ef: jne 0x5a44fa */ if (!fZ) goto L_005a44fa;
L_005a44f1:; BB(0x005a44f1);
    /* 005a44f1: mov dword ptr [ebp - 0x14], 0x14 */ W32((u32)(r_ebp+0xffffffecu), 0x14u);
    /* 005a44f8: jmp 0x5a453d */ goto L_005a453d;
L_005a44fa:; BB(0x005a44fa);
    /* 005a44fa: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44fe: jne 0x5a4509 */ if (!fZ) goto L_005a4509;
L_005a4500:; BB(0x005a4500);
    /* 005a4500: mov dword ptr [ebp - 0x14], 0xf */ W32((u32)(r_ebp+0xffffffecu), 0xfu);
    /* 005a4507: jmp 0x5a453d */ goto L_005a453d;
L_005a4509:; BB(0x005a4509);
    /* 005a4509: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a450d: jne 0x5a4518 */ if (!fZ) goto L_005a4518;
L_005a450f:; BB(0x005a450f);
    /* 005a450f: mov dword ptr [ebp - 0x14], 0xa */ W32((u32)(r_ebp+0xffffffecu), 0xau);
    /* 005a4516: jmp 0x5a453d */ goto L_005a453d;
L_005a4518:; BB(0x005a4518);
    /* 005a4518: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a451c: jne 0x5a4527 */ if (!fZ) goto L_005a4527;
L_005a451e:; BB(0x005a451e);
    /* 005a451e: mov dword ptr [ebp - 0x14], 7 */ W32((u32)(r_ebp+0xffffffecu), 0x7u);
    /* 005a4525: jmp 0x5a453d */ goto L_005a453d;
L_005a4527:; BB(0x005a4527);
    /* 005a4527: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a452b: jne 0x5a4536 */ if (!fZ) goto L_005a4536;
L_005a452d:; BB(0x005a452d);
    /* 005a452d: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 005a4534: jmp 0x5a453d */ goto L_005a453d;
L_005a4536:; BB(0x005a4536);
    /* 005a4536: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005a453d:; BB(0x005a453d);
    /* 005a453d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a4540: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a4543: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4546: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a4549: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 005a454c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a454f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005a4552: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005a4555: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x5a455au); f_0064c560();
    /* 005a455a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a455d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a455e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a4561: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4562: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005a4565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4566: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005a4569: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a456eu); f_0064c5c0();
    /* 005a456e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a4570: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a4573: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a4576: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a4579: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4580: jle 0x5a4589 */ if ((fZ||fS!=fO)) goto L_005a4589;
L_005a4582:; BB(0x005a4582);
    /* 005a4582: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_005a4589:; BB(0x005a4589);
    /* 005a4589: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a458c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a458d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a4590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4591: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a4594: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4595: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a459au); f_005dcb00();
    /* 005a459a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a459d: mov ecx, eax */ r_ecx = r_eax;
    /* 005a459f: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5a45a4u); f_005d5cf0();
    /* 005a45a4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a45a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a45a8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a45ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a45af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45b0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a45b5u); f_005dcb00();
    /* 005a45b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a45b8: mov ecx, eax */ r_ecx = r_eax;
    /* 005a45ba: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5a45bfu); f_005d5fb0();
    /* 005a45bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a45c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a45c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a45c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45c7: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 005a45ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45cb: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005a45ce: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x5a45d3u); f_0064c630();
    /* 005a45d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a45d5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a45d8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a45db: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a45de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a45e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a45e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a45eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45ec: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a45ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a45f1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a45f4: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a45fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a45fcu); call_ind(t); }
    /* 005a45fc: jmp 0x5a47fd */ goto L_005a47fd;
L_005a4601:; BB(0x005a4601);
    /* 005a4601: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4605: jne 0x5a46dc */ if (!fZ) goto L_005a46dc;
L_005a460b:; BB(0x005a460b);
    /* 005a460b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a460e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5a4613u); f_005f5400();
    /* 005a4613: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 005a4619: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 005a461d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005a4620: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a4623: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a4625: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a4628: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005a462e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a4630u); call_ind(t); }
    /* 005a4630: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a4633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4634: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4639u); f_005dcb00();
    /* 005a4639: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a463c: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4643: jle 0x5a465b */ if ((fZ||fS!=fO)) goto L_005a465b;
L_005a4645:; BB(0x005a4645);
    /* 005a4645: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a4648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4649: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a464eu); f_005dcb00();
    /* 005a464e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4651: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005a465b:; BB(0x005a465b);
    /* 005a465b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a465e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a465f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4664u); f_005dcb00();
    /* 005a4664: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4667: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a466c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005a466f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a4672: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a4674: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a4677: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a467a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005a467c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a467f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a4681: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a4684: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4687: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005a4689: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a468c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a468f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4690: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a4693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4694: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a4697: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4698: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a469du); f_005dcb00();
    /* 005a469d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a46a0: mov ecx, eax */ r_ecx = r_eax;
    /* 005a46a2: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5a46a7u); f_005d5fb0();
    /* 005a46a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a46a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a46ab: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a46b0u); f_0064c8a0();
    /* 005a46b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a46b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005a46b6: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005a46b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a46bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a46be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a46bf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a46c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a46c3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a46c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a46c7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a46ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a46cc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a46cf: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a46d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a46d7u); call_ind(t); }
    /* 005a46d7: jmp 0x5a47fd */ goto L_005a47fd;
L_005a46dc:; BB(0x005a46dc);
    /* 005a46dc: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a46e0: jne 0x5a4750 */ if (!fZ) goto L_005a4750;
L_005a46e2:; BB(0x005a46e2);
    /* 005a46e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a46e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a46e6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a46ebu); f_005dcb00();
    /* 005a46eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a46ee: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a46f5: jge 0x5a4731 */ if ((fS==fO)) goto L_005a4731;
L_005a46f7:; BB(0x005a46f7);
    /* 005a46f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a46fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a46fb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4700u); f_005dcb00();
    /* 005a4700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4703: cmp dword ptr [eax + 0x4a8], -4 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a470a: jge 0x5a471b */ if ((fS==fO)) goto L_005a471b;
L_005a470c:; BB(0x005a470c);
    /* 005a470c: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 005a4711: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a4714: mov byte ptr [eax + 0x104], 1 */ W8((u32)(r_eax+0x104u), 0x1u);
L_005a471b:; BB(0x005a471b);
    /* 005a471b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a471e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a471f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4724u); f_005dcb00();
    /* 005a4724: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4727: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005a4731:; BB(0x005a4731);
    /* 005a4731: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a4734: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4735: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a473au); f_005dcb00();
    /* 005a473a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a473d: mov ecx, eax */ r_ecx = r_eax;
    /* 005a473f: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5a4744u); f_005d7540();
    /* 005a4744: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a4747: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005a474a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a474d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005a4750:; BB(0x005a4750);
    /* 005a4750: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4757: jle 0x5a4760 */ if ((fZ||fS!=fO)) goto L_005a4760;
L_005a4759:; BB(0x005a4759);
    /* 005a4759: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_005a4760:; BB(0x005a4760);
    /* 005a4760: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a4763: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a4766: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a4769: mov ecx, dword ptr [eax + edx + 0x4c] */ r_ecx = R32((u32)(r_eax+r_edx+0x4cu));
    /* 005a476d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a476e: mov edx, dword ptr [eax + edx + 0x48] */ r_edx = R32((u32)(r_eax+r_edx+0x48u));
    /* 005a4772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4773: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005a4776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4777: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005a477a: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5a477fu); f_0064c5c0();
    /* 005a477f: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4786: jl 0x5a47a9 */ if ((fS!=fO)) goto L_005a47a9;
L_005a4788:; BB(0x005a4788);
    /* 005a4788: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a478a: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a478f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5a4794u); f_0064c8a0();
    /* 005a4794: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4797: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005a479a: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005a479d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a47a0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005a47a3: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a47a6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005a47a9:; BB(0x005a47a9);
    /* 005a47a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a47ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a47ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a47b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a47b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a47b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a47b5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a47bau); f_005dcb00();
    /* 005a47ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a47bd: mov ecx, eax */ r_ecx = r_eax;
    /* 005a47bf: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5a47c4u); f_005d5cf0();
    /* 005a47c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a47c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a47c8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a47cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a47cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a47cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a47d0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a47d5u); f_005dcb00();
    /* 005a47d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a47d8: mov ecx, eax */ r_ecx = r_eax;
    /* 005a47da: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5a47dfu); f_005d5fb0();
    /* 005a47df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a47e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a47e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a47e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a47e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a47e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a47ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a47ed: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a47f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a47f2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a47f5: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005a47fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a47fdu); call_ind(t); }
L_005a47fd:; BB(0x005a47fd);
    /* 005a47fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005a47ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4800: ret 0x10 */ FN_RET(0x005a4390); r_esp += 20; return;
}

void f_005a4960(void) /* sub_5A4960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a4960);
    /* 005a4960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4961: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4963: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a4966: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005a4969: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a496c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a496d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a4972u); f_005dcb00();
    /* 005a4972: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4975: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a4978: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a497e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a4980: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a4986: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005a498c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a498eu); call_ind(t); }
    /* 005a498e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005a4991: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005a4997: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5a499cu); f_005da7b0();
    /* 005a499c: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 005a499f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a49a2: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5a49a7u); f_005d5a50();
    /* 005a49a7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a49aa: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a49b0: mov edx, dword ptr [ecx + 0x5c8] */ r_edx = R32((u32)(r_ecx+0x5c8u));
    /* 005a49b6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005a49b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a49bc: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a49bf: jle 0x5a49d1 */ if ((fZ||fS!=fO)) goto L_005a49d1;
L_005a49c1:; BB(0x005a49c1);
    /* 005a49c1: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005a49c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a49c7: je 0x5a49d1 */ if (fZ) goto L_005a49d1;
L_005a49c9:; BB(0x005a49c9);
    /* 005a49c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a49cc: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a49d1:; BB(0x005a49d1);
    /* 005a49d1: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a49d5: jge 0x5a49e4 */ if ((fS==fO)) goto L_005a49e4;
L_005a49d7:; BB(0x005a49d7);
    /* 005a49d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a49da: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a49e4:; BB(0x005a49e4);
    /* 005a49e4: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a49e8: jne 0x5a4a0d */ if (!fZ) goto L_005a4a0d;
L_005a49ea:; BB(0x005a49ea);
    /* 005a49ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a49ed: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005a49ef: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a49f2: jle 0x5a49fe */ if ((fZ||fS!=fO)) goto L_005a49fe;
L_005a49f4:; BB(0x005a49f4);
    /* 005a49f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a49f7: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a49fe:; BB(0x005a49fe);
    /* 005a49fe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a01: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a4a03: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a0d:; BB(0x005a4a0d);
    /* 005a4a0d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4a11: jge 0x5a4a38 */ if ((fS==fO)) goto L_005a4a38;
L_005a4a13:; BB(0x005a4a13);
    /* 005a4a13: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a16: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4a19: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4a1c: jle 0x5a4a28 */ if ((fZ||fS!=fO)) goto L_005a4a28;
L_005a4a1e:; BB(0x005a4a1e);
    /* 005a4a1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4a21: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a28:; BB(0x005a4a28);
    /* 005a4a28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a2b: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4a2e: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a38:; BB(0x005a4a38);
    /* 005a4a38: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4a3c: jne 0x5a4a63 */ if (!fZ) goto L_005a4a63;
L_005a4a3e:; BB(0x005a4a3e);
    /* 005a4a3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a41: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a4a44: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4a47: jle 0x5a4a53 */ if ((fZ||fS!=fO)) goto L_005a4a53;
L_005a4a49:; BB(0x005a4a49);
    /* 005a4a49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4a4c: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a53:; BB(0x005a4a53);
    /* 005a4a53: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a56: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a4a59: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a63:; BB(0x005a4a63);
    /* 005a4a63: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4a67: jne 0x5a4a8e */ if (!fZ) goto L_005a4a8e;
L_005a4a69:; BB(0x005a4a69);
    /* 005a4a69: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a6c: imul edx, edx, 6 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x6u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4a6f: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4a72: jle 0x5a4a7e */ if ((fZ||fS!=fO)) goto L_005a4a7e;
L_005a4a74:; BB(0x005a4a74);
    /* 005a4a74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4a77: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a7e:; BB(0x005a4a7e);
    /* 005a4a7e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a81: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4a84: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4a8e:; BB(0x005a4a8e);
    /* 005a4a8e: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4a92: jne 0x5a4ab0 */ if (!fZ) goto L_005a4ab0;
L_005a4a94:; BB(0x005a4a94);
    /* 005a4a94: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4a97: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4a9a: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4a9d: jle 0x5a4aa6 */ if ((fZ||fS!=fO)) goto L_005a4aa6;
L_005a4a9f:; BB(0x005a4a9f);
    /* 005a4a9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4aa2: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4aa6:; BB(0x005a4aa6);
    /* 005a4aa6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4aa9: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4aac: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4ab0:; BB(0x005a4ab0);
    /* 005a4ab0: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4ab4: jne 0x5a4ad2 */ if (!fZ) goto L_005a4ad2;
L_005a4ab6:; BB(0x005a4ab6);
    /* 005a4ab6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4ab9: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005a4abc: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4abf: jle 0x5a4ac8 */ if ((fZ||fS!=fO)) goto L_005a4ac8;
L_005a4ac1:; BB(0x005a4ac1);
    /* 005a4ac1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4ac4: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4ac8:; BB(0x005a4ac8);
    /* 005a4ac8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4acb: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005a4ace: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4ad2:; BB(0x005a4ad2);
    /* 005a4ad2: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4ad6: jne 0x5a4af4 */ if (!fZ) goto L_005a4af4;
L_005a4ad8:; BB(0x005a4ad8);
    /* 005a4ad8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4adb: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4ade: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4ae1: jle 0x5a4aea */ if ((fZ||fS!=fO)) goto L_005a4aea;
L_005a4ae3:; BB(0x005a4ae3);
    /* 005a4ae3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4ae6: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4aea:; BB(0x005a4aea);
    /* 005a4aea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4aed: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4af0: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4af4:; BB(0x005a4af4);
    /* 005a4af4: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4af8: jl 0x5a4b16 */ if ((fS!=fO)) goto L_005a4b16;
L_005a4afa:; BB(0x005a4afa);
    /* 005a4afa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4afd: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4b00: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4b03: jle 0x5a4b0c */ if ((fZ||fS!=fO)) goto L_005a4b0c;
L_005a4b05:; BB(0x005a4b05);
    /* 005a4b05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a4b08: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4b0c:; BB(0x005a4b0c);
    /* 005a4b0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4b0f: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a4b12: jmp 0x5a4b19 */ goto L_005a4b19;
L_005a4b16:; BB(0x005a4b16);
    /* 005a4b16: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_005a4b19:; BB(0x005a4b19);
    /* 005a4b19: mov esp, ebp */ r_esp = r_ebp;
    /* 005a4b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4b1c: ret 4 */ FN_RET(0x005a4960); r_esp += 8; return;
}

