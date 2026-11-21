#include "protos.h"

void f_004b0190(void) /* sub_4B0190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b0190);
    /* 004b0190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b0191: mov ebp, esp */ r_ebp = r_esp;
    /* 004b0193: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b0196: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b0197: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b019d: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4b01a2u); f_0047e420();
    /* 004b01a2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b01a5: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01a7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b01acu); f_0062fbf0();
    /* 004b01ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b01af: mov esi, eax */ r_esi = r_eax;
    /* 004b01b1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01b3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b01b8u); f_0062fbf0();
    /* 004b01b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b01bb: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004b01bf: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01c1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b01c6u); f_0062fbf0();
    /* 004b01c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b01c9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b01cb: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01cd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b01d2u); f_0062fbf0();
    /* 004b01d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b01d5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b01d7: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 004b01da: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004b01dd: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004b01e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b01e6: fstp qword ptr [eax*8 + 0x791dd0] */ W_F64((u32)(r_eax*8+0x791dd0u), ST(0)); FPOP();
    /* 004b01ed: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01ef: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b01f4u); f_0062fbf0();
    /* 004b01f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b01f7: mov esi, eax */ r_esi = r_eax;
    /* 004b01f9: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b01fb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b0200u); f_0062fbf0();
    /* 004b0200: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0203: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004b0207: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0209: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b020eu); f_0062fbf0();
    /* 004b020e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0211: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b0213: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0215: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b021au); f_0062fbf0();
    /* 004b021a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b021d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b021f: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 004b0222: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004b0225: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004b022b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b022e: fstp qword ptr [ecx*8 + 0x791520] */ W_F64((u32)(r_ecx*8+0x791520u), ST(0)); FPOP();
    /* 004b0235: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b023b: jmp 0x4b0249 */ goto L_004b0249;
L_004b023d:; BB(0x004b023d);
    /* 004b023d: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b0241: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b0245: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004b0249:; BB(0x004b0249);
    /* 004b0249: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b024d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b0253: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4b0258u); f_0047f950();
    /* 004b0258: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b025a: jge 0x4b02a1 */ if ((fS==fO)) goto L_004b02a1;
L_004b025c:; BB(0x004b025c);
    /* 004b025c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b025e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b0263u); f_0062fbf0();
    /* 004b0263: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0266: mov esi, eax */ r_esi = r_eax;
    /* 004b0268: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b026a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b026fu); f_0062fbf0();
    /* 004b026f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0272: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 004b0276: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b0278: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b027du); f_0062fbf0();
    /* 004b027d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0280: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b0282: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004b0285: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004b0288: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004b028e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b0291: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004b0294: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b0298: fstp qword ptr [eax + ecx*8 + 0x791ae0] */ W_F64((u32)(r_eax+r_ecx*8+0x791ae0u), ST(0)); FPOP();
    /* 004b029f: jmp 0x4b023d */ goto L_004b023d;
L_004b02a1:; BB(0x004b02a1);
    /* 004b02a1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b02a2: mov esp, ebp */ r_esp = r_ebp;
    /* 004b02a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b02a5: ret  */ FN_RET(0x004b0190); r_esp += 4; return;
}

void f_004b02b0(void) /* sub_4B02B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b02b0);
    /* 004b02b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b02b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b02b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b02b4: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004b02b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b02b9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b02bf: call 0x4ee310 */ r_esp -= 4; W32(r_esp, 0x4b02c4u); f_004ee310();
    /* 004b02c4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004b02c8: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b02cc: jne 0x4b02ff */ if (!fZ) goto L_004b02ff;
L_004b02ce:; BB(0x004b02ce);
    /* 004b02ce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b02d4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b02d7: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4b02dcu); f_004f6640();
    /* 004b02dc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b02df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b02e1: je 0x4b02ff */ if (fZ) goto L_004b02ff;
L_004b02e3:; BB(0x004b02e3);
    /* 004b02e3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b02e7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b02eb: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004b02f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b02f2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b02f3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b02f5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b02f7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b02f9: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 004b02fd: jmp 0x4b033f */ goto L_004b033f;
L_004b02ff:; BB(0x004b02ff);
    /* 004b02ff: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b0303: jge 0x4b033f */ if ((fS==fO)) goto L_004b033f;
L_004b0305:; BB(0x004b0305);
    /* 004b0305: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b030b: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4b0310u); f_0047e420();
    /* 004b0310: movsx eax, word ptr [eax*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004b0318: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b031b: je 0x4b033f */ if (fZ) goto L_004b033f;
L_004b031d:; BB(0x004b031d);
    /* 004b031d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b0323: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b0326: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4b032bu); f_004f6640();
    /* 004b032b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b032e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b0330: jne 0x4b033f */ if (!fZ) goto L_004b033f;
L_004b0332:; BB(0x004b0332);
    /* 004b0332: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b0336: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b0337: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b0339: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b033b: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004b033f:; BB(0x004b033f);
    /* 004b033f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b0343: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0345: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0346: ret  */ FN_RET(0x004b02b0); r_esp += 4; return;
}

