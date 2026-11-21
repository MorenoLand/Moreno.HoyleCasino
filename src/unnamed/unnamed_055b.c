#include "protos.h"

void f_0055b410(void) /* sub_55B410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055b410);
    /* 0055b410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055b411: mov ebp, esp */ r_ebp = r_esp;
    /* 0055b413: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055b416: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055b419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055b420: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b423: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b428u); f_0055ec70();
    /* 0055b428: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b42b: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55b430u); f_00559d00();
    /* 0055b430: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b432: jne 0x55b7a8 */ if (!fZ) goto L_0055b7a8;
L_0055b438:; BB(0x0055b438);
    /* 0055b438: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b43a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b43c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b43e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b441: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b446u); f_0055e640();
    /* 0055b446: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b44b: je 0x55b45c */ if (fZ) goto L_0055b45c;
L_0055b44d:; BB(0x0055b44d);
    /* 0055b44d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b44f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b452: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b457u); f_0055ecb0();
    /* 0055b457: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b45c:; BB(0x0055b45c);
    /* 0055b45c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b45f: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b463: jle 0x55b51f */ if ((fZ||fS!=fO)) goto L_0055b51f;
L_0055b469:; BB(0x0055b469);
    /* 0055b469: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b46c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055b46f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055b472: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055b476: ja 0x55b51f */ if ((!fC&&!fZ)) goto L_0055b51f;
L_0055b47c:; BB(0x0055b47c);
    /* 0055b47c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055b47f: movzx edx, byte ptr [ecx + 0x55bb84] */ r_edx = (u32)R8((u32)(r_ecx+0x55bb84u));
    /* 0055b486: jmp dword ptr [edx*4 + 0x55bb70] */ { u32 t = R32((u32)(r_edx*4+0x55bb70u)); switch (t) { case 0x55b48du: goto L_0055b48d; case 0x55b4a4u: goto L_0055b4a4; case 0x55b4aeu: goto L_0055b4ae; case 0x55b4b8u: goto L_0055b4b8; case 0x55b51fu: goto L_0055b51f; default: UNSUP(0x0055b486, "jump table entry is not a known target"); } }
L_0055b48d:; BB(0x0055b48d);
    /* 0055b48d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b48f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b492: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b497u); f_0055ecb0();
    /* 0055b497: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b49a: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55b49fu); f_0055ec30();
    /* 0055b49f: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b4a4:; BB(0x0055b4a4);
    /* 0055b4a4: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b4a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b4a9: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b4aeu); f_0055ecb0();
L_0055b4ae:; BB(0x0055b4ae);
    /* 0055b4ae: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b4b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b4b3: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b4b8u); f_0055ecb0();
L_0055b4b8:; BB(0x0055b4b8);
    /* 0055b4b8: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055b4ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b4bd: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b4c2u); f_0055ecb0();
    /* 0055b4c2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b4c9: jmp 0x55b4d4 */ goto L_0055b4d4;
L_0055b4cb:; BB(0x0055b4cb);
    /* 0055b4cb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b4ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b4d1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055b4d4:; BB(0x0055b4d4);
    /* 0055b4d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b4d7: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b4dcu); f_00559380();
    /* 0055b4dc: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b4df: jge 0x55b51a */ if ((fS==fO)) goto L_0055b51a;
L_0055b4e1:; BB(0x0055b4e1);
    /* 0055b4e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b4e4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b4e7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055b4ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b4ed: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55b4f2u); f_00641280();
    /* 0055b4f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b4f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b4f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b4f9: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55b4feu); f_00559d60();
    /* 0055b4fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b501: jle 0x55b518 */ if ((fZ||fS!=fO)) goto L_0055b518;
L_0055b503:; BB(0x0055b503);
    /* 0055b503: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b506: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b509: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b50c: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055b50f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b512: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b515: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055b518:; BB(0x0055b518);
    /* 0055b518: jmp 0x55b4cb */ goto L_0055b4cb;
L_0055b51a:; BB(0x0055b51a);
    /* 0055b51a: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b51f:; BB(0x0055b51f);
    /* 0055b51f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b521: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b523: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b525: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b528: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b52du); f_0055e640();
    /* 0055b52d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b530: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b532: je 0x55b543 */ if (fZ) goto L_0055b543;
L_0055b534:; BB(0x0055b534);
    /* 0055b534: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b536: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b539: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b53eu); f_0055ecb0();
    /* 0055b53e: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b543:; BB(0x0055b543);
    /* 0055b543: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b545: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b547: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b549: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b54c: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b551u); f_0055e640();
    /* 0055b551: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b554: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b556: je 0x55b567 */ if (fZ) goto L_0055b567;
L_0055b558:; BB(0x0055b558);
    /* 0055b558: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b55a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b55d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b562u); f_0055ecb0();
    /* 0055b562: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b567:; BB(0x0055b567);
    /* 0055b567: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b569: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b56b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b56d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b570: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b575u); f_0055e640();
    /* 0055b575: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b57a: je 0x55b5a2 */ if (fZ) goto L_0055b5a2;
L_0055b57c:; BB(0x0055b57c);
    /* 0055b57c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b57f: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55b584u); f_0055ecf0();
    /* 0055b584: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b587: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b589: je 0x55b59a */ if (fZ) goto L_0055b59a;
L_0055b58b:; BB(0x0055b58b);
    /* 0055b58b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b58d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b590: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b595u); f_0055ecb0();
    /* 0055b595: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b59a:; BB(0x0055b59a);
    /* 0055b59a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b59d: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b5a2u); f_0055ec70();
L_0055b5a2:; BB(0x0055b5a2);
    /* 0055b5a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5a5: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55b5aau); f_0055e8e0();
    /* 0055b5aa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b5ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b5af: je 0x55b5c0 */ if (fZ) goto L_0055b5c0;
L_0055b5b1:; BB(0x0055b5b1);
    /* 0055b5b1: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5b3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5b6: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b5bbu); f_0055ecb0();
    /* 0055b5bb: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b5c0:; BB(0x0055b5c0);
    /* 0055b5c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5c3: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55b5c8u); f_0055eba0();
    /* 0055b5c8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b5cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b5cd: je 0x55b5de */ if (fZ) goto L_0055b5de;
L_0055b5cf:; BB(0x0055b5cf);
    /* 0055b5cf: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5d4: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b5d9u); f_0055ecb0();
    /* 0055b5d9: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b5de:; BB(0x0055b5de);
    /* 0055b5de: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5e2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5e7: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b5ecu); f_0055e640();
    /* 0055b5ec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b5ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b5f1: je 0x55b629 */ if (fZ) goto L_0055b629;
L_0055b5f3:; BB(0x0055b5f3);
    /* 0055b5f3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5f6: movsx eax, byte ptr [edx + 0x16] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x16u));
    /* 0055b5fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b5fb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b5fe: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0055b602: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b603: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b606: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55b60bu); f_0055ee60();
    /* 0055b60b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b60e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b610: jne 0x55b621 */ if (!fZ) goto L_0055b621;
L_0055b612:; BB(0x0055b612);
    /* 0055b612: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b614: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b617: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b61cu); f_0055ecb0();
    /* 0055b61c: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b621:; BB(0x0055b621);
    /* 0055b621: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b624: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b629u); f_0055ec70();
L_0055b629:; BB(0x0055b629);
    /* 0055b629: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b62b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b62d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b62f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b632: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55b637u); f_0055e980();
    /* 0055b637: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b63a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b63c: je 0x55b664 */ if (fZ) goto L_0055b664;
L_0055b63e:; BB(0x0055b63e);
    /* 0055b63e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b641: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55b646u); f_0055ecf0();
    /* 0055b646: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b649: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b64b: je 0x55b65c */ if (fZ) goto L_0055b65c;
L_0055b64d:; BB(0x0055b64d);
    /* 0055b64d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b64f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b652: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b657u); f_0055ecb0();
    /* 0055b657: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b65c:; BB(0x0055b65c);
    /* 0055b65c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b65f: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b664u); f_0055ec70();
L_0055b664:; BB(0x0055b664);
    /* 0055b664: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b666: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b668: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b66a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b66d: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b672u); f_0055e640();
    /* 0055b672: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b677: je 0x55b688 */ if (fZ) goto L_0055b688;
L_0055b679:; BB(0x0055b679);
    /* 0055b679: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b67b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b67e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b683u); f_0055ecb0();
    /* 0055b683: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b688:; BB(0x0055b688);
    /* 0055b688: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b68a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b68c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b68e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b691: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b696u); f_0055e640();
    /* 0055b696: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b699: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b69b: je 0x55b6ac */ if (fZ) goto L_0055b6ac;
L_0055b69d:; BB(0x0055b69d);
    /* 0055b69d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b69f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b6a2: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b6a7u); f_0055ecb0();
    /* 0055b6a7: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b6ac:; BB(0x0055b6ac);
    /* 0055b6ac: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6b0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b6b5: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55b6bau); f_0055e980();
    /* 0055b6ba: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b6bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6bf: je 0x55b6d0 */ if (fZ) goto L_0055b6d0;
L_0055b6c1:; BB(0x0055b6c1);
    /* 0055b6c1: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b6c6: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b6cbu); f_0055ecb0();
    /* 0055b6cb: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b6d0:; BB(0x0055b6d0);
    /* 0055b6d0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6d4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b6d9: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b6deu); f_0055e640();
    /* 0055b6de: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b6e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6e3: je 0x55b70b */ if (fZ) goto L_0055b70b;
L_0055b6e5:; BB(0x0055b6e5);
    /* 0055b6e5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b6e8: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55b6edu); f_0055ecf0();
    /* 0055b6ed: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b6f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b6f2: je 0x55b703 */ if (fZ) goto L_0055b703;
L_0055b6f4:; BB(0x0055b6f4);
    /* 0055b6f4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b6f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b6f9: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b6feu); f_0055ecb0();
    /* 0055b6fe: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b703:; BB(0x0055b703);
    /* 0055b703: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b706: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b70bu); f_0055ec70();
L_0055b70b:; BB(0x0055b70b);
    /* 0055b70b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055b712: jmp 0x55b71d */ goto L_0055b71d;
L_0055b714:; BB(0x0055b714);
    /* 0055b714: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b717: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b71a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055b71d:; BB(0x0055b71d);
    /* 0055b71d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b721: jg 0x55b79b */ if ((!fZ&&fS==fO)) goto L_0055b79b;
L_0055b723:; BB(0x0055b723);
    /* 0055b723: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b725: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b729: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b72c: call 0x55e3e0 */ r_esp -= 4; W32(r_esp, 0x55b731u); f_0055e3e0();
    /* 0055b731: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b734: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b736: je 0x55b796 */ if (fZ) goto L_0055b796;
L_0055b738:; BB(0x0055b738);
    /* 0055b738: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b73a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b73d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b742u); f_0055ecb0();
    /* 0055b742: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055b749: jmp 0x55b754 */ goto L_0055b754;
L_0055b74b:; BB(0x0055b74b);
    /* 0055b74b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055b74e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b751: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0055b754:; BB(0x0055b754);
    /* 0055b754: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b757: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b75cu); f_00559380();
    /* 0055b75c: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b75f: jge 0x55b791 */ if ((fS==fO)) goto L_0055b791;
L_0055b761:; BB(0x0055b761);
    /* 0055b761: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055b764: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b767: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055b76c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b76d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55b772u); f_00641290();
    /* 0055b772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b775: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b778: jne 0x55b78f */ if (!fZ) goto L_0055b78f;
L_0055b77a:; BB(0x0055b77a);
    /* 0055b77a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b77d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b780: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055b783: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055b786: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b789: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b78c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055b78f:; BB(0x0055b78f);
    /* 0055b78f: jmp 0x55b74b */ goto L_0055b74b;
L_0055b791:; BB(0x0055b791);
    /* 0055b791: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b796:; BB(0x0055b796);
    /* 0055b796: jmp 0x55b714 */ goto L_0055b714;
L_0055b79b:; BB(0x0055b79b);
    /* 0055b79b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b79e: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b7a3u); f_0055ec70();
    /* 0055b7a3: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b7a8:; BB(0x0055b7a8);
    /* 0055b7a8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7aa: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7ac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b7b1: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b7b6u); f_0055e640();
    /* 0055b7b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b7b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b7bb: je 0x55b811 */ if (fZ) goto L_0055b811;
L_0055b7bd:; BB(0x0055b7bd);
    /* 0055b7bd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b7c2: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b7c7u); f_0055ecb0();
    /* 0055b7c7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b7ce: jmp 0x55b7d9 */ goto L_0055b7d9;
L_0055b7d0:; BB(0x0055b7d0);
    /* 0055b7d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b7d3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b7d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055b7d9:; BB(0x0055b7d9);
    /* 0055b7d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b7dc: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b7e1u); f_00559380();
    /* 0055b7e1: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b7e4: jge 0x55b80c */ if ((fS==fO)) goto L_0055b80c;
L_0055b7e6:; BB(0x0055b7e6);
    /* 0055b7e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b7e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b7ec: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055b7f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b7f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b7f5: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b7fau); f_005593d0();
    /* 0055b7fa: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b7fd: jne 0x55b80a */ if (!fZ) goto L_0055b80a;
L_0055b7ff:; BB(0x0055b7ff);
    /* 0055b7ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b802: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b805: mov byte ptr [edx + 0x17], al */ W8((u32)(r_edx+0x17u), (u8)r_eax);
    /* 0055b808: jmp 0x55b80c */ goto L_0055b80c;
L_0055b80a:; BB(0x0055b80a);
    /* 0055b80a: jmp 0x55b7d0 */ goto L_0055b7d0;
L_0055b80c:; BB(0x0055b80c);
    /* 0055b80c: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b811:; BB(0x0055b811);
    /* 0055b811: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b814: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b818: jle 0x55b8ed */ if ((fZ||fS!=fO)) goto L_0055b8ed;
L_0055b81e:; BB(0x0055b81e);
    /* 0055b81e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b821: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055b824: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055b827: cmp dword ptr [ebp - 0x18], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055b82b: ja 0x55b8ed */ if ((!fC&&!fZ)) goto L_0055b8ed;
L_0055b831:; BB(0x0055b831);
    /* 0055b831: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055b834: movzx edx, byte ptr [ecx + 0x55bba4] */ r_edx = (u32)R8((u32)(r_ecx+0x55bba4u));
    /* 0055b83b: jmp dword ptr [edx*4 + 0x55bb90] */ { u32 t = R32((u32)(r_edx*4+0x55bb90u)); switch (t) { case 0x55b842u: goto L_0055b842; case 0x55b859u: goto L_0055b859; case 0x55b863u: goto L_0055b863; case 0x55b86du: goto L_0055b86d; case 0x55b8edu: goto L_0055b8ed; default: UNSUP(0x0055b83b, "jump table entry is not a known target"); } }
L_0055b842:; BB(0x0055b842);
    /* 0055b842: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b844: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b847: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b84cu); f_0055ecb0();
    /* 0055b84c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b84f: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55b854u); f_0055ec30();
    /* 0055b854: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b859:; BB(0x0055b859);
    /* 0055b859: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b85b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b85e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b863u); f_0055ecb0();
L_0055b863:; BB(0x0055b863);
    /* 0055b863: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b865: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b868: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b86du); f_0055ecb0();
L_0055b86d:; BB(0x0055b86d);
    /* 0055b86d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b86f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b872: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b877u); f_0055ecb0();
    /* 0055b877: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b87e: jmp 0x55b889 */ goto L_0055b889;
L_0055b880:; BB(0x0055b880);
    /* 0055b880: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b883: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b886: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055b889:; BB(0x0055b889);
    /* 0055b889: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b88c: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b891u); f_00559380();
    /* 0055b891: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b894: jge 0x55b8e8 */ if ((fS==fO)) goto L_0055b8e8;
L_0055b896:; BB(0x0055b896);
    /* 0055b896: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b899: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b89c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055b8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8a2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55b8a7u); f_00641280();
    /* 0055b8a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055b8aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b8ae: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55b8b3u); f_00559d60();
    /* 0055b8b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b8b6: jg 0x55b8d1 */ if ((!fZ&&fS==fO)) goto L_0055b8d1;
L_0055b8b8:; BB(0x0055b8b8);
    /* 0055b8b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b8bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b8be: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055b8c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b8c7: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b8ccu); f_005593d0();
    /* 0055b8cc: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b8cf: jne 0x55b8e6 */ if (!fZ) goto L_0055b8e6;
L_0055b8d1:; BB(0x0055b8d1);
    /* 0055b8d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b8d4: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b8d7: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b8da: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055b8dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055b8e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b8e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055b8e6:; BB(0x0055b8e6);
    /* 0055b8e6: jmp 0x55b880 */ goto L_0055b880;
L_0055b8e8:; BB(0x0055b8e8);
    /* 0055b8e8: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b8ed:; BB(0x0055b8ed);
    /* 0055b8ed: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8f1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b8f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b8f6: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b8fbu); f_0055e640();
    /* 0055b8fb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055b8fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b900: je 0x55b969 */ if (fZ) goto L_0055b969;
L_0055b902:; BB(0x0055b902);
    /* 0055b902: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b905: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55b90au); f_00559d00();
    /* 0055b90a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b90d: jne 0x55b961 */ if (!fZ) goto L_0055b961;
L_0055b90f:; BB(0x0055b90f);
    /* 0055b90f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b916: jmp 0x55b921 */ goto L_0055b921;
L_0055b918:; BB(0x0055b918);
    /* 0055b918: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b91b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055b91e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055b921:; BB(0x0055b921);
    /* 0055b921: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b924: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b929u); f_00559380();
    /* 0055b929: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b92c: jge 0x55b961 */ if ((fS==fO)) goto L_0055b961;
L_0055b92e:; BB(0x0055b92e);
    /* 0055b92e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b931: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b934: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055b939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055b93a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b93d: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b942u); f_005593d0();
    /* 0055b942: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b945: jne 0x55b95f */ if (!fZ) goto L_0055b95f;
L_0055b947:; BB(0x0055b947);
    /* 0055b947: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b949: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b94c: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b951u); f_0055ecb0();
    /* 0055b951: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b954: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b957: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0055b95a: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b95f:; BB(0x0055b95f);
    /* 0055b95f: jmp 0x55b918 */ goto L_0055b918;
L_0055b961:; BB(0x0055b961);
    /* 0055b961: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b964: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55b969u); f_0055ec70();
L_0055b969:; BB(0x0055b969);
    /* 0055b969: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b96b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055b96d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b96f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b972: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b977u); f_0055e640();
    /* 0055b977: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055b97a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b97c: je 0x55b9d0 */ if (fZ) goto L_0055b9d0;
L_0055b97e:; BB(0x0055b97e);
    /* 0055b97e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b985: jmp 0x55b990 */ goto L_0055b990;
L_0055b987:; BB(0x0055b987);
    /* 0055b987: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b98a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055b98d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055b990:; BB(0x0055b990);
    /* 0055b990: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b993: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b998u); f_00559380();
    /* 0055b998: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055b99b: jge 0x55b9d0 */ if ((fS==fO)) goto L_0055b9d0;
L_0055b99d:; BB(0x0055b99d);
    /* 0055b99d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b9a0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b9a3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055b9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b9ac: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55b9b1u); f_005593d0();
    /* 0055b9b1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b9b4: jne 0x55b9ce */ if (!fZ) goto L_0055b9ce;
L_0055b9b6:; BB(0x0055b9b6);
    /* 0055b9b6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b9bb: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55b9c0u); f_0055ecb0();
    /* 0055b9c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b9c3: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055b9c6: mov byte ptr [ecx + 0x16], dl */ W8((u32)(r_ecx+0x16u), (u8)r_edx);
    /* 0055b9c9: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055b9ce:; BB(0x0055b9ce);
    /* 0055b9ce: jmp 0x55b987 */ goto L_0055b987;
L_0055b9d0:; BB(0x0055b9d0);
    /* 0055b9d0: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9d4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055b9d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b9d9: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55b9deu); f_0055e640();
    /* 0055b9de: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055b9e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055b9e3: je 0x55ba37 */ if (fZ) goto L_0055ba37;
L_0055b9e5:; BB(0x0055b9e5);
    /* 0055b9e5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055b9ec: jmp 0x55b9f7 */ goto L_0055b9f7;
L_0055b9ee:; BB(0x0055b9ee);
    /* 0055b9ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055b9f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055b9f4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055b9f7:; BB(0x0055b9f7);
    /* 0055b9f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055b9fa: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55b9ffu); f_00559380();
    /* 0055b9ff: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ba02: jge 0x55ba37 */ if ((fS==fO)) goto L_0055ba37;
L_0055ba04:; BB(0x0055ba04);
    /* 0055ba04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ba07: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba0a: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055ba0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba10: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba13: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ba18u); f_005593d0();
    /* 0055ba18: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba1b: jne 0x55ba35 */ if (!fZ) goto L_0055ba35;
L_0055ba1d:; BB(0x0055ba1d);
    /* 0055ba1d: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba1f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba22: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ba27u); f_0055ecb0();
    /* 0055ba27: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba2a: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ba2d: mov byte ptr [edx + 0x16], al */ W8((u32)(r_edx+0x16u), (u8)r_eax);
    /* 0055ba30: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055ba35:; BB(0x0055ba35);
    /* 0055ba35: jmp 0x55b9ee */ goto L_0055b9ee;
L_0055ba37:; BB(0x0055ba37);
    /* 0055ba37: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba3b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba40: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55ba45u); f_0055e980();
    /* 0055ba45: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055ba48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba4a: je 0x55ba9e */ if (fZ) goto L_0055ba9e;
L_0055ba4c:; BB(0x0055ba4c);
    /* 0055ba4c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055ba53: jmp 0x55ba5e */ goto L_0055ba5e;
L_0055ba55:; BB(0x0055ba55);
    /* 0055ba55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ba58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055ba5b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055ba5e:; BB(0x0055ba5e);
    /* 0055ba5e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba61: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55ba66u); f_00559380();
    /* 0055ba66: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055ba69: jge 0x55ba9e */ if ((fS==fO)) goto L_0055ba9e;
L_0055ba6b:; BB(0x0055ba6b);
    /* 0055ba6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055ba6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba71: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055ba76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba7a: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55ba7fu); f_005593d0();
    /* 0055ba7f: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ba82: jne 0x55ba9c */ if (!fZ) goto L_0055ba9c;
L_0055ba84:; BB(0x0055ba84);
    /* 0055ba84: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ba86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba89: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55ba8eu); f_0055ecb0();
    /* 0055ba8e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055ba91: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055ba94: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0055ba97: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055ba9c:; BB(0x0055ba9c);
    /* 0055ba9c: jmp 0x55ba55 */ goto L_0055ba55;
L_0055ba9e:; BB(0x0055ba9e);
    /* 0055ba9e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055baa1: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55baa6u); f_00559380();
    /* 0055baa6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055baa9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055baac: jmp 0x55bab7 */ goto L_0055bab7;
L_0055baae:; BB(0x0055baae);
    /* 0055baae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bab1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0055bab4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055bab7:; BB(0x0055bab7);
    /* 0055bab7: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055babb: jle 0x55baed */ if ((fZ||fS!=fO)) goto L_0055baed;
L_0055babd:; BB(0x0055babd);
    /* 0055babd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bac0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bac3: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055bac8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bac9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bacc: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55bad1u); f_005593d0();
    /* 0055bad1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bad4: jne 0x55baeb */ if (!fZ) goto L_0055baeb;
L_0055bad6:; BB(0x0055bad6);
    /* 0055bad6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bad9: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055badc: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055badf: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055bae2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055bae5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055bae8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055baeb:; BB(0x0055baeb);
    /* 0055baeb: jmp 0x55baae */ goto L_0055baae;
L_0055baed:; BB(0x0055baed);
    /* 0055baed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055baf0: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55baf5u); f_00559380();
    /* 0055baf5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055baf8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055bafb: jmp 0x55bb06 */ goto L_0055bb06;
L_0055bafd:; BB(0x0055bafd);
    /* 0055bafd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bb00: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0055bb03: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055bb06:; BB(0x0055bb06);
    /* 0055bb06: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bb0a: jle 0x55bb61 */ if ((fZ||fS!=fO)) goto L_0055bb61;
L_0055bb0c:; BB(0x0055bb0c);
    /* 0055bb0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bb0f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bb12: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055bb17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bb18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bb1b: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55bb20u); f_005593d0();
    /* 0055bb20: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bb23: je 0x55bb5f */ if (fZ) goto L_0055bb5f;
L_0055bb25:; BB(0x0055bb25);
    /* 0055bb25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bb28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bb2b: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055bb30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bb31: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55bb36u); f_00641280();
    /* 0055bb36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055bb39: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bb3c: jle 0x55bb5f */ if ((fZ||fS!=fO)) goto L_0055bb5f;
L_0055bb3e:; BB(0x0055bb3e);
    /* 0055bb3e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bb40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bb43: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bb48u); f_0055ecb0();
    /* 0055bb48: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bb4b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055bb4e: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055bb51: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055bb54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055bb57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055bb5a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0055bb5d: jmp 0x55bb6b */ goto L_0055bb6b;
L_0055bb5f:; BB(0x0055bb5f);
    /* 0055bb5f: jmp 0x55bafd */ goto L_0055bafd;
L_0055bb61:; BB(0x0055bb61);
    /* 0055bb61: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bb63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bb66: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bb6bu); f_0055ecb0();
L_0055bb6b:; BB(0x0055bb6b);
    /* 0055bb6b: mov esp, ebp */ r_esp = r_ebp;
    /* 0055bb6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055bb6e: ret  */ FN_RET(0x0055b410); r_esp += 4; return;
}

void f_0055bbb0(void) /* sub_55BBB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055bbb0);
    /* 0055bbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0055bbb3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055bbb6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0055bbb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055bbc0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bbc3: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55bbc8u); f_0055ec70();
    /* 0055bbc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bbcb: call 0x559d00 */ r_esp -= 4; W32(r_esp, 0x55bbd0u); f_00559d00();
    /* 0055bbd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bbd2: jne 0x55bed8 */ if (!fZ) goto L_0055bed8;
L_0055bbd8:; BB(0x0055bbd8);
    /* 0055bbd8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbda: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbdc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bbe1: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55bbe6u); f_0055e640();
    /* 0055bbe6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055bbe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bbeb: je 0x55bbfc */ if (fZ) goto L_0055bbfc;
L_0055bbed:; BB(0x0055bbed);
    /* 0055bbed: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bbef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bbf2: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bbf7u); f_0055ecb0();
    /* 0055bbf7: jmp 0x55c58a */ goto L_0055c58a;
L_0055bbfc:; BB(0x0055bbfc);
    /* 0055bbfc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bbff: cmp dword ptr [ecx + 0x10], -1 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bc03: jle 0x55bcc9 */ if ((fZ||fS!=fO)) goto L_0055bcc9;
L_0055bc09:; BB(0x0055bc09);
    /* 0055bc09: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc0c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0055bc0f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055bc12: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055bc16: ja 0x55bcc9 */ if ((!fC&&!fZ)) goto L_0055bcc9;
L_0055bc1c:; BB(0x0055bc1c);
    /* 0055bc1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055bc1f: movzx edx, byte ptr [ecx + 0x55c5a8] */ r_edx = (u32)R8((u32)(r_ecx+0x55c5a8u));
    /* 0055bc26: jmp dword ptr [edx*4 + 0x55c590] */ { u32 t = R32((u32)(r_edx*4+0x55c590u)); switch (t) { case 0x55bc2du: goto L_0055bc2d; case 0x55bc44u: goto L_0055bc44; case 0x55bc4eu: goto L_0055bc4e; case 0x55bc58u: goto L_0055bc58; case 0x55bc62u: goto L_0055bc62; case 0x55bcc9u: goto L_0055bcc9; default: UNSUP(0x0055bc26, "jump table entry is not a known target"); } }
L_0055bc2d:; BB(0x0055bc2d);
    /* 0055bc2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc32: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bc37u); f_0055ecb0();
    /* 0055bc37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc3a: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55bc3fu); f_0055ec30();
    /* 0055bc3f: jmp 0x55c58a */ goto L_0055c58a;
L_0055bc44:; BB(0x0055bc44);
    /* 0055bc44: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc49: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bc4eu); f_0055ecb0();
L_0055bc4e:; BB(0x0055bc4e);
    /* 0055bc4e: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc53: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bc58u); f_0055ecb0();
L_0055bc58:; BB(0x0055bc58);
    /* 0055bc58: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc5d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bc62u); f_0055ecb0();
L_0055bc62:; BB(0x0055bc62);
    /* 0055bc62: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc67: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bc6cu); f_0055ecb0();
    /* 0055bc6c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055bc73: jmp 0x55bc7e */ goto L_0055bc7e;
L_0055bc75:; BB(0x0055bc75);
    /* 0055bc75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bc78: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055bc7b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055bc7e:; BB(0x0055bc7e);
    /* 0055bc7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc81: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55bc86u); f_00559380();
    /* 0055bc86: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bc89: jge 0x55bcc4 */ if ((fS==fO)) goto L_0055bcc4;
L_0055bc8b:; BB(0x0055bc8b);
    /* 0055bc8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bc8e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bc91: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055bc96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bc97: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55bc9cu); f_00641280();
    /* 0055bc9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055bc9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bca0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bca3: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55bca8u); f_00559d60();
    /* 0055bca8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bcab: jle 0x55bcc2 */ if ((fZ||fS!=fO)) goto L_0055bcc2;
L_0055bcad:; BB(0x0055bcad);
    /* 0055bcad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bcb0: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055bcb3: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055bcb6: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055bcb9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055bcbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055bcbf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055bcc2:; BB(0x0055bcc2);
    /* 0055bcc2: jmp 0x55bc75 */ goto L_0055bc75;
L_0055bcc4:; BB(0x0055bcc4);
    /* 0055bcc4: jmp 0x55c58a */ goto L_0055c58a;
L_0055bcc9:; BB(0x0055bcc9);
    /* 0055bcc9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bccb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bccd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bccf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bcd2: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55bcd7u); f_0055e640();
    /* 0055bcd7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055bcda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bcdc: je 0x55bced */ if (fZ) goto L_0055bced;
L_0055bcde:; BB(0x0055bcde);
    /* 0055bcde: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bce0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bce3: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bce8u); f_0055ecb0();
    /* 0055bce8: jmp 0x55c58a */ goto L_0055c58a;
L_0055bced:; BB(0x0055bced);
    /* 0055bced: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bcef: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055bcf1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bcf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bcf6: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55bcfbu); f_0055e640();
    /* 0055bcfb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055bcfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd00: je 0x55bd11 */ if (fZ) goto L_0055bd11;
L_0055bd02:; BB(0x0055bd02);
    /* 0055bd02: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd07: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bd0cu); f_0055ecb0();
    /* 0055bd0c: jmp 0x55c58a */ goto L_0055c58a;
L_0055bd11:; BB(0x0055bd11);
    /* 0055bd11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd14: call 0x55e8e0 */ r_esp -= 4; W32(r_esp, 0x55bd19u); f_0055e8e0();
    /* 0055bd19: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055bd1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd1e: je 0x55bd2f */ if (fZ) goto L_0055bd2f;
L_0055bd20:; BB(0x0055bd20);
    /* 0055bd20: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd25: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bd2au); f_0055ecb0();
    /* 0055bd2a: jmp 0x55c58a */ goto L_0055c58a;
L_0055bd2f:; BB(0x0055bd2f);
    /* 0055bd2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd32: call 0x55eba0 */ r_esp -= 4; W32(r_esp, 0x55bd37u); f_0055eba0();
    /* 0055bd37: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055bd3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd3c: je 0x55bd4d */ if (fZ) goto L_0055bd4d;
L_0055bd3e:; BB(0x0055bd3e);
    /* 0055bd3e: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd40: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd43: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bd48u); f_0055ecb0();
    /* 0055bd48: jmp 0x55c58a */ goto L_0055c58a;
L_0055bd4d:; BB(0x0055bd4d);
    /* 0055bd4d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd56: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55bd5bu); f_0055e640();
    /* 0055bd5b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055bd5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd60: je 0x55bd88 */ if (fZ) goto L_0055bd88;
L_0055bd62:; BB(0x0055bd62);
    /* 0055bd62: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd65: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55bd6au); f_0055ecf0();
    /* 0055bd6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055bd6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd6f: je 0x55bd80 */ if (fZ) goto L_0055bd80;
L_0055bd71:; BB(0x0055bd71);
    /* 0055bd71: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd76: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bd7bu); f_0055ecb0();
    /* 0055bd7b: jmp 0x55c58a */ goto L_0055c58a;
L_0055bd80:; BB(0x0055bd80);
    /* 0055bd80: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd83: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55bd88u); f_0055ec70();
L_0055bd88:; BB(0x0055bd88);
    /* 0055bd88: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd8c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bd8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bd91: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55bd96u); f_0055e980();
    /* 0055bd96: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055bd99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bd9b: je 0x55bdc3 */ if (fZ) goto L_0055bdc3;
L_0055bd9d:; BB(0x0055bd9d);
    /* 0055bd9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bda0: call 0x55ecf0 */ r_esp -= 4; W32(r_esp, 0x55bda5u); f_0055ecf0();
    /* 0055bda5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055bda8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bdaa: je 0x55bdbb */ if (fZ) goto L_0055bdbb;
L_0055bdac:; BB(0x0055bdac);
    /* 0055bdac: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bdb1: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bdb6u); f_0055ecb0();
    /* 0055bdb6: jmp 0x55c58a */ goto L_0055c58a;
L_0055bdbb:; BB(0x0055bdbb);
    /* 0055bdbb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bdbe: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55bdc3u); f_0055ec70();
L_0055bdc3:; BB(0x0055bdc3);
    /* 0055bdc3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdc7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdc9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bdcc: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55bdd1u); f_0055e640();
    /* 0055bdd1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055bdd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bdd6: je 0x55be0e */ if (fZ) goto L_0055be0e;
L_0055bdd8:; BB(0x0055bdd8);
    /* 0055bdd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bddb: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 0055bddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bde0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bde3: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0055bde7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bde8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bdeb: call 0x55ee60 */ r_esp -= 4; W32(r_esp, 0x55bdf0u); f_0055ee60();
    /* 0055bdf0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055bdf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bdf5: jne 0x55be06 */ if (!fZ) goto L_0055be06;
L_0055bdf7:; BB(0x0055bdf7);
    /* 0055bdf7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055bdf9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bdfc: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55be01u); f_0055ecb0();
    /* 0055be01: jmp 0x55c58a */ goto L_0055c58a;
L_0055be06:; BB(0x0055be06);
    /* 0055be06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be09: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55be0eu); f_0055ec70();
L_0055be0e:; BB(0x0055be0e);
    /* 0055be0e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055be10: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055be12: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055be14: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be17: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55be1cu); f_0055e640();
    /* 0055be1c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055be1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055be21: je 0x55be32 */ if (fZ) goto L_0055be32;
L_0055be23:; BB(0x0055be23);
    /* 0055be23: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055be25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be28: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55be2du); f_0055ecb0();
    /* 0055be2d: jmp 0x55c58a */ goto L_0055c58a;
L_0055be32:; BB(0x0055be32);
    /* 0055be32: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be35: mov dx, word ptr [ecx + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xcu))) & 0xffffu);
    /* 0055be39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055be3a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55be3fu); f_00641280();
    /* 0055be3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055be42: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055be45: jne 0x55be8e */ if (!fZ) goto L_0055be8e;
L_0055be47:; BB(0x0055be47);
    /* 0055be47: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be4a: mov cx, word ptr [eax + 0xa] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xau))) & 0xffffu);
    /* 0055be4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055be4f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55be54u); f_00641280();
    /* 0055be54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055be57: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055be5a: jne 0x55be79 */ if (!fZ) goto L_0055be79;
L_0055be5c:; BB(0x0055be5c);
    /* 0055be5c: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0055be5e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be61: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55be66u); f_0055ecb0();
    /* 0055be66: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be69: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055be6c: mov byte ptr [edx + 0x14], 3 */ W8((u32)(r_edx+0x14u), 0x3u);
    /* 0055be70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055be73: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055be76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055be79:; BB(0x0055be79);
    /* 0055be79: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be7c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055be7f: mov byte ptr [ecx + 0x14], 4 */ W8((u32)(r_ecx+0x14u), 0x4u);
    /* 0055be83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055be86: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055be89: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0055be8c: jmp 0x55beb6 */ goto L_0055beb6;
L_0055be8e:; BB(0x0055be8e);
    /* 0055be8e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055be91: mov cx, word ptr [eax + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xcu))) & 0xffffu);
    /* 0055be95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055be96: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55be9bu); f_00641280();
    /* 0055be9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055be9e: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bea1: jne 0x55beb6 */ if (!fZ) goto L_0055beb6;
L_0055bea3:; BB(0x0055bea3);
    /* 0055bea3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bea6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055bea9: mov byte ptr [edx + 0x14], 4 */ W8((u32)(r_edx+0x14u), 0x4u);
    /* 0055bead: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055beb0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055beb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055beb6:; BB(0x0055beb6);
    /* 0055beb6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055beba: je 0x55becb */ if (fZ) goto L_0055becb;
L_0055bebc:; BB(0x0055bebc);
    /* 0055bebc: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bebe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bec1: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bec6u); f_0055ecb0();
    /* 0055bec6: jmp 0x55c58a */ goto L_0055c58a;
L_0055becb:; BB(0x0055becb);
    /* 0055becb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bece: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55bed3u); f_0055ec70();
    /* 0055bed3: jmp 0x55c58a */ goto L_0055c58a;
L_0055bed8:; BB(0x0055bed8);
    /* 0055bed8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055beda: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055bedc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bede: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bee1: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55bee6u); f_0055e640();
    /* 0055bee6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055bee9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055beeb: je 0x55bf41 */ if (fZ) goto L_0055bf41;
L_0055beed:; BB(0x0055beed);
    /* 0055beed: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055bef4: jmp 0x55beff */ goto L_0055beff;
L_0055bef6:; BB(0x0055bef6);
    /* 0055bef6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bef9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055befc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055beff:; BB(0x0055beff);
    /* 0055beff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf02: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55bf07u); f_00559380();
    /* 0055bf07: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bf0a: jge 0x55bf32 */ if ((fS==fO)) goto L_0055bf32;
L_0055bf0c:; BB(0x0055bf0c);
    /* 0055bf0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bf0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf12: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055bf17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bf18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf1b: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55bf20u); f_005593d0();
    /* 0055bf20: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bf23: jne 0x55bf30 */ if (!fZ) goto L_0055bf30;
L_0055bf25:; BB(0x0055bf25);
    /* 0055bf25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf28: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055bf2b: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0055bf2e: jmp 0x55bf32 */ goto L_0055bf32;
L_0055bf30:; BB(0x0055bf30);
    /* 0055bf30: jmp 0x55bef6 */ goto L_0055bef6;
L_0055bf32:; BB(0x0055bf32);
    /* 0055bf32: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bf34: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf37: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bf3cu); f_0055ecb0();
    /* 0055bf3c: jmp 0x55c58a */ goto L_0055c58a;
L_0055bf41:; BB(0x0055bf41);
    /* 0055bf41: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf44: cmp dword ptr [edx + 0x10], -1 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bf48: jle 0x55c0f8 */ if ((fZ||fS!=fO)) goto L_0055c0f8;
L_0055bf4e:; BB(0x0055bf4e);
    /* 0055bf4e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf51: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0055bf54: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0055bf57: cmp dword ptr [ebp - 0x18], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055bf5b: ja 0x55c0f8 */ if ((!fC&&!fZ)) goto L_0055c0f8;
L_0055bf61:; BB(0x0055bf61);
    /* 0055bf61: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055bf64: movzx eax, byte ptr [edx + 0x55c5c0] */ r_eax = (u32)R8((u32)(r_edx+0x55c5c0u));
    /* 0055bf6b: jmp dword ptr [eax*4 + 0x55c5b4] */ { u32 t = R32((u32)(r_eax*4+0x55c5b4u)); switch (t) { case 0x55bf72u: goto L_0055bf72; case 0x55bf89u: goto L_0055bf89; case 0x55c009u: goto L_0055c009; default: UNSUP(0x0055bf6b, "jump table entry is not a known target"); } }
L_0055bf72:; BB(0x0055bf72);
    /* 0055bf72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bf74: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf77: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bf7cu); f_0055ecb0();
    /* 0055bf7c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf7f: call 0x55ec30 */ r_esp -= 4; W32(r_esp, 0x55bf84u); f_0055ec30();
    /* 0055bf84: jmp 0x55c58a */ goto L_0055c58a;
L_0055bf89:; BB(0x0055bf89);
    /* 0055bf89: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0055bf8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bf8e: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55bf93u); f_0055ecb0();
    /* 0055bf93: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055bf9a: jmp 0x55bfa5 */ goto L_0055bfa5;
L_0055bf9c:; BB(0x0055bf9c);
    /* 0055bf9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bf9f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055bfa2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055bfa5:; BB(0x0055bfa5);
    /* 0055bfa5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bfa8: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55bfadu); f_00559380();
    /* 0055bfad: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bfb0: jge 0x55c004 */ if ((fS==fO)) goto L_0055c004;
L_0055bfb2:; BB(0x0055bfb2);
    /* 0055bfb2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bfb5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bfb8: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055bfbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bfbe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bfc1: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55bfc6u); f_005593d0();
    /* 0055bfc6: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055bfc9: je 0x55bfed */ if (fZ) goto L_0055bfed;
L_0055bfcb:; BB(0x0055bfcb);
    /* 0055bfcb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055bfce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bfd1: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055bfd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055bfd7: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55bfdcu); f_00641280();
    /* 0055bfdc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055bfdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055bfe0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bfe3: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55bfe8u); f_00559d60();
    /* 0055bfe8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055bfeb: jle 0x55c002 */ if ((fZ||fS!=fO)) goto L_0055c002;
L_0055bfed:; BB(0x0055bfed);
    /* 0055bfed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055bff0: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055bff3: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055bff6: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055bff9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055bffc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055bfff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055c002:; BB(0x0055c002);
    /* 0055c002: jmp 0x55bf9c */ goto L_0055bf9c;
L_0055c004:; BB(0x0055c004);
    /* 0055c004: jmp 0x55c58a */ goto L_0055c58a;
L_0055c009:; BB(0x0055c009);
    /* 0055c009: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c00b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c00d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c00f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c012: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c017u); f_0055e640();
    /* 0055c017: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c01a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c01c: je 0x55c078 */ if (fZ) goto L_0055c078;
L_0055c01e:; BB(0x0055c01e);
    /* 0055c01e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c025: jmp 0x55c030 */ goto L_0055c030;
L_0055c027:; BB(0x0055c027);
    /* 0055c027: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c02a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c02d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055c030:; BB(0x0055c030);
    /* 0055c030: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c033: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c038u); f_00559380();
    /* 0055c038: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c03b: jge 0x55c070 */ if ((fS==fO)) goto L_0055c070;
L_0055c03d:; BB(0x0055c03d);
    /* 0055c03d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c040: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c043: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c049: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c04c: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c051u); f_005593d0();
    /* 0055c051: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c054: jne 0x55c06e */ if (!fZ) goto L_0055c06e;
L_0055c056:; BB(0x0055c056);
    /* 0055c056: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c058: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c05b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c060u); f_0055ecb0();
    /* 0055c060: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c063: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c066: mov byte ptr [ecx + 0x17], dl */ W8((u32)(r_ecx+0x17u), (u8)r_edx);
    /* 0055c069: jmp 0x55c58a */ goto L_0055c58a;
L_0055c06e:; BB(0x0055c06e);
    /* 0055c06e: jmp 0x55c027 */ goto L_0055c027;
L_0055c070:; BB(0x0055c070);
    /* 0055c070: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c073: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c078u); f_0055ec70();
L_0055c078:; BB(0x0055c078);
    /* 0055c078: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c07a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c07d: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c082u); f_0055ecb0();
    /* 0055c082: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c089: jmp 0x55c094 */ goto L_0055c094;
L_0055c08b:; BB(0x0055c08b);
    /* 0055c08b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c08e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c091: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055c094:; BB(0x0055c094);
    /* 0055c094: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c097: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c09cu); f_00559380();
    /* 0055c09c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c09f: jge 0x55c0f3 */ if ((fS==fO)) goto L_0055c0f3;
L_0055c0a1:; BB(0x0055c0a1);
    /* 0055c0a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c0a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c0a7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c0ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c0b0: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c0b5u); f_005593d0();
    /* 0055c0b5: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c0b8: je 0x55c0dc */ if (fZ) goto L_0055c0dc;
L_0055c0ba:; BB(0x0055c0ba);
    /* 0055c0ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c0bd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c0c0: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c0c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c0c6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55c0cbu); f_00641280();
    /* 0055c0cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c0ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c0cf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c0d2: call 0x559d60 */ r_esp -= 4; W32(r_esp, 0x55c0d7u); f_00559d60();
    /* 0055c0d7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c0da: jle 0x55c0f1 */ if ((fZ||fS!=fO)) goto L_0055c0f1;
L_0055c0dc:; BB(0x0055c0dc);
    /* 0055c0dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c0df: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c0e2: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c0e5: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055c0e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c0eb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c0ee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055c0f1:; BB(0x0055c0f1);
    /* 0055c0f1: jmp 0x55c08b */ goto L_0055c08b;
L_0055c0f3:; BB(0x0055c0f3);
    /* 0055c0f3: jmp 0x55c58a */ goto L_0055c58a;
L_0055c0f8:; BB(0x0055c0f8);
    /* 0055c0f8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c0fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c0fc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c0fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c101: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c106u); f_0055e640();
    /* 0055c106: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c109: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c10b: je 0x55c167 */ if (fZ) goto L_0055c167;
L_0055c10d:; BB(0x0055c10d);
    /* 0055c10d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c114: jmp 0x55c11f */ goto L_0055c11f;
L_0055c116:; BB(0x0055c116);
    /* 0055c116: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c119: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c11c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055c11f:; BB(0x0055c11f);
    /* 0055c11f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c122: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c127u); f_00559380();
    /* 0055c127: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c12a: jge 0x55c15f */ if ((fS==fO)) goto L_0055c15f;
L_0055c12c:; BB(0x0055c12c);
    /* 0055c12c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c12f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c132: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c137: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c138: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c13b: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c140u); f_005593d0();
    /* 0055c140: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c143: jne 0x55c15d */ if (!fZ) goto L_0055c15d;
L_0055c145:; BB(0x0055c145);
    /* 0055c145: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c147: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c14a: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c14fu); f_0055ecb0();
    /* 0055c14f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c152: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c155: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0055c158: jmp 0x55c58a */ goto L_0055c58a;
L_0055c15d:; BB(0x0055c15d);
    /* 0055c15d: jmp 0x55c116 */ goto L_0055c116;
L_0055c15f:; BB(0x0055c15f);
    /* 0055c15f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c162: call 0x55ec70 */ r_esp -= 4; W32(r_esp, 0x55c167u); f_0055ec70();
L_0055c167:; BB(0x0055c167);
    /* 0055c167: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055c16e: jmp 0x55c179 */ goto L_0055c179;
L_0055c170:; BB(0x0055c170);
    /* 0055c170: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c173: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c176: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055c179:; BB(0x0055c179);
    /* 0055c179: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c17d: jg 0x55c242 */ if ((!fZ&&fS==fO)) goto L_0055c242;
L_0055c183:; BB(0x0055c183);
    /* 0055c183: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c185: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c189: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c18c: call 0x55e3e0 */ r_esp -= 4; W32(r_esp, 0x55c191u); f_0055e3e0();
    /* 0055c191: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c194: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c196: je 0x55c23d */ if (fZ) goto L_0055c23d;
L_0055c19c:; BB(0x0055c19c);
    /* 0055c19c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c19e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c1a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1a2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c1a5: call 0x55e350 */ r_esp -= 4; W32(r_esp, 0x55c1aau); f_0055e350();
    /* 0055c1aa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c1ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c1af: jne 0x55c1c6 */ if (!fZ) goto L_0055c1c6;
L_0055c1b1:; BB(0x0055c1b1);
    /* 0055c1b1: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c1b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c1ba: call 0x55e350 */ r_esp -= 4; W32(r_esp, 0x55c1bfu); f_0055e350();
    /* 0055c1bf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c1c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c1c4: je 0x55c23d */ if (fZ) goto L_0055c23d;
L_0055c1c6:; BB(0x0055c1c6);
    /* 0055c1c6: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c1cb: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c1d0u); f_0055ecb0();
    /* 0055c1d0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055c1d7: jmp 0x55c1e2 */ goto L_0055c1e2;
L_0055c1d9:; BB(0x0055c1d9);
    /* 0055c1d9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c1dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c1df: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0055c1e2:; BB(0x0055c1e2);
    /* 0055c1e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c1e5: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c1eau); f_00559380();
    /* 0055c1ea: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c1ed: jge 0x55c238 */ if ((fS==fO)) goto L_0055c238;
L_0055c1ef:; BB(0x0055c1ef);
    /* 0055c1ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c1f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c1f5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c1fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c1fb: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55c200u); f_00641290();
    /* 0055c200: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c203: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c206: je 0x55c221 */ if (fZ) goto L_0055c221;
L_0055c208:; BB(0x0055c208);
    /* 0055c208: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c20b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c20e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c214: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c217: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c21cu); f_005593d0();
    /* 0055c21c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c21f: jne 0x55c236 */ if (!fZ) goto L_0055c236;
L_0055c221:; BB(0x0055c221);
    /* 0055c221: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c224: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c227: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055c22a: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055c22d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c230: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c233: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055c236:; BB(0x0055c236);
    /* 0055c236: jmp 0x55c1d9 */ goto L_0055c1d9;
L_0055c238:; BB(0x0055c238);
    /* 0055c238: jmp 0x55c58a */ goto L_0055c58a;
L_0055c23d:; BB(0x0055c23d);
    /* 0055c23d: jmp 0x55c170 */ goto L_0055c170;
L_0055c242:; BB(0x0055c242);
    /* 0055c242: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c244: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055c246: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c248: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c24b: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c250u); f_0055e640();
    /* 0055c250: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c253: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c255: je 0x55c2a9 */ if (fZ) goto L_0055c2a9;
L_0055c257:; BB(0x0055c257);
    /* 0055c257: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c25e: jmp 0x55c269 */ goto L_0055c269;
L_0055c260:; BB(0x0055c260);
    /* 0055c260: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c263: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c266: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055c269:; BB(0x0055c269);
    /* 0055c269: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c26c: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c271u); f_00559380();
    /* 0055c271: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c274: jge 0x55c2a9 */ if ((fS==fO)) goto L_0055c2a9;
L_0055c276:; BB(0x0055c276);
    /* 0055c276: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c279: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c27c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c281: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c282: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c285: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c28au); f_005593d0();
    /* 0055c28a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c28d: jne 0x55c2a7 */ if (!fZ) goto L_0055c2a7;
L_0055c28f:; BB(0x0055c28f);
    /* 0055c28f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c291: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c294: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c299u); f_0055ecb0();
    /* 0055c299: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c29c: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c29f: mov byte ptr [eax + 0x16], cl */ W8((u32)(r_eax+0x16u), (u8)r_ecx);
    /* 0055c2a2: jmp 0x55c58a */ goto L_0055c58a;
L_0055c2a7:; BB(0x0055c2a7);
    /* 0055c2a7: jmp 0x55c260 */ goto L_0055c260;
L_0055c2a9:; BB(0x0055c2a9);
    /* 0055c2a9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c2b2: call 0x55e640 */ r_esp -= 4; W32(r_esp, 0x55c2b7u); f_0055e640();
    /* 0055c2b7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c2ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c2bc: je 0x55c310 */ if (fZ) goto L_0055c310;
L_0055c2be:; BB(0x0055c2be);
    /* 0055c2be: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c2c5: jmp 0x55c2d0 */ goto L_0055c2d0;
L_0055c2c7:; BB(0x0055c2c7);
    /* 0055c2c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c2ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c2cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055c2d0:; BB(0x0055c2d0);
    /* 0055c2d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c2d3: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c2d8u); f_00559380();
    /* 0055c2d8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c2db: jge 0x55c310 */ if ((fS==fO)) goto L_0055c310;
L_0055c2dd:; BB(0x0055c2dd);
    /* 0055c2dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c2e0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c2e3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c2ec: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c2f1u); f_005593d0();
    /* 0055c2f1: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c2f4: jne 0x55c30e */ if (!fZ) goto L_0055c30e;
L_0055c2f6:; BB(0x0055c2f6);
    /* 0055c2f6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c2f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c2fb: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c300u); f_0055ecb0();
    /* 0055c300: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c303: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c306: mov byte ptr [ecx + 0x16], dl */ W8((u32)(r_ecx+0x16u), (u8)r_edx);
    /* 0055c309: jmp 0x55c58a */ goto L_0055c58a;
L_0055c30e:; BB(0x0055c30e);
    /* 0055c30e: jmp 0x55c2c7 */ goto L_0055c2c7;
L_0055c310:; BB(0x0055c310);
    /* 0055c310: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c312: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c315: call 0x55e2e0 */ r_esp -= 4; W32(r_esp, 0x55c31au); f_0055e2e0();
    /* 0055c31a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055c31d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c31f: je 0x55c398 */ if (fZ) goto L_0055c398;
L_0055c321:; BB(0x0055c321);
    /* 0055c321: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c323: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c326: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c32bu); f_0055ecb0();
    /* 0055c32b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c332: jmp 0x55c33d */ goto L_0055c33d;
L_0055c334:; BB(0x0055c334);
    /* 0055c334: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c337: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c33a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0055c33d:; BB(0x0055c33d);
    /* 0055c33d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c340: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c345u); f_00559380();
    /* 0055c345: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c348: jge 0x55c393 */ if ((fS==fO)) goto L_0055c393;
L_0055c34a:; BB(0x0055c34a);
    /* 0055c34a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c34d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c350: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055c355: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c356: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55c35bu); f_00641280();
    /* 0055c35b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c35e: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c361: je 0x55c37c */ if (fZ) goto L_0055c37c;
L_0055c363:; BB(0x0055c363);
    /* 0055c363: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c366: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c369: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055c36e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c36f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c372: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c377u); f_005593d0();
    /* 0055c377: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c37a: jne 0x55c391 */ if (!fZ) goto L_0055c391;
L_0055c37c:; BB(0x0055c37c);
    /* 0055c37c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c37f: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c382: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c385: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055c388: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c38b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c38e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055c391:; BB(0x0055c391);
    /* 0055c391: jmp 0x55c334 */ goto L_0055c334;
L_0055c393:; BB(0x0055c393);
    /* 0055c393: jmp 0x55c58a */ goto L_0055c58a;
L_0055c398:; BB(0x0055c398);
    /* 0055c398: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c39a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c39d: call 0x55e2e0 */ r_esp -= 4; W32(r_esp, 0x55c3a2u); f_0055e2e0();
    /* 0055c3a2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055c3a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c3a7: je 0x55c420 */ if (fZ) goto L_0055c420;
L_0055c3a9:; BB(0x0055c3a9);
    /* 0055c3a9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c3b0: jmp 0x55c3bb */ goto L_0055c3bb;
L_0055c3b2:; BB(0x0055c3b2);
    /* 0055c3b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c3b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c3b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055c3bb:; BB(0x0055c3bb);
    /* 0055c3bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c3be: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c3c3u); f_00559380();
    /* 0055c3c3: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c3c6: jge 0x55c411 */ if ((fS==fO)) goto L_0055c411;
L_0055c3c8:; BB(0x0055c3c8);
    /* 0055c3c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c3cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c3ce: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c3d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3d4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55c3d9u); f_00641280();
    /* 0055c3d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c3dc: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c3df: je 0x55c3fa */ if (fZ) goto L_0055c3fa;
L_0055c3e1:; BB(0x0055c3e1);
    /* 0055c3e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c3e4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c3e7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c3ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c3ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c3f0: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c3f5u); f_005593d0();
    /* 0055c3f5: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c3f8: jne 0x55c40f */ if (!fZ) goto L_0055c40f;
L_0055c3fa:; BB(0x0055c3fa);
    /* 0055c3fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c3fd: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c400: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c403: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055c406: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c409: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c40c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055c40f:; BB(0x0055c40f);
    /* 0055c40f: jmp 0x55c3b2 */ goto L_0055c3b2;
L_0055c411:; BB(0x0055c411);
    /* 0055c411: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c413: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c416: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c41bu); f_0055ecb0();
    /* 0055c41b: jmp 0x55c58a */ goto L_0055c58a;
L_0055c420:; BB(0x0055c420);
    /* 0055c420: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055c422: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c424: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c426: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c429: call 0x55e980 */ r_esp -= 4; W32(r_esp, 0x55c42eu); f_0055e980();
    /* 0055c42e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c431: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c433: je 0x55c487 */ if (fZ) goto L_0055c487;
L_0055c435:; BB(0x0055c435);
    /* 0055c435: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c43c: jmp 0x55c447 */ goto L_0055c447;
L_0055c43e:; BB(0x0055c43e);
    /* 0055c43e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c441: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c444: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055c447:; BB(0x0055c447);
    /* 0055c447: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c44a: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c44fu); f_00559380();
    /* 0055c44f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c452: jge 0x55c487 */ if ((fS==fO)) goto L_0055c487;
L_0055c454:; BB(0x0055c454);
    /* 0055c454: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c457: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c45a: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c45f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c460: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c463: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c468u); f_005593d0();
    /* 0055c468: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c46b: jne 0x55c485 */ if (!fZ) goto L_0055c485;
L_0055c46d:; BB(0x0055c46d);
    /* 0055c46d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c470: mov cl, byte ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c473: mov byte ptr [eax + 0x17], cl */ W8((u32)(r_eax+0x17u), (u8)r_ecx);
    /* 0055c476: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c478: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c47b: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c480u); f_0055ecb0();
    /* 0055c480: jmp 0x55c58a */ goto L_0055c58a;
L_0055c485:; BB(0x0055c485);
    /* 0055c485: jmp 0x55c43e */ goto L_0055c43e;
L_0055c487:; BB(0x0055c487);
    /* 0055c487: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0055c48e: jmp 0x55c499 */ goto L_0055c499;
L_0055c490:; BB(0x0055c490);
    /* 0055c490: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c493: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c496: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055c499:; BB(0x0055c499);
    /* 0055c499: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c49d: jg 0x55c531 */ if ((!fZ&&fS==fO)) goto L_0055c531;
L_0055c4a3:; BB(0x0055c4a3);
    /* 0055c4a3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c4a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c4ac: call 0x55e3e0 */ r_esp -= 4; W32(r_esp, 0x55c4b1u); f_0055e3e0();
    /* 0055c4b1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055c4b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c4b6: je 0x55c52c */ if (fZ) goto L_0055c52c;
L_0055c4b8:; BB(0x0055c4b8);
    /* 0055c4b8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055c4bf: jmp 0x55c4ca */ goto L_0055c4ca;
L_0055c4c1:; BB(0x0055c4c1);
    /* 0055c4c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c4c4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c4c7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0055c4ca:; BB(0x0055c4ca);
    /* 0055c4ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c4cd: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c4d2u); f_00559380();
    /* 0055c4d2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c4d5: jge 0x55c520 */ if ((fS==fO)) goto L_0055c520;
L_0055c4d7:; BB(0x0055c4d7);
    /* 0055c4d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c4da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c4dd: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c4e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4e3: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55c4e8u); f_00641290();
    /* 0055c4e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055c4eb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c4ee: je 0x55c509 */ if (fZ) goto L_0055c509;
L_0055c4f0:; BB(0x0055c4f0);
    /* 0055c4f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055c4f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c4f6: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055c4fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055c4fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c4ff: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c504u); f_005593d0();
    /* 0055c504: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c507: jne 0x55c51e */ if (!fZ) goto L_0055c51e;
L_0055c509:; BB(0x0055c509);
    /* 0055c509: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c50c: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c50f: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055c512: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055c515: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c518: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055c51b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055c51e:; BB(0x0055c51e);
    /* 0055c51e: jmp 0x55c4c1 */ goto L_0055c4c1;
L_0055c520:; BB(0x0055c520);
    /* 0055c520: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c522: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c525: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c52au); f_0055ecb0();
    /* 0055c52a: jmp 0x55c58a */ goto L_0055c58a;
L_0055c52c:; BB(0x0055c52c);
    /* 0055c52c: jmp 0x55c490 */ goto L_0055c490;
L_0055c531:; BB(0x0055c531);
    /* 0055c531: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0055c538: jmp 0x55c543 */ goto L_0055c543;
L_0055c53a:; BB(0x0055c53a);
    /* 0055c53a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c53d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c540: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0055c543:; BB(0x0055c543);
    /* 0055c543: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c546: call 0x559380 */ r_esp -= 4; W32(r_esp, 0x55c54bu); f_00559380();
    /* 0055c54b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055c54e: jge 0x55c580 */ if ((fS==fO)) goto L_0055c580;
L_0055c550:; BB(0x0055c550);
    /* 0055c550: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055c553: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c556: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055c55b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055c55c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c55f: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x55c564u); f_005593d0();
    /* 0055c564: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055c567: jne 0x55c57e */ if (!fZ) goto L_0055c57e;
L_0055c569:; BB(0x0055c569);
    /* 0055c569: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c56c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055c56f: mov dl, byte ptr [ebp - 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0055c572: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055c575: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055c578: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055c57b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055c57e:; BB(0x0055c57e);
    /* 0055c57e: jmp 0x55c53a */ goto L_0055c53a;
L_0055c580:; BB(0x0055c580);
    /* 0055c580: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0055c582: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055c585: call 0x55ecb0 */ r_esp -= 4; W32(r_esp, 0x55c58au); f_0055ecb0();
L_0055c58a:; BB(0x0055c58a);
    /* 0055c58a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055c58c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055c58d: ret  */ FN_RET(0x0055bbb0); r_esp += 4; return;
}

