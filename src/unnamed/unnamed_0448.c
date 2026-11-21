#include "protos.h"

void f_004480e0(void) /* sub_4480E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004480e0);
    /* 004480e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004480e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004480e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004480e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004480e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004480ec: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004480ef: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 004480f5: mov eax, dword ptr [edx + ecx*4 + 0xdc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xdcu));
    /* 004480fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004480ff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448102: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00448105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448106: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044810c: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x448111u); f_00639110();
    /* 00448111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448113: je 0x44814d */ if (fZ) goto L_0044814d;
L_00448115:; BB(0x00448115);
    /* 00448115: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00448117: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044811a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044811d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044811e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00448124: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x448129u); f_00639110();
    /* 00448129: mov ecx, eax */ r_ecx = r_eax;
    /* 0044812b: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x448130u); f_00646380();
    /* 00448130: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448132: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448134: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448137: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044813a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044813b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00448141: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x448146u); f_00639110();
    /* 00448146: mov ecx, eax */ r_ecx = r_eax;
    /* 00448148: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x44814du); f_006464d0();
L_0044814d:; BB(0x0044814d);
    /* 0044814d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044814f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448152: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00448155: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448156: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044815c: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x448161u); f_005d9180();
    /* 00448161: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448168: jmp 0x448173 */ goto L_00448173;
L_0044816a:; BB(0x0044816a);
    /* 0044816a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044816d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448170: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00448173:; BB(0x00448173);
    /* 00448173: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448177: jge 0x448196 */ if ((fS==fO)) goto L_00448196;
L_00448179:; BB(0x00448179);
    /* 00448179: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044817c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044817f: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00448183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00448186: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448189: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044818d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044818f: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00448192: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x448194u); call_ind(t); }
    /* 00448194: jmp 0x44816a */ goto L_0044816a;
L_00448196:; BB(0x00448196);
    /* 00448196: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0044819b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044819e: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481a2: jne 0x4481fe */ if (!fZ) goto L_004481fe;
L_004481a4:; BB(0x004481a4);
    /* 004481a4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004481a7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004481aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004481ab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4481b0u); f_005dcb00();
    /* 004481b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004481b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004481b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004481b9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4481beu); f_0063aac0();
    /* 004481be: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004481c0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004481c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004481c5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481c9: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004481cc: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 004481cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481d1: jne 0x4481f9 */ if (!fZ) goto L_004481f9;
L_004481d3:; BB(0x004481d3);
    /* 004481d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004481d6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004481d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004481da: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4481dfu); f_005dcb00();
    /* 004481df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004481e2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004481e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004481e8: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 004481ee: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 004481f1: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 004481f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004481f7: je 0x4481fe */ if (fZ) goto L_004481fe;
L_004481f9:; BB(0x004481f9);
    /* 004481f9: jmp 0x4482e3 */ goto L_004482e3;
L_004481fe:; BB(0x004481fe);
    /* 004481fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448205: jmp 0x448210 */ goto L_00448210;
L_00448207:; BB(0x00448207);
    /* 00448207: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044820a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044820d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00448210:; BB(0x00448210);
    /* 00448210: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00448214: jge 0x44824d */ if ((fS==fO)) goto L_0044824d;
L_00448216:; BB(0x00448216);
    /* 00448216: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00448219: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044821a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044821d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00448220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448221: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 00448227: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44822cu); f_0044cd70();
    /* 0044822c: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0044822f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448231: jne 0x448235 */ if (!fZ) goto L_00448235;
L_00448233:; BB(0x00448233);
    /* 00448233: jmp 0x448207 */ goto L_00448207;
L_00448235:; BB(0x00448235);
    /* 00448235: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00448238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448239: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044823c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044823f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448240: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448246: call 0x4478b0 */ r_esp -= 4; W32(r_esp, 0x44824bu); f_004478b0();
    /* 0044824b: jmp 0x448207 */ goto L_00448207;
L_0044824d:; BB(0x0044824d);
    /* 0044824d: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448251: je 0x448259 */ if (fZ) goto L_00448259;
L_00448253:; BB(0x00448253);
    /* 00448253: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448257: jne 0x4482d0 */ if (!fZ) goto L_004482d0;
L_00448259:; BB(0x00448259);
    /* 00448259: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044825b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044825e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00448261: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448262: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448268: call 0x447af0 */ r_esp -= 4; W32(r_esp, 0x44826du); f_00447af0();
    /* 0044826d: add eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00448270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448273: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448276: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00448279: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044827a: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448280: call 0x447a70 */ r_esp -= 4; W32(r_esp, 0x448285u); f_00447a70();
    /* 00448285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448286: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448289: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0044828c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044828f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00448292: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00448294: mov ecx, eax */ r_ecx = r_eax;
    /* 00448296: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00448299: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44829bu); call_ind(t); }
    /* 0044829b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044829d: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004482a1: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004482a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004482a5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004482a8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004482ab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004482ae: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 004482b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004482b3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004482b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4482bbu); call_ind(t); }
    /* 004482bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004482be: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004482c1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004482c4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004482c7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004482c9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004482cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4482ceu); call_ind(t); }
    /* 004482ce: jmp 0x4482e3 */ goto L_004482e3;
L_004482d0:; BB(0x004482d0);
    /* 004482d0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004482d3: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004482d6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004482d9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 004482dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004482de: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004482e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4482e3u); call_ind(t); }
L_004482e3:; BB(0x004482e3);
    /* 004482e3: mov esp, ebp */ r_esp = r_ebp;
    /* 004482e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004482e6: ret  */ FN_RET(0x004480e0); r_esp += 4; return;
}

void f_004482f0(void) /* sub_4482F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004482f0);
    /* 004482f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004482f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004482f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004482f5: push 0x69ecc9 */ { u32 v = 0x69ecc9u; r_esp -= 4; W32(r_esp, v); }
    /* 004482fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448301: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448304: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00448309: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044830b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044830c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044830f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00448315: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00448318: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 0044831d: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448321: je 0x4483be */ if (fZ) goto L_004483be;
L_00448327:; BB(0x00448327);
    /* 00448327: push 0x7e7 */ { u32 v = 0x7e7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044832c: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448332: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 00448335: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x44833au); f_005eaf00();
    /* 0044833a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044833c: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 00448342: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 00448345: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044834b: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 0044834e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00448350: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448356: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448358u); call_ind(t); }
    /* 00448358: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044835e: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00448361: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 00448366: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00448369: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044836b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0044836e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448370u); call_ind(t); }
    /* 00448370: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448372: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x448377u); f_00686d82();
    /* 00448377: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044837a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044837d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00448384: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448388: je 0x448399 */ if (fZ) goto L_00448399;
L_0044838a:; BB(0x0044838a);
    /* 0044838a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044838c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044838f: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x448394u); f_006010a0();
    /* 00448394: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00448397: jmp 0x4483a0 */ goto L_004483a0;
L_00448399:; BB(0x00448399);
    /* 00448399: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004483a0:; BB(0x004483a0);
    /* 004483a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004483a3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004483a6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004483ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004483b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004483b1: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 004483b6: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 004483b9: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4483beu); f_005f5d50();
L_004483be:; BB(0x004483be);
    /* 004483be: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 004483c4: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004483c8: je 0x448469 */ if (fZ) goto L_00448469;
L_004483ce:; BB(0x004483ce);
    /* 004483ce: push 0x7e6 */ { u32 v = 0x7e6u; r_esp -= 4; W32(r_esp, v); }
    /* 004483d3: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 004483d9: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 004483dc: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4483e1u); f_005eaf00();
    /* 004483e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004483e3: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 004483e8: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 004483eb: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 004483f1: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 004483f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004483f6: mov ecx, eax */ r_ecx = r_eax;
    /* 004483f8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004483fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448400u); call_ind(t); }
    /* 00448400: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448406: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00448409: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 0044840e: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00448411: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00448413: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00448416: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448418u); call_ind(t); }
    /* 00448418: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0044841a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44841fu); f_00686d82();
    /* 0044841f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00448422: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00448425: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044842c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00448430: je 0x448443 */ if (fZ) goto L_00448443;
L_00448432:; BB(0x00448432);
    /* 00448432: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00448435: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448436: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448439: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x44843eu); f_006010a0();
    /* 0044843e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00448441: jmp 0x44844a */ goto L_0044844a;
L_00448443:; BB(0x00448443);
    /* 00448443: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0044844a:; BB(0x0044844a);
    /* 0044844a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044844d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00448450: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448457: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044845a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044845b: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448461: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00448464: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x448469u); f_005f5d50();
L_00448469:; BB(0x00448469);
    /* 00448469: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044846c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00448473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00448474: mov esp, ebp */ r_esp = r_ebp;
    /* 00448476: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448477: ret 4 */ FN_RET(0x004482f0); r_esp += 8; return;
}

void f_00448480(void) /* sub_448480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448480);
    /* 00448480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448481: mov ebp, esp */ r_ebp = r_esp;
    /* 00448483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00448485: push 0x69ecfa */ { u32 v = 0x69ecfau; r_esp -= 4; W32(r_esp, v); }
    /* 0044848a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00448490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00448491: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448494: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00448499: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044849b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044849c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044849f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004484a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004484a8: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 004484ad: cmp dword ptr [eax + 0x68], 0 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004484b1: je 0x448532 */ if (fZ) goto L_00448532;
L_004484b3:; BB(0x004484b3);
    /* 004484b3: push 0x7e9 */ { u32 v = 0x7e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004484b8: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 004484be: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004484c1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x4484c6u); f_005eaf00();
    /* 004484c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004484c8: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 004484ce: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 004484d1: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 004484d7: mov ecx, dword ptr [ecx + 0x68] */ r_ecx = R32((u32)(r_ecx+0x68u));
    /* 004484da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004484dc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004484e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4484e4u); call_ind(t); }
    /* 004484e4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004484e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4484ebu); f_00686d82();
    /* 004484eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004484ee: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004484f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004484f8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004484fc: je 0x44850d */ if (fZ) goto L_0044850d;
L_004484fe:; BB(0x004484fe);
    /* 004484fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448500: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00448503: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x448508u); f_006010a0();
    /* 00448508: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044850b: jmp 0x448514 */ goto L_00448514;
L_0044850d:; BB(0x0044850d);
    /* 0044850d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00448514:; BB(0x00448514);
    /* 00448514: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00448517: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044851a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00448521: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00448524: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00448525: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 0044852a: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0044852d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x448532u); f_005f5d50();
L_00448532:; BB(0x00448532);
    /* 00448532: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 00448538: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044853c: je 0x4485c5 */ if (fZ) goto L_004485c5;
L_00448542:; BB(0x00448542);
    /* 00448542: push 0x7e8 */ { u32 v = 0x7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00448547: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 0044854d: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00448550: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x448555u); f_005eaf00();
    /* 00448555: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00448557: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 0044855c: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0044855f: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 00448565: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00448568: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044856a: mov ecx, eax */ r_ecx = r_eax;
    /* 0044856c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00448572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x448574u); call_ind(t); }
    /* 00448574: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00448576: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44857bu); f_00686d82();
    /* 0044857b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044857e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00448581: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00448588: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044858c: je 0x44859f */ if (fZ) goto L_0044859f;
L_0044858e:; BB(0x0044858e);
    /* 0044858e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00448591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00448592: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00448595: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x44859au); f_006010a0();
    /* 0044859a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044859d: jmp 0x4485a6 */ goto L_004485a6;
L_0044859f:; BB(0x0044859f);
    /* 0044859f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004485a6:; BB(0x004485a6);
    /* 004485a6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004485a9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004485ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004485b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004485b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004485b7: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 004485bd: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 004485c0: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x4485c5u); f_005f5d50();
L_004485c5:; BB(0x004485c5);
    /* 004485c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004485c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004485cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004485d0: mov esp, ebp */ r_esp = r_ebp;
    /* 004485d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004485d3: ret 4 */ FN_RET(0x00448480); r_esp += 8; return;
}

void f_00448630(void) /* sub_448630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00448630);
    /* 00448630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00448631: mov ebp, esp */ r_ebp = r_esp;
    /* 00448633: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00448636: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00448639: mov dword ptr [ebp - 0x30], 0x177 */ W32((u32)(r_ebp+0xffffffd0u), 0x177u);
    /* 00448640: mov dword ptr [ebp - 0x2c], 0x16d */ W32((u32)(r_ebp+0xffffffd4u), 0x16du);
    /* 00448647: mov dword ptr [ebp - 0x28], 0x165 */ W32((u32)(r_ebp+0xffffffd8u), 0x165u);
    /* 0044864e: mov dword ptr [ebp - 0x24], 0xc9 */ W32((u32)(r_ebp+0xffffffdcu), 0xc9u);
    /* 00448655: mov dword ptr [ebp - 0x20], 0xd4 */ W32((u32)(r_ebp+0xffffffe0u), 0xd4u);
    /* 0044865c: mov dword ptr [ebp - 0x1c], 0xdd */ W32((u32)(r_ebp+0xffffffe4u), 0xddu);
    /* 00448663: mov dword ptr [ebp - 0x18], 0x21c */ W32((u32)(r_ebp+0xffffffe8u), 0x21cu);
    /* 0044866a: mov dword ptr [ebp - 0x14], 0x1ff */ W32((u32)(r_ebp+0xffffffecu), 0x1ffu);
    /* 00448671: mov dword ptr [ebp - 0x10], 0x1e2 */ W32((u32)(r_ebp+0xfffffff0u), 0x1e2u);
    /* 00448678: mov dword ptr [ebp - 0xc], 0x2e */ W32((u32)(r_ebp+0xfffffff4u), 0x2eu);
    /* 0044867f: mov dword ptr [ebp - 8], 0x4b */ W32((u32)(r_ebp+0xfffffff8u), 0x4bu);
    /* 00448686: mov dword ptr [ebp - 4], 0x67 */ W32((u32)(r_ebp+0xfffffffcu), 0x67u);
    /* 0044868d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00448690: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00448696: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0044869a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044869c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044869d: ret 8 */ FN_RET(0x00448630); r_esp += 12; return;
}

void f_004486a0(void) /* sub_4486A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004486a0);
    /* 004486a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004486a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004486a3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004486a6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 004486a9: mov dword ptr [ebp - 0x30], 0x185 */ W32((u32)(r_ebp+0xffffffd0u), 0x185u);
    /* 004486b0: mov dword ptr [ebp - 0x2c], 0x15e */ W32((u32)(r_ebp+0xffffffd4u), 0x15eu);
    /* 004486b7: mov dword ptr [ebp - 0x28], 0x138 */ W32((u32)(r_ebp+0xffffffd8u), 0x138u);
    /* 004486be: mov dword ptr [ebp - 0x24], 0x185 */ W32((u32)(r_ebp+0xffffffdcu), 0x185u);
    /* 004486c5: mov dword ptr [ebp - 0x20], 0x15f */ W32((u32)(r_ebp+0xffffffe0u), 0x15fu);
    /* 004486cc: mov dword ptr [ebp - 0x1c], 0x137 */ W32((u32)(r_ebp+0xffffffe4u), 0x137u);
    /* 004486d3: mov dword ptr [ebp - 0x18], 0x10a */ W32((u32)(r_ebp+0xffffffe8u), 0x10au);
    /* 004486da: mov dword ptr [ebp - 0x14], 0xef */ W32((u32)(r_ebp+0xffffffecu), 0xefu);
    /* 004486e1: mov dword ptr [ebp - 0x10], 0xd4 */ W32((u32)(r_ebp+0xfffffff0u), 0xd4u);
    /* 004486e8: mov dword ptr [ebp - 0xc], 0x112 */ W32((u32)(r_ebp+0xfffffff4u), 0x112u);
    /* 004486ef: mov dword ptr [ebp - 8], 0xf7 */ W32((u32)(r_ebp+0xfffffff8u), 0xf7u);
    /* 004486f6: mov dword ptr [ebp - 4], 0xdc */ W32((u32)(r_ebp+0xfffffffcu), 0xdcu);
    /* 004486fd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00448700: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00448706: mov eax, dword ptr [ebp + ecx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 0044870a: mov esp, ebp */ r_esp = r_ebp;
    /* 0044870c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044870d: ret 8 */ FN_RET(0x004486a0); r_esp += 12; return;
}

void f_004488b0(void) /* sub_4488B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004488b0);
    /* 004488b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004488b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004488b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004488b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004488b9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004488bf: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x4488c4u); f_00637630();
    /* 004488c4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004488c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004488c9: je 0x4488fb */ if (fZ) goto L_004488fb;
L_004488cb:; BB(0x004488cb);
    /* 004488cb: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 004488d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004488d4: jne 0x4488fb */ if (!fZ) goto L_004488fb;
L_004488d6:; BB(0x004488d6);
    /* 004488d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004488d9: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 004488dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004488df: jne 0x4488fb */ if (!fZ) goto L_004488fb;
L_004488e1:; BB(0x004488e1);
    /* 004488e1: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 004488e7: movzx edx, byte ptr [ecx + 0xd1] */ r_edx = (u32)R8((u32)(r_ecx+0xd1u));
    /* 004488ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004488f0: jne 0x4488fb */ if (!fZ) goto L_004488fb;
L_004488f2:; BB(0x004488f2);
    /* 004488f2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004488f9: jmp 0x448902 */ goto L_00448902;
L_004488fb:; BB(0x004488fb);
    /* 004488fb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00448902:; BB(0x00448902);
    /* 00448902: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00448905: mov esp, ebp */ r_esp = r_ebp;
    /* 00448907: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00448908: ret  */ FN_RET(0x004488b0); r_esp += 4; return;
}

