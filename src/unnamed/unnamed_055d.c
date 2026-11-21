#include "protos.h"

void f_0055d2b0(void) /* sub_55D2B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055d2b0);
    /* 0055d2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055d2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055d2b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055d2b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055d2b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055d2c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d2c3: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d2c8u); f_0055ec70();
    /* 0055d2c8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d2ca: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d2cc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d2ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d2d1: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d2d6u); f_0055e640();
    /* 0055d2d6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d2d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d2db: je 0x55d2ec */ if (fZ) goto L_0055d2ec;
L_0055d2dd:; BB(0x0055d2dd);
    /* 0055d2dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d2df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d2e2: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d2e7u); f_0055ecb0();
    /* 0055d2e7: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d2ec:; BB(0x0055d2ec);
    /* 0055d2ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d2ef: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d2f3: jle 0x55d3a8 */ if ((fZ||fS!=fO)) goto L_0055d3a8;
L_0055d2f9:; BB(0x0055d2f9);
    /* 0055d2f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d2fc: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055d2ff: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055d302: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055d306: ja 0x55d3a8 */ if ((!fC&&!fZ)) goto L_0055d3a8;
L_0055d30c:; BB(0x0055d30c);
    /* 0055d30c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055d30f: jmp dword ptr [ecx*4 + 0x55d6cc] */ { u32 t = R32((u32)(r_ecx*4+0x55d6ccu)); switch (t) { case 0x55d316u: goto L_0055d316; case 0x55d32du: goto L_0055d32d; case 0x55d337u: goto L_0055d337; case 0x55d341u: goto L_0055d341; default: UNSUP(0x0055d30f, "jump table entry is not a known target"); } }
L_0055d316:; BB(0x0055d316);
    /* 0055d316: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d318: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d31b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d320u); f_0055ecb0();
    /* 0055d320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d323: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55d328u); f_0055ec30();
    /* 0055d328: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d32d:; BB(0x0055d32d);
    /* 0055d32d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d32f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d332: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d337u); f_0055ecb0();
L_0055d337:; BB(0x0055d337);
    /* 0055d337: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055d339: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d33c: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d341u); f_0055ecb0();
L_0055d341:; BB(0x0055d341);
    /* 0055d341: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d343: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d346: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d34bu); f_0055ecb0();
    /* 0055d34b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d352: jmp 0x55d35d */ goto L_0055d35d;
L_0055d354:; BB(0x0055d354);
    /* 0055d354: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d357: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d35a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055d35d:; BB(0x0055d35d);
    /* 0055d35d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d360: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d365u); f_00559380();
    /* 0055d365: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d368: jge 0x55d3a3 */ if ((fS==fO)) goto L_0055d3a3;
L_0055d36a:; BB(0x0055d36a);
    /* 0055d36a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d36d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d370: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d375: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d376: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d37bu); f_00641280();
    /* 0055d37b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d37e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d37f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d382: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55d387u); f_00559d60();
    /* 0055d387: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d38a: jle 0x55d3a1 */ if ((fZ||fS!=fO)) goto L_0055d3a1;
L_0055d38c:; BB(0x0055d38c);
    /* 0055d38c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d38f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d392: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d395: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055d398: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d39b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d39e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055d3a1:; BB(0x0055d3a1);
    /* 0055d3a1: jmp 0x55d354 */ goto L_0055d354;
L_0055d3a3:; BB(0x0055d3a3);
    /* 0055d3a3: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d3a8:; BB(0x0055d3a8);
    /* 0055d3a8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3ac: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d3b1: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d3b6u); f_0055e640();
    /* 0055d3b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d3b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d3bb: je 0x55d3cc */ if (fZ) goto L_0055d3cc;
L_0055d3bd:; BB(0x0055d3bd);
    /* 0055d3bd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d3c2: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d3c7u); f_0055ecb0();
    /* 0055d3c7: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d3cc:; BB(0x0055d3cc);
    /* 0055d3cc: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3ce: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d3d5: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d3dau); f_0055e640();
    /* 0055d3da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d3dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d3df: je 0x55d3f0 */ if (fZ) goto L_0055d3f0;
L_0055d3e1:; BB(0x0055d3e1);
    /* 0055d3e1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d3e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d3e6: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d3ebu); f_0055ecb0();
    /* 0055d3eb: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d3f0:; BB(0x0055d3f0);
    /* 0055d3f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d3f3: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55d3f8u); f_0055e8e0();
    /* 0055d3f8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d3fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d3fd: je 0x55d40e */ if (fZ) goto L_0055d40e;
L_0055d3ff:; BB(0x0055d3ff);
    /* 0055d3ff: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d401: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d404: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d409u); f_0055ecb0();
    /* 0055d409: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d40e:; BB(0x0055d40e);
    /* 0055d40e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d410: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d412: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d414: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d417: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55d41cu); f_0055e980();
    /* 0055d41c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d41f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d421: je 0x55d483 */ if (fZ) goto L_0055d483;
L_0055d423:; BB(0x0055d423);
    /* 0055d423: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d426: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55d42bu); f_0055ecf0();
    /* 0055d42b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d42e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d430: je 0x55d47b */ if (fZ) goto L_0055d47b;
L_0055d432:; BB(0x0055d432);
    /* 0055d432: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d435: movsx eax, byte ptr [edx + 0x17] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x17u));
    /* 0055d439: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d43c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d441: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d442: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d445: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55d44au); f_005593d0();
    /* 0055d44a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d44d: jl 0x55d47b */ if ((fS!=fO)) goto L_0055d47b;
L_0055d44f:; BB(0x0055d44f);
    /* 0055d44f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d452: movsx ecx, byte ptr [eax + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x17u));
    /* 0055d456: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d459: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055d45e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d45f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d462: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55d467u); f_005593d0();
    /* 0055d467: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d46a: jge 0x55d47b */ if ((fS==fO)) goto L_0055d47b;
L_0055d46c:; BB(0x0055d46c);
    /* 0055d46c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0055d46e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d471: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d476u); f_0055ecb0();
    /* 0055d476: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d47b:; BB(0x0055d47b);
    /* 0055d47b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d47e: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d483u); f_0055ec70();
L_0055d483:; BB(0x0055d483);
    /* 0055d483: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d486: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55d48bu); f_0055eba0();
    /* 0055d48b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d48e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d490: je 0x55d4a1 */ if (fZ) goto L_0055d4a1;
L_0055d492:; BB(0x0055d492);
    /* 0055d492: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0055d494: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d497: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d49cu); f_0055ecb0();
    /* 0055d49c: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d4a1:; BB(0x0055d4a1);
    /* 0055d4a1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4a3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4a5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4aa: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d4afu); f_0055e640();
    /* 0055d4af: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d4b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d4b4: je 0x55d526 */ if (fZ) goto L_0055d526;
L_0055d4b6:; BB(0x0055d4b6);
    /* 0055d4b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4b9: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055d4bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4c1: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055d4c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4c9: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55d4ceu); f_0055ee60();
    /* 0055d4ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d4d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d4d3: jne 0x55d51e */ if (!fZ) goto L_0055d51e;
L_0055d4d5:; BB(0x0055d4d5);
    /* 0055d4d5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4d8: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 0055d4dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4df: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d4e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d4e5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d4eau); f_00641280();
    /* 0055d4ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d4ed: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d4f0: je 0x55d50f */ if (fZ) goto L_0055d50f;
L_0055d4f2:; BB(0x0055d4f2);
    /* 0055d4f2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4f5: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055d4f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d4fc: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055d501: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d502: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d507u); f_00641280();
    /* 0055d507: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d50a: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d50d: jne 0x55d51e */ if (!fZ) goto L_0055d51e;
L_0055d50f:; BB(0x0055d50f);
    /* 0055d50f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d514: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d519u); f_0055ecb0();
    /* 0055d519: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d51e:; BB(0x0055d51e);
    /* 0055d51e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d521: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d526u); f_0055ec70();
L_0055d526:; BB(0x0055d526);
    /* 0055d526: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d52a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d52c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d52f: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55d534u); f_0055e980();
    /* 0055d534: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d537: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d539: je 0x55d561 */ if (fZ) goto L_0055d561;
L_0055d53b:; BB(0x0055d53b);
    /* 0055d53b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d53e: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55d543u); f_0055ecf0();
    /* 0055d543: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d546: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d548: je 0x55d559 */ if (fZ) goto L_0055d559;
L_0055d54a:; BB(0x0055d54a);
    /* 0055d54a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d54c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d54f: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d554u); f_0055ecb0();
    /* 0055d554: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d559:; BB(0x0055d559);
    /* 0055d559: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d55c: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d561u); f_0055ec70();
L_0055d561:; BB(0x0055d561);
    /* 0055d561: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d563: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d565: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d567: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d56a: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d56fu); f_0055e640();
    /* 0055d56f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d574: je 0x55d5c7 */ if (fZ) goto L_0055d5c7;
L_0055d576:; BB(0x0055d576);
    /* 0055d576: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d579: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 0055d57d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d580: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055d585: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d586: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d58bu); f_00641280();
    /* 0055d58b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d58e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d591: jl 0x55d5bf */ if ((fS!=fO)) goto L_0055d5bf;
L_0055d593:; BB(0x0055d593);
    /* 0055d593: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d596: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0055d59a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d59d: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d5a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5a3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d5a8u); f_00641280();
    /* 0055d5a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d5ab: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d5ae: jg 0x55d5bf */ if ((!fZ&&fS==fO)) goto L_0055d5bf;
L_0055d5b0:; BB(0x0055d5b0);
    /* 0055d5b0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d5b5: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d5bau); f_0055ecb0();
    /* 0055d5ba: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d5bf:; BB(0x0055d5bf);
    /* 0055d5bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d5c2: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d5c7u); f_0055ec70();
L_0055d5c7:; BB(0x0055d5c7);
    /* 0055d5c7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5c9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5cb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d5d0: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55d5d5u); f_0055e980();
    /* 0055d5d5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d5d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d5da: je 0x55d610 */ if (fZ) goto L_0055d610;
L_0055d5dc:; BB(0x0055d5dc);
    /* 0055d5dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d5df: movsx edx, byte ptr [ecx + 0x17] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x17u));
    /* 0055d5e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d5e6: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055d5eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5ec: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d5f1u); f_00641280();
    /* 0055d5f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d5f4: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d5f7: jne 0x55d608 */ if (!fZ) goto L_0055d608;
L_0055d5f9:; BB(0x0055d5f9);
    /* 0055d5f9: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d5fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d5fe: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d603u); f_0055ecb0();
    /* 0055d603: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d608:; BB(0x0055d608);
    /* 0055d608: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d60b: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d610u); f_0055ec70();
L_0055d610:; BB(0x0055d610);
    /* 0055d610: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d612: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d614: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d616: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d619: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d61eu); f_0055e640();
    /* 0055d61e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d621: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d623: je 0x55d658 */ if (fZ) goto L_0055d658;
L_0055d625:; BB(0x0055d625);
    /* 0055d625: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d628: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055d62c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d62d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d630: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055d634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d638: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55d63du); f_0055ee60();
    /* 0055d63d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d640: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d642: jne 0x55d650 */ if (!fZ) goto L_0055d650;
L_0055d644:; BB(0x0055d644);
    /* 0055d644: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d646: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d649: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d64eu); f_0055ecb0();
    /* 0055d64e: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d650:; BB(0x0055d650);
    /* 0055d650: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d653: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d658u); f_0055ec70();
L_0055d658:; BB(0x0055d658);
    /* 0055d658: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d65f: jmp 0x55d66a */ goto L_0055d66a;
L_0055d661:; BB(0x0055d661);
    /* 0055d661: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d664: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d667: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055d66a:; BB(0x0055d66a);
    /* 0055d66a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d66d: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d672u); f_00559380();
    /* 0055d672: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d675: jge 0x55d6a7 */ if ((fS==fO)) goto L_0055d6a7;
L_0055d677:; BB(0x0055d677);
    /* 0055d677: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d67a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d67d: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d682: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d683: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d686: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55d68bu); f_005593d0();
    /* 0055d68b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d68e: jl 0x55d6a5 */ if ((fS!=fO)) goto L_0055d6a5;
L_0055d690:; BB(0x0055d690);
    /* 0055d690: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d693: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d696: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d699: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055d69c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d69f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d6a2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055d6a5:; BB(0x0055d6a5);
    /* 0055d6a5: jmp 0x55d661 */ goto L_0055d661;
L_0055d6a7:; BB(0x0055d6a7);
    /* 0055d6a7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d6ab: je 0x55d6bf */ if (fZ) goto L_0055d6bf;
L_0055d6ad:; BB(0x0055d6ad);
    /* 0055d6ad: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d6b1: jge 0x55d6bf */ if ((fS==fO)) goto L_0055d6bf;
L_0055d6b3:; BB(0x0055d6b3);
    /* 0055d6b3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d6b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d6b8: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d6bdu); f_0055ecb0();
    /* 0055d6bd: jmp 0x55d6c7 */ goto L_0055d6c7;
L_0055d6bf:; BB(0x0055d6bf);
    /* 0055d6bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d6c2: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d6c7u); f_0055ec70();
L_0055d6c7:; BB(0x0055d6c7);
    /* 0055d6c7: mov esp, ebp */ r_esp = r_ebp;
    /* 0055d6c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055d6ca: ret  */ FN_RET(0x0055d2b0); r_esp += 4; return;
}

void f_0055d6f0(void) /* sub_55D6F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055d6f0);
    /* 0055d6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055d6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055d6f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055d6f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055d6f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055d700: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d703: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d708u); f_0055ec70();
    /* 0055d708: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d70b: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d70f: je 0x55d71a */ if (fZ) goto L_0055d71a;
L_0055d711:; BB(0x0055d711);
    /* 0055d711: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d714: cmp dword ptr [ecx + 0x10], 1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d718: jne 0x55d731 */ if (!fZ) goto L_0055d731;
L_0055d71a:; BB(0x0055d71a);
    /* 0055d71a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d71c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d71f: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d724u); f_0055ecb0();
    /* 0055d724: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d727: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55d72cu); f_0055ec30();
    /* 0055d72c: jmp 0x55dacb */ goto L_0055dacb;
L_0055d731:; BB(0x0055d731);
    /* 0055d731: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d733: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d735: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d737: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d73a: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d73fu); f_0055e640();
    /* 0055d73f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d742: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d744: je 0x55d755 */ if (fZ) goto L_0055d755;
L_0055d746:; BB(0x0055d746);
    /* 0055d746: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d748: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d74b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d750u); f_0055ecb0();
    /* 0055d750: jmp 0x55dacb */ goto L_0055dacb;
L_0055d755:; BB(0x0055d755);
    /* 0055d755: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d757: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d759: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d75b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d75e: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d763u); f_0055e640();
    /* 0055d763: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d768: je 0x55d779 */ if (fZ) goto L_0055d779;
L_0055d76a:; BB(0x0055d76a);
    /* 0055d76a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d76c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d76f: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d774u); f_0055ecb0();
    /* 0055d774: jmp 0x55dacb */ goto L_0055dacb;
L_0055d779:; BB(0x0055d779);
    /* 0055d779: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d77c: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d780: jle 0x55d835 */ if ((fZ||fS!=fO)) goto L_0055d835;
L_0055d786:; BB(0x0055d786);
    /* 0055d786: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d789: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055d78c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055d78f: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055d793: ja 0x55d835 */ if ((!fC&&!fZ)) goto L_0055d835;
L_0055d799:; BB(0x0055d799);
    /* 0055d799: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055d79c: jmp dword ptr [ecx*4 + 0x55dad0] */ { u32 t = R32((u32)(r_ecx*4+0x55dad0u)); switch (t) { case 0x55d7a3u: goto L_0055d7a3; case 0x55d7bau: goto L_0055d7ba; case 0x55d7c4u: goto L_0055d7c4; case 0x55d7ceu: goto L_0055d7ce; default: UNSUP(0x0055d79c, "jump table entry is not a known target"); } }
L_0055d7a3:; BB(0x0055d7a3);
    /* 0055d7a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d7a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7a8: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d7adu); f_0055ecb0();
    /* 0055d7ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7b0: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55d7b5u); f_0055ec30();
    /* 0055d7b5: jmp 0x55dacb */ goto L_0055dacb;
L_0055d7ba:; BB(0x0055d7ba);
    /* 0055d7ba: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d7bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7bf: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d7c4u); f_0055ecb0();
L_0055d7c4:; BB(0x0055d7c4);
    /* 0055d7c4: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055d7c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7c9: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d7ceu); f_0055ecb0();
L_0055d7ce:; BB(0x0055d7ce);
    /* 0055d7ce: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d7d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7d3: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d7d8u); f_0055ecb0();
    /* 0055d7d8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055d7df: jmp 0x55d7ea */ goto L_0055d7ea;
L_0055d7e1:; BB(0x0055d7e1);
    /* 0055d7e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d7e4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d7e7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055d7ea:; BB(0x0055d7ea);
    /* 0055d7ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7ed: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55d7f2u); f_00559380();
    /* 0055d7f2: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d7f5: jge 0x55d830 */ if ((fS==fO)) goto L_0055d830;
L_0055d7f7:; BB(0x0055d7f7);
    /* 0055d7f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055d7fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d7fd: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055d802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d803: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d808u); f_00641280();
    /* 0055d808: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d80c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d80f: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55d814u); f_00559d60();
    /* 0055d814: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d817: jle 0x55d82e */ if ((fZ||fS!=fO)) goto L_0055d82e;
L_0055d819:; BB(0x0055d819);
    /* 0055d819: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d81c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055d81f: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055d822: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055d825: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055d828: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055d82b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055d82e:; BB(0x0055d82e);
    /* 0055d82e: jmp 0x55d7e1 */ goto L_0055d7e1;
L_0055d830:; BB(0x0055d830);
    /* 0055d830: jmp 0x55dacb */ goto L_0055dacb;
L_0055d835:; BB(0x0055d835);
    /* 0055d835: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d837: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d839: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d83b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d83e: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d843u); f_0055e640();
    /* 0055d843: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d848: je 0x55d880 */ if (fZ) goto L_0055d880;
L_0055d84a:; BB(0x0055d84a);
    /* 0055d84a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d84d: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055d851: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d852: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d855: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055d859: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d85a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d85d: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55d862u); f_0055ee60();
    /* 0055d862: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d865: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d867: jne 0x55d878 */ if (!fZ) goto L_0055d878;
L_0055d869:; BB(0x0055d869);
    /* 0055d869: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d86b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d86e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d873u); f_0055ecb0();
    /* 0055d873: jmp 0x55dacb */ goto L_0055dacb;
L_0055d878:; BB(0x0055d878);
    /* 0055d878: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d87b: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d880u); f_0055ec70();
L_0055d880:; BB(0x0055d880);
    /* 0055d880: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d883: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55d888u); f_0055e8e0();
    /* 0055d888: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d88b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d88d: je 0x55d89e */ if (fZ) goto L_0055d89e;
L_0055d88f:; BB(0x0055d88f);
    /* 0055d88f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d891: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d894: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d899u); f_0055ecb0();
    /* 0055d899: jmp 0x55dacb */ goto L_0055dacb;
L_0055d89e:; BB(0x0055d89e);
    /* 0055d89e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8a7: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55d8acu); f_0055e980();
    /* 0055d8ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d8af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d8b1: je 0x55d8f6 */ if (fZ) goto L_0055d8f6;
L_0055d8b3:; BB(0x0055d8b3);
    /* 0055d8b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8b6: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55d8bbu); f_0055ecf0();
    /* 0055d8bb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d8be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d8c0: je 0x55d8ee */ if (fZ) goto L_0055d8ee;
L_0055d8c2:; BB(0x0055d8c2);
    /* 0055d8c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8c5: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 0055d8c9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8cc: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055d8d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8d2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d8d7u); f_00641280();
    /* 0055d8d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d8da: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d8dd: jle 0x55d8ee */ if ((fZ||fS!=fO)) goto L_0055d8ee;
L_0055d8df:; BB(0x0055d8df);
    /* 0055d8df: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d8e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8e4: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d8e9u); f_0055ecb0();
    /* 0055d8e9: jmp 0x55dacb */ goto L_0055dacb;
L_0055d8ee:; BB(0x0055d8ee);
    /* 0055d8ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8f1: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d8f6u); f_0055ec70();
L_0055d8f6:; BB(0x0055d8f6);
    /* 0055d8f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d8f9: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55d8feu); f_0055eba0();
    /* 0055d8fe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d901: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d903: je 0x55d914 */ if (fZ) goto L_0055d914;
L_0055d905:; BB(0x0055d905);
    /* 0055d905: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0055d907: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d90a: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d90fu); f_0055ecb0();
    /* 0055d90f: jmp 0x55dacb */ goto L_0055dacb;
L_0055d914:; BB(0x0055d914);
    /* 0055d914: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d916: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d918: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d91a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d91d: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55d922u); f_0055e980();
    /* 0055d922: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d925: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d927: je 0x55d96c */ if (fZ) goto L_0055d96c;
L_0055d929:; BB(0x0055d929);
    /* 0055d929: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d92c: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55d931u); f_0055ecf0();
    /* 0055d931: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d936: je 0x55d964 */ if (fZ) goto L_0055d964;
L_0055d938:; BB(0x0055d938);
    /* 0055d938: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d93b: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 0055d93f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d942: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055d947: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d948: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55d94du); f_00641280();
    /* 0055d94d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055d950: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055d953: jge 0x55d964 */ if ((fS==fO)) goto L_0055d964;
L_0055d955:; BB(0x0055d955);
    /* 0055d955: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d957: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d95a: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d95fu); f_0055ecb0();
    /* 0055d95f: jmp 0x55dacb */ goto L_0055dacb;
L_0055d964:; BB(0x0055d964);
    /* 0055d964: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d967: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d96cu); f_0055ec70();
L_0055d96c:; BB(0x0055d96c);
    /* 0055d96c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d96e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d970: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d972: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d975: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d97au); f_0055e640();
    /* 0055d97a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d97d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d97f: je 0x55d9a7 */ if (fZ) goto L_0055d9a7;
L_0055d981:; BB(0x0055d981);
    /* 0055d981: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d984: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55d989u); f_0055ecf0();
    /* 0055d989: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055d98c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d98e: je 0x55d99f */ if (fZ) goto L_0055d99f;
L_0055d990:; BB(0x0055d990);
    /* 0055d990: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d992: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d995: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d99au); f_0055ecb0();
    /* 0055d99a: jmp 0x55dacb */ goto L_0055dacb;
L_0055d99f:; BB(0x0055d99f);
    /* 0055d99f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9a2: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55d9a7u); f_0055ec70();
L_0055d9a7:; BB(0x0055d9a7);
    /* 0055d9a7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9a9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9b0: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d9b5u); f_0055e640();
    /* 0055d9b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d9b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d9ba: je 0x55d9cb */ if (fZ) goto L_0055d9cb;
L_0055d9bc:; BB(0x0055d9bc);
    /* 0055d9bc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9c1: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55d9c6u); f_0055ecb0();
    /* 0055d9c6: jmp 0x55dacb */ goto L_0055dacb;
L_0055d9cb:; BB(0x0055d9cb);
    /* 0055d9cb: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9d4: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55d9d9u); f_0055e640();
    /* 0055d9d9: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055d9dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d9de: je 0x55da16 */ if (fZ) goto L_0055da16;
L_0055d9e0:; BB(0x0055d9e0);
    /* 0055d9e0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9e3: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055d9e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9e8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9eb: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055d9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055d9f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055d9f3: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55d9f8u); f_0055ee60();
    /* 0055d9f8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055d9fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055d9fd: jne 0x55da0e */ if (!fZ) goto L_0055da0e;
L_0055d9ff:; BB(0x0055d9ff);
    /* 0055d9ff: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055da01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da04: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55da09u); f_0055ecb0();
    /* 0055da09: jmp 0x55dacb */ goto L_0055dacb;
L_0055da0e:; BB(0x0055da0e);
    /* 0055da0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da11: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55da16u); f_0055ec70();
L_0055da16:; BB(0x0055da16);
    /* 0055da16: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055da18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055da1a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055da1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da1f: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55da24u); f_0055e980();
    /* 0055da24: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055da27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055da29: je 0x55da5c */ if (fZ) goto L_0055da5c;
L_0055da2b:; BB(0x0055da2b);
    /* 0055da2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da2e: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 0055da32: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da35: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055da3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055da3b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55da40u); f_00641280();
    /* 0055da40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055da43: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055da46: jle 0x55da54 */ if ((fZ||fS!=fO)) goto L_0055da54;
L_0055da48:; BB(0x0055da48);
    /* 0055da48: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055da4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da4d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55da52u); f_0055ecb0();
    /* 0055da52: jmp 0x55dacb */ goto L_0055dacb;
L_0055da54:; BB(0x0055da54);
    /* 0055da54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da57: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55da5cu); f_0055ec70();
L_0055da5c:; BB(0x0055da5c);
    /* 0055da5c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055da63: jmp 0x55da6e */ goto L_0055da6e;
L_0055da65:; BB(0x0055da65);
    /* 0055da65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055da68: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055da6b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055da6e:; BB(0x0055da6e);
    /* 0055da6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da71: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55da76u); f_00559380();
    /* 0055da76: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055da79: jge 0x55daab */ if ((fS==fO)) goto L_0055daab;
L_0055da7b:; BB(0x0055da7b);
    /* 0055da7b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055da7e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da81: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055da86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055da87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da8a: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55da8fu); f_005593d0();
    /* 0055da8f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055da92: jle 0x55daa9 */ if ((fZ||fS!=fO)) goto L_0055daa9;
L_0055da94:; BB(0x0055da94);
    /* 0055da94: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055da97: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055da9a: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055da9d: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055daa0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055daa3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055daa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055daa9:; BB(0x0055daa9);
    /* 0055daa9: jmp 0x55da65 */ goto L_0055da65;
L_0055daab:; BB(0x0055daab);
    /* 0055daab: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055daaf: je 0x55dac3 */ if (fZ) goto L_0055dac3;
L_0055dab1:; BB(0x0055dab1);
    /* 0055dab1: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dab5: jge 0x55dac3 */ if ((fS==fO)) goto L_0055dac3;
L_0055dab7:; BB(0x0055dab7);
    /* 0055dab7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dab9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dabc: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dac1u); f_0055ecb0();
    /* 0055dac1: jmp 0x55dacb */ goto L_0055dacb;
L_0055dac3:; BB(0x0055dac3);
    /* 0055dac3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dac6: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55dacbu); f_0055ec70();
L_0055dacb:; BB(0x0055dacb);
    /* 0055dacb: mov esp, ebp */ r_esp = r_ebp;
    /* 0055dacd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055dace: ret  */ FN_RET(0x0055d6f0); r_esp += 4; return;
}

void f_0055db00(void) /* sub_55DB00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055db00);
    /* 0055db00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055db01: mov ebp, esp */ r_ebp = r_esp;
    /* 0055db03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055db06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055db09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055db10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db13: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55db18u); f_0055ec70();
    /* 0055db18: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055db1a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055db1c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055db1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db21: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55db26u); f_0055e640();
    /* 0055db26: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055db29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055db2b: je 0x55db3c */ if (fZ) goto L_0055db3c;
L_0055db2d:; BB(0x0055db2d);
    /* 0055db2d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055db2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db32: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55db37u); f_0055ecb0();
    /* 0055db37: jmp 0x55deac */ goto L_0055deac;
L_0055db3c:; BB(0x0055db3c);
    /* 0055db3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db3f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055db43: jle 0x55dbf8 */ if ((fZ||fS!=fO)) goto L_0055dbf8;
L_0055db49:; BB(0x0055db49);
    /* 0055db49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db4c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055db4f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055db52: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055db56: ja 0x55dbf8 */ if ((!fC&&!fZ)) goto L_0055dbf8;
L_0055db5c:; BB(0x0055db5c);
    /* 0055db5c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055db5f: jmp dword ptr [ecx*4 + 0x55deb0] */ { u32 t = R32((u32)(r_ecx*4+0x55deb0u)); switch (t) { case 0x55db66u: goto L_0055db66; case 0x55db7du: goto L_0055db7d; case 0x55db87u: goto L_0055db87; case 0x55db91u: goto L_0055db91; default: UNSUP(0x0055db5f, "jump table entry is not a known target"); } }
L_0055db66:; BB(0x0055db66);
    /* 0055db66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055db68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db6b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55db70u); f_0055ecb0();
    /* 0055db70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db73: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55db78u); f_0055ec30();
    /* 0055db78: jmp 0x55deac */ goto L_0055deac;
L_0055db7d:; BB(0x0055db7d);
    /* 0055db7d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055db7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db82: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55db87u); f_0055ecb0();
L_0055db87:; BB(0x0055db87);
    /* 0055db87: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055db89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db8c: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55db91u); f_0055ecb0();
L_0055db91:; BB(0x0055db91);
    /* 0055db91: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055db93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055db96: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55db9bu); f_0055ecb0();
    /* 0055db9b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055dba2: jmp 0x55dbad */ goto L_0055dbad;
L_0055dba4:; BB(0x0055dba4);
    /* 0055dba4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055dba7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055dbaa: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055dbad:; BB(0x0055dbad);
    /* 0055dbad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dbb0: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55dbb5u); f_00559380();
    /* 0055dbb5: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dbb8: jge 0x55dbf3 */ if ((fS==fO)) goto L_0055dbf3;
L_0055dbba:; BB(0x0055dbba);
    /* 0055dbba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055dbbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dbc0: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055dbc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055dbc6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55dbcbu); f_00641280();
    /* 0055dbcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055dbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055dbcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dbd2: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55dbd7u); f_00559d60();
    /* 0055dbd7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dbda: jle 0x55dbf1 */ if ((fZ||fS!=fO)) goto L_0055dbf1;
L_0055dbdc:; BB(0x0055dbdc);
    /* 0055dbdc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dbdf: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055dbe2: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055dbe5: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055dbe8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055dbeb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055dbee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055dbf1:; BB(0x0055dbf1);
    /* 0055dbf1: jmp 0x55dba4 */ goto L_0055dba4;
L_0055dbf3:; BB(0x0055dbf3);
    /* 0055dbf3: jmp 0x55deac */ goto L_0055deac;
L_0055dbf8:; BB(0x0055dbf8);
    /* 0055dbf8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dbfa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dbfc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dbfe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc01: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55dc06u); f_0055e640();
    /* 0055dc06: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055dc09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc0b: je 0x55dc1c */ if (fZ) goto L_0055dc1c;
L_0055dc0d:; BB(0x0055dc0d);
    /* 0055dc0d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc12: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dc17u); f_0055ecb0();
    /* 0055dc17: jmp 0x55deac */ goto L_0055deac;
L_0055dc1c:; BB(0x0055dc1c);
    /* 0055dc1c: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc1e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc20: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc25: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55dc2au); f_0055e640();
    /* 0055dc2a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055dc2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc2f: je 0x55dc40 */ if (fZ) goto L_0055dc40;
L_0055dc31:; BB(0x0055dc31);
    /* 0055dc31: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc36: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dc3bu); f_0055ecb0();
    /* 0055dc3b: jmp 0x55deac */ goto L_0055deac;
L_0055dc40:; BB(0x0055dc40);
    /* 0055dc40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc43: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55dc48u); f_0055e8e0();
    /* 0055dc48: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055dc4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc4d: je 0x55dc5e */ if (fZ) goto L_0055dc5e;
L_0055dc4f:; BB(0x0055dc4f);
    /* 0055dc4f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc54: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dc59u); f_0055ecb0();
    /* 0055dc59: jmp 0x55deac */ goto L_0055deac;
L_0055dc5e:; BB(0x0055dc5e);
    /* 0055dc5e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc62: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc67: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55dc6cu); f_0055e980();
    /* 0055dc6c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055dc6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc71: je 0x55dcd3 */ if (fZ) goto L_0055dcd3;
L_0055dc73:; BB(0x0055dc73);
    /* 0055dc73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc76: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55dc7bu); f_0055ecf0();
    /* 0055dc7b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055dc7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dc80: je 0x55dccb */ if (fZ) goto L_0055dccb;
L_0055dc82:; BB(0x0055dc82);
    /* 0055dc82: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc85: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 0055dc89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dc8c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055dc91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055dc92: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55dc97u); f_00641280();
    /* 0055dc97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055dc9a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dc9d: jg 0x55dcbc */ if ((!fZ&&fS==fO)) goto L_0055dcbc;
L_0055dc9f:; BB(0x0055dc9f);
    /* 0055dc9f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dca2: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055dca6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dca9: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055dcae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055dcaf: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55dcb4u); f_00641280();
    /* 0055dcb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055dcb7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dcba: jle 0x55dccb */ if ((fZ||fS!=fO)) goto L_0055dccb;
L_0055dcbc:; BB(0x0055dcbc);
    /* 0055dcbc: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dcbe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dcc1: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dcc6u); f_0055ecb0();
    /* 0055dcc6: jmp 0x55deac */ goto L_0055deac;
L_0055dccb:; BB(0x0055dccb);
    /* 0055dccb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dcce: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55dcd3u); f_0055ec70();
L_0055dcd3:; BB(0x0055dcd3);
    /* 0055dcd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dcd6: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55dcdbu); f_0055eba0();
    /* 0055dcdb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055dcde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dce0: je 0x55dcf1 */ if (fZ) goto L_0055dcf1;
L_0055dce2:; BB(0x0055dce2);
    /* 0055dce2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0055dce4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dce7: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dcecu); f_0055ecb0();
    /* 0055dcec: jmp 0x55deac */ goto L_0055deac;
L_0055dcf1:; BB(0x0055dcf1);
    /* 0055dcf1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dcf3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dcf5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dcf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dcfa: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55dcffu); f_0055e980();
    /* 0055dcff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055dd02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd04: je 0x55dd49 */ if (fZ) goto L_0055dd49;
L_0055dd06:; BB(0x0055dd06);
    /* 0055dd06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd09: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55dd0eu); f_0055ecf0();
    /* 0055dd0e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055dd11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd13: je 0x55dd41 */ if (fZ) goto L_0055dd41;
L_0055dd15:; BB(0x0055dd15);
    /* 0055dd15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd18: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055dd1c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd1f: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055dd24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd25: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55dd2au); f_00641280();
    /* 0055dd2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055dd2d: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dd30: jge 0x55dd41 */ if ((fS==fO)) goto L_0055dd41;
L_0055dd32:; BB(0x0055dd32);
    /* 0055dd32: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd37: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dd3cu); f_0055ecb0();
    /* 0055dd3c: jmp 0x55deac */ goto L_0055deac;
L_0055dd41:; BB(0x0055dd41);
    /* 0055dd41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd44: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55dd49u); f_0055ec70();
L_0055dd49:; BB(0x0055dd49);
    /* 0055dd49: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd4d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd52: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55dd57u); f_0055e640();
    /* 0055dd57: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055dd5a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd5c: je 0x55dd94 */ if (fZ) goto L_0055dd94;
L_0055dd5e:; BB(0x0055dd5e);
    /* 0055dd5e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd61: movsx ecx, byte ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x16u));
    /* 0055dd65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd66: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd69: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0055dd6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd71: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55dd76u); f_0055ee60();
    /* 0055dd76: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055dd79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dd7b: jne 0x55dd8c */ if (!fZ) goto L_0055dd8c;
L_0055dd7d:; BB(0x0055dd7d);
    /* 0055dd7d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd82: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dd87u); f_0055ecb0();
    /* 0055dd87: jmp 0x55deac */ goto L_0055deac;
L_0055dd8c:; BB(0x0055dd8c);
    /* 0055dd8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd8f: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55dd94u); f_0055ec70();
L_0055dd94:; BB(0x0055dd94);
    /* 0055dd94: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd98: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dd9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dd9d: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55dda2u); f_0055e980();
    /* 0055dda2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055dda5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dda7: je 0x55dddd */ if (fZ) goto L_0055dddd;
L_0055dda9:; BB(0x0055dda9);
    /* 0055dda9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ddac: movsx ecx, byte ptr [eax + 0x17] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x17u));
    /* 0055ddb0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ddb3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055ddb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055ddb9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55ddbeu); f_00641280();
    /* 0055ddbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055ddc1: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddc4: jne 0x55ddd5 */ if (!fZ) goto L_0055ddd5;
L_0055ddc6:; BB(0x0055ddc6);
    /* 0055ddc6: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ddc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ddcb: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ddd0u); f_0055ecb0();
    /* 0055ddd0: jmp 0x55deac */ goto L_0055deac;
L_0055ddd5:; BB(0x0055ddd5);
    /* 0055ddd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ddd8: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55ddddu); f_0055ec70();
L_0055dddd:; BB(0x0055dddd);
    /* 0055dddd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dddf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055dde1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dde3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dde6: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55ddebu); f_0055e640();
    /* 0055ddeb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055ddee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ddf0: je 0x55de01 */ if (fZ) goto L_0055de01;
L_0055ddf2:; BB(0x0055ddf2);
    /* 0055ddf2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ddf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055ddf7: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ddfcu); f_0055ecb0();
    /* 0055ddfc: jmp 0x55deac */ goto L_0055deac;
L_0055de01:; BB(0x0055de01);
    /* 0055de01: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055de03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055de05: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055de07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de0a: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55de0fu); f_0055e980();
    /* 0055de0f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055de12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055de14: je 0x55de47 */ if (fZ) goto L_0055de47;
L_0055de16:; BB(0x0055de16);
    /* 0055de16: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de19: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 0055de1d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de20: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055de25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055de26: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55de2bu); f_00641280();
    /* 0055de2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055de2e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055de31: jle 0x55de3f */ if ((fZ||fS!=fO)) goto L_0055de3f;
L_0055de33:; BB(0x0055de33);
    /* 0055de33: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055de35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de38: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55de3du); f_0055ecb0();
    /* 0055de3d: jmp 0x55deac */ goto L_0055deac;
L_0055de3f:; BB(0x0055de3f);
    /* 0055de3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de42: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55de47u); f_0055ec70();
L_0055de47:; BB(0x0055de47);
    /* 0055de47: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055de4e: jmp 0x55de59 */ goto L_0055de59;
L_0055de50:; BB(0x0055de50);
    /* 0055de50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055de53: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055de56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055de59:; BB(0x0055de59);
    /* 0055de59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de5c: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55de61u); f_00559380();
    /* 0055de61: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055de64: jge 0x55de96 */ if ((fS==fO)) goto L_0055de96;
L_0055de66:; BB(0x0055de66);
    /* 0055de66: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055de69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de6c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055de71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055de72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de75: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55de7au); f_005593d0();
    /* 0055de7a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055de7d: jle 0x55de94 */ if ((fZ||fS!=fO)) goto L_0055de94;
L_0055de7f:; BB(0x0055de7f);
    /* 0055de7f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055de82: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055de85: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055de88: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055de8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055de8e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055de91: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055de94:; BB(0x0055de94);
    /* 0055de94: jmp 0x55de50 */ goto L_0055de50;
L_0055de96:; BB(0x0055de96);
    /* 0055de96: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055de9a: je 0x55deac */ if (fZ) goto L_0055deac;
L_0055de9c:; BB(0x0055de9c);
    /* 0055de9c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dea0: jge 0x55deac */ if ((fS==fO)) goto L_0055deac;
L_0055dea2:; BB(0x0055dea2);
    /* 0055dea2: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dea4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dea7: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55deacu); f_0055ecb0();
L_0055deac:; BB(0x0055deac);
    /* 0055deac: mov esp, ebp */ r_esp = r_ebp;
    /* 0055deae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055deaf: ret  */ FN_RET(0x0055db00); r_esp += 4; return;
}

void f_0055dee0(void) /* sub_55DEE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055dee0);
    /* 0055dee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055dee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055dee3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055dee6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0055dee9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055def0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055def3: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55def8u); f_0055ec70();
    /* 0055def8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055defa: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055defc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055defe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df01: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55df06u); f_0055e640();
    /* 0055df06: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055df09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055df0b: je 0x55df1c */ if (fZ) goto L_0055df1c;
L_0055df0d:; BB(0x0055df0d);
    /* 0055df0d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df12: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55df17u); f_0055ecb0();
    /* 0055df17: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055df1c:; BB(0x0055df1c);
    /* 0055df1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df1f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055df23: jle 0x55dfdf */ if ((fZ||fS!=fO)) goto L_0055dfdf;
L_0055df29:; BB(0x0055df29);
    /* 0055df29: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df2c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055df2f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055df32: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055df36: ja 0x55dfdf */ if ((!fC&&!fZ)) goto L_0055dfdf;
L_0055df3c:; BB(0x0055df3c);
    /* 0055df3c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055df3f: movzx edx, byte ptr [ecx + 0x55e2d0] */ r_edx = (u32)R8((u32)(r_ecx+0x55e2d0u));
    /* 0055df46: jmp dword ptr [edx*4 + 0x55e2c0] */ { u32 t = R32((u32)(r_edx*4+0x55e2c0u)); switch (t) { case 0x55df4du: goto L_0055df4d; case 0x55df64u: goto L_0055df64; case 0x55df6eu: goto L_0055df6e; case 0x55df78u: goto L_0055df78; default: UNSUP(0x0055df46, "jump table entry is not a known target"); } }
L_0055df4d:; BB(0x0055df4d);
    /* 0055df4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df52: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55df57u); f_0055ecb0();
    /* 0055df57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df5a: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55df5fu); f_0055ec30();
    /* 0055df5f: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055df64:; BB(0x0055df64);
    /* 0055df64: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055df66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df69: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55df6eu); f_0055ecb0();
L_0055df6e:; BB(0x0055df6e);
    /* 0055df6e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055df70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df73: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55df78u); f_0055ecb0();
L_0055df78:; BB(0x0055df78);
    /* 0055df78: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055df7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df7d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55df82u); f_0055ecb0();
    /* 0055df82: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055df89: jmp 0x55df94 */ goto L_0055df94;
L_0055df8b:; BB(0x0055df8b);
    /* 0055df8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055df8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055df91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055df94:; BB(0x0055df94);
    /* 0055df94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055df97: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55df9cu); f_00559380();
    /* 0055df9c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055df9f: jge 0x55dfda */ if ((fS==fO)) goto L_0055dfda;
L_0055dfa1:; BB(0x0055dfa1);
    /* 0055dfa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055dfa4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dfa7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055dfac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfad: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55dfb2u); f_00641280();
    /* 0055dfb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055dfb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dfb9: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55dfbeu); f_00559d60();
    /* 0055dfbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055dfc1: jle 0x55dfd8 */ if ((fZ||fS!=fO)) goto L_0055dfd8;
L_0055dfc3:; BB(0x0055dfc3);
    /* 0055dfc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dfc6: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055dfc9: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055dfcc: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055dfcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055dfd2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055dfd5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055dfd8:; BB(0x0055dfd8);
    /* 0055dfd8: jmp 0x55df8b */ goto L_0055df8b;
L_0055dfda:; BB(0x0055dfda);
    /* 0055dfda: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055dfdf:; BB(0x0055dfdf);
    /* 0055dfdf: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfe1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfe3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dfe5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dfe8: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55dfedu); f_0055e640();
    /* 0055dfed: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055dff0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055dff2: je 0x55e003 */ if (fZ) goto L_0055e003;
L_0055dff4:; BB(0x0055dff4);
    /* 0055dff4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055dff6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055dff9: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55dffeu); f_0055ecb0();
    /* 0055dffe: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e003:; BB(0x0055e003);
    /* 0055e003: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e005: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055e007: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e009: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e00c: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55e011u); f_0055e640();
    /* 0055e011: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e014: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e016: je 0x55e027 */ if (fZ) goto L_0055e027;
L_0055e018:; BB(0x0055e018);
    /* 0055e018: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e01a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e01d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e022u); f_0055ecb0();
    /* 0055e022: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e027:; BB(0x0055e027);
    /* 0055e027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e02a: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55e02fu); f_0055e8e0();
    /* 0055e02f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e034: je 0x55e045 */ if (fZ) goto L_0055e045;
L_0055e036:; BB(0x0055e036);
    /* 0055e036: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e038: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e03b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e040u); f_0055ecb0();
    /* 0055e040: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e045:; BB(0x0055e045);
    /* 0055e045: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e047: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e049: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e04b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e04e: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55e053u); f_0055e980();
    /* 0055e053: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055e056: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e058: je 0x55e0ba */ if (fZ) goto L_0055e0ba;
L_0055e05a:; BB(0x0055e05a);
    /* 0055e05a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e05d: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55e062u); f_0055ecf0();
    /* 0055e062: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e065: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e067: je 0x55e0b2 */ if (fZ) goto L_0055e0b2;
L_0055e069:; BB(0x0055e069);
    /* 0055e069: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e06c: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 0055e070: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e073: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e079: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e07eu); f_00641280();
    /* 0055e07e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e081: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e084: jg 0x55e0a3 */ if ((!fZ&&fS==fO)) goto L_0055e0a3;
L_0055e086:; BB(0x0055e086);
    /* 0055e086: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e089: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055e08d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e090: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e095: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e096: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e09bu); f_00641280();
    /* 0055e09b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e09e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e0a1: jle 0x55e0b2 */ if ((fZ||fS!=fO)) goto L_0055e0b2;
L_0055e0a3:; BB(0x0055e0a3);
    /* 0055e0a3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0a5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0a8: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e0adu); f_0055ecb0();
    /* 0055e0ad: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e0b2:; BB(0x0055e0b2);
    /* 0055e0b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0b5: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55e0bau); f_0055ec70();
L_0055e0ba:; BB(0x0055e0ba);
    /* 0055e0ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0bd: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55e0c2u); f_0055eba0();
    /* 0055e0c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e0c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e0c7: je 0x55e0d8 */ if (fZ) goto L_0055e0d8;
L_0055e0c9:; BB(0x0055e0c9);
    /* 0055e0c9: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0ce: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e0d3u); f_0055ecb0();
    /* 0055e0d3: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e0d8:; BB(0x0055e0d8);
    /* 0055e0d8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0dc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e0de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0e1: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55e0e6u); f_0055e980();
    /* 0055e0e6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e0e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e0eb: je 0x55e130 */ if (fZ) goto L_0055e130;
L_0055e0ed:; BB(0x0055e0ed);
    /* 0055e0ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0f0: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55e0f5u); f_0055ecf0();
    /* 0055e0f5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055e0f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e0fa: je 0x55e128 */ if (fZ) goto L_0055e128;
L_0055e0fc:; BB(0x0055e0fc);
    /* 0055e0fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e0ff: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 0055e103: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e106: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055e10b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e10c: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e111u); f_00641280();
    /* 0055e111: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e114: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e117: jge 0x55e128 */ if ((fS==fO)) goto L_0055e128;
L_0055e119:; BB(0x0055e119);
    /* 0055e119: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0055e11b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e11e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e123u); f_0055ecb0();
    /* 0055e123: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e128:; BB(0x0055e128);
    /* 0055e128: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e12b: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55e130u); f_0055ec70();
L_0055e130:; BB(0x0055e130);
    /* 0055e130: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e132: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e134: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e136: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e139: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55e13eu); f_0055e640();
    /* 0055e13e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e143: je 0x55e173 */ if (fZ) goto L_0055e173;
L_0055e145:; BB(0x0055e145);
    /* 0055e145: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e148: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055e14c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e14d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e150: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055e154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e155: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e158: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55e15du); f_0055ee60();
    /* 0055e15d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e162: jne 0x55e173 */ if (!fZ) goto L_0055e173;
L_0055e164:; BB(0x0055e164);
    /* 0055e164: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e166: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e169: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e16eu); f_0055ecb0();
    /* 0055e16e: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e173:; BB(0x0055e173);
    /* 0055e173: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e175: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e177: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e179: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e17c: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55e181u); f_0055e980();
    /* 0055e181: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e186: je 0x55e1bc */ if (fZ) goto L_0055e1bc;
L_0055e188:; BB(0x0055e188);
    /* 0055e188: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e18b: movsx edx, byte ptr [ecx + 0x17] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x17u));
    /* 0055e18f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e192: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e197: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e198: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e19du); f_00641280();
    /* 0055e19d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e1a0: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e1a3: jne 0x55e1b4 */ if (!fZ) goto L_0055e1b4;
L_0055e1a5:; BB(0x0055e1a5);
    /* 0055e1a5: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1aa: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e1afu); f_0055ecb0();
    /* 0055e1af: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e1b4:; BB(0x0055e1b4);
    /* 0055e1b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1b7: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55e1bcu); f_0055ec70();
L_0055e1bc:; BB(0x0055e1bc);
    /* 0055e1bc: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1be: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1c0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1c5: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55e1cau); f_0055e640();
    /* 0055e1ca: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e1cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e1cf: je 0x55e1e0 */ if (fZ) goto L_0055e1e0;
L_0055e1d1:; BB(0x0055e1d1);
    /* 0055e1d1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1d6: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e1dbu); f_0055ecb0();
    /* 0055e1db: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e1e0:; BB(0x0055e1e0);
    /* 0055e1e0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1e4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e1e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1e9: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55e1eeu); f_0055e980();
    /* 0055e1ee: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055e1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e1f3: je 0x55e229 */ if (fZ) goto L_0055e229;
L_0055e1f5:; BB(0x0055e1f5);
    /* 0055e1f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1f8: movsx edx, byte ptr [ecx + 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x15u));
    /* 0055e1fc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e1ff: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055e204: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e205: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55e20au); f_00641280();
    /* 0055e20a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e20d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e210: jle 0x55e221 */ if ((fZ||fS!=fO)) goto L_0055e221;
L_0055e212:; BB(0x0055e212);
    /* 0055e212: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e214: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e217: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e21cu); f_0055ecb0();
    /* 0055e21c: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e221:; BB(0x0055e221);
    /* 0055e221: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e224: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55e229u); f_0055ec70();
L_0055e229:; BB(0x0055e229);
    /* 0055e229: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e22b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e22d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e22f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e232: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55e237u); f_0055e640();
    /* 0055e237: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055e23a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e23c: je 0x55e24a */ if (fZ) goto L_0055e24a;
L_0055e23e:; BB(0x0055e23e);
    /* 0055e23e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e240: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e243: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e248u); f_0055ecb0();
    /* 0055e248: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e24a:; BB(0x0055e24a);
    /* 0055e24a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055e251: jmp 0x55e25c */ goto L_0055e25c;
L_0055e253:; BB(0x0055e253);
    /* 0055e253: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e256: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e259: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055e25c:; BB(0x0055e25c);
    /* 0055e25c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e25f: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55e264u); f_00559380();
    /* 0055e264: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e267: jge 0x55e299 */ if ((fS==fO)) goto L_0055e299;
L_0055e269:; BB(0x0055e269);
    /* 0055e269: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055e26c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e26f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055e274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e275: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e278: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55e27du); f_005593d0();
    /* 0055e27d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e280: jle 0x55e297 */ if ((fZ||fS!=fO)) goto L_0055e297;
L_0055e282:; BB(0x0055e282);
    /* 0055e282: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e285: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e288: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055e28b: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055e28e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055e291: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055e294: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055e297:; BB(0x0055e297);
    /* 0055e297: jmp 0x55e253 */ goto L_0055e253;
L_0055e299:; BB(0x0055e299);
    /* 0055e299: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e29d: je 0x55e2b1 */ if (fZ) goto L_0055e2b1;
L_0055e29f:; BB(0x0055e29f);
    /* 0055e29f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e2a3: jge 0x55e2b1 */ if ((fS==fO)) goto L_0055e2b1;
L_0055e2a5:; BB(0x0055e2a5);
    /* 0055e2a5: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e2a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e2aa: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55e2afu); f_0055ecb0();
    /* 0055e2af: jmp 0x55e2b9 */ goto L_0055e2b9;
L_0055e2b1:; BB(0x0055e2b1);
    /* 0055e2b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e2b4: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55e2b9u); f_0055ec70();
L_0055e2b9:; BB(0x0055e2b9);
    /* 0055e2b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e2bc: ret  */ FN_RET(0x0055dee0); r_esp += 4; return;
}

