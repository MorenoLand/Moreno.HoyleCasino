#include "protos.h"

void f_00485000(void) /* sub_485000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00485000);
    /* 00485000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485001: mov ebp, esp */ r_ebp = r_esp;
    /* 00485003: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485006: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0048500b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048500d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00485010: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00485013: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00485019: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048501f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00485022: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00485026: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485028: jne 0x485032 */ if (!fZ) goto L_00485032;
L_0048502a:; BB(0x0048502a);
    /* 0048502a: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048502d: jmp 0x485312 */ goto L_00485312;
L_00485032:; BB(0x00485032);
    /* 00485032: mov word ptr [ebp - 4], 1 */ W16((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00485038: jmp 0x485046 */ goto L_00485046;
L_0048503a:; BB(0x0048503a);
    /* 0048503a: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0048503e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00485042: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00485046:; BB(0x00485046);
    /* 00485046: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048504a: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048504d: jge 0x48505a */ if ((fS==fO)) goto L_0048505a;
L_0048504f:; BB(0x0048504f);
    /* 0048504f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485053: mov byte ptr [ebp + ecx - 0x1c], 0 */ W8((u32)(r_ebp+r_ecx+0xffffffe4u), 0x0u);
    /* 00485058: jmp 0x48503a */ goto L_0048503a;
L_0048505a:; BB(0x0048505a);
    /* 0048505a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485060: jmp 0x48506e */ goto L_0048506e;
L_00485062:; BB(0x00485062);
    /* 00485062: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00485066: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048506a: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0048506e:; BB(0x0048506e);
    /* 0048506e: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485072: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00485075: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 00485079: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048507b: jge 0x4852ba */ if ((fS==fO)) goto L_004852ba;
L_00485081:; BB(0x00485081);
    /* 00485081: mov eax, dword ptr [0x7907a4] */ r_eax = R32((u32)(0x7907a4u));
    /* 00485086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485087: lea ecx, [ebp - 0x21] */ r_ecx = (u32)(r_ebp+0xffffffdfu);
    /* 0048508a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048508b: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048508f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00485092: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485094: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485099u); f_00464480();
    /* 00485099: mov ecx, eax */ r_ecx = r_eax;
    /* 0048509b: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4850a0u); f_00464050();
    /* 004850a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004850a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004850a5: je 0x4850b1 */ if (fZ) goto L_004850b1;
L_004850a7:; BB(0x004850a7);
    /* 004850a7: mov byte ptr [ebp - 0xe], 1 */ W8((u32)(r_ebp+0xfffffff2u), 0x1u);
    /* 004850ab: mov cl, byte ptr [ebp - 0xe] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 004850ae: mov byte ptr [ebp - 0x1b], cl */ W8((u32)(r_ebp+0xffffffe5u), (u8)r_ecx);
L_004850b1:; BB(0x004850b1);
    /* 004850b1: mov edx, dword ptr [0x790758] */ r_edx = R32((u32)(0x790758u));
    /* 004850b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004850b8: lea eax, [ebp - 0x22] */ r_eax = (u32)(r_ebp+0xffffffdeu);
    /* 004850bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004850bc: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004850c0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004850c3: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004850c5: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4850cau); f_00464480();
    /* 004850ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004850cc: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4850d1u); f_00464050();
    /* 004850d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004850d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004850d6: je 0x4850dc */ if (fZ) goto L_004850dc;
L_004850d8:; BB(0x004850d8);
    /* 004850d8: mov byte ptr [ebp - 0x1a], 1 */ W8((u32)(r_ebp+0xffffffe6u), 0x1u);
L_004850dc:; BB(0x004850dc);
    /* 004850dc: mov ecx, dword ptr [0x790768] */ r_ecx = R32((u32)(0x790768u));
    /* 004850e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004850e3: lea edx, [ebp - 0x23] */ r_edx = (u32)(r_ebp+0xffffffddu);
    /* 004850e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004850e7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004850eb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004850ee: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004850f0: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4850f5u); f_00464480();
    /* 004850f5: mov ecx, eax */ r_ecx = r_eax;
    /* 004850f7: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4850fcu); f_00464050();
    /* 004850fc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004850ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485101: je 0x485107 */ if (fZ) goto L_00485107;
L_00485103:; BB(0x00485103);
    /* 00485103: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
L_00485107:; BB(0x00485107);
    /* 00485107: mov edx, dword ptr [0x790790] */ r_edx = R32((u32)(0x790790u));
    /* 0048510d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048510e: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00485111: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485112: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485116: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00485119: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048511b: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485120u); f_00464480();
    /* 00485120: mov ecx, eax */ r_ecx = r_eax;
    /* 00485122: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485127u); f_00464050();
    /* 00485127: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0048512a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048512c: je 0x485132 */ if (fZ) goto L_00485132;
L_0048512e:; BB(0x0048512e);
    /* 0048512e: mov byte ptr [ebp - 0x18], 1 */ W8((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00485132:; BB(0x00485132);
    /* 00485132: mov ecx, dword ptr [0x790750] */ r_ecx = R32((u32)(0x790750u));
    /* 00485138: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485139: lea edx, [ebp - 0x25] */ r_edx = (u32)(r_ebp+0xffffffdbu);
    /* 0048513c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048513d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485141: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00485144: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485146: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48514bu); f_00464480();
    /* 0048514b: mov ecx, eax */ r_ecx = r_eax;
    /* 0048514d: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485152u); f_00464050();
    /* 00485152: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485155: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485157: je 0x48515d */ if (fZ) goto L_0048515d;
L_00485159:; BB(0x00485159);
    /* 00485159: mov byte ptr [ebp - 0x17], 1 */ W8((u32)(r_ebp+0xffffffe9u), 0x1u);
L_0048515d:; BB(0x0048515d);
    /* 0048515d: mov edx, dword ptr [0x79079c] */ r_edx = R32((u32)(0x79079cu));
    /* 00485163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485164: lea eax, [ebp - 0x26] */ r_eax = (u32)(r_ebp+0xffffffdau);
    /* 00485167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485168: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048516c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048516f: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485171: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485176u); f_00464480();
    /* 00485176: mov ecx, eax */ r_ecx = r_eax;
    /* 00485178: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x48517du); f_00464050();
    /* 0048517d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00485180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485182: je 0x485188 */ if (fZ) goto L_00485188;
L_00485184:; BB(0x00485184);
    /* 00485184: mov byte ptr [ebp - 0x16], 1 */ W8((u32)(r_ebp+0xffffffeau), 0x1u);
L_00485188:; BB(0x00485188);
    /* 00485188: mov ecx, dword ptr [0x790760] */ r_ecx = R32((u32)(0x790760u));
    /* 0048518e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048518f: lea edx, [ebp - 0x27] */ r_edx = (u32)(r_ebp+0xffffffd9u);
    /* 00485192: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485193: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485197: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048519a: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048519c: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4851a1u); f_00464480();
    /* 004851a1: mov ecx, eax */ r_ecx = r_eax;
    /* 004851a3: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4851a8u); f_00464050();
    /* 004851a8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004851ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004851ad: je 0x4851b3 */ if (fZ) goto L_004851b3;
L_004851af:; BB(0x004851af);
    /* 004851af: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
L_004851b3:; BB(0x004851b3);
    /* 004851b3: mov edx, dword ptr [0x790798] */ r_edx = R32((u32)(0x790798u));
    /* 004851b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004851ba: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 004851bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004851be: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004851c2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004851c5: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004851c7: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4851ccu); f_00464480();
    /* 004851cc: mov ecx, eax */ r_ecx = r_eax;
    /* 004851ce: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4851d3u); f_00464050();
    /* 004851d3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004851d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004851d8: je 0x4851de */ if (fZ) goto L_004851de;
L_004851da:; BB(0x004851da);
    /* 004851da: mov byte ptr [ebp - 0x14], 1 */ W8((u32)(r_ebp+0xffffffecu), 0x1u);
L_004851de:; BB(0x004851de);
    /* 004851de: mov ecx, dword ptr [0x790794] */ r_ecx = R32((u32)(0x790794u));
    /* 004851e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004851e5: lea edx, [ebp - 0x29] */ r_edx = (u32)(r_ebp+0xffffffd7u);
    /* 004851e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004851e9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004851ed: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004851f0: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004851f2: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4851f7u); f_00464480();
    /* 004851f7: mov ecx, eax */ r_ecx = r_eax;
    /* 004851f9: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4851feu); f_00464050();
    /* 004851fe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485203: je 0x485209 */ if (fZ) goto L_00485209;
L_00485205:; BB(0x00485205);
    /* 00485205: mov byte ptr [ebp - 0x13], 1 */ W8((u32)(r_ebp+0xffffffedu), 0x1u);
L_00485209:; BB(0x00485209);
    /* 00485209: mov edx, dword ptr [0x790788] */ r_edx = R32((u32)(0x790788u));
    /* 0048520f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485210: lea eax, [ebp - 0x2a] */ r_eax = (u32)(r_ebp+0xffffffd6u);
    /* 00485213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485214: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485218: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048521b: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048521d: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485222u); f_00464480();
    /* 00485222: mov ecx, eax */ r_ecx = r_eax;
    /* 00485224: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485229u); f_00464050();
    /* 00485229: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0048522c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048522e: je 0x485234 */ if (fZ) goto L_00485234;
L_00485230:; BB(0x00485230);
    /* 00485230: mov byte ptr [ebp - 0x12], 1 */ W8((u32)(r_ebp+0xffffffeeu), 0x1u);
L_00485234:; BB(0x00485234);
    /* 00485234: mov ecx, dword ptr [0x790774] */ r_ecx = R32((u32)(0x790774u));
    /* 0048523a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048523b: lea edx, [ebp - 0x2b] */ r_edx = (u32)(r_ebp+0xffffffd5u);
    /* 0048523e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048523f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485243: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00485246: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485248: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48524du); f_00464480();
    /* 0048524d: mov ecx, eax */ r_ecx = r_eax;
    /* 0048524f: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485254u); f_00464050();
    /* 00485254: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485257: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485259: je 0x48525f */ if (fZ) goto L_0048525f;
L_0048525b:; BB(0x0048525b);
    /* 0048525b: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
L_0048525f:; BB(0x0048525f);
    /* 0048525f: mov edx, dword ptr [0x7907b0] */ r_edx = R32((u32)(0x7907b0u));
    /* 00485265: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485266: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00485269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048526a: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0048526e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00485271: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485273: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485278u); f_00464480();
    /* 00485278: mov ecx, eax */ r_ecx = r_eax;
    /* 0048527a: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x48527fu); f_00464050();
    /* 0048527f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00485282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485284: je 0x48528a */ if (fZ) goto L_0048528a;
L_00485286:; BB(0x00485286);
    /* 00485286: mov byte ptr [ebp - 0x10], 1 */ W8((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0048528a:; BB(0x0048528a);
    /* 0048528a: mov ecx, dword ptr [0x7907a8] */ r_ecx = R32((u32)(0x7907a8u));
    /* 00485290: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485291: lea edx, [ebp - 0x2d] */ r_edx = (u32)(r_ebp+0xffffffd3u);
    /* 00485294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485295: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485299: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0048529c: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048529e: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4852a3u); f_00464480();
    /* 004852a3: mov ecx, eax */ r_ecx = r_eax;
    /* 004852a5: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4852aau); f_00464050();
    /* 004852aa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004852ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852af: je 0x4852b5 */ if (fZ) goto L_004852b5;
L_004852b1:; BB(0x004852b1);
    /* 004852b1: mov byte ptr [ebp - 0xf], 1 */ W8((u32)(r_ebp+0xfffffff1u), 0x1u);
L_004852b5:; BB(0x004852b5);
    /* 004852b5: jmp 0x485062 */ goto L_00485062;
L_004852ba:; BB(0x004852ba);
    /* 004852ba: mov word ptr [ebp - 4], 1 */ W16((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004852c0: jmp 0x4852ce */ goto L_004852ce;
L_004852c2:; BB(0x004852c2);
    /* 004852c2: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004852c6: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004852ca: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_004852ce:; BB(0x004852ce);
    /* 004852ce: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004852d2: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004852d5: jge 0x48530e */ if ((fS==fO)) goto L_0048530e;
L_004852d7:; BB(0x004852d7);
    /* 004852d7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004852db: movzx edx, byte ptr [ebp + ecx - 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xffffffe4u));
    /* 004852e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004852e2: je 0x4852f2 */ if (fZ) goto L_004852f2;
L_004852e4:; BB(0x004852e4);
    /* 004852e4: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004852e8: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004852ec: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 004852f0: jmp 0x48530c */ goto L_0048530c;
L_004852f2:; BB(0x004852f2);
    /* 004852f2: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004852f6: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004852fa: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004852fc: jle 0x485306 */ if ((fZ||fS!=fO)) goto L_00485306;
L_004852fe:; BB(0x004852fe);
    /* 004852fe: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 00485302: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485306:; BB(0x00485306);
    /* 00485306: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0048530c:; BB(0x0048530c);
    /* 0048530c: jmp 0x4852c2 */ goto L_004852c2;
L_0048530e:; BB(0x0048530e);
    /* 0048530e: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
L_00485312:; BB(0x00485312);
    /* 00485312: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00485315: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00485317: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x48531cu); f_00686d72();
    /* 0048531c: mov esp, ebp */ r_esp = r_ebp;
    /* 0048531e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048531f: ret  */ FN_RET(0x00485000); r_esp += 4; return;
}

void f_00485320(void) /* sub_485320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00485320);
    /* 00485320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485321: mov ebp, esp */ r_ebp = r_esp;
    /* 00485323: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485326: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00485329: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0048532f: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485335: jmp 0x485343 */ goto L_00485343;
L_00485337:; BB(0x00485337);
    /* 00485337: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0048533b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048533f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00485343:; BB(0x00485343);
    /* 00485343: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485347: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048534a: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0048534e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485350: jge 0x485667 */ if ((fS==fO)) goto L_00485667;
L_00485356:; BB(0x00485356);
    /* 00485356: mov ecx, dword ptr [0x7907a4] */ r_ecx = R32((u32)(0x7907a4u));
    /* 0048535c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048535d: lea edx, [ebp - 9] */ r_edx = (u32)(r_ebp+0xfffffff7u);
    /* 00485360: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485361: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485365: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485368: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048536a: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48536fu); f_00464480();
    /* 0048536f: mov ecx, eax */ r_ecx = r_eax;
    /* 00485371: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485376u); f_00464050();
    /* 00485376: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485379: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048537b: je 0x485392 */ if (fZ) goto L_00485392;
L_0048537d:; BB(0x0048537d);
    /* 0048537d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485381: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485384: jge 0x485392 */ if ((fS==fO)) goto L_00485392;
L_00485386:; BB(0x00485386);
    /* 00485386: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048538a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048538e: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485392:; BB(0x00485392);
    /* 00485392: mov ecx, dword ptr [0x790758] */ r_ecx = R32((u32)(0x790758u));
    /* 00485398: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485399: lea edx, [ebp - 0xa] */ r_edx = (u32)(r_ebp+0xfffffff6u);
    /* 0048539c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048539d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004853a1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004853a4: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004853a6: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4853abu); f_00464480();
    /* 004853ab: mov ecx, eax */ r_ecx = r_eax;
    /* 004853ad: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4853b2u); f_00464050();
    /* 004853b2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004853b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004853b7: je 0x4853ce */ if (fZ) goto L_004853ce;
L_004853b9:; BB(0x004853b9);
    /* 004853b9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004853bd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004853c0: jge 0x4853ce */ if ((fS==fO)) goto L_004853ce;
L_004853c2:; BB(0x004853c2);
    /* 004853c2: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004853c6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004853ca: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004853ce:; BB(0x004853ce);
    /* 004853ce: mov ecx, dword ptr [0x790768] */ r_ecx = R32((u32)(0x790768u));
    /* 004853d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004853d5: lea edx, [ebp - 0xb] */ r_edx = (u32)(r_ebp+0xfffffff5u);
    /* 004853d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004853d9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004853dd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004853e0: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004853e2: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4853e7u); f_00464480();
    /* 004853e7: mov ecx, eax */ r_ecx = r_eax;
    /* 004853e9: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4853eeu); f_00464050();
    /* 004853ee: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004853f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004853f3: je 0x48540a */ if (fZ) goto L_0048540a;
L_004853f5:; BB(0x004853f5);
    /* 004853f5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004853f9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004853fc: jge 0x48540a */ if ((fS==fO)) goto L_0048540a;
L_004853fe:; BB(0x004853fe);
    /* 004853fe: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00485402: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00485406: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0048540a:; BB(0x0048540a);
    /* 0048540a: mov ecx, dword ptr [0x790790] */ r_ecx = R32((u32)(0x790790u));
    /* 00485410: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485411: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00485414: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485415: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485419: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048541c: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048541e: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485423u); f_00464480();
    /* 00485423: mov ecx, eax */ r_ecx = r_eax;
    /* 00485425: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x48542au); f_00464050();
    /* 0048542a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0048542d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048542f: je 0x485446 */ if (fZ) goto L_00485446;
L_00485431:; BB(0x00485431);
    /* 00485431: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485435: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485438: jge 0x485446 */ if ((fS==fO)) goto L_00485446;
L_0048543a:; BB(0x0048543a);
    /* 0048543a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048543e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00485442: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485446:; BB(0x00485446);
    /* 00485446: mov ecx, dword ptr [0x790750] */ r_ecx = R32((u32)(0x790750u));
    /* 0048544c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048544d: lea edx, [ebp - 0xd] */ r_edx = (u32)(r_ebp+0xfffffff3u);
    /* 00485450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485451: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485455: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485458: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048545a: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48545fu); f_00464480();
    /* 0048545f: mov ecx, eax */ r_ecx = r_eax;
    /* 00485461: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485466u); f_00464050();
    /* 00485466: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485469: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048546b: je 0x485482 */ if (fZ) goto L_00485482;
L_0048546d:; BB(0x0048546d);
    /* 0048546d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485471: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485474: jge 0x485482 */ if ((fS==fO)) goto L_00485482;
L_00485476:; BB(0x00485476);
    /* 00485476: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048547a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048547e: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485482:; BB(0x00485482);
    /* 00485482: mov ecx, dword ptr [0x79079c] */ r_ecx = R32((u32)(0x79079cu));
    /* 00485488: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485489: lea edx, [ebp - 0xe] */ r_edx = (u32)(r_ebp+0xfffffff2u);
    /* 0048548c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048548d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485491: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485494: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485496: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48549bu); f_00464480();
    /* 0048549b: mov ecx, eax */ r_ecx = r_eax;
    /* 0048549d: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4854a2u); f_00464050();
    /* 004854a2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004854a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004854a7: je 0x4854be */ if (fZ) goto L_004854be;
L_004854a9:; BB(0x004854a9);
    /* 004854a9: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004854ad: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004854b0: jge 0x4854be */ if ((fS==fO)) goto L_004854be;
L_004854b2:; BB(0x004854b2);
    /* 004854b2: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004854b6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004854ba: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004854be:; BB(0x004854be);
    /* 004854be: mov ecx, dword ptr [0x790760] */ r_ecx = R32((u32)(0x790760u));
    /* 004854c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004854c5: lea edx, [ebp - 0xf] */ r_edx = (u32)(r_ebp+0xfffffff1u);
    /* 004854c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004854c9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004854cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004854d0: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004854d2: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4854d7u); f_00464480();
    /* 004854d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004854d9: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4854deu); f_00464050();
    /* 004854de: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004854e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004854e3: je 0x4854fa */ if (fZ) goto L_004854fa;
L_004854e5:; BB(0x004854e5);
    /* 004854e5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004854e9: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004854ec: jge 0x4854fa */ if ((fS==fO)) goto L_004854fa;
L_004854ee:; BB(0x004854ee);
    /* 004854ee: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004854f2: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004854f6: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004854fa:; BB(0x004854fa);
    /* 004854fa: mov ecx, dword ptr [0x790798] */ r_ecx = R32((u32)(0x790798u));
    /* 00485500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485501: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00485504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485505: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485509: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048550c: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048550e: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485513u); f_00464480();
    /* 00485513: mov ecx, eax */ r_ecx = r_eax;
    /* 00485515: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x48551au); f_00464050();
    /* 0048551a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0048551d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048551f: je 0x485536 */ if (fZ) goto L_00485536;
L_00485521:; BB(0x00485521);
    /* 00485521: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485525: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485528: jge 0x485536 */ if ((fS==fO)) goto L_00485536;
L_0048552a:; BB(0x0048552a);
    /* 0048552a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048552e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00485532: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485536:; BB(0x00485536);
    /* 00485536: mov ecx, dword ptr [0x790794] */ r_ecx = R32((u32)(0x790794u));
    /* 0048553c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048553d: lea edx, [ebp - 0x11] */ r_edx = (u32)(r_ebp+0xffffffefu);
    /* 00485540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485541: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485545: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485548: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048554a: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48554fu); f_00464480();
    /* 0048554f: mov ecx, eax */ r_ecx = r_eax;
    /* 00485551: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485556u); f_00464050();
    /* 00485556: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485559: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048555b: je 0x485572 */ if (fZ) goto L_00485572;
L_0048555d:; BB(0x0048555d);
    /* 0048555d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485561: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485564: jge 0x485572 */ if ((fS==fO)) goto L_00485572;
L_00485566:; BB(0x00485566);
    /* 00485566: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048556a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048556e: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485572:; BB(0x00485572);
    /* 00485572: mov ecx, dword ptr [0x790788] */ r_ecx = R32((u32)(0x790788u));
    /* 00485578: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485579: lea edx, [ebp - 0x12] */ r_edx = (u32)(r_ebp+0xffffffeeu);
    /* 0048557c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048557d: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485581: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485584: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00485586: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48558bu); f_00464480();
    /* 0048558b: mov ecx, eax */ r_ecx = r_eax;
    /* 0048558d: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485592u); f_00464050();
    /* 00485592: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485595: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485597: je 0x4855ae */ if (fZ) goto L_004855ae;
L_00485599:; BB(0x00485599);
    /* 00485599: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0048559d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004855a0: jge 0x4855ae */ if ((fS==fO)) goto L_004855ae;
L_004855a2:; BB(0x004855a2);
    /* 004855a2: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004855a6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004855aa: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004855ae:; BB(0x004855ae);
    /* 004855ae: mov ecx, dword ptr [0x790774] */ r_ecx = R32((u32)(0x790774u));
    /* 004855b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004855b5: lea edx, [ebp - 0x13] */ r_edx = (u32)(r_ebp+0xffffffedu);
    /* 004855b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004855b9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004855bd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004855c0: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004855c2: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x4855c7u); f_00464480();
    /* 004855c7: mov ecx, eax */ r_ecx = r_eax;
    /* 004855c9: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x4855ceu); f_00464050();
    /* 004855ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004855d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004855d3: je 0x4855ea */ if (fZ) goto L_004855ea;
L_004855d5:; BB(0x004855d5);
    /* 004855d5: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004855d9: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004855dc: jge 0x4855ea */ if ((fS==fO)) goto L_004855ea;
L_004855de:; BB(0x004855de);
    /* 004855de: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004855e2: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004855e6: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_004855ea:; BB(0x004855ea);
    /* 004855ea: mov ecx, dword ptr [0x7907b0] */ r_ecx = R32((u32)(0x7907b0u));
    /* 004855f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004855f1: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004855f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004855f5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004855f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004855fc: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004855fe: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x485603u); f_00464480();
    /* 00485603: mov ecx, eax */ r_ecx = r_eax;
    /* 00485605: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x48560au); f_00464050();
    /* 0048560a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0048560d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048560f: je 0x485626 */ if (fZ) goto L_00485626;
L_00485611:; BB(0x00485611);
    /* 00485611: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485615: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485618: jge 0x485626 */ if ((fS==fO)) goto L_00485626;
L_0048561a:; BB(0x0048561a);
    /* 0048561a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048561e: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00485622: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485626:; BB(0x00485626);
    /* 00485626: mov ecx, dword ptr [0x7907a8] */ r_ecx = R32((u32)(0x7907a8u));
    /* 0048562c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048562d: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 00485630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485631: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00485635: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00485638: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048563a: call 0x464480 */ r_esp -= 4; W32(r_esp, 0x48563fu); f_00464480();
    /* 0048563f: mov ecx, eax */ r_ecx = r_eax;
    /* 00485641: call 0x464050 */ r_esp -= 4; W32(r_esp, 0x485646u); f_00464050();
    /* 00485646: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00485649: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048564b: je 0x485662 */ if (fZ) goto L_00485662;
L_0048564d:; BB(0x0048564d);
    /* 0048564d: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00485651: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485654: jge 0x485662 */ if ((fS==fO)) goto L_00485662;
L_00485656:; BB(0x00485656);
    /* 00485656: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0048565a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0048565e: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00485662:; BB(0x00485662);
    /* 00485662: jmp 0x485337 */ goto L_00485337;
L_00485667:; BB(0x00485667);
    /* 00485667: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0048566b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0048566f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00485671: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00485673: setle al */ r_eax = (r_eax & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00485676: mov esp, ebp */ r_esp = r_ebp;
    /* 00485678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485679: ret 8 */ FN_RET(0x00485320); r_esp += 12; return;
}

void f_00485680(void) /* sub_485680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00485680);
    /* 00485680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00485681: mov ebp, esp */ r_ebp = r_esp;
    /* 00485683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485685: push 0x6a0100 */ { u32 v = 0x6a0100u; r_esp -= 4; W32(r_esp, v); }
    /* 0048568a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00485690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485691: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00485694: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00485699: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048569b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048569c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0048569f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004856a5: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 004856a8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004856af: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 004856b2: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 004856b6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004856b9: jg 0x4856df */ if ((!fZ&&fS==fO)) goto L_004856df;
L_004856bb:; BB(0x004856bb);
    /* 004856bb: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004856be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004856bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004856c2: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4856c7u); f_00484320();
    /* 004856c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004856ce: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004856d1: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004856d4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004856d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004856da: jmp 0x485922 */ goto L_00485922;
L_004856df:; BB(0x004856df);
    /* 004856df: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 004856e2: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x4856e7u); f_00484300();
    /* 004856e7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004856ee: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004856f1: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4856f6u); f_004a20d0();
    /* 004856f6: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004856fa: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 004856fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485700: je 0x48572c */ if (fZ) goto L_0048572c;
L_00485702:; BB(0x00485702);
    /* 00485702: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485707: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048570c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485711: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485716: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048571b: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00485721: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485722: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00485725: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x48572au); f_004a2100();
    /* 0048572a: jmp 0x485755 */ goto L_00485755;
L_0048572c:; BB(0x0048572c);
    /* 0048572c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485731: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485736: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048573b: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00485740: mov eax, dword ptr [0x7913c8] */ r_eax = R32((u32)(0x7913c8u));
    /* 00485745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485746: mov ecx, dword ptr [0x7913cc] */ r_ecx = R32((u32)(0x7913ccu));
    /* 0048574c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048574d: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00485750: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x485755u); f_004a2100();
L_00485755:; BB(0x00485755);
    /* 00485755: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00485758: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x48575du); f_00484300();
    /* 0048575d: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00485761: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00485764: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x485769u); f_004a20d0();
    /* 00485769: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0048576d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048576f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x485774u); f_00686d82();
    /* 00485774: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00485777: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0048577a: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0048577e: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485782: je 0x48579b */ if (fZ) goto L_0048579b;
L_00485784:; BB(0x00485784);
    /* 00485784: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00485786: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00485789: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0048578d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048578e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00485791: call 0x464ed0 */ r_esp -= 4; W32(r_esp, 0x485796u); f_00464ed0();
    /* 00485796: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00485799: jmp 0x4857a2 */ goto L_004857a2;
L_0048579b:; BB(0x0048579b);
    /* 0048579b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004857a2:; BB(0x004857a2);
    /* 004857a2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004857a5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004857a8: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004857ac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004857af: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004857b2:; BB(0x004857b2);
    /* 004857b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004857b5: call 0x465000 */ r_esp -= 4; W32(r_esp, 0x4857bau); f_00465000();
    /* 004857ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004857bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004857bf: je 0x48589b */ if (fZ) goto L_0048589b;
L_004857c5:; BB(0x004857c5);
    /* 004857c5: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004857c8: call 0x484b80 */ r_esp -= 4; W32(r_esp, 0x4857cdu); f_00484b80();
    /* 004857cd: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004857d3: jmp 0x4857e1 */ goto L_004857e1;
L_004857d5:; BB(0x004857d5);
    /* 004857d5: mov cx, word ptr [ebp - 0x2c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd4u))) & 0xffffu);
    /* 004857d9: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004857dd: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
L_004857e1:; BB(0x004857e1);
    /* 004857e1: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004857e5: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004857e8: jge 0x485807 */ if ((fS==fO)) goto L_00485807;
L_004857ea:; BB(0x004857ea);
    /* 004857ea: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004857ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004857ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004857f2: call 0x465110 */ r_esp -= 4; W32(r_esp, 0x4857f7u); f_00465110();
    /* 004857f7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004857fa: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004857fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004857fd: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00485800: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x485805u); f_00484830();
    /* 00485805: jmp 0x4857d5 */ goto L_004857d5;
L_00485807:; BB(0x00485807);
    /* 00485807: mov dl, byte ptr [ebp + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 0048580a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048580b: mov al, byte ptr [ebp + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x20u))) & 0xffu);
    /* 0048580e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048580f: mov cl, byte ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x1cu))) & 0xffu);
    /* 00485812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485813: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 00485816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485817: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0048581a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048581b: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0048581e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048581f: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00485822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485823: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00485826: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00485827: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0048582a: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x48582fu); f_00485940();
    /* 0048582f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00485832: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00485835: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00485837: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0048583a: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0048583d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x485842u); f_004a20f0();
    /* 00485842: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 00485846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485848: je 0x485871 */ if (fZ) goto L_00485871;
L_0048584a:; BB(0x0048584a);
    /* 0048584a: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0048584d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048584e: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00485851: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x485856u); f_004a2440();
    /* 00485856: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00485859: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048585b: je 0x48586f */ if (fZ) goto L_0048586f;
L_0048585d:; BB(0x0048585d);
    /* 0048585d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00485860: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00485863: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00485866: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00485867: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0048586a: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x48586fu); f_00484490();
L_0048586f:; BB(0x0048586f);
    /* 0048586f: jmp 0x485896 */ goto L_00485896;
L_00485871:; BB(0x00485871);
    /* 00485871: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00485874: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00485875: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00485878: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x48587du); f_004a2550();
    /* 0048587d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00485880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00485882: je 0x485896 */ if (fZ) goto L_00485896;
L_00485884:; BB(0x00485884);
    /* 00485884: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00485887: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048588a: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0048588d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048588e: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 00485891: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x485896u); f_00484490();
L_00485896:; BB(0x00485896);
    /* 00485896: jmp 0x4857b2 */ goto L_004857b2;
L_0048589b:; BB(0x0048589b);
    /* 0048589b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0048589e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004858a1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004858a4: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004858a7: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004858ab: je 0x4858d3 */ if (fZ) goto L_004858d3;
L_004858ad:; BB(0x004858ad);
    /* 004858ad: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004858b0: call 0x464fd0 */ r_esp -= 4; W32(r_esp, 0x4858b5u); f_00464fd0();
    /* 004858b5: mov edx, 1 */ r_edx = 0x1u;
    /* 004858ba: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004858bd: je 0x4858cb */ if (fZ) goto L_004858cb;
L_004858bf:; BB(0x004858bf);
    /* 004858bf: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004858c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004858c3: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x4858c8u); f_00686cae();
    /* 004858c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004858cb:; BB(0x004858cb);
    /* 004858cb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004858ce: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004858d1: jmp 0x4858da */ goto L_004858da;
L_004858d3:; BB(0x004858d3);
    /* 004858d3: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004858da:; BB(0x004858da);
    /* 004858da: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 004858dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004858de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004858e1: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4858e6u); f_00484320();
    /* 004858e6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004858e9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004858ec: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004858ef: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004858f3: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004858f6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4858fbu); f_004a20f0();
    /* 004858fb: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004858ff: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00485902: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x485907u); f_00484470();
    /* 00485907: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048590b: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0048590e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x485913u); f_004a20f0();
    /* 00485913: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00485917: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0048591a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x48591fu); f_00484470();
    /* 0048591f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00485922:; BB(0x00485922);
    /* 00485922: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00485925: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048592c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048592d: mov esp, ebp */ r_esp = r_ebp;
    /* 0048592f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00485930: ret 0x20 */ FN_RET(0x00485680); r_esp += 36; return;
}

