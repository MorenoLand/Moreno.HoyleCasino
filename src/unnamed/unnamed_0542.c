#include "protos.h"

void f_005423a0(void) /* sub_5423A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005423a0);
    /* 005423a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005423a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005423a3: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005423a9: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005423ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005423af: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005423b2: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005423b5: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 005423b9: mov eax, dword ptr [ecx + eax + 0x4c] */ r_eax = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 005423bd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005423c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005423c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005423c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005423c7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5423ccu); f_0064c8a0();
    /* 005423cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005423cf: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005423d2: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005423d5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005423d8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005423db: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005423de: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005423e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005423e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005423e5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5423eau); f_0064c8a0();
    /* 005423ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005423ed: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005423f0: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005423f3: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005423f6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005423f9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005423fc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005423ff: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00542406: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0054240d: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00542414: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0054241b: mov dword ptr [ebp - 0x34], 0x1e */ W32((u32)(r_ebp+0xffffffccu), 0x1eu);
    /* 00542422: mov dword ptr [ebp - 0x30], 6 */ W32((u32)(r_ebp+0xffffffd0u), 0x6u);
    /* 00542429: mov dword ptr [ebp - 0x2c], 4 */ W32((u32)(r_ebp+0xffffffd4u), 0x4u);
    /* 00542430: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00542437: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0054243e: mov dword ptr [ebp - 0x20], 0x28 */ W32((u32)(r_ebp+0xffffffe0u), 0x28u);
    /* 00542445: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0054244c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0054244f: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x542454u); f_005f5400();
    /* 00542454: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0054245a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0054245d: mov dword ptr [edx + eax*4 + 0x98], ecx */ W32((u32)(r_edx+r_eax*4+0x98u), r_ecx);
    /* 00542464: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00542467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542468: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54246du); f_005dcb00();
    /* 0054246d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542470: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00542473: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00542476: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x54247bu); f_005d52e0();
    /* 0054247b: mov al, byte ptr [eax + 0x2a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 0054247e: mov byte ptr [ebp - 0x71], al */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_eax);
    /* 00542481: movsx ecx, byte ptr [ebp - 0x71] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff8fu));
    /* 00542485: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0054248b: mov dword ptr [edx + 0x10c], ecx */ W32((u32)(r_edx+0x10cu), r_ecx);
    /* 00542491: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 00542496: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0054249c: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 005424a2: cmp edx, dword ptr [ecx + 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005424a8: je 0x5424bd */ if (fZ) goto L_005424bd;
L_005424aa:; BB(0x005424aa);
    /* 005424aa: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 005424af: cmp dword ptr [eax + 0x10c], 0 */ {  u32 a = R32((u32)(r_eax+0x10cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005424b6: jne 0x5424bd */ if (!fZ) goto L_005424bd;
L_005424b8:; BB(0x005424b8);
    /* 005424b8: jmp 0x5427da */ goto L_005427da;
L_005424bd:; BB(0x005424bd);
    /* 005424bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005424c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005424c1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5424c6u); f_005dcb00();
    /* 005424c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005424c9: mov ecx, eax */ r_ecx = r_eax;
    /* 005424cb: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5424d0u); f_005d5a50();
    /* 005424d0: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005424d5: jl 0x5424dc */ if ((fS!=fO)) goto L_005424dc;
L_005424d7:; BB(0x005424d7);
    /* 005424d7: jmp 0x5427da */ goto L_005427da;
L_005424dc:; BB(0x005424dc);
    /* 005424dc: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005424e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005424e2: je 0x5425a1 */ if (fZ) goto L_005425a1;
L_005424e8:; BB(0x005424e8);
    /* 005424e8: cmp dword ptr [ebp + 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005424ec: jne 0x5424f5 */ if (!fZ) goto L_005424f5;
L_005424ee:; BB(0x005424ee);
    /* 005424ee: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005424f5:; BB(0x005424f5);
    /* 005424f5: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005424f9: jne 0x542502 */ if (!fZ) goto L_00542502;
L_005424fb:; BB(0x005424fb);
    /* 005424fb: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
L_00542502:; BB(0x00542502);
    /* 00542502: cmp dword ptr [ebp + 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542506: jne 0x54250f */ if (!fZ) goto L_0054250f;
L_00542508:; BB(0x00542508);
    /* 00542508: mov dword ptr [ebp - 0x14], 5 */ W32((u32)(r_ebp+0xffffffecu), 0x5u);
L_0054250f:; BB(0x0054250f);
    /* 0054250f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00542512: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00542515: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542518: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054251b: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0054251e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542521: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00542524: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00542527: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x54252cu); f_0064c560();
    /* 0054252c: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542533: jle 0x54253c */ if ((fZ||fS!=fO)) goto L_0054253c;
L_00542535:; BB(0x00542535);
    /* 00542535: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_0054253c:; BB(0x0054253c);
    /* 0054253c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054253f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542540: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542544: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542548: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54254du); f_005dcb00();
    /* 0054254d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542550: mov ecx, eax */ r_ecx = r_eax;
    /* 00542552: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x542557u); f_005d5cf0();
    /* 00542557: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054255a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054255b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054255e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054255f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542562: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542563: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x542568u); f_005dcb00();
    /* 00542568: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054256b: mov ecx, eax */ r_ecx = r_eax;
    /* 0054256d: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x542572u); f_005d5fb0();
    /* 00542572: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542575: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00542578: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054257b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054257e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542580: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542584: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542588: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054258b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054258c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0054258f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00542591: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00542594: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0054259a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54259cu); call_ind(t); }
    /* 0054259c: jmp 0x5427da */ goto L_005427da;
L_005425a1:; BB(0x005425a1);
    /* 005425a1: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005425a5: jne 0x54267e */ if (!fZ) goto L_0054267e;
L_005425ab:; BB(0x005425ab);
    /* 005425ab: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005425ae: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5425b3u); f_005f5400();
    /* 005425b3: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 005425b9: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005425bd: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005425c0: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005425c3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005425c5: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005425c8: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005425ce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5425d0u); call_ind(t); }
    /* 005425d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005425d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005425d4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5425d9u); f_005dcb00();
    /* 005425d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005425dc: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005425e3: jle 0x5425fb */ if ((fZ||fS!=fO)) goto L_005425fb;
L_005425e5:; BB(0x005425e5);
    /* 005425e5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005425e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005425e9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5425eeu); f_005dcb00();
    /* 005425ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005425f1: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005425fb:; BB(0x005425fb);
    /* 005425fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005425fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005425ff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x542604u); f_005dcb00();
    /* 00542604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542607: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054260c: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0054260f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00542612: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00542614: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00542617: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0054261a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0054261c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054261f: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542622: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00542625: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542628: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054262b: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0054262e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542632: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542635: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542636: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00542639: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054263a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54263fu); f_005dcb00();
    /* 0054263f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542642: mov ecx, eax */ r_ecx = r_eax;
    /* 00542644: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x542649u); f_005d5fb0();
    /* 00542649: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054264b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054264d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x542652u); f_0064c8a0();
    /* 00542652: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542655: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00542658: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0054265b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054265d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542661: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00542664: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542665: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00542668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542669: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0054266c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054266e: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00542671: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00542677: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x542679u); call_ind(t); }
    /* 00542679: jmp 0x5427da */ goto L_005427da;
L_0054267e:; BB(0x0054267e);
    /* 0054267e: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542682: jne 0x5426e6 */ if (!fZ) goto L_005426e6;
L_00542684:; BB(0x00542684);
    /* 00542684: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542687: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542688: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54268du); f_005dcb00();
    /* 0054268d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542690: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542697: jge 0x5426d3 */ if ((fS==fO)) goto L_005426d3;
L_00542699:; BB(0x00542699);
    /* 00542699: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054269c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054269d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5426a2u); f_005dcb00();
    /* 005426a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005426a5: cmp dword ptr [eax + 0x4a8], -4 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005426ac: jge 0x5426bd */ if ((fS==fO)) goto L_005426bd;
L_005426ae:; BB(0x005426ae);
    /* 005426ae: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 005426b3: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005426b6: mov byte ptr [eax + 0xfb], 1 */ W8((u32)(r_eax+0xfbu), 0x1u);
L_005426bd:; BB(0x005426bd);
    /* 005426bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005426c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005426c1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5426c6u); f_005dcb00();
    /* 005426c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005426c9: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_005426d3:; BB(0x005426d3);
    /* 005426d3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005426d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005426d7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5426dcu); f_005dcb00();
    /* 005426dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005426df: mov ecx, eax */ r_ecx = r_eax;
    /* 005426e1: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x5426e6u); f_005d7540();
L_005426e6:; BB(0x005426e6);
    /* 005426e6: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005426ea: jne 0x542722 */ if (!fZ) goto L_00542722;
L_005426ec:; BB(0x005426ec);
    /* 005426ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005426ef: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005426f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005426f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005426f8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005426fb: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x542700u); f_005f5400();
    /* 00542700: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00542701: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00542706: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00542706, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00542706, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00542708: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054270b: jne 0x542722 */ if (!fZ) goto L_00542722;
L_0054270d:; BB(0x0054270d);
    /* 0054270d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00542710: fild dword ptr [ebp + edx*4 - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edx*4+0xffffffbcu)));
    /* 00542714: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542717: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0054271a: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0054271d: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x542722u); f_0064c560();
L_00542722:; BB(0x00542722);
    /* 00542722: cmp dword ptr [ebp - 0x1c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542729: jle 0x542732 */ if ((fZ||fS!=fO)) goto L_00542732;
L_0054272b:; BB(0x0054272b);
    /* 0054272b: mov dword ptr [ebp - 0x1c], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe4u), 0x3b9aca00u);
L_00542732:; BB(0x00542732);
    /* 00542732: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542735: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00542738: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0054273b: mov edx, dword ptr [ecx + eax + 0x4c] */ r_edx = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 0054273f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542740: mov eax, dword ptr [ecx + eax + 0x48] */ r_eax = R32((u32)(r_ecx+r_eax+0x48u));
    /* 00542744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542745: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00542748: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542749: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0054274c: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x542751u); f_0064c5c0();
    /* 00542751: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00542753: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00542756: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00542759: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054275c: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542763: jl 0x542786 */ if ((fS!=fO)) goto L_00542786;
L_00542765:; BB(0x00542765);
    /* 00542765: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00542767: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 0054276c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x542771u); f_0064c8a0();
    /* 00542771: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542774: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00542777: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0054277a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0054277d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00542780: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00542783: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00542786:; BB(0x00542786);
    /* 00542786: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054278a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054278d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054278e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00542791: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542792: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x542797u); f_005dcb00();
    /* 00542797: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054279a: mov ecx, eax */ r_ecx = r_eax;
    /* 0054279c: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5427a1u); f_005d5cf0();
    /* 005427a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005427a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005427a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005427a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005427a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005427ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005427ad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5427b2u); f_005dcb00();
    /* 005427b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005427b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005427b7: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5427bcu); f_005d5fb0();
    /* 005427bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005427be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005427c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005427c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005427c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005427c6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005427c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005427ca: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005427cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005427cf: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005427d2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005427d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5427dau); call_ind(t); }
L_005427da:; BB(0x005427da);
    /* 005427da: mov esp, ebp */ r_esp = r_ebp;
    /* 005427dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005427dd: ret 0x10 */ FN_RET(0x005423a0); r_esp += 20; return;
}

void f_00542980(void) /* sub_542980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542980);
    /* 00542980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542981: mov ebp, esp */ r_ebp = r_esp;
    /* 00542983: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542986: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00542989: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054298b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054298d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542993: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x542998u); f_00549e80();
    /* 00542998: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054299b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054299d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005429a3: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x5429a8u); f_00548f80();
    /* 005429a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005429ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005429ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005429af: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005429b5: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x5429bau); f_00549e80();
    /* 005429ba: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005429bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005429bf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005429c1: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005429c7: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x5429ccu); f_00549e80();
    /* 005429cc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005429cf: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 005429d4: mov cl, byte ptr [eax + 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x24u))) & 0xffu);
    /* 005429d7: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 005429da: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005429de: jne 0x5429e4 */ if (!fZ) goto L_005429e4;
L_005429e0:; BB(0x005429e0);
    /* 005429e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005429e2: jmp 0x5429f0 */ goto L_005429f0;
L_005429e4:; BB(0x005429e4);
    /* 005429e4: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005429e8: jg 0x5429ee */ if ((!fZ&&fS==fO)) goto L_005429ee;
L_005429ea:; BB(0x005429ea);
    /* 005429ea: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005429ec: jmp 0x5429f0 */ goto L_005429f0;
L_005429ee:; BB(0x005429ee);
    /* 005429ee: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005429f0:; BB(0x005429f0);
    /* 005429f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005429f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005429f3: ret  */ FN_RET(0x00542980); r_esp += 4; return;
}

void f_00542b80(void) /* sub_542B80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542b80);
    /* 00542b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00542b83: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542b86: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00542b89: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00542b90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542b94: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542b9a: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x542b9fu); f_00548f80();
    /* 00542b9f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00542ba2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542ba5: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542ba8: mov edx, dword ptr [0x793404] */ r_edx = R32((u32)(0x793404u));
    /* 00542bae: mov ax, word ptr [edx + ecx + 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x28u))) & 0xffffu);
    /* 00542bb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542bb4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x542bb9u); f_00641280();
    /* 00542bb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542bbc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00542bbf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542bc2: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542bc5: mov edx, dword ptr [0x793404] */ r_edx = R32((u32)(0x793404u));
    /* 00542bcb: mov ax, word ptr [edx + ecx + 0x2a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x2au))) & 0xffffu);
    /* 00542bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542bd1: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x542bd6u); f_00641280();
    /* 00542bd6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542bd9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00542bdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542bde: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542be1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542be2: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542be8: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x542bedu); f_00549e80();
    /* 00542bed: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00542bf0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00542bf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00542bf4: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542bfa: call 0x549f80 */ r_esp -= 4; W32(r_esp, 0x542bffu); f_00549f80();
    /* 00542bff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00542c02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00542c05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542c06: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542c0c: call 0x549fa0 */ r_esp -= 4; W32(r_esp, 0x542c11u); f_00549fa0();
    /* 00542c11: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00542c14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00542c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00542c18: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542c1e: call 0x54a050 */ r_esp -= 4; W32(r_esp, 0x542c23u); f_0054a050();
    /* 00542c23: mov byte ptr [ebp - 0x1d], al */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_eax);
    /* 00542c26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00542c28: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c2c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00542c2f: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 00542c32: movzx eax, byte ptr [ebp - 0x1d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 00542c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c38: je 0x542c84 */ if (fZ) goto L_00542c84;
L_00542c3a:; BB(0x00542c3a);
    /* 00542c3a: cmp dword ptr [ebp - 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c3e: jne 0x542c5c */ if (!fZ) goto L_00542c5c;
L_00542c40:; BB(0x00542c40);
    /* 00542c40: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542c46: call 0x549ad0 */ r_esp -= 4; W32(r_esp, 0x542c4bu); f_00549ad0();
    /* 00542c4b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00542c4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c50: je 0x542c5c */ if (fZ) goto L_00542c5c;
L_00542c52:; BB(0x00542c52);
    /* 00542c52: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00542c57: jmp 0x542d4a */ goto L_00542d4a;
L_00542c5c:; BB(0x00542c5c);
    /* 00542c5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542c5f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00542c60: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00542c62: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00542c64: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00542c67: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542c6d: call 0x5497a0 */ r_esp -= 4; W32(r_esp, 0x542c72u); f_005497a0();
    /* 00542c72: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00542c75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c77: je 0x542c84 */ if (fZ) goto L_00542c84;
L_00542c79:; BB(0x00542c79);
    /* 00542c79: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542c7c: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00542c7f: jmp 0x542d4a */ goto L_00542d4a;
L_00542c84:; BB(0x00542c84);
    /* 00542c84: cmp dword ptr [ebp - 4], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c88: jne 0x542c91 */ if (!fZ) goto L_00542c91;
L_00542c8a:; BB(0x00542c8a);
    /* 00542c8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542c8c: jmp 0x542d4a */ goto L_00542d4a;
L_00542c91:; BB(0x00542c91);
    /* 00542c91: cmp dword ptr [ebp - 0x14], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542c95: jge 0x542cb7 */ if ((fS==fO)) goto L_00542cb7;
L_00542c97:; BB(0x00542c97);
    /* 00542c97: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542c9a: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542c9d: je 0x542cb7 */ if (fZ) goto L_00542cb7;
L_00542c9f:; BB(0x00542c9f);
    /* 00542c9f: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542ca3: je 0x542cad */ if (fZ) goto L_00542cad;
L_00542ca5:; BB(0x00542ca5);
    /* 00542ca5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542ca8: jmp 0x542d4a */ goto L_00542d4a;
L_00542cad:; BB(0x00542cad);
    /* 00542cad: mov eax, 0xd */ r_eax = 0xdu;
    /* 00542cb2: jmp 0x542d4a */ goto L_00542d4a;
L_00542cb7:; BB(0x00542cb7);
    /* 00542cb7: cmp dword ptr [ebp - 0x14], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542cbb: jge 0x542cc7 */ if ((fS==fO)) goto L_00542cc7;
L_00542cbd:; BB(0x00542cbd);
    /* 00542cbd: mov eax, 1 */ r_eax = 0x1u;
    /* 00542cc2: jmp 0x542d4a */ goto L_00542d4a;
L_00542cc7:; BB(0x00542cc7);
    /* 00542cc7: movzx ecx, byte ptr [ebp - 9] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00542ccb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542ccd: je 0x542cee */ if (fZ) goto L_00542cee;
L_00542ccf:; BB(0x00542ccf);
    /* 00542ccf: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542cd3: jne 0x542cdb */ if (!fZ) goto L_00542cdb;
L_00542cd5:; BB(0x00542cd5);
    /* 00542cd5: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542cd9: je 0x542ce7 */ if (fZ) goto L_00542ce7;
L_00542cdb:; BB(0x00542cdb);
    /* 00542cdb: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542cdf: jne 0x542cee */ if (!fZ) goto L_00542cee;
L_00542ce1:; BB(0x00542ce1);
    /* 00542ce1: cmp dword ptr [ebp - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542ce5: jne 0x542cee */ if (!fZ) goto L_00542cee;
L_00542ce7:; BB(0x00542ce7);
    /* 00542ce7: mov eax, 2 */ r_eax = 0x2u;
    /* 00542cec: jmp 0x542d4a */ goto L_00542d4a;
L_00542cee:; BB(0x00542cee);
    /* 00542cee: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00542cf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542cf4: je 0x542d15 */ if (fZ) goto L_00542d15;
L_00542cf6:; BB(0x00542cf6);
    /* 00542cf6: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542cfa: jne 0x542d02 */ if (!fZ) goto L_00542d02;
L_00542cfc:; BB(0x00542cfc);
    /* 00542cfc: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542d00: je 0x542d0e */ if (fZ) goto L_00542d0e;
L_00542d02:; BB(0x00542d02);
    /* 00542d02: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542d06: jne 0x542d15 */ if (!fZ) goto L_00542d15;
L_00542d08:; BB(0x00542d08);
    /* 00542d08: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542d0c: jne 0x542d15 */ if (!fZ) goto L_00542d15;
L_00542d0e:; BB(0x00542d0e);
    /* 00542d0e: mov eax, 3 */ r_eax = 0x3u;
    /* 00542d13: jmp 0x542d4a */ goto L_00542d4a;
L_00542d15:; BB(0x00542d15);
    /* 00542d15: cmp dword ptr [ebp - 0x14], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542d19: jge 0x542d23 */ if ((fS==fO)) goto L_00542d23;
L_00542d1b:; BB(0x00542d1b);
    /* 00542d1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542d1e: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00542d21: jmp 0x542d4a */ goto L_00542d4a;
L_00542d23:; BB(0x00542d23);
    /* 00542d23: cmp dword ptr [ebp - 0x14], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542d27: jge 0x542d2d */ if ((fS==fO)) goto L_00542d2d;
L_00542d29:; BB(0x00542d29);
    /* 00542d29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542d2b: jmp 0x542d4a */ goto L_00542d4a;
L_00542d2d:; BB(0x00542d2d);
    /* 00542d2d: cmp dword ptr [ebp - 0x18], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542d31: jge 0x542d3a */ if ((fS==fO)) goto L_00542d3a;
L_00542d33:; BB(0x00542d33);
    /* 00542d33: mov eax, 1 */ r_eax = 0x1u;
    /* 00542d38: jmp 0x542d4a */ goto L_00542d4a;
L_00542d3a:; BB(0x00542d3a);
    /* 00542d3a: cmp dword ptr [ebp - 0x18], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542d3e: jge 0x542d48 */ if ((fS==fO)) goto L_00542d48;
L_00542d40:; BB(0x00542d40);
    /* 00542d40: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542d43: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00542d46: jmp 0x542d4a */ goto L_00542d4a;
L_00542d48:; BB(0x00542d48);
    /* 00542d48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00542d4a:; BB(0x00542d4a);
    /* 00542d4a: mov esp, ebp */ r_esp = r_ebp;
    /* 00542d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542d4d: ret 4 */ FN_RET(0x00542b80); r_esp += 8; return;
}

void f_00542d50(void) /* sub_542D50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542d50);
    /* 00542d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00542d53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542d56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00542d59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542d5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00542d5d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00542d63: call 0x54a0c0 */ r_esp -= 4; W32(r_esp, 0x542d68u); f_0054a0c0();
    /* 00542d68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00542d6b: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542d6f: jne 0x542d78 */ if (!fZ) goto L_00542d78;
L_00542d71:; BB(0x00542d71);
    /* 00542d71: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
L_00542d78:; BB(0x00542d78);
    /* 00542d78: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542d7b: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00542d7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00542d80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542d81: ret  */ FN_RET(0x00542d50); r_esp += 4; return;
}

