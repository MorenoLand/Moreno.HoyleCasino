#include "protos.h"

void f_0054e3e0(void) /* sub_54E3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054e3e0);
    /* 0054e3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054e3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054e3e3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054e3e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054e3e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054e3f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e3f3: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e3f8u); f_00551960();
    /* 0054e3f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e3fb: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54e400u); f_0054cec0();
    /* 0054e400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e402: jne 0x54e778 */ if (!fZ) goto L_0054e778;
L_0054e408:; BB(0x0054e408);
    /* 0054e408: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e40a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e40c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e40e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e411: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e416u); f_00551330();
    /* 0054e416: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e41b: je 0x54e42c */ if (fZ) goto L_0054e42c;
L_0054e41d:; BB(0x0054e41d);
    /* 0054e41d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e41f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e422: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e427u); f_005519a0();
    /* 0054e427: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e42c:; BB(0x0054e42c);
    /* 0054e42c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e42f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e433: jle 0x54e4ef */ if ((fZ||fS!=fO)) goto L_0054e4ef;
L_0054e439:; BB(0x0054e439);
    /* 0054e439: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e43c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0054e43f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054e442: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054e446: ja 0x54e4ef */ if ((!fC&&!fZ)) goto L_0054e4ef;
L_0054e44c:; BB(0x0054e44c);
    /* 0054e44c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054e44f: movzx edx, byte ptr [ecx + 0x54eb54] */ r_edx = (u32)R8((u32)(r_ecx+0x54eb54u));
    /* 0054e456: jmp dword ptr [edx*4 + 0x54eb40] */ { u32 t = R32((u32)(r_edx*4+0x54eb40u)); switch (t) { case 0x54e45du: goto L_0054e45d; case 0x54e474u: goto L_0054e474; case 0x54e47eu: goto L_0054e47e; case 0x54e488u: goto L_0054e488; case 0x54e4efu: goto L_0054e4ef; default: UNSUP(0x0054e456, "jump table entry is not a known target"); } }
L_0054e45d:; BB(0x0054e45d);
    /* 0054e45d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e45f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e462: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e467u); f_005519a0();
    /* 0054e467: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e46a: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54e46fu); f_00551920();
    /* 0054e46f: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e474:; BB(0x0054e474);
    /* 0054e474: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e476: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e479: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e47eu); f_005519a0();
L_0054e47e:; BB(0x0054e47e);
    /* 0054e47e: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e480: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e483: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e488u); f_005519a0();
L_0054e488:; BB(0x0054e488);
    /* 0054e488: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0054e48a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e48d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e492u); f_005519a0();
    /* 0054e492: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e499: jmp 0x54e4a4 */ goto L_0054e4a4;
L_0054e49b:; BB(0x0054e49b);
    /* 0054e49b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e49e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e4a4:; BB(0x0054e4a4);
    /* 0054e4a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e4a7: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e4acu); f_0054c540();
    /* 0054e4ac: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e4af: jge 0x54e4ea */ if ((fS==fO)) goto L_0054e4ea;
L_0054e4b1:; BB(0x0054e4b1);
    /* 0054e4b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e4b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e4b7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e4bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4bd: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54e4c2u); f_00641280();
    /* 0054e4c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e4c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e4c9: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54e4ceu); f_0054cf20();
    /* 0054e4ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e4d1: jle 0x54e4e8 */ if ((fZ||fS!=fO)) goto L_0054e4e8;
L_0054e4d3:; BB(0x0054e4d3);
    /* 0054e4d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e4d6: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e4d9: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e4dc: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054e4df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e4e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e4e5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054e4e8:; BB(0x0054e4e8);
    /* 0054e4e8: jmp 0x54e49b */ goto L_0054e49b;
L_0054e4ea:; BB(0x0054e4ea);
    /* 0054e4ea: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e4ef:; BB(0x0054e4ef);
    /* 0054e4ef: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4f3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e4f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e4f8: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e4fdu); f_00551330();
    /* 0054e4fd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e500: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e502: je 0x54e513 */ if (fZ) goto L_0054e513;
L_0054e504:; BB(0x0054e504);
    /* 0054e504: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e506: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e509: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e50eu); f_005519a0();
    /* 0054e50e: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e513:; BB(0x0054e513);
    /* 0054e513: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e515: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e517: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e519: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e51c: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e521u); f_00551330();
    /* 0054e521: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e524: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e526: je 0x54e537 */ if (fZ) goto L_0054e537;
L_0054e528:; BB(0x0054e528);
    /* 0054e528: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e52a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e52d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e532u); f_005519a0();
    /* 0054e532: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e537:; BB(0x0054e537);
    /* 0054e537: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e539: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e53b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e53d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e540: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e545u); f_00551330();
    /* 0054e545: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e548: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e54a: je 0x54e572 */ if (fZ) goto L_0054e572;
L_0054e54c:; BB(0x0054e54c);
    /* 0054e54c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e54f: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54e554u); f_005519e0();
    /* 0054e554: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e557: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e559: je 0x54e56a */ if (fZ) goto L_0054e56a;
L_0054e55b:; BB(0x0054e55b);
    /* 0054e55b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e55d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e560: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e565u); f_005519a0();
    /* 0054e565: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e56a:; BB(0x0054e56a);
    /* 0054e56a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e56d: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e572u); f_00551960();
L_0054e572:; BB(0x0054e572);
    /* 0054e572: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e575: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x54e57au); f_005515d0();
    /* 0054e57a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e57d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e57f: je 0x54e590 */ if (fZ) goto L_0054e590;
L_0054e581:; BB(0x0054e581);
    /* 0054e581: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e583: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e586: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e58bu); f_005519a0();
    /* 0054e58b: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e590:; BB(0x0054e590);
    /* 0054e590: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e593: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x54e598u); f_00551890();
    /* 0054e598: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e59b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e59d: je 0x54e5ae */ if (fZ) goto L_0054e5ae;
L_0054e59f:; BB(0x0054e59f);
    /* 0054e59f: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5a4: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e5a9u); f_005519a0();
    /* 0054e5a9: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e5ae:; BB(0x0054e5ae);
    /* 0054e5ae: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5b2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5b7: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e5bcu); f_00551330();
    /* 0054e5bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e5bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e5c1: je 0x54e5f9 */ if (fZ) goto L_0054e5f9;
L_0054e5c3:; BB(0x0054e5c3);
    /* 0054e5c3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5c6: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 0054e5ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5ce: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0054e5d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5d6: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x54e5dbu); f_00551b50();
    /* 0054e5db: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e5de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e5e0: jne 0x54e5f1 */ if (!fZ) goto L_0054e5f1;
L_0054e5e2:; BB(0x0054e5e2);
    /* 0054e5e2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5e7: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e5ecu); f_005519a0();
    /* 0054e5ec: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e5f1:; BB(0x0054e5f1);
    /* 0054e5f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e5f4: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e5f9u); f_00551960();
L_0054e5f9:; BB(0x0054e5f9);
    /* 0054e5f9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e5ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e602: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54e607u); f_00551670();
    /* 0054e607: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e60a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e60c: je 0x54e634 */ if (fZ) goto L_0054e634;
L_0054e60e:; BB(0x0054e60e);
    /* 0054e60e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e611: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54e616u); f_005519e0();
    /* 0054e616: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e619: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e61b: je 0x54e62c */ if (fZ) goto L_0054e62c;
L_0054e61d:; BB(0x0054e61d);
    /* 0054e61d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e61f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e622: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e627u); f_005519a0();
    /* 0054e627: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e62c:; BB(0x0054e62c);
    /* 0054e62c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e62f: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e634u); f_00551960();
L_0054e634:; BB(0x0054e634);
    /* 0054e634: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e636: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e638: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e63a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e63d: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e642u); f_00551330();
    /* 0054e642: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e647: je 0x54e658 */ if (fZ) goto L_0054e658;
L_0054e649:; BB(0x0054e649);
    /* 0054e649: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e64b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e64e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e653u); f_005519a0();
    /* 0054e653: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e658:; BB(0x0054e658);
    /* 0054e658: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e65a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e65c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e65e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e661: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e666u); f_00551330();
    /* 0054e666: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e669: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e66b: je 0x54e67c */ if (fZ) goto L_0054e67c;
L_0054e66d:; BB(0x0054e66d);
    /* 0054e66d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e66f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e672: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e677u); f_005519a0();
    /* 0054e677: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e67c:; BB(0x0054e67c);
    /* 0054e67c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e67e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e680: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e682: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e685: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54e68au); f_00551670();
    /* 0054e68a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e68d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e68f: je 0x54e6a0 */ if (fZ) goto L_0054e6a0;
L_0054e691:; BB(0x0054e691);
    /* 0054e691: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e693: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e696: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e69bu); f_005519a0();
    /* 0054e69b: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e6a0:; BB(0x0054e6a0);
    /* 0054e6a0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6a4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e6a9: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e6aeu); f_00551330();
    /* 0054e6ae: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e6b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e6b3: je 0x54e6db */ if (fZ) goto L_0054e6db;
L_0054e6b5:; BB(0x0054e6b5);
    /* 0054e6b5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e6b8: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54e6bdu); f_005519e0();
    /* 0054e6bd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e6c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e6c2: je 0x54e6d3 */ if (fZ) goto L_0054e6d3;
L_0054e6c4:; BB(0x0054e6c4);
    /* 0054e6c4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e6c9: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e6ceu); f_005519a0();
    /* 0054e6ce: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e6d3:; BB(0x0054e6d3);
    /* 0054e6d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e6d6: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e6dbu); f_00551960();
L_0054e6db:; BB(0x0054e6db);
    /* 0054e6db: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054e6e2: jmp 0x54e6ed */ goto L_0054e6ed;
L_0054e6e4:; BB(0x0054e6e4);
    /* 0054e6e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e6e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e6ea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054e6ed:; BB(0x0054e6ed);
    /* 0054e6ed: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e6f1: jg 0x54e76b */ if ((!fZ&&fS==fO)) goto L_0054e76b;
L_0054e6f3:; BB(0x0054e6f3);
    /* 0054e6f3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6f5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e6f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e6fc: call 0x5510d0 */ r_esp -= 4; W32(r_esp, 0x54e701u); f_005510d0();
    /* 0054e701: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e704: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e706: je 0x54e766 */ if (fZ) goto L_0054e766;
L_0054e708:; BB(0x0054e708);
    /* 0054e708: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e70a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e70d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e712u); f_005519a0();
    /* 0054e712: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054e719: jmp 0x54e724 */ goto L_0054e724;
L_0054e71b:; BB(0x0054e71b);
    /* 0054e71b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e71e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e721: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0054e724:; BB(0x0054e724);
    /* 0054e724: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e727: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e72cu); f_0054c540();
    /* 0054e72c: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e72f: jge 0x54e761 */ if ((fS==fO)) goto L_0054e761;
L_0054e731:; BB(0x0054e731);
    /* 0054e731: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054e734: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e737: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054e73c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e73d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54e742u); f_00641290();
    /* 0054e742: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e745: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e748: jne 0x54e75f */ if (!fZ) goto L_0054e75f;
L_0054e74a:; BB(0x0054e74a);
    /* 0054e74a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e74d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e750: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0054e753: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054e756: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e759: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e75c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054e75f:; BB(0x0054e75f);
    /* 0054e75f: jmp 0x54e71b */ goto L_0054e71b;
L_0054e761:; BB(0x0054e761);
    /* 0054e761: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e766:; BB(0x0054e766);
    /* 0054e766: jmp 0x54e6e4 */ goto L_0054e6e4;
L_0054e76b:; BB(0x0054e76b);
    /* 0054e76b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e76e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e773u); f_00551960();
    /* 0054e773: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e778:; BB(0x0054e778);
    /* 0054e778: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e77a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e77c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e77e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e781: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e786u); f_00551330();
    /* 0054e786: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e78b: je 0x54e7e1 */ if (fZ) goto L_0054e7e1;
L_0054e78d:; BB(0x0054e78d);
    /* 0054e78d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e78f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e792: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e797u); f_005519a0();
    /* 0054e797: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e79e: jmp 0x54e7a9 */ goto L_0054e7a9;
L_0054e7a0:; BB(0x0054e7a0);
    /* 0054e7a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e7a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e7a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054e7a9:; BB(0x0054e7a9);
    /* 0054e7a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e7ac: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e7b1u); f_0054c540();
    /* 0054e7b1: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e7b4: jge 0x54e7dc */ if ((fS==fO)) goto L_0054e7dc;
L_0054e7b6:; BB(0x0054e7b6);
    /* 0054e7b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e7b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e7bc: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054e7c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e7c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e7c5: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e7cau); f_0054c590();
    /* 0054e7ca: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e7cd: jne 0x54e7da */ if (!fZ) goto L_0054e7da;
L_0054e7cf:; BB(0x0054e7cf);
    /* 0054e7cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e7d2: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e7d5: mov byte ptr [edx + 0x17], al */ W8((u32)(r_edx+0x17u), (u8)r_eax);
    /* 0054e7d8: jmp 0x54e7dc */ goto L_0054e7dc;
L_0054e7da:; BB(0x0054e7da);
    /* 0054e7da: jmp 0x54e7a0 */ goto L_0054e7a0;
L_0054e7dc:; BB(0x0054e7dc);
    /* 0054e7dc: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e7e1:; BB(0x0054e7e1);
    /* 0054e7e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e7e4: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e7e8: jle 0x54e8bd */ if ((fZ||fS!=fO)) goto L_0054e8bd;
L_0054e7ee:; BB(0x0054e7ee);
    /* 0054e7ee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e7f1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0054e7f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0054e7f7: cmp dword ptr [ebp - 0x18], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054e7fb: ja 0x54e8bd */ if ((!fC&&!fZ)) goto L_0054e8bd;
L_0054e801:; BB(0x0054e801);
    /* 0054e801: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054e804: movzx edx, byte ptr [ecx + 0x54eb74] */ r_edx = (u32)R8((u32)(r_ecx+0x54eb74u));
    /* 0054e80b: jmp dword ptr [edx*4 + 0x54eb60] */ { u32 t = R32((u32)(r_edx*4+0x54eb60u)); switch (t) { case 0x54e812u: goto L_0054e812; case 0x54e829u: goto L_0054e829; case 0x54e833u: goto L_0054e833; case 0x54e83du: goto L_0054e83d; case 0x54e8bdu: goto L_0054e8bd; default: UNSUP(0x0054e80b, "jump table entry is not a known target"); } }
L_0054e812:; BB(0x0054e812);
    /* 0054e812: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e814: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e817: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e81cu); f_005519a0();
    /* 0054e81c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e81f: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54e824u); f_00551920();
    /* 0054e824: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e829:; BB(0x0054e829);
    /* 0054e829: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e82b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e82e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e833u); f_005519a0();
L_0054e833:; BB(0x0054e833);
    /* 0054e833: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e835: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e838: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e83du); f_005519a0();
L_0054e83d:; BB(0x0054e83d);
    /* 0054e83d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e83f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e842: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e847u); f_005519a0();
    /* 0054e847: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e84e: jmp 0x54e859 */ goto L_0054e859;
L_0054e850:; BB(0x0054e850);
    /* 0054e850: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e853: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e856: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e859:; BB(0x0054e859);
    /* 0054e859: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e85c: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e861u); f_0054c540();
    /* 0054e861: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e864: jge 0x54e8b8 */ if ((fS==fO)) goto L_0054e8b8;
L_0054e866:; BB(0x0054e866);
    /* 0054e866: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e869: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e86c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e872: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54e877u); f_00641280();
    /* 0054e877: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054e87a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e87b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e87e: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54e883u); f_0054cf20();
    /* 0054e883: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e886: jg 0x54e8a1 */ if ((!fZ&&fS==fO)) goto L_0054e8a1;
L_0054e888:; BB(0x0054e888);
    /* 0054e888: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e88b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e88e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e894: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e897: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e89cu); f_0054c590();
    /* 0054e89c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e89f: jne 0x54e8b6 */ if (!fZ) goto L_0054e8b6;
L_0054e8a1:; BB(0x0054e8a1);
    /* 0054e8a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e8a4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e8a7: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e8aa: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054e8ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054e8b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e8b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054e8b6:; BB(0x0054e8b6);
    /* 0054e8b6: jmp 0x54e850 */ goto L_0054e850;
L_0054e8b8:; BB(0x0054e8b8);
    /* 0054e8b8: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e8bd:; BB(0x0054e8bd);
    /* 0054e8bd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8c1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e8c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e8c6: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e8cbu); f_00551330();
    /* 0054e8cb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054e8ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e8d0: je 0x54e939 */ if (fZ) goto L_0054e939;
L_0054e8d2:; BB(0x0054e8d2);
    /* 0054e8d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e8d5: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54e8dau); f_0054cec0();
    /* 0054e8da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e8dd: jne 0x54e931 */ if (!fZ) goto L_0054e931;
L_0054e8df:; BB(0x0054e8df);
    /* 0054e8df: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e8e6: jmp 0x54e8f1 */ goto L_0054e8f1;
L_0054e8e8:; BB(0x0054e8e8);
    /* 0054e8e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e8eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054e8ee: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054e8f1:; BB(0x0054e8f1);
    /* 0054e8f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e8f4: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e8f9u); f_0054c540();
    /* 0054e8f9: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e8fc: jge 0x54e931 */ if ((fS==fO)) goto L_0054e931;
L_0054e8fe:; BB(0x0054e8fe);
    /* 0054e8fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e901: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e904: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054e909: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e90a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e90d: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e912u); f_0054c590();
    /* 0054e912: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e915: jne 0x54e92f */ if (!fZ) goto L_0054e92f;
L_0054e917:; BB(0x0054e917);
    /* 0054e917: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e919: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e91c: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e921u); f_005519a0();
    /* 0054e921: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e924: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e927: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0054e92a: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e92f:; BB(0x0054e92f);
    /* 0054e92f: jmp 0x54e8e8 */ goto L_0054e8e8;
L_0054e931:; BB(0x0054e931);
    /* 0054e931: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e934: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54e939u); f_00551960();
L_0054e939:; BB(0x0054e939);
    /* 0054e939: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e93b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054e93d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e93f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e942: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e947u); f_00551330();
    /* 0054e947: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054e94a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e94c: je 0x54e9a0 */ if (fZ) goto L_0054e9a0;
L_0054e94e:; BB(0x0054e94e);
    /* 0054e94e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e955: jmp 0x54e960 */ goto L_0054e960;
L_0054e957:; BB(0x0054e957);
    /* 0054e957: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e95a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054e95d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054e960:; BB(0x0054e960);
    /* 0054e960: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e963: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e968u); f_0054c540();
    /* 0054e968: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e96b: jge 0x54e9a0 */ if ((fS==fO)) goto L_0054e9a0;
L_0054e96d:; BB(0x0054e96d);
    /* 0054e96d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e970: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e973: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054e978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054e979: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e97c: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e981u); f_0054c590();
    /* 0054e981: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e984: jne 0x54e99e */ if (!fZ) goto L_0054e99e;
L_0054e986:; BB(0x0054e986);
    /* 0054e986: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e988: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e98b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e990u); f_005519a0();
    /* 0054e990: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e993: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e996: mov byte ptr [ecx + 0x16], dl */ W8((u32)(r_ecx+0x16u), (u8)r_edx);
    /* 0054e999: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054e99e:; BB(0x0054e99e);
    /* 0054e99e: jmp 0x54e957 */ goto L_0054e957;
L_0054e9a0:; BB(0x0054e9a0);
    /* 0054e9a0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054e9a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e9a4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e9a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e9a9: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54e9aeu); f_00551330();
    /* 0054e9ae: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054e9b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e9b3: je 0x54ea07 */ if (fZ) goto L_0054ea07;
L_0054e9b5:; BB(0x0054e9b5);
    /* 0054e9b5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054e9bc: jmp 0x54e9c7 */ goto L_0054e9c7;
L_0054e9be:; BB(0x0054e9be);
    /* 0054e9be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e9c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054e9c4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054e9c7:; BB(0x0054e9c7);
    /* 0054e9c7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e9ca: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54e9cfu); f_0054c540();
    /* 0054e9cf: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054e9d2: jge 0x54ea07 */ if ((fS==fO)) goto L_0054ea07;
L_0054e9d4:; BB(0x0054e9d4);
    /* 0054e9d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054e9d7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e9da: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054e9df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054e9e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e9e3: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54e9e8u); f_0054c590();
    /* 0054e9e8: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054e9eb: jne 0x54ea05 */ if (!fZ) goto L_0054ea05;
L_0054e9ed:; BB(0x0054e9ed);
    /* 0054e9ed: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0054e9ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e9f2: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54e9f7u); f_005519a0();
    /* 0054e9f7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054e9fa: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054e9fd: mov byte ptr [edx + 0x16], al */ W8((u32)(r_edx+0x16u), (u8)r_eax);
    /* 0054ea00: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054ea05:; BB(0x0054ea05);
    /* 0054ea05: jmp 0x54e9be */ goto L_0054e9be;
L_0054ea07:; BB(0x0054ea07);
    /* 0054ea07: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea0b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea0d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea10: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54ea15u); f_00551670();
    /* 0054ea15: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054ea18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ea1a: je 0x54ea6e */ if (fZ) goto L_0054ea6e;
L_0054ea1c:; BB(0x0054ea1c);
    /* 0054ea1c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054ea23: jmp 0x54ea2e */ goto L_0054ea2e;
L_0054ea25:; BB(0x0054ea25);
    /* 0054ea25: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ea28: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054ea2b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054ea2e:; BB(0x0054ea2e);
    /* 0054ea2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea31: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ea36u); f_0054c540();
    /* 0054ea36: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ea39: jge 0x54ea6e */ if ((fS==fO)) goto L_0054ea6e;
L_0054ea3b:; BB(0x0054ea3b);
    /* 0054ea3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ea3e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea41: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054ea46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea47: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea4a: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54ea4fu); f_0054c590();
    /* 0054ea4f: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ea52: jne 0x54ea6c */ if (!fZ) goto L_0054ea6c;
L_0054ea54:; BB(0x0054ea54);
    /* 0054ea54: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea59: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ea5eu); f_005519a0();
    /* 0054ea5e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea61: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054ea64: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0054ea67: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054ea6c:; BB(0x0054ea6c);
    /* 0054ea6c: jmp 0x54ea25 */ goto L_0054ea25;
L_0054ea6e:; BB(0x0054ea6e);
    /* 0054ea6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea71: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ea76u); f_0054c540();
    /* 0054ea76: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054ea79: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054ea7c: jmp 0x54ea87 */ goto L_0054ea87;
L_0054ea7e:; BB(0x0054ea7e);
    /* 0054ea7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ea81: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0054ea84: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054ea87:; BB(0x0054ea87);
    /* 0054ea87: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ea8b: jle 0x54eabd */ if ((fZ||fS!=fO)) goto L_0054eabd;
L_0054ea8d:; BB(0x0054ea8d);
    /* 0054ea8d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ea90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea93: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054ea98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ea99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ea9c: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54eaa1u); f_0054c590();
    /* 0054eaa1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eaa4: jne 0x54eabb */ if (!fZ) goto L_0054eabb;
L_0054eaa6:; BB(0x0054eaa6);
    /* 0054eaa6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eaa9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054eaac: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054eaaf: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054eab2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054eab5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054eab8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054eabb:; BB(0x0054eabb);
    /* 0054eabb: jmp 0x54ea7e */ goto L_0054ea7e;
L_0054eabd:; BB(0x0054eabd);
    /* 0054eabd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eac0: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54eac5u); f_0054c540();
    /* 0054eac5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054eac8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054eacb: jmp 0x54ead6 */ goto L_0054ead6;
L_0054eacd:; BB(0x0054eacd);
    /* 0054eacd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ead0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054ead3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054ead6:; BB(0x0054ead6);
    /* 0054ead6: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054eada: jle 0x54eb31 */ if ((fZ||fS!=fO)) goto L_0054eb31;
L_0054eadc:; BB(0x0054eadc);
    /* 0054eadc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054eadf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eae2: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054eae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eae8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eaeb: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54eaf0u); f_0054c590();
    /* 0054eaf0: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eaf3: je 0x54eb2f */ if (fZ) goto L_0054eb2f;
L_0054eaf5:; BB(0x0054eaf5);
    /* 0054eaf5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054eaf8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eafb: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054eb00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb01: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54eb06u); f_00641280();
    /* 0054eb06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054eb09: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054eb0c: jle 0x54eb2f */ if ((fZ||fS!=fO)) goto L_0054eb2f;
L_0054eb0e:; BB(0x0054eb0e);
    /* 0054eb0e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eb13: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54eb18u); f_005519a0();
    /* 0054eb18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eb1b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054eb1e: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054eb21: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054eb24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054eb27: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054eb2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054eb2d: jmp 0x54eb3b */ goto L_0054eb3b;
L_0054eb2f:; BB(0x0054eb2f);
    /* 0054eb2f: jmp 0x54eacd */ goto L_0054eacd;
L_0054eb31:; BB(0x0054eb31);
    /* 0054eb31: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb33: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eb36: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54eb3bu); f_005519a0();
L_0054eb3b:; BB(0x0054eb3b);
    /* 0054eb3b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054eb3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054eb3e: ret  */ FN_RET(0x0054e3e0); r_esp += 4; return;
}

void f_0054eb80(void) /* sub_54EB80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054eb80);
    /* 0054eb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054eb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0054eb83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054eb86: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054eb89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054eb90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eb93: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54eb98u); f_00551960();
    /* 0054eb98: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eb9b: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54eba0u); f_0054cec0();
    /* 0054eba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eba2: jne 0x54eea8 */ if (!fZ) goto L_0054eea8;
L_0054eba8:; BB(0x0054eba8);
    /* 0054eba8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ebaa: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054ebac: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ebae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ebb1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54ebb6u); f_00551330();
    /* 0054ebb6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054ebb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ebbb: je 0x54ebcc */ if (fZ) goto L_0054ebcc;
L_0054ebbd:; BB(0x0054ebbd);
    /* 0054ebbd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ebbf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ebc2: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ebc7u); f_005519a0();
    /* 0054ebc7: jmp 0x54f55a */ goto L_0054f55a;
L_0054ebcc:; BB(0x0054ebcc);
    /* 0054ebcc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ebcf: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ebd3: jle 0x54ec99 */ if ((fZ||fS!=fO)) goto L_0054ec99;
L_0054ebd9:; BB(0x0054ebd9);
    /* 0054ebd9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ebdc: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0054ebdf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054ebe2: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054ebe6: ja 0x54ec99 */ if ((!fC&&!fZ)) goto L_0054ec99;
L_0054ebec:; BB(0x0054ebec);
    /* 0054ebec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ebef: movzx edx, byte ptr [ecx + 0x54f578] */ r_edx = (u32)R8((u32)(r_ecx+0x54f578u));
    /* 0054ebf6: jmp dword ptr [edx*4 + 0x54f560] */ { u32 t = R32((u32)(r_edx*4+0x54f560u)); switch (t) { case 0x54ebfdu: goto L_0054ebfd; case 0x54ec14u: goto L_0054ec14; case 0x54ec1eu: goto L_0054ec1e; case 0x54ec28u: goto L_0054ec28; case 0x54ec32u: goto L_0054ec32; case 0x54ec99u: goto L_0054ec99; default: UNSUP(0x0054ebf6, "jump table entry is not a known target"); } }
L_0054ebfd:; BB(0x0054ebfd);
    /* 0054ebfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ebff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec02: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ec07u); f_005519a0();
    /* 0054ec07: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec0a: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54ec0fu); f_00551920();
    /* 0054ec0f: jmp 0x54f55a */ goto L_0054f55a;
L_0054ec14:; BB(0x0054ec14);
    /* 0054ec14: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec16: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec19: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ec1eu); f_005519a0();
L_0054ec1e:; BB(0x0054ec1e);
    /* 0054ec1e: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec20: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec23: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ec28u); f_005519a0();
L_0054ec28:; BB(0x0054ec28);
    /* 0054ec28: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec2d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ec32u); f_005519a0();
L_0054ec32:; BB(0x0054ec32);
    /* 0054ec32: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec34: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec37: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ec3cu); f_005519a0();
    /* 0054ec3c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054ec43: jmp 0x54ec4e */ goto L_0054ec4e;
L_0054ec45:; BB(0x0054ec45);
    /* 0054ec45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ec48: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ec4b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054ec4e:; BB(0x0054ec4e);
    /* 0054ec4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec51: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ec56u); f_0054c540();
    /* 0054ec56: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ec59: jge 0x54ec94 */ if ((fS==fO)) goto L_0054ec94;
L_0054ec5b:; BB(0x0054ec5b);
    /* 0054ec5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ec5e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec61: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054ec66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec67: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ec6cu); f_00641280();
    /* 0054ec6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ec6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec70: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec73: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54ec78u); f_0054cf20();
    /* 0054ec78: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ec7b: jle 0x54ec92 */ if ((fZ||fS!=fO)) goto L_0054ec92;
L_0054ec7d:; BB(0x0054ec7d);
    /* 0054ec7d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ec80: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ec83: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054ec86: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054ec89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ec8c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ec8f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054ec92:; BB(0x0054ec92);
    /* 0054ec92: jmp 0x54ec45 */ goto L_0054ec45;
L_0054ec94:; BB(0x0054ec94);
    /* 0054ec94: jmp 0x54f55a */ goto L_0054f55a;
L_0054ec99:; BB(0x0054ec99);
    /* 0054ec99: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec9d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ec9f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eca2: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54eca7u); f_00551330();
    /* 0054eca7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054ecaa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecac: je 0x54ecbd */ if (fZ) goto L_0054ecbd;
L_0054ecae:; BB(0x0054ecae);
    /* 0054ecae: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ecb3: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ecb8u); f_005519a0();
    /* 0054ecb8: jmp 0x54f55a */ goto L_0054f55a;
L_0054ecbd:; BB(0x0054ecbd);
    /* 0054ecbd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecbf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecc1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecc3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ecc6: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54eccbu); f_00551330();
    /* 0054eccb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054ecce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecd0: je 0x54ece1 */ if (fZ) goto L_0054ece1;
L_0054ecd2:; BB(0x0054ecd2);
    /* 0054ecd2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecd4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ecd7: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ecdcu); f_005519a0();
    /* 0054ecdc: jmp 0x54f55a */ goto L_0054f55a;
L_0054ece1:; BB(0x0054ece1);
    /* 0054ece1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ece4: call 0x5515d0 */ r_esp -= 4; W32(r_esp, 0x54ece9u); f_005515d0();
    /* 0054ece9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054ecec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ecee: je 0x54ecff */ if (fZ) goto L_0054ecff;
L_0054ecf0:; BB(0x0054ecf0);
    /* 0054ecf0: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ecf2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ecf5: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ecfau); f_005519a0();
    /* 0054ecfa: jmp 0x54f55a */ goto L_0054f55a;
L_0054ecff:; BB(0x0054ecff);
    /* 0054ecff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed02: call 0x551890 */ r_esp -= 4; W32(r_esp, 0x54ed07u); f_00551890();
    /* 0054ed07: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054ed0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed0c: je 0x54ed1d */ if (fZ) goto L_0054ed1d;
L_0054ed0e:; BB(0x0054ed0e);
    /* 0054ed0e: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed13: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ed18u); f_005519a0();
    /* 0054ed18: jmp 0x54f55a */ goto L_0054f55a;
L_0054ed1d:; BB(0x0054ed1d);
    /* 0054ed1d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed21: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed23: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed26: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54ed2bu); f_00551330();
    /* 0054ed2b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054ed2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed30: je 0x54ed58 */ if (fZ) goto L_0054ed58;
L_0054ed32:; BB(0x0054ed32);
    /* 0054ed32: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed35: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54ed3au); f_005519e0();
    /* 0054ed3a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054ed3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed3f: je 0x54ed50 */ if (fZ) goto L_0054ed50;
L_0054ed41:; BB(0x0054ed41);
    /* 0054ed41: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed46: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ed4bu); f_005519a0();
    /* 0054ed4b: jmp 0x54f55a */ goto L_0054f55a;
L_0054ed50:; BB(0x0054ed50);
    /* 0054ed50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed53: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54ed58u); f_00551960();
L_0054ed58:; BB(0x0054ed58);
    /* 0054ed58: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed5c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed5e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed61: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54ed66u); f_00551670();
    /* 0054ed66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054ed69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed6b: je 0x54ed93 */ if (fZ) goto L_0054ed93;
L_0054ed6d:; BB(0x0054ed6d);
    /* 0054ed6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed70: call 0x5519e0 */ r_esp -= 4; W32(r_esp, 0x54ed75u); f_005519e0();
    /* 0054ed75: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054ed78: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ed7a: je 0x54ed8b */ if (fZ) goto L_0054ed8b;
L_0054ed7c:; BB(0x0054ed7c);
    /* 0054ed7c: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed81: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ed86u); f_005519a0();
    /* 0054ed86: jmp 0x54f55a */ goto L_0054f55a;
L_0054ed8b:; BB(0x0054ed8b);
    /* 0054ed8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed8e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54ed93u); f_00551960();
L_0054ed93:; BB(0x0054ed93);
    /* 0054ed93: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed97: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ed99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ed9c: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54eda1u); f_00551330();
    /* 0054eda1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054eda4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eda6: je 0x54edde */ if (fZ) goto L_0054edde;
L_0054eda8:; BB(0x0054eda8);
    /* 0054eda8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054edab: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0054edaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054edb0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054edb3: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0054edb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054edb8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054edbb: call 0x551b50 */ r_esp -= 4; W32(r_esp, 0x54edc0u); f_00551b50();
    /* 0054edc0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054edc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054edc5: jne 0x54edd6 */ if (!fZ) goto L_0054edd6;
L_0054edc7:; BB(0x0054edc7);
    /* 0054edc7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054edc9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054edcc: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54edd1u); f_005519a0();
    /* 0054edd1: jmp 0x54f55a */ goto L_0054f55a;
L_0054edd6:; BB(0x0054edd6);
    /* 0054edd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054edd9: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54eddeu); f_00551960();
L_0054edde:; BB(0x0054edde);
    /* 0054edde: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ede0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054ede2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ede4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ede7: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54edecu); f_00551330();
    /* 0054edec: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054edef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054edf1: je 0x54ee02 */ if (fZ) goto L_0054ee02;
L_0054edf3:; BB(0x0054edf3);
    /* 0054edf3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0054edf5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054edf8: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54edfdu); f_005519a0();
    /* 0054edfd: jmp 0x54f55a */ goto L_0054f55a;
L_0054ee02:; BB(0x0054ee02);
    /* 0054ee02: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee05: mov dx, word ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xcu))) & 0xffffu);
    /* 0054ee09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ee0a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ee0fu); f_00641280();
    /* 0054ee0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ee12: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ee15: jne 0x54ee5e */ if (!fZ) goto L_0054ee5e;
L_0054ee17:; BB(0x0054ee17);
    /* 0054ee17: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee1a: mov cx, word ptr [eax + 0xa] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xau))) & 0xffffu);
    /* 0054ee1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ee1f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ee24u); f_00641280();
    /* 0054ee24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ee27: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ee2a: jne 0x54ee49 */ if (!fZ) goto L_0054ee49;
L_0054ee2c:; BB(0x0054ee2c);
    /* 0054ee2c: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ee2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee31: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ee36u); f_005519a0();
    /* 0054ee36: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee39: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054ee3c: mov byte ptr [edx + 0x14], 3 */ W8((u32)(r_edx+0x14u), 0x3u);
    /* 0054ee40: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ee43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ee46: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054ee49:; BB(0x0054ee49);
    /* 0054ee49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee4c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ee4f: mov byte ptr [ecx + 0x14], 4 */ W8((u32)(r_ecx+0x14u), 0x4u);
    /* 0054ee53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ee56: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054ee59: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0054ee5c: jmp 0x54ee86 */ goto L_0054ee86;
L_0054ee5e:; BB(0x0054ee5e);
    /* 0054ee5e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee61: mov cx, word ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xcu))) & 0xffffu);
    /* 0054ee65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ee66: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ee6bu); f_00641280();
    /* 0054ee6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ee6e: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ee71: jne 0x54ee86 */ if (!fZ) goto L_0054ee86;
L_0054ee73:; BB(0x0054ee73);
    /* 0054ee73: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee76: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054ee79: mov byte ptr [edx + 0x14], 4 */ W8((u32)(r_edx+0x14u), 0x4u);
    /* 0054ee7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ee80: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ee83: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054ee86:; BB(0x0054ee86);
    /* 0054ee86: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ee8a: je 0x54ee9b */ if (fZ) goto L_0054ee9b;
L_0054ee8c:; BB(0x0054ee8c);
    /* 0054ee8c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ee8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee91: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ee96u); f_005519a0();
    /* 0054ee96: jmp 0x54f55a */ goto L_0054f55a;
L_0054ee9b:; BB(0x0054ee9b);
    /* 0054ee9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ee9e: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54eea3u); f_00551960();
    /* 0054eea3: jmp 0x54f55a */ goto L_0054f55a;
L_0054eea8:; BB(0x0054eea8);
    /* 0054eea8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054eeaa: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054eeac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054eeae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eeb1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54eeb6u); f_00551330();
    /* 0054eeb6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054eeb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eebb: je 0x54ef11 */ if (fZ) goto L_0054ef11;
L_0054eebd:; BB(0x0054eebd);
    /* 0054eebd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054eec4: jmp 0x54eecf */ goto L_0054eecf;
L_0054eec6:; BB(0x0054eec6);
    /* 0054eec6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054eec9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054eecc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054eecf:; BB(0x0054eecf);
    /* 0054eecf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eed2: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54eed7u); f_0054c540();
    /* 0054eed7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054eeda: jge 0x54ef02 */ if ((fS==fO)) goto L_0054ef02;
L_0054eedc:; BB(0x0054eedc);
    /* 0054eedc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054eedf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eee2: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054eee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054eee8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eeeb: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54eef0u); f_0054c590();
    /* 0054eef0: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054eef3: jne 0x54ef00 */ if (!fZ) goto L_0054ef00;
L_0054eef5:; BB(0x0054eef5);
    /* 0054eef5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054eef8: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054eefb: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0054eefe: jmp 0x54ef02 */ goto L_0054ef02;
L_0054ef00:; BB(0x0054ef00);
    /* 0054ef00: jmp 0x54eec6 */ goto L_0054eec6;
L_0054ef02:; BB(0x0054ef02);
    /* 0054ef02: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef07: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ef0cu); f_005519a0();
    /* 0054ef0c: jmp 0x54f55a */ goto L_0054f55a;
L_0054ef11:; BB(0x0054ef11);
    /* 0054ef11: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef14: cmp dword ptr [edx + 0x10], -1 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ef18: jle 0x54f0c8 */ if ((fZ||fS!=fO)) goto L_0054f0c8;
L_0054ef1e:; BB(0x0054ef1e);
    /* 0054ef1e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef21: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0054ef24: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054ef27: cmp dword ptr [ebp - 0x18], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054ef2b: ja 0x54f0c8 */ if ((!fC&&!fZ)) goto L_0054f0c8;
L_0054ef31:; BB(0x0054ef31);
    /* 0054ef31: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054ef34: movzx eax, byte ptr [edx + 0x54f590] */ r_eax = (u32)R8((u32)(r_edx+0x54f590u));
    /* 0054ef3b: jmp dword ptr [eax*4 + 0x54f584] */ { u32 t = R32((u32)(r_eax*4+0x54f584u)); switch (t) { case 0x54ef42u: goto L_0054ef42; case 0x54ef59u: goto L_0054ef59; case 0x54efd9u: goto L_0054efd9; default: UNSUP(0x0054ef3b, "jump table entry is not a known target"); } }
L_0054ef42:; BB(0x0054ef42);
    /* 0054ef42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef44: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef47: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ef4cu); f_005519a0();
    /* 0054ef4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef4f: call 0x551920 */ r_esp -= 4; W32(r_esp, 0x54ef54u); f_00551920();
    /* 0054ef54: jmp 0x54f55a */ goto L_0054f55a;
L_0054ef59:; BB(0x0054ef59);
    /* 0054ef59: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef5b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef5e: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54ef63u); f_005519a0();
    /* 0054ef63: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054ef6a: jmp 0x54ef75 */ goto L_0054ef75;
L_0054ef6c:; BB(0x0054ef6c);
    /* 0054ef6c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ef6f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ef72: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054ef75:; BB(0x0054ef75);
    /* 0054ef75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef78: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ef7du); f_0054c540();
    /* 0054ef7d: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ef80: jge 0x54efd4 */ if ((fS==fO)) goto L_0054efd4;
L_0054ef82:; BB(0x0054ef82);
    /* 0054ef82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ef85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef88: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054ef8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ef8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054ef91: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54ef96u); f_0054c590();
    /* 0054ef96: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ef99: je 0x54efbd */ if (fZ) goto L_0054efbd;
L_0054ef9b:; BB(0x0054ef9b);
    /* 0054ef9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054ef9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054efa1: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054efa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054efa7: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54efacu); f_00641280();
    /* 0054efac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054efaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054efb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054efb3: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54efb8u); f_0054cf20();
    /* 0054efb8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054efbb: jle 0x54efd2 */ if ((fZ||fS!=fO)) goto L_0054efd2;
L_0054efbd:; BB(0x0054efbd);
    /* 0054efbd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054efc0: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054efc3: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054efc6: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054efc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054efcc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054efcf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054efd2:; BB(0x0054efd2);
    /* 0054efd2: jmp 0x54ef6c */ goto L_0054ef6c;
L_0054efd4:; BB(0x0054efd4);
    /* 0054efd4: jmp 0x54f55a */ goto L_0054f55a;
L_0054efd9:; BB(0x0054efd9);
    /* 0054efd9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054efdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054efdd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054efdf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054efe2: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54efe7u); f_00551330();
    /* 0054efe7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054efea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054efec: je 0x54f048 */ if (fZ) goto L_0054f048;
L_0054efee:; BB(0x0054efee);
    /* 0054efee: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054eff5: jmp 0x54f000 */ goto L_0054f000;
L_0054eff7:; BB(0x0054eff7);
    /* 0054eff7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054effa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054effd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f000:; BB(0x0054f000);
    /* 0054f000: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f003: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f008u); f_0054c540();
    /* 0054f008: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f00b: jge 0x54f040 */ if ((fS==fO)) goto L_0054f040;
L_0054f00d:; BB(0x0054f00d);
    /* 0054f00d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f010: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f013: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f019: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f01c: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f021u); f_0054c590();
    /* 0054f021: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f024: jne 0x54f03e */ if (!fZ) goto L_0054f03e;
L_0054f026:; BB(0x0054f026);
    /* 0054f026: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f028: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f02b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f030u); f_005519a0();
    /* 0054f030: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f033: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f036: mov byte ptr [ecx + 0x17], dl */ W8((u32)(r_ecx+0x17u), (u8)r_edx);
    /* 0054f039: jmp 0x54f55a */ goto L_0054f55a;
L_0054f03e:; BB(0x0054f03e);
    /* 0054f03e: jmp 0x54eff7 */ goto L_0054eff7;
L_0054f040:; BB(0x0054f040);
    /* 0054f040: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f043: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f048u); f_00551960();
L_0054f048:; BB(0x0054f048);
    /* 0054f048: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f04a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f04d: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f052u); f_005519a0();
    /* 0054f052: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f059: jmp 0x54f064 */ goto L_0054f064;
L_0054f05b:; BB(0x0054f05b);
    /* 0054f05b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f05e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f061: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f064:; BB(0x0054f064);
    /* 0054f064: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f067: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f06cu); f_0054c540();
    /* 0054f06c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f06f: jge 0x54f0c3 */ if ((fS==fO)) goto L_0054f0c3;
L_0054f071:; BB(0x0054f071);
    /* 0054f071: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f074: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f077: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f07c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f07d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f080: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f085u); f_0054c590();
    /* 0054f085: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f088: je 0x54f0ac */ if (fZ) goto L_0054f0ac;
L_0054f08a:; BB(0x0054f08a);
    /* 0054f08a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f08d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f090: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f096: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54f09bu); f_00641280();
    /* 0054f09b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f09e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f09f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f0a2: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54f0a7u); f_0054cf20();
    /* 0054f0a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f0aa: jle 0x54f0c1 */ if ((fZ||fS!=fO)) goto L_0054f0c1;
L_0054f0ac:; BB(0x0054f0ac);
    /* 0054f0ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f0af: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f0b2: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f0b5: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054f0b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f0bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f0be: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054f0c1:; BB(0x0054f0c1);
    /* 0054f0c1: jmp 0x54f05b */ goto L_0054f05b;
L_0054f0c3:; BB(0x0054f0c3);
    /* 0054f0c3: jmp 0x54f55a */ goto L_0054f55a;
L_0054f0c8:; BB(0x0054f0c8);
    /* 0054f0c8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f0ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f0d1: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f0d6u); f_00551330();
    /* 0054f0d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f0d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f0db: je 0x54f137 */ if (fZ) goto L_0054f137;
L_0054f0dd:; BB(0x0054f0dd);
    /* 0054f0dd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f0e4: jmp 0x54f0ef */ goto L_0054f0ef;
L_0054f0e6:; BB(0x0054f0e6);
    /* 0054f0e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f0e9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f0ec: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054f0ef:; BB(0x0054f0ef);
    /* 0054f0ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f0f2: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f0f7u); f_0054c540();
    /* 0054f0f7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f0fa: jge 0x54f12f */ if ((fS==fO)) goto L_0054f12f;
L_0054f0fc:; BB(0x0054f0fc);
    /* 0054f0fc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f0ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f102: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054f107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f108: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f10b: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f110u); f_0054c590();
    /* 0054f110: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f113: jne 0x54f12d */ if (!fZ) goto L_0054f12d;
L_0054f115:; BB(0x0054f115);
    /* 0054f115: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f117: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f11a: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f11fu); f_005519a0();
    /* 0054f11f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f122: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f125: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0054f128: jmp 0x54f55a */ goto L_0054f55a;
L_0054f12d:; BB(0x0054f12d);
    /* 0054f12d: jmp 0x54f0e6 */ goto L_0054f0e6;
L_0054f12f:; BB(0x0054f12f);
    /* 0054f12f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f132: call 0x551960 */ r_esp -= 4; W32(r_esp, 0x54f137u); f_00551960();
L_0054f137:; BB(0x0054f137);
    /* 0054f137: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054f13e: jmp 0x54f149 */ goto L_0054f149;
L_0054f140:; BB(0x0054f140);
    /* 0054f140: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f143: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f146: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054f149:; BB(0x0054f149);
    /* 0054f149: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f14d: jg 0x54f212 */ if ((!fZ&&fS==fO)) goto L_0054f212;
L_0054f153:; BB(0x0054f153);
    /* 0054f153: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f155: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f159: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f15c: call 0x5510d0 */ r_esp -= 4; W32(r_esp, 0x54f161u); f_005510d0();
    /* 0054f161: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f164: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f166: je 0x54f20d */ if (fZ) goto L_0054f20d;
L_0054f16c:; BB(0x0054f16c);
    /* 0054f16c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f16e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f172: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f175: call 0x551040 */ r_esp -= 4; W32(r_esp, 0x54f17au); f_00551040();
    /* 0054f17a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054f17d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f17f: jne 0x54f196 */ if (!fZ) goto L_0054f196;
L_0054f181:; BB(0x0054f181);
    /* 0054f181: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f183: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f187: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f18a: call 0x551040 */ r_esp -= 4; W32(r_esp, 0x54f18fu); f_00551040();
    /* 0054f18f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f192: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f194: je 0x54f20d */ if (fZ) goto L_0054f20d;
L_0054f196:; BB(0x0054f196);
    /* 0054f196: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f198: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f19b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f1a0u); f_005519a0();
    /* 0054f1a0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054f1a7: jmp 0x54f1b2 */ goto L_0054f1b2;
L_0054f1a9:; BB(0x0054f1a9);
    /* 0054f1a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f1ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f1af: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0054f1b2:; BB(0x0054f1b2);
    /* 0054f1b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f1b5: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f1bau); f_0054c540();
    /* 0054f1ba: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f1bd: jge 0x54f208 */ if ((fS==fO)) goto L_0054f208;
L_0054f1bf:; BB(0x0054f1bf);
    /* 0054f1bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f1c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f1c5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1cb: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54f1d0u); f_00641290();
    /* 0054f1d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f1d3: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f1d6: je 0x54f1f1 */ if (fZ) goto L_0054f1f1;
L_0054f1d8:; BB(0x0054f1d8);
    /* 0054f1d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f1db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f1de: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f1e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f1e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f1e7: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f1ecu); f_0054c590();
    /* 0054f1ec: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f1ef: jne 0x54f206 */ if (!fZ) goto L_0054f206;
L_0054f1f1:; BB(0x0054f1f1);
    /* 0054f1f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f1f4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f1f7: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0054f1fa: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054f1fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f200: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f203: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054f206:; BB(0x0054f206);
    /* 0054f206: jmp 0x54f1a9 */ goto L_0054f1a9;
L_0054f208:; BB(0x0054f208);
    /* 0054f208: jmp 0x54f55a */ goto L_0054f55a;
L_0054f20d:; BB(0x0054f20d);
    /* 0054f20d: jmp 0x54f140 */ goto L_0054f140;
L_0054f212:; BB(0x0054f212);
    /* 0054f212: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f214: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0054f216: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f218: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f21b: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f220u); f_00551330();
    /* 0054f220: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f223: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f225: je 0x54f279 */ if (fZ) goto L_0054f279;
L_0054f227:; BB(0x0054f227);
    /* 0054f227: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f22e: jmp 0x54f239 */ goto L_0054f239;
L_0054f230:; BB(0x0054f230);
    /* 0054f230: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f233: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f236: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054f239:; BB(0x0054f239);
    /* 0054f239: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f23c: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f241u); f_0054c540();
    /* 0054f241: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f244: jge 0x54f279 */ if ((fS==fO)) goto L_0054f279;
L_0054f246:; BB(0x0054f246);
    /* 0054f246: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f249: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f24c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054f251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f252: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f255: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f25au); f_0054c590();
    /* 0054f25a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f25d: jne 0x54f277 */ if (!fZ) goto L_0054f277;
L_0054f25f:; BB(0x0054f25f);
    /* 0054f25f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f261: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f264: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f269u); f_005519a0();
    /* 0054f269: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f26c: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f26f: mov byte ptr [eax + 0x16], cl */ W8((u32)(r_eax+0x16u), (u8)r_ecx);
    /* 0054f272: jmp 0x54f55a */ goto L_0054f55a;
L_0054f277:; BB(0x0054f277);
    /* 0054f277: jmp 0x54f230 */ goto L_0054f230;
L_0054f279:; BB(0x0054f279);
    /* 0054f279: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f27b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f27d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f27f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f282: call 0x551330 */ r_esp -= 4; W32(r_esp, 0x54f287u); f_00551330();
    /* 0054f287: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f28a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f28c: je 0x54f2e0 */ if (fZ) goto L_0054f2e0;
L_0054f28e:; BB(0x0054f28e);
    /* 0054f28e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f295: jmp 0x54f2a0 */ goto L_0054f2a0;
L_0054f297:; BB(0x0054f297);
    /* 0054f297: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f29a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f29d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f2a0:; BB(0x0054f2a0);
    /* 0054f2a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2a3: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f2a8u); f_0054c540();
    /* 0054f2a8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f2ab: jge 0x54f2e0 */ if ((fS==fO)) goto L_0054f2e0;
L_0054f2ad:; BB(0x0054f2ad);
    /* 0054f2ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f2b0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2b3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f2b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2bc: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f2c1u); f_0054c590();
    /* 0054f2c1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f2c4: jne 0x54f2de */ if (!fZ) goto L_0054f2de;
L_0054f2c6:; BB(0x0054f2c6);
    /* 0054f2c6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2cb: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f2d0u); f_005519a0();
    /* 0054f2d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2d3: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f2d6: mov byte ptr [ecx + 0x16], dl */ W8((u32)(r_ecx+0x16u), (u8)r_edx);
    /* 0054f2d9: jmp 0x54f55a */ goto L_0054f55a;
L_0054f2de:; BB(0x0054f2de);
    /* 0054f2de: jmp 0x54f297 */ goto L_0054f297;
L_0054f2e0:; BB(0x0054f2e0);
    /* 0054f2e0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2e5: call 0x550fd0 */ r_esp -= 4; W32(r_esp, 0x54f2eau); f_00550fd0();
    /* 0054f2ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054f2ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f2ef: je 0x54f368 */ if (fZ) goto L_0054f368;
L_0054f2f1:; BB(0x0054f2f1);
    /* 0054f2f1: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f2f6: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f2fbu); f_005519a0();
    /* 0054f2fb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f302: jmp 0x54f30d */ goto L_0054f30d;
L_0054f304:; BB(0x0054f304);
    /* 0054f304: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f307: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f30a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054f30d:; BB(0x0054f30d);
    /* 0054f30d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f310: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f315u); f_0054c540();
    /* 0054f315: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f318: jge 0x54f363 */ if ((fS==fO)) goto L_0054f363;
L_0054f31a:; BB(0x0054f31a);
    /* 0054f31a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f31d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f320: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054f325: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f326: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54f32bu); f_00641280();
    /* 0054f32b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f32e: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f331: je 0x54f34c */ if (fZ) goto L_0054f34c;
L_0054f333:; BB(0x0054f333);
    /* 0054f333: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f336: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f339: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054f33e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f33f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f342: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f347u); f_0054c590();
    /* 0054f347: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f34a: jne 0x54f361 */ if (!fZ) goto L_0054f361;
L_0054f34c:; BB(0x0054f34c);
    /* 0054f34c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f34f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f352: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f355: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0054f358: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f35b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f35e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054f361:; BB(0x0054f361);
    /* 0054f361: jmp 0x54f304 */ goto L_0054f304;
L_0054f363:; BB(0x0054f363);
    /* 0054f363: jmp 0x54f55a */ goto L_0054f55a;
L_0054f368:; BB(0x0054f368);
    /* 0054f368: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f36a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f36d: call 0x550fd0 */ r_esp -= 4; W32(r_esp, 0x54f372u); f_00550fd0();
    /* 0054f372: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054f375: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f377: je 0x54f3f0 */ if (fZ) goto L_0054f3f0;
L_0054f379:; BB(0x0054f379);
    /* 0054f379: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f380: jmp 0x54f38b */ goto L_0054f38b;
L_0054f382:; BB(0x0054f382);
    /* 0054f382: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f385: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f388: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f38b:; BB(0x0054f38b);
    /* 0054f38b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f38e: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f393u); f_0054c540();
    /* 0054f393: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f396: jge 0x54f3e1 */ if ((fS==fO)) goto L_0054f3e1;
L_0054f398:; BB(0x0054f398);
    /* 0054f398: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f39b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f39e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f3a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f3a4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54f3a9u); f_00641280();
    /* 0054f3a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f3ac: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f3af: je 0x54f3ca */ if (fZ) goto L_0054f3ca;
L_0054f3b1:; BB(0x0054f3b1);
    /* 0054f3b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f3b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f3b7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f3bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f3c0: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f3c5u); f_0054c590();
    /* 0054f3c5: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f3c8: jne 0x54f3df */ if (!fZ) goto L_0054f3df;
L_0054f3ca:; BB(0x0054f3ca);
    /* 0054f3ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f3cd: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f3d0: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f3d3: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054f3d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f3d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f3dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054f3df:; BB(0x0054f3df);
    /* 0054f3df: jmp 0x54f382 */ goto L_0054f382;
L_0054f3e1:; BB(0x0054f3e1);
    /* 0054f3e1: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f3e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f3e6: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f3ebu); f_005519a0();
    /* 0054f3eb: jmp 0x54f55a */ goto L_0054f55a;
L_0054f3f0:; BB(0x0054f3f0);
    /* 0054f3f0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f3f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f3f4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f3f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f3f9: call 0x551670 */ r_esp -= 4; W32(r_esp, 0x54f3feu); f_00551670();
    /* 0054f3fe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f401: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f403: je 0x54f457 */ if (fZ) goto L_0054f457;
L_0054f405:; BB(0x0054f405);
    /* 0054f405: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f40c: jmp 0x54f417 */ goto L_0054f417;
L_0054f40e:; BB(0x0054f40e);
    /* 0054f40e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f411: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f414: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054f417:; BB(0x0054f417);
    /* 0054f417: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f41a: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f41fu); f_0054c540();
    /* 0054f41f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f422: jge 0x54f457 */ if ((fS==fO)) goto L_0054f457;
L_0054f424:; BB(0x0054f424);
    /* 0054f424: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f427: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f42a: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054f42f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f430: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f433: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f438u); f_0054c590();
    /* 0054f438: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f43b: jne 0x54f455 */ if (!fZ) goto L_0054f455;
L_0054f43d:; BB(0x0054f43d);
    /* 0054f43d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f440: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f443: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0054f446: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f448: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f44b: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f450u); f_005519a0();
    /* 0054f450: jmp 0x54f55a */ goto L_0054f55a;
L_0054f455:; BB(0x0054f455);
    /* 0054f455: jmp 0x54f40e */ goto L_0054f40e;
L_0054f457:; BB(0x0054f457);
    /* 0054f457: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054f45e: jmp 0x54f469 */ goto L_0054f469;
L_0054f460:; BB(0x0054f460);
    /* 0054f460: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f463: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f466: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054f469:; BB(0x0054f469);
    /* 0054f469: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f46d: jg 0x54f501 */ if ((!fZ&&fS==fO)) goto L_0054f501;
L_0054f473:; BB(0x0054f473);
    /* 0054f473: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f475: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f479: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f47c: call 0x5510d0 */ r_esp -= 4; W32(r_esp, 0x54f481u); f_005510d0();
    /* 0054f481: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054f484: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f486: je 0x54f4fc */ if (fZ) goto L_0054f4fc;
L_0054f488:; BB(0x0054f488);
    /* 0054f488: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054f48f: jmp 0x54f49a */ goto L_0054f49a;
L_0054f491:; BB(0x0054f491);
    /* 0054f491: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f494: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f497: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0054f49a:; BB(0x0054f49a);
    /* 0054f49a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f49d: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f4a2u); f_0054c540();
    /* 0054f4a2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f4a5: jge 0x54f4f0 */ if ((fS==fO)) goto L_0054f4f0;
L_0054f4a7:; BB(0x0054f4a7);
    /* 0054f4a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f4aa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f4ad: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054f4b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f4b3: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54f4b8u); f_00641290();
    /* 0054f4b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f4bb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f4be: je 0x54f4d9 */ if (fZ) goto L_0054f4d9;
L_0054f4c0:; BB(0x0054f4c0);
    /* 0054f4c0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054f4c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f4c6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054f4cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f4cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f4cf: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f4d4u); f_0054c590();
    /* 0054f4d4: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f4d7: jne 0x54f4ee */ if (!fZ) goto L_0054f4ee;
L_0054f4d9:; BB(0x0054f4d9);
    /* 0054f4d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f4dc: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f4df: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0054f4e2: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0054f4e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f4e8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f4eb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054f4ee:; BB(0x0054f4ee);
    /* 0054f4ee: jmp 0x54f491 */ goto L_0054f491;
L_0054f4f0:; BB(0x0054f4f0);
    /* 0054f4f0: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f4f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f4f5: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f4fau); f_005519a0();
    /* 0054f4fa: jmp 0x54f55a */ goto L_0054f55a;
L_0054f4fc:; BB(0x0054f4fc);
    /* 0054f4fc: jmp 0x54f460 */ goto L_0054f460;
L_0054f501:; BB(0x0054f501);
    /* 0054f501: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054f508: jmp 0x54f513 */ goto L_0054f513;
L_0054f50a:; BB(0x0054f50a);
    /* 0054f50a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f50d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f510: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054f513:; BB(0x0054f513);
    /* 0054f513: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f516: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54f51bu); f_0054c540();
    /* 0054f51b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f51e: jge 0x54f550 */ if ((fS==fO)) goto L_0054f550;
L_0054f520:; BB(0x0054f520);
    /* 0054f520: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054f523: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f526: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054f52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f52c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f52f: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54f534u); f_0054c590();
    /* 0054f534: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f537: jne 0x54f54e */ if (!fZ) goto L_0054f54e;
L_0054f539:; BB(0x0054f539);
    /* 0054f539: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f53c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054f53f: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054f542: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0054f545: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054f548: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054f54b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054f54e:; BB(0x0054f54e);
    /* 0054f54e: jmp 0x54f50a */ goto L_0054f50a;
L_0054f550:; BB(0x0054f550);
    /* 0054f550: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f552: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054f555: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x54f55au); f_005519a0();
L_0054f55a:; BB(0x0054f55a);
    /* 0054f55a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054f55c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f55d: ret  */ FN_RET(0x0054eb80); r_esp += 4; return;
}

