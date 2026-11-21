#include "protos.h"

void f_0055c5d0(void) /* sub_55C5D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055c5d0);
    /* 0055c5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055c5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055c5d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055c5d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055c5d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055c5e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c5e3: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c5e8u); f_0055ec70();
    /* 0055c5e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c5eb: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55c5f0u); f_00559d00();
    /* 0055c5f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c5f2: jne 0x55c888 */ if (!fZ) goto L_0055c888;
L_0055c5f8:; BB(0x0055c5f8);
    /* 0055c5f8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c5fb: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c5ff: jne 0x55c618 */ if (!fZ) goto L_0055c618;
L_0055c601:; BB(0x0055c601);
    /* 0055c601: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c603: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c606: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c60bu); f_0055ecb0();
    /* 0055c60b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c60e: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55c613u); f_0055ec30();
    /* 0055c613: jmp 0x55d26d */ goto L_0055d26d;
L_0055c618:; BB(0x0055c618);
    /* 0055c618: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c61a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c61c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c61e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c621: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c626u); f_0055e640();
    /* 0055c626: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c629: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c62b: je 0x55c63c */ if (fZ) goto L_0055c63c;
L_0055c62d:; BB(0x0055c62d);
    /* 0055c62d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c62f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c632: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c637u); f_0055ecb0();
    /* 0055c637: jmp 0x55d26d */ goto L_0055d26d;
L_0055c63c:; BB(0x0055c63c);
    /* 0055c63c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c63f: cmp dword ptr [edx + 0x10], -1 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c643: jle 0x55c6f5 */ if ((fZ||fS!=fO)) goto L_0055c6f5;
L_0055c649:; BB(0x0055c649);
    /* 0055c649: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c64c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0055c64f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055c652: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055c656: ja 0x55c6f5 */ if ((!fC&&!fZ)) goto L_0055c6f5;
L_0055c65c:; BB(0x0055c65c);
    /* 0055c65c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c65f: movzx eax, byte ptr [edx + 0x55d284] */ r_eax = (u32)R8((u32)(r_edx+0x55d284u));
    /* 0055c666: jmp dword ptr [eax*4 + 0x55d274] */ { u32 t = R32((u32)(r_eax*4+0x55d274u)); switch (t) { case 0x55c66du: goto L_0055c66d; case 0x55c684u: goto L_0055c684; case 0x55c68eu: goto L_0055c68e; case 0x55c6f5u: goto L_0055c6f5; default: UNSUP(0x0055c666, "jump table entry is not a known target"); } }
L_0055c66d:; BB(0x0055c66d);
    /* 0055c66d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c66f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c672: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c677u); f_0055ecb0();
    /* 0055c677: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c67a: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55c67fu); f_0055ec30();
    /* 0055c67f: jmp 0x55d26d */ goto L_0055d26d;
L_0055c684:; BB(0x0055c684);
    /* 0055c684: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c686: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c689: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c68eu); f_0055ecb0();
L_0055c68e:; BB(0x0055c68e);
    /* 0055c68e: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c690: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c693: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c698u); f_0055ecb0();
    /* 0055c698: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c69f: jmp 0x55c6aa */ goto L_0055c6aa;
L_0055c6a1:; BB(0x0055c6a1);
    /* 0055c6a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c6a4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c6a7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055c6aa:; BB(0x0055c6aa);
    /* 0055c6aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c6ad: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c6b2u); f_00559380();
    /* 0055c6b2: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c6b5: jge 0x55c6f0 */ if ((fS==fO)) goto L_0055c6f0;
L_0055c6b7:; BB(0x0055c6b7);
    /* 0055c6b7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c6ba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c6bd: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055c6c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c6c3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55c6c8u); f_00641280();
    /* 0055c6c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c6cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c6cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c6cf: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55c6d4u); f_00559d60();
    /* 0055c6d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c6d7: jle 0x55c6ee */ if ((fZ||fS!=fO)) goto L_0055c6ee;
L_0055c6d9:; BB(0x0055c6d9);
    /* 0055c6d9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c6dc: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c6df: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c6e2: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055c6e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c6e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c6eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055c6ee:; BB(0x0055c6ee);
    /* 0055c6ee: jmp 0x55c6a1 */ goto L_0055c6a1;
L_0055c6f0:; BB(0x0055c6f0);
    /* 0055c6f0: jmp 0x55d26d */ goto L_0055d26d;
L_0055c6f5:; BB(0x0055c6f5);
    /* 0055c6f5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c6f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c6f9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c6fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c6fe: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c703u); f_0055e640();
    /* 0055c703: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c706: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c708: je 0x55c719 */ if (fZ) goto L_0055c719;
L_0055c70a:; BB(0x0055c70a);
    /* 0055c70a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c70c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c70f: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c714u); f_0055ecb0();
    /* 0055c714: jmp 0x55d26d */ goto L_0055d26d;
L_0055c719:; BB(0x0055c719);
    /* 0055c719: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c71b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c71d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c71f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c722: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c727u); f_0055e640();
    /* 0055c727: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c72a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c72c: je 0x55c73d */ if (fZ) goto L_0055c73d;
L_0055c72e:; BB(0x0055c72e);
    /* 0055c72e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c730: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c733: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c738u); f_0055ecb0();
    /* 0055c738: jmp 0x55d26d */ goto L_0055d26d;
L_0055c73d:; BB(0x0055c73d);
    /* 0055c73d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c73f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c741: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c743: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c746: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c74bu); f_0055e640();
    /* 0055c74b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c74e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c750: je 0x55c778 */ if (fZ) goto L_0055c778;
L_0055c752:; BB(0x0055c752);
    /* 0055c752: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c755: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55c75au); f_0055ecf0();
    /* 0055c75a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c75d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c75f: je 0x55c770 */ if (fZ) goto L_0055c770;
L_0055c761:; BB(0x0055c761);
    /* 0055c761: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c763: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c766: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c76bu); f_0055ecb0();
    /* 0055c76b: jmp 0x55d26d */ goto L_0055d26d;
L_0055c770:; BB(0x0055c770);
    /* 0055c770: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c773: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c778u); f_0055ec70();
L_0055c778:; BB(0x0055c778);
    /* 0055c778: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c77b: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55c780u); f_0055e8e0();
    /* 0055c780: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c783: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c785: je 0x55c796 */ if (fZ) goto L_0055c796;
L_0055c787:; BB(0x0055c787);
    /* 0055c787: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c789: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c78c: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c791u); f_0055ecb0();
    /* 0055c791: jmp 0x55d26d */ goto L_0055d26d;
L_0055c796:; BB(0x0055c796);
    /* 0055c796: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c799: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55c79eu); f_0055eba0();
    /* 0055c79e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c7a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c7a3: je 0x55c7b4 */ if (fZ) goto L_0055c7b4;
L_0055c7a5:; BB(0x0055c7a5);
    /* 0055c7a5: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c7aa: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c7afu); f_0055ecb0();
    /* 0055c7af: jmp 0x55d26d */ goto L_0055d26d;
L_0055c7b4:; BB(0x0055c7b4);
    /* 0055c7b4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7b8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c7bd: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55c7c2u); f_0055e980();
    /* 0055c7c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c7c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c7c7: je 0x55c7ef */ if (fZ) goto L_0055c7ef;
L_0055c7c9:; BB(0x0055c7c9);
    /* 0055c7c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c7cc: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55c7d1u); f_0055ecf0();
    /* 0055c7d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c7d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c7d6: je 0x55c7e7 */ if (fZ) goto L_0055c7e7;
L_0055c7d8:; BB(0x0055c7d8);
    /* 0055c7d8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c7dd: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c7e2u); f_0055ecb0();
    /* 0055c7e2: jmp 0x55d26d */ goto L_0055d26d;
L_0055c7e7:; BB(0x0055c7e7);
    /* 0055c7e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c7ea: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c7efu); f_0055ec70();
L_0055c7ef:; BB(0x0055c7ef);
    /* 0055c7ef: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7f1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c7f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c7f8: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c7fdu); f_0055e640();
    /* 0055c7fd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c800: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c802: je 0x55c838 */ if (fZ) goto L_0055c838;
L_0055c804:; BB(0x0055c804);
    /* 0055c804: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c807: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0055c80b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c80e: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c814: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55c819u); f_00641280();
    /* 0055c819: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c81c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c81f: je 0x55c830 */ if (fZ) goto L_0055c830;
L_0055c821:; BB(0x0055c821);
    /* 0055c821: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c823: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c826: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c82bu); f_0055ecb0();
    /* 0055c82b: jmp 0x55d26d */ goto L_0055d26d;
L_0055c830:; BB(0x0055c830);
    /* 0055c830: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c833: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c838u); f_0055ec70();
L_0055c838:; BB(0x0055c838);
    /* 0055c838: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c83a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c83c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c83e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c841: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c846u); f_0055e640();
    /* 0055c846: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c849: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c84b: je 0x55c883 */ if (fZ) goto L_0055c883;
L_0055c84d:; BB(0x0055c84d);
    /* 0055c84d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c850: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055c854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c855: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c858: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055c85c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c85d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c860: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55c865u); f_0055ee60();
    /* 0055c865: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c868: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c86a: jne 0x55c87b */ if (!fZ) goto L_0055c87b;
L_0055c86c:; BB(0x0055c86c);
    /* 0055c86c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c86e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c871: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c876u); f_0055ecb0();
    /* 0055c876: jmp 0x55d26d */ goto L_0055d26d;
L_0055c87b:; BB(0x0055c87b);
    /* 0055c87b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c87e: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c883u); f_0055ec70();
L_0055c883:; BB(0x0055c883);
    /* 0055c883: jmp 0x55d26d */ goto L_0055d26d;
L_0055c888:; BB(0x0055c888);
    /* 0055c888: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c88b: cmp dword ptr [eax + 0x10], -1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c88f: jle 0x55ce4b */ if ((fZ||fS!=fO)) goto L_0055ce4b;
L_0055c895:; BB(0x0055c895);
    /* 0055c895: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c898: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0055c89b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0055c89e: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055c8a2: ja 0x55ce4b */ if ((!fC&&!fZ)) goto L_0055ce4b;
L_0055c8a8:; BB(0x0055c8a8);
    /* 0055c8a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055c8ab: movzx ecx, byte ptr [eax + 0x55d2a0] */ r_ecx = (u32)R8((u32)(r_eax+0x55d2a0u));
    /* 0055c8b2: jmp dword ptr [ecx*4 + 0x55d290] */ { u32 t = R32((u32)(r_ecx*4+0x55d290u)); switch (t) { case 0x55c8b9u: goto L_0055c8b9; case 0x55caadu: goto L_0055caad; case 0x55c8d0u: goto L_0055c8d0; case 0x55cb7au: goto L_0055cb7a; default: UNSUP(0x0055c8b2, "jump table entry is not a known target"); } }
L_0055c8b9:; BB(0x0055c8b9);
    /* 0055c8b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c8be: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c8c3u); f_0055ecb0();
    /* 0055c8c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c8c6: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55c8cbu); f_0055ec30();
    /* 0055c8cb: jmp 0x55d26d */ goto L_0055d26d;
L_0055c8d0:; BB(0x0055c8d0);
    /* 0055c8d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c8d3: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55c8d8u); f_00559d00();
    /* 0055c8d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c8db: jne 0x55c8f2 */ if (!fZ) goto L_0055c8f2;
L_0055c8dd:; BB(0x0055c8dd);
    /* 0055c8dd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8df: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c8e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c8e6: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c8ebu); f_0055e640();
    /* 0055c8eb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c8ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c8f0: jne 0x55c91c */ if (!fZ) goto L_0055c91c;
L_0055c8f2:; BB(0x0055c8f2);
    /* 0055c8f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c8f5: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55c8fau); f_00559d00();
    /* 0055c8fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c8fd: jne 0x55c9ab */ if (!fZ) goto L_0055c9ab;
L_0055c903:; BB(0x0055c903);
    /* 0055c903: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c905: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c907: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c909: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c90c: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c911u); f_0055e640();
    /* 0055c911: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c916: je 0x55c9ab */ if (fZ) goto L_0055c9ab;
L_0055c91c:; BB(0x0055c91c);
    /* 0055c91c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c923: jmp 0x55c92e */ goto L_0055c92e;
L_0055c925:; BB(0x0055c925);
    /* 0055c925: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c928: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c92b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055c92e:; BB(0x0055c92e);
    /* 0055c92e: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c932: jge 0x55c94d */ if ((fS==fO)) goto L_0055c94d;
L_0055c934:; BB(0x0055c934);
    /* 0055c934: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c937: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c93a: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055c93e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c941: jne 0x55c94b */ if (!fZ) goto L_0055c94b;
L_0055c943:; BB(0x0055c943);
    /* 0055c943: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c946: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055c949: jmp 0x55c94d */ goto L_0055c94d;
L_0055c94b:; BB(0x0055c94b);
    /* 0055c94b: jmp 0x55c925 */ goto L_0055c925;
L_0055c94d:; BB(0x0055c94d);
    /* 0055c94d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c954: jmp 0x55c95f */ goto L_0055c95f;
L_0055c956:; BB(0x0055c956);
    /* 0055c956: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c959: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c95c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055c95f:; BB(0x0055c95f);
    /* 0055c95f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c962: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c967u); f_00559380();
    /* 0055c967: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c96a: jge 0x55c99c */ if ((fS==fO)) goto L_0055c99c;
L_0055c96c:; BB(0x0055c96c);
    /* 0055c96c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c96f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c972: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c978: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55c97du); f_00641280();
    /* 0055c97d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c980: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c983: jne 0x55c99a */ if (!fZ) goto L_0055c99a;
L_0055c985:; BB(0x0055c985);
    /* 0055c985: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c988: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c98b: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c98e: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055c991: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c994: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c997: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055c99a:; BB(0x0055c99a);
    /* 0055c99a: jmp 0x55c956 */ goto L_0055c956;
L_0055c99c:; BB(0x0055c99c);
    /* 0055c99c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c99e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c9a1: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c9a6u); f_0055ecb0();
    /* 0055c9a6: jmp 0x55d26d */ goto L_0055d26d;
L_0055c9ab:; BB(0x0055c9ab);
    /* 0055c9ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c9ae: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c9b3u); f_0055ec70();
    /* 0055c9b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c9b6: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55c9bbu); f_00559d00();
    /* 0055c9bb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c9be: jne 0x55c9d5 */ if (!fZ) goto L_0055c9d5;
L_0055c9c0:; BB(0x0055c9c0);
    /* 0055c9c0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c9c9: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c9ceu); f_0055e640();
    /* 0055c9ce: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c9d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c9d3: jne 0x55c9ff */ if (!fZ) goto L_0055c9ff;
L_0055c9d5:; BB(0x0055c9d5);
    /* 0055c9d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c9d8: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55c9ddu); f_00559d00();
    /* 0055c9dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c9e0: jne 0x55ca8e */ if (!fZ) goto L_0055ca8e;
L_0055c9e6:; BB(0x0055c9e6);
    /* 0055c9e6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9ea: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c9ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c9ef: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c9f4u); f_0055e640();
    /* 0055c9f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c9f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c9f9: je 0x55ca8e */ if (fZ) goto L_0055ca8e;
L_0055c9ff:; BB(0x0055c9ff);
    /* 0055c9ff: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ca01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca04: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ca09u); f_0055ecb0();
    /* 0055ca09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ca10: jmp 0x55ca1b */ goto L_0055ca1b;
L_0055ca12:; BB(0x0055ca12);
    /* 0055ca12: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ca15: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ca18: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055ca1b:; BB(0x0055ca1b);
    /* 0055ca1b: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ca1f: jge 0x55ca3a */ if ((fS==fO)) goto L_0055ca3a;
L_0055ca21:; BB(0x0055ca21);
    /* 0055ca21: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca24: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ca27: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055ca2b: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ca2e: jne 0x55ca38 */ if (!fZ) goto L_0055ca38;
L_0055ca30:; BB(0x0055ca30);
    /* 0055ca30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ca33: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0055ca36: jmp 0x55ca3a */ goto L_0055ca3a;
L_0055ca38:; BB(0x0055ca38);
    /* 0055ca38: jmp 0x55ca12 */ goto L_0055ca12;
L_0055ca3a:; BB(0x0055ca3a);
    /* 0055ca3a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ca41: jmp 0x55ca4c */ goto L_0055ca4c;
L_0055ca43:; BB(0x0055ca43);
    /* 0055ca43: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ca46: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ca49: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055ca4c:; BB(0x0055ca4c);
    /* 0055ca4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca4f: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ca54u); f_00559380();
    /* 0055ca54: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ca57: jge 0x55ca89 */ if ((fS==fO)) goto L_0055ca89;
L_0055ca59:; BB(0x0055ca59);
    /* 0055ca59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ca5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca5f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ca64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ca65: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ca6au); f_00641280();
    /* 0055ca6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ca6d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ca70: jne 0x55ca87 */ if (!fZ) goto L_0055ca87;
L_0055ca72:; BB(0x0055ca72);
    /* 0055ca72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca75: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ca78: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ca7b: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055ca7e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ca81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ca84: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055ca87:; BB(0x0055ca87);
    /* 0055ca87: jmp 0x55ca43 */ goto L_0055ca43;
L_0055ca89:; BB(0x0055ca89);
    /* 0055ca89: jmp 0x55d26d */ goto L_0055d26d;
L_0055ca8e:; BB(0x0055ca8e);
    /* 0055ca8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca91: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55ca96u); f_0055ec70();
    /* 0055ca96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ca98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ca9b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55caa0u); f_0055ecb0();
    /* 0055caa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055caa3: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55caa8u); f_0055ec30();
    /* 0055caa8: jmp 0x55d26d */ goto L_0055d26d;
L_0055caad:; BB(0x0055caad);
    /* 0055caad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cab0: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cab5u); f_00559d00();
    /* 0055cab5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cab8: jne 0x55cac9 */ if (!fZ) goto L_0055cac9;
L_0055caba:; BB(0x0055caba);
    /* 0055caba: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cabc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cabf: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55cac4u); f_0055ecb0();
    /* 0055cac4: jmp 0x55cb7a */ goto L_0055cb7a;
L_0055cac9:; BB(0x0055cac9);
    /* 0055cac9: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cacb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cace: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55cad3u); f_0055ecb0();
    /* 0055cad3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cada: jmp 0x55cae5 */ goto L_0055cae5;
L_0055cadc:; BB(0x0055cadc);
    /* 0055cadc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cadf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cae2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055cae5:; BB(0x0055cae5);
    /* 0055cae5: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cae9: jge 0x55cb04 */ if ((fS==fO)) goto L_0055cb04;
L_0055caeb:; BB(0x0055caeb);
    /* 0055caeb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055caee: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055caf1: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055caf5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055caf8: jne 0x55cb02 */ if (!fZ) goto L_0055cb02;
L_0055cafa:; BB(0x0055cafa);
    /* 0055cafa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cafd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055cb00: jmp 0x55cb04 */ goto L_0055cb04;
L_0055cb02:; BB(0x0055cb02);
    /* 0055cb02: jmp 0x55cadc */ goto L_0055cadc;
L_0055cb04:; BB(0x0055cb04);
    /* 0055cb04: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cb0b: jmp 0x55cb16 */ goto L_0055cb16;
L_0055cb0d:; BB(0x0055cb0d);
    /* 0055cb0d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cb10: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cb13: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055cb16:; BB(0x0055cb16);
    /* 0055cb16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb19: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55cb1eu); f_00559380();
    /* 0055cb1e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cb21: jge 0x55cb75 */ if ((fS==fO)) goto L_0055cb75;
L_0055cb23:; BB(0x0055cb23);
    /* 0055cb23: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cb26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb29: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055cb2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb2f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cb34u); f_00641280();
    /* 0055cb34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055cb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb3b: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55cb40u); f_00559d60();
    /* 0055cb40: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cb43: jg 0x55cb5e */ if ((!fZ&&fS==fO)) goto L_0055cb5e;
L_0055cb45:; BB(0x0055cb45);
    /* 0055cb45: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cb48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb4b: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055cb50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb51: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cb56u); f_00641280();
    /* 0055cb56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055cb59: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cb5c: jne 0x55cb73 */ if (!fZ) goto L_0055cb73;
L_0055cb5e:; BB(0x0055cb5e);
    /* 0055cb5e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb61: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cb64: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055cb67: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055cb6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055cb6d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cb70: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055cb73:; BB(0x0055cb73);
    /* 0055cb73: jmp 0x55cb0d */ goto L_0055cb0d;
L_0055cb75:; BB(0x0055cb75);
    /* 0055cb75: jmp 0x55d26d */ goto L_0055d26d;
L_0055cb7a:; BB(0x0055cb7a);
    /* 0055cb7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb7d: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cb82u); f_00559d00();
    /* 0055cb82: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cb85: jne 0x55cb9c */ if (!fZ) goto L_0055cb9c;
L_0055cb87:; BB(0x0055cb87);
    /* 0055cb87: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb89: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb8b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cb8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb90: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55cb95u); f_0055e640();
    /* 0055cb95: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055cb98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cb9a: jne 0x55cbc6 */ if (!fZ) goto L_0055cbc6;
L_0055cb9c:; BB(0x0055cb9c);
    /* 0055cb9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cb9f: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cba4u); f_00559d00();
    /* 0055cba4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cba7: jne 0x55cc55 */ if (!fZ) goto L_0055cc55;
L_0055cbad:; BB(0x0055cbad);
    /* 0055cbad: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbaf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbb1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cbb6: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55cbbbu); f_0055e640();
    /* 0055cbbb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055cbbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cbc0: je 0x55cc55 */ if (fZ) goto L_0055cc55;
L_0055cbc6:; BB(0x0055cbc6);
    /* 0055cbc6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cbc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cbcb: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55cbd0u); f_0055ecb0();
    /* 0055cbd0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cbd7: jmp 0x55cbe2 */ goto L_0055cbe2;
L_0055cbd9:; BB(0x0055cbd9);
    /* 0055cbd9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cbdc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cbdf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055cbe2:; BB(0x0055cbe2);
    /* 0055cbe2: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cbe6: jge 0x55cc01 */ if ((fS==fO)) goto L_0055cc01;
L_0055cbe8:; BB(0x0055cbe8);
    /* 0055cbe8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cbeb: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cbee: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055cbf2: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cbf5: jne 0x55cbff */ if (!fZ) goto L_0055cbff;
L_0055cbf7:; BB(0x0055cbf7);
    /* 0055cbf7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cbfa: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0055cbfd: jmp 0x55cc01 */ goto L_0055cc01;
L_0055cbff:; BB(0x0055cbff);
    /* 0055cbff: jmp 0x55cbd9 */ goto L_0055cbd9;
L_0055cc01:; BB(0x0055cc01);
    /* 0055cc01: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cc08: jmp 0x55cc13 */ goto L_0055cc13;
L_0055cc0a:; BB(0x0055cc0a);
    /* 0055cc0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cc0d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cc10: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055cc13:; BB(0x0055cc13);
    /* 0055cc13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc16: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55cc1bu); f_00559380();
    /* 0055cc1b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cc1e: jge 0x55cc50 */ if ((fS==fO)) goto L_0055cc50;
L_0055cc20:; BB(0x0055cc20);
    /* 0055cc20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cc23: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc26: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055cc2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055cc2c: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cc31u); f_00641280();
    /* 0055cc31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055cc34: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc37: jne 0x55cc4e */ if (!fZ) goto L_0055cc4e;
L_0055cc39:; BB(0x0055cc39);
    /* 0055cc39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc3c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cc3f: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055cc42: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055cc45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055cc48: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cc4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055cc4e:; BB(0x0055cc4e);
    /* 0055cc4e: jmp 0x55cc0a */ goto L_0055cc0a;
L_0055cc50:; BB(0x0055cc50);
    /* 0055cc50: jmp 0x55d26d */ goto L_0055d26d;
L_0055cc55:; BB(0x0055cc55);
    /* 0055cc55: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cc5c: jmp 0x55cc67 */ goto L_0055cc67;
L_0055cc5e:; BB(0x0055cc5e);
    /* 0055cc5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cc61: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cc64: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055cc67:; BB(0x0055cc67);
    /* 0055cc67: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cc6b: jge 0x55cc79 */ if ((fS==fO)) goto L_0055cc79;
L_0055cc6d:; BB(0x0055cc6d);
    /* 0055cc6d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc70: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cc73: mov byte ptr [edx + 0x14], 0xff */ W8((u32)(r_edx+0x14u), 0xffu);
    /* 0055cc77: jmp 0x55cc5e */ goto L_0055cc5e;
L_0055cc79:; BB(0x0055cc79);
    /* 0055cc79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc7c: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cc81u); f_00559d00();
    /* 0055cc81: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc84: jne 0x55cc9b */ if (!fZ) goto L_0055cc9b;
L_0055cc86:; BB(0x0055cc86);
    /* 0055cc86: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055cc88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cc8a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cc8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc8f: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55cc94u); f_0055e640();
    /* 0055cc94: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055cc97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cc99: jne 0x55ccc5 */ if (!fZ) goto L_0055ccc5;
L_0055cc9b:; BB(0x0055cc9b);
    /* 0055cc9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cc9e: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cca3u); f_00559d00();
    /* 0055cca3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cca6: jne 0x55cd65 */ if (!fZ) goto L_0055cd65;
L_0055ccac:; BB(0x0055ccac);
    /* 0055ccac: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ccae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ccb0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ccb2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ccb5: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55ccbau); f_0055e640();
    /* 0055ccba: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055ccbd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ccbf: je 0x55cd65 */ if (fZ) goto L_0055cd65;
L_0055ccc5:; BB(0x0055ccc5);
    /* 0055ccc5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ccc8: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0055cccc: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cccf: jne 0x55ccd6 */ if (!fZ) goto L_0055ccd6;
L_0055ccd1:; BB(0x0055ccd1);
    /* 0055ccd1: jmp 0x55ce4b */ goto L_0055ce4b;
L_0055ccd6:; BB(0x0055ccd6);
    /* 0055ccd6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ccd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ccdb: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55cce0u); f_0055ecb0();
    /* 0055cce0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cce7: jmp 0x55ccf2 */ goto L_0055ccf2;
L_0055cce9:; BB(0x0055cce9);
    /* 0055cce9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ccec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ccef: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055ccf2:; BB(0x0055ccf2);
    /* 0055ccf2: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ccf6: jge 0x55cd11 */ if ((fS==fO)) goto L_0055cd11;
L_0055ccf8:; BB(0x0055ccf8);
    /* 0055ccf8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ccfb: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ccfe: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055cd02: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cd05: jne 0x55cd0f */ if (!fZ) goto L_0055cd0f;
L_0055cd07:; BB(0x0055cd07);
    /* 0055cd07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cd0a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0055cd0d: jmp 0x55cd11 */ goto L_0055cd11;
L_0055cd0f:; BB(0x0055cd0f);
    /* 0055cd0f: jmp 0x55cce9 */ goto L_0055cce9;
L_0055cd11:; BB(0x0055cd11);
    /* 0055cd11: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cd18: jmp 0x55cd23 */ goto L_0055cd23;
L_0055cd1a:; BB(0x0055cd1a);
    /* 0055cd1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cd1d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cd20: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055cd23:; BB(0x0055cd23);
    /* 0055cd23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cd26: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55cd2bu); f_00559380();
    /* 0055cd2b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cd2e: jge 0x55cd60 */ if ((fS==fO)) goto L_0055cd60;
L_0055cd30:; BB(0x0055cd30);
    /* 0055cd30: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cd33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cd36: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055cd3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055cd3c: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cd41u); f_00641280();
    /* 0055cd41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055cd44: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cd47: jne 0x55cd5e */ if (!fZ) goto L_0055cd5e;
L_0055cd49:; BB(0x0055cd49);
    /* 0055cd49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cd4c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cd4f: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055cd52: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055cd55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055cd58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cd5b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055cd5e:; BB(0x0055cd5e);
    /* 0055cd5e: jmp 0x55cd1a */ goto L_0055cd1a;
L_0055cd60:; BB(0x0055cd60);
    /* 0055cd60: jmp 0x55d26d */ goto L_0055d26d;
L_0055cd65:; BB(0x0055cd65);
    /* 0055cd65: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cd6c: jmp 0x55cd77 */ goto L_0055cd77;
L_0055cd6e:; BB(0x0055cd6e);
    /* 0055cd6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cd71: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cd74: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055cd77:; BB(0x0055cd77);
    /* 0055cd77: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cd7b: jge 0x55cd89 */ if ((fS==fO)) goto L_0055cd89;
L_0055cd7d:; BB(0x0055cd7d);
    /* 0055cd7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cd80: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cd83: mov byte ptr [ecx + 0x14], 0xff */ W8((u32)(r_ecx+0x14u), 0xffu);
    /* 0055cd87: jmp 0x55cd6e */ goto L_0055cd6e;
L_0055cd89:; BB(0x0055cd89);
    /* 0055cd89: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cd8c: movsx eax, byte ptr [edx + 0x19] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x19u));
    /* 0055cd90: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cd93: je 0x55cda1 */ if (fZ) goto L_0055cda1;
L_0055cd95:; BB(0x0055cd95);
    /* 0055cd95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cd98: movsx edx, byte ptr [ecx + 0x19] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x19u));
    /* 0055cd9c: cmp edx, 0x15 */ {  u32 a = r_edx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cd9f: jne 0x55cda6 */ if (!fZ) goto L_0055cda6;
L_0055cda1:; BB(0x0055cda1);
    /* 0055cda1: jmp 0x55ce4b */ goto L_0055ce4b;
L_0055cda6:; BB(0x0055cda6);
    /* 0055cda6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cda9: cmp dword ptr [eax + 0x10], 9 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cdad: jne 0x55cdcb */ if (!fZ) goto L_0055cdcb;
L_0055cdaf:; BB(0x0055cdaf);
    /* 0055cdaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cdb2: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cdb7u); f_00559d00();
    /* 0055cdb7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cdba: jle 0x55cdcb */ if ((fZ||fS!=fO)) goto L_0055cdcb;
L_0055cdbc:; BB(0x0055cdbc);
    /* 0055cdbc: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055cdbe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cdc1: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55cdc6u); f_0055ecb0();
    /* 0055cdc6: jmp 0x55ce4b */ goto L_0055ce4b;
L_0055cdcb:; BB(0x0055cdcb);
    /* 0055cdcb: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cdcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cdd0: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55cdd5u); f_0055ecb0();
    /* 0055cdd5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cddc: jmp 0x55cde7 */ goto L_0055cde7;
L_0055cdde:; BB(0x0055cdde);
    /* 0055cdde: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cde1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cde4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055cde7:; BB(0x0055cde7);
    /* 0055cde7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cdea: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55cdefu); f_00559380();
    /* 0055cdef: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cdf2: jge 0x55ce46 */ if ((fS==fO)) goto L_0055ce46;
L_0055cdf4:; BB(0x0055cdf4);
    /* 0055cdf4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cdf7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cdfa: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055cdff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce00: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ce05u); f_00641280();
    /* 0055ce05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ce08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce0c: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55ce11u); f_00559d60();
    /* 0055ce11: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ce14: jg 0x55ce2f */ if ((!fZ&&fS==fO)) goto L_0055ce2f;
L_0055ce16:; BB(0x0055ce16);
    /* 0055ce16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ce19: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce1c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ce21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce22: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ce27u); f_00641280();
    /* 0055ce27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ce2a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ce2d: jne 0x55ce44 */ if (!fZ) goto L_0055ce44;
L_0055ce2f:; BB(0x0055ce2f);
    /* 0055ce2f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce32: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ce35: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ce38: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055ce3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ce3e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055ce41: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055ce44:; BB(0x0055ce44);
    /* 0055ce44: jmp 0x55cdde */ goto L_0055cdde;
L_0055ce46:; BB(0x0055ce46);
    /* 0055ce46: jmp 0x55d26d */ goto L_0055d26d;
L_0055ce4b:; BB(0x0055ce4b);
    /* 0055ce4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce4e: call 0x559920 */ r_esp -= 4; W32(r_esp, 0x55ce53u); f_00559920();
    /* 0055ce53: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055ce56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ce58: je 0x55cebb */ if (fZ) goto L_0055cebb;
L_0055ce5a:; BB(0x0055ce5a);
    /* 0055ce5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce5d: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ce62u); f_00559d00();
    /* 0055ce62: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ce65: jne 0x55cebb */ if (!fZ) goto L_0055cebb;
L_0055ce67:; BB(0x0055ce67);
    /* 0055ce67: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ce6e: jmp 0x55ce79 */ goto L_0055ce79;
L_0055ce70:; BB(0x0055ce70);
    /* 0055ce70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ce73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ce76: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055ce79:; BB(0x0055ce79);
    /* 0055ce79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce7c: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ce81u); f_00559380();
    /* 0055ce81: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ce84: jge 0x55ceb6 */ if ((fS==fO)) goto L_0055ceb6;
L_0055ce86:; BB(0x0055ce86);
    /* 0055ce86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ce89: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ce8c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ce91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ce92: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ce97u); f_00641280();
    /* 0055ce97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ce9a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ce9d: jne 0x55ceb4 */ if (!fZ) goto L_0055ceb4;
L_0055ce9f:; BB(0x0055ce9f);
    /* 0055ce9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cea2: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055cea5: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055cea8: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055ceab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055ceae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055ceb1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055ceb4:; BB(0x0055ceb4);
    /* 0055ceb4: jmp 0x55ce70 */ goto L_0055ce70;
L_0055ceb6:; BB(0x0055ceb6);
    /* 0055ceb6: jmp 0x55d26d */ goto L_0055d26d;
L_0055cebb:; BB(0x0055cebb);
    /* 0055cebb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cebe: call 0x559920 */ r_esp -= 4; W32(r_esp, 0x55cec3u); f_00559920();
    /* 0055cec3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055cec6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cec8: je 0x55cf51 */ if (fZ) goto L_0055cf51;
L_0055cece:; BB(0x0055cece);
    /* 0055cece: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ced1: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55ced6u); f_00559d00();
    /* 0055ced6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ced9: jl 0x55cf51 */ if ((fS!=fO)) goto L_0055cf51;
L_0055cedb:; BB(0x0055cedb);
    /* 0055cedb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cee2: jmp 0x55ceed */ goto L_0055ceed;
L_0055cee4:; BB(0x0055cee4);
    /* 0055cee4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cee7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ceea: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055ceed:; BB(0x0055ceed);
    /* 0055ceed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cef0: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55cef5u); f_00559380();
    /* 0055cef5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cef8: jge 0x55cf4c */ if ((fS==fO)) goto L_0055cf4c;
L_0055cefa:; BB(0x0055cefa);
    /* 0055cefa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cefd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf00: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055cf05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf06: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cf0bu); f_00641280();
    /* 0055cf0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055cf0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf12: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55cf17u); f_00559d60();
    /* 0055cf17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cf1a: jg 0x55cf35 */ if ((!fZ&&fS==fO)) goto L_0055cf35;
L_0055cf1c:; BB(0x0055cf1c);
    /* 0055cf1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cf1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf22: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055cf27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf28: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cf2du); f_00641280();
    /* 0055cf2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055cf30: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf33: jne 0x55cf4a */ if (!fZ) goto L_0055cf4a;
L_0055cf35:; BB(0x0055cf35);
    /* 0055cf35: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf38: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cf3b: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055cf3e: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055cf41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055cf44: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cf47: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055cf4a:; BB(0x0055cf4a);
    /* 0055cf4a: jmp 0x55cee4 */ goto L_0055cee4;
L_0055cf4c:; BB(0x0055cf4c);
    /* 0055cf4c: jmp 0x55d26d */ goto L_0055d26d;
L_0055cf51:; BB(0x0055cf51);
    /* 0055cf51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf54: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cf59u); f_00559d00();
    /* 0055cf59: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf5c: jne 0x55cf73 */ if (!fZ) goto L_0055cf73;
L_0055cf5e:; BB(0x0055cf5e);
    /* 0055cf5e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf60: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf62: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf67: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55cf6cu); f_0055e640();
    /* 0055cf6c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055cf6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf71: jne 0x55cf9d */ if (!fZ) goto L_0055cf9d;
L_0055cf73:; BB(0x0055cf73);
    /* 0055cf73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf76: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55cf7bu); f_00559d00();
    /* 0055cf7b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf7e: jne 0x55d02c */ if (!fZ) goto L_0055d02c;
L_0055cf84:; BB(0x0055cf84);
    /* 0055cf84: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf86: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf88: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055cf8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cf8d: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55cf92u); f_0055e640();
    /* 0055cf92: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055cf95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cf97: je 0x55d02c */ if (fZ) goto L_0055d02c;
L_0055cf9d:; BB(0x0055cf9d);
    /* 0055cf9d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cfa4: jmp 0x55cfaf */ goto L_0055cfaf;
L_0055cfa6:; BB(0x0055cfa6);
    /* 0055cfa6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cfa9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055cfac: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055cfaf:; BB(0x0055cfaf);
    /* 0055cfaf: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cfb3: jge 0x55cfce */ if ((fS==fO)) goto L_0055cfce;
L_0055cfb5:; BB(0x0055cfb5);
    /* 0055cfb5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cfb8: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cfbb: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055cfbf: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055cfc2: jne 0x55cfcc */ if (!fZ) goto L_0055cfcc;
L_0055cfc4:; BB(0x0055cfc4);
    /* 0055cfc4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cfc7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0055cfca: jmp 0x55cfce */ goto L_0055cfce;
L_0055cfcc:; BB(0x0055cfcc);
    /* 0055cfcc: jmp 0x55cfa6 */ goto L_0055cfa6;
L_0055cfce:; BB(0x0055cfce);
    /* 0055cfce: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055cfd5: jmp 0x55cfe0 */ goto L_0055cfe0;
L_0055cfd7:; BB(0x0055cfd7);
    /* 0055cfd7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cfda: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055cfdd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055cfe0:; BB(0x0055cfe0);
    /* 0055cfe0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cfe3: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55cfe8u); f_00559380();
    /* 0055cfe8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055cfeb: jge 0x55d01d */ if ((fS==fO)) goto L_0055d01d;
L_0055cfed:; BB(0x0055cfed);
    /* 0055cfed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055cff0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055cff3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055cff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055cff9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55cffeu); f_00641280();
    /* 0055cffe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d001: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d004: jne 0x55d01b */ if (!fZ) goto L_0055d01b;
L_0055d006:; BB(0x0055d006);
    /* 0055d006: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d009: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d00c: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d00f: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055d012: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d015: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d018: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055d01b:; BB(0x0055d01b);
    /* 0055d01b: jmp 0x55cfd7 */ goto L_0055cfd7;
L_0055d01d:; BB(0x0055d01d);
    /* 0055d01d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d01f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d022: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d027u); f_0055ecb0();
    /* 0055d027: jmp 0x55d26d */ goto L_0055d26d;
L_0055d02c:; BB(0x0055d02c);
    /* 0055d02c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d02f: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d034u); f_0055ec70();
    /* 0055d034: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d037: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55d03cu); f_00559d00();
    /* 0055d03c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d03f: jne 0x55d056 */ if (!fZ) goto L_0055d056;
L_0055d041:; BB(0x0055d041);
    /* 0055d041: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d043: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d045: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d047: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d04a: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d04fu); f_0055e640();
    /* 0055d04f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d054: jne 0x55d080 */ if (!fZ) goto L_0055d080;
L_0055d056:; BB(0x0055d056);
    /* 0055d056: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d059: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55d05eu); f_00559d00();
    /* 0055d05e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d061: jne 0x55d10f */ if (!fZ) goto L_0055d10f;
L_0055d067:; BB(0x0055d067);
    /* 0055d067: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d069: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d06b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d06d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d070: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d075u); f_0055e640();
    /* 0055d075: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d078: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d07a: je 0x55d10f */ if (fZ) goto L_0055d10f;
L_0055d080:; BB(0x0055d080);
    /* 0055d080: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d082: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d085: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d08au); f_0055ecb0();
    /* 0055d08a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d091: jmp 0x55d09c */ goto L_0055d09c;
L_0055d093:; BB(0x0055d093);
    /* 0055d093: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d096: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d099: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055d09c:; BB(0x0055d09c);
    /* 0055d09c: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d0a0: jge 0x55d0bb */ if ((fS==fO)) goto L_0055d0bb;
L_0055d0a2:; BB(0x0055d0a2);
    /* 0055d0a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d0a5: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d0a8: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0055d0ac: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d0af: jne 0x55d0b9 */ if (!fZ) goto L_0055d0b9;
L_0055d0b1:; BB(0x0055d0b1);
    /* 0055d0b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d0b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0055d0b7: jmp 0x55d0bb */ goto L_0055d0bb;
L_0055d0b9:; BB(0x0055d0b9);
    /* 0055d0b9: jmp 0x55d093 */ goto L_0055d093;
L_0055d0bb:; BB(0x0055d0bb);
    /* 0055d0bb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d0c2: jmp 0x55d0cd */ goto L_0055d0cd;
L_0055d0c4:; BB(0x0055d0c4);
    /* 0055d0c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d0c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d0ca: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055d0cd:; BB(0x0055d0cd);
    /* 0055d0cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d0d0: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d0d5u); f_00559380();
    /* 0055d0d5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d0d8: jge 0x55d10a */ if ((fS==fO)) goto L_0055d10a;
L_0055d0da:; BB(0x0055d0da);
    /* 0055d0da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d0dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d0e0: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055d0e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d0e6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d0ebu); f_00641280();
    /* 0055d0eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d0ee: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d0f1: jne 0x55d108 */ if (!fZ) goto L_0055d108;
L_0055d0f3:; BB(0x0055d0f3);
    /* 0055d0f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d0f6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d0f9: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d0fc: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055d0ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d102: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d105: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055d108:; BB(0x0055d108);
    /* 0055d108: jmp 0x55d0c4 */ goto L_0055d0c4;
L_0055d10a:; BB(0x0055d10a);
    /* 0055d10a: jmp 0x55d26d */ goto L_0055d26d;
L_0055d10f:; BB(0x0055d10f);
    /* 0055d10f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d112: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d117u); f_0055ec70();
    /* 0055d117: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d11a: call 0x559c00 */ r_esp -= 4; W32(r_esp, 0x55d11fu); f_00559c00();
    /* 0055d11f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d122: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d124: je 0x55d191 */ if (fZ) goto L_0055d191;
L_0055d126:; BB(0x0055d126);
    /* 0055d126: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d129: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55d12eu); f_00559d00();
    /* 0055d12e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d131: jne 0x55d191 */ if (!fZ) goto L_0055d191;
L_0055d133:; BB(0x0055d133);
    /* 0055d133: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d138: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d13du); f_0055ecb0();
    /* 0055d13d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d144: jmp 0x55d14f */ goto L_0055d14f;
L_0055d146:; BB(0x0055d146);
    /* 0055d146: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d149: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d14c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055d14f:; BB(0x0055d14f);
    /* 0055d14f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d152: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d157u); f_00559380();
    /* 0055d157: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d15a: jge 0x55d18c */ if ((fS==fO)) goto L_0055d18c;
L_0055d15c:; BB(0x0055d15c);
    /* 0055d15c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d15f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d162: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055d167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d168: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d16du); f_00641280();
    /* 0055d16d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d170: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d173: jne 0x55d18a */ if (!fZ) goto L_0055d18a;
L_0055d175:; BB(0x0055d175);
    /* 0055d175: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d178: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055d17b: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d17e: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055d181: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d184: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d187: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055d18a:; BB(0x0055d18a);
    /* 0055d18a: jmp 0x55d146 */ goto L_0055d146;
L_0055d18c:; BB(0x0055d18c);
    /* 0055d18c: jmp 0x55d26d */ goto L_0055d26d;
L_0055d191:; BB(0x0055d191);
    /* 0055d191: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d194: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55d199u); f_00559d00();
    /* 0055d199: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d19c: jne 0x55d204 */ if (!fZ) goto L_0055d204;
L_0055d19e:; BB(0x0055d19e);
    /* 0055d19e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d1a7: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d1acu); f_0055e640();
    /* 0055d1ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d1af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d1b1: je 0x55d204 */ if (fZ) goto L_0055d204;
L_0055d1b3:; BB(0x0055d1b3);
    /* 0055d1b3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d1ba: jmp 0x55d1c5 */ goto L_0055d1c5;
L_0055d1bc:; BB(0x0055d1bc);
    /* 0055d1bc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d1bf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d1c2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055d1c5:; BB(0x0055d1c5);
    /* 0055d1c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d1c8: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d1cdu); f_00559380();
    /* 0055d1cd: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d1d0: jge 0x55d1f8 */ if ((fS==fO)) goto L_0055d1f8;
L_0055d1d2:; BB(0x0055d1d2);
    /* 0055d1d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d1d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d1d8: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d1dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1de: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d1e3u); f_00641280();
    /* 0055d1e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d1e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d1e9: jne 0x55d1f6 */ if (!fZ) goto L_0055d1f6;
L_0055d1eb:; BB(0x0055d1eb);
    /* 0055d1eb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d1ee: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d1f1: mov byte ptr [eax + 0x16], cl */ W8((u32)(r_eax+0x16u), (u8)r_ecx);
    /* 0055d1f4: jmp 0x55d1f8 */ goto L_0055d1f8;
L_0055d1f6:; BB(0x0055d1f6);
    /* 0055d1f6: jmp 0x55d1bc */ goto L_0055d1bc;
L_0055d1f8:; BB(0x0055d1f8);
    /* 0055d1f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d1fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d1fd: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d202u); f_0055ecb0();
    /* 0055d202: jmp 0x55d26d */ goto L_0055d26d;
L_0055d204:; BB(0x0055d204);
    /* 0055d204: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d20b: jmp 0x55d216 */ goto L_0055d216;
L_0055d20d:; BB(0x0055d20d);
    /* 0055d20d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d210: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d213: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055d216:; BB(0x0055d216);
    /* 0055d216: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d219: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d21eu); f_00559380();
    /* 0055d21e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d221: jge 0x55d253 */ if ((fS==fO)) goto L_0055d253;
L_0055d223:; BB(0x0055d223);
    /* 0055d223: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d226: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d229: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d22e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d22f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d234u); f_00641280();
    /* 0055d234: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d237: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d23a: jne 0x55d251 */ if (!fZ) goto L_0055d251;
L_0055d23c:; BB(0x0055d23c);
    /* 0055d23c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d23f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d242: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d245: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055d248: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d24b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d24e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055d251:; BB(0x0055d251);
    /* 0055d251: jmp 0x55d20d */ goto L_0055d20d;
L_0055d253:; BB(0x0055d253);
    /* 0055d253: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d257: jle 0x55d265 */ if ((fZ||fS!=fO)) goto L_0055d265;
L_0055d259:; BB(0x0055d259);
    /* 0055d259: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d25b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d25e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d263u); f_0055ecb0();
    /* 0055d263: jmp 0x55d26d */ goto L_0055d26d;
L_0055d265:; BB(0x0055d265);
    /* 0055d265: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d268: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d26du); f_0055ec70();
L_0055d26d:; BB(0x0055d26d);
    /* 0055d26d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055d26f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d270: ret  */ FN_RET(0x0055c5d0); r_esp += 4; return;
}

