#include "protos.h"

void f_0050c9a0(void) /* PokerStudPlayScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c9a0);
    /* 0050c9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c9a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9a5: push 0x6a3c2c */ { u32 v = 0x6a3c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050c9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9b1: sub esp, 0x754 */ {  u32 a = r_esp; u32 b = 0x754u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c9b7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0050c9bc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c9be: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0050c9c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c9c7: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0050c9ca: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0050c9d0: mov dword ptr [ebp - 0x4b4], ecx */ W32((u32)(r_ebp+0xfffffb4cu), r_ecx);
    /* 0050c9d6: mov dword ptr [ebp - 0x4ac], 0 */ W32((u32)(r_ebp+0xfffffb54u), 0x0u);
    /* 0050c9e0: mov dword ptr [ebp - 0x4b0], 0 */ W32((u32)(r_ebp+0xfffffb50u), 0x0u);
    /* 0050c9ea: mov eax, dword ptr [0x793150] */ r_eax = R32((u32)(0x793150u));
    /* 0050c9ef: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050c9f2: jne 0x50ca28 */ if (!fZ) goto L_0050ca28;
L_0050c9f4:; BB(0x0050c9f4);
    /* 0050c9f4: mov ecx, dword ptr [0x793150] */ r_ecx = R32((u32)(0x793150u));
    /* 0050c9fa: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c9fd: mov dword ptr [0x793150], ecx */ W32((u32)(0x793150u), r_ecx);
    /* 0050ca03: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050ca0a: mov ecx, 0x79314c */ r_ecx = 0x79314cu;
    /* 0050ca0f: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x50ca14u); f_004a20d0();
    /* 0050ca14: push 0x6b1b00 */ { u32 v = 0x6b1b00u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca19: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x50ca1eu); f_00686f8f();
    /* 0050ca1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ca21: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0050ca28:; BB(0x0050ca28);
    /* 0050ca28: mov edx, dword ptr [0x793150] */ r_edx = R32((u32)(0x793150u));
    /* 0050ca2e: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050ca31: jne 0x50ca65 */ if (!fZ) goto L_0050ca65;
L_0050ca33:; BB(0x0050ca33);
    /* 0050ca33: mov eax, dword ptr [0x793150] */ r_eax = R32((u32)(0x793150u));
    /* 0050ca38: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050ca3b: mov dword ptr [0x793150], eax */ W32((u32)(0x793150u), r_eax);
    /* 0050ca40: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050ca47: mov ecx, 0x793148 */ r_ecx = 0x793148u;
    /* 0050ca4c: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x50ca51u); f_004a20d0();
    /* 0050ca51: push 0x6b1af0 */ { u32 v = 0x6b1af0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca56: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x50ca5bu); f_00686f8f();
    /* 0050ca5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ca5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0050ca65:; BB(0x0050ca65);
    /* 0050ca65: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ca6b: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0050ca6e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ca71: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0050ca74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050ca77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ca78: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ca7e: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x50ca83u); f_005fc3a0();
    /* 0050ca83: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ca89: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0050ca8c: mov dword ptr [ebp - 0x4b8], eax */ W32((u32)(r_ebp+0xfffffb48u), r_eax);
    /* 0050ca92: cmp dword ptr [ebp - 0x4b8], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xfffffb48u)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0050ca99: ja 0x516cb0 */ if ((!fC&&!fZ)) goto L_00516cb0;
L_0050ca9f:; BB(0x0050ca9f);
    /* 0050ca9f: mov ecx, dword ptr [ebp - 0x4b8] */ r_ecx = R32((u32)(r_ebp+0xfffffb48u));
    /* 0050caa5: jmp dword ptr [ecx*4 + 0x516cd0] */ { u32 t = R32((u32)(r_ecx*4+0x516cd0u)); switch (t) { case 0x50caacu: goto L_0050caac; case 0x50cdefu: goto L_0050cdef; case 0x50cf6cu: goto L_0050cf6c; case 0x50d22bu: goto L_0050d22b; case 0x50d5a8u: goto L_0050d5a8; case 0x50d659u: goto L_0050d659; case 0x50e55bu: goto L_0050e55b; case 0x516cb0u: goto L_00516cb0; case 0x50d92cu: goto L_0050d92c; case 0x50e9e2u: goto L_0050e9e2; case 0x50e7f6u: goto L_0050e7f6; case 0x50fc6bu: goto L_0050fc6b; case 0x50fd25u: goto L_0050fd25; case 0x50fe80u: goto L_0050fe80; case 0x50ffe6u: goto L_0050ffe6; case 0x510089u: goto L_00510089; case 0x510394u: goto L_00510394; case 0x5103c4u: goto L_005103c4; case 0x5105f1u: goto L_005105f1; case 0x51080fu: goto L_0051080f; case 0x510881u: goto L_00510881; case 0x5109acu: goto L_005109ac; case 0x5109dbu: goto L_005109db; case 0x510c77u: goto L_00510c77; case 0x510df3u: goto L_00510df3; case 0x510e22u: goto L_00510e22; case 0x51105fu: goto L_0051105f; case 0x511086u: goto L_00511086; case 0x51118du: goto L_0051118d; case 0x511268u: goto L_00511268; case 0x5112c4u: goto L_005112c4; case 0x511308u: goto L_00511308; case 0x511560u: goto L_00511560; case 0x511692u: goto L_00511692; case 0x5116c1u: goto L_005116c1; case 0x511886u: goto L_00511886; case 0x5119c6u: goto L_005119c6; case 0x511a2cu: goto L_00511a2c; case 0x511c94u: goto L_00511c94; case 0x511f22u: goto L_00511f22; case 0x511f81u: goto L_00511f81; case 0x512392u: goto L_00512392; case 0x5123c1u: goto L_005123c1; case 0x512450u: goto L_00512450; case 0x5124ecu: goto L_005124ec; case 0x512635u: goto L_00512635; case 0x5126bcu: goto L_005126bc; case 0x5127b4u: goto L_005127b4; case 0x512826u: goto L_00512826; case 0x51291fu: goto L_0051291f; case 0x5129c3u: goto L_005129c3; case 0x51353bu: goto L_0051353b; case 0x514735u: goto L_00514735; case 0x514af7u: goto L_00514af7; case 0x516a97u: goto L_00516a97; case 0x516bafu: goto L_00516baf; case 0x516c17u: goto L_00516c17; case 0x516c43u: goto L_00516c43; case 0x516c6fu: goto L_00516c6f; default: UNSUP(0x0050caa5, "jump table entry is not a known target"); } }
L_0050caac:; BB(0x0050caac);
    /* 0050caac: cmp dword ptr [0x793070], 2 */ {  u32 a = R32((u32)(0x793070u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cab3: jge 0x50cae4 */ if ((fS==fO)) goto L_0050cae4;
L_0050cab5:; BB(0x0050cab5);
    /* 0050cab5: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050cab7: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cabd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050cabf: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cac5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050cac8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50cacau); call_ind(t); }
    /* 0050caca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cacc: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cad2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050cad4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cada: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050cadd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50cadfu); call_ind(t); }
    /* 0050cadf: jmp 0x516cb0 */ goto L_00516cb0;
L_0050cae4:; BB(0x0050cae4);
    /* 0050cae4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050caea: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50caefu); f_0047e190();
    /* 0050caef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050caf2: jne 0x50cafd */ if (!fZ) goto L_0050cafd;
L_0050caf4:; BB(0x0050caf4);
    /* 0050caf4: cmp dword ptr [0x793070], 7 */ {  u32 a = R32((u32)(0x793070u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cafb: jg 0x50cb16 */ if ((!fZ&&fS==fO)) goto L_0050cb16;
L_0050cafd:; BB(0x0050cafd);
    /* 0050cafd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cb03: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cb08u); f_0047e190();
    /* 0050cb08: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb0b: jne 0x50cb45 */ if (!fZ) goto L_0050cb45;
L_0050cb0d:; BB(0x0050cb0d);
    /* 0050cb0d: cmp dword ptr [0x793070], 7 */ {  u32 a = R32((u32)(0x793070u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cb14: jle 0x50cb45 */ if ((fZ||fS!=fO)) goto L_0050cb45;
L_0050cb16:; BB(0x0050cb16);
    /* 0050cb16: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb18: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cb1e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050cb20: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cb26: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050cb29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50cb2bu); call_ind(t); }
    /* 0050cb2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cb2d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cb33: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050cb35: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cb3b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050cb3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50cb40u); call_ind(t); }
    /* 0050cb40: jmp 0x516cb0 */ goto L_00516cb0;
L_0050cb45:; BB(0x0050cb45);
    /* 0050cb45: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cb4b: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cb50u); f_0047e190();
    /* 0050cb50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb53: jne 0x50cb61 */ if (!fZ) goto L_0050cb61;
L_0050cb55:; BB(0x0050cb55);
    /* 0050cb55: mov dword ptr [0x793078], 2 */ W32((u32)(0x793078u), 0x2u);
    /* 0050cb5f: jmp 0x50cb97 */ goto L_0050cb97;
L_0050cb61:; BB(0x0050cb61);
    /* 0050cb61: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cb67: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cb6cu); f_0047e190();
    /* 0050cb6c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb6f: jne 0x50cb7d */ if (!fZ) goto L_0050cb7d;
L_0050cb71:; BB(0x0050cb71);
    /* 0050cb71: mov dword ptr [0x793078], 1 */ W32((u32)(0x793078u), 0x1u);
    /* 0050cb7b: jmp 0x50cb97 */ goto L_0050cb97;
L_0050cb7d:; BB(0x0050cb7d);
    /* 0050cb7d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cb83: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cb88u); f_0047e190();
    /* 0050cb88: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cb8b: jne 0x50cb97 */ if (!fZ) goto L_0050cb97;
L_0050cb8d:; BB(0x0050cb8d);
    /* 0050cb8d: mov dword ptr [0x793078], 7 */ W32((u32)(0x793078u), 0x7u);
L_0050cb97:; BB(0x0050cb97);
    /* 0050cb97: mov word ptr [0x793144], 0 */ W16((u32)(0x793144u), 0x0u);
    /* 0050cba0: jmp 0x50cbb4 */ goto L_0050cbb4;
L_0050cba2:; BB(0x0050cba2);
    /* 0050cba2: mov cx, word ptr [0x793144] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793144u))) & 0xffffu);
    /* 0050cba9: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050cbad: mov word ptr [0x793144], cx */ W16((u32)(0x793144u), (u16)r_ecx);
L_0050cbb4:; BB(0x0050cbb4);
    /* 0050cbb4: movsx esi, word ptr [0x793144] */ r_esi = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cbbb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cbc1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x50cbc6u); f_0047f950();
    /* 0050cbc6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cbc8: jge 0x50cdc0 */ if ((fS==fO)) goto L_0050cdc0;
L_0050cbce:; BB(0x0050cbce);
    /* 0050cbce: mov word ptr [0x793140], 0 */ W16((u32)(0x793140u), 0x0u);
    /* 0050cbd7: jmp 0x50cbeb */ goto L_0050cbeb;
L_0050cbd9:; BB(0x0050cbd9);
    /* 0050cbd9: mov dx, word ptr [0x793140] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793140u))) & 0xffffu);
    /* 0050cbe0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050cbe4: mov word ptr [0x793140], dx */ W16((u32)(0x793140u), (u16)r_edx);
L_0050cbeb:; BB(0x0050cbeb);
    /* 0050cbeb: movsx esi, word ptr [0x793140] */ r_esi = (u32)(i32)(i16)R16((u32)(0x793140u));
    /* 0050cbf2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cbf8: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x50cbfdu); f_0047f950();
    /* 0050cbfd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cbff: jge 0x50cdbb */ if ((fS==fO)) goto L_0050cdbb;
L_0050cc05:; BB(0x0050cc05);
    /* 0050cc05: movsx eax, word ptr [0x793144] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cc0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc0d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cc13: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cc18u); f_0047e390();
    /* 0050cc18: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cc1a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x50cc1fu); f_004c6cb0();
    /* 0050cc1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc21: je 0x50cdb6 */ if (fZ) goto L_0050cdb6;
L_0050cc27:; BB(0x0050cc27);
    /* 0050cc27: movsx ecx, word ptr [0x793140] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793140u));
    /* 0050cc2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc2f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cc35: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cc3au); f_0047e390();
    /* 0050cc3a: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cc3c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x50cc41u); f_004c7010();
    /* 0050cc41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc43: je 0x50cdb6 */ if (fZ) goto L_0050cdb6;
L_0050cc49:; BB(0x0050cc49);
    /* 0050cc49: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cc4f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cc54u); f_0047e190();
    /* 0050cc54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc57: jne 0x50cca5 */ if (!fZ) goto L_0050cca5;
L_0050cc59:; BB(0x0050cc59);
    /* 0050cc59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cc5f: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x50cc64u); f_0047e280();
    /* 0050cc64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc66: jne 0x50cca5 */ if (!fZ) goto L_0050cca5;
L_0050cc68:; BB(0x0050cc68);
    /* 0050cc68: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cc6e: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x50cc73u); f_0047d770();
    /* 0050cc73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cc75: jne 0x50cca5 */ if (!fZ) goto L_0050cca5;
L_0050cc77:; BB(0x0050cc77);
    /* 0050cc77: mov dx, word ptr [0x793070] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 0050cc7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc7f: mov ax, word ptr [0x793140] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793140u))) & 0xffffu);
    /* 0050cc85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc86: movsx ecx, word ptr [0x793144] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cc8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cc8e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cc94: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cc99u); f_0047e390();
    /* 0050cc99: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cc9b: call 0x4d6ee0 */ r_esp -= 4; W32(r_esp, 0x50cca0u); f_004d6ee0();
    /* 0050cca0: jmp 0x50cd54 */ goto L_0050cd54;
L_0050cca5:; BB(0x0050cca5);
    /* 0050cca5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ccab: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ccb0u); f_0047e190();
    /* 0050ccb0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ccb3: jne 0x50cce0 */ if (!fZ) goto L_0050cce0;
L_0050ccb5:; BB(0x0050ccb5);
    /* 0050ccb5: mov dx, word ptr [0x793070] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 0050ccbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccbd: mov ax, word ptr [0x793140] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793140u))) & 0xffffu);
    /* 0050ccc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccc4: movsx ecx, word ptr [0x793144] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cccc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ccd2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50ccd7u); f_0047e390();
    /* 0050ccd7: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ccd9: call 0x4d9270 */ r_esp -= 4; W32(r_esp, 0x50ccdeu); f_004d9270();
    /* 0050ccde: jmp 0x50cd54 */ goto L_0050cd54;
L_0050cce0:; BB(0x0050cce0);
    /* 0050cce0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cce6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ccebu); f_0047e190();
    /* 0050cceb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ccee: jne 0x50cd1b */ if (!fZ) goto L_0050cd1b;
L_0050ccf0:; BB(0x0050ccf0);
    /* 0050ccf0: mov dx, word ptr [0x793070] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 0050ccf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccf8: mov ax, word ptr [0x793140] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793140u))) & 0xffffu);
    /* 0050ccfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ccff: movsx ecx, word ptr [0x793144] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cd06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cd0d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cd12u); f_0047e390();
    /* 0050cd12: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cd14: call 0x4ec290 */ r_esp -= 4; W32(r_esp, 0x50cd19u); f_004ec290();
    /* 0050cd19: jmp 0x50cd54 */ goto L_0050cd54;
L_0050cd1b:; BB(0x0050cd1b);
    /* 0050cd1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cd21: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cd26u); f_0047e190();
    /* 0050cd26: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cd29: jne 0x50cd54 */ if (!fZ) goto L_0050cd54;
L_0050cd2b:; BB(0x0050cd2b);
    /* 0050cd2b: mov dx, word ptr [0x793070] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 0050cd32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd33: mov ax, word ptr [0x793140] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793140u))) & 0xffffu);
    /* 0050cd39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd3a: movsx ecx, word ptr [0x793144] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cd41: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd42: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cd48: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cd4du); f_0047e390();
    /* 0050cd4d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cd4f: call 0x4f3200 */ r_esp -= 4; W32(r_esp, 0x50cd54u); f_004f3200();
L_0050cd54:; BB(0x0050cd54);
    /* 0050cd54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd56: movsx edx, word ptr [0x793144] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cd5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd5e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cd64: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cd69u); f_0047e390();
    /* 0050cd69: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cd6b: call 0x4c6ed0 */ r_esp -= 4; W32(r_esp, 0x50cd70u); f_004c6ed0();
    /* 0050cd70: movsx eax, word ptr [0x793144] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cd77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd78: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cd7e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cd83u); f_0047e390();
    /* 0050cd83: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cd85: call 0x4c6e70 */ r_esp -= 4; W32(r_esp, 0x50cd8au); f_004c6e70();
    /* 0050cd8a: mov esi, eax */ r_esi = r_eax;
    /* 0050cd8c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd8e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50cd93u); f_0062fbf0();
    /* 0050cd93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050cd96: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cd98: jle 0x50cdb6 */ if ((fZ||fS!=fO)) goto L_0050cdb6;
L_0050cd9a:; BB(0x0050cd9a);
    /* 0050cd9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cd9c: movsx ecx, word ptr [0x793144] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793144u));
    /* 0050cda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cda4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cdaa: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cdafu); f_0047e390();
    /* 0050cdaf: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cdb1: call 0x4c6ed0 */ r_esp -= 4; W32(r_esp, 0x50cdb6u); f_004c6ed0();
L_0050cdb6:; BB(0x0050cdb6);
    /* 0050cdb6: jmp 0x50cbd9 */ goto L_0050cbd9;
L_0050cdbb:; BB(0x0050cdbb);
    /* 0050cdbb: jmp 0x50cba2 */ goto L_0050cba2;
L_0050cdc0:; BB(0x0050cdc0);
    /* 0050cdc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cdc2: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cdc8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050cdca: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cdd0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050cdd3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50cdd5u); call_ind(t); }
    /* 0050cdd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cdd7: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cddd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050cddf: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cde5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050cde8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50cdeau); call_ind(t); }
    /* 0050cdea: jmp 0x516cb0 */ goto L_00516cb0;
L_0050cdef:; BB(0x0050cdef);
    /* 0050cdef: mov dword ptr [0x79313c], 0 */ W32((u32)(0x79313cu), 0x0u);
    /* 0050cdf9: jmp 0x50ce0a */ goto L_0050ce0a;
L_0050cdfb:; BB(0x0050cdfb);
    /* 0050cdfb: mov ecx, dword ptr [0x79313c] */ r_ecx = R32((u32)(0x79313cu));
    /* 0050ce01: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ce04: mov dword ptr [0x79313c], ecx */ W32((u32)(0x79313cu), r_ecx);
L_0050ce0a:; BB(0x0050ce0a);
    /* 0050ce0a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ce10: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x50ce15u); f_0047f950();
    /* 0050ce15: cmp dword ptr [0x79313c], eax */ {  u32 a = R32((u32)(0x79313cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ce1b: jge 0x50cf16 */ if ((fS==fO)) goto L_0050cf16;
L_0050ce21:; BB(0x0050ce21);
    /* 0050ce21: mov edx, dword ptr [0x79313c] */ r_edx = R32((u32)(0x79313cu));
    /* 0050ce27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce28: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ce2e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50ce33u); f_0047e390();
    /* 0050ce33: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ce35: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x50ce3au); f_004c6cb0();
    /* 0050ce3a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce3d: je 0x50ce4e */ if (fZ) goto L_0050ce4e;
L_0050ce3f:; BB(0x0050ce3f);
    /* 0050ce3f: movzx eax, byte ptr [0x791360] */ r_eax = (u32)R8((u32)(0x791360u));
    /* 0050ce46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce48: je 0x50cf11 */ if (fZ) goto L_0050cf11;
L_0050ce4e:; BB(0x0050ce4e);
    /* 0050ce4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ce54: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ce59u); f_0047e190();
    /* 0050ce59: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ce5c: jne 0x50ce7c */ if (!fZ) goto L_0050ce7c;
L_0050ce5e:; BB(0x0050ce5e);
    /* 0050ce5e: mov ecx, dword ptr [0x79313c] */ r_ecx = R32((u32)(0x79313cu));
    /* 0050ce64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ce6b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50ce70u); f_0047e390();
    /* 0050ce70: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ce72: call 0x4c76c0 */ r_esp -= 4; W32(r_esp, 0x50ce77u); f_004c76c0();
    /* 0050ce77: jmp 0x50cf11 */ goto L_0050cf11;
L_0050ce7c:; BB(0x0050ce7c);
    /* 0050ce7c: mov edx, dword ptr [0x79313c] */ r_edx = R32((u32)(0x79313cu));
    /* 0050ce82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ce89: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50ce8eu); f_0047e390();
    /* 0050ce8e: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ce90: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x50ce95u); f_004c76e0();
    /* 0050ce95: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0050ce98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ce99: mov ecx, dword ptr [0x79313c] */ r_ecx = R32((u32)(0x79313cu));
    /* 0050ce9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050cea0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cea6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50ceabu); f_0047e390();
    /* 0050ceab: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cead: call 0x4c8700 */ r_esp -= 4; W32(r_esp, 0x50ceb2u); f_004c8700();
    /* 0050ceb2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0050ceb9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cebb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050cebe: mov ecx, esp */ r_ecx = r_esp;
    /* 0050cec0: mov dword ptr [ebp - 0x22c], esp */ W32((u32)(r_ebp+0xfffffdd4u), r_esp);
    /* 0050cec6: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0050cec9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceca: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x50cecfu); f_00484320();
    /* 0050cecf: mov dword ptr [ebp - 0x4bc], eax */ W32((u32)(r_ebp+0xfffffb44u), r_eax);
    /* 0050ced5: mov eax, dword ptr [ebp - 0x4bc] */ r_eax = R32((u32)(r_ebp+0xfffffb44u));
    /* 0050cedb: mov dword ptr [ebp - 0x4c0], eax */ W32((u32)(r_ebp+0xfffffb40u), r_eax);
    /* 0050cee1: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0050cee5: mov ecx, dword ptr [0x79313c] */ r_ecx = R32((u32)(0x79313cu));
    /* 0050ceeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ceec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cef2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cef7u); f_0047e390();
    /* 0050cef7: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0050cefb: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cefd: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x50cf02u); f_004c88a0();
    /* 0050cf02: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050cf09: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0050cf0c: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50cf11u); f_00484470();
L_0050cf11:; BB(0x0050cf11);
    /* 0050cf11: jmp 0x50cdfb */ goto L_0050cdfb;
L_0050cf16:; BB(0x0050cf16);
    /* 0050cf16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cf1c: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50cf21u); f_0047e190();
    /* 0050cf21: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cf24: jne 0x50cf3d */ if (!fZ) goto L_0050cf3d;
L_0050cf26:; BB(0x0050cf26);
    /* 0050cf26: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf28: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cf2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050cf30: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cf36: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050cf39: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50cf3bu); call_ind(t); }
    /* 0050cf3b: jmp 0x50cf52 */ goto L_0050cf52;
L_0050cf3d:; BB(0x0050cf3d);
    /* 0050cf3d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf3f: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cf45: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050cf47: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cf4d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050cf50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50cf52u); call_ind(t); }
L_0050cf52:; BB(0x0050cf52);
    /* 0050cf52: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0050cf54: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cf5a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050cf5c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cf62: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050cf65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50cf67u); call_ind(t); }
    /* 0050cf67: jmp 0x516cb0 */ goto L_00516cb0;
L_0050cf6c:; BB(0x0050cf6c);
    /* 0050cf6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cf72: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 0050cf7c: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 0050cf86: jmp 0x50cf97 */ goto L_0050cf97;
L_0050cf88:; BB(0x0050cf88);
    /* 0050cf88: mov edx, dword ptr [0x793138] */ r_edx = R32((u32)(0x793138u));
    /* 0050cf8e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050cf91: mov dword ptr [0x793138], edx */ W32((u32)(0x793138u), r_edx);
L_0050cf97:; BB(0x0050cf97);
    /* 0050cf97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cf9d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x50cfa2u); f_0047f950();
    /* 0050cfa2: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050cfa8: jge 0x50cfc4 */ if ((fS==fO)) goto L_0050cfc4;
L_0050cfaa:; BB(0x0050cfaa);
    /* 0050cfaa: mov eax, dword ptr [0x793138] */ r_eax = R32((u32)(0x793138u));
    /* 0050cfaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050cfb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050cfb6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50cfbbu); f_0047e390();
    /* 0050cfbb: mov ecx, eax */ r_ecx = r_eax;
    /* 0050cfbd: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x50cfc2u); f_004dc490();
    /* 0050cfc2: jmp 0x50cf88 */ goto L_0050cf88;
L_0050cfc4:; BB(0x0050cfc4);
    /* 0050cfc4: mov byte ptr [0x793032], 0 */ W8((u32)(0x793032u), 0x0u);
    /* 0050cfcb: movzx ecx, byte ptr [0x793030] */ r_ecx = (u32)R8((u32)(0x793030u));
    /* 0050cfd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050cfd4: je 0x50d005 */ if (fZ) goto L_0050d005;
L_0050cfd6:; BB(0x0050cfd6);
    /* 0050cfd6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050cfd8: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cfde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050cfe0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cfe6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050cfe9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50cfebu); call_ind(t); }
    /* 0050cfeb: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0050cfed: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cff3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050cff5: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050cffb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050cffe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d000u); call_ind(t); }
    /* 0050d000: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d005:; BB(0x0050d005);
    /* 0050d005: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d00a: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d00f: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d014: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d019: mov ecx, dword ptr [0x7913c8] */ r_ecx = R32((u32)(0x7913c8u));
    /* 0050d01f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d020: mov edx, dword ptr [0x7913cc] */ r_edx = R32((u32)(0x7913ccu));
    /* 0050d026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d027: mov ecx, 0x79314c */ r_ecx = 0x79314cu;
    /* 0050d02c: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x50d031u); f_004a2100();
    /* 0050d031: mov dword ptr [0x793134], 0xffffffff */ W32((u32)(0x793134u), 0xffffffffu);
    /* 0050d03b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d041: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x50d046u); f_0047bbc0();
    /* 0050d046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d047: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d04d: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50d052u); f_0047e400();
L_0050d052:; BB(0x0050d052);
    /* 0050d052: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d058: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x50d05du); f_0047e440();
    /* 0050d05d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d063: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d068u); f_0047e3b0();
    /* 0050d068: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d06a: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x50d06fu); f_004c7010();
    /* 0050d06f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d072: jne 0x50d12b */ if (!fZ) goto L_0050d12b;
L_0050d078:; BB(0x0050d078);
    /* 0050d078: lea eax, [ebp - 0x234] */ r_eax = (u32)(r_ebp+0xfffffdccu);
    /* 0050d07e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d07f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d085: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d08au); f_0047e3b0();
    /* 0050d08a: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d08c: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50d091u); f_004c8300();
    /* 0050d091: mov dword ptr [ebp - 0x4c4], eax */ W32((u32)(r_ebp+0xfffffb3cu), r_eax);
    /* 0050d097: mov ecx, dword ptr [ebp - 0x4c4] */ r_ecx = R32((u32)(r_ebp+0xfffffb3cu));
    /* 0050d09d: mov dword ptr [ebp - 0x4c8], ecx */ W32((u32)(r_ebp+0xfffffb38u), r_ecx);
    /* 0050d0a3: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0050d0aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0b8: lea edx, [ebp - 0x238] */ r_edx = (u32)(r_ebp+0xfffffdc8u);
    /* 0050d0be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d0bf: mov ecx, dword ptr [ebp - 0x4c8] */ r_ecx = R32((u32)(r_ebp+0xfffffb38u));
    /* 0050d0c5: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50d0cau); f_00485940();
    /* 0050d0ca: mov dword ptr [ebp - 0x4cc], eax */ W32((u32)(r_ebp+0xfffffb34u), r_eax);
    /* 0050d0d0: mov eax, dword ptr [ebp - 0x4cc] */ r_eax = R32((u32)(r_ebp+0xfffffb34u));
    /* 0050d0d6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0050d0d8: mov dword ptr [0x793148], ecx */ W32((u32)(0x793148u), r_ecx);
    /* 0050d0de: lea ecx, [ebp - 0x238] */ r_ecx = (u32)(r_ebp+0xfffffdc8u);
    /* 0050d0e4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50d0e9u); f_004a20f0();
    /* 0050d0e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050d0f0: lea ecx, [ebp - 0x234] */ r_ecx = (u32)(r_ebp+0xfffffdccu);
    /* 0050d0f6: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50d0fbu); f_00484470();
    /* 0050d0fb: push 0x79314c */ { u32 v = 0x79314cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d100: mov ecx, 0x793148 */ r_ecx = 0x793148u;
    /* 0050d105: call 0x4a2550 */ r_esp -= 4; W32(r_esp, 0x50d10au); f_004a2550();
    /* 0050d10a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0050d10d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d10f: je 0x50d12b */ if (fZ) goto L_0050d12b;
L_0050d111:; BB(0x0050d111);
    /* 0050d111: mov eax, dword ptr [0x793148] */ r_eax = R32((u32)(0x793148u));
    /* 0050d116: mov dword ptr [0x79314c], eax */ W32((u32)(0x79314cu), r_eax);
    /* 0050d11b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d121: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x50d126u); f_0047e420();
    /* 0050d126: mov dword ptr [0x793134], eax */ W32((u32)(0x793134u), r_eax);
L_0050d12b:; BB(0x0050d12b);
    /* 0050d12b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d131: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x50d136u); f_0047e420();
    /* 0050d136: mov esi, eax */ r_esi = r_eax;
    /* 0050d138: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d13e: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x50d143u); f_0047bbc0();
    /* 0050d143: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d145: jne 0x50d052 */ if (!fZ) goto L_0050d052;
L_0050d14b:; BB(0x0050d14b);
    /* 0050d14b: cmp dword ptr [0x793134], 0 */ {  u32 a = R32((u32)(0x793134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d152: jge 0x50d16b */ if ((fS==fO)) goto L_0050d16b;
L_0050d154:; BB(0x0050d154);
    /* 0050d154: push 0x372 */ { u32 v = 0x372u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d159: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d15e: push 0x6c13a0 */ { u32 v = 0x6c13a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d163: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50d168u); f_005e9f20();
    /* 0050d168: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050d16b:; BB(0x0050d16b);
    /* 0050d16b: mov edx, dword ptr [0x793134] */ r_edx = R32((u32)(0x793134u));
    /* 0050d171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d172: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d178: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50d17du); f_0047e400();
    /* 0050d17d: movsx eax, word ptr [0x7205d8] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7205d8u));
    /* 0050d184: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d188: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d18e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d193u); f_0047e3b0();
    /* 0050d193: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d195: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x50d19au); f_004c7050();
    /* 0050d19a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d19b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d1a1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d1a4: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x50d1a9u); f_004f5530();
    /* 0050d1a9: call 0x517770 */ r_esp -= 4; W32(r_esp, 0x50d1aeu); f_00517770();
    /* 0050d1ae: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050d1b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d1b9: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x50d1beu); f_0047e500();
    /* 0050d1be: cmp dword ptr [0x793034], 0 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d1c5: jge 0x50d1de */ if ((fS==fO)) goto L_0050d1de;
L_0050d1c7:; BB(0x0050d1c7);
    /* 0050d1c7: push 0x381 */ { u32 v = 0x381u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1cc: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1d1: push 0x6bc628 */ { u32 v = 0x6bc628u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1d6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50d1dbu); f_005e9f20();
    /* 0050d1db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050d1de:; BB(0x0050d1de);
    /* 0050d1de: mov edx, dword ptr [0x793034] */ r_edx = R32((u32)(0x793034u));
    /* 0050d1e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d1eb: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x50d1f0u); f_0047e490();
    /* 0050d1f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1f1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d1f7: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50d1fcu); f_0047e400();
    /* 0050d1fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d1fe: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d204: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050d206: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d20c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050d20f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d211u); call_ind(t); }
    /* 0050d211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d213: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d219: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050d21b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d221: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d224: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d226u); call_ind(t); }
    /* 0050d226: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d22b:; BB(0x0050d22b);
    /* 0050d22b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d231: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 0050d23b: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 0050d245: jmp 0x50d256 */ goto L_0050d256;
L_0050d247:; BB(0x0050d247);
    /* 0050d247: mov edx, dword ptr [0x793138] */ r_edx = R32((u32)(0x793138u));
    /* 0050d24d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050d250: mov dword ptr [0x793138], edx */ W32((u32)(0x793138u), r_edx);
L_0050d256:; BB(0x0050d256);
    /* 0050d256: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d25c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x50d261u); f_0047f950();
    /* 0050d261: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d267: jge 0x50d283 */ if ((fS==fO)) goto L_0050d283;
L_0050d269:; BB(0x0050d269);
    /* 0050d269: mov eax, dword ptr [0x793138] */ r_eax = R32((u32)(0x793138u));
    /* 0050d26e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d26f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d275: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50d27au); f_0047e390();
    /* 0050d27a: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d27c: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x50d281u); f_004dc490();
    /* 0050d281: jmp 0x50d247 */ goto L_0050d247;
L_0050d283:; BB(0x0050d283);
    /* 0050d283: mov byte ptr [0x793032], 0 */ W8((u32)(0x793032u), 0x0u);
    /* 0050d28a: movzx ecx, byte ptr [0x793030] */ r_ecx = (u32)R8((u32)(0x793030u));
    /* 0050d291: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d293: je 0x50d2c4 */ if (fZ) goto L_0050d2c4;
L_0050d295:; BB(0x0050d295);
    /* 0050d295: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d297: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d29d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050d29f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d2a5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050d2a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50d2aau); call_ind(t); }
    /* 0050d2aa: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d2ac: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d2b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050d2b4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d2ba: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d2bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d2bfu); call_ind(t); }
    /* 0050d2bf: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d2c4:; BB(0x0050d2c4);
    /* 0050d2c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d2ca: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x50d2cfu); f_0047d770();
    /* 0050d2cf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2d2: jne 0x50d2db */ if (!fZ) goto L_0050d2db;
L_0050d2d4:; BB(0x0050d2d4);
    /* 0050d2d4: call 0x5025c0 */ r_esp -= 4; W32(r_esp, 0x50d2d9u); f_005025c0();
    /* 0050d2d9: jmp 0x50d2f0 */ goto L_0050d2f0;
L_0050d2db:; BB(0x0050d2db);
    /* 0050d2db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d2e1: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50d2e6u); f_0047e190();
    /* 0050d2e6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2e9: jne 0x50d2f0 */ if (!fZ) goto L_0050d2f0;
L_0050d2eb:; BB(0x0050d2eb);
    /* 0050d2eb: call 0x502cf0 */ r_esp -= 4; W32(r_esp, 0x50d2f0u); f_00502cf0();
L_0050d2f0:; BB(0x0050d2f0);
    /* 0050d2f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d2f6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50d2fbu); f_0047e190();
    /* 0050d2fb: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d2fe: jne 0x50d33e */ if (!fZ) goto L_0050d33e;
L_0050d300:; BB(0x0050d300);
    /* 0050d300: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d306: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x50d30bu); f_0047bbc0();
    /* 0050d30b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d30c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d312: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50d317u); f_0047e400();
L_0050d317:; BB(0x0050d317);
    /* 0050d317: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d31d: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x50d322u); f_0047e440();
    /* 0050d322: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d328: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d32du); f_0047e3b0();
    /* 0050d32d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d32f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x50d334u); f_004c7010();
    /* 0050d334: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d337: jne 0x50d317 */ if (!fZ) goto L_0050d317;
L_0050d339:; BB(0x0050d339);
    /* 0050d339: jmp 0x50d550 */ goto L_0050d550;
L_0050d33e:; BB(0x0050d33e);
    /* 0050d33e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d343: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d348: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d34d: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d352: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d357: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 0050d35d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d35e: mov ecx, 0x79314c */ r_ecx = 0x79314cu;
    /* 0050d363: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x50d368u); f_004a2100();
    /* 0050d368: mov dword ptr [0x793134], 0xffffffff */ W32((u32)(0x793134u), 0xffffffffu);
    /* 0050d372: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d378: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x50d37du); f_0047bbc0();
    /* 0050d37d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d37e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d384: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50d389u); f_0047e400();
L_0050d389:; BB(0x0050d389);
    /* 0050d389: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d38f: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x50d394u); f_0047e440();
    /* 0050d394: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d39a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d39fu); f_0047e3b0();
    /* 0050d39f: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d3a1: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x50d3a6u); f_004c7010();
    /* 0050d3a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d3a9: jne 0x50d4ff */ if (!fZ) goto L_0050d4ff;
L_0050d3af:; BB(0x0050d3af);
    /* 0050d3af: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d3b5: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50d3bau); f_0047d6f0();
    /* 0050d3ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d3bd: jne 0x50d44a */ if (!fZ) goto L_0050d44a;
L_0050d3c3:; BB(0x0050d3c3);
    /* 0050d3c3: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 0050d3c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d3d0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d3d5u); f_0047e3b0();
    /* 0050d3d5: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d3d7: call 0x4c84a0 */ r_esp -= 4; W32(r_esp, 0x50d3dcu); f_004c84a0();
    /* 0050d3dc: mov dword ptr [ebp - 0x4d0], eax */ W32((u32)(r_ebp+0xfffffb30u), r_eax);
    /* 0050d3e2: mov eax, dword ptr [ebp - 0x4d0] */ r_eax = R32((u32)(r_ebp+0xfffffb30u));
    /* 0050d3e8: mov dword ptr [ebp - 0x4d4], eax */ W32((u32)(r_ebp+0xfffffb2cu), r_eax);
    /* 0050d3ee: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0050d3f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d3ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d401: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d403: lea ecx, [ebp - 0x244] */ r_ecx = (u32)(r_ebp+0xfffffdbcu);
    /* 0050d409: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d40a: mov ecx, dword ptr [ebp - 0x4d4] */ r_ecx = R32((u32)(r_ebp+0xfffffb2cu));
    /* 0050d410: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50d415u); f_00485940();
    /* 0050d415: mov dword ptr [ebp - 0x4d8], eax */ W32((u32)(r_ebp+0xfffffb28u), r_eax);
    /* 0050d41b: mov edx, dword ptr [ebp - 0x4d8] */ r_edx = R32((u32)(r_ebp+0xfffffb28u));
    /* 0050d421: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050d423: mov dword ptr [0x793148], eax */ W32((u32)(0x793148u), r_eax);
    /* 0050d428: lea ecx, [ebp - 0x244] */ r_ecx = (u32)(r_ebp+0xfffffdbcu);
    /* 0050d42e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50d433u); f_004a20f0();
    /* 0050d433: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050d43a: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 0050d440: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50d445u); f_00484470();
    /* 0050d445: jmp 0x50d4cd */ goto L_0050d4cd;
L_0050d44a:; BB(0x0050d44a);
    /* 0050d44a: lea ecx, [ebp - 0x24c] */ r_ecx = (u32)(r_ebp+0xfffffdb4u);
    /* 0050d450: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d451: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d457: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d45cu); f_0047e3b0();
    /* 0050d45c: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d45e: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50d463u); f_004c8300();
    /* 0050d463: mov dword ptr [ebp - 0x4dc], eax */ W32((u32)(r_ebp+0xfffffb24u), r_eax);
    /* 0050d469: mov edx, dword ptr [ebp - 0x4dc] */ r_edx = R32((u32)(r_ebp+0xfffffb24u));
    /* 0050d46f: mov dword ptr [ebp - 0x4e0], edx */ W32((u32)(r_ebp+0xfffffb20u), r_edx);
    /* 0050d475: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0050d47c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d47e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d480: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d482: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d484: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d486: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d488: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d48a: lea eax, [ebp - 0x250] */ r_eax = (u32)(r_ebp+0xfffffdb0u);
    /* 0050d490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d491: mov ecx, dword ptr [ebp - 0x4e0] */ r_ecx = R32((u32)(r_ebp+0xfffffb20u));
    /* 0050d497: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50d49cu); f_00485940();
    /* 0050d49c: mov dword ptr [ebp - 0x4e4], eax */ W32((u32)(r_ebp+0xfffffb1cu), r_eax);
    /* 0050d4a2: mov ecx, dword ptr [ebp - 0x4e4] */ r_ecx = R32((u32)(r_ebp+0xfffffb1cu));
    /* 0050d4a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050d4aa: mov dword ptr [0x793148], edx */ W32((u32)(0x793148u), r_edx);
    /* 0050d4b0: lea ecx, [ebp - 0x250] */ r_ecx = (u32)(r_ebp+0xfffffdb0u);
    /* 0050d4b6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50d4bbu); f_004a20f0();
    /* 0050d4bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050d4c2: lea ecx, [ebp - 0x24c] */ r_ecx = (u32)(r_ebp+0xfffffdb4u);
    /* 0050d4c8: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50d4cdu); f_00484470();
L_0050d4cd:; BB(0x0050d4cd);
    /* 0050d4cd: push 0x79314c */ { u32 v = 0x79314cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d4d2: mov ecx, 0x793148 */ r_ecx = 0x793148u;
    /* 0050d4d7: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x50d4dcu); f_004a2440();
    /* 0050d4dc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050d4df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d4e1: je 0x50d4ff */ if (fZ) goto L_0050d4ff;
L_0050d4e3:; BB(0x0050d4e3);
    /* 0050d4e3: mov ecx, dword ptr [0x793148] */ r_ecx = R32((u32)(0x793148u));
    /* 0050d4e9: mov dword ptr [0x79314c], ecx */ W32((u32)(0x79314cu), r_ecx);
    /* 0050d4ef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d4f5: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x50d4fau); f_0047e420();
    /* 0050d4fa: mov dword ptr [0x793134], eax */ W32((u32)(0x793134u), r_eax);
L_0050d4ff:; BB(0x0050d4ff);
    /* 0050d4ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d505: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x50d50au); f_0047e420();
    /* 0050d50a: mov esi, eax */ r_esi = r_eax;
    /* 0050d50c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d512: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x50d517u); f_0047bbc0();
    /* 0050d517: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d519: jne 0x50d389 */ if (!fZ) goto L_0050d389;
L_0050d51f:; BB(0x0050d51f);
    /* 0050d51f: cmp dword ptr [0x793134], 0 */ {  u32 a = R32((u32)(0x793134u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d526: jge 0x50d53f */ if ((fS==fO)) goto L_0050d53f;
L_0050d528:; BB(0x0050d528);
    /* 0050d528: push 0x3c6 */ { u32 v = 0x3c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d52d: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d532: push 0x6c13a0 */ { u32 v = 0x6c13a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d537: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50d53cu); f_005e9f20();
    /* 0050d53c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050d53f:; BB(0x0050d53f);
    /* 0050d53f: mov eax, dword ptr [0x793134] */ r_eax = R32((u32)(0x793134u));
    /* 0050d544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d545: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d54b: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50d550u); f_0047e400();
L_0050d550:; BB(0x0050d550);
    /* 0050d550: mov cx, word ptr [0x7205d8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x7205d8u))) & 0xffffu);
    /* 0050d557: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d558: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d55e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d563u); f_0047e3b0();
    /* 0050d563: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d565: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x50d56au); f_004c7050();
    /* 0050d56a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d56b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d571: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d574: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x50d579u); f_004f5530();
    /* 0050d579: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d57b: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d581: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050d583: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d589: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050d58c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50d58eu); call_ind(t); }
    /* 0050d58e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d590: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d596: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050d598: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d59e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d5a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d5a3u); call_ind(t); }
    /* 0050d5a3: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d5a8:; BB(0x0050d5a8);
    /* 0050d5a8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d5ae: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d5b3u); f_0047e3b0();
    /* 0050d5b3: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d5b5: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x50d5bau); f_004c6cb0();
    /* 0050d5ba: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d5bd: jne 0x50d5d0 */ if (!fZ) goto L_0050d5d0;
L_0050d5bf:; BB(0x0050d5bf);
    /* 0050d5bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d5c5: movzx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)R8((u32)(r_ecx+0xc8u));
    /* 0050d5cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d5ce: je 0x50d5e6 */ if (fZ) goto L_0050d5e6;
L_0050d5d0:; BB(0x0050d5d0);
    /* 0050d5d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5d2: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d5da: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d5dfu); f_0047e3b0();
    /* 0050d5df: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d5e1: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x50d5e6u); f_004dc4d0();
L_0050d5e6:; BB(0x0050d5e6);
    /* 0050d5e6: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050d5eb: mov byte ptr [eax + 0xe8], 1 */ W8((u32)(r_eax+0xe8u), 0x1u);
    /* 0050d5f2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d5f4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d5fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050d5fc: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d602: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050d605: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d607u); call_ind(t); }
    /* 0050d607: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d60d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d612u); f_0047e3b0();
    /* 0050d612: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d614: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x50d619u); f_004c6cb0();
    /* 0050d619: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d61c: jne 0x50d635 */ if (!fZ) goto L_0050d635;
L_0050d61e:; BB(0x0050d61e);
    /* 0050d61e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d620: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d626: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050d628: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d62e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d631: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d633u); call_ind(t); }
    /* 0050d633: jmp 0x50d654 */ goto L_0050d654;
L_0050d635:; BB(0x0050d635);
    /* 0050d635: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d63b: call 0x47cba0 */ r_esp -= 4; W32(r_esp, 0x50d640u); f_0047cba0();
    /* 0050d640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d641: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d647: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050d649: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d64f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d652: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d654u); call_ind(t); }
L_0050d654:; BB(0x0050d654);
    /* 0050d654: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d659:; BB(0x0050d659);
    /* 0050d659: movzx ecx, byte ptr [0x793109] */ r_ecx = (u32)R8((u32)(0x793109u));
    /* 0050d660: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d662: je 0x50d677 */ if (fZ) goto L_0050d677;
L_0050d664:; BB(0x0050d664);
    /* 0050d664: mov byte ptr [0x793109], 0 */ W8((u32)(0x793109u), 0x0u);
    /* 0050d66b: mov dword ptr [0x793130], 5 */ W32((u32)(0x793130u), 0x5u);
    /* 0050d675: jmp 0x50d681 */ goto L_0050d681;
L_0050d677:; BB(0x0050d677);
    /* 0050d677: call 0x517a30 */ r_esp -= 4; W32(r_esp, 0x50d67cu); f_00517a30();
    /* 0050d67c: mov dword ptr [0x793130], eax */ W32((u32)(0x793130u), r_eax);
L_0050d681:; BB(0x0050d681);
    /* 0050d681: cmp dword ptr [0x793130], 5 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d688: jne 0x50d856 */ if (!fZ) goto L_0050d856;
L_0050d68e:; BB(0x0050d68e);
    /* 0050d68e: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0050d694: cmp dword ptr [0x793100], 5 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d69b: jne 0x50d6a5 */ if (!fZ) goto L_0050d6a5;
L_0050d69d:; BB(0x0050d69d);
    /* 0050d69d: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0050d6a3: jmp 0x50d715 */ goto L_0050d715;
L_0050d6a5:; BB(0x0050d6a5);
    /* 0050d6a5: cmp dword ptr [0x793100], 2 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d6ac: jne 0x50d6b6 */ if (!fZ) goto L_0050d6b6;
L_0050d6ae:; BB(0x0050d6ae);
    /* 0050d6ae: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 0050d6b4: jmp 0x50d715 */ goto L_0050d715;
L_0050d6b6:; BB(0x0050d6b6);
    /* 0050d6b6: cmp dword ptr [0x793100], 1 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d6bd: jne 0x50d6c7 */ if (!fZ) goto L_0050d6c7;
L_0050d6bf:; BB(0x0050d6bf);
    /* 0050d6bf: mov word ptr [ebp - 0x1c], 1 */ W16((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0050d6c5: jmp 0x50d715 */ goto L_0050d715;
L_0050d6c7:; BB(0x0050d6c7);
    /* 0050d6c7: cmp dword ptr [0x793100], 4 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d6ce: jne 0x50d6d8 */ if (!fZ) goto L_0050d6d8;
L_0050d6d0:; BB(0x0050d6d0);
    /* 0050d6d0: mov word ptr [ebp - 0x1c], 2 */ W16((u32)(r_ebp+0xffffffe4u), 0x2u);
    /* 0050d6d6: jmp 0x50d715 */ goto L_0050d715;
L_0050d6d8:; BB(0x0050d6d8);
    /* 0050d6d8: cmp dword ptr [0x793100], 3 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d6df: jne 0x50d6e9 */ if (!fZ) goto L_0050d6e9;
L_0050d6e1:; BB(0x0050d6e1);
    /* 0050d6e1: mov word ptr [ebp - 0x1c], 1 */ W16((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0050d6e7: jmp 0x50d715 */ goto L_0050d715;
L_0050d6e9:; BB(0x0050d6e9);
    /* 0050d6e9: cmp dword ptr [0x793100], 0 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d6f0: jne 0x50d6fa */ if (!fZ) goto L_0050d6fa;
L_0050d6f2:; BB(0x0050d6f2);
    /* 0050d6f2: mov word ptr [ebp - 0x1c], 3 */ W16((u32)(r_ebp+0xffffffe4u), 0x3u);
    /* 0050d6f8: jmp 0x50d715 */ goto L_0050d715;
L_0050d6fa:; BB(0x0050d6fa);
    /* 0050d6fa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050d6fc: jne 0x50d715 */ if (!fZ) goto L_0050d715;
L_0050d6fe:; BB(0x0050d6fe);
    /* 0050d6fe: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d703: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d708: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d70d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50d712u); f_005e9f20();
    /* 0050d712: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050d715:; BB(0x0050d715);
    /* 0050d715: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d71b: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50d720u); f_0047d6b0();
    /* 0050d720: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d722: jne 0x50d788 */ if (!fZ) goto L_0050d788;
L_0050d724:; BB(0x0050d724);
    /* 0050d724: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d72a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50d72fu); f_0047e190();
    /* 0050d72f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050d732: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0050d734: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0050d736: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d739: cmp dword ptr [0x793078], eax */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d73f: jne 0x50d763 */ if (!fZ) goto L_0050d763;
L_0050d741:; BB(0x0050d741);
    /* 0050d741: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0050d745: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d748: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d74a: call 0x517310 */ r_esp -= 4; W32(r_esp, 0x50d74fu); f_00517310();
    /* 0050d74f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d750: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0050d756: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 0050d75c: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x50d761u); f_00467fe0();
    /* 0050d761: jmp 0x50d783 */ goto L_0050d783;
L_0050d763:; BB(0x0050d763);
    /* 0050d763: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0050d767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d768: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d76a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d76c: call 0x517310 */ r_esp -= 4; W32(r_esp, 0x50d771u); f_00517310();
    /* 0050d771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d772: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0050d778: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0050d77e: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x50d783u); f_00467fe0();
L_0050d783:; BB(0x0050d783);
    /* 0050d783: jmp 0x50d810 */ goto L_0050d810;
L_0050d788:; BB(0x0050d788);
    /* 0050d788: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d78e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d791: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50d796u); f_004f6640();
    /* 0050d796: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0050d799: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d79b: jne 0x50d7f4 */ if (!fZ) goto L_0050d7f4;
L_0050d79d:; BB(0x0050d79d);
    /* 0050d79d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d7a3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d7a6: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x50d7abu); f_004f67d0();
    /* 0050d7ab: mov esi, eax */ r_esi = r_eax;
    /* 0050d7ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d7b3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d7b8u); f_0047e3b0();
    /* 0050d7b8: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d7ba: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x50d7bfu); f_004c6a70();
    /* 0050d7bf: mov edi, eax */ r_edi = r_eax;
    /* 0050d7c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d7c7: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50d7ccu); f_0047bc20();
    /* 0050d7cc: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d7ce: mov eax, edi */ r_eax = r_edi;
    /* 0050d7d0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050d7d1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050d7d1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050d7d1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050d7d3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d7d5: jl 0x50d7f4 */ if ((fS!=fO)) goto L_0050d7f4;
L_0050d7d7:; BB(0x0050d7d7);
    /* 0050d7d7: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0050d7db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7e2: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 0050d7e7: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0050d7ed: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x50d7f2u); f_00467fe0();
    /* 0050d7f2: jmp 0x50d810 */ goto L_0050d810;
L_0050d7f4:; BB(0x0050d7f4);
    /* 0050d7f4: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0050d7f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7fd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050d7ff: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0050d805: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 0050d80b: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x50d810u); f_00467fe0();
L_0050d810:; BB(0x0050d810);
    /* 0050d810: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d816: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d81bu); f_0047e3b0();
    /* 0050d81b: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d81d: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x50d822u); f_004dc490();
    /* 0050d822: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d824: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d82a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050d82c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d832: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050d835: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d837u); call_ind(t); }
    /* 0050d837: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d839: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d83f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050d841: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d847: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d84a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d84cu); call_ind(t); }
    /* 0050d84c: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d856:; BB(0x0050d856);
    /* 0050d856: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d85c: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50d861u); f_0047d6b0();
    /* 0050d861: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d864: jne 0x50d88f */ if (!fZ) goto L_0050d88f;
L_0050d866:; BB(0x0050d866);
    /* 0050d866: cmp dword ptr [0x793130], 2 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d86d: je 0x50d878 */ if (fZ) goto L_0050d878;
L_0050d86f:; BB(0x0050d86f);
    /* 0050d86f: cmp dword ptr [0x793130], 4 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d876: jne 0x50d88f */ if (!fZ) goto L_0050d88f;
L_0050d878:; BB(0x0050d878);
    /* 0050d878: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d87e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d883u); f_0047e3b0();
    /* 0050d883: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d885: call 0x4c7970 */ r_esp -= 4; W32(r_esp, 0x50d88au); f_004c7970();
    /* 0050d88a: mov dword ptr [0x79305c], eax */ W32((u32)(0x79305cu), r_eax);
L_0050d88f:; BB(0x0050d88f);
    /* 0050d88f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d895: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d89au); f_0047e3b0();
    /* 0050d89a: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d89c: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x50d8a1u); f_004dc490();
    /* 0050d8a1: cmp dword ptr [0x793130], 2 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d8a8: jne 0x50d8fd */ if (!fZ) goto L_0050d8fd;
L_0050d8aa:; BB(0x0050d8aa);
    /* 0050d8aa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d8b0: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50d8b5u); f_0047d6b0();
    /* 0050d8b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d8b8: jne 0x50d8fd */ if (!fZ) goto L_0050d8fd;
L_0050d8ba:; BB(0x0050d8ba);
    /* 0050d8ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d8c0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d8c5u); f_0047e3b0();
    /* 0050d8c5: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d8c7: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x50d8ccu); f_004c6a70();
    /* 0050d8cc: mov esi, eax */ r_esi = r_eax;
    /* 0050d8ce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d8d4: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50d8d9u); f_0047bc20();
    /* 0050d8d9: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d8db: mov eax, esi */ r_eax = r_esi;
    /* 0050d8dd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050d8de: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0050d8de, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0050d8de, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0050d8e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050d8e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d8e9: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x50d8eeu); f_0047bd60();
    /* 0050d8ee: cmp dword ptr [ebp - 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d8f1: jge 0x50d8fd */ if ((fS==fO)) goto L_0050d8fd;
L_0050d8f3:; BB(0x0050d8f3);
    /* 0050d8f3: mov dword ptr [0x793130], 1 */ W32((u32)(0x793130u), 0x1u);
L_0050d8fd:; BB(0x0050d8fd);
    /* 0050d8fd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8ff: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d905: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050d907: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d90d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050d910: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50d912u); call_ind(t); }
    /* 0050d912: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d914: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d91a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050d91c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050d922: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050d925: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50d927u); call_ind(t); }
    /* 0050d927: jmp 0x516cb0 */ goto L_00516cb0;
L_0050d92c:; BB(0x0050d92c);
    /* 0050d92c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d932: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x50d937u); f_0047e280();
    /* 0050d937: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d939: jne 0x50e29c */ if (!fZ) goto L_0050e29c;
L_0050d93f:; BB(0x0050d93f);
    /* 0050d93f: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050d942: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x50d947u); f_00484300();
    /* 0050d947: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0050d94e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d954: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50d959u); f_0047d6f0();
    /* 0050d959: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d95c: jne 0x50d9b0 */ if (!fZ) goto L_0050d9b0;
L_0050d95e:; BB(0x0050d95e);
    /* 0050d95e: lea ecx, [ebp - 0x258] */ r_ecx = (u32)(r_ebp+0xfffffda8u);
    /* 0050d964: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d965: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d96b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d970u); f_0047e3b0();
    /* 0050d970: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d972: call 0x4c80b0 */ r_esp -= 4; W32(r_esp, 0x50d977u); f_004c80b0();
    /* 0050d977: mov dword ptr [ebp - 0x4e8], eax */ W32((u32)(r_ebp+0xfffffb18u), r_eax);
    /* 0050d97d: mov edx, dword ptr [ebp - 0x4e8] */ r_edx = R32((u32)(r_ebp+0xfffffb18u));
    /* 0050d983: mov dword ptr [ebp - 0x4ec], edx */ W32((u32)(r_ebp+0xfffffb14u), r_edx);
    /* 0050d989: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0050d98d: mov eax, dword ptr [ebp - 0x4ec] */ r_eax = R32((u32)(r_ebp+0xfffffb14u));
    /* 0050d993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d994: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050d997: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x50d99cu); f_00484490();
    /* 0050d99c: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0050d9a0: lea ecx, [ebp - 0x258] */ r_ecx = (u32)(r_ebp+0xfffffda8u);
    /* 0050d9a6: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50d9abu); f_00484470();
    /* 0050d9ab: jmp 0x50da5c */ goto L_0050da5c;
L_0050d9b0:; BB(0x0050d9b0);
    /* 0050d9b0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d9b6: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50d9bbu); f_0047d6f0();
    /* 0050d9bb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050d9be: jne 0x50da0f */ if (!fZ) goto L_0050da0f;
L_0050d9c0:; BB(0x0050d9c0);
    /* 0050d9c0: lea ecx, [ebp - 0x260] */ r_ecx = (u32)(r_ebp+0xfffffda0u);
    /* 0050d9c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9c7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050d9cd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50d9d2u); f_0047e3b0();
    /* 0050d9d2: mov ecx, eax */ r_ecx = r_eax;
    /* 0050d9d4: call 0x4c8210 */ r_esp -= 4; W32(r_esp, 0x50d9d9u); f_004c8210();
    /* 0050d9d9: mov dword ptr [ebp - 0x4f0], eax */ W32((u32)(r_ebp+0xfffffb10u), r_eax);
    /* 0050d9df: mov edx, dword ptr [ebp - 0x4f0] */ r_edx = R32((u32)(r_ebp+0xfffffb10u));
    /* 0050d9e5: mov dword ptr [ebp - 0x4f4], edx */ W32((u32)(r_ebp+0xfffffb0cu), r_edx);
    /* 0050d9eb: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0050d9ef: mov eax, dword ptr [ebp - 0x4f4] */ r_eax = R32((u32)(r_ebp+0xfffffb0cu));
    /* 0050d9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d9f6: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050d9f9: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x50d9feu); f_00484490();
    /* 0050d9fe: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0050da02: lea ecx, [ebp - 0x260] */ r_ecx = (u32)(r_ebp+0xfffffda0u);
    /* 0050da08: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50da0du); f_00484470();
    /* 0050da0d: jmp 0x50da5c */ goto L_0050da5c;
L_0050da0f:; BB(0x0050da0f);
    /* 0050da0f: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 0050da15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050da16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050da1c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50da21u); f_0047e3b0();
    /* 0050da21: mov ecx, eax */ r_ecx = r_eax;
    /* 0050da23: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x50da28u); f_004c7c40();
    /* 0050da28: mov dword ptr [ebp - 0x4f8], eax */ W32((u32)(r_ebp+0xfffffb08u), r_eax);
    /* 0050da2e: mov edx, dword ptr [ebp - 0x4f8] */ r_edx = R32((u32)(r_ebp+0xfffffb08u));
    /* 0050da34: mov dword ptr [ebp - 0x4fc], edx */ W32((u32)(r_ebp+0xfffffb04u), r_edx);
    /* 0050da3a: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0050da3e: mov eax, dword ptr [ebp - 0x4fc] */ r_eax = R32((u32)(r_ebp+0xfffffb04u));
    /* 0050da44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da45: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050da48: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x50da4du); f_00484490();
    /* 0050da4d: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0050da51: lea ecx, [ebp - 0x268] */ r_ecx = (u32)(r_ebp+0xfffffd98u);
    /* 0050da57: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50da5cu); f_00484470();
L_0050da5c:; BB(0x0050da5c);
    /* 0050da5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050da6a: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0050da6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050da6e: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050da71: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50da76u); f_00485940();
    /* 0050da76: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0050da7a: lea edx, [ebp - 0x269] */ r_edx = (u32)(r_ebp+0xfffffd97u);
    /* 0050da80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050da81: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0050da84: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x50da89u); f_004a2160();
    /* 0050da89: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050da8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050da8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050da92: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50da97u); f_0047e3b0();
    /* 0050da97: mov ecx, eax */ r_ecx = r_eax;
    /* 0050da99: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x50da9eu); f_004da4d0();
    /* 0050da9e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050daa4: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50daa9u); f_0047d6f0();
    /* 0050daa9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050daac: jne 0x50dc84 */ if (!fZ) goto L_0050dc84;
L_0050dab2:; BB(0x0050dab2);
    /* 0050dab2: cmp dword ptr [0x793078], 3 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dab9: jne 0x50dc31 */ if (!fZ) goto L_0050dc31;
L_0050dabf:; BB(0x0050dabf);
    /* 0050dabf: mov cx, word ptr [0x79312c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x79312cu))) & 0xffffu);
    /* 0050dac6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050daca: mov word ptr [0x79312c], cx */ W16((u32)(0x79312cu), (u16)r_ecx);
    /* 0050dad1: movsx edx, word ptr [0x79312c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79312cu));
    /* 0050dad8: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dadb: jle 0x50dae6 */ if ((fZ||fS!=fO)) goto L_0050dae6;
L_0050dadd:; BB(0x0050dadd);
    /* 0050dadd: mov word ptr [0x79312c], 1 */ W16((u32)(0x79312cu), 0x1u);
L_0050dae6:; BB(0x0050dae6);
    /* 0050dae6: movsx eax, word ptr [0x79312c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79312cu));
    /* 0050daed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050daf0: jne 0x50db4c */ if (!fZ) goto L_0050db4c;
L_0050daf2:; BB(0x0050daf2);
    /* 0050daf2: push 0x6c138c */ { u32 v = 0x6c138cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050daf7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dafcu); f_00630f40();
    /* 0050dafc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050daff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050db00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050db06: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050db0c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050db11: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050db17: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050db19: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050db1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50db21u); call_ind(t); }
    /* 0050db21: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050db26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050db2c: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050db32: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050db37: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050db3d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050db3f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050db45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50db47u); call_ind(t); }
    /* 0050db47: jmp 0x50dc2f */ goto L_0050dc2f;
L_0050db4c:; BB(0x0050db4c);
    /* 0050db4c: movsx ecx, word ptr [0x79312c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79312cu));
    /* 0050db53: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050db56: jne 0x50dbb0 */ if (!fZ) goto L_0050dbb0;
L_0050db58:; BB(0x0050db58);
    /* 0050db58: push 0x6c136c */ { u32 v = 0x6c136cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050db5d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50db62u); f_00630f40();
    /* 0050db62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050db65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050db66: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050db6c: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050db72: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050db78: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 0050db7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050db80: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050db86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50db88u); call_ind(t); }
    /* 0050db88: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050db8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050db93: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050db99: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050db9e: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050dba4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dba6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dbac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dbaeu); call_ind(t); }
    /* 0050dbae: jmp 0x50dc2f */ goto L_0050dc2f;
L_0050dbb0:; BB(0x0050dbb0);
    /* 0050dbb0: movsx ecx, word ptr [0x79312c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79312cu));
    /* 0050dbb7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dbba: jne 0x50dc14 */ if (!fZ) goto L_0050dc14;
L_0050dbbc:; BB(0x0050dbbc);
    /* 0050dbbc: push 0x6c134c */ { u32 v = 0x6c134cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbc1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dbc6u); f_00630f40();
    /* 0050dbc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dbc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbca: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050dbd0: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050dbd6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dbdc: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 0050dbe2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050dbe4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dbea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dbecu); call_ind(t); }
    /* 0050dbec: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dbf1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dbf7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050dbfd: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dc02: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050dc08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dc0a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dc10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dc12u); call_ind(t); }
    /* 0050dc12: jmp 0x50dc2f */ goto L_0050dc2f;
L_0050dc14:; BB(0x0050dc14);
    /* 0050dc14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050dc16: jne 0x50dc2f */ if (!fZ) goto L_0050dc2f;
L_0050dc18:; BB(0x0050dc18);
    /* 0050dc18: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0050dc1d: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dc22: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dc27: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50dc2cu); f_005e9f20();
    /* 0050dc2c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050dc2f:; BB(0x0050dc2f);
    /* 0050dc2f: jmp 0x50dc7f */ goto L_0050dc7f;
L_0050dc31:; BB(0x0050dc31);
    /* 0050dc31: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dc36: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dc3b: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050dc41: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050dc47: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050dc4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050dc4f: mov ecx, eax */ r_ecx = r_eax;
    /* 0050dc51: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dc57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dc59u); call_ind(t); }
    /* 0050dc59: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dc5e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dc64: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050dc6a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dc6f: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050dc75: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dc77: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dc7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dc7fu); call_ind(t); }
L_0050dc7f:; BB(0x0050dc7f);
    /* 0050dc7f: jmp 0x50e271 */ goto L_0050e271;
L_0050dc84:; BB(0x0050dc84);
    /* 0050dc84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dc8a: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50dc8fu); f_0047d6f0();
    /* 0050dc8f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dc92: jne 0x50de88 */ if (!fZ) goto L_0050de88;
L_0050dc98:; BB(0x0050dc98);
    /* 0050dc98: cmp dword ptr [0x793078], 3 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dc9f: jne 0x50de35 */ if (!fZ) goto L_0050de35;
L_0050dca5:; BB(0x0050dca5);
    /* 0050dca5: mov cx, word ptr [0x793128] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793128u))) & 0xffffu);
    /* 0050dcac: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050dcb0: mov word ptr [0x793128], cx */ W16((u32)(0x793128u), (u16)r_ecx);
    /* 0050dcb7: movsx edx, word ptr [0x793128] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793128u));
    /* 0050dcbe: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050dcc1: jle 0x50dccc */ if ((fZ||fS!=fO)) goto L_0050dccc;
L_0050dcc3:; BB(0x0050dcc3);
    /* 0050dcc3: mov word ptr [0x793128], 1 */ W16((u32)(0x793128u), 0x1u);
L_0050dccc:; BB(0x0050dccc);
    /* 0050dccc: movsx eax, word ptr [0x793128] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793128u));
    /* 0050dcd3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dcd6: jne 0x50dd3b */ if (!fZ) goto L_0050dd3b;
L_0050dcd8:; BB(0x0050dcd8);
    /* 0050dcd8: push 0x6c132c */ { u32 v = 0x6c132cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050dcdd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dce2u); f_00630f40();
    /* 0050dce2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dce6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dcec: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050dcf2: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dcf7: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050dcfd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dcff: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dd05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dd07u); call_ind(t); }
    /* 0050dd07: push 0x6c130c */ { u32 v = 0x6c130cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd0c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dd11u); f_00630f40();
    /* 0050dd11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dd14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd15: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dd1b: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050dd21: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dd26: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050dd2c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dd2e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dd34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dd36u); call_ind(t); }
    /* 0050dd36: jmp 0x50de33 */ goto L_0050de33;
L_0050dd3b:; BB(0x0050dd3b);
    /* 0050dd3b: movsx ecx, word ptr [0x793128] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793128u));
    /* 0050dd42: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dd45: jne 0x50ddab */ if (!fZ) goto L_0050ddab;
L_0050dd47:; BB(0x0050dd47);
    /* 0050dd47: push 0x6c132c */ { u32 v = 0x6c132cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd4c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dd51u); f_00630f40();
    /* 0050dd51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dd54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd55: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050dd5b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050dd61: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dd67: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 0050dd6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050dd6f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dd75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dd77u); call_ind(t); }
    /* 0050dd77: push 0x6c12e8 */ { u32 v = 0x6c12e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd7c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dd81u); f_00630f40();
    /* 0050dd81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dd84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dd85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dd8b: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050dd91: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dd96: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050dd9c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dd9e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dda4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dda6u); call_ind(t); }
    /* 0050dda6: jmp 0x50de33 */ goto L_0050de33;
L_0050ddab:; BB(0x0050ddab);
    /* 0050ddab: movsx ecx, word ptr [0x793128] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793128u));
    /* 0050ddb2: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ddb5: jne 0x50de18 */ if (!fZ) goto L_0050de18;
L_0050ddb7:; BB(0x0050ddb7);
    /* 0050ddb7: push 0x6c130c */ { u32 v = 0x6c130cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ddbc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50ddc1u); f_00630f40();
    /* 0050ddc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ddc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ddc5: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050ddcb: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050ddd1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ddd7: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 0050dddd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050dddf: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dde5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dde7u); call_ind(t); }
    /* 0050dde7: push 0x6c12e8 */ { u32 v = 0x6c12e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ddec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50ddf1u); f_00630f40();
    /* 0050ddf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ddf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ddf5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ddfb: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050de01: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050de06: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050de0c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050de0e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050de14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50de16u); call_ind(t); }
    /* 0050de16: jmp 0x50de33 */ goto L_0050de33;
L_0050de18:; BB(0x0050de18);
    /* 0050de18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050de1a: jne 0x50de33 */ if (!fZ) goto L_0050de33;
L_0050de1c:; BB(0x0050de1c);
    /* 0050de1c: push 0x47a */ { u32 v = 0x47au; r_esp -= 4; W32(r_esp, v); }
    /* 0050de21: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de26: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de2b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50de30u); f_005e9f20();
    /* 0050de30: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050de33:; BB(0x0050de33);
    /* 0050de33: jmp 0x50de83 */ goto L_0050de83;
L_0050de35:; BB(0x0050de35);
    /* 0050de35: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de3a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050de3f: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050de45: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050de4b: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050de51: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050de53: mov ecx, eax */ r_ecx = r_eax;
    /* 0050de55: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050de5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50de5du); call_ind(t); }
    /* 0050de5d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050de62: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050de68: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050de6e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050de73: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050de79: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050de7b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050de81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50de83u); call_ind(t); }
L_0050de83:; BB(0x0050de83);
    /* 0050de83: jmp 0x50e271 */ goto L_0050e271;
L_0050de88:; BB(0x0050de88);
    /* 0050de88: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050de8e: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x50de93u); f_0047d770();
    /* 0050de93: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050de96: jne 0x50df56 */ if (!fZ) goto L_0050df56;
L_0050de9c:; BB(0x0050de9c);
    /* 0050de9c: cmp dword ptr [0x793078], 3 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050dea3: jne 0x50df05 */ if (!fZ) goto L_0050df05;
L_0050dea5:; BB(0x0050dea5);
    /* 0050dea5: push 0x6c12c0 */ { u32 v = 0x6c12c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050deaa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50deafu); f_00630f40();
    /* 0050deaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050deb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050deb3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050deb9: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050debf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dec4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050deca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050decc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050ded2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ded4u); call_ind(t); }
    /* 0050ded4: push 0x6c12a0 */ { u32 v = 0x6c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ded9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dedeu); f_00630f40();
    /* 0050dede: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dee2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dee8: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050deee: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050def3: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050def9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050defb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050df01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50df03u); call_ind(t); }
    /* 0050df03: jmp 0x50df51 */ goto L_0050df51;
L_0050df05:; BB(0x0050df05);
    /* 0050df05: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050df0a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050df10: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050df16: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050df1b: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050df21: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050df23: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050df29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50df2bu); call_ind(t); }
    /* 0050df2b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050df30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050df36: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050df3c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050df41: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050df47: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050df49: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050df4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50df51u); call_ind(t); }
L_0050df51:; BB(0x0050df51);
    /* 0050df51: jmp 0x50e271 */ goto L_0050e271;
L_0050df56:; BB(0x0050df56);
    /* 0050df56: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050df5c: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x50df61u); f_0047d770();
    /* 0050df61: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050df64: jne 0x50e024 */ if (!fZ) goto L_0050e024;
L_0050df6a:; BB(0x0050df6a);
    /* 0050df6a: cmp dword ptr [0x793078], 3 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050df71: jne 0x50dfd3 */ if (!fZ) goto L_0050dfd3;
L_0050df73:; BB(0x0050df73);
    /* 0050df73: push 0x6c130c */ { u32 v = 0x6c130cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050df78: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50df7du); f_00630f40();
    /* 0050df7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050df80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050df81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050df87: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050df8d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050df92: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050df98: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050df9a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dfa0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dfa2u); call_ind(t); }
    /* 0050dfa2: push 0x6c1278 */ { u32 v = 0x6c1278u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dfa7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50dfacu); f_00630f40();
    /* 0050dfac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050dfaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050dfb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dfb6: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050dfbc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dfc1: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050dfc7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dfc9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dfcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dfd1u); call_ind(t); }
    /* 0050dfd1: jmp 0x50e01f */ goto L_0050e01f;
L_0050dfd3:; BB(0x0050dfd3);
    /* 0050dfd3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dfd8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050dfde: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050dfe4: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050dfe9: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050dfef: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050dff1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050dff7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50dff9u); call_ind(t); }
    /* 0050dff9: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050dffe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e004: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e00a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e00f: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e015: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e017: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e01d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e01fu); call_ind(t); }
L_0050e01f:; BB(0x0050e01f);
    /* 0050e01f: jmp 0x50e271 */ goto L_0050e271;
L_0050e024:; BB(0x0050e024);
    /* 0050e024: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e02a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50e02fu); f_0047e190();
    /* 0050e02f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e032: jne 0x50e0e9 */ if (!fZ) goto L_0050e0e9;
L_0050e038:; BB(0x0050e038);
    /* 0050e038: cmp dword ptr [0x793078], 2 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e03f: jne 0x50e098 */ if (!fZ) goto L_0050e098;
L_0050e041:; BB(0x0050e041);
    /* 0050e041: push 0x6c12a0 */ { u32 v = 0x6c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e046: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e04bu); f_00630f40();
    /* 0050e04b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e04e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e04f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e055: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e05b: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e060: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e066: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e068: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e06e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e070u); call_ind(t); }
    /* 0050e070: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e075: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e07b: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e081: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e086: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e08c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e08e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e094: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e096u); call_ind(t); }
    /* 0050e096: jmp 0x50e0e4 */ goto L_0050e0e4;
L_0050e098:; BB(0x0050e098);
    /* 0050e098: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e09d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e0a3: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e0a9: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e0ae: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e0b4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e0b6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e0bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e0beu); call_ind(t); }
    /* 0050e0be: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e0c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e0c9: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e0cf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e0d4: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e0da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e0dc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e0e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e0e4u); call_ind(t); }
L_0050e0e4:; BB(0x0050e0e4);
    /* 0050e0e4: jmp 0x50e271 */ goto L_0050e271;
L_0050e0e9:; BB(0x0050e0e9);
    /* 0050e0e9: cmp dword ptr [0x793078], 3 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e0f0: jne 0x50e1b6 */ if (!fZ) goto L_0050e1b6;
L_0050e0f6:; BB(0x0050e0f6);
    /* 0050e0f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e0fc: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e101u); f_0047d6b0();
    /* 0050e101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e103: jne 0x50e15c */ if (!fZ) goto L_0050e15c;
L_0050e105:; BB(0x0050e105);
    /* 0050e105: push 0x6c1254 */ { u32 v = 0x6c1254u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e10a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e10fu); f_00630f40();
    /* 0050e10f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e113: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e119: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e11f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e124: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e12a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e12c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e132: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e134u); call_ind(t); }
    /* 0050e134: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e139: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e13f: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e145: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e14a: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e150: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e152: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e158: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e15au); call_ind(t); }
    /* 0050e15a: jmp 0x50e1b1 */ goto L_0050e1b1;
L_0050e15c:; BB(0x0050e15c);
    /* 0050e15c: push 0x6c12a0 */ { u32 v = 0x6c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e161: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e166u); f_00630f40();
    /* 0050e166: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e16a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e170: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e176: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e17b: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e181: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e183: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e189: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e18bu); call_ind(t); }
    /* 0050e18b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e190: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e196: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e19c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e1a1: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e1a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e1a9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e1af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e1b1u); call_ind(t); }
L_0050e1b1:; BB(0x0050e1b1);
    /* 0050e1b1: jmp 0x50e271 */ goto L_0050e271;
L_0050e1b6:; BB(0x0050e1b6);
    /* 0050e1b6: cmp dword ptr [0x793078], 4 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e1bd: jne 0x50e225 */ if (!fZ) goto L_0050e225;
L_0050e1bf:; BB(0x0050e1bf);
    /* 0050e1bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e1c5: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e1cau); f_0047d6b0();
    /* 0050e1ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e1cc: jne 0x50e225 */ if (!fZ) goto L_0050e225;
L_0050e1ce:; BB(0x0050e1ce);
    /* 0050e1ce: push 0x6c12a0 */ { u32 v = 0x6c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1d3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e1d8u); f_00630f40();
    /* 0050e1d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e1dc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e1e2: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e1e8: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e1ed: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e1f3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e1f5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e1fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e1fdu); call_ind(t); }
    /* 0050e1fd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e202: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e208: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e20e: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e213: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e219: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e21b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e221: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e223u); call_ind(t); }
    /* 0050e223: jmp 0x50e271 */ goto L_0050e271;
L_0050e225:; BB(0x0050e225);
    /* 0050e225: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e22a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e230: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e236: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e23b: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e241: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e243: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e249: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e24bu); call_ind(t); }
    /* 0050e24b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e250: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e256: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e25c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e261: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e267: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e269: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e26f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e271u); call_ind(t); }
L_0050e271:; BB(0x0050e271);
    /* 0050e271: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e277: call 0x47ec40 */ r_esp -= 4; W32(r_esp, 0x50e27cu); f_0047ec40();
    /* 0050e27c: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0050e280: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0050e283: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50e288u); f_004a20f0();
    /* 0050e288: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050e28f: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050e292: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50e297u); f_00484470();
    /* 0050e297: jmp 0x50e52c */ goto L_0050e52c;
L_0050e29c:; BB(0x0050e29c);
    /* 0050e29c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e2a2: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x50e2a7u); f_0047e280();
    /* 0050e2a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e2aa: je 0x50e2c3 */ if (fZ) goto L_0050e2c3;
L_0050e2ac:; BB(0x0050e2ac);
    /* 0050e2ac: push 0x4c8 */ { u32 v = 0x4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2b1: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2b6: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2bb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50e2c0u); f_005e9f20();
    /* 0050e2c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050e2c3:; BB(0x0050e2c3);
    /* 0050e2c3: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0050e2c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2c7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e2cd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e2d2u); f_0047e3b0();
    /* 0050e2d2: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e2d4: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x50e2d9u); f_004c7c40();
    /* 0050e2d9: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0050e2e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2ee: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0050e2f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e2f2: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0050e2f5: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50e2fau); f_00485940();
    /* 0050e2fa: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0050e2fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e300: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e302: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e304: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e306: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e308: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e30a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e30c: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0050e30f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e310: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0050e313: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50e318u); f_00485940();
    /* 0050e318: mov byte ptr [ebp - 4], 0xe */ W8((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0050e31c: lea edx, [ebp - 0x26a] */ r_edx = (u32)(r_ebp+0xfffffd96u);
    /* 0050e322: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e323: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0050e326: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x50e32bu); f_004a2160();
    /* 0050e32b: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0050e32d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e32e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e334: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e339u); f_0047e3b0();
    /* 0050e339: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e33b: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x50e340u); f_004da4d0();
    /* 0050e340: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050e343: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e344: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e34a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e34fu); f_0047e3b0();
    /* 0050e34f: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e351: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x50e356u); f_004db070();
    /* 0050e356: cmp dword ptr [0x793078], 3 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e35d: jne 0x50e436 */ if (!fZ) goto L_0050e436;
L_0050e363:; BB(0x0050e363);
    /* 0050e363: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e369: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e36eu); f_0047d6b0();
    /* 0050e36e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e370: jne 0x50e3d3 */ if (!fZ) goto L_0050e3d3;
L_0050e372:; BB(0x0050e372);
    /* 0050e372: push 0x6c1254 */ { u32 v = 0x6c1254u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e377: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e37cu); f_00630f40();
    /* 0050e37c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e37f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e380: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0050e386: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0050e38c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e392: mov ecx, dword ptr [ecx + 0xdc] */ r_ecx = R32((u32)(r_ecx+0xdcu));
    /* 0050e398: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050e39a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e3a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e3a2u); call_ind(t); }
    /* 0050e3a2: push 0x6bc574 */ { u32 v = 0x6bc574u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e3a7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e3acu); f_00630f40();
    /* 0050e3ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e3af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e3b0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e3b6: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e3bc: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e3c1: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e3c7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e3c9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e3cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e3d1u); call_ind(t); }
    /* 0050e3d1: jmp 0x50e431 */ goto L_0050e431;
L_0050e3d3:; BB(0x0050e3d3);
    /* 0050e3d3: push 0x6c12a0 */ { u32 v = 0x6c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e3d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e3ddu); f_00630f40();
    /* 0050e3dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e3e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e3e7: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e3ed: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e3f2: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e3f8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e3fa: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e400: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e402u); call_ind(t); }
    /* 0050e402: push 0x6bc574 */ { u32 v = 0x6bc574u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e407: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e40cu); f_00630f40();
    /* 0050e40c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e40f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e410: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e416: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e41c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e421: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e427: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e429: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e42f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e431u); call_ind(t); }
L_0050e431:; BB(0x0050e431);
    /* 0050e431: jmp 0x50e4fa */ goto L_0050e4fa;
L_0050e436:; BB(0x0050e436);
    /* 0050e436: cmp dword ptr [0x793078], 4 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e43d: jne 0x50e4ae */ if (!fZ) goto L_0050e4ae;
L_0050e43f:; BB(0x0050e43f);
    /* 0050e43f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e445: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e44au); f_0047d6b0();
    /* 0050e44a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e44c: jne 0x50e4ae */ if (!fZ) goto L_0050e4ae;
L_0050e44e:; BB(0x0050e44e);
    /* 0050e44e: push 0x6c12a0 */ { u32 v = 0x6c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e453: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e458u); f_00630f40();
    /* 0050e458: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e45c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e462: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e468: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e46d: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e473: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e475: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e47b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e47du); call_ind(t); }
    /* 0050e47d: push 0x6bc574 */ { u32 v = 0x6bc574u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e482: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x50e487u); f_00630f40();
    /* 0050e487: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e48b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e491: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e497: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e49c: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e4a2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e4a4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e4aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e4acu); call_ind(t); }
    /* 0050e4ac: jmp 0x50e4fa */ goto L_0050e4fa;
L_0050e4ae:; BB(0x0050e4ae);
    /* 0050e4ae: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e4b9: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 0050e4bf: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e4c4: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0050e4ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e4cc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e4d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e4d4u); call_ind(t); }
    /* 0050e4d4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e4d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e4df: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0050e4e5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0050e4ea: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0050e4f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0050e4f2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0050e4f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e4fau); call_ind(t); }
L_0050e4fa:; BB(0x0050e4fa);
    /* 0050e4fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e500: call 0x47ec40 */ r_esp -= 4; W32(r_esp, 0x50e505u); f_0047ec40();
    /* 0050e505: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0050e509: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0050e50c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50e511u); f_004a20f0();
    /* 0050e511: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0050e515: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0050e518: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50e51du); f_004a20f0();
    /* 0050e51d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050e524: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0050e527: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50e52cu); f_00484470();
L_0050e52c:; BB(0x0050e52c);
    /* 0050e52c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e52e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e534: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050e536: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e53c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050e53f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e541u); call_ind(t); }
    /* 0050e541: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e543: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e549: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050e54b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e551: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050e554: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e556u); call_ind(t); }
    /* 0050e556: jmp 0x516cb0 */ goto L_00516cb0;
L_0050e55b:; BB(0x0050e55b);
    /* 0050e55b: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0050e561: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0050e567: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x50e56cu); f_00519a20();
    /* 0050e56c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e56e: je 0x50e7c2 */ if (fZ) goto L_0050e7c2;
L_0050e574:; BB(0x0050e574);
    /* 0050e574: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0050e57a: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 0050e580: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x50e585u); f_00519a20();
    /* 0050e585: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e588: jne 0x50e6f8 */ if (!fZ) goto L_0050e6f8;
L_0050e58e:; BB(0x0050e58e);
    /* 0050e58e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e594: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e597: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50e59cu); f_004f6640();
    /* 0050e59c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050e59f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e5a1: je 0x50e5af */ if (fZ) goto L_0050e5af;
L_0050e5a3:; BB(0x0050e5a3);
    /* 0050e5a3: mov dword ptr [0x793130], 2 */ W32((u32)(0x793130u), 0x2u);
    /* 0050e5ad: jmp 0x50e5b9 */ goto L_0050e5b9;
L_0050e5af:; BB(0x0050e5af);
    /* 0050e5af: mov dword ptr [0x793130], 4 */ W32((u32)(0x793130u), 0x4u);
L_0050e5b9:; BB(0x0050e5b9);
    /* 0050e5b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e5bf: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e5c4u); f_0047d6b0();
    /* 0050e5c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e5c7: jne 0x50e6f3 */ if (!fZ) goto L_0050e6f3;
L_0050e5cd:; BB(0x0050e5cd);
    /* 0050e5cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e5d3: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x50e5d8u); f_0047bd60();
    /* 0050e5d8: mov esi, eax */ r_esi = r_eax;
    /* 0050e5da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e5e0: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50e5e5u); f_0047bc20();
    /* 0050e5e5: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e5e8: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0050e5eb: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x50e5f0u); f_00516dd0();
    /* 0050e5f0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050e5f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e5f5: je 0x50e617 */ if (fZ) goto L_0050e617;
L_0050e5f7:; BB(0x0050e5f7);
    /* 0050e5f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e5fd: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x50e602u); f_0047bde0();
    /* 0050e602: mov esi, eax */ r_esi = r_eax;
    /* 0050e604: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e60a: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50e60fu); f_0047bc20();
    /* 0050e60f: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e612: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 0050e615: jmp 0x50e635 */ goto L_0050e635;
L_0050e617:; BB(0x0050e617);
    /* 0050e617: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e61d: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x50e622u); f_0047bda0();
    /* 0050e622: mov esi, eax */ r_esi = r_eax;
    /* 0050e624: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e62a: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50e62fu); f_0047bc20();
    /* 0050e62f: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e632: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
L_0050e635:; BB(0x0050e635);
    /* 0050e635: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0050e63c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e642: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e647u); f_0047d6b0();
    /* 0050e647: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e64a: jne 0x50e683 */ if (!fZ) goto L_0050e683;
L_0050e64c:; BB(0x0050e64c);
    /* 0050e64c: cmp dword ptr [0x793100], 2 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e653: je 0x50e65e */ if (fZ) goto L_0050e65e;
L_0050e655:; BB(0x0050e655);
    /* 0050e655: cmp dword ptr [0x793100], 4 */ {  u32 a = R32((u32)(0x793100u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e65c: jne 0x50e683 */ if (!fZ) goto L_0050e683;
L_0050e65e:; BB(0x0050e65e);
    /* 0050e65e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e664: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e669u); f_0047e3b0();
    /* 0050e669: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e66b: call 0x4c7970 */ r_esp -= 4; W32(r_esp, 0x50e670u); f_004c7970();
    /* 0050e670: mov esi, eax */ r_esi = r_eax;
    /* 0050e672: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e678: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50e67du); f_0047bc20();
    /* 0050e67d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050e680: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
L_0050e683:; BB(0x0050e683);
    /* 0050e683: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e689: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e68c: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x50e691u); f_004f6690();
    /* 0050e691: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0050e694: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e696: je 0x50e6c4 */ if (fZ) goto L_0050e6c4;
L_0050e698:; BB(0x0050e698);
    /* 0050e698: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e69e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e6a1: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x50e6a6u); f_004f66e0();
    /* 0050e6a6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050e6a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e6ab: jne 0x50e6c4 */ if (!fZ) goto L_0050e6c4;
L_0050e6ad:; BB(0x0050e6ad);
    /* 0050e6ad: push 0x514 */ { u32 v = 0x514u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e6b2: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e6b7: push 0x6bc550 */ { u32 v = 0x6bc550u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e6bc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50e6c1u); f_005e9f20();
    /* 0050e6c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050e6c4:; BB(0x0050e6c4);
    /* 0050e6c4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e6c6: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e6cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050e6ce: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e6d4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050e6d7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50e6d9u); call_ind(t); }
    /* 0050e6d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e6db: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e6e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050e6e3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e6e9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050e6ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e6eeu); call_ind(t); }
    /* 0050e6ee: jmp 0x516cb0 */ goto L_00516cb0;
L_0050e6f3:; BB(0x0050e6f3);
    /* 0050e6f3: jmp 0x50e78b */ goto L_0050e78b;
L_0050e6f8:; BB(0x0050e6f8);
    /* 0050e6f8: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0050e6fe: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0050e704: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x50e709u); f_00519a20();
    /* 0050e709: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e70c: jne 0x50e73b */ if (!fZ) goto L_0050e73b;
L_0050e70e:; BB(0x0050e70e);
    /* 0050e70e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e714: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e717: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50e71cu); f_004f6640();
    /* 0050e71c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0050e71f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e721: je 0x50e72f */ if (fZ) goto L_0050e72f;
L_0050e723:; BB(0x0050e723);
    /* 0050e723: mov dword ptr [0x793130], 1 */ W32((u32)(0x793130u), 0x1u);
    /* 0050e72d: jmp 0x50e739 */ goto L_0050e739;
L_0050e72f:; BB(0x0050e72f);
    /* 0050e72f: mov dword ptr [0x793130], 3 */ W32((u32)(0x793130u), 0x3u);
L_0050e739:; BB(0x0050e739);
    /* 0050e739: jmp 0x50e78b */ goto L_0050e78b;
L_0050e73b:; BB(0x0050e73b);
    /* 0050e73b: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 0050e740: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0050e746: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x50e74bu); f_00519a20();
    /* 0050e74b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e74e: jne 0x50e75c */ if (!fZ) goto L_0050e75c;
L_0050e750:; BB(0x0050e750);
    /* 0050e750: mov dword ptr [0x793130], 0 */ W32((u32)(0x793130u), 0x0u);
    /* 0050e75a: jmp 0x50e78b */ goto L_0050e78b;
L_0050e75c:; BB(0x0050e75c);
    /* 0050e75c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e75e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e764: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050e766: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e76c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050e76f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e771u); call_ind(t); }
    /* 0050e771: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e773: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e779: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050e77b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e781: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050e784: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e786u); call_ind(t); }
    /* 0050e786: jmp 0x516cb0 */ goto L_00516cb0;
L_0050e78b:; BB(0x0050e78b);
    /* 0050e78b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0050e78d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e793: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050e795: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e79b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050e79e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e7a0u); call_ind(t); }
    /* 0050e7a0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e7a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7a7: mov edx, dword ptr [0x793130] */ r_edx = R32((u32)(0x793130u));
    /* 0050e7ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e7b4: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e7b9u); f_0047e3b0();
    /* 0050e7b9: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e7bb: call 0x4cc890 */ r_esp -= 4; W32(r_esp, 0x50e7c0u); f_004cc890();
    /* 0050e7c0: jmp 0x50e7ec */ goto L_0050e7ec;
L_0050e7c2:; BB(0x0050e7c2);
    /* 0050e7c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7c4: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e7ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050e7cc: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e7d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050e7d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e7d7u); call_ind(t); }
    /* 0050e7d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e7d9: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e7df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050e7e1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e7e7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050e7ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e7ecu); call_ind(t); }
L_0050e7ec:; BB(0x0050e7ec);
    /* 0050e7ec: jmp 0x516cb0 */ goto L_00516cb0;
L_0050e7f6:; BB(0x0050e7f6);
    /* 0050e7f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e7fc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e801u); f_0047e3b0();
    /* 0050e801: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e803: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x50e808u); f_004da890();
    /* 0050e808: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e80e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e813u); f_0047e3b0();
    /* 0050e813: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e815: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x50e81au); f_004db610();
    /* 0050e81a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e820: call 0x47ec50 */ r_esp -= 4; W32(r_esp, 0x50e825u); f_0047ec50();
    /* 0050e825: cmp dword ptr [0x793130], 1 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e82c: jne 0x50e860 */ if (!fZ) goto L_0050e860;
L_0050e82e:; BB(0x0050e82e);
    /* 0050e82e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e830: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e832: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e838: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e83du); f_0047e3b0();
    /* 0050e83d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e83f: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x50e844u); f_004dc4d0();
    /* 0050e844: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e84a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e84d: call 0x4f5760 */ r_esp -= 4; W32(r_esp, 0x50e852u); f_004f5760();
    /* 0050e852: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0050e855: mov dword ptr [0x793034], ecx */ W32((u32)(0x793034u), r_ecx);
    /* 0050e85b: jmp 0x50e9b3 */ goto L_0050e9b3;
L_0050e860:; BB(0x0050e860);
    /* 0050e860: cmp dword ptr [0x793130], 2 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e867: jne 0x50e8b2 */ if (!fZ) goto L_0050e8b2;
L_0050e869:; BB(0x0050e869);
    /* 0050e869: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e86f: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e874u); f_0047d6b0();
    /* 0050e874: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e877: jne 0x50e891 */ if (!fZ) goto L_0050e891;
L_0050e879:; BB(0x0050e879);
    /* 0050e879: mov edx, dword ptr [0x79305c] */ r_edx = R32((u32)(0x79305cu));
    /* 0050e87f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e880: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e882: call 0x5170a0 */ r_esp -= 4; W32(r_esp, 0x50e887u); f_005170a0();
    /* 0050e887: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e88a: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050e88f: jmp 0x50e8a2 */ goto L_0050e8a2;
L_0050e891:; BB(0x0050e891);
    /* 0050e891: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e895: call 0x5170a0 */ r_esp -= 4; W32(r_esp, 0x50e89au); f_005170a0();
    /* 0050e89a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e89d: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
L_0050e8a2:; BB(0x0050e8a2);
    /* 0050e8a2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e8a8: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x50e8adu); f_0047e500();
    /* 0050e8ad: jmp 0x50e9b3 */ goto L_0050e9b3;
L_0050e8b2:; BB(0x0050e8b2);
    /* 0050e8b2: cmp dword ptr [0x793130], 3 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8b9: jne 0x50e8da */ if (!fZ) goto L_0050e8da;
L_0050e8bb:; BB(0x0050e8bb);
    /* 0050e8bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e8bd: call 0x516f40 */ r_esp -= 4; W32(r_esp, 0x50e8c2u); f_00516f40();
    /* 0050e8c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e8c5: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050e8ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e8d0: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x50e8d5u); f_0047e500();
    /* 0050e8d5: jmp 0x50e9b3 */ goto L_0050e9b3;
L_0050e8da:; BB(0x0050e8da);
    /* 0050e8da: cmp dword ptr [0x793130], 4 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8e1: jne 0x50e92b */ if (!fZ) goto L_0050e92b;
L_0050e8e3:; BB(0x0050e8e3);
    /* 0050e8e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e8e9: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x50e8eeu); f_0047d6b0();
    /* 0050e8ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8f1: jne 0x50e90a */ if (!fZ) goto L_0050e90a;
L_0050e8f3:; BB(0x0050e8f3);
    /* 0050e8f3: mov eax, dword ptr [0x79305c] */ r_eax = R32((u32)(0x79305cu));
    /* 0050e8f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e8f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e8fb: call 0x517430 */ r_esp -= 4; W32(r_esp, 0x50e900u); f_00517430();
    /* 0050e900: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e903: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050e908: jmp 0x50e91b */ goto L_0050e91b;
L_0050e90a:; BB(0x0050e90a);
    /* 0050e90a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e90c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e90e: call 0x517430 */ r_esp -= 4; W32(r_esp, 0x50e913u); f_00517430();
    /* 0050e913: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e916: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
L_0050e91b:; BB(0x0050e91b);
    /* 0050e91b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e921: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x50e926u); f_0047e500();
    /* 0050e926: jmp 0x50e9b3 */ goto L_0050e9b3;
L_0050e92b:; BB(0x0050e92b);
    /* 0050e92b: cmp dword ptr [0x793130], 0 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e932: jne 0x50e998 */ if (!fZ) goto L_0050e998;
L_0050e934:; BB(0x0050e934);
    /* 0050e934: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e936: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e93c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e941u); f_0047e3b0();
    /* 0050e941: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e943: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x50e948u); f_004c7030();
    /* 0050e948: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e94e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e953u); f_0047e3b0();
    /* 0050e953: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e955: call 0x4c7230 */ r_esp -= 4; W32(r_esp, 0x50e95au); f_004c7230();
    /* 0050e95a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e95c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e95e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e964: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50e969u); f_0047e3b0();
    /* 0050e969: mov ecx, eax */ r_ecx = r_eax;
    /* 0050e96b: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x50e970u); f_004dc4d0();
    /* 0050e970: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050e976: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e979: call 0x4f62e0 */ r_esp -= 4; W32(r_esp, 0x50e97eu); f_004f62e0();
    /* 0050e97e: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0050e981: mov dword ptr [0x793034], ecx */ W32((u32)(0x793034u), r_ecx);
    /* 0050e987: mov edx, dword ptr [0x793058] */ r_edx = R32((u32)(0x793058u));
    /* 0050e98d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050e990: mov dword ptr [0x793058], edx */ W32((u32)(0x793058u), r_edx);
    /* 0050e996: jmp 0x50e9b3 */ goto L_0050e9b3;
L_0050e998:; BB(0x0050e998);
    /* 0050e998: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050e99a: jne 0x50e9b3 */ if (!fZ) goto L_0050e9b3;
L_0050e99c:; BB(0x0050e99c);
    /* 0050e99c: push 0x58b */ { u32 v = 0x58bu; r_esp -= 4; W32(r_esp, v); }
    /* 0050e9a1: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e9a6: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e9ab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50e9b0u); f_005e9f20();
    /* 0050e9b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050e9b3:; BB(0x0050e9b3);
    /* 0050e9b3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0050e9b5: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e9bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050e9bd: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e9c3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050e9c6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50e9c8u); call_ind(t); }
    /* 0050e9c8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e9ca: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e9d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050e9d2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050e9d8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050e9db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50e9ddu); call_ind(t); }
    /* 0050e9dd: jmp 0x516cb0 */ goto L_00516cb0;
L_0050e9e2:; BB(0x0050e9e2);
    /* 0050e9e2: cmp dword ptr [0x793130], 1 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e9e9: jne 0x50e9fa */ if (!fZ) goto L_0050e9fa;
L_0050e9eb:; BB(0x0050e9eb);
    /* 0050e9eb: mov dword ptr [0x793064], 2 */ W32((u32)(0x793064u), 0x2u);
    /* 0050e9f5: jmp 0x50ea7c */ goto L_0050ea7c;
L_0050e9fa:; BB(0x0050e9fa);
    /* 0050e9fa: cmp dword ptr [0x793130], 2 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea01: jne 0x50ea16 */ if (!fZ) goto L_0050ea16;
L_0050ea03:; BB(0x0050ea03);
    /* 0050ea03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea07: call 0x5170a0 */ r_esp -= 4; W32(r_esp, 0x50ea0cu); f_005170a0();
    /* 0050ea0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ea0f: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050ea14: jmp 0x50ea7c */ goto L_0050ea7c;
L_0050ea16:; BB(0x0050ea16);
    /* 0050ea16: cmp dword ptr [0x793130], 3 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea1d: jne 0x50ea30 */ if (!fZ) goto L_0050ea30;
L_0050ea1f:; BB(0x0050ea1f);
    /* 0050ea1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea21: call 0x516f40 */ r_esp -= 4; W32(r_esp, 0x50ea26u); f_00516f40();
    /* 0050ea26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ea29: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050ea2e: jmp 0x50ea7c */ goto L_0050ea7c;
L_0050ea30:; BB(0x0050ea30);
    /* 0050ea30: cmp dword ptr [0x793130], 4 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea37: jne 0x50ea4c */ if (!fZ) goto L_0050ea4c;
L_0050ea39:; BB(0x0050ea39);
    /* 0050ea39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea3d: call 0x517430 */ r_esp -= 4; W32(r_esp, 0x50ea42u); f_00517430();
    /* 0050ea42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050ea45: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 0050ea4a: jmp 0x50ea7c */ goto L_0050ea7c;
L_0050ea4c:; BB(0x0050ea4c);
    /* 0050ea4c: cmp dword ptr [0x793130], 0 */ {  u32 a = R32((u32)(0x793130u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea53: jne 0x50ea61 */ if (!fZ) goto L_0050ea61;
L_0050ea55:; BB(0x0050ea55);
    /* 0050ea55: mov dword ptr [0x793064], 1 */ W32((u32)(0x793064u), 0x1u);
    /* 0050ea5f: jmp 0x50ea7c */ goto L_0050ea7c;
L_0050ea61:; BB(0x0050ea61);
    /* 0050ea61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050ea63: jne 0x50ea7c */ if (!fZ) goto L_0050ea7c;
L_0050ea65:; BB(0x0050ea65);
    /* 0050ea65: push 0x59c */ { u32 v = 0x59cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea6a: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea6f: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea74: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50ea79u); f_005e9f20();
    /* 0050ea79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050ea7c:; BB(0x0050ea7c);
    /* 0050ea7c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea7e: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ea84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050ea86: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ea8c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ea8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ea91u); call_ind(t); }
    /* 0050ea91: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ea97: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ea9cu); f_0047e3b0();
    /* 0050ea9c: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ea9e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x50eaa3u); f_004c6cb0();
    /* 0050eaa3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eaa6: jne 0x50fc51 */ if (!fZ) goto L_0050fc51;
L_0050eaac:; BB(0x0050eaac);
    /* 0050eaac: cmp dword ptr [0x793064], 0 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eab3: jne 0x50eacf */ if (!fZ) goto L_0050eacf;
L_0050eab5:; BB(0x0050eab5);
    /* 0050eab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050eab7: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050eabd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050eabf: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050eac5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050eac8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50eacau); call_ind(t); }
    /* 0050eaca: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050eacf:; BB(0x0050eacf);
    /* 0050eacf: cmp dword ptr [0x793064], 1 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ead6: jne 0x50eba0 */ if (!fZ) goto L_0050eba0;
L_0050eadc:; BB(0x0050eadc);
    /* 0050eadc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eae2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050eae5: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x50eaeau); f_004f6840();
    /* 0050eaea: mov esi, eax */ r_esi = r_eax;
    /* 0050eaec: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 0050eaf2: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0050eaf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eaf5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50eafau); f_0062fbf0();
    /* 0050eafa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eafd: mov edi, eax */ r_edi = r_eax;
    /* 0050eaff: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 0050eb05: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050eb07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb08: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50eb0du); f_0062fbf0();
    /* 0050eb0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eb10: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 0050eb14: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eb1a: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x50eb1fu); f_0047bde0();
    /* 0050eb1f: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050eb22: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050eb24: jle 0x50eb3e */ if ((fZ||fS!=fO)) goto L_0050eb3e;
L_0050eb26:; BB(0x0050eb26);
    /* 0050eb26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eb29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eb30: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50eb35u); f_0047e3b0();
    /* 0050eb35: mov ecx, eax */ r_ecx = r_eax;
    /* 0050eb37: call 0x4cc9c0 */ r_esp -= 4; W32(r_esp, 0x50eb3cu); f_004cc9c0();
    /* 0050eb3c: jmp 0x50eb9b */ goto L_0050eb9b;
L_0050eb3e:; BB(0x0050eb3e);
    /* 0050eb3e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eb44: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50eb49u); f_0047e190();
    /* 0050eb49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050eb4b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb4e: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050eb51: lea ecx, [ecx + ecx + 5] */ r_ecx = (u32)(r_ecx+r_ecx+0x5u);
    /* 0050eb55: cmp dword ptr [0x793078], ecx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb5b: jne 0x50eb85 */ if (!fZ) goto L_0050eb85;
L_0050eb5d:; BB(0x0050eb5d);
    /* 0050eb5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eb63: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50eb68u); f_0047e190();
    /* 0050eb68: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eb6b: je 0x50eb85 */ if (fZ) goto L_0050eb85;
L_0050eb6d:; BB(0x0050eb6d);
    /* 0050eb6d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eb70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb71: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eb77: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50eb7cu); f_0047e3b0();
    /* 0050eb7c: mov ecx, eax */ r_ecx = r_eax;
    /* 0050eb7e: call 0x4cc9a0 */ r_esp -= 4; W32(r_esp, 0x50eb83u); f_004cc9a0();
    /* 0050eb83: jmp 0x50eb9b */ goto L_0050eb9b;
L_0050eb85:; BB(0x0050eb85);
    /* 0050eb85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050eb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb89: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eb8f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50eb94u); f_0047e3b0();
    /* 0050eb94: mov ecx, eax */ r_ecx = r_eax;
    /* 0050eb96: call 0x4cc980 */ r_esp -= 4; W32(r_esp, 0x50eb9bu); f_004cc980();
L_0050eb9b:; BB(0x0050eb9b);
    /* 0050eb9b: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050eba0:; BB(0x0050eba0);
    /* 0050eba0: cmp dword ptr [0x793064], 2 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eba7: jne 0x50ebc4 */ if (!fZ) goto L_0050ebc4;
L_0050eba9:; BB(0x0050eba9);
    /* 0050eba9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ebac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ebb3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ebb8u); f_0047e3b0();
    /* 0050ebb8: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ebba: call 0x4cc9e0 */ r_esp -= 4; W32(r_esp, 0x50ebbfu); f_004cc9e0();
    /* 0050ebbf: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050ebc4:; BB(0x0050ebc4);
    /* 0050ebc4: cmp dword ptr [0x793064], 3 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ebcb: jne 0x50ee40 */ if (!fZ) goto L_0050ee40;
L_0050ebd1:; BB(0x0050ebd1);
    /* 0050ebd1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ebd7: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ebdcu); f_0047e190();
    /* 0050ebdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050ebde: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ebe1: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050ebe4: lea edx, [edx + edx + 5] */ r_edx = (u32)(r_edx+r_edx+0x5u);
    /* 0050ebe8: cmp dword ptr [0x793078], edx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ebee: jne 0x50ec1b */ if (!fZ) goto L_0050ec1b;
L_0050ebf0:; BB(0x0050ebf0);
    /* 0050ebf0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ebf6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ebfbu); f_0047e190();
    /* 0050ebfb: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ebfe: je 0x50ec1b */ if (fZ) goto L_0050ec1b;
L_0050ec00:; BB(0x0050ec00);
    /* 0050ec00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ec03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec04: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ec0a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ec0fu); f_0047e3b0();
    /* 0050ec0f: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ec11: call 0x4cd130 */ r_esp -= 4; W32(r_esp, 0x50ec16u); f_004cd130();
    /* 0050ec16: jmp 0x50ee3b */ goto L_0050ee3b;
L_0050ec1b:; BB(0x0050ec1b);
    /* 0050ec1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ec21: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x50ec26u); f_0047e280();
    /* 0050ec26: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec29: jne 0x50ed80 */ if (!fZ) goto L_0050ed80;
L_0050ec2f:; BB(0x0050ec2f);
    /* 0050ec2f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ec35: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ec3au); f_0047e190();
    /* 0050ec3a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec3d: je 0x50ed80 */ if (fZ) goto L_0050ed80;
L_0050ec43:; BB(0x0050ec43);
    /* 0050ec43: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ec49: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50ec4eu); f_0047d6f0();
    /* 0050ec4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec50: jne 0x50ed80 */ if (!fZ) goto L_0050ed80;
L_0050ec56:; BB(0x0050ec56);
    /* 0050ec56: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ec5c: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ec61u); f_0047e190();
    /* 0050ec61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ec63: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec66: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050ec69: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ec6c: cmp dword ptr [0x793078], ecx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050ec72: jl 0x50ed80 */ if ((fS!=fO)) goto L_0050ed80;
L_0050ec78:; BB(0x0050ec78);
    /* 0050ec78: lea ecx, [ebp - 0x27c] */ r_ecx = (u32)(r_ebp+0xfffffd84u);
    /* 0050ec7e: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x50ec83u); f_004a20d0();
    /* 0050ec83: mov dword ptr [ebp - 0x500], eax */ W32((u32)(r_ebp+0xfffffb00u), r_eax);
    /* 0050ec89: mov edx, dword ptr [ebp - 0x500] */ r_edx = R32((u32)(r_ebp+0xfffffb00u));
    /* 0050ec8f: mov dword ptr [ebp - 0x504], edx */ W32((u32)(r_ebp+0xfffffafcu), r_edx);
    /* 0050ec95: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0050ec9c: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050eca2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050eca5: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050ecab: lea ecx, [ebp - 0x274] */ r_ecx = (u32)(r_ebp+0xfffffd8cu);
    /* 0050ecb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecb2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ecb8: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ecbdu); f_0047e3b0();
    /* 0050ecbd: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ecbf: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50ecc4u); f_004c8300();
    /* 0050ecc4: mov dword ptr [ebp - 0x508], eax */ W32((u32)(r_ebp+0xfffffaf8u), r_eax);
    /* 0050ecca: mov edx, dword ptr [ebp - 0x508] */ r_edx = R32((u32)(r_ebp+0xfffffaf8u));
    /* 0050ecd0: mov dword ptr [ebp - 0x50c], edx */ W32((u32)(r_ebp+0xfffffaf4u), r_edx);
    /* 0050ecd6: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0050ecdd: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050ece3: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050ece6: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050ecec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecf6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecf8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ecfa: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 0050ed00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed01: mov ecx, dword ptr [ebp - 0x50c] */ r_ecx = R32((u32)(r_ebp+0xfffffaf4u));
    /* 0050ed07: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50ed0cu); f_00485940();
    /* 0050ed0c: mov dword ptr [ebp - 0x510], eax */ W32((u32)(r_ebp+0xfffffaf0u), r_eax);
    /* 0050ed12: mov edx, dword ptr [ebp - 0x510] */ r_edx = R32((u32)(r_ebp+0xfffffaf0u));
    /* 0050ed18: mov dword ptr [ebp - 0x514], edx */ W32((u32)(r_ebp+0xfffffaecu), r_edx);
    /* 0050ed1e: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0050ed25: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050ed2b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050ed2e: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050ed34: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed39: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed3e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed43: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed48: mov ecx, dword ptr [0x791410] */ r_ecx = R32((u32)(0x791410u));
    /* 0050ed4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed4f: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 0050ed55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed56: mov ecx, dword ptr [ebp - 0x504] */ r_ecx = R32((u32)(r_ebp+0xfffffafcu));
    /* 0050ed5c: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x50ed61u); f_004a2100();
    /* 0050ed61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ed62: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 0050ed68: call 0x4a2570 */ r_esp -= 4; W32(r_esp, 0x50ed6du); f_004a2570();
    /* 0050ed6d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050ed70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ed72: je 0x50ed80 */ if (fZ) goto L_0050ed80;
L_0050ed74:; BB(0x0050ed74);
    /* 0050ed74: mov dword ptr [ebp - 0x518], 1 */ W32((u32)(r_ebp+0xfffffae8u), 0x1u);
    /* 0050ed7e: jmp 0x50ed8a */ goto L_0050ed8a;
L_0050ed80:; BB(0x0050ed80);
    /* 0050ed80: mov dword ptr [ebp - 0x518], 0 */ W32((u32)(r_ebp+0xfffffae8u), 0x0u);
L_0050ed8a:; BB(0x0050ed8a);
    /* 0050ed8a: mov cl, byte ptr [ebp - 0x518] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffae8u))) & 0xffu);
    /* 0050ed90: mov byte ptr [ebp - 0x26b], cl */ W8((u32)(r_ebp+0xfffffd95u), (u8)r_ecx);
    /* 0050ed96: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0050ed9d: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050eda3: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050eda6: je 0x50edba */ if (fZ) goto L_0050edba;
L_0050eda8:; BB(0x0050eda8);
    /* 0050eda8: and dword ptr [ebp - 0x4ac], 0xfffffffb */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050edaf: lea ecx, [ebp - 0x278] */ r_ecx = (u32)(r_ebp+0xfffffd88u);
    /* 0050edb5: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50edbau); f_004a20f0();
L_0050edba:; BB(0x0050edba);
    /* 0050edba: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0050edc1: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050edc7: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050edca: je 0x50edde */ if (fZ) goto L_0050edde;
L_0050edcc:; BB(0x0050edcc);
    /* 0050edcc: and dword ptr [ebp - 0x4ac], 0xfffffffd */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050edd3: lea ecx, [ebp - 0x274] */ r_ecx = (u32)(r_ebp+0xfffffd8cu);
    /* 0050edd9: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50eddeu); f_00484470();
L_0050edde:; BB(0x0050edde);
    /* 0050edde: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050ede5: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050edeb: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050edee: je 0x50ee02 */ if (fZ) goto L_0050ee02;
L_0050edf0:; BB(0x0050edf0);
    /* 0050edf0: and dword ptr [ebp - 0x4ac], 0xfffffffe */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050edf7: lea ecx, [ebp - 0x27c] */ r_ecx = (u32)(r_ebp+0xfffffd84u);
    /* 0050edfd: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50ee02u); f_004a20f0();
L_0050ee02:; BB(0x0050ee02);
    /* 0050ee02: movzx edx, byte ptr [ebp - 0x26b] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffd95u));
    /* 0050ee09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee0b: je 0x50ee25 */ if (fZ) goto L_0050ee25;
L_0050ee0d:; BB(0x0050ee0d);
    /* 0050ee0d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee11: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ee17: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ee1cu); f_0047e3b0();
    /* 0050ee1c: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ee1e: call 0x4ccf60 */ r_esp -= 4; W32(r_esp, 0x50ee23u); f_004ccf60();
    /* 0050ee23: jmp 0x50ee3b */ goto L_0050ee3b;
L_0050ee25:; BB(0x0050ee25);
    /* 0050ee25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee29: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ee2f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ee34u); f_0047e3b0();
    /* 0050ee34: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ee36: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x50ee3bu); f_004ccae0();
L_0050ee3b:; BB(0x0050ee3b);
    /* 0050ee3b: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050ee40:; BB(0x0050ee40);
    /* 0050ee40: cmp dword ptr [0x793064], 4 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee47: jne 0x50eeab */ if (!fZ) goto L_0050eeab;
L_0050ee49:; BB(0x0050ee49);
    /* 0050ee49: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ee4f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ee54u); f_0047e190();
    /* 0050ee54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050ee56: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee59: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050ee5c: lea edx, [edx + edx + 5] */ r_edx = (u32)(r_edx+r_edx+0x5u);
    /* 0050ee60: cmp dword ptr [0x793078], edx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee66: jne 0x50ee90 */ if (!fZ) goto L_0050ee90;
L_0050ee68:; BB(0x0050ee68);
    /* 0050ee68: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ee6e: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ee73u); f_0047e190();
    /* 0050ee73: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ee76: je 0x50ee90 */ if (fZ) goto L_0050ee90;
L_0050ee78:; BB(0x0050ee78);
    /* 0050ee78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee7c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ee82: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ee87u); f_0047e3b0();
    /* 0050ee87: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ee89: call 0x4ccab0 */ r_esp -= 4; W32(r_esp, 0x50ee8eu); f_004ccab0();
    /* 0050ee8e: jmp 0x50eea6 */ goto L_0050eea6;
L_0050ee90:; BB(0x0050ee90);
    /* 0050ee90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050ee93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee94: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ee9a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ee9fu); f_0047e3b0();
    /* 0050ee9f: mov ecx, eax */ r_ecx = r_eax;
    /* 0050eea1: call 0x4cca60 */ r_esp -= 4; W32(r_esp, 0x50eea6u); f_004cca60();
L_0050eea6:; BB(0x0050eea6);
    /* 0050eea6: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050eeab:; BB(0x0050eeab);
    /* 0050eeab: cmp dword ptr [0x793064], 5 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eeb2: jne 0x50fc19 */ if (!fZ) goto L_0050fc19;
L_0050eeb8:; BB(0x0050eeb8);
    /* 0050eeb8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eebe: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50eec3u); f_0047e190();
    /* 0050eec3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eec8: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050eecb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050eece: cmp dword ptr [0x793078], edx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050eed4: jg 0x50f009 */ if ((!fZ&&fS==fO)) goto L_0050f009;
L_0050eeda:; BB(0x0050eeda);
    /* 0050eeda: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eee0: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50eee5u); f_0047e190();
    /* 0050eee5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eee8: je 0x50f009 */ if (fZ) goto L_0050f009;
L_0050eeee:; BB(0x0050eeee);
    /* 0050eeee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050eef4: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50eef9u); f_0047d6f0();
    /* 0050eef9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050eefc: je 0x50f009 */ if (fZ) goto L_0050f009;
L_0050ef02:; BB(0x0050ef02);
    /* 0050ef02: lea ecx, [ebp - 0x290] */ r_ecx = (u32)(r_ebp+0xfffffd70u);
    /* 0050ef08: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x50ef0du); f_004a20d0();
    /* 0050ef0d: mov dword ptr [ebp - 0x51c], eax */ W32((u32)(r_ebp+0xfffffae4u), r_eax);
    /* 0050ef13: mov eax, dword ptr [ebp - 0x51c] */ r_eax = R32((u32)(r_ebp+0xfffffae4u));
    /* 0050ef19: mov dword ptr [ebp - 0x520], eax */ W32((u32)(r_ebp+0xfffffae0u), r_eax);
    /* 0050ef1f: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 0050ef26: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050ef2c: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ef2f: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050ef35: lea edx, [ebp - 0x288] */ r_edx = (u32)(r_ebp+0xfffffd78u);
    /* 0050ef3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef3c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ef42: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50ef47u); f_0047e3b0();
    /* 0050ef47: mov ecx, eax */ r_ecx = r_eax;
    /* 0050ef49: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50ef4eu); f_004c8300();
    /* 0050ef4e: mov dword ptr [ebp - 0x524], eax */ W32((u32)(r_ebp+0xfffffadcu), r_eax);
    /* 0050ef54: mov eax, dword ptr [ebp - 0x524] */ r_eax = R32((u32)(r_ebp+0xfffffadcu));
    /* 0050ef5a: mov dword ptr [ebp - 0x528], eax */ W32((u32)(r_ebp+0xfffffad8u), r_eax);
    /* 0050ef60: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 0050ef67: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050ef6d: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ef70: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050ef76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef84: lea edx, [ebp - 0x28c] */ r_edx = (u32)(r_ebp+0xfffffd74u);
    /* 0050ef8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef8b: mov ecx, dword ptr [ebp - 0x528] */ r_ecx = R32((u32)(r_ebp+0xfffffad8u));
    /* 0050ef91: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50ef96u); f_00485940();
    /* 0050ef96: mov dword ptr [ebp - 0x52c], eax */ W32((u32)(r_ebp+0xfffffad4u), r_eax);
    /* 0050ef9c: mov eax, dword ptr [ebp - 0x52c] */ r_eax = R32((u32)(r_ebp+0xfffffad4u));
    /* 0050efa2: mov dword ptr [ebp - 0x530], eax */ W32((u32)(r_ebp+0xfffffad0u), r_eax);
    /* 0050efa8: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0050efaf: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050efb5: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050efb8: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050efbe: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050efc3: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050efc8: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050efcd: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050efd2: mov edx, dword ptr [0x791400] */ r_edx = R32((u32)(0x791400u));
    /* 0050efd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050efd9: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 0050efde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050efdf: mov ecx, dword ptr [ebp - 0x520] */ r_ecx = R32((u32)(r_ebp+0xfffffae0u));
    /* 0050efe5: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x50efeau); f_004a2100();
    /* 0050efea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050efeb: mov ecx, dword ptr [ebp - 0x530] */ r_ecx = R32((u32)(r_ebp+0xfffffad0u));
    /* 0050eff1: call 0x4a24d0 */ r_esp -= 4; W32(r_esp, 0x50eff6u); f_004a24d0();
    /* 0050eff6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050eff9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050effb: je 0x50f009 */ if (fZ) goto L_0050f009;
L_0050effd:; BB(0x0050effd);
    /* 0050effd: mov dword ptr [ebp - 0x534], 1 */ W32((u32)(r_ebp+0xfffffaccu), 0x1u);
    /* 0050f007: jmp 0x50f013 */ goto L_0050f013;
L_0050f009:; BB(0x0050f009);
    /* 0050f009: mov dword ptr [ebp - 0x534], 0 */ W32((u32)(r_ebp+0xfffffaccu), 0x0u);
L_0050f013:; BB(0x0050f013);
    /* 0050f013: mov dl, byte ptr [ebp - 0x534] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffaccu))) & 0xffu);
    /* 0050f019: mov byte ptr [ebp - 0x27d], dl */ W8((u32)(r_ebp+0xfffffd83u), (u8)r_edx);
    /* 0050f01f: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 0050f026: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f02c: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f02f: je 0x50f043 */ if (fZ) goto L_0050f043;
L_0050f031:; BB(0x0050f031);
    /* 0050f031: and dword ptr [ebp - 0x4ac], 0xffffffdf */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f038: lea ecx, [ebp - 0x28c] */ r_ecx = (u32)(r_ebp+0xfffffd74u);
    /* 0050f03e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f043u); f_004a20f0();
L_0050f043:; BB(0x0050f043);
    /* 0050f043: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 0050f04a: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f050: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050f053: je 0x50f067 */ if (fZ) goto L_0050f067;
L_0050f055:; BB(0x0050f055);
    /* 0050f055: and dword ptr [ebp - 0x4ac], 0xffffffef */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f05c: lea ecx, [ebp - 0x288] */ r_ecx = (u32)(r_ebp+0xfffffd78u);
    /* 0050f062: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f067u); f_00484470();
L_0050f067:; BB(0x0050f067);
    /* 0050f067: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f06e: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f074: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050f077: je 0x50f08b */ if (fZ) goto L_0050f08b;
L_0050f079:; BB(0x0050f079);
    /* 0050f079: and dword ptr [ebp - 0x4ac], 0xfffffff7 */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f080: lea ecx, [ebp - 0x290] */ r_ecx = (u32)(r_ebp+0xfffffd70u);
    /* 0050f086: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f08bu); f_004a20f0();
L_0050f08b:; BB(0x0050f08b);
    /* 0050f08b: movzx eax, byte ptr [ebp - 0x27d] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffd83u));
    /* 0050f092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f094: je 0x50f0b1 */ if (fZ) goto L_0050f0b1;
L_0050f096:; BB(0x0050f096);
    /* 0050f096: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f099: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f09a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f0a0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f0a5u); f_0047e3b0();
    /* 0050f0a5: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f0a7: call 0x4cd0d0 */ r_esp -= 4; W32(r_esp, 0x50f0acu); f_004cd0d0();
    /* 0050f0ac: jmp 0x50fc17 */ goto L_0050fc17;
L_0050f0b1:; BB(0x0050f0b1);
    /* 0050f0b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f0b7: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50f0bcu); f_0047e190();
    /* 0050f0bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050f0be: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f0c1: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050f0c4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050f0c7: cmp dword ptr [0x793078], edx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f0cd: jle 0x50f1b9 */ if ((fZ||fS!=fO)) goto L_0050f1b9;
L_0050f0d3:; BB(0x0050f0d3);
    /* 0050f0d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f0d9: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50f0deu); f_0047e190();
    /* 0050f0de: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f0e1: je 0x50f1b9 */ if (fZ) goto L_0050f1b9;
L_0050f0e7:; BB(0x0050f0e7);
    /* 0050f0e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f0ed: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50f0f2u); f_0047d6f0();
    /* 0050f0f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f0f5: je 0x50f1b9 */ if (fZ) goto L_0050f1b9;
L_0050f0fb:; BB(0x0050f0fb);
    /* 0050f0fb: lea eax, [ebp - 0x29c] */ r_eax = (u32)(r_ebp+0xfffffd64u);
    /* 0050f101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f102: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f108: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f10du); f_0047e3b0();
    /* 0050f10d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f10f: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f114u); f_004c8300();
    /* 0050f114: mov dword ptr [ebp - 0x538], eax */ W32((u32)(r_ebp+0xfffffac8u), r_eax);
    /* 0050f11a: mov ecx, dword ptr [ebp - 0x538] */ r_ecx = R32((u32)(r_ebp+0xfffffac8u));
    /* 0050f120: mov dword ptr [ebp - 0x53c], ecx */ W32((u32)(r_ebp+0xfffffac4u), r_ecx);
    /* 0050f126: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 0050f12d: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f133: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050f136: mov dword ptr [ebp - 0x4ac], edx */ W32((u32)(r_ebp+0xfffffb54u), r_edx);
    /* 0050f13c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f13e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f140: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f142: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f144: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f146: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f148: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f14a: lea eax, [ebp - 0x2a0] */ r_eax = (u32)(r_ebp+0xfffffd60u);
    /* 0050f150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f151: mov ecx, dword ptr [ebp - 0x53c] */ r_ecx = R32((u32)(r_ebp+0xfffffac4u));
    /* 0050f157: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50f15cu); f_00485940();
    /* 0050f15c: mov dword ptr [ebp - 0x540], eax */ W32((u32)(r_ebp+0xfffffac0u), r_eax);
    /* 0050f162: mov ecx, dword ptr [ebp - 0x540] */ r_ecx = R32((u32)(r_ebp+0xfffffac0u));
    /* 0050f168: mov dword ptr [ebp - 0x544], ecx */ W32((u32)(r_ebp+0xfffffabcu), r_ecx);
    /* 0050f16e: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 0050f175: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f17b: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050f181: mov dword ptr [ebp - 0x4ac], edx */ W32((u32)(r_ebp+0xfffffb54u), r_edx);
    /* 0050f187: mov eax, dword ptr [0x791380] */ r_eax = R32((u32)(0x791380u));
    /* 0050f18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f18d: lea ecx, [ebp - 0x2a1] */ r_ecx = (u32)(r_ebp+0xfffffd5fu);
    /* 0050f193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f194: mov ecx, dword ptr [ebp - 0x544] */ r_ecx = R32((u32)(r_ebp+0xfffffabcu));
    /* 0050f19a: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x50f19fu); f_004a2160();
    /* 0050f19f: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f1a1: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x50f1a6u); f_004a1f00();
    /* 0050f1a6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0050f1a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f1ab: je 0x50f1b9 */ if (fZ) goto L_0050f1b9;
L_0050f1ad:; BB(0x0050f1ad);
    /* 0050f1ad: mov dword ptr [ebp - 0x548], 1 */ W32((u32)(r_ebp+0xfffffab8u), 0x1u);
    /* 0050f1b7: jmp 0x50f1c3 */ goto L_0050f1c3;
L_0050f1b9:; BB(0x0050f1b9);
    /* 0050f1b9: mov dword ptr [ebp - 0x548], 0 */ W32((u32)(r_ebp+0xfffffab8u), 0x0u);
L_0050f1c3:; BB(0x0050f1c3);
    /* 0050f1c3: mov al, byte ptr [ebp - 0x548] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffab8u))) & 0xffu);
    /* 0050f1c9: mov byte ptr [ebp - 0x291], al */ W8((u32)(r_ebp+0xfffffd6fu), (u8)r_eax);
    /* 0050f1cf: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 0050f1d6: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f1dc: and ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050f1e2: je 0x50f1f9 */ if (fZ) goto L_0050f1f9;
L_0050f1e4:; BB(0x0050f1e4);
    /* 0050f1e4: and dword ptr [ebp - 0x4ac], 0xffffff7f */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f1ee: lea ecx, [ebp - 0x2a0] */ r_ecx = (u32)(r_ebp+0xfffffd60u);
    /* 0050f1f4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f1f9u); f_004a20f0();
L_0050f1f9:; BB(0x0050f1f9);
    /* 0050f1f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f200: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f206: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050f209: je 0x50f21d */ if (fZ) goto L_0050f21d;
L_0050f20b:; BB(0x0050f20b);
    /* 0050f20b: and dword ptr [ebp - 0x4ac], 0xffffffbf */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f212: lea ecx, [ebp - 0x29c] */ r_ecx = (u32)(r_ebp+0xfffffd64u);
    /* 0050f218: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f21du); f_00484470();
L_0050f21d:; BB(0x0050f21d);
    /* 0050f21d: movzx eax, byte ptr [ebp - 0x291] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffd6fu));
    /* 0050f224: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f226: je 0x50f243 */ if (fZ) goto L_0050f243;
L_0050f228:; BB(0x0050f228);
    /* 0050f228: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f22b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f22c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f232: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f237u); f_0047e3b0();
    /* 0050f237: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f239: call 0x4cd0d0 */ r_esp -= 4; W32(r_esp, 0x50f23eu); f_004cd0d0();
    /* 0050f23e: jmp 0x50fc17 */ goto L_0050fc17;
L_0050f243:; BB(0x0050f243);
    /* 0050f243: cmp dword ptr [0x793078], 5 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f24a: jl 0x50f3f0 */ if ((fS!=fO)) goto L_0050f3f0;
L_0050f250:; BB(0x0050f250);
    /* 0050f250: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f256: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x50f25bu); f_0047ce60();
    /* 0050f25b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f25e: je 0x50f274 */ if (fZ) goto L_0050f274;
L_0050f260:; BB(0x0050f260);
    /* 0050f260: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f266: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x50f26bu); f_0047ce60();
    /* 0050f26b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f26e: jne 0x50f3f0 */ if (!fZ) goto L_0050f3f0;
L_0050f274:; BB(0x0050f274);
    /* 0050f274: lea edx, [ebp - 0x2ac] */ r_edx = (u32)(r_ebp+0xfffffd54u);
    /* 0050f27a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f27b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f281: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f286u); f_0047e3b0();
    /* 0050f286: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f288: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f28du); f_004c8300();
    /* 0050f28d: mov dword ptr [ebp - 0x54c], eax */ W32((u32)(r_ebp+0xfffffab4u), r_eax);
    /* 0050f293: mov eax, dword ptr [ebp - 0x54c] */ r_eax = R32((u32)(r_ebp+0xfffffab4u));
    /* 0050f299: mov dword ptr [ebp - 0x550], eax */ W32((u32)(r_ebp+0xfffffab0u), r_eax);
    /* 0050f29f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 0050f2a6: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f2ac: or ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f2b2: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050f2b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2c6: lea edx, [ebp - 0x2b0] */ r_edx = (u32)(r_ebp+0xfffffd50u);
    /* 0050f2cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f2cd: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 0050f2d3: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50f2d8u); f_00485940();
    /* 0050f2d8: mov dword ptr [ebp - 0x554], eax */ W32((u32)(r_ebp+0xfffffaacu), r_eax);
    /* 0050f2de: mov eax, dword ptr [ebp - 0x554] */ r_eax = R32((u32)(r_ebp+0xfffffaacu));
    /* 0050f2e4: mov dword ptr [ebp - 0x558], eax */ W32((u32)(r_ebp+0xfffffaa8u), r_eax);
    /* 0050f2ea: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 0050f2f1: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f2f7: or ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f2fd: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050f303: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 0050f309: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f30a: lea eax, [ebp - 0x2b1] */ r_eax = (u32)(r_ebp+0xfffffd4fu);
    /* 0050f310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f311: mov ecx, dword ptr [ebp - 0x558] */ r_ecx = R32((u32)(r_ebp+0xfffffaa8u));
    /* 0050f317: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x50f31cu); f_004a2160();
    /* 0050f31c: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f31e: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x50f323u); f_004a1e10();
    /* 0050f323: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050f326: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f328: je 0x50f3f0 */ if (fZ) goto L_0050f3f0;
L_0050f32e:; BB(0x0050f32e);
    /* 0050f32e: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 0050f334: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f335: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f33b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f340u); f_0047e3b0();
    /* 0050f340: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f342: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f347u); f_004c8300();
    /* 0050f347: mov dword ptr [ebp - 0x55c], eax */ W32((u32)(r_ebp+0xfffffaa4u), r_eax);
    /* 0050f34d: mov eax, dword ptr [ebp - 0x55c] */ r_eax = R32((u32)(r_ebp+0xfffffaa4u));
    /* 0050f353: mov dword ptr [ebp - 0x560], eax */ W32((u32)(r_ebp+0xfffffaa0u), r_eax);
    /* 0050f359: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 0050f360: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f366: or ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f36c: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050f372: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f376: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f378: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f37a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f37c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f37e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f380: lea edx, [ebp - 0x2c0] */ r_edx = (u32)(r_ebp+0xfffffd40u);
    /* 0050f386: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f387: mov ecx, dword ptr [ebp - 0x560] */ r_ecx = R32((u32)(r_ebp+0xfffffaa0u));
    /* 0050f38d: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50f392u); f_00485940();
    /* 0050f392: mov dword ptr [ebp - 0x564], eax */ W32((u32)(r_ebp+0xfffffa9cu), r_eax);
    /* 0050f398: mov eax, dword ptr [ebp - 0x564] */ r_eax = R32((u32)(r_ebp+0xfffffa9cu));
    /* 0050f39e: mov dword ptr [ebp - 0x568], eax */ W32((u32)(r_ebp+0xfffffa98u), r_eax);
    /* 0050f3a4: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 0050f3ab: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f3b1: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f3b7: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0050f3bd: mov edx, dword ptr [0x7913f8] */ r_edx = R32((u32)(0x7913f8u));
    /* 0050f3c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3c4: lea eax, [ebp - 0x2c1] */ r_eax = (u32)(r_ebp+0xfffffd3fu);
    /* 0050f3ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f3cb: mov ecx, dword ptr [ebp - 0x568] */ r_ecx = R32((u32)(r_ebp+0xfffffa98u));
    /* 0050f3d1: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x50f3d6u); f_004a21b0();
    /* 0050f3d6: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f3d8: call 0x4a20a0 */ r_esp -= 4; W32(r_esp, 0x50f3ddu); f_004a20a0();
    /* 0050f3dd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050f3e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f3e2: je 0x50f3f0 */ if (fZ) goto L_0050f3f0;
L_0050f3e4:; BB(0x0050f3e4);
    /* 0050f3e4: mov dword ptr [ebp - 0x56c], 1 */ W32((u32)(r_ebp+0xfffffa94u), 0x1u);
    /* 0050f3ee: jmp 0x50f3fa */ goto L_0050f3fa;
L_0050f3f0:; BB(0x0050f3f0);
    /* 0050f3f0: mov dword ptr [ebp - 0x56c], 0 */ W32((u32)(r_ebp+0xfffffa94u), 0x0u);
L_0050f3fa:; BB(0x0050f3fa);
    /* 0050f3fa: mov dl, byte ptr [ebp - 0x56c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffa94u))) & 0xffu);
    /* 0050f400: mov byte ptr [ebp - 0x2a2], dl */ W8((u32)(r_ebp+0xfffffd5eu), (u8)r_edx);
    /* 0050f406: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 0050f40d: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f413: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f418: je 0x50f42f */ if (fZ) goto L_0050f42f;
L_0050f41a:; BB(0x0050f41a);
    /* 0050f41a: and dword ptr [ebp - 0x4ac], 0xfffff7ff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f424: lea ecx, [ebp - 0x2c0] */ r_ecx = (u32)(r_ebp+0xfffffd40u);
    /* 0050f42a: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f42fu); f_004a20f0();
L_0050f42f:; BB(0x0050f42f);
    /* 0050f42f: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 0050f436: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f43c: and ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050f442: je 0x50f459 */ if (fZ) goto L_0050f459;
L_0050f444:; BB(0x0050f444);
    /* 0050f444: and dword ptr [ebp - 0x4ac], 0xfffffbff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f44e: lea ecx, [ebp - 0x2bc] */ r_ecx = (u32)(r_ebp+0xfffffd44u);
    /* 0050f454: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f459u); f_00484470();
L_0050f459:; BB(0x0050f459);
    /* 0050f459: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 0050f460: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f466: and edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050f46c: je 0x50f483 */ if (fZ) goto L_0050f483;
L_0050f46e:; BB(0x0050f46e);
    /* 0050f46e: and dword ptr [ebp - 0x4ac], 0xfffffdff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f478: lea ecx, [ebp - 0x2b0] */ r_ecx = (u32)(r_ebp+0xfffffd50u);
    /* 0050f47e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f483u); f_004a20f0();
L_0050f483:; BB(0x0050f483);
    /* 0050f483: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f48a: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f490: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f495: je 0x50f4ac */ if (fZ) goto L_0050f4ac;
L_0050f497:; BB(0x0050f497);
    /* 0050f497: and dword ptr [ebp - 0x4ac], 0xfffffeff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f4a1: lea ecx, [ebp - 0x2ac] */ r_ecx = (u32)(r_ebp+0xfffffd54u);
    /* 0050f4a7: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f4acu); f_00484470();
L_0050f4ac:; BB(0x0050f4ac);
    /* 0050f4ac: movzx ecx, byte ptr [ebp - 0x2a2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffd5eu));
    /* 0050f4b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f4b5: je 0x50f4d2 */ if (fZ) goto L_0050f4d2;
L_0050f4b7:; BB(0x0050f4b7);
    /* 0050f4b7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f4ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f4bb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f4c1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f4c6u); f_0047e3b0();
    /* 0050f4c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f4c8: call 0x4cd0d0 */ r_esp -= 4; W32(r_esp, 0x50f4cdu); f_004cd0d0();
    /* 0050f4cd: jmp 0x50fc17 */ goto L_0050fc17;
L_0050f4d2:; BB(0x0050f4d2);
    /* 0050f4d2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f4d8: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50f4ddu); f_0047e190();
    /* 0050f4dd: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f4e0: je 0x50f555 */ if (fZ) goto L_0050f555;
L_0050f4e2:; BB(0x0050f4e2);
    /* 0050f4e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f4e8: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50f4edu); f_0047d6f0();
    /* 0050f4ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f4f0: je 0x50f555 */ if (fZ) goto L_0050f555;
L_0050f4f2:; BB(0x0050f4f2);
    /* 0050f4f2: lea eax, [ebp - 0x2cc] */ r_eax = (u32)(r_ebp+0xfffffd34u);
    /* 0050f4f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f4f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f4ff: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f504u); f_0047e3b0();
    /* 0050f504: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f506: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f50bu); f_004c8300();
    /* 0050f50b: mov dword ptr [ebp - 0x570], eax */ W32((u32)(r_ebp+0xfffffa90u), r_eax);
    /* 0050f511: mov ecx, dword ptr [ebp - 0x570] */ r_ecx = R32((u32)(r_ebp+0xfffffa90u));
    /* 0050f517: mov dword ptr [ebp - 0x574], ecx */ W32((u32)(r_ebp+0xfffffa8cu), r_ecx);
    /* 0050f51d: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 0050f524: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f52a: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050f530: mov dword ptr [ebp - 0x4ac], edx */ W32((u32)(r_ebp+0xfffffb54u), r_edx);
    /* 0050f536: mov ecx, dword ptr [ebp - 0x574] */ r_ecx = R32((u32)(r_ebp+0xfffffa8cu));
    /* 0050f53c: call 0x484bf0 */ r_esp -= 4; W32(r_esp, 0x50f541u); f_00484bf0();
    /* 0050f541: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050f544: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f547: jl 0x50f555 */ if ((fS!=fO)) goto L_0050f555;
L_0050f549:; BB(0x0050f549);
    /* 0050f549: mov dword ptr [ebp - 0x578], 1 */ W32((u32)(r_ebp+0xfffffa88u), 0x1u);
    /* 0050f553: jmp 0x50f55f */ goto L_0050f55f;
L_0050f555:; BB(0x0050f555);
    /* 0050f555: mov dword ptr [ebp - 0x578], 0 */ W32((u32)(r_ebp+0xfffffa88u), 0x0u);
L_0050f55f:; BB(0x0050f55f);
    /* 0050f55f: mov cl, byte ptr [ebp - 0x578] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffa88u))) & 0xffu);
    /* 0050f565: mov byte ptr [ebp - 0x2c2], cl */ W8((u32)(r_ebp+0xfffffd3eu), (u8)r_ecx);
    /* 0050f56b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f572: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f578: and edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050f57e: je 0x50f595 */ if (fZ) goto L_0050f595;
L_0050f580:; BB(0x0050f580);
    /* 0050f580: and dword ptr [ebp - 0x4ac], 0xffffefff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f58a: lea ecx, [ebp - 0x2cc] */ r_ecx = (u32)(r_ebp+0xfffffd34u);
    /* 0050f590: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f595u); f_00484470();
L_0050f595:; BB(0x0050f595);
    /* 0050f595: movzx eax, byte ptr [ebp - 0x2c2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffd3eu));
    /* 0050f59c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f59e: je 0x50f5bb */ if (fZ) goto L_0050f5bb;
L_0050f5a0:; BB(0x0050f5a0);
    /* 0050f5a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f5a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f5aa: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f5afu); f_0047e3b0();
    /* 0050f5af: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f5b1: call 0x4cd0d0 */ r_esp -= 4; W32(r_esp, 0x50f5b6u); f_004cd0d0();
    /* 0050f5b6: jmp 0x50fc17 */ goto L_0050fc17;
L_0050f5bb:; BB(0x0050f5bb);
    /* 0050f5bb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f5c1: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x50f5c6u); f_0047ce60();
    /* 0050f5c6: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f5c9: jne 0x50f67b */ if (!fZ) goto L_0050f67b;
L_0050f5cf:; BB(0x0050f5cf);
    /* 0050f5cf: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 0050f5d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5d6: mov eax, dword ptr [0x7907a4] */ r_eax = R32((u32)(0x7907a4u));
    /* 0050f5db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f5dc: lea ecx, [ebp - 0x2d9] */ r_ecx = (u32)(r_ebp+0xfffffd27u);
    /* 0050f5e2: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x50f5e7u); f_00464130();
    /* 0050f5e7: mov dword ptr [ebp - 0x57c], eax */ W32((u32)(r_ebp+0xfffffa84u), r_eax);
    /* 0050f5ed: mov ecx, dword ptr [ebp - 0x57c] */ r_ecx = R32((u32)(r_ebp+0xfffffa84u));
    /* 0050f5f3: mov dword ptr [ebp - 0x580], ecx */ W32((u32)(r_ebp+0xfffffa80u), r_ecx);
    /* 0050f5f9: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 0050f600: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f606: or edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050f60c: mov dword ptr [ebp - 0x4ac], edx */ W32((u32)(r_ebp+0xfffffb54u), r_edx);
    /* 0050f612: lea eax, [ebp - 0x2d8] */ r_eax = (u32)(r_ebp+0xfffffd28u);
    /* 0050f618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f619: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f61f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f624u); f_0047e3b0();
    /* 0050f624: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f626: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f62bu); f_004c8300();
    /* 0050f62b: mov dword ptr [ebp - 0x584], eax */ W32((u32)(r_ebp+0xfffffa7cu), r_eax);
    /* 0050f631: mov ecx, dword ptr [ebp - 0x584] */ r_ecx = R32((u32)(r_ebp+0xfffffa7cu));
    /* 0050f637: mov dword ptr [ebp - 0x588], ecx */ W32((u32)(r_ebp+0xfffffa78u), r_ecx);
    /* 0050f63d: mov dword ptr [ebp - 4], 0x1d */ W32((u32)(r_ebp+0xfffffffcu), 0x1du);
    /* 0050f644: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f64a: or edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050f650: mov dword ptr [ebp - 0x4ac], edx */ W32((u32)(r_ebp+0xfffffb54u), r_edx);
    /* 0050f656: mov eax, dword ptr [ebp - 0x580] */ r_eax = R32((u32)(r_ebp+0xfffffa80u));
    /* 0050f65c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f65d: mov ecx, dword ptr [ebp - 0x588] */ r_ecx = R32((u32)(r_ebp+0xfffffa78u));
    /* 0050f663: call 0x484ba0 */ r_esp -= 4; W32(r_esp, 0x50f668u); f_00484ba0();
    /* 0050f668: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050f66b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f66d: je 0x50f67b */ if (fZ) goto L_0050f67b;
L_0050f66f:; BB(0x0050f66f);
    /* 0050f66f: mov dword ptr [ebp - 0x58c], 1 */ W32((u32)(r_ebp+0xfffffa74u), 0x1u);
    /* 0050f679: jmp 0x50f685 */ goto L_0050f685;
L_0050f67b:; BB(0x0050f67b);
    /* 0050f67b: mov dword ptr [ebp - 0x58c], 0 */ W32((u32)(r_ebp+0xfffffa74u), 0x0u);
L_0050f685:; BB(0x0050f685);
    /* 0050f685: mov dl, byte ptr [ebp - 0x58c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffa74u))) & 0xffu);
    /* 0050f68b: mov byte ptr [ebp - 0x2cd], dl */ W8((u32)(r_ebp+0xfffffd33u), (u8)r_edx);
    /* 0050f691: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 0050f698: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f69e: and eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f6a3: je 0x50f6ba */ if (fZ) goto L_0050f6ba;
L_0050f6a5:; BB(0x0050f6a5);
    /* 0050f6a5: and dword ptr [ebp - 0x4ac], 0xffffbfff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f6af: lea ecx, [ebp - 0x2d8] */ r_ecx = (u32)(r_ebp+0xfffffd28u);
    /* 0050f6b5: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f6bau); f_00484470();
L_0050f6ba:; BB(0x0050f6ba);
    /* 0050f6ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f6c1: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f6c7: and ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050f6cd: je 0x50f6e4 */ if (fZ) goto L_0050f6e4;
L_0050f6cf:; BB(0x0050f6cf);
    /* 0050f6cf: and dword ptr [ebp - 0x4ac], 0xffffdfff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f6d9: lea ecx, [ebp - 0x2d9] */ r_ecx = (u32)(r_ebp+0xfffffd27u);
    /* 0050f6df: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x50f6e4u); f_00464210();
L_0050f6e4:; BB(0x0050f6e4);
    /* 0050f6e4: movzx edx, byte ptr [ebp - 0x2cd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffd33u));
    /* 0050f6eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f6ed: je 0x50f70a */ if (fZ) goto L_0050f70a;
L_0050f6ef:; BB(0x0050f6ef);
    /* 0050f6ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f6f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f6f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f6f9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f6feu); f_0047e3b0();
    /* 0050f6fe: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f700: call 0x4cd0d0 */ r_esp -= 4; W32(r_esp, 0x50f705u); f_004cd0d0();
    /* 0050f705: jmp 0x50fc17 */ goto L_0050fc17;
L_0050f70a:; BB(0x0050f70a);
    /* 0050f70a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f710: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x50f715u); f_0047e280();
    /* 0050f715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f717: jne 0x50f8b7 */ if (!fZ) goto L_0050f8b7;
L_0050f71d:; BB(0x0050f71d);
    /* 0050f71d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f723: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50f728u); f_0047d6f0();
    /* 0050f728: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f72b: je 0x50f8b7 */ if (fZ) goto L_0050f8b7;
L_0050f731:; BB(0x0050f731);
    /* 0050f731: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f737: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50f73cu); f_0047e190();
    /* 0050f73c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f73e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f741: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050f744: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f747: cmp dword ptr [0x793078], ecx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f74d: jl 0x50f8b7 */ if ((fS!=fO)) goto L_0050f8b7;
L_0050f753:; BB(0x0050f753);
    /* 0050f753: lea ecx, [ebp - 0x2ec] */ r_ecx = (u32)(r_ebp+0xfffffd14u);
    /* 0050f759: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x50f75eu); f_004a20d0();
    /* 0050f75e: mov dword ptr [ebp - 0x590], eax */ W32((u32)(r_ebp+0xfffffa70u), r_eax);
    /* 0050f764: mov edx, dword ptr [ebp - 0x590] */ r_edx = R32((u32)(r_ebp+0xfffffa70u));
    /* 0050f76a: mov dword ptr [ebp - 0x594], edx */ W32((u32)(r_ebp+0xfffffa6cu), r_edx);
    /* 0050f770: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 0050f777: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f77d: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f782: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050f788: lea ecx, [ebp - 0x2e4] */ r_ecx = (u32)(r_ebp+0xfffffd1cu);
    /* 0050f78e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f78f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f795: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f79au); f_0047e3b0();
    /* 0050f79a: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f79c: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f7a1u); f_004c8300();
    /* 0050f7a1: mov dword ptr [ebp - 0x598], eax */ W32((u32)(r_ebp+0xfffffa68u), r_eax);
    /* 0050f7a7: mov edx, dword ptr [ebp - 0x598] */ r_edx = R32((u32)(r_ebp+0xfffffa68u));
    /* 0050f7ad: mov dword ptr [ebp - 0x59c], edx */ W32((u32)(r_ebp+0xfffffa64u), r_edx);
    /* 0050f7b3: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 0050f7ba: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f7c0: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f7c5: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050f7cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7d9: lea ecx, [ebp - 0x2e8] */ r_ecx = (u32)(r_ebp+0xfffffd18u);
    /* 0050f7df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f7e0: mov ecx, dword ptr [ebp - 0x59c] */ r_ecx = R32((u32)(r_ebp+0xfffffa64u));
    /* 0050f7e6: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50f7ebu); f_00485940();
    /* 0050f7eb: mov dword ptr [ebp - 0x5a0], eax */ W32((u32)(r_ebp+0xfffffa60u), r_eax);
    /* 0050f7f1: mov edx, dword ptr [ebp - 0x5a0] */ r_edx = R32((u32)(r_ebp+0xfffffa60u));
    /* 0050f7f7: mov dword ptr [ebp - 0x5a4], edx */ W32((u32)(r_ebp+0xfffffa5cu), r_edx);
    /* 0050f7fd: mov dword ptr [ebp - 4], 0x20 */ W32((u32)(r_ebp+0xfffffffcu), 0x20u);
    /* 0050f804: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f80a: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f80f: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050f815: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f81a: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f81f: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f824: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050f829: mov ecx, dword ptr [0x79138c] */ r_ecx = R32((u32)(0x79138cu));
    /* 0050f82f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f830: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 0050f836: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f837: mov ecx, dword ptr [ebp - 0x594] */ r_ecx = R32((u32)(r_ebp+0xfffffa6cu));
    /* 0050f83d: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x50f842u); f_004a2100();
    /* 0050f842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050f843: mov ecx, dword ptr [ebp - 0x5a4] */ r_ecx = R32((u32)(r_ebp+0xfffffa5cu));
    /* 0050f849: call 0x4a2570 */ r_esp -= 4; W32(r_esp, 0x50f84eu); f_004a2570();
    /* 0050f84e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050f851: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f853: je 0x50f8b7 */ if (fZ) goto L_0050f8b7;
L_0050f855:; BB(0x0050f855);
    /* 0050f855: lea ecx, [ebp - 0x2f4] */ r_ecx = (u32)(r_ebp+0xfffffd0cu);
    /* 0050f85b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f85c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f862: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f867u); f_0047e3b0();
    /* 0050f867: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f869: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50f86eu); f_004c8300();
    /* 0050f86e: mov dword ptr [ebp - 0x5a8], eax */ W32((u32)(r_ebp+0xfffffa58u), r_eax);
    /* 0050f874: mov edx, dword ptr [ebp - 0x5a8] */ r_edx = R32((u32)(r_ebp+0xfffffa58u));
    /* 0050f87a: mov dword ptr [ebp - 0x5ac], edx */ W32((u32)(r_ebp+0xfffffa54u), r_edx);
    /* 0050f880: mov dword ptr [ebp - 4], 0x21 */ W32((u32)(r_ebp+0xfffffffcu), 0x21u);
    /* 0050f887: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f88d: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050f892: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050f898: mov ecx, dword ptr [ebp - 0x5ac] */ r_ecx = R32((u32)(r_ebp+0xfffffa54u));
    /* 0050f89e: call 0x484bf0 */ r_esp -= 4; W32(r_esp, 0x50f8a3u); f_00484bf0();
    /* 0050f8a3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0050f8a6: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f8a9: jge 0x50f8b7 */ if ((fS==fO)) goto L_0050f8b7;
L_0050f8ab:; BB(0x0050f8ab);
    /* 0050f8ab: mov dword ptr [ebp - 0x5b0], 1 */ W32((u32)(r_ebp+0xfffffa50u), 0x1u);
    /* 0050f8b5: jmp 0x50f8c1 */ goto L_0050f8c1;
L_0050f8b7:; BB(0x0050f8b7);
    /* 0050f8b7: mov dword ptr [ebp - 0x5b0], 0 */ W32((u32)(r_ebp+0xfffffa50u), 0x0u);
L_0050f8c1:; BB(0x0050f8c1);
    /* 0050f8c1: mov dl, byte ptr [ebp - 0x5b0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffa50u))) & 0xffu);
    /* 0050f8c7: mov byte ptr [ebp - 0x2da], dl */ W8((u32)(r_ebp+0xfffffd26u), (u8)r_edx);
    /* 0050f8cd: mov dword ptr [ebp - 4], 0x20 */ W32((u32)(r_ebp+0xfffffffcu), 0x20u);
    /* 0050f8d4: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f8da: and eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f8df: je 0x50f8f6 */ if (fZ) goto L_0050f8f6;
L_0050f8e1:; BB(0x0050f8e1);
    /* 0050f8e1: and dword ptr [ebp - 0x4ac], 0xfffbffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f8eb: lea ecx, [ebp - 0x2f4] */ r_ecx = (u32)(r_ebp+0xfffffd0cu);
    /* 0050f8f1: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f8f6u); f_00484470();
L_0050f8f6:; BB(0x0050f8f6);
    /* 0050f8f6: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 0050f8fd: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f903: and ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050f909: je 0x50f920 */ if (fZ) goto L_0050f920;
L_0050f90b:; BB(0x0050f90b);
    /* 0050f90b: and dword ptr [ebp - 0x4ac], 0xfffdffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f915: lea ecx, [ebp - 0x2e8] */ r_ecx = (u32)(r_ebp+0xfffffd18u);
    /* 0050f91b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f920u); f_004a20f0();
L_0050f920:; BB(0x0050f920);
    /* 0050f920: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 0050f927: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f92d: and edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050f933: je 0x50f94a */ if (fZ) goto L_0050f94a;
L_0050f935:; BB(0x0050f935);
    /* 0050f935: and dword ptr [ebp - 0x4ac], 0xfffeffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f93f: lea ecx, [ebp - 0x2e4] */ r_ecx = (u32)(r_ebp+0xfffffd1cu);
    /* 0050f945: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50f94au); f_00484470();
L_0050f94a:; BB(0x0050f94a);
    /* 0050f94a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050f951: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050f957: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050f95c: je 0x50f973 */ if (fZ) goto L_0050f973;
L_0050f95e:; BB(0x0050f95e);
    /* 0050f95e: and dword ptr [ebp - 0x4ac], 0xffff7fff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050f968: lea ecx, [ebp - 0x2ec] */ r_ecx = (u32)(r_ebp+0xfffffd14u);
    /* 0050f96e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50f973u); f_004a20f0();
L_0050f973:; BB(0x0050f973);
    /* 0050f973: movzx ecx, byte ptr [ebp - 0x2da] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffd26u));
    /* 0050f97a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f97c: je 0x50f999 */ if (fZ) goto L_0050f999;
L_0050f97e:; BB(0x0050f97e);
    /* 0050f97e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050f981: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050f982: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f988: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50f98du); f_0047e3b0();
    /* 0050f98d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050f98f: call 0x4cd0f0 */ r_esp -= 4; W32(r_esp, 0x50f994u); f_004cd0f0();
    /* 0050f994: jmp 0x50fc17 */ goto L_0050fc17;
L_0050f999:; BB(0x0050f999);
    /* 0050f999: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f99f: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x50f9a4u); f_0047e280();
    /* 0050f9a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f9a7: jne 0x50fb04 */ if (!fZ) goto L_0050fb04;
L_0050f9ad:; BB(0x0050f9ad);
    /* 0050f9ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f9b3: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50f9b8u); f_0047e190();
    /* 0050f9b8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f9bb: je 0x50fb04 */ if (fZ) goto L_0050fb04;
L_0050f9c1:; BB(0x0050f9c1);
    /* 0050f9c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f9c7: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50f9ccu); f_0047d6f0();
    /* 0050f9cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f9ce: jne 0x50fb04 */ if (!fZ) goto L_0050fb04;
L_0050f9d4:; BB(0x0050f9d4);
    /* 0050f9d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050f9da: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50f9dfu); f_0047e190();
    /* 0050f9df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f9e1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050f9e4: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050f9e7: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050f9ea: cmp dword ptr [0x793078], ecx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050f9f0: jl 0x50fb04 */ if ((fS!=fO)) goto L_0050fb04;
L_0050f9f6:; BB(0x0050f9f6);
    /* 0050f9f6: lea ecx, [ebp - 0x308] */ r_ecx = (u32)(r_ebp+0xfffffcf8u);
    /* 0050f9fc: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x50fa01u); f_004a20d0();
    /* 0050fa01: mov dword ptr [ebp - 0x5b4], eax */ W32((u32)(r_ebp+0xfffffa4cu), r_eax);
    /* 0050fa07: mov edx, dword ptr [ebp - 0x5b4] */ r_edx = R32((u32)(r_ebp+0xfffffa4cu));
    /* 0050fa0d: mov dword ptr [ebp - 0x5b8], edx */ W32((u32)(r_ebp+0xfffffa48u), r_edx);
    /* 0050fa13: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 0050fa1a: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050fa20: or eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fa25: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050fa2b: lea ecx, [ebp - 0x300] */ r_ecx = (u32)(r_ebp+0xfffffd00u);
    /* 0050fa31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fa38: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50fa3du); f_0047e3b0();
    /* 0050fa3d: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fa3f: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50fa44u); f_004c8300();
    /* 0050fa44: mov dword ptr [ebp - 0x5bc], eax */ W32((u32)(r_ebp+0xfffffa44u), r_eax);
    /* 0050fa4a: mov edx, dword ptr [ebp - 0x5bc] */ r_edx = R32((u32)(r_ebp+0xfffffa44u));
    /* 0050fa50: mov dword ptr [ebp - 0x5c0], edx */ W32((u32)(r_ebp+0xfffffa40u), r_edx);
    /* 0050fa56: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 0050fa5d: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050fa63: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fa68: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050fa6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa7c: lea ecx, [ebp - 0x304] */ r_ecx = (u32)(r_ebp+0xfffffcfcu);
    /* 0050fa82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fa83: mov ecx, dword ptr [ebp - 0x5c0] */ r_ecx = R32((u32)(r_ebp+0xfffffa40u));
    /* 0050fa89: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x50fa8eu); f_00485940();
    /* 0050fa8e: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
    /* 0050fa94: mov edx, dword ptr [ebp - 0x5c4] */ r_edx = R32((u32)(r_ebp+0xfffffa3cu));
    /* 0050fa9a: mov dword ptr [ebp - 0x5c8], edx */ W32((u32)(r_ebp+0xfffffa38u), r_edx);
    /* 0050faa0: mov dword ptr [ebp - 4], 0x24 */ W32((u32)(r_ebp+0xfffffffcu), 0x24u);
    /* 0050faa7: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050faad: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050fab2: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 0050fab8: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fabd: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fac2: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fac7: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050facc: mov ecx, dword ptr [0x791410] */ r_ecx = R32((u32)(0x791410u));
    /* 0050fad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fad3: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 0050fad9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fada: mov ecx, dword ptr [ebp - 0x5b8] */ r_ecx = R32((u32)(r_ebp+0xfffffa48u));
    /* 0050fae0: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x50fae5u); f_004a2100();
    /* 0050fae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fae6: mov ecx, dword ptr [ebp - 0x5c8] */ r_ecx = R32((u32)(r_ebp+0xfffffa38u));
    /* 0050faec: call 0x4a2570 */ r_esp -= 4; W32(r_esp, 0x50faf1u); f_004a2570();
    /* 0050faf1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050faf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050faf6: je 0x50fb04 */ if (fZ) goto L_0050fb04;
L_0050faf8:; BB(0x0050faf8);
    /* 0050faf8: mov dword ptr [ebp - 0x5cc], 1 */ W32((u32)(r_ebp+0xfffffa34u), 0x1u);
    /* 0050fb02: jmp 0x50fb0e */ goto L_0050fb0e;
L_0050fb04:; BB(0x0050fb04);
    /* 0050fb04: mov dword ptr [ebp - 0x5cc], 0 */ W32((u32)(r_ebp+0xfffffa34u), 0x0u);
L_0050fb0e:; BB(0x0050fb0e);
    /* 0050fb0e: mov cl, byte ptr [ebp - 0x5cc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffa34u))) & 0xffu);
    /* 0050fb14: mov byte ptr [ebp - 0x2f5], cl */ W8((u32)(r_ebp+0xfffffd0bu), (u8)r_ecx);
    /* 0050fb1a: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 0050fb21: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050fb27: and edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0050fb2d: je 0x50fb44 */ if (fZ) goto L_0050fb44;
L_0050fb2f:; BB(0x0050fb2f);
    /* 0050fb2f: and dword ptr [ebp - 0x4ac], 0xffdfffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050fb39: lea ecx, [ebp - 0x304] */ r_ecx = (u32)(r_ebp+0xfffffcfcu);
    /* 0050fb3f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50fb44u); f_004a20f0();
L_0050fb44:; BB(0x0050fb44);
    /* 0050fb44: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 0050fb4b: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050fb51: and eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0050fb56: je 0x50fb6d */ if (fZ) goto L_0050fb6d;
L_0050fb58:; BB(0x0050fb58);
    /* 0050fb58: and dword ptr [ebp - 0x4ac], 0xffefffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050fb62: lea ecx, [ebp - 0x300] */ r_ecx = (u32)(r_ebp+0xfffffd00u);
    /* 0050fb68: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50fb6du); f_00484470();
L_0050fb6d:; BB(0x0050fb6d);
    /* 0050fb6d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050fb74: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0050fb7a: and ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050fb80: je 0x50fb97 */ if (fZ) goto L_0050fb97;
L_0050fb82:; BB(0x0050fb82);
    /* 0050fb82: and dword ptr [ebp - 0x4ac], 0xfff7ffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0050fb8c: lea ecx, [ebp - 0x308] */ r_ecx = (u32)(r_ebp+0xfffffcf8u);
    /* 0050fb92: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x50fb97u); f_004a20f0();
L_0050fb97:; BB(0x0050fb97);
    /* 0050fb97: movzx edx, byte ptr [ebp - 0x2f5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffd0bu));
    /* 0050fb9e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fba0: je 0x50fbba */ if (fZ) goto L_0050fbba;
L_0050fba2:; BB(0x0050fba2);
    /* 0050fba2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050fba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fba6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fbac: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50fbb1u); f_0047e3b0();
    /* 0050fbb1: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fbb3: call 0x4ccfa0 */ r_esp -= 4; W32(r_esp, 0x50fbb8u); f_004ccfa0();
    /* 0050fbb8: jmp 0x50fc17 */ goto L_0050fc17;
L_0050fbba:; BB(0x0050fbba);
    /* 0050fbba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fbc0: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50fbc5u); f_0047e190();
    /* 0050fbc5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fbc7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fbca: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050fbcd: lea ecx, [ecx + ecx + 5] */ r_ecx = (u32)(r_ecx+r_ecx+0x5u);
    /* 0050fbd1: cmp dword ptr [0x793078], ecx */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fbd7: jne 0x50fc01 */ if (!fZ) goto L_0050fc01;
L_0050fbd9:; BB(0x0050fbd9);
    /* 0050fbd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fbdf: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50fbe4u); f_0047e190();
    /* 0050fbe4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fbe7: je 0x50fc01 */ if (fZ) goto L_0050fc01;
L_0050fbe9:; BB(0x0050fbe9);
    /* 0050fbe9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050fbec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fbed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fbf3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50fbf8u); f_0047e3b0();
    /* 0050fbf8: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fbfa: call 0x4cca20 */ r_esp -= 4; W32(r_esp, 0x50fbffu); f_004cca20();
    /* 0050fbff: jmp 0x50fc17 */ goto L_0050fc17;
L_0050fc01:; BB(0x0050fc01);
    /* 0050fc01: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050fc04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fc0b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50fc10u); f_0047e3b0();
    /* 0050fc10: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fc12: call 0x4cca00 */ r_esp -= 4; W32(r_esp, 0x50fc17u); f_004cca00();
L_0050fc17:; BB(0x0050fc17);
    /* 0050fc17: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050fc19:; BB(0x0050fc19);
    /* 0050fc19: cmp dword ptr [0x793064], 6 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fc20: jne 0x50fc3a */ if (!fZ) goto L_0050fc3a;
L_0050fc22:; BB(0x0050fc22);
    /* 0050fc22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0050fc25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fc2c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50fc31u); f_0047e3b0();
    /* 0050fc31: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fc33: call 0x4cca90 */ r_esp -= 4; W32(r_esp, 0x50fc38u); f_004cca90();
    /* 0050fc38: jmp 0x50fc4f */ goto L_0050fc4f;
L_0050fc3a:; BB(0x0050fc3a);
    /* 0050fc3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc3c: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fc42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050fc44: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fc4a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0050fc4d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50fc4fu); call_ind(t); }
L_0050fc4f:; BB(0x0050fc4f);
    /* 0050fc4f: jmp 0x50fc66 */ goto L_0050fc66;
L_0050fc51:; BB(0x0050fc51);
    /* 0050fc51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc53: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fc59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fc5b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fc61: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050fc64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fc66u); call_ind(t); }
L_0050fc66:; BB(0x0050fc66);
    /* 0050fc66: jmp 0x516cb0 */ goto L_00516cb0;
L_0050fc6b:; BB(0x0050fc6b);
    /* 0050fc6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fc71: mov byte ptr [ecx + 0xe8], 0 */ W8((u32)(r_ecx+0xe8u), 0x0u);
    /* 0050fc78: cmp dword ptr [0x793034], -1 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fc7f: jne 0x50fc98 */ if (!fZ) goto L_0050fc98;
L_0050fc81:; BB(0x0050fc81);
    /* 0050fc81: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fc83: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fc89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050fc8b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fc91: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050fc94: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50fc96u); call_ind(t); }
    /* 0050fc96: jmp 0x50fd0b */ goto L_0050fd0b;
L_0050fc98:; BB(0x0050fc98);
    /* 0050fc98: cmp dword ptr [0x793034], -2 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fc9f: jne 0x50fcb8 */ if (!fZ) goto L_0050fcb8;
L_0050fca1:; BB(0x0050fca1);
    /* 0050fca1: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fca3: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fca9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fcab: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fcb1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050fcb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fcb6u); call_ind(t); }
    /* 0050fcb6: jmp 0x50fd0b */ goto L_0050fd0b;
L_0050fcb8:; BB(0x0050fcb8);
    /* 0050fcb8: cmp dword ptr [0x793034], -3 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fcbf: jne 0x50fcd8 */ if (!fZ) goto L_0050fcd8;
L_0050fcc1:; BB(0x0050fcc1);
    /* 0050fcc1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fcc3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fcc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050fccb: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fcd1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050fcd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fcd6u); call_ind(t); }
    /* 0050fcd6: jmp 0x50fd0b */ goto L_0050fd0b;
L_0050fcd8:; BB(0x0050fcd8);
    /* 0050fcd8: mov ecx, dword ptr [0x793034] */ r_ecx = R32((u32)(0x793034u));
    /* 0050fcde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fcdf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fce5: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x50fceau); f_0047e490();
    /* 0050fcea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fceb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fcf1: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x50fcf6u); f_0047e400();
    /* 0050fcf6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fcf8: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fcfe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050fd00: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fd06: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050fd09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50fd0bu); call_ind(t); }
L_0050fd0b:; BB(0x0050fd0b);
    /* 0050fd0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd0d: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fd13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fd15: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fd1b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050fd1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fd20u); call_ind(t); }
    /* 0050fd20: jmp 0x516cb0 */ goto L_00516cb0;
L_0050fd25:; BB(0x0050fd25);
    /* 0050fd25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd2b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fd2e: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x50fd33u); f_004f6420();
    /* 0050fd33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050fd35: jle 0x50fe4a */ if ((fZ||fS!=fO)) goto L_0050fe4a;
L_0050fd3b:; BB(0x0050fd3b);
    /* 0050fd3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd41: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fd44: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x50fd49u); f_004f6420();
    /* 0050fd49: mov esi, eax */ r_esi = r_eax;
    /* 0050fd4b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd51: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50fd56u); f_0047bc20();
    /* 0050fd56: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050fd59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd60: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fd63: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x50fd68u); f_004f64b0();
    /* 0050fd68: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0050fd6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd72: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x50fd77u); f_0047e3d0();
    /* 0050fd77: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fd79: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x50fd7eu); f_004c6b80();
    /* 0050fd7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd84: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fd87: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x50fd8cu); f_004f64b0();
    /* 0050fd8c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0050fd8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fd90: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fd96: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x50fd9bu); f_0047e3d0();
    /* 0050fd9b: mov ecx, eax */ r_ecx = r_eax;
    /* 0050fd9d: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x50fda2u); f_004da300();
    /* 0050fda2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fda8: call 0x47ecd0 */ r_esp -= 4; W32(r_esp, 0x50fdadu); f_0047ecd0();
    /* 0050fdad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fdb3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fdb6: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x50fdbbu); f_004f6840();
    /* 0050fdbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fdbc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fdc2: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x50fdc7u); f_0047ec90();
    /* 0050fdc7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fdcd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fdd0: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x50fdd5u); f_004f64b0();
    /* 0050fdd5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050fdd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fdd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fddf: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x50fde4u); f_0047e3d0();
    /* 0050fde4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0050fde7: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0050fdea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fdec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fdf2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050fdf5: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x50fdfau); f_004f6420();
    /* 0050fdfa: mov esi, eax */ r_esi = r_eax;
    /* 0050fdfc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fe02: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x50fe07u); f_0047bc20();
    /* 0050fe07: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050fe0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe0b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x50fe10u); f_0064c8a0();
    /* 0050fe10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050fe13: mov dword ptr [ebp - 0x310], eax */ W32((u32)(r_ebp+0xfffffcf0u), r_eax);
    /* 0050fe19: mov dword ptr [ebp - 0x30c], edx */ W32((u32)(r_ebp+0xfffffcf4u), r_edx);
    /* 0050fe1f: mov edx, dword ptr [ebp - 0x310] */ r_edx = R32((u32)(r_ebp+0xfffffcf0u));
    /* 0050fe25: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0050fe28: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0050fe2e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0050fe31: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0050fe34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe35: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050fe38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe39: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe3b: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0050fe3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe3f: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 0050fe45: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x50fe4au); f_005e7e40();
L_0050fe4a:; BB(0x0050fe4a);
    /* 0050fe4a: mov byte ptr [0x793030], 1 */ W8((u32)(0x793030u), 0x1u);
    /* 0050fe51: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe53: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fe59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050fe5b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fe61: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050fe64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fe66u); call_ind(t); }
    /* 0050fe66: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050fe68: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fe6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050fe70: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fe76: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0050fe79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fe7bu); call_ind(t); }
    /* 0050fe7b: jmp 0x516cb0 */ goto L_00516cb0;
L_0050fe80:; BB(0x0050fe80);
    /* 0050fe80: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fe86: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 0050fe90: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fe96: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50fe9bu); f_0047e190();
    /* 0050fe9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fe9e: jne 0x50fee1 */ if (!fZ) goto L_0050fee1;
L_0050fea0:; BB(0x0050fea0);
    /* 0050fea0: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fea7: jne 0x50fec7 */ if (!fZ) goto L_0050fec7;
L_0050fea9:; BB(0x0050fea9);
    /* 0050fea9: mov byte ptr [0x793031], 1 */ W8((u32)(0x793031u), 0x1u);
    /* 0050feb0: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0050feb2: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050feb8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050feba: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fec0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0050fec3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x50fec5u); call_ind(t); }
    /* 0050fec5: jmp 0x50fedc */ goto L_0050fedc;
L_0050fec7:; BB(0x0050fec7);
    /* 0050fec7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0050fec9: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fecf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050fed1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050fed7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050feda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50fedcu); call_ind(t); }
L_0050fedc:; BB(0x0050fedc);
    /* 0050fedc: jmp 0x50ffd4 */ goto L_0050ffd4;
L_0050fee1:; BB(0x0050fee1);
    /* 0050fee1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050fee7: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50feecu); f_0047e190();
    /* 0050feec: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050feef: jne 0x50ff32 */ if (!fZ) goto L_0050ff32;
L_0050fef1:; BB(0x0050fef1);
    /* 0050fef1: cmp dword ptr [0x793078], 5 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050fef8: jne 0x50ff18 */ if (!fZ) goto L_0050ff18;
L_0050fefa:; BB(0x0050fefa);
    /* 0050fefa: mov byte ptr [0x793031], 1 */ W8((u32)(0x793031u), 0x1u);
    /* 0050ff01: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff03: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050ff0b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff11: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ff14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ff16u); call_ind(t); }
    /* 0050ff16: jmp 0x50ff2d */ goto L_0050ff2d;
L_0050ff18:; BB(0x0050ff18);
    /* 0050ff18: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff1a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050ff22: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff28: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ff2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ff2du); call_ind(t); }
L_0050ff2d:; BB(0x0050ff2d);
    /* 0050ff2d: jmp 0x50ffd4 */ goto L_0050ffd4;
L_0050ff32:; BB(0x0050ff32);
    /* 0050ff32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050ff38: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x50ff3du); f_0047e190();
    /* 0050ff3d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ff40: jne 0x50ffb9 */ if (!fZ) goto L_0050ffb9;
L_0050ff42:; BB(0x0050ff42);
    /* 0050ff42: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ff49: jne 0x50ff62 */ if (!fZ) goto L_0050ff62;
L_0050ff4b:; BB(0x0050ff4b);
    /* 0050ff4b: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff4d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050ff55: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff5b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ff5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ff60u); call_ind(t); }
    /* 0050ff60: jmp 0x50ffb7 */ goto L_0050ffb7;
L_0050ff62:; BB(0x0050ff62);
    /* 0050ff62: cmp dword ptr [0x793078], 8 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ff69: jne 0x50ff82 */ if (!fZ) goto L_0050ff82;
L_0050ff6b:; BB(0x0050ff6b);
    /* 0050ff6b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff6d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050ff75: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff7b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ff7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ff80u); call_ind(t); }
    /* 0050ff80: jmp 0x50ffb7 */ goto L_0050ffb7;
L_0050ff82:; BB(0x0050ff82);
    /* 0050ff82: cmp dword ptr [0x793078], 4 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ff89: jne 0x50ffa2 */ if (!fZ) goto L_0050ffa2;
L_0050ff8b:; BB(0x0050ff8b);
    /* 0050ff8b: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ff8d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff93: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050ff95: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ff9b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ff9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ffa0u); call_ind(t); }
    /* 0050ffa0: jmp 0x50ffb7 */ goto L_0050ffb7;
L_0050ffa2:; BB(0x0050ffa2);
    /* 0050ffa2: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffa4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ffaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050ffac: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ffb2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0050ffb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x50ffb7u); call_ind(t); }
L_0050ffb7:; BB(0x0050ffb7);
    /* 0050ffb7: jmp 0x50ffd4 */ goto L_0050ffd4;
L_0050ffb9:; BB(0x0050ffb9);
    /* 0050ffb9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0050ffbb: jne 0x50ffd4 */ if (!fZ) goto L_0050ffd4;
L_0050ffbd:; BB(0x0050ffbd);
    /* 0050ffbd: push 0x642 */ { u32 v = 0x642u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffc2: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffc7: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffcc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x50ffd1u); f_005e9f20();
    /* 0050ffd1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0050ffd4:; BB(0x0050ffd4);
    /* 0050ffd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ffd6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0050ffdc: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x50ffe1u); f_005fc490();
    /* 0050ffe1: jmp 0x516cb0 */ goto L_00516cb0;
L_0050ffe6:; BB(0x0050ffe6);
    /* 0050ffe6: mov byte ptr [0x79310a], 0 */ W8((u32)(0x79310au), 0x0u);
    /* 0050ffed: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 0050fff7: jmp 0x510006 */ goto L_00510006;
L_0050fff9:; BB(0x0050fff9);
    /* 0050fff9: mov eax, dword ptr [0x793138] */ r_eax = R32((u32)(0x793138u));
    /* 0050fffe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00510001: mov dword ptr [0x793138], eax */ W32((u32)(0x793138u), r_eax);
L_00510006:; BB(0x00510006);
    /* 00510006: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051000c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x510011u); f_0047f950();
    /* 00510011: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510017: jge 0x510034 */ if ((fS==fO)) goto L_00510034;
L_00510019:; BB(0x00510019);
    /* 00510019: mov ecx, dword ptr [0x793138] */ r_ecx = R32((u32)(0x793138u));
    /* 0051001f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510020: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510026: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51002bu); f_0047e390();
    /* 0051002b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051002d: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x510032u); f_004dc490();
    /* 00510032: jmp 0x50fff9 */ goto L_0050fff9;
L_00510034:; BB(0x00510034);
    /* 00510034: mov edx, dword ptr [0x793078] */ r_edx = R32((u32)(0x793078u));
    /* 0051003a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051003d: mov dword ptr [0x793078], edx */ W32((u32)(0x793078u), r_edx);
    /* 00510043: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510049: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x51004eu); f_0047bbc0();
    /* 0051004e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051004f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510055: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x51005au); f_0047e400();
    /* 0051005a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051005c: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510062: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510064: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051006a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051006d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51006fu); call_ind(t); }
    /* 0051006f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510071: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510077: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510079: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051007f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00510082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510084u); call_ind(t); }
    /* 00510084: jmp 0x516cb0 */ goto L_00516cb0;
L_00510089:; BB(0x00510089);
    /* 00510089: movzx ecx, byte ptr [0x793108] */ r_ecx = (u32)R8((u32)(0x793108u));
    /* 00510090: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510092: jne 0x51009f */ if (!fZ) goto L_0051009f;
L_00510094:; BB(0x00510094);
    /* 00510094: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051009a: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x51009fu); f_0047e440();
L_0051009f:; BB(0x0051009f);
    /* 0051009f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005100a5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5100aau); f_0047e3b0();
    /* 005100aa: mov ecx, eax */ r_ecx = r_eax;
    /* 005100ac: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5100b1u); f_004c7010();
    /* 005100b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100b4: je 0x5100d1 */ if (fZ) goto L_005100d1;
L_005100b6:; BB(0x005100b6);
    /* 005100b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005100bc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5100c1u); f_0047e3b0();
    /* 005100c1: mov ecx, eax */ r_ecx = r_eax;
    /* 005100c3: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5100c8u); f_004c7010();
    /* 005100c8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100cb: jne 0x510274 */ if (!fZ) goto L_00510274;
L_005100d1:; BB(0x005100d1);
    /* 005100d1: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005100d8: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005100df: jge 0x5100ef */ if ((fS==fO)) goto L_005100ef;
L_005100e1:; BB(0x005100e1);
    /* 005100e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005100e7: call 0x47d730 */ r_esp -= 4; W32(r_esp, 0x5100ecu); f_0047d730();
    /* 005100ec: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005100ef:; BB(0x005100ef);
    /* 005100ef: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005100f6: jne 0x51011a */ if (!fZ) goto L_0051011a;
L_005100f8:; BB(0x005100f8);
    /* 005100f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005100fe: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510103u); f_0047e3b0();
    /* 00510103: mov ecx, eax */ r_ecx = r_eax;
    /* 00510105: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51010au); f_004c6cb0();
    /* 0051010a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051010d: je 0x51011a */ if (fZ) goto L_0051011a;
L_0051010f:; BB(0x0051010f);
    /* 0051010f: movzx edx, byte ptr [0x791360] */ r_edx = (u32)R8((u32)(0x791360u));
    /* 00510116: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510118: je 0x51018a */ if (fZ) goto L_0051018a;
L_0051011a:; BB(0x0051011a);
    /* 0051011a: movzx eax, byte ptr [0x793108] */ r_eax = (u32)R8((u32)(0x793108u));
    /* 00510121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510123: je 0x510156 */ if (fZ) goto L_00510156;
L_00510125:; BB(0x00510125);
    /* 00510125: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510127: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051012a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051012d: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510134: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510136: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510138: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051013e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510143u); f_0047e3b0();
    /* 00510143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510144: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051014a: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x51014fu); f_0047b010();
    /* 0051014f: mov dword ptr [0x793060], eax */ W32((u32)(0x793060u), r_eax);
    /* 00510154: jmp 0x510185 */ goto L_00510185;
L_00510156:; BB(0x00510156);
    /* 00510156: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510158: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051015b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051015c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051015e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510164: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510165: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510167: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510169: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051016f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510174u); f_0047e3b0();
    /* 00510174: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510175: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051017b: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x510180u); f_0047b010();
    /* 00510180: mov dword ptr [0x793060], eax */ W32((u32)(0x793060u), r_eax);
L_00510185:; BB(0x00510185);
    /* 00510185: jmp 0x51026b */ goto L_0051026b;
L_0051018a:; BB(0x0051018a);
    /* 0051018a: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510191: jne 0x510200 */ if (!fZ) goto L_00510200;
L_00510193:; BB(0x00510193);
    /* 00510193: movzx edx, byte ptr [0x793108] */ r_edx = (u32)R8((u32)(0x793108u));
    /* 0051019a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051019c: je 0x5101cf */ if (fZ) goto L_005101cf;
L_0051019e:; BB(0x0051019e);
    /* 0051019e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005101a0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005101a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005101a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005101a6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005101ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005101ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005101af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005101b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005101b7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5101bcu); f_0047e3b0();
    /* 005101bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005101bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005101c3: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x5101c8u); f_0047b010();
    /* 005101c8: mov dword ptr [0x793060], eax */ W32((u32)(0x793060u), r_eax);
    /* 005101cd: jmp 0x5101fe */ goto L_005101fe;
L_005101cf:; BB(0x005101cf);
    /* 005101cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005101d1: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005101d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005101d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005101d7: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005101dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005101de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005101e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005101e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005101e8: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5101edu); f_0047e3b0();
    /* 005101ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005101ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005101f4: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x5101f9u); f_0047b010();
    /* 005101f9: mov dword ptr [0x793060], eax */ W32((u32)(0x793060u), r_eax);
L_005101fe:; BB(0x005101fe);
    /* 005101fe: jmp 0x51026b */ goto L_0051026b;
L_00510200:; BB(0x00510200);
    /* 00510200: movzx ecx, byte ptr [0x793108] */ r_ecx = (u32)R8((u32)(0x793108u));
    /* 00510207: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510209: je 0x51023c */ if (fZ) goto L_0051023c;
L_0051020b:; BB(0x0051020b);
    /* 0051020b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051020d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00510210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510213: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051021a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051021c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051021e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510224: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510229u); f_0047e3b0();
    /* 00510229: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051022a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510230: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x510235u); f_0047b010();
    /* 00510235: mov dword ptr [0x793060], eax */ W32((u32)(0x793060u), r_eax);
    /* 0051023a: jmp 0x51026b */ goto L_0051026b;
L_0051023c:; BB(0x0051023c);
    /* 0051023c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051023e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00510241: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510242: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510244: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051024a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051024b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051024d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051024f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510255: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51025au); f_0047e3b0();
    /* 0051025a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051025b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510261: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x510266u); f_0047b010();
    /* 00510266: mov dword ptr [0x793060], eax */ W32((u32)(0x793060u), r_eax);
L_0051026b:; BB(0x0051026b);
    /* 0051026b: mov byte ptr [0x793108], 0 */ W8((u32)(0x793108u), 0x0u);
    /* 00510272: jmp 0x510293 */ goto L_00510293;
L_00510274:; BB(0x00510274);
    /* 00510274: mov dword ptr [0x793060], 0 */ W32((u32)(0x793060u), 0x0u);
    /* 0051027e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510280: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510286: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510288: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051028e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00510291: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510293u); call_ind(t); }
L_00510293:; BB(0x00510293);
    /* 00510293: cmp dword ptr [0x793060], 2 */ {  u32 a = R32((u32)(0x793060u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051029a: jne 0x5102eb */ if (!fZ) goto L_005102eb;
L_0051029c:; BB(0x0051029c);
    /* 0051029c: mov byte ptr [0x793108], 1 */ W8((u32)(0x793108u), 0x1u);
    /* 005102a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005102a9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5102aeu); f_0047e3b0();
    /* 005102ae: mov ecx, eax */ r_ecx = r_eax;
    /* 005102b0: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5102b5u); f_004c6cb0();
    /* 005102b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005102b8: jne 0x5102d1 */ if (!fZ) goto L_005102d1;
L_005102ba:; BB(0x005102ba);
    /* 005102ba: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005102bc: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005102c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005102c4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005102ca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005102cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5102cfu); call_ind(t); }
    /* 005102cf: jmp 0x5102e6 */ goto L_005102e6;
L_005102d1:; BB(0x005102d1);
    /* 005102d1: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005102d3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005102d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005102db: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005102e1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005102e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5102e6u); call_ind(t); }
L_005102e6:; BB(0x005102e6);
    /* 005102e6: jmp 0x51038f */ goto L_0051038f;
L_005102eb:; BB(0x005102eb);
    /* 005102eb: cmp dword ptr [0x793060], 1 */ {  u32 a = R32((u32)(0x793060u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005102f2: jne 0x51032d */ if (!fZ) goto L_0051032d;
L_005102f4:; BB(0x005102f4);
    /* 005102f4: movzx ecx, byte ptr [0x793030] */ r_ecx = (u32)R8((u32)(0x793030u));
    /* 005102fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005102fd: jne 0x51032d */ if (!fZ) goto L_0051032d;
L_005102ff:; BB(0x005102ff);
    /* 005102ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510305: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51030au); f_0047e3b0();
    /* 0051030a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051030c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x510311u); f_004c7010();
    /* 00510311: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510314: jne 0x51032d */ if (!fZ) goto L_0051032d;
L_00510316:; BB(0x00510316);
    /* 00510316: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00510318: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051031e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510320: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510326: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00510329: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51032bu); call_ind(t); }
    /* 0051032b: jmp 0x51038f */ goto L_0051038f;
L_0051032d:; BB(0x0051032d);
    /* 0051032d: cmp dword ptr [0x793060], 4 */ {  u32 a = R32((u32)(0x793060u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510334: jne 0x51034d */ if (!fZ) goto L_0051034d;
L_00510336:; BB(0x00510336);
    /* 00510336: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00510338: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051033e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510340: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510346: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510349: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51034bu); call_ind(t); }
    /* 0051034b: jmp 0x51038f */ goto L_0051038f;
L_0051034d:; BB(0x0051034d);
    /* 0051034d: cmp dword ptr [0x793060], 3 */ {  u32 a = R32((u32)(0x793060u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510354: jne 0x51037a */ if (!fZ) goto L_0051037a;
L_00510356:; BB(0x00510356);
    /* 00510356: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00510358: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051035e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510360: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510366: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510369: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51036bu); call_ind(t); }
    /* 0051036b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051036d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510373: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x510378u); f_005fc490();
    /* 00510378: jmp 0x51038f */ goto L_0051038f;
L_0051037a:; BB(0x0051037a);
    /* 0051037a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051037c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510382: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510384: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051038a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051038d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51038fu); call_ind(t); }
L_0051038f:; BB(0x0051038f);
    /* 0051038f: jmp 0x516cb0 */ goto L_00516cb0;
L_00510394:; BB(0x00510394);
    /* 00510394: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00510396: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051039c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051039e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005103a4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005103a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5103a9u); call_ind(t); }
    /* 005103a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005103ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005103ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005103b3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5103b8u); f_0047e3b0();
    /* 005103b8: mov ecx, eax */ r_ecx = r_eax;
    /* 005103ba: call 0x4cd250 */ r_esp -= 4; W32(r_esp, 0x5103bfu); f_004cd250();
    /* 005103bf: jmp 0x516cb0 */ goto L_00516cb0;
L_005103c4:; BB(0x005103c4);
    /* 005103c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005103ca: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x5103cfu); f_0047e420();
    /* 005103cf: mov esi, eax */ r_esi = r_eax;
    /* 005103d1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005103d7: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5103dcu); f_0047bbc0();
    /* 005103dc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005103de: je 0x5103f7 */ if (fZ) goto L_005103f7;
L_005103e0:; BB(0x005103e0);
    /* 005103e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005103e2: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005103e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005103ea: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005103f0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005103f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5103f5u); call_ind(t); }
    /* 005103f5: jmp 0x51040c */ goto L_0051040c;
L_005103f7:; BB(0x005103f7);
    /* 005103f7: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005103f9: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005103ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510401: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510407: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051040a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51040cu); call_ind(t); }
L_0051040c:; BB(0x0051040c);
    /* 0051040c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510412: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510417u); f_0047e3b0();
    /* 00510417: mov ecx, eax */ r_ecx = r_eax;
    /* 00510419: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51041eu); f_004c6cb0();
    /* 0051041e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510421: je 0x510432 */ if (fZ) goto L_00510432;
L_00510423:; BB(0x00510423);
    /* 00510423: movzx ecx, byte ptr [0x791360] */ r_ecx = (u32)R8((u32)(0x791360u));
    /* 0051042a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051042c: je 0x5104db */ if (fZ) goto L_005104db;
L_00510432:; BB(0x00510432);
    /* 00510432: cmp dword ptr [0x793078], 7 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510439: jne 0x5104db */ if (!fZ) goto L_005104db;
L_0051043f:; BB(0x0051043f);
    /* 0051043f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510445: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51044au); f_0047e3b0();
    /* 0051044a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051044c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x510451u); f_004c7010();
    /* 00510451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510454: je 0x51046d */ if (fZ) goto L_0051046d;
L_00510456:; BB(0x00510456);
    /* 00510456: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051045c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510461u); f_0047e3b0();
    /* 00510461: mov ecx, eax */ r_ecx = r_eax;
    /* 00510463: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x510468u); f_004c7010();
    /* 00510468: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051046b: jne 0x5104db */ if (!fZ) goto L_005104db;
L_0051046d:; BB(0x0051046d);
    /* 0051046d: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 00510470: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510471: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510477: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51047cu); f_0047e3b0();
    /* 0051047c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051047e: call 0x4c8700 */ r_esp -= 4; W32(r_esp, 0x510483u); f_004c8700();
    /* 00510483: mov dword ptr [ebp - 4], 0x25 */ W32((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 0051048a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051048c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051048f: mov ecx, esp */ r_ecx = r_esp;
    /* 00510491: mov dword ptr [ebp - 0x314], esp */ W32((u32)(r_ebp+0xfffffcecu), r_esp);
    /* 00510497: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 0051049a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051049b: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x5104a0u); f_00484320();
    /* 005104a0: mov dword ptr [ebp - 0x5d0], eax */ W32((u32)(r_ebp+0xfffffa30u), r_eax);
    /* 005104a6: mov ecx, dword ptr [ebp - 0x5d0] */ r_ecx = R32((u32)(r_ebp+0xfffffa30u));
    /* 005104ac: mov dword ptr [ebp - 0x5d4], ecx */ W32((u32)(r_ebp+0xfffffa2cu), r_ecx);
    /* 005104b2: mov byte ptr [ebp - 4], 0x26 */ W8((u32)(r_ebp+0xfffffffcu), 0x26u);
    /* 005104b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005104bc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5104c1u); f_0047e3b0();
    /* 005104c1: mov byte ptr [ebp - 4], 0x25 */ W8((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 005104c5: mov ecx, eax */ r_ecx = r_eax;
    /* 005104c7: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x5104ccu); f_004c88a0();
    /* 005104cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005104d3: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 005104d6: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5104dbu); f_00484470();
L_005104db:; BB(0x005104db);
    /* 005104db: movzx edx, byte ptr [0x79310a] */ r_edx = (u32)R8((u32)(0x79310au));
    /* 005104e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005104e4: jne 0x5105d7 */ if (!fZ) goto L_005105d7;
L_005104ea:; BB(0x005104ea);
    /* 005104ea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005104f0: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5104f5u); f_0047e190();
    /* 005104f5: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005104f8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005104fa: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005104fc: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005104ff: cmp dword ptr [0x793078], eax */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510505: jne 0x5105d7 */ if (!fZ) goto L_005105d7;
L_0051050b:; BB(0x0051050b);
    /* 0051050b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510511: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x510516u); f_0047e280();
    /* 00510516: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510518: jne 0x5105d7 */ if (!fZ) goto L_005105d7;
L_0051051e:; BB(0x0051051e);
    /* 0051051e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510524: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x510529u); f_0047d6f0();
    /* 00510529: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051052c: je 0x5105d7 */ if (fZ) goto L_005105d7;
L_00510532:; BB(0x00510532);
    /* 00510532: lea eax, [ebp - 0x31c] */ r_eax = (u32)(r_ebp+0xfffffce4u);
    /* 00510538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510539: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051053f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510544u); f_0047e3b0();
    /* 00510544: mov ecx, eax */ r_ecx = r_eax;
    /* 00510546: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x51054bu); f_004c8300();
    /* 0051054b: mov dword ptr [ebp - 0x5d8], eax */ W32((u32)(r_ebp+0xfffffa28u), r_eax);
    /* 00510551: mov ecx, dword ptr [ebp - 0x5d8] */ r_ecx = R32((u32)(r_ebp+0xfffffa28u));
    /* 00510557: mov dword ptr [ebp - 0x5dc], ecx */ W32((u32)(r_ebp+0xfffffa24u), r_ecx);
    /* 0051055d: mov dword ptr [ebp - 4], 0x27 */ W32((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 00510564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510568: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051056a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051056c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051056e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510570: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00510572: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 00510575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510576: mov ecx, dword ptr [ebp - 0x5dc] */ r_ecx = R32((u32)(r_ebp+0xfffffa24u));
    /* 0051057c: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x510581u); f_00485940();
    /* 00510581: mov byte ptr [ebp - 4], 0x29 */ W8((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 00510585: lea ecx, [ebp - 0x31c] */ r_ecx = (u32)(r_ebp+0xfffffce4u);
    /* 0051058b: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x510590u); f_00484470();
    /* 00510590: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 00510595: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510596: lea ecx, [ebp - 0x31d] */ r_ecx = (u32)(r_ebp+0xfffffce3u);
    /* 0051059c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051059d: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005105a0: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x5105a5u); f_004a2160();
    /* 005105a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005105a7: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x5105acu); f_004a1e10();
    /* 005105ac: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005105af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005105b1: je 0x5105c8 */ if (fZ) goto L_005105c8;
L_005105b3:; BB(0x005105b3);
    /* 005105b3: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005105b5: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005105bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005105bd: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005105c3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005105c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5105c8u); call_ind(t); }
L_005105c8:; BB(0x005105c8);
    /* 005105c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005105cf: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 005105d2: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x5105d7u); f_004a20f0();
L_005105d7:; BB(0x005105d7);
    /* 005105d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005105d9: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005105df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005105e1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005105e7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005105ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5105ecu); call_ind(t); }
    /* 005105ec: jmp 0x516cb0 */ goto L_00516cb0;
L_005105f1:; BB(0x005105f1);
    /* 005105f1: mov byte ptr [0x79310a], 1 */ W8((u32)(0x79310au), 0x1u);
    /* 005105f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005105fe: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x510603u); f_0047e420();
    /* 00510603: mov esi, eax */ r_esi = r_eax;
    /* 00510605: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051060b: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x510610u); f_0047bbc0();
    /* 00510610: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510612: je 0x51062b */ if (fZ) goto L_0051062b;
L_00510614:; BB(0x00510614);
    /* 00510614: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00510616: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051061c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051061e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510624: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510627: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510629u); call_ind(t); }
    /* 00510629: jmp 0x510640 */ goto L_00510640;
L_0051062b:; BB(0x0051062b);
    /* 0051062b: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0051062d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510633: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510635: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051063b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051063e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510640u); call_ind(t); }
L_00510640:; BB(0x00510640);
    /* 00510640: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510646: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51064bu); f_0047e3b0();
    /* 0051064b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051064d: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x510652u); f_004c6cb0();
    /* 00510652: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510655: jne 0x510672 */ if (!fZ) goto L_00510672;
L_00510657:; BB(0x00510657);
    /* 00510657: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051065a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051065b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510661: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510666u); f_0047e3b0();
    /* 00510666: mov ecx, eax */ r_ecx = r_eax;
    /* 00510668: call 0x4cd090 */ r_esp -= 4; W32(r_esp, 0x51066du); f_004cd090();
    /* 0051066d: jmp 0x51080a */ goto L_0051080a;
L_00510672:; BB(0x00510672);
    /* 00510672: mov word ptr [ebp - 0x68], 0 */ W16((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00510678: mov word ptr [ebp - 0x6c], 0 */ W16((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0051067e: jmp 0x51068c */ goto L_0051068c;
L_00510680:; BB(0x00510680);
    /* 00510680: mov dx, word ptr [ebp - 0x6c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff94u))) & 0xffffu);
    /* 00510684: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00510688: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
L_0051068c:; BB(0x0051068c);
    /* 0051068c: movsx esi, word ptr [ebp - 0x6c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00510690: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510696: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x51069bu); f_0047f950();
    /* 0051069b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051069d: jge 0x5106e5 */ if ((fS==fO)) goto L_005106e5;
L_0051069f:; BB(0x0051069f);
    /* 0051069f: movsx eax, word ptr [ebp - 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 005106a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005106a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005106aa: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5106afu); f_0047e390();
    /* 005106af: mov ecx, eax */ r_ecx = r_eax;
    /* 005106b1: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5106b6u); f_004c6cb0();
    /* 005106b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005106b9: jne 0x5106e3 */ if (!fZ) goto L_005106e3;
L_005106bb:; BB(0x005106bb);
    /* 005106bb: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 005106bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005106c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005106c6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5106cbu); f_0047e390();
    /* 005106cb: mov ecx, eax */ r_ecx = r_eax;
    /* 005106cd: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5106d2u); f_004c7010();
    /* 005106d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005106d5: jne 0x5106e3 */ if (!fZ) goto L_005106e3;
L_005106d7:; BB(0x005106d7);
    /* 005106d7: mov dx, word ptr [ebp - 0x68] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff98u))) & 0xffffu);
    /* 005106db: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005106df: mov word ptr [ebp - 0x68], dx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_edx);
L_005106e3:; BB(0x005106e3);
    /* 005106e3: jmp 0x510680 */ goto L_00510680;
L_005106e5:; BB(0x005106e5);
    /* 005106e5: movsx eax, word ptr [ebp - 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 005106e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005106eb: jne 0x510707 */ if (!fZ) goto L_00510707;
L_005106ed:; BB(0x005106ed);
    /* 005106ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005106ef: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005106f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005106f7: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005106fd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00510700: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510702u); call_ind(t); }
    /* 00510702: jmp 0x51080a */ goto L_0051080a;
L_00510707:; BB(0x00510707);
    /* 00510707: movsx ecx, word ptr [ebp - 0x68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 0051070b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051070c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x510711u); f_0062fbf0();
    /* 00510711: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510714: mov word ptr [ebp - 0x70], ax */ W16((u32)(r_ebp+0xffffff90u), (u16)r_eax);
    /* 00510718: mov word ptr [ebp - 0x74], 0 */ W16((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0051071e: mov word ptr [ebp - 0x6c], 0 */ W16((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00510724: jmp 0x510732 */ goto L_00510732;
L_00510726:; BB(0x00510726);
    /* 00510726: mov dx, word ptr [ebp - 0x6c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff94u))) & 0xffffu);
    /* 0051072a: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0051072e: mov word ptr [ebp - 0x6c], dx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_edx);
L_00510732:; BB(0x00510732);
    /* 00510732: movsx esi, word ptr [ebp - 0x6c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00510736: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051073c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x510741u); f_0047f950();
    /* 00510741: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510743: jge 0x5107bd */ if ((fS==fO)) goto L_005107bd;
L_00510745:; BB(0x00510745);
    /* 00510745: movsx eax, word ptr [ebp - 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00510749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051074a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510750: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510755u); f_0047e390();
    /* 00510755: mov ecx, eax */ r_ecx = r_eax;
    /* 00510757: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51075cu); f_004c6cb0();
    /* 0051075c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051075f: jne 0x51077d */ if (!fZ) goto L_0051077d;
L_00510761:; BB(0x00510761);
    /* 00510761: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00510765: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510766: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051076c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510771u); f_0047e390();
    /* 00510771: mov ecx, eax */ r_ecx = r_eax;
    /* 00510773: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x510778u); f_004c7010();
    /* 00510778: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051077b: je 0x510781 */ if (fZ) goto L_00510781;
L_0051077d:; BB(0x0051077d);
    /* 0051077d: jmp 0x510726 */ goto L_00510726;
L_00510781:; BB(0x00510781);
    /* 00510781: movsx edx, word ptr [ebp - 0x74] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff8cu));
    /* 00510785: movsx eax, word ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 00510789: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051078b: jne 0x5107ac */ if (!fZ) goto L_005107ac;
L_0051078d:; BB(0x0051078d);
    /* 0051078d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510791: movsx edx, word ptr [ebp - 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00510795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510796: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051079c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5107a1u); f_0047e390();
    /* 005107a1: mov ecx, eax */ r_ecx = r_eax;
    /* 005107a3: call 0x4cd0b0 */ r_esp -= 4; W32(r_esp, 0x5107a8u); f_004cd0b0();
    /* 005107a8: jmp 0x5107bd */ goto L_005107bd;
L_005107ac:; BB(0x005107ac);
    /* 005107ac: mov ax, word ptr [ebp - 0x74] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff8cu))) & 0xffffu);
    /* 005107b0: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005107b4: mov word ptr [ebp - 0x74], ax */ W16((u32)(r_ebp+0xffffff8cu), (u16)r_eax);
    /* 005107b8: jmp 0x510726 */ goto L_00510726;
L_005107bd:; BB(0x005107bd);
    /* 005107bd: movsx ecx, word ptr [ebp - 0x74] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff8cu));
    /* 005107c1: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 005107c5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005107c7: je 0x5107e0 */ if (fZ) goto L_005107e0;
L_005107c9:; BB(0x005107c9);
    /* 005107c9: push 0x6db */ { u32 v = 0x6dbu; r_esp -= 4; W32(r_esp, v); }
    /* 005107ce: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005107d3: push 0x6bc4fc */ { u32 v = 0x6bc4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005107d8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5107ddu); f_005e9f20();
    /* 005107dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005107e0:; BB(0x005107e0);
    /* 005107e0: movsx esi, word ptr [ebp - 0x6c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 005107e4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005107ea: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5107efu); f_0047f950();
    /* 005107ef: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005107f1: jl 0x51080a */ if ((fS!=fO)) goto L_0051080a;
L_005107f3:; BB(0x005107f3);
    /* 005107f3: push 0x6dc */ { u32 v = 0x6dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005107f8: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005107fd: push 0x6bc4c8 */ { u32 v = 0x6bc4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00510802: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x510807u); f_005e9f20();
    /* 00510807: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051080a:; BB(0x0051080a);
    /* 0051080a: jmp 0x516cb0 */ goto L_00516cb0;
L_0051080f:; BB(0x0051080f);
    /* 0051080f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510815: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51081au); f_0047e190();
    /* 0051081a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051081d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0051081f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00510821: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00510824: cmp dword ptr [0x793078], eax */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051082a: jne 0x510852 */ if (!fZ) goto L_00510852;
L_0051082c:; BB(0x0051082c);
    /* 0051082c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510832: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x510837u); f_0047d6b0();
    /* 00510837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510839: jne 0x510852 */ if (!fZ) goto L_00510852;
L_0051083b:; BB(0x0051083b);
    /* 0051083b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051083d: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510843: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510845: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051084b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0051084e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x510850u); call_ind(t); }
    /* 00510850: jmp 0x510867 */ goto L_00510867;
L_00510852:; BB(0x00510852);
    /* 00510852: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510854: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051085a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051085c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510862: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510865: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510867u); call_ind(t); }
L_00510867:; BB(0x00510867);
    /* 00510867: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510869: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051086f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510871: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510877: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051087a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51087cu); call_ind(t); }
    /* 0051087c: jmp 0x516cb0 */ goto L_00516cb0;
L_00510881:; BB(0x00510881);
    /* 00510881: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510887: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51088cu); f_0047e3b0();
    /* 0051088c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051088e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x510893u); f_004c6cb0();
    /* 00510893: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510896: jne 0x51090f */ if (!fZ) goto L_0051090f;
L_00510898:; BB(0x00510898);
    /* 00510898: mov ecx, dword ptr [0x793078] */ r_ecx = R32((u32)(0x793078u));
    /* 0051089e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051089f: call 0x5095b0 */ r_esp -= 4; W32(r_esp, 0x5108a4u); f_005095b0();
    /* 005108a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005108a7: mov byte ptr [ebp - 0x75], al */ W8((u32)(r_ebp+0xffffff8bu), (u8)r_eax);
    /* 005108aa: movzx edx, byte ptr [ebp - 0x75] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff8bu));
    /* 005108ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005108b0: jne 0x5108df */ if (!fZ) goto L_005108df;
L_005108b2:; BB(0x005108b2);
    /* 005108b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005108b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005108bc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5108c1u); f_0047e3b0();
    /* 005108c1: mov ecx, eax */ r_ecx = r_eax;
    /* 005108c3: call 0x4cd220 */ r_esp -= 4; W32(r_esp, 0x5108c8u); f_004cd220();
    /* 005108c8: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005108ca: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005108d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005108d2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005108d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005108db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5108ddu); call_ind(t); }
    /* 005108dd: jmp 0x51090a */ goto L_0051090a;
L_005108df:; BB(0x005108df);
    /* 005108df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005108e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005108e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005108e9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5108eeu); f_0047e3b0();
    /* 005108ee: mov ecx, eax */ r_ecx = r_eax;
    /* 005108f0: call 0x4cd1f0 */ r_esp -= 4; W32(r_esp, 0x5108f5u); f_004cd1f0();
    /* 005108f5: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005108f7: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005108fd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005108ff: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510905: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00510908: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51090au); call_ind(t); }
L_0051090a:; BB(0x0051090a);
    /* 0051090a: jmp 0x5109a7 */ goto L_005109a7;
L_0051090f:; BB(0x0051090f);
    /* 0051090f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510915: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51091au); f_0047e3b0();
    /* 0051091a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051091c: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x510921u); f_004c6cb0();
    /* 00510921: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510924: jne 0x51098c */ if (!fZ) goto L_0051098c;
L_00510926:; BB(0x00510926);
    /* 00510926: mov word ptr [ebp - 0x7c], 0 */ W16((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0051092c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00510931: movzx ecx, byte ptr [eax + 0xc8] */ r_ecx = (u32)R8((u32)(r_eax+0xc8u));
    /* 00510938: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051093a: je 0x510960 */ if (fZ) goto L_00510960;
L_0051093c:; BB(0x0051093c);
    /* 0051093c: mov edx, dword ptr [0x793078] */ r_edx = R32((u32)(0x793078u));
    /* 00510942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510943: call 0x5095b0 */ r_esp -= 4; W32(r_esp, 0x510948u); f_005095b0();
    /* 00510948: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051094b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051094e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510950: je 0x51095a */ if (fZ) goto L_0051095a;
L_00510952:; BB(0x00510952);
    /* 00510952: mov word ptr [ebp - 0x7c], 1 */ W16((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00510958: jmp 0x510960 */ goto L_00510960;
L_0051095a:; BB(0x0051095a);
    /* 0051095a: mov word ptr [ebp - 0x7c], 2 */ W16((u32)(r_ebp+0xffffff84u), 0x2u);
L_00510960:; BB(0x00510960);
    /* 00510960: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00510962: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510968: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051096a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510970: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510973: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510975u); call_ind(t); }
    /* 00510975: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510977: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051097d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051097f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510985: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00510988: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51098au); call_ind(t); }
    /* 0051098a: jmp 0x5109a7 */ goto L_005109a7;
L_0051098c:; BB(0x0051098c);
    /* 0051098c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0051098e: jne 0x5109a7 */ if (!fZ) goto L_005109a7;
L_00510990:; BB(0x00510990);
    /* 00510990: push 0x70a */ { u32 v = 0x70au; r_esp -= 4; W32(r_esp, v); }
    /* 00510995: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051099a: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051099f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5109a4u); f_005e9f20();
    /* 005109a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005109a7:; BB(0x005109a7);
    /* 005109a7: jmp 0x516cb0 */ goto L_00516cb0;
L_005109ac:; BB(0x005109ac);
    /* 005109ac: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005109ae: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005109b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005109b6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005109bc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005109bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5109c1u); call_ind(t); }
    /* 005109c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005109c3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005109c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005109cb: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005109d1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005109d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5109d6u); call_ind(t); }
    /* 005109d6: jmp 0x516cb0 */ goto L_00516cb0;
L_005109db:; BB(0x005109db);
    /* 005109db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005109e1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005109e4: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x5109e9u); f_004f9110();
    /* 005109e9: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005109ec: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005109ef: jge 0x510a08 */ if ((fS==fO)) goto L_00510a08;
L_005109f1:; BB(0x005109f1);
    /* 005109f1: push 0x718 */ { u32 v = 0x718u; r_esp -= 4; W32(r_esp, v); }
    /* 005109f6: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005109fb: push 0x6c1228 */ { u32 v = 0x6c1228u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a00: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x510a05u); f_005e9f20();
    /* 00510a05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00510a08:; BB(0x00510a08);
    /* 00510a08: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a0a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510a10: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510a15u); f_0047e3b0();
    /* 00510a15: mov ecx, eax */ r_ecx = r_eax;
    /* 00510a17: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x510a1cu); f_004c7050();
    /* 00510a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510a1d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510a23: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510a26: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x510a2bu); f_004f5530();
    /* 00510a2b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510a33: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510a38u); f_0047e3b0();
    /* 00510a38: mov ecx, eax */ r_ecx = r_eax;
    /* 00510a3a: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x510a3fu); f_004c7030();
    /* 00510a3f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510a45: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510a4au); f_0047e3b0();
    /* 00510a4a: mov ecx, eax */ r_ecx = r_eax;
    /* 00510a4c: call 0x4c7230 */ r_esp -= 4; W32(r_esp, 0x510a51u); f_004c7230();
    /* 00510a51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a53: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a55: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510a5b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x510a60u); f_0047e3b0();
    /* 00510a60: mov ecx, eax */ r_ecx = r_eax;
    /* 00510a62: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x510a67u); f_004dc4d0();
    /* 00510a67: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510a6d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510a70: call 0x4f62e0 */ r_esp -= 4; W32(r_esp, 0x510a75u); f_004f62e0();
    /* 00510a75: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00510a78: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 00510a7d: mov ecx, dword ptr [0x793058] */ r_ecx = R32((u32)(0x793058u));
    /* 00510a83: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00510a86: mov dword ptr [0x793058], ecx */ W32((u32)(0x793058u), r_ecx);
    /* 00510a8c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00510a8e: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510a94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510a96: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510a9c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00510a9f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x510aa1u); call_ind(t); }
    /* 00510aa1: cmp dword ptr [0x793034], -1 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510aa8: jne 0x510aca */ if (!fZ) goto L_00510aca;
L_00510aaa:; BB(0x00510aaa);
    /* 00510aaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00510aac: jne 0x510ac5 */ if (!fZ) goto L_00510ac5;
L_00510aae:; BB(0x00510aae);
    /* 00510aae: push 0x722 */ { u32 v = 0x722u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ab3: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ab8: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00510abd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x510ac2u); f_005e9f20();
    /* 00510ac2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00510ac5:; BB(0x00510ac5);
    /* 00510ac5: jmp 0x510c5d */ goto L_00510c5d;
L_00510aca:; BB(0x00510aca);
    /* 00510aca: cmp dword ptr [0x793034], -2 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510ad1: jne 0x510aed */ if (!fZ) goto L_00510aed;
L_00510ad3:; BB(0x00510ad3);
    /* 00510ad3: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ad5: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510adb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510add: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510ae3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00510ae6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x510ae8u); call_ind(t); }
    /* 00510ae8: jmp 0x510c5d */ goto L_00510c5d;
L_00510aed:; BB(0x00510aed);
    /* 00510aed: cmp dword ptr [0x793034], -3 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510af4: jne 0x510c1c */ if (!fZ) goto L_00510c1c;
L_00510afa:; BB(0x00510afa);
    /* 00510afa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b00: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510b03: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x510b08u); f_004f6420();
    /* 00510b08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00510b0a: jle 0x510c13 */ if ((fZ||fS!=fO)) goto L_00510c13;
L_00510b10:; BB(0x00510b10);
    /* 00510b10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b16: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510b19: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x510b1eu); f_004f6420();
    /* 00510b1e: mov esi, eax */ r_esi = r_eax;
    /* 00510b20: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b26: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x510b2bu); f_0047bc20();
    /* 00510b2b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00510b2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00510b2f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b35: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510b38: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x510b3du); f_004f64b0();
    /* 00510b3d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00510b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510b41: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b47: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x510b4cu); f_0047e3d0();
    /* 00510b4c: mov ecx, eax */ r_ecx = r_eax;
    /* 00510b4e: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x510b53u); f_004c6b80();
    /* 00510b53: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b59: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510b5c: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x510b61u); f_004f64b0();
    /* 00510b61: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00510b64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510b65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b6b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x510b70u); f_0047e3d0();
    /* 00510b70: mov ecx, eax */ r_ecx = r_eax;
    /* 00510b72: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x510b77u); f_004da300();
    /* 00510b77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510b79: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b7f: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x510b84u); f_0047ec90();
    /* 00510b84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b8a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510b8d: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x510b92u); f_004f64b0();
    /* 00510b92: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00510b95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510b96: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510b9c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x510ba1u); f_0047e3d0();
    /* 00510ba1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00510ba4: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00510baa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510bac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510bb2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510bb5: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x510bbau); f_004f6420();
    /* 00510bba: mov esi, eax */ r_esi = r_eax;
    /* 00510bbc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510bc2: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x510bc7u); f_0047bc20();
    /* 00510bc7: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00510bca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00510bcb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x510bd0u); f_0064c8a0();
    /* 00510bd0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510bd3: mov dword ptr [ebp - 0x328], eax */ W32((u32)(r_ebp+0xfffffcd8u), r_eax);
    /* 00510bd9: mov dword ptr [ebp - 0x324], edx */ W32((u32)(r_ebp+0xfffffcdcu), r_edx);
    /* 00510bdf: mov ecx, dword ptr [ebp - 0x328] */ r_ecx = R32((u32)(r_ebp+0xfffffcd8u));
    /* 00510be5: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00510beb: mov edx, dword ptr [ebp - 0x324] */ r_edx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 00510bf1: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00510bf4: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00510bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510bf8: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00510bfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510bff: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c01: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 00510c07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510c08: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00510c0e: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x510c13u); f_005e7e40();
L_00510c13:; BB(0x00510c13);
    /* 00510c13: mov byte ptr [0x793030], 1 */ W8((u32)(0x793030u), 0x1u);
    /* 00510c1a: jmp 0x510c5d */ goto L_00510c5d;
L_00510c1c:; BB(0x00510c1c);
    /* 00510c1c: cmp dword ptr [0x793034], 0 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510c23: jl 0x510c3d */ if ((fS!=fO)) goto L_00510c3d;
L_00510c25:; BB(0x00510c25);
    /* 00510c25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510c2b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510c2e: call 0x4f5760 */ r_esp -= 4; W32(r_esp, 0x510c33u); f_004f5760();
    /* 00510c33: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00510c36: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 00510c3b: jmp 0x510c1c */ goto L_00510c1c;
L_00510c3d:; BB(0x00510c3d);
    /* 00510c3d: cmp dword ptr [0x793034], -1 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c44: je 0x510c5d */ if (fZ) goto L_00510c5d;
L_00510c46:; BB(0x00510c46);
    /* 00510c46: push 0x73a */ { u32 v = 0x73au; r_esp -= 4; W32(r_esp, v); }
    /* 00510c4b: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c50: push 0x6c1204 */ { u32 v = 0x6c1204u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c55: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x510c5au); f_005e9f20();
    /* 00510c5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00510c5d:; BB(0x00510c5d);
    /* 00510c5d: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00510c5f: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510c65: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510c67: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510c6d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00510c70: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x510c72u); call_ind(t); }
    /* 00510c72: jmp 0x516cb0 */ goto L_00516cb0;
L_00510c77:; BB(0x00510c77);
    /* 00510c77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510c79: call 0x5178c0 */ r_esp -= 4; W32(r_esp, 0x510c7eu); f_005178c0();
    /* 00510c7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510c81: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 00510c86: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510c8c: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x510c91u); f_0047e500();
    /* 00510c91: cmp dword ptr [0x793034], -3 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510c98: jne 0x510dc4 */ if (!fZ) goto L_00510dc4;
L_00510c9e:; BB(0x00510c9e);
    /* 00510c9e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510ca4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510ca7: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x510cacu); f_004f6420();
    /* 00510cac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00510cae: jle 0x510dbd */ if ((fZ||fS!=fO)) goto L_00510dbd;
L_00510cb4:; BB(0x00510cb4);
    /* 00510cb4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510cba: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510cbd: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x510cc2u); f_004f6420();
    /* 00510cc2: mov esi, eax */ r_esi = r_eax;
    /* 00510cc4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510cca: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x510ccfu); f_0047bc20();
    /* 00510ccf: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00510cd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00510cd3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510cd9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510cdc: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x510ce1u); f_004f64b0();
    /* 00510ce1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00510ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510ce5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510ceb: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x510cf0u); f_0047e3d0();
    /* 00510cf0: mov ecx, eax */ r_ecx = r_eax;
    /* 00510cf2: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x510cf7u); f_004c6b80();
    /* 00510cf7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510cfd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510d00: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x510d05u); f_004f64b0();
    /* 00510d05: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00510d08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510d09: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510d0f: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x510d14u); f_0047e3d0();
    /* 00510d14: mov ecx, eax */ r_ecx = r_eax;
    /* 00510d16: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x510d1bu); f_004da300();
    /* 00510d1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510d1d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510d23: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x510d28u); f_0047ec90();
    /* 00510d28: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510d2e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510d31: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x510d36u); f_004f64b0();
    /* 00510d36: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00510d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510d3a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510d40: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x510d45u); f_0047e3d0();
    /* 00510d45: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00510d48: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00510d4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00510d50: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510d56: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00510d59: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x510d5eu); f_004f6420();
    /* 00510d5e: mov esi, eax */ r_esi = r_eax;
    /* 00510d60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510d66: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x510d6bu); f_0047bc20();
    /* 00510d6b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00510d6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00510d6f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x510d74u); f_0064c8a0();
    /* 00510d74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510d77: mov dword ptr [ebp - 0x330], eax */ W32((u32)(r_ebp+0xfffffcd0u), r_eax);
    /* 00510d7d: mov dword ptr [ebp - 0x32c], edx */ W32((u32)(r_ebp+0xfffffcd4u), r_edx);
    /* 00510d83: mov ecx, dword ptr [ebp - 0x330] */ r_ecx = R32((u32)(r_ebp+0xfffffcd0u));
    /* 00510d89: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00510d8f: mov edx, dword ptr [ebp - 0x32c] */ r_edx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 00510d95: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00510d9b: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00510da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510da2: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00510da8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510da9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00510dab: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00510db1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510db2: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00510db8: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x510dbdu); f_005e7e40();
L_00510dbd:; BB(0x00510dbd);
    /* 00510dbd: mov byte ptr [0x793030], 1 */ W8((u32)(0x793030u), 0x1u);
L_00510dc4:; BB(0x00510dc4);
    /* 00510dc4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00510dc6: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510dcc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00510dce: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510dd4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510dd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510dd9u); call_ind(t); }
    /* 00510dd9: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00510ddb: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510de1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510de3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510de9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00510dec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510deeu); call_ind(t); }
    /* 00510dee: jmp 0x516cb0 */ goto L_00516cb0;
L_00510df3:; BB(0x00510df3);
    /* 00510df3: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00510df5: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510dfb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510dfd: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510e03: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00510e06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510e08u); call_ind(t); }
    /* 00510e08: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00510e0a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510e10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00510e12: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510e18: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00510e1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x510e1du); call_ind(t); }
    /* 00510e1d: jmp 0x516cb0 */ goto L_00516cb0;
L_00510e22:; BB(0x00510e22);
    /* 00510e22: mov word ptr [ebp - 0x98], 0 */ W16((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 00510e2b: mov word ptr [ebp - 0x9c], 0 */ W16((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 00510e34: jmp 0x510e48 */ goto L_00510e48;
L_00510e36:; BB(0x00510e36);
    /* 00510e36: mov cx, word ptr [ebp - 0x9c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff64u))) & 0xffffu);
    /* 00510e3d: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00510e41: mov word ptr [ebp - 0x9c], cx */ W16((u32)(r_ebp+0xffffff64u), (u16)r_ecx);
L_00510e48:; BB(0x00510e48);
    /* 00510e48: movsx esi, word ptr [ebp - 0x9c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510e4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510e55: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x510e5au); f_0047f950();
    /* 00510e5a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510e5c: jge 0x510eb0 */ if ((fS==fO)) goto L_00510eb0;
L_00510e5e:; BB(0x00510e5e);
    /* 00510e5e: movsx edx, word ptr [ebp - 0x9c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510e65: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510e66: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510e6c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510e71u); f_0047e390();
    /* 00510e71: mov ecx, eax */ r_ecx = r_eax;
    /* 00510e73: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x510e78u); f_004c6cb0();
    /* 00510e78: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510e7b: jne 0x510eae */ if (!fZ) goto L_00510eae;
L_00510e7d:; BB(0x00510e7d);
    /* 00510e7d: movsx eax, word ptr [ebp - 0x9c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510e85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510e8b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510e90u); f_0047e390();
    /* 00510e90: mov ecx, eax */ r_ecx = r_eax;
    /* 00510e92: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x510e97u); f_004c7010();
    /* 00510e97: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510e9a: jne 0x510eae */ if (!fZ) goto L_00510eae;
L_00510e9c:; BB(0x00510e9c);
    /* 00510e9c: mov cx, word ptr [ebp - 0x98] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff68u))) & 0xffffu);
    /* 00510ea3: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00510ea7: mov word ptr [ebp - 0x98], cx */ W16((u32)(r_ebp+0xffffff68u), (u16)r_ecx);
L_00510eae:; BB(0x00510eae);
    /* 00510eae: jmp 0x510e36 */ goto L_00510e36;
L_00510eb0:; BB(0x00510eb0);
    /* 00510eb0: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00510eb2: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510eb8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00510eba: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510ec0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00510ec3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x510ec5u); call_ind(t); }
    /* 00510ec5: movsx eax, word ptr [ebp - 0x98] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff68u));
    /* 00510ecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510ece: jne 0x510f20 */ if (!fZ) goto L_00510f20;
L_00510ed0:; BB(0x00510ed0);
    /* 00510ed0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ed2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00510ed8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x510eddu); f_00637810();
    /* 00510edd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510ee0: jge 0x510f0e */ if ((fS==fO)) goto L_00510f0e;
L_00510ee2:; BB(0x00510ee2);
    /* 00510ee2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ee4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00510eea: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x510eefu); f_00637810();
    /* 00510eef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00510ef1: jl 0x510f0e */ if ((fS!=fO)) goto L_00510f0e;
L_00510ef3:; BB(0x00510ef3);
    /* 00510ef3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00510ef5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00510efb: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x510f00u); f_00637810();
    /* 00510f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510f01: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510f07: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x510f0cu); f_005fc490();
    /* 00510f0c: jmp 0x510f1b */ goto L_00510f1b;
L_00510f0e:; BB(0x00510f0e);
    /* 00510f0e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00510f10: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00510f16: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x510f1bu); f_005fc490();
L_00510f1b:; BB(0x00510f1b);
    /* 00510f1b: jmp 0x51105a */ goto L_0051105a;
L_00510f20:; BB(0x00510f20);
    /* 00510f20: movsx ecx, word ptr [ebp - 0x98] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff68u));
    /* 00510f27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510f28: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x510f2du); f_0062fbf0();
    /* 00510f2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00510f30: mov word ptr [ebp - 0xa0], ax */ W16((u32)(r_ebp+0xffffff60u), (u16)r_eax);
    /* 00510f37: mov word ptr [ebp - 0xa4], 0 */ W16((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00510f40: mov word ptr [ebp - 0x9c], 0 */ W16((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 00510f49: jmp 0x510f5d */ goto L_00510f5d;
L_00510f4b:; BB(0x00510f4b);
    /* 00510f4b: mov dx, word ptr [ebp - 0x9c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff64u))) & 0xffffu);
    /* 00510f52: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00510f56: mov word ptr [ebp - 0x9c], dx */ W16((u32)(r_ebp+0xffffff64u), (u16)r_edx);
L_00510f5d:; BB(0x00510f5d);
    /* 00510f5d: movsx esi, word ptr [ebp - 0x9c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510f64: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510f6a: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x510f6fu); f_0047f950();
    /* 00510f6f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00510f71: jge 0x511004 */ if ((fS==fO)) goto L_00511004;
L_00510f77:; BB(0x00510f77);
    /* 00510f77: movsx eax, word ptr [ebp - 0x9c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00510f7f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510f85: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510f8au); f_0047e390();
    /* 00510f8a: mov ecx, eax */ r_ecx = r_eax;
    /* 00510f8c: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x510f91u); f_004c6cb0();
    /* 00510f91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510f94: jne 0x510fb5 */ if (!fZ) goto L_00510fb5;
L_00510f96:; BB(0x00510f96);
    /* 00510f96: movsx ecx, word ptr [ebp - 0x9c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510f9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510f9e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510fa4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510fa9u); f_0047e390();
    /* 00510fa9: mov ecx, eax */ r_ecx = r_eax;
    /* 00510fab: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x510fb0u); f_004c7010();
    /* 00510fb0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510fb3: je 0x510fb9 */ if (fZ) goto L_00510fb9;
L_00510fb5:; BB(0x00510fb5);
    /* 00510fb5: jmp 0x510f4b */ goto L_00510f4b;
L_00510fb9:; BB(0x00510fb9);
    /* 00510fb9: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00510fc0: movsx eax, word ptr [ebp - 0xa0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff60u));
    /* 00510fc7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00510fc9: jne 0x510fed */ if (!fZ) goto L_00510fed;
L_00510fcb:; BB(0x00510fcb);
    /* 00510fcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00510fce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00510fcf: movsx edx, word ptr [ebp - 0x9c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00510fd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00510fd7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00510fdd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x510fe2u); f_0047e390();
    /* 00510fe2: mov ecx, eax */ r_ecx = r_eax;
    /* 00510fe4: call 0x4cd2e0 */ r_esp -= 4; W32(r_esp, 0x510fe9u); f_004cd2e0();
    /* 00510fe9: jmp 0x511004 */ goto L_00511004;
L_00510fed:; BB(0x00510fed);
    /* 00510fed: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 00510ff4: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00510ff8: mov word ptr [ebp - 0xa4], ax */ W16((u32)(r_ebp+0xffffff5cu), (u16)r_eax);
    /* 00510fff: jmp 0x510f4b */ goto L_00510f4b;
L_00511004:; BB(0x00511004);
    /* 00511004: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0051100b: movsx edx, word ptr [ebp - 0xa0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff60u));
    /* 00511012: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511014: je 0x51102d */ if (fZ) goto L_0051102d;
L_00511016:; BB(0x00511016);
    /* 00511016: push 0x781 */ { u32 v = 0x781u; r_esp -= 4; W32(r_esp, v); }
    /* 0051101b: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511020: push 0x6bc4fc */ { u32 v = 0x6bc4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00511025: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51102au); f_005e9f20();
    /* 0051102a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051102d:; BB(0x0051102d);
    /* 0051102d: movsx esi, word ptr [ebp - 0x9c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff64u));
    /* 00511034: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051103a: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x51103fu); f_0047f950();
    /* 0051103f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511041: jl 0x51105a */ if ((fS!=fO)) goto L_0051105a;
L_00511043:; BB(0x00511043);
    /* 00511043: push 0x782 */ { u32 v = 0x782u; r_esp -= 4; W32(r_esp, v); }
    /* 00511048: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051104d: push 0x6bc4c8 */ { u32 v = 0x6bc4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511052: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x511057u); f_005e9f20();
    /* 00511057: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051105a:; BB(0x0051105a);
    /* 0051105a: jmp 0x516cb0 */ goto L_00516cb0;
L_0051105f:; BB(0x0051105f);
    /* 0051105f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00511061: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511067: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x51106cu); f_005fc490();
    /* 0051106c: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051106e: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511074: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00511076: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051107c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0051107f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x511081u); call_ind(t); }
    /* 00511081: jmp 0x516cb0 */ goto L_00516cb0;
L_00511086:; BB(0x00511086);
    /* 00511086: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051108c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051108f: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x511094u); f_004f9110();
    /* 00511094: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00511097: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051109a: jge 0x5110b3 */ if ((fS==fO)) goto L_005110b3;
L_0051109c:; BB(0x0051109c);
    /* 0051109c: push 0x78d */ { u32 v = 0x78du; r_esp -= 4; W32(r_esp, v); }
    /* 005110a1: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005110a6: push 0x6bc49c */ { u32 v = 0x6bc49cu; r_esp -= 4; W32(r_esp, v); }
    /* 005110ab: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5110b0u); f_005e9f20();
    /* 005110b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005110b3:; BB(0x005110b3);
    /* 005110b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005110b9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005110bc: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x5110c1u); f_004f91a0();
    /* 005110c1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005110c4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005110c7: jge 0x5110e0 */ if ((fS==fO)) goto L_005110e0;
L_005110c9:; BB(0x005110c9);
    /* 005110c9: push 0x78e */ { u32 v = 0x78eu; r_esp -= 4; W32(r_esp, v); }
    /* 005110ce: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005110d3: push 0x6bc470 */ { u32 v = 0x6bc470u; r_esp -= 4; W32(r_esp, v); }
    /* 005110d8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5110ddu); f_005e9f20();
    /* 005110dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005110e0:; BB(0x005110e0);
    /* 005110e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005110e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005110e8: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x5110edu); f_0047e540();
    /* 005110ed: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 005110f7: jmp 0x511108 */ goto L_00511108;
L_005110f9:; BB(0x005110f9);
    /* 005110f9: mov ecx, dword ptr [0x793138] */ r_ecx = R32((u32)(0x793138u));
    /* 005110ff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511102: mov dword ptr [0x793138], ecx */ W32((u32)(0x793138u), r_ecx);
L_00511108:; BB(0x00511108);
    /* 00511108: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051110e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511113u); f_0047f950();
    /* 00511113: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511119: jge 0x51113c */ if ((fS==fO)) goto L_0051113c;
L_0051111b:; BB(0x0051111b);
    /* 0051111b: mov edx, dword ptr [0x793138] */ r_edx = R32((u32)(0x793138u));
    /* 00511121: mov word ptr [edx*2 + 0x792de8], 0xffff */ W16((u32)(r_edx*2+0x792de8u), 0xffffu);
    /* 0051112b: mov eax, dword ptr [0x793138] */ r_eax = R32((u32)(0x793138u));
    /* 00511130: mov word ptr [eax*2 + 0x792990], 0xffff */ W16((u32)(r_eax*2+0x792990u), 0xffffu);
    /* 0051113a: jmp 0x5110f9 */ goto L_005110f9;
L_0051113c:; BB(0x0051113c);
    /* 0051113c: mov dword ptr [0x793124], 0 */ W32((u32)(0x793124u), 0x0u);
    /* 00511146: mov dword ptr [0x793120], 0 */ W32((u32)(0x793120u), 0x0u);
    /* 00511150: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511156: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511159: call 0x4f4c80 */ r_esp -= 4; W32(r_esp, 0x51115eu); f_004f4c80();
    /* 0051115e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511160: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511166: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511168: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051116e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511171: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511173u); call_ind(t); }
    /* 00511173: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511175: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051117b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051117d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511183: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511186: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511188u); call_ind(t); }
    /* 00511188: jmp 0x516cb0 */ goto L_00516cb0;
L_0051118d:; BB(0x0051118d);
    /* 0051118d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511193: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00511196: call 0x4654d0 */ r_esp -= 4; W32(r_esp, 0x51119bu); f_004654d0();
    /* 0051119b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005111a1: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5111a6u); f_0047bbc0();
    /* 005111a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005111a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005111ad: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x5111b2u); f_0047e400();
    /* 005111b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005111b8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005111bb: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x5111c0u); f_004f9110();
    /* 005111c0: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005111c3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005111c6: jge 0x511217 */ if ((fS==fO)) goto L_00511217;
L_005111c8:; BB(0x005111c8);
    /* 005111c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005111ce: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x5111d3u); f_0047e440();
    /* 005111d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005111d9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5111deu); f_0047e3b0();
    /* 005111de: mov ecx, eax */ r_ecx = r_eax;
    /* 005111e0: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5111e5u); f_004c7010();
    /* 005111e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005111e7: je 0x5111c8 */ if (fZ) goto L_005111c8;
L_005111e9:; BB(0x005111e9);
    /* 005111e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005111ef: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5111f4u); f_0047e3b0();
    /* 005111f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005111f6: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5111fbu); f_004c7010();
    /* 005111fb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005111fe: je 0x5111c8 */ if (fZ) goto L_005111c8;
L_00511200:; BB(0x00511200);
    /* 00511200: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00511202: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511208: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051120a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511210: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511213: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511215u); call_ind(t); }
    /* 00511215: jmp 0x51124e */ goto L_0051124e;
L_00511217:; BB(0x00511217);
    /* 00511217: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051121d: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x511222u); f_0047e440();
    /* 00511222: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511228: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51122du); f_0047e3b0();
    /* 0051122d: mov ecx, eax */ r_ecx = r_eax;
    /* 0051122f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511234u); f_004c7010();
    /* 00511234: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511237: jne 0x511217 */ if (!fZ) goto L_00511217;
L_00511239:; BB(0x00511239);
    /* 00511239: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0051123b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511241: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511243: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511249: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051124c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51124eu); call_ind(t); }
L_0051124e:; BB(0x0051124e);
    /* 0051124e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511250: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511256: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511258: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051125e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511261: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511263u); call_ind(t); }
    /* 00511263: jmp 0x516cb0 */ goto L_00516cb0;
L_00511268:; BB(0x00511268);
    /* 00511268: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051126e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x511273u); f_0047e3b0();
    /* 00511273: mov ecx, eax */ r_ecx = r_eax;
    /* 00511275: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x51127au); f_004c7050();
    /* 0051127a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051127b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511281: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x511286u); f_0047bc60();
    /* 00511286: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511287: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051128d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511290: call 0x4f5110 */ r_esp -= 4; W32(r_esp, 0x511295u); f_004f5110();
    /* 00511295: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00511297: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051129d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051129f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112a5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005112a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5112aau); call_ind(t); }
    /* 005112aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005112ac: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005112b4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112ba: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005112bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5112bfu); call_ind(t); }
    /* 005112bf: jmp 0x516cb0 */ goto L_00516cb0;
L_005112c4:; BB(0x005112c4);
    /* 005112c4: call 0x516e20 */ r_esp -= 4; W32(r_esp, 0x5112c9u); f_00516e20();
    /* 005112c9: mov dword ptr [0x793034], eax */ W32((u32)(0x793034u), r_eax);
    /* 005112ce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005112d4: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x5112d9u); f_0047e500();
    /* 005112d9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005112db: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112e1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005112e3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005112ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5112eeu); call_ind(t); }
    /* 005112ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005112f0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005112f8: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005112fe: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511301: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511303u); call_ind(t); }
    /* 00511303: jmp 0x516cb0 */ goto L_00516cb0;
L_00511308:; BB(0x00511308);
    /* 00511308: cmp dword ptr [0x793034], -1 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051130f: jne 0x51137a */ if (!fZ) goto L_0051137a;
L_00511311:; BB(0x00511311);
    /* 00511311: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511317: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x51131cu); f_0047bbc0();
    /* 0051131c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051131d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511323: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x511328u); f_0047e400();
L_00511328:; BB(0x00511328);
    /* 00511328: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051132e: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x511333u); f_0047e440();
    /* 00511333: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511339: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51133eu); f_0047e3b0();
    /* 0051133e: mov ecx, eax */ r_ecx = r_eax;
    /* 00511340: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511345u); f_004c7010();
    /* 00511345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511347: je 0x511328 */ if (fZ) goto L_00511328;
L_00511349:; BB(0x00511349);
    /* 00511349: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051134f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x511354u); f_0047e3b0();
    /* 00511354: mov ecx, eax */ r_ecx = r_eax;
    /* 00511356: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51135bu); f_004c7010();
    /* 0051135b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051135e: je 0x511328 */ if (fZ) goto L_00511328;
L_00511360:; BB(0x00511360);
    /* 00511360: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00511362: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511368: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051136a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511370: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511373: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511375u); call_ind(t); }
    /* 00511375: jmp 0x511546 */ goto L_00511546;
L_0051137a:; BB(0x0051137a);
    /* 0051137a: cmp dword ptr [0x793034], -3 */ {  u32 a = R32((u32)(0x793034u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511381: jne 0x511513 */ if (!fZ) goto L_00511513;
L_00511387:; BB(0x00511387);
    /* 00511387: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051138d: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x511392u); f_0047bbc0();
    /* 00511392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511393: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511399: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x51139eu); f_0047e400();
L_0051139e:; BB(0x0051139e);
    /* 0051139e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005113a4: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x5113a9u); f_0047e440();
    /* 005113a9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005113af: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5113b4u); f_0047e3b0();
    /* 005113b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005113b6: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5113bbu); f_004c7010();
    /* 005113bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005113bd: je 0x51139e */ if (fZ) goto L_0051139e;
L_005113bf:; BB(0x005113bf);
    /* 005113bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005113c5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5113cau); f_0047e3b0();
    /* 005113ca: mov ecx, eax */ r_ecx = r_eax;
    /* 005113cc: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5113d1u); f_004c7010();
    /* 005113d1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005113d4: je 0x51139e */ if (fZ) goto L_0051139e;
L_005113d6:; BB(0x005113d6);
    /* 005113d6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005113dc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005113df: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x5113e4u); f_004f6420();
    /* 005113e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005113e6: jle 0x5114f5 */ if ((fZ||fS!=fO)) goto L_005114f5;
L_005113ec:; BB(0x005113ec);
    /* 005113ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005113f2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005113f5: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x5113fau); f_004f6420();
    /* 005113fa: mov esi, eax */ r_esi = r_eax;
    /* 005113fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511402: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x511407u); f_0047bc20();
    /* 00511407: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051140a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051140b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511411: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511414: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x511419u); f_004f64b0();
    /* 00511419: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051141c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051141d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511423: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x511428u); f_0047e3d0();
    /* 00511428: mov ecx, eax */ r_ecx = r_eax;
    /* 0051142a: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x51142fu); f_004c6b80();
    /* 0051142f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511435: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511438: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x51143du); f_004f64b0();
    /* 0051143d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00511440: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511441: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511447: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51144cu); f_0047e3d0();
    /* 0051144c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051144e: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x511453u); f_004da300();
    /* 00511453: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511455: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051145b: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x511460u); f_0047ec90();
    /* 00511460: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511466: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511469: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x51146eu); f_004f64b0();
    /* 0051146e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00511471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511472: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511478: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51147du); f_0047e3d0();
    /* 0051147d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00511480: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00511486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511488: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051148e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511491: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x511496u); f_004f6420();
    /* 00511496: mov esi, eax */ r_esi = r_eax;
    /* 00511498: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051149e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5114a3u); f_0047bc20();
    /* 005114a3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005114a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005114a7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5114acu); f_0064c8a0();
    /* 005114ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005114af: mov dword ptr [ebp - 0x338], eax */ W32((u32)(r_ebp+0xfffffcc8u), r_eax);
    /* 005114b5: mov dword ptr [ebp - 0x334], edx */ W32((u32)(r_ebp+0xfffffcccu), r_edx);
    /* 005114bb: mov edx, dword ptr [ebp - 0x338] */ r_edx = R32((u32)(r_ebp+0xfffffcc8u));
    /* 005114c1: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005114c7: mov eax, dword ptr [ebp - 0x334] */ r_eax = R32((u32)(r_ebp+0xfffffcccu));
    /* 005114cd: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005114d3: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005114d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005114da: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005114e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005114e1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005114e3: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005114e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005114ea: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005114f0: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5114f5u); f_005e7e40();
L_005114f5:; BB(0x005114f5);
    /* 005114f5: mov byte ptr [0x793030], 1 */ W8((u32)(0x793030u), 0x1u);
    /* 005114fc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005114fe: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511504: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511506: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051150c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051150f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511511u); call_ind(t); }
    /* 00511511: jmp 0x511546 */ goto L_00511546;
L_00511513:; BB(0x00511513);
    /* 00511513: mov ecx, dword ptr [0x793034] */ r_ecx = R32((u32)(0x793034u));
    /* 00511519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051151a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511520: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x511525u); f_0047e490();
    /* 00511525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511526: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051152c: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x511531u); f_0047e400();
    /* 00511531: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00511533: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511539: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051153b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511541: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00511544: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x511546u); call_ind(t); }
L_00511546:; BB(0x00511546);
    /* 00511546: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511548: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051154e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511550: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511556: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511559: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51155bu); call_ind(t); }
    /* 0051155b: jmp 0x516cb0 */ goto L_00516cb0;
L_00511560:; BB(0x00511560);
    /* 00511560: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511566: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x51156bu); f_0047e3b0();
    /* 0051156b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051156d: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511572u); f_004c7010();
    /* 00511572: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511575: je 0x5115a5 */ if (fZ) goto L_005115a5;
L_00511577:; BB(0x00511577);
    /* 00511577: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051157d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x511582u); f_0047e3b0();
    /* 00511582: mov ecx, eax */ r_ecx = r_eax;
    /* 00511584: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511589u); f_004c7010();
    /* 00511589: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051158c: je 0x5115a5 */ if (fZ) goto L_005115a5;
L_0051158e:; BB(0x0051158e);
    /* 0051158e: push 0x7f9 */ { u32 v = 0x7f9u; r_esp -= 4; W32(r_esp, v); }
    /* 00511593: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511598: push 0x6bc3e8 */ { u32 v = 0x6bc3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051159d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5115a2u); f_005e9f20();
    /* 005115a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005115a5:; BB(0x005115a5);
    /* 005115a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005115a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005115a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005115ab: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005115b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005115b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005115b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005115b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005115bc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5115c1u); f_0047e3b0();
    /* 005115c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005115c2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005115c8: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x5115cdu); f_0047b010();
L_005115cd:; BB(0x005115cd);
    /* 005115cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005115d3: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x5115d8u); f_0047e440();
    /* 005115d8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005115de: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5115e3u); f_0047e3b0();
    /* 005115e3: mov ecx, eax */ r_ecx = r_eax;
    /* 005115e5: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5115eau); f_004c7010();
    /* 005115ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005115ec: je 0x5115cd */ if (fZ) goto L_005115cd;
L_005115ee:; BB(0x005115ee);
    /* 005115ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005115f4: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5115f9u); f_0047e3b0();
    /* 005115f9: mov ecx, eax */ r_ecx = r_eax;
    /* 005115fb: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511600u); f_004c7010();
    /* 00511600: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511603: je 0x5115cd */ if (fZ) goto L_005115cd;
L_00511605:; BB(0x00511605);
    /* 00511605: mov eax, dword ptr [0x793124] */ r_eax = R32((u32)(0x793124u));
    /* 0051160a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051160d: mov dword ptr [0x793124], eax */ W32((u32)(0x793124u), r_eax);
    /* 00511612: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511618: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051161b: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x511620u); f_004f91a0();
    /* 00511620: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00511623: cmp dword ptr [0x793124], ecx */ {  u32 a = R32((u32)(0x793124u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511629: jne 0x511644 */ if (!fZ) goto L_00511644;
L_0051162b:; BB(0x0051162b);
    /* 0051162b: mov dword ptr [0x793124], 0 */ W32((u32)(0x793124u), 0x0u);
    /* 00511635: mov edx, dword ptr [0x793120] */ r_edx = R32((u32)(0x793120u));
    /* 0051163b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051163e: mov dword ptr [0x793120], edx */ W32((u32)(0x793120u), r_edx);
L_00511644:; BB(0x00511644);
    /* 00511644: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051164a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51164fu); f_0047e190();
    /* 0051164f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00511652: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00511654: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00511656: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511659: cmp dword ptr [0x793120], eax */ {  u32 a = R32((u32)(0x793120u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051165f: jge 0x511678 */ if ((fS==fO)) goto L_00511678;
L_00511661:; BB(0x00511661);
    /* 00511661: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00511663: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511669: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051166b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511671: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511674: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511676u); call_ind(t); }
    /* 00511676: jmp 0x51168d */ goto L_0051168d;
L_00511678:; BB(0x00511678);
    /* 00511678: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0051167a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511680: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511682: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511688: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051168b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51168du); call_ind(t); }
L_0051168d:; BB(0x0051168d);
    /* 0051168d: jmp 0x516cb0 */ goto L_00516cb0;
L_00511692:; BB(0x00511692);
    /* 00511692: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511694: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051169a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051169c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005116a2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005116a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5116a7u); call_ind(t); }
    /* 005116a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005116a9: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005116af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005116b1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005116b7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005116ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5116bcu); call_ind(t); }
    /* 005116bc: jmp 0x516cb0 */ goto L_00516cb0;
L_005116c1:; BB(0x005116c1);
    /* 005116c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005116c7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005116ca: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x5116cfu); f_004f91a0();
    /* 005116cf: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005116d2: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005116d5: jge 0x5116ee */ if ((fS==fO)) goto L_005116ee;
L_005116d7:; BB(0x005116d7);
    /* 005116d7: push 0x816 */ { u32 v = 0x816u; r_esp -= 4; W32(r_esp, v); }
    /* 005116dc: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005116e1: push 0x6bc470 */ { u32 v = 0x6bc470u; r_esp -= 4; W32(r_esp, v); }
    /* 005116e6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5116ebu); f_005e9f20();
    /* 005116eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005116ee:; BB(0x005116ee);
    /* 005116ee: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 005116f8: jmp 0x511707 */ goto L_00511707;
L_005116fa:; BB(0x005116fa);
    /* 005116fa: mov eax, dword ptr [0x793138] */ r_eax = R32((u32)(0x793138u));
    /* 005116ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511702: mov dword ptr [0x793138], eax */ W32((u32)(0x793138u), r_eax);
L_00511707:; BB(0x00511707);
    /* 00511707: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051170d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511712u); f_0047f950();
    /* 00511712: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511718: jge 0x51172d */ if ((fS==fO)) goto L_0051172d;
L_0051171a:; BB(0x0051171a);
    /* 0051171a: mov ecx, dword ptr [0x793138] */ r_ecx = R32((u32)(0x793138u));
    /* 00511720: mov dword ptr [ecx*4 + 0x793038], 0xffffffff */ W32((u32)(r_ecx*4+0x793038u), 0xffffffffu);
    /* 0051172b: jmp 0x5116fa */ goto L_005116fa;
L_0051172d:; BB(0x0051172d);
    /* 0051172d: mov dword ptr [0x793074], 0 */ W32((u32)(0x793074u), 0x0u);
L_00511737:; BB(0x00511737);
    /* 00511737: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051173d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511742u); f_0047f950();
    /* 00511742: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511748: jge 0x51184d */ if ((fS==fO)) goto L_0051184d;
L_0051174e:; BB(0x0051174e);
    /* 0051174e: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511754: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511755: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051175b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511760u); f_0047e390();
    /* 00511760: mov ecx, eax */ r_ecx = r_eax;
    /* 00511762: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511767u); f_004c7010();
    /* 00511767: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511769: je 0x51183b */ if (fZ) goto L_0051183b;
L_0051176f:; BB(0x0051176f);
    /* 0051176f: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00511774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511775: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051177b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511780u); f_0047e390();
    /* 00511780: mov ecx, eax */ r_ecx = r_eax;
    /* 00511782: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511787u); f_004c7010();
    /* 00511787: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051178a: je 0x51183b */ if (fZ) goto L_0051183b;
L_00511790:; BB(0x00511790);
    /* 00511790: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511796: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
L_0051179c:; BB(0x0051179c);
    /* 0051179c: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005117a2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005117a5: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 005117ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005117b1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5117b6u); f_0047f950();
    /* 005117b6: cmp dword ptr [ebp - 0xb4], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005117bc: jne 0x5117c8 */ if (!fZ) goto L_005117c8;
L_005117be:; BB(0x005117be);
    /* 005117be: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_005117c8:; BB(0x005117c8);
    /* 005117c8: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005117ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005117cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005117d5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5117dau); f_0047e390();
    /* 005117da: mov ecx, eax */ r_ecx = r_eax;
    /* 005117dc: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5117e1u); f_004c7010();
    /* 005117e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005117e3: je 0x51179c */ if (fZ) goto L_0051179c;
L_005117e5:; BB(0x005117e5);
    /* 005117e5: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005117eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005117ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005117f2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5117f7u); f_0047e390();
    /* 005117f7: mov ecx, eax */ r_ecx = r_eax;
    /* 005117f9: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5117feu); f_004c7010();
    /* 005117fe: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511801: je 0x51179c */ if (fZ) goto L_0051179c;
L_00511803:; BB(0x00511803);
    /* 00511803: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511809: cmp edx, dword ptr [ebp - 0xb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051180f: jne 0x511828 */ if (!fZ) goto L_00511828;
L_00511811:; BB(0x00511811);
    /* 00511811: push 0x82a */ { u32 v = 0x82au; r_esp -= 4; W32(r_esp, v); }
    /* 00511816: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051181b: push 0x6c11e4 */ { u32 v = 0x6c11e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511820: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x511825u); f_005e9f20();
    /* 00511825: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511828:; BB(0x00511828);
    /* 00511828: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 0051182e: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00511834: mov dword ptr [ecx*4 + 0x793038], edx */ W32((u32)(r_ecx*4+0x793038u), r_edx);
L_0051183b:; BB(0x0051183b);
    /* 0051183b: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00511840: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511843: mov dword ptr [0x793074], eax */ W32((u32)(0x793074u), r_eax);
    /* 00511848: jmp 0x511737 */ goto L_00511737;
L_0051184d:; BB(0x0051184d);
    /* 0051184d: mov dword ptr [0x793074], 0 */ W32((u32)(0x793074u), 0x0u);
    /* 00511857: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00511859: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051185f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511861: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511867: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051186a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51186cu); call_ind(t); }
    /* 0051186c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051186e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511874: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511876: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051187c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051187f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511881u); call_ind(t); }
    /* 00511881: jmp 0x516cb0 */ goto L_00516cb0;
L_00511886:; BB(0x00511886);
    /* 00511886: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 0051188c: cmp dword ptr [ecx*4 + 0x793038], -1 */ {  u32 a = R32((u32)(r_ecx*4+0x793038u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511894: jne 0x5118c5 */ if (!fZ) goto L_005118c5;
L_00511896:; BB(0x00511896);
    /* 00511896: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00511898: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051189e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005118a0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005118a6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005118a9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5118abu); call_ind(t); }
    /* 005118ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005118ad: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005118b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005118b5: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005118bb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005118be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5118c0u); call_ind(t); }
    /* 005118c0: jmp 0x5119bc */ goto L_005119bc;
L_005118c5:; BB(0x005118c5);
    /* 005118c5: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 005118cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005118cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005118d2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5118d7u); f_0047e390();
    /* 005118d7: mov ecx, eax */ r_ecx = r_eax;
    /* 005118d9: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5118deu); f_004c6cb0();
    /* 005118de: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005118e1: jne 0x511939 */ if (!fZ) goto L_00511939;
L_005118e3:; BB(0x005118e3);
    /* 005118e3: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 005118e9: movzx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)R8((u32)(r_edx+0xc8u));
    /* 005118f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005118f2: je 0x51190a */ if (fZ) goto L_0051190a;
L_005118f4:; BB(0x005118f4);
    /* 005118f4: lea ecx, [ebp - 0xc0] */ r_ecx = (u32)(r_ebp+0xffffff40u);
    /* 005118fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005118fb: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511902: call 0x50c7a0 */ r_esp -= 4; W32(r_esp, 0x511907u); f_0050c7a0();
    /* 00511907: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051190a:; BB(0x0051190a);
    /* 0051190a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0051190c: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511912: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511914: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051191a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051191d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51191fu); call_ind(t); }
    /* 0051191f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511921: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511927: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511929: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051192f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511932: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511934u); call_ind(t); }
    /* 00511934: jmp 0x5119bc */ goto L_005119bc;
L_00511939:; BB(0x00511939);
    /* 00511939: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 0051193f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511940: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511946: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51194bu); f_0047e390();
    /* 0051194b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051194d: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x511952u); f_004c6cb0();
    /* 00511952: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511955: jne 0x5119a1 */ if (!fZ) goto L_005119a1;
L_00511957:; BB(0x00511957);
    /* 00511957: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 0051195d: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511960: add edx, 0x7930a0 */ {  u32 a = r_edx; u32 b = 0x7930a0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00511966: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511967: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 0051196c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051196d: call 0x50c7a0 */ r_esp -= 4; W32(r_esp, 0x511972u); f_0050c7a0();
    /* 00511972: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511975: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00511977: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051197d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051197f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511985: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511988: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51198au); call_ind(t); }
    /* 0051198a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051198c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511992: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511994: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051199a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051199d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51199fu); call_ind(t); }
    /* 0051199f: jmp 0x5119bc */ goto L_005119bc;
L_005119a1:; BB(0x005119a1);
    /* 005119a1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005119a3: jne 0x5119bc */ if (!fZ) goto L_005119bc;
L_005119a5:; BB(0x005119a5);
    /* 005119a5: push 0x84f */ { u32 v = 0x84fu; r_esp -= 4; W32(r_esp, v); }
    /* 005119aa: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005119af: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005119b4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5119b9u); f_005e9f20();
    /* 005119b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005119bc:; BB(0x005119bc);
    /* 005119bc: jmp 0x516cb0 */ goto L_00516cb0;
L_005119c6:; BB(0x005119c6);
    /* 005119c6: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 005119cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005119ce: mov dword ptr [0x793074], eax */ W32((u32)(0x793074u), r_eax);
    /* 005119d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005119d9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5119deu); f_0047f950();
    /* 005119de: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005119e4: jne 0x5119fd */ if (!fZ) goto L_005119fd;
L_005119e6:; BB(0x005119e6);
    /* 005119e6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005119e8: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005119ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005119f0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005119f6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005119f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5119fbu); call_ind(t); }
    /* 005119fb: jmp 0x511a12 */ goto L_00511a12;
L_005119fd:; BB(0x005119fd);
    /* 005119fd: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005119ff: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511a05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511a07: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511a0d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511a10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511a12u); call_ind(t); }
L_00511a12:; BB(0x00511a12);
    /* 00511a12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511a14: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511a1a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511a1c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511a22: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511a25: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511a27u); call_ind(t); }
    /* 00511a27: jmp 0x516cb0 */ goto L_00516cb0;
L_00511a2c:; BB(0x00511a2c);
    /* 00511a2c: mov dword ptr [0x793074], 0 */ W32((u32)(0x793074u), 0x0u);
    /* 00511a36: jmp 0x511a47 */ goto L_00511a47;
L_00511a38:; BB(0x00511a38);
    /* 00511a38: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511a3e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511a41: mov dword ptr [0x793074], ecx */ W32((u32)(0x793074u), r_ecx);
L_00511a47:; BB(0x00511a47);
    /* 00511a47: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511a4d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511a52u); f_0047f950();
    /* 00511a52: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511a58: jge 0x511ba4 */ if ((fS==fO)) goto L_00511ba4;
L_00511a5e:; BB(0x00511a5e);
    /* 00511a5e: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511a64: cmp dword ptr [edx*4 + 0x793038], -1 */ {  u32 a = R32((u32)(r_edx*4+0x793038u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511a6c: jne 0x511a70 */ if (!fZ) goto L_00511a70;
L_00511a6e:; BB(0x00511a6e);
    /* 00511a6e: jmp 0x511a38 */ goto L_00511a38;
L_00511a70:; BB(0x00511a70);
    /* 00511a70: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00511a75: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511a78: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511a7e: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511a81: mov edx, dword ptr [eax + 0x7930a8] */ r_edx = R32((u32)(r_eax+0x7930a8u));
    /* 00511a87: cmp edx, dword ptr [ecx + 0x7930a4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x7930a4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511a8d: jl 0x511aa6 */ if ((fS!=fO)) goto L_00511aa6;
L_00511a8f:; BB(0x00511a8f);
    /* 00511a8f: push 0x87b */ { u32 v = 0x87bu; r_esp -= 4; W32(r_esp, v); }
    /* 00511a94: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511a99: push 0x6c1190 */ { u32 v = 0x6c1190u; r_esp -= 4; W32(r_esp, v); }
    /* 00511a9e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x511aa3u); f_005e9f20();
    /* 00511aa3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511aa6:; BB(0x00511aa6);
    /* 00511aa6: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511aac: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511aaf: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511ab5: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511ab8: mov eax, dword ptr [ecx + 0x7930a4] */ r_eax = R32((u32)(r_ecx+0x7930a4u));
    /* 00511abe: cmp eax, dword ptr [edx + 0x7930a0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7930a0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511ac4: jl 0x511add */ if ((fS!=fO)) goto L_00511add;
L_00511ac6:; BB(0x00511ac6);
    /* 00511ac6: push 0x87c */ { u32 v = 0x87cu; r_esp -= 4; W32(r_esp, v); }
    /* 00511acb: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511ad0: push 0x6c1138 */ { u32 v = 0x6c1138u; r_esp -= 4; W32(r_esp, v); }
    /* 00511ad5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x511adau); f_005e9f20();
    /* 00511ada: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511add:; BB(0x00511add);
    /* 00511add: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 00511ae7: jmp 0x511af8 */ goto L_00511af8;
L_00511ae9:; BB(0x00511ae9);
    /* 00511ae9: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00511aef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00511af2: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
L_00511af8:; BB(0x00511af8);
    /* 00511af8: cmp dword ptr [ebp - 0xc4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511aff: jge 0x511b9f */ if ((fS==fO)) goto L_00511b9f;
L_00511b05:; BB(0x00511b05);
    /* 00511b05: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00511b0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b0b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511b11: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511b16u); f_0047e390();
    /* 00511b16: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00511b19: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 00511b1f: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511b25: mov eax, dword ptr [edx*4 + 0x793038] */ r_eax = R32((u32)(r_edx*4+0x793038u));
    /* 00511b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511b33: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511b38u); f_0047e390();
    /* 00511b38: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00511b3b: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 00511b41: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511b47: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00511b4a: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00511b50: mov ecx, dword ptr [edx + eax*4 + 0x7930a0] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x7930a0u));
    /* 00511b57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511b58: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00511b5e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x511b63u); f_0060ca40();
    /* 00511b63: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00511b69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511b6b: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00511b71: call 0x463db0 */ r_esp -= 4; W32(r_esp, 0x511b76u); f_00463db0();
    /* 00511b76: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00511b7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511b7d: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00511b83: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x511b88u); f_0060c890();
    /* 00511b88: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00511b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511b8f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00511b95: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x511b9au); f_0060c840();
    /* 00511b9a: jmp 0x511ae9 */ goto L_00511ae9;
L_00511b9f:; BB(0x00511b9f);
    /* 00511b9f: jmp 0x511a38 */ goto L_00511a38;
L_00511ba4:; BB(0x00511ba4);
    /* 00511ba4: mov dword ptr [0x793074], 0 */ W32((u32)(0x793074u), 0x0u);
    /* 00511bae: jmp 0x511bbf */ goto L_00511bbf;
L_00511bb0:; BB(0x00511bb0);
    /* 00511bb0: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511bb6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00511bb9: mov dword ptr [0x793074], ecx */ W32((u32)(0x793074u), r_ecx);
L_00511bbf:; BB(0x00511bbf);
    /* 00511bbf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511bc5: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511bcau); f_0047f950();
    /* 00511bca: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511bd0: jge 0x511c65 */ if ((fS==fO)) goto L_00511c65;
L_00511bd6:; BB(0x00511bd6);
    /* 00511bd6: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511bdc: cmp dword ptr [edx*4 + 0x793038], -1 */ {  u32 a = R32((u32)(r_edx*4+0x793038u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511be4: jne 0x511be8 */ if (!fZ) goto L_00511be8;
L_00511be6:; BB(0x00511be6);
    /* 00511be6: jmp 0x511bb0 */ goto L_00511bb0;
L_00511be8:; BB(0x00511be8);
    /* 00511be8: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00511bed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511bee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511bf4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511bf9u); f_0047e390();
    /* 00511bf9: mov ecx, eax */ r_ecx = r_eax;
    /* 00511bfb: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x511c00u); f_004c6cb0();
    /* 00511c00: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511c03: je 0x511c10 */ if (fZ) goto L_00511c10;
L_00511c05:; BB(0x00511c05);
    /* 00511c05: movzx ecx, byte ptr [0x791360] */ r_ecx = (u32)R8((u32)(0x791360u));
    /* 00511c0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511c0e: je 0x511c45 */ if (fZ) goto L_00511c45;
L_00511c10:; BB(0x00511c10);
    /* 00511c10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00511c12: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511c18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511c19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511c1f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511c24u); f_0047e390();
    /* 00511c24: mov ecx, eax */ r_ecx = r_eax;
    /* 00511c26: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x511c2bu); f_004c7820();
    /* 00511c2b: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00511c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511c31: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511c37: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511c3cu); f_0047e390();
    /* 00511c3c: mov ecx, eax */ r_ecx = r_eax;
    /* 00511c3e: call 0x4c76c0 */ r_esp -= 4; W32(r_esp, 0x511c43u); f_004c76c0();
    /* 00511c43: jmp 0x511c60 */ goto L_00511c60;
L_00511c45:; BB(0x00511c45);
    /* 00511c45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511c47: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511c4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511c4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511c54: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511c59u); f_0047e390();
    /* 00511c59: mov ecx, eax */ r_ecx = r_eax;
    /* 00511c5b: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x511c60u); f_004c7820();
L_00511c60:; BB(0x00511c60);
    /* 00511c60: jmp 0x511bb0 */ goto L_00511bb0;
L_00511c65:; BB(0x00511c65);
    /* 00511c65: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00511c67: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511c6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00511c6f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511c75: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00511c78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x511c7au); call_ind(t); }
    /* 00511c7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511c7c: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511c82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511c84: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511c8a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511c8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511c8fu); call_ind(t); }
    /* 00511c8f: jmp 0x516cb0 */ goto L_00516cb0;
L_00511c94:; BB(0x00511c94);
    /* 00511c94: mov word ptr [ebp - 0xd4], 0 */ W16((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 00511c9d: mov word ptr [ebp - 0xd8], 0 */ W16((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 00511ca6: jmp 0x511cba */ goto L_00511cba;
L_00511ca8:; BB(0x00511ca8);
    /* 00511ca8: mov cx, word ptr [ebp - 0xd8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff28u))) & 0xffffu);
    /* 00511caf: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00511cb3: mov word ptr [ebp - 0xd8], cx */ W16((u32)(r_ebp+0xffffff28u), (u16)r_ecx);
L_00511cba:; BB(0x00511cba);
    /* 00511cba: movsx esi, word ptr [ebp - 0xd8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511cc1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511cc7: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511cccu); f_0047f950();
    /* 00511ccc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511cce: jge 0x511d44 */ if ((fS==fO)) goto L_00511d44;
L_00511cd0:; BB(0x00511cd0);
    /* 00511cd0: movsx edx, word ptr [ebp - 0xd8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511cd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511cd8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511cde: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511ce3u); f_0047e390();
    /* 00511ce3: mov ecx, eax */ r_ecx = r_eax;
    /* 00511ce5: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x511ceau); f_004c6cb0();
    /* 00511cea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511ced: jne 0x511d3f */ if (!fZ) goto L_00511d3f;
L_00511cef:; BB(0x00511cef);
    /* 00511cef: movsx eax, word ptr [ebp - 0xd8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511cf7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511cfd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511d02u); f_0047e390();
    /* 00511d02: mov ecx, eax */ r_ecx = r_eax;
    /* 00511d04: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511d09u); f_004c7010();
    /* 00511d09: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511d0c: je 0x511d2d */ if (fZ) goto L_00511d2d;
L_00511d0e:; BB(0x00511d0e);
    /* 00511d0e: movsx ecx, word ptr [ebp - 0xd8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511d15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511d16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511d1c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511d21u); f_0047e390();
    /* 00511d21: mov ecx, eax */ r_ecx = r_eax;
    /* 00511d23: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511d28u); f_004c7010();
    /* 00511d28: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511d2b: jne 0x511d3f */ if (!fZ) goto L_00511d3f;
L_00511d2d:; BB(0x00511d2d);
    /* 00511d2d: mov dx, word ptr [ebp - 0xd4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff2cu))) & 0xffffu);
    /* 00511d34: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00511d38: mov word ptr [ebp - 0xd4], dx */ W16((u32)(r_ebp+0xffffff2cu), (u16)r_edx);
L_00511d3f:; BB(0x00511d3f);
    /* 00511d3f: jmp 0x511ca8 */ goto L_00511ca8;
L_00511d44:; BB(0x00511d44);
    /* 00511d44: mov dword ptr [0x793078], 8 */ W32((u32)(0x793078u), 0x8u);
    /* 00511d4e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d50: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511d56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511d58: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511d5e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511d61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511d63u); call_ind(t); }
    /* 00511d63: movsx ecx, word ptr [ebp - 0xd4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff2cu));
    /* 00511d6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511d6c: jne 0x511dc1 */ if (!fZ) goto L_00511dc1;
L_00511d6e:; BB(0x00511d6e);
    /* 00511d6e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d70: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00511d76: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x511d7bu); f_00637810();
    /* 00511d7b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511d7e: jge 0x511daf */ if ((fS==fO)) goto L_00511daf;
L_00511d80:; BB(0x00511d80);
    /* 00511d80: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d82: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00511d88: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x511d8du); f_00637810();
    /* 00511d8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00511d8f: jl 0x511daf */ if ((fS!=fO)) goto L_00511daf;
L_00511d91:; BB(0x00511d91);
    /* 00511d91: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511d93: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00511d99: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x511d9eu); f_00637810();
    /* 00511d9e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511da2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511da8: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x511dadu); f_005fc490();
    /* 00511dad: jmp 0x511dbc */ goto L_00511dbc;
L_00511daf:; BB(0x00511daf);
    /* 00511daf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00511db1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511db7: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x511dbcu); f_005fc490();
L_00511dbc:; BB(0x00511dbc);
    /* 00511dbc: jmp 0x511f1d */ goto L_00511f1d;
L_00511dc1:; BB(0x00511dc1);
    /* 00511dc1: movsx edx, word ptr [ebp - 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff2cu));
    /* 00511dc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511dc9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x511dceu); f_0062fbf0();
    /* 00511dce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00511dd1: mov word ptr [ebp - 0xdc], ax */ W16((u32)(r_ebp+0xffffff24u), (u16)r_eax);
    /* 00511dd8: mov word ptr [ebp - 0xe0], 0 */ W16((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 00511de1: mov word ptr [ebp - 0xd8], 0 */ W16((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 00511dea: jmp 0x511dfe */ goto L_00511dfe;
L_00511dec:; BB(0x00511dec);
    /* 00511dec: mov ax, word ptr [ebp - 0xd8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff28u))) & 0xffffu);
    /* 00511df3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00511df7: mov word ptr [ebp - 0xd8], ax */ W16((u32)(r_ebp+0xffffff28u), (u16)r_eax);
L_00511dfe:; BB(0x00511dfe);
    /* 00511dfe: movsx esi, word ptr [ebp - 0xd8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511e05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511e0b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511e10u); f_0047f950();
    /* 00511e10: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511e12: jge 0x511ec7 */ if ((fS==fO)) goto L_00511ec7;
L_00511e18:; BB(0x00511e18);
    /* 00511e18: movsx ecx, word ptr [ebp - 0xd8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511e1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e20: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511e26: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511e2bu); f_0047e390();
    /* 00511e2b: mov ecx, eax */ r_ecx = r_eax;
    /* 00511e2d: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x511e32u); f_004c6cb0();
    /* 00511e32: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e35: jne 0x511e75 */ if (!fZ) goto L_00511e75;
L_00511e37:; BB(0x00511e37);
    /* 00511e37: movsx edx, word ptr [ebp - 0xd8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511e3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e3f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511e45: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511e4au); f_0047e390();
    /* 00511e4a: mov ecx, eax */ r_ecx = r_eax;
    /* 00511e4c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511e51u); f_004c7010();
    /* 00511e51: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e54: je 0x511e7c */ if (fZ) goto L_00511e7c;
L_00511e56:; BB(0x00511e56);
    /* 00511e56: movsx eax, word ptr [ebp - 0xd8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511e5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511e5e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511e64: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511e69u); f_0047e390();
    /* 00511e69: mov ecx, eax */ r_ecx = r_eax;
    /* 00511e6b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511e70u); f_004c7010();
    /* 00511e70: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e73: je 0x511e7c */ if (fZ) goto L_00511e7c;
L_00511e75:; BB(0x00511e75);
    /* 00511e75: jmp 0x511dec */ goto L_00511dec;
L_00511e7c:; BB(0x00511e7c);
    /* 00511e7c: movsx ecx, word ptr [ebp - 0xe0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff20u));
    /* 00511e83: movsx edx, word ptr [ebp - 0xdc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff24u));
    /* 00511e8a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511e8c: jne 0x511eb0 */ if (!fZ) goto L_00511eb0;
L_00511e8e:; BB(0x00511e8e);
    /* 00511e8e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00511e91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00511e92: movsx ecx, word ptr [ebp - 0xd8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511e99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511e9a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511ea0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511ea5u); f_0047e390();
    /* 00511ea5: mov ecx, eax */ r_ecx = r_eax;
    /* 00511ea7: call 0x4cd370 */ r_esp -= 4; W32(r_esp, 0x511eacu); f_004cd370();
    /* 00511eac: jmp 0x511ec7 */ goto L_00511ec7;
L_00511eb0:; BB(0x00511eb0);
    /* 00511eb0: mov dx, word ptr [ebp - 0xe0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff20u))) & 0xffffu);
    /* 00511eb7: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00511ebb: mov word ptr [ebp - 0xe0], dx */ W16((u32)(r_ebp+0xffffff20u), (u16)r_edx);
    /* 00511ec2: jmp 0x511dec */ goto L_00511dec;
L_00511ec7:; BB(0x00511ec7);
    /* 00511ec7: movsx eax, word ptr [ebp - 0xe0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff20u));
    /* 00511ece: movsx ecx, word ptr [ebp - 0xdc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff24u));
    /* 00511ed5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511ed7: je 0x511ef0 */ if (fZ) goto L_00511ef0;
L_00511ed9:; BB(0x00511ed9);
    /* 00511ed9: push 0x8c6 */ { u32 v = 0x8c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00511ede: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511ee3: push 0x6bc4fc */ { u32 v = 0x6bc4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00511ee8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x511eedu); f_005e9f20();
    /* 00511eed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511ef0:; BB(0x00511ef0);
    /* 00511ef0: movsx esi, word ptr [ebp - 0xd8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff28u));
    /* 00511ef7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511efd: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511f02u); f_0047f950();
    /* 00511f02: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00511f04: jl 0x511f1d */ if ((fS!=fO)) goto L_00511f1d;
L_00511f06:; BB(0x00511f06);
    /* 00511f06: push 0x8c7 */ { u32 v = 0x8c7u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f0b: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f10: push 0x6bc4c8 */ { u32 v = 0x6bc4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f15: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x511f1au); f_005e9f20();
    /* 00511f1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00511f1d:; BB(0x00511f1d);
    /* 00511f1d: jmp 0x516cb0 */ goto L_00516cb0;
L_00511f22:; BB(0x00511f22);
    /* 00511f22: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511f28: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x511f2du); f_0047bbc0();
    /* 00511f2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00511f30: mov dword ptr [0x793074], eax */ W32((u32)(0x793074u), r_eax);
    /* 00511f35: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511f3b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x511f40u); f_0047f950();
    /* 00511f40: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511f46: jne 0x511f52 */ if (!fZ) goto L_00511f52;
L_00511f48:; BB(0x00511f48);
    /* 00511f48: mov dword ptr [0x793074], 0 */ W32((u32)(0x793074u), 0x0u);
L_00511f52:; BB(0x00511f52);
    /* 00511f52: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f54: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511f5a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511f5c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511f62: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511f65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511f67u); call_ind(t); }
    /* 00511f67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511f69: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511f6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511f71: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511f77: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511f7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511f7cu); call_ind(t); }
    /* 00511f7c: jmp 0x516cb0 */ goto L_00516cb0;
L_00511f81:; BB(0x00511f81);
    /* 00511f81: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511f87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511f88: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511f8e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511f93u); f_0047e390();
    /* 00511f93: mov ecx, eax */ r_ecx = r_eax;
    /* 00511f95: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511f9au); f_004c7010();
    /* 00511f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511f9c: je 0x511fbc */ if (fZ) goto L_00511fbc;
L_00511f9e:; BB(0x00511f9e);
    /* 00511f9e: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00511fa4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00511fa5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511fab: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511fb0u); f_0047e390();
    /* 00511fb0: mov ecx, eax */ r_ecx = r_eax;
    /* 00511fb2: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x511fb7u); f_004c7010();
    /* 00511fb7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00511fba: jne 0x511feb */ if (!fZ) goto L_00511feb;
L_00511fbc:; BB(0x00511fbc);
    /* 00511fbc: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00511fbe: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511fc4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00511fc6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511fcc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00511fcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511fd1u); call_ind(t); }
    /* 00511fd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00511fd3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511fd9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00511fdb: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00511fe1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00511fe4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x511fe6u); call_ind(t); }
    /* 00511fe6: jmp 0x51238d */ goto L_0051238d;
L_00511feb:; BB(0x00511feb);
    /* 00511feb: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00511ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00511ff2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00511ff8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x511ffdu); f_0047e390();
    /* 00511ffd: mov ecx, eax */ r_ecx = r_eax;
    /* 00511fff: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x512004u); f_004c6cb0();
    /* 00512004: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512007: jne 0x512065 */ if (!fZ) goto L_00512065;
L_00512009:; BB(0x00512009);
    /* 00512009: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 0051200f: movzx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)R8((u32)(r_edx+0xc8u));
    /* 00512016: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512018: je 0x512036 */ if (fZ) goto L_00512036;
L_0051201a:; BB(0x0051201a);
    /* 0051201a: lea ecx, [ebp - 0xfc] */ r_ecx = (u32)(r_ebp+0xffffff04u);
    /* 00512020: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512021: lea edx, [ebp - 0xec] */ r_edx = (u32)(r_ebp+0xffffff14u);
    /* 00512027: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512028: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 0051202d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051202e: call 0x50c830 */ r_esp -= 4; W32(r_esp, 0x512033u); f_0050c830();
    /* 00512033: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512036:; BB(0x00512036);
    /* 00512036: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00512038: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051203e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00512040: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512046: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00512049: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51204bu); call_ind(t); }
    /* 0051204b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051204d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512053: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00512055: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051205b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051205e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512060u); call_ind(t); }
    /* 00512060: jmp 0x51238d */ goto L_0051238d;
L_00512065:; BB(0x00512065);
    /* 00512065: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 0051206b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051206c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512072: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512077u); f_0047e390();
    /* 00512077: mov ecx, eax */ r_ecx = r_eax;
    /* 00512079: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51207eu); f_004c6cb0();
    /* 0051207e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512081: jne 0x51238d */ if (!fZ) goto L_0051238d;
L_00512087:; BB(0x00512087);
    /* 00512087: lea edx, [ebp - 0x140] */ r_edx = (u32)(r_ebp+0xfffffec0u);
    /* 0051208d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051208e: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 00512094: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512095: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 0051209b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051209c: call 0x50c830 */ r_esp -= 4; W32(r_esp, 0x5120a1u); f_0050c830();
    /* 005120a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005120a4: mov word ptr [ebp - 0x114], 0 */ W16((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 005120ad: mov word ptr [ebp - 0x118], 0 */ W16((u32)(r_ebp+0xfffffee8u), 0x0u);
L_005120b6:; BB(0x005120b6);
    /* 005120b6: movsx edx, word ptr [ebp - 0x114] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 005120bd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005120c0: jge 0x51215b */ if ((fS==fO)) goto L_0051215b;
L_005120c6:; BB(0x005120c6);
    /* 005120c6: movsx eax, word ptr [ebp - 0x118] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee8u));
    /* 005120cd: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005120d0: jl 0x5120e9 */ if ((fS!=fO)) goto L_005120e9;
L_005120d2:; BB(0x005120d2);
    /* 005120d2: push 0x8f6 */ { u32 v = 0x8f6u; r_esp -= 4; W32(r_esp, v); }
    /* 005120d7: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005120dc: push 0x6c112c */ { u32 v = 0x6c112cu; r_esp -= 4; W32(r_esp, v); }
    /* 005120e1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5120e6u); f_005e9f20();
    /* 005120e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005120e9:; BB(0x005120e9);
    /* 005120e9: movsx edx, word ptr [ebp - 0x118] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee8u));
    /* 005120f0: movzx eax, byte ptr [ebp + edx - 0x10c] */ r_eax = (u32)R8((u32)(r_ebp+r_edx+0xfffffef4u));
    /* 005120f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005120fa: je 0x512144 */ if (fZ) goto L_00512144;
L_005120fc:; BB(0x005120fc);
    /* 005120fc: movsx ecx, word ptr [ebp - 0x118] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee8u));
    /* 00512103: mov edx, 6 */ r_edx = 0x6u;
    /* 00512108: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051210a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051210b: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00512110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512111: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512117: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51211cu); f_0047e390();
    /* 0051211c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0051211f: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x512124u); f_0060ca40();
    /* 00512124: movsx ecx, word ptr [ebp - 0x114] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffeecu));
    /* 0051212b: mov dword ptr [ebp + ecx*4 - 0x104], eax */ W32((u32)(r_ebp+r_ecx*4+0xfffffefcu), r_eax);
    /* 00512132: mov dx, word ptr [ebp - 0x114] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffeecu))) & 0xffffu);
    /* 00512139: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0051213d: mov word ptr [ebp - 0x114], dx */ W16((u32)(r_ebp+0xfffffeecu), (u16)r_edx);
L_00512144:; BB(0x00512144);
    /* 00512144: mov ax, word ptr [ebp - 0x118] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffee8u))) & 0xffffu);
    /* 0051214b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0051214f: mov word ptr [ebp - 0x118], ax */ W16((u32)(r_ebp+0xfffffee8u), (u16)r_eax);
    /* 00512156: jmp 0x5120b6 */ goto L_005120b6;
L_0051215b:; BB(0x0051215b);
    /* 0051215b: mov word ptr [ebp - 0x11c], 0 */ W16((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 00512164: jmp 0x512178 */ goto L_00512178;
L_00512166:; BB(0x00512166);
    /* 00512166: mov cx, word ptr [ebp - 0x11c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffee4u))) & 0xffffu);
    /* 0051216d: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00512171: mov word ptr [ebp - 0x11c], cx */ W16((u32)(r_ebp+0xfffffee4u), (u16)r_ecx);
L_00512178:; BB(0x00512178);
    /* 00512178: movsx edx, word ptr [ebp - 0x11c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee4u));
    /* 0051217f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512182: jge 0x51222e */ if ((fS==fO)) goto L_0051222e;
L_00512188:; BB(0x00512188);
    /* 00512188: mov word ptr [ebp - 0x110], 0 */ W16((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 00512191: jmp 0x5121a5 */ goto L_005121a5;
L_00512193:; BB(0x00512193);
    /* 00512193: mov ax, word ptr [ebp - 0x110] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef0u))) & 0xffffu);
    /* 0051219a: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0051219e: mov word ptr [ebp - 0x110], ax */ W16((u32)(r_ebp+0xfffffef0u), (u16)r_eax);
L_005121a5:; BB(0x005121a5);
    /* 005121a5: movsx ecx, word ptr [ebp - 0x110] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef0u));
    /* 005121ac: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005121af: jge 0x512206 */ if ((fS==fO)) goto L_00512206;
L_005121b1:; BB(0x005121b1);
    /* 005121b1: movsx edx, word ptr [ebp - 0x110] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef0u));
    /* 005121b8: movsx eax, word ptr [ebp + edx*2 - 0x140] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+r_edx*2+0xfffffec0u));
    /* 005121c0: movsx ecx, word ptr [ebp - 0x11c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee4u));
    /* 005121c7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005121c9: jne 0x512204 */ if (!fZ) goto L_00512204;
L_005121cb:; BB(0x005121cb);
    /* 005121cb: movsx edx, word ptr [ebp - 0x110] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef0u));
    /* 005121d2: mov eax, 6 */ r_eax = 0x6u;
    /* 005121d7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005121d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005121da: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 005121e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005121e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005121e7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5121ecu); f_0047e390();
    /* 005121ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005121ef: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5121f4u); f_0060ca40();
    /* 005121f4: movsx edx, word ptr [ebp - 0x11c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee4u));
    /* 005121fb: mov dword ptr [ebp + edx*4 - 0x130], eax */ W32((u32)(r_ebp+r_edx*4+0xfffffed0u), r_eax);
    /* 00512202: jmp 0x512206 */ goto L_00512206;
L_00512204:; BB(0x00512204);
    /* 00512204: jmp 0x512193 */ goto L_00512193;
L_00512206:; BB(0x00512206);
    /* 00512206: movsx eax, word ptr [ebp - 0x110] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef0u));
    /* 0051220d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512210: jl 0x512229 */ if ((fS!=fO)) goto L_00512229;
L_00512212:; BB(0x00512212);
    /* 00512212: push 0x90d */ { u32 v = 0x90du; r_esp -= 4; W32(r_esp, v); }
    /* 00512217: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051221c: push 0x6c111c */ { u32 v = 0x6c111cu; r_esp -= 4; W32(r_esp, v); }
    /* 00512221: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x512226u); f_005e9f20();
    /* 00512226: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512229:; BB(0x00512229);
    /* 00512229: jmp 0x512166 */ goto L_00512166;
L_0051222e:; BB(0x0051222e);
    /* 0051222e: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00512234: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00512237: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0051223d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00512240: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512242: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00512245: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512247u); call_ind(t); }
    /* 00512247: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0051224d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051224e: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00512254: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512255: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051225b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512260u); f_0047e390();
    /* 00512260: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00512263: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x512268u); f_0060c890();
    /* 00512268: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 0051226e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00512271: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 00512277: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0051227a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051227c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051227e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00512281: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512283u); call_ind(t); }
    /* 00512283: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 00512289: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051228a: mov edx, dword ptr [0x793074] */ r_edx = R32((u32)(0x793074u));
    /* 00512290: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512291: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512297: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51229cu); f_0047e390();
    /* 0051229c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0051229f: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5122a4u); f_0060c890();
    /* 005122a4: mov word ptr [ebp - 0x11c], 0 */ W16((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 005122ad: jmp 0x5122c1 */ goto L_005122c1;
L_005122af:; BB(0x005122af);
    /* 005122af: mov ax, word ptr [ebp - 0x11c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffee4u))) & 0xffffu);
    /* 005122b6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005122ba: mov word ptr [ebp - 0x11c], ax */ W16((u32)(r_ebp+0xfffffee4u), (u16)r_eax);
L_005122c1:; BB(0x005122c1);
    /* 005122c1: movsx ecx, word ptr [ebp - 0x11c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee4u));
    /* 005122c8: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005122cb: jge 0x512321 */ if ((fS==fO)) goto L_00512321;
L_005122cd:; BB(0x005122cd);
    /* 005122cd: movsx edx, word ptr [ebp - 0x11c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee4u));
    /* 005122d4: mov eax, dword ptr [ebp + edx*4 - 0x130] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffed0u));
    /* 005122db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005122dc: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 005122e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005122e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005122e9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5122eeu); f_0047e390();
    /* 005122ee: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005122f1: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5122f6u); f_0060c890();
    /* 005122f6: movsx edx, word ptr [ebp - 0x11c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffee4u));
    /* 005122fd: mov eax, dword ptr [ebp + edx*4 - 0x130] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffed0u));
    /* 00512304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512305: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 0051230b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051230c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512312: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512317u); f_0047e390();
    /* 00512317: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0051231a: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x51231fu); f_0060c7d0();
    /* 0051231f: jmp 0x5122af */ goto L_005122af;
L_00512321:; BB(0x00512321);
    /* 00512321: movzx edx, byte ptr [0x791360] */ r_edx = (u32)R8((u32)(0x791360u));
    /* 00512328: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051232a: je 0x512348 */ if (fZ) goto L_00512348;
L_0051232c:; BB(0x0051232c);
    /* 0051232c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051232e: mov eax, dword ptr [0x793074] */ r_eax = R32((u32)(0x793074u));
    /* 00512333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512334: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051233a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51233fu); f_0047e390();
    /* 0051233f: mov ecx, eax */ r_ecx = r_eax;
    /* 00512341: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x512346u); f_004c7820();
    /* 00512346: jmp 0x512363 */ goto L_00512363;
L_00512348:; BB(0x00512348);
    /* 00512348: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051234a: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 00512350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512351: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512357: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51235cu); f_0047e390();
    /* 0051235c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051235e: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x512363u); f_004c7820();
L_00512363:; BB(0x00512363);
    /* 00512363: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00512365: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051236b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051236d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512373: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00512376: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x512378u); call_ind(t); }
    /* 00512378: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051237a: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512380: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512382: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512388: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051238b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51238du); call_ind(t); }
L_0051238d:; BB(0x0051238d);
    /* 0051238d: jmp 0x516cb0 */ goto L_00516cb0;
L_00512392:; BB(0x00512392);
    /* 00512392: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00512394: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051239a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051239c: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005123a2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005123a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5123a7u); call_ind(t); }
    /* 005123a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005123a9: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005123af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005123b1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005123b7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005123ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5123bcu); call_ind(t); }
    /* 005123bc: jmp 0x516cb0 */ goto L_00516cb0;
L_005123c1:; BB(0x005123c1);
    /* 005123c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005123c7: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5123ccu); f_0047bbc0();
    /* 005123cc: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005123d2: jne 0x5123f5 */ if (!fZ) goto L_005123f5;
L_005123d4:; BB(0x005123d4);
    /* 005123d4: mov dword ptr [0x793078], 0 */ W32((u32)(0x793078u), 0x0u);
    /* 005123de: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005123e0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005123e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005123e8: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005123ee: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005123f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5123f3u); call_ind(t); }
    /* 005123f3: jmp 0x512436 */ goto L_00512436;
L_005123f5:; BB(0x005123f5);
    /* 005123f5: mov ecx, dword ptr [0x793074] */ r_ecx = R32((u32)(0x793074u));
    /* 005123fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005123fe: mov dword ptr [0x793074], ecx */ W32((u32)(0x793074u), r_ecx);
    /* 00512404: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051240a: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x51240fu); f_0047f950();
    /* 0051240f: cmp dword ptr [0x793074], eax */ {  u32 a = R32((u32)(0x793074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512415: jne 0x512421 */ if (!fZ) goto L_00512421;
L_00512417:; BB(0x00512417);
    /* 00512417: mov dword ptr [0x793074], 0 */ W32((u32)(0x793074u), 0x0u);
L_00512421:; BB(0x00512421);
    /* 00512421: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00512423: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512429: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051242b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512431: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00512434: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x512436u); call_ind(t); }
L_00512436:; BB(0x00512436);
    /* 00512436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512438: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051243e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512440: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512446: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00512449: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51244bu); call_ind(t); }
    /* 0051244b: jmp 0x516cb0 */ goto L_00516cb0;
L_00512450:; BB(0x00512450);
    /* 00512450: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 0051245a: jmp 0x51246b */ goto L_0051246b;
L_0051245c:; BB(0x0051245c);
    /* 0051245c: mov ecx, dword ptr [0x793138] */ r_ecx = R32((u32)(0x793138u));
    /* 00512462: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512465: mov dword ptr [0x793138], ecx */ W32((u32)(0x793138u), r_ecx);
L_0051246b:; BB(0x0051246b);
    /* 0051246b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512471: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x512476u); f_0047f950();
    /* 00512476: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051247c: jge 0x512499 */ if ((fS==fO)) goto L_00512499;
L_0051247e:; BB(0x0051247e);
    /* 0051247e: mov edx, dword ptr [0x793138] */ r_edx = R32((u32)(0x793138u));
    /* 00512484: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512485: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051248b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512490u); f_0047e390();
    /* 00512490: mov ecx, eax */ r_ecx = r_eax;
    /* 00512492: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x512497u); f_004dc490();
    /* 00512497: jmp 0x51245c */ goto L_0051245c;
L_00512499:; BB(0x00512499);
    /* 00512499: mov eax, dword ptr [0x793078] */ r_eax = R32((u32)(0x793078u));
    /* 0051249e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005124a1: mov dword ptr [0x793078], eax */ W32((u32)(0x793078u), r_eax);
    /* 005124a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005124ac: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5124b1u); f_0047bbc0();
    /* 005124b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005124b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005124b8: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x5124bdu); f_0047e400();
    /* 005124bd: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005124bf: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005124c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005124c7: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005124cd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005124d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5124d2u); call_ind(t); }
    /* 005124d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005124d4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005124da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005124dc: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005124e2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005124e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5124e7u); call_ind(t); }
    /* 005124e7: jmp 0x516cb0 */ goto L_00516cb0;
L_005124ec:; BB(0x005124ec);
    /* 005124ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005124f2: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x5124f7u); f_0047e440();
    /* 005124f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005124fd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x512502u); f_0047e3b0();
    /* 00512502: mov ecx, eax */ r_ecx = r_eax;
    /* 00512504: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x512509u); f_004c7010();
    /* 00512509: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051250c: je 0x512529 */ if (fZ) goto L_00512529;
L_0051250e:; BB(0x0051250e);
    /* 0051250e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512514: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x512519u); f_0047e3b0();
    /* 00512519: mov ecx, eax */ r_ecx = r_eax;
    /* 0051251b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x512520u); f_004c7010();
    /* 00512520: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512523: jne 0x5125b3 */ if (!fZ) goto L_005125b3;
L_00512529:; BB(0x00512529);
    /* 00512529: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051252f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x512534u); f_0047e3b0();
    /* 00512534: mov ecx, eax */ r_ecx = r_eax;
    /* 00512536: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51253bu); f_004c6cb0();
    /* 0051253b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051253e: je 0x51254b */ if (fZ) goto L_0051254b;
L_00512540:; BB(0x00512540);
    /* 00512540: movzx ecx, byte ptr [0x791360] */ r_ecx = (u32)R8((u32)(0x791360u));
    /* 00512547: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512549: je 0x512562 */ if (fZ) goto L_00512562;
L_0051254b:; BB(0x0051254b);
    /* 0051254b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051254d: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512553: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00512555: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051255b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0051255e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x512560u); call_ind(t); }
    /* 00512560: jmp 0x5125b1 */ goto L_005125b1;
L_00512562:; BB(0x00512562);
    /* 00512562: mov eax, 5 */ r_eax = 0x5u;
    /* 00512567: sub eax, dword ptr [0x793078] */ {  u32 a = r_eax; u32 b = R32((u32)(0x793078u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051256d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051256e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512574: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x512579u); f_0047e3b0();
    /* 00512579: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0051257c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x512581u); f_0060ca40();
    /* 00512581: mov ecx, eax */ r_ecx = r_eax;
    /* 00512583: call 0x463d40 */ r_esp -= 4; W32(r_esp, 0x512588u); f_00463d40();
    /* 00512588: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051258a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512590: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x512595u); f_0047e3b0();
    /* 00512595: mov ecx, eax */ r_ecx = r_eax;
    /* 00512597: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x51259cu); f_004c7820();
    /* 0051259c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051259e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005125a4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005125a6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005125ac: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005125af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5125b1u); call_ind(t); }
L_005125b1:; BB(0x005125b1);
    /* 005125b1: jmp 0x5125c8 */ goto L_005125c8;
L_005125b3:; BB(0x005125b3);
    /* 005125b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005125b5: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005125bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005125bd: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005125c3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005125c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5125c8u); call_ind(t); }
L_005125c8:; BB(0x005125c8);
    /* 005125c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005125ce: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x5125d3u); f_0047e420();
    /* 005125d3: mov esi, eax */ r_esi = r_eax;
    /* 005125d5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005125db: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x5125e0u); f_0047bbc0();
    /* 005125e0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005125e2: je 0x5125fb */ if (fZ) goto L_005125fb;
L_005125e4:; BB(0x005125e4);
    /* 005125e4: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005125e6: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005125ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005125ee: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005125f4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005125f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5125f9u); call_ind(t); }
    /* 005125f9: jmp 0x512630 */ goto L_00512630;
L_005125fb:; BB(0x005125fb);
    /* 005125fb: cmp dword ptr [0x793078], 5 */ {  u32 a = R32((u32)(0x793078u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512602: jne 0x51261b */ if (!fZ) goto L_0051261b;
L_00512604:; BB(0x00512604);
    /* 00512604: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00512606: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051260c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051260e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512614: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00512617: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512619u); call_ind(t); }
    /* 00512619: jmp 0x512630 */ goto L_00512630;
L_0051261b:; BB(0x0051261b);
    /* 0051261b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051261d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512623: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00512625: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051262b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051262e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512630u); call_ind(t); }
L_00512630:; BB(0x00512630);
    /* 00512630: jmp 0x516cb0 */ goto L_00516cb0;
L_00512635:; BB(0x00512635);
    /* 00512635: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051263b: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x512640u); f_0047e280();
    /* 00512640: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512643: je 0x51265c */ if (fZ) goto L_0051265c;
L_00512645:; BB(0x00512645);
    /* 00512645: push 0x99c */ { u32 v = 0x99cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051264a: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051264f: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512654: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x512659u); f_005e9f20();
    /* 00512659: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051265c:; BB(0x0051265c);
    /* 0051265c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512662: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x512667u); f_0047d7f0();
    /* 00512667: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051266a: je 0x512683 */ if (fZ) goto L_00512683;
L_0051266c:; BB(0x0051266c);
    /* 0051266c: push 0x99d */ { u32 v = 0x99du; r_esp -= 4; W32(r_esp, v); }
    /* 00512671: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512676: push 0x6be964 */ { u32 v = 0x6be964u; r_esp -= 4; W32(r_esp, v); }
    /* 0051267b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x512680u); f_005e9f20();
    /* 00512680: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512683:; BB(0x00512683);
    /* 00512683: mov dword ptr [0x79306c], 0 */ W32((u32)(0x79306cu), 0x0u);
    /* 0051268d: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051268f: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512695: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512697: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051269d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005126a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5126a2u); call_ind(t); }
    /* 005126a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005126a4: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005126aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005126ac: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005126b2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005126b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5126b7u); call_ind(t); }
    /* 005126b7: jmp 0x516cb0 */ goto L_00516cb0;
L_005126bc:; BB(0x005126bc);
    /* 005126bc: mov ecx, dword ptr [0x79306c] */ r_ecx = R32((u32)(0x79306cu));
    /* 005126c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005126c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005126c9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5126ceu); f_0047e390();
    /* 005126ce: mov ecx, eax */ r_ecx = r_eax;
    /* 005126d0: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5126d5u); f_004c7010();
    /* 005126d5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005126d8: je 0x512780 */ if (fZ) goto L_00512780;
L_005126de:; BB(0x005126de);
    /* 005126de: mov edx, dword ptr [0x79306c] */ r_edx = R32((u32)(0x79306cu));
    /* 005126e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005126e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005126eb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5126f0u); f_0047e390();
    /* 005126f0: mov ecx, eax */ r_ecx = r_eax;
    /* 005126f2: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5126f7u); f_004c7010();
    /* 005126f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005126f9: je 0x512780 */ if (fZ) goto L_00512780;
L_005126ff:; BB(0x005126ff);
    /* 005126ff: mov eax, dword ptr [0x79306c] */ r_eax = R32((u32)(0x79306cu));
    /* 00512704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512705: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051270b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512710u); f_0047e390();
    /* 00512710: mov ecx, eax */ r_ecx = r_eax;
    /* 00512712: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x512717u); f_004c6cb0();
    /* 00512717: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051271a: jne 0x512780 */ if (!fZ) goto L_00512780;
L_0051271c:; BB(0x0051271c);
    /* 0051271c: mov word ptr [ebp - 0x144], 1 */ W16((u32)(r_ebp+0xfffffebcu), 0x1u);
    /* 00512725: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051272b: movzx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)R8((u32)(r_ecx+0xc8u));
    /* 00512732: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512734: je 0x512754 */ if (fZ) goto L_00512754;
L_00512736:; BB(0x00512736);
    /* 00512736: mov eax, dword ptr [0x79306c] */ r_eax = R32((u32)(0x79306cu));
    /* 0051273b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051273c: call 0x50c970 */ r_esp -= 4; W32(r_esp, 0x512741u); f_0050c970();
    /* 00512741: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00512744: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00512747: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512749: jne 0x512754 */ if (!fZ) goto L_00512754;
L_0051274b:; BB(0x0051274b);
    /* 0051274b: mov word ptr [ebp - 0x144], 2 */ W16((u32)(r_ebp+0xfffffebcu), 0x2u);
L_00512754:; BB(0x00512754);
    /* 00512754: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00512756: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051275c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051275e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512764: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00512767: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x512769u); call_ind(t); }
    /* 00512769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051276b: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512771: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512773: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512779: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051277c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51277eu); call_ind(t); }
    /* 0051277e: jmp 0x5127aa */ goto L_005127aa;
L_00512780:; BB(0x00512780);
    /* 00512780: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00512782: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512788: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051278a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512790: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00512793: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512795u); call_ind(t); }
    /* 00512795: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512797: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051279d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051279f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005127a5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005127a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5127aau); call_ind(t); }
L_005127aa:; BB(0x005127aa);
    /* 005127aa: jmp 0x516cb0 */ goto L_00516cb0;
L_005127b4:; BB(0x005127b4);
    /* 005127b4: mov ecx, dword ptr [0x79306c] */ r_ecx = R32((u32)(0x79306cu));
    /* 005127ba: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005127bd: mov dword ptr [0x79306c], ecx */ W32((u32)(0x79306cu), r_ecx);
    /* 005127c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005127c9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5127ceu); f_0047f950();
    /* 005127ce: cmp dword ptr [0x79306c], eax */ {  u32 a = R32((u32)(0x79306cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005127d4: jge 0x5127ed */ if ((fS==fO)) goto L_005127ed;
L_005127d6:; BB(0x005127d6);
    /* 005127d6: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 005127d8: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005127de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005127e0: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005127e6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005127e9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5127ebu); call_ind(t); }
    /* 005127eb: jmp 0x51280c */ goto L_0051280c;
L_005127ed:; BB(0x005127ed);
    /* 005127ed: mov dword ptr [0x79306c], 0 */ W32((u32)(0x79306cu), 0x0u);
    /* 005127f7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005127f9: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005127ff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00512801: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512807: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051280a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51280cu); call_ind(t); }
L_0051280c:; BB(0x0051280c);
    /* 0051280c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051280e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512814: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00512816: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051281c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051281f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512821u); call_ind(t); }
    /* 00512821: jmp 0x516cb0 */ goto L_00516cb0;
L_00512826:; BB(0x00512826);
    /* 00512826: mov ecx, dword ptr [0x79306c] */ r_ecx = R32((u32)(0x79306cu));
    /* 0051282c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051282d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512833: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512838u); f_0047e390();
    /* 00512838: mov ecx, eax */ r_ecx = r_eax;
    /* 0051283a: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51283fu); f_004c7010();
    /* 0051283f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512842: je 0x5128b7 */ if (fZ) goto L_005128b7;
L_00512844:; BB(0x00512844);
    /* 00512844: mov edx, dword ptr [0x79306c] */ r_edx = R32((u32)(0x79306cu));
    /* 0051284a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051284b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512851: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512856u); f_0047e390();
    /* 00512856: mov ecx, eax */ r_ecx = r_eax;
    /* 00512858: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x51285du); f_004c7010();
    /* 0051285d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051285f: je 0x5128b7 */ if (fZ) goto L_005128b7;
L_00512861:; BB(0x00512861);
    /* 00512861: mov eax, dword ptr [0x79306c] */ r_eax = R32((u32)(0x79306cu));
    /* 00512866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512867: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051286d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512872u); f_0047e390();
    /* 00512872: mov ecx, eax */ r_ecx = r_eax;
    /* 00512874: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x512879u); f_004c6cb0();
    /* 00512879: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051287c: jne 0x5128b7 */ if (!fZ) goto L_005128b7;
L_0051287e:; BB(0x0051287e);
    /* 0051287e: mov ecx, dword ptr [0x79306c] */ r_ecx = R32((u32)(0x79306cu));
    /* 00512884: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512885: call 0x50c970 */ r_esp -= 4; W32(r_esp, 0x51288au); f_0050c970();
    /* 0051288a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051288d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00512890: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512892: je 0x5128a6 */ if (fZ) goto L_005128a6;
L_00512894:; BB(0x00512894);
    /* 00512894: mov eax, dword ptr [0x79306c] */ r_eax = R32((u32)(0x79306cu));
    /* 00512899: mov dword ptr [eax*4 + 0x79307c], 1 */ W32((u32)(r_eax*4+0x79307cu), 0x1u);
    /* 005128a4: jmp 0x5128b7 */ goto L_005128b7;
L_005128a6:; BB(0x005128a6);
    /* 005128a6: mov ecx, dword ptr [0x79306c] */ r_ecx = R32((u32)(0x79306cu));
    /* 005128ac: mov dword ptr [ecx*4 + 0x79307c], 2 */ W32((u32)(r_ecx*4+0x79307cu), 0x2u);
L_005128b7:; BB(0x005128b7);
    /* 005128b7: mov edx, dword ptr [0x79306c] */ r_edx = R32((u32)(0x79306cu));
    /* 005128bd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005128c0: mov dword ptr [0x79306c], edx */ W32((u32)(0x79306cu), r_edx);
    /* 005128c6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005128cc: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5128d1u); f_0047f950();
    /* 005128d1: cmp dword ptr [0x79306c], eax */ {  u32 a = R32((u32)(0x79306cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005128d7: jge 0x5128f0 */ if ((fS==fO)) goto L_005128f0;
L_005128d9:; BB(0x005128d9);
    /* 005128d9: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005128db: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005128e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005128e3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005128e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005128ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5128eeu); call_ind(t); }
    /* 005128ee: jmp 0x512905 */ goto L_00512905;
L_005128f0:; BB(0x005128f0);
    /* 005128f0: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005128f2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005128f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005128fa: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512900: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00512903: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512905u); call_ind(t); }
L_00512905:; BB(0x00512905);
    /* 00512905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512907: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051290d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051290f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512915: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00512918: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51291au); call_ind(t); }
    /* 0051291a: jmp 0x516cb0 */ goto L_00516cb0;
L_0051291f:; BB(0x0051291f);
    /* 0051291f: mov dword ptr [0x793138], 0 */ W32((u32)(0x793138u), 0x0u);
    /* 00512929: jmp 0x51293a */ goto L_0051293a;
L_0051292b:; BB(0x0051292b);
    /* 0051292b: mov ecx, dword ptr [0x793138] */ r_ecx = R32((u32)(0x793138u));
    /* 00512931: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512934: mov dword ptr [0x793138], ecx */ W32((u32)(0x793138u), r_ecx);
L_0051293a:; BB(0x0051293a);
    /* 0051293a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512940: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x512945u); f_0047f950();
    /* 00512945: cmp dword ptr [0x793138], eax */ {  u32 a = R32((u32)(0x793138u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051294b: jge 0x512968 */ if ((fS==fO)) goto L_00512968;
L_0051294d:; BB(0x0051294d);
    /* 0051294d: mov edx, dword ptr [0x793138] */ r_edx = R32((u32)(0x793138u));
    /* 00512953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512954: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051295a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51295fu); f_0047e390();
    /* 0051295f: mov ecx, eax */ r_ecx = r_eax;
    /* 00512961: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x512966u); f_004dc490();
    /* 00512966: jmp 0x51292b */ goto L_0051292b;
L_00512968:; BB(0x00512968);
    /* 00512968: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051296e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512971: call 0x4f6c80 */ r_esp -= 4; W32(r_esp, 0x512976u); f_004f6c80();
    /* 00512976: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00512979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051297b: je 0x512994 */ if (fZ) goto L_00512994;
L_0051297d:; BB(0x0051297d);
    /* 0051297d: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0051297f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00512985: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00512987: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051298d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00512990: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512992u); call_ind(t); }
    /* 00512992: jmp 0x5129a9 */ goto L_005129a9;
L_00512994:; BB(0x00512994);
    /* 00512994: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00512996: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051299c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051299e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129a4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005129a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5129a9u); call_ind(t); }
L_005129a9:; BB(0x005129a9);
    /* 005129a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005129ab: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005129b3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129b9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005129bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5129beu); call_ind(t); }
    /* 005129be: jmp 0x516cb0 */ goto L_00516cb0;
L_005129c3:; BB(0x005129c3);
    /* 005129c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005129c9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005129cc: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x5129d1u); f_004f6e70();
    /* 005129d1: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005129d4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005129d7: jne 0x512a08 */ if (!fZ) goto L_00512a08;
L_005129d9:; BB(0x005129d9);
    /* 005129d9: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005129db: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005129e3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129e9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005129ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5129eeu); call_ind(t); }
    /* 005129ee: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005129f0: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005129f8: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005129fe: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00512a01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x512a03u); call_ind(t); }
    /* 00512a03: jmp 0x516cb0 */ goto L_00516cb0;
L_00512a08:; BB(0x00512a08);
    /* 00512a08: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512a0e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512a11: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x512a16u); f_004f6e70();
    /* 00512a16: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00512a19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512a1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512a20: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512a25u); f_0047e3d0();
    /* 00512a25: mov ecx, eax */ r_ecx = r_eax;
    /* 00512a27: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x512a2cu); f_004c7010();
    /* 00512a2c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a2f: jne 0x512a48 */ if (!fZ) goto L_00512a48;
L_00512a31:; BB(0x00512a31);
    /* 00512a31: push 0xa05 */ { u32 v = 0xa05u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a36: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a3b: push 0x6bc378 */ { u32 v = 0x6bc378u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a40: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x512a45u); f_005e9f20();
    /* 00512a45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512a48:; BB(0x00512a48);
    /* 00512a48: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512a4e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512a51: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x512a56u); f_004f6e70();
    /* 00512a56: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00512a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512a5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512a60: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512a65u); f_0047e3d0();
    /* 00512a65: mov ecx, eax */ r_ecx = r_eax;
    /* 00512a67: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x512a6cu); f_004c7010();
    /* 00512a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512a6e: jne 0x512a87 */ if (!fZ) goto L_00512a87;
L_00512a70:; BB(0x00512a70);
    /* 00512a70: push 0xa06 */ { u32 v = 0xa06u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a75: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a7a: push 0x6bc308 */ { u32 v = 0x6bc308u; r_esp -= 4; W32(r_esp, v); }
    /* 00512a7f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x512a84u); f_005e9f20();
    /* 00512a84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00512a87:; BB(0x00512a87);
    /* 00512a87: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512a8d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512a90: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x512a95u); f_004f6e70();
    /* 00512a95: mov word ptr [0x79311c], ax */ W16((u32)(0x79311cu), (u16)r_eax);
    /* 00512a9b: mov word ptr [0x793118], 0 */ W16((u32)(0x793118u), 0x0u);
    /* 00512aa4: jmp 0x512ab8 */ goto L_00512ab8;
L_00512aa6:; BB(0x00512aa6);
    /* 00512aa6: mov dx, word ptr [0x793118] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793118u))) & 0xffffu);
    /* 00512aad: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00512ab1: mov word ptr [0x793118], dx */ W16((u32)(0x793118u), (u16)r_edx);
L_00512ab8:; BB(0x00512ab8);
    /* 00512ab8: movsx esi, word ptr [0x793118] */ r_esi = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00512abf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512ac5: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x512acau); f_0047f950();
    /* 00512aca: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00512acc: jge 0x512c3b */ if ((fS==fO)) goto L_00512c3b;
L_00512ad2:; BB(0x00512ad2);
    /* 00512ad2: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00512ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512ada: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512ae0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512ae5u); f_0047e390();
    /* 00512ae5: mov ecx, eax */ r_ecx = r_eax;
    /* 00512ae7: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x512aecu); f_004c6cb0();
    /* 00512aec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512aee: je 0x512c36 */ if (fZ) goto L_00512c36;
L_00512af4:; BB(0x00512af4);
    /* 00512af4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512afa: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x512affu); f_0047e190();
    /* 00512aff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b02: jne 0x512b5d */ if (!fZ) goto L_00512b5d;
L_00512b04:; BB(0x00512b04);
    /* 00512b04: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b0a: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x512b0fu); f_0047e280();
    /* 00512b0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b11: jne 0x512b5d */ if (!fZ) goto L_00512b5d;
L_00512b13:; BB(0x00512b13);
    /* 00512b13: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b19: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x512b1eu); f_0047d770();
    /* 00512b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b20: jne 0x512b5d */ if (!fZ) goto L_00512b5d;
L_00512b22:; BB(0x00512b22);
    /* 00512b22: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 00512b29: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b2a: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512b31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b38: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x512b3du); f_0047e490();
    /* 00512b3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b3e: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00512b45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b4c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512b51u); f_0047e390();
    /* 00512b51: mov ecx, eax */ r_ecx = r_eax;
    /* 00512b53: call 0x4d74a0 */ r_esp -= 4; W32(r_esp, 0x512b58u); f_004d74a0();
    /* 00512b58: jmp 0x512c36 */ goto L_00512c36;
L_00512b5d:; BB(0x00512b5d);
    /* 00512b5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b63: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x512b68u); f_0047e190();
    /* 00512b68: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512b6b: jne 0x512ba8 */ if (!fZ) goto L_00512ba8;
L_00512b6d:; BB(0x00512b6d);
    /* 00512b6d: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 00512b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b75: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512b7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512b7d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b83: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x512b88u); f_0047e490();
    /* 00512b88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b89: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00512b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512b91: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512b97: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512b9cu); f_0047e390();
    /* 00512b9c: mov ecx, eax */ r_ecx = r_eax;
    /* 00512b9e: call 0x4d9830 */ r_esp -= 4; W32(r_esp, 0x512ba3u); f_004d9830();
    /* 00512ba3: jmp 0x512c36 */ goto L_00512c36;
L_00512ba8:; BB(0x00512ba8);
    /* 00512ba8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512bae: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x512bb3u); f_0047e190();
    /* 00512bb3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512bb6: jne 0x512bf0 */ if (!fZ) goto L_00512bf0;
L_00512bb8:; BB(0x00512bb8);
    /* 00512bb8: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 00512bbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512bc0: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512bc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512bc8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512bce: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x512bd3u); f_0047e490();
    /* 00512bd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512bd4: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00512bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512bdc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512be2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512be7u); f_0047e390();
    /* 00512be7: mov ecx, eax */ r_ecx = r_eax;
    /* 00512be9: call 0x4ec850 */ r_esp -= 4; W32(r_esp, 0x512beeu); f_004ec850();
    /* 00512bee: jmp 0x512c36 */ goto L_00512c36;
L_00512bf0:; BB(0x00512bf0);
    /* 00512bf0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512bf6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x512bfbu); f_0047e190();
    /* 00512bfb: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512bfe: jne 0x512c36 */ if (!fZ) goto L_00512c36;
L_00512c00:; BB(0x00512c00);
    /* 00512c00: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 00512c07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c08: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512c0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512c16: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x512c1bu); f_0047e490();
    /* 00512c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512c1c: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00512c23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512c24: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512c2a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x512c2fu); f_0047e390();
    /* 00512c2f: mov ecx, eax */ r_ecx = r_eax;
    /* 00512c31: call 0x4f37c0 */ r_esp -= 4; W32(r_esp, 0x512c36u); f_004f37c0();
L_00512c36:; BB(0x00512c36);
    /* 00512c36: jmp 0x512aa6 */ goto L_00512aa6;
L_00512c3b:; BB(0x00512c3b);
    /* 00512c3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512c41: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x512c46u); f_0047e190();
    /* 00512c46: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512c49: je 0x513249 */ if (fZ) goto L_00513249;
L_00512c4f:; BB(0x00512c4f);
    /* 00512c4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512c55: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x512c5au); f_0047e280();
    /* 00512c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512c5c: jne 0x513067 */ if (!fZ) goto L_00513067;
L_00512c62:; BB(0x00512c62);
    /* 00512c62: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 00512c68: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x512c6du); f_00484300();
    /* 00512c6d: mov dword ptr [ebp - 4], 0x2a */ W32((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 00512c74: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512c7a: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x512c7fu); f_0047d6f0();
    /* 00512c7f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512c82: jne 0x512ce1 */ if (!fZ) goto L_00512ce1;
L_00512c84:; BB(0x00512c84);
    /* 00512c84: lea ecx, [ebp - 0x340] */ r_ecx = (u32)(r_ebp+0xfffffcc0u);
    /* 00512c8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c8b: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512c92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512c93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512c99: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512c9eu); f_0047e3d0();
    /* 00512c9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00512ca0: call 0x4c80b0 */ r_esp -= 4; W32(r_esp, 0x512ca5u); f_004c80b0();
    /* 00512ca5: mov dword ptr [ebp - 0x5e0], eax */ W32((u32)(r_ebp+0xfffffa20u), r_eax);
    /* 00512cab: mov eax, dword ptr [ebp - 0x5e0] */ r_eax = R32((u32)(r_ebp+0xfffffa20u));
    /* 00512cb1: mov dword ptr [ebp - 0x5e4], eax */ W32((u32)(r_ebp+0xfffffa1cu), r_eax);
    /* 00512cb7: mov byte ptr [ebp - 4], 0x2b */ W8((u32)(r_ebp+0xfffffffcu), 0x2bu);
    /* 00512cbb: mov ecx, dword ptr [ebp - 0x5e4] */ r_ecx = R32((u32)(r_ebp+0xfffffa1cu));
    /* 00512cc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512cc2: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 00512cc8: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x512ccdu); f_00484490();
    /* 00512ccd: mov byte ptr [ebp - 4], 0x2a */ W8((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 00512cd1: lea ecx, [ebp - 0x340] */ r_ecx = (u32)(r_ebp+0xfffffcc0u);
    /* 00512cd7: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x512cdcu); f_00484470();
    /* 00512cdc: jmp 0x512da3 */ goto L_00512da3;
L_00512ce1:; BB(0x00512ce1);
    /* 00512ce1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512ce7: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x512cecu); f_0047d6f0();
    /* 00512cec: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512cef: jne 0x512d4b */ if (!fZ) goto L_00512d4b;
L_00512cf1:; BB(0x00512cf1);
    /* 00512cf1: lea edx, [ebp - 0x348] */ r_edx = (u32)(r_ebp+0xfffffcb8u);
    /* 00512cf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512cf8: movsx eax, word ptr [0x79311c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512d00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512d06: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512d0bu); f_0047e3d0();
    /* 00512d0b: mov ecx, eax */ r_ecx = r_eax;
    /* 00512d0d: call 0x4c8210 */ r_esp -= 4; W32(r_esp, 0x512d12u); f_004c8210();
    /* 00512d12: mov dword ptr [ebp - 0x5e8], eax */ W32((u32)(r_ebp+0xfffffa18u), r_eax);
    /* 00512d18: mov ecx, dword ptr [ebp - 0x5e8] */ r_ecx = R32((u32)(r_ebp+0xfffffa18u));
    /* 00512d1e: mov dword ptr [ebp - 0x5ec], ecx */ W32((u32)(r_ebp+0xfffffa14u), r_ecx);
    /* 00512d24: mov byte ptr [ebp - 4], 0x2c */ W8((u32)(r_ebp+0xfffffffcu), 0x2cu);
    /* 00512d28: mov edx, dword ptr [ebp - 0x5ec] */ r_edx = R32((u32)(r_ebp+0xfffffa14u));
    /* 00512d2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512d2f: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 00512d35: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x512d3au); f_00484490();
    /* 00512d3a: mov byte ptr [ebp - 4], 0x2a */ W8((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 00512d3e: lea ecx, [ebp - 0x348] */ r_ecx = (u32)(r_ebp+0xfffffcb8u);
    /* 00512d44: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x512d49u); f_00484470();
    /* 00512d49: jmp 0x512da3 */ goto L_00512da3;
L_00512d4b:; BB(0x00512d4b);
    /* 00512d4b: lea eax, [ebp - 0x350] */ r_eax = (u32)(r_ebp+0xfffffcb0u);
    /* 00512d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512d52: movsx ecx, word ptr [0x79311c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512d59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512d5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512d60: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512d65u); f_0047e3d0();
    /* 00512d65: mov ecx, eax */ r_ecx = r_eax;
    /* 00512d67: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x512d6cu); f_004c7c40();
    /* 00512d6c: mov dword ptr [ebp - 0x5f0], eax */ W32((u32)(r_ebp+0xfffffa10u), r_eax);
    /* 00512d72: mov edx, dword ptr [ebp - 0x5f0] */ r_edx = R32((u32)(r_ebp+0xfffffa10u));
    /* 00512d78: mov dword ptr [ebp - 0x5f4], edx */ W32((u32)(r_ebp+0xfffffa0cu), r_edx);
    /* 00512d7e: mov byte ptr [ebp - 4], 0x2d */ W8((u32)(r_ebp+0xfffffffcu), 0x2du);
    /* 00512d82: mov eax, dword ptr [ebp - 0x5f4] */ r_eax = R32((u32)(r_ebp+0xfffffa0cu));
    /* 00512d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512d89: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 00512d8f: call 0x484490 */ r_esp -= 4; W32(r_esp, 0x512d94u); f_00484490();
    /* 00512d94: mov byte ptr [ebp - 4], 0x2a */ W8((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 00512d98: lea ecx, [ebp - 0x350] */ r_ecx = (u32)(r_ebp+0xfffffcb0u);
    /* 00512d9e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x512da3u); f_00484470();
L_00512da3:; BB(0x00512da3);
    /* 00512da3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512da7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512da9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512dab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512dad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512daf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00512db1: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 00512db7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512db8: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 00512dbe: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x512dc3u); f_00485940();
    /* 00512dc3: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 00512dc7: lea edx, [ebp - 0x351] */ r_edx = (u32)(r_ebp+0xfffffcafu);
    /* 00512dcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512dce: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 00512dd4: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x512dd9u); f_004a2160();
    /* 00512dd9: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00512ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512ddc: movsx ecx, word ptr [0x79311c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512de4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512dea: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512defu); f_0047e3d0();
    /* 00512def: mov ecx, eax */ r_ecx = r_eax;
    /* 00512df1: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x512df6u); f_004da4d0();
    /* 00512df6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512dfc: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x512e01u); f_0047d770();
    /* 00512e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512e03: jne 0x512e26 */ if (!fZ) goto L_00512e26;
L_00512e05:; BB(0x00512e05);
    /* 00512e05: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00512e0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512e0c: mov ax, word ptr [0x79311c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79311cu))) & 0xffffu);
    /* 00512e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512e13: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512e19: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512e1c: call 0x4f7050 */ r_esp -= 4; W32(r_esp, 0x512e21u); f_004f7050();
    /* 00512e21: jmp 0x513041 */ goto L_00513041;
L_00512e26:; BB(0x00512e26);
    /* 00512e26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512e2c: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x512e31u); f_0047d770();
    /* 00512e31: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512e34: jne 0x512ed2 */ if (!fZ) goto L_00512ed2;
L_00512e3a:; BB(0x00512e3a);
    /* 00512e3a: lea ecx, [ebp - 0x160] */ r_ecx = (u32)(r_ebp+0xfffffea0u);
    /* 00512e40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512e41: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512e48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512e49: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512e4f: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512e54u); f_0047e3d0();
    /* 00512e54: mov ecx, eax */ r_ecx = r_eax;
    /* 00512e56: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x512e5bu); f_004c7c40();
    /* 00512e5b: mov byte ptr [ebp - 4], 0x2f */ W8((u32)(r_ebp+0xfffffffcu), 0x2fu);
    /* 00512e5f: lea eax, [ebp - 0x356] */ r_eax = (u32)(r_ebp+0xfffffcaau);
    /* 00512e65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512e66: lea ecx, [ebp - 0x160] */ r_ecx = (u32)(r_ebp+0xfffffea0u);
    /* 00512e6c: call 0x48ccd0 */ r_esp -= 4; W32(r_esp, 0x512e71u); f_0048ccd0();
    /* 00512e71: mov dword ptr [ebp - 0x5f8], eax */ W32((u32)(r_ebp+0xfffffa08u), r_eax);
    /* 00512e77: mov ecx, dword ptr [ebp - 0x5f8] */ r_ecx = R32((u32)(r_ebp+0xfffffa08u));
    /* 00512e7d: mov dword ptr [ebp - 0x5fc], ecx */ W32((u32)(r_ebp+0xfffffa04u), r_ecx);
    /* 00512e83: mov byte ptr [ebp - 4], 0x30 */ W8((u32)(r_ebp+0xfffffffcu), 0x30u);
    /* 00512e87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512e89: mov edx, dword ptr [ebp - 0x5fc] */ r_edx = R32((u32)(r_ebp+0xfffffa04u));
    /* 00512e8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00512e91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512e92: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00512e98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512e99: mov dx, word ptr [0x79311c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x79311cu))) & 0xffffu);
    /* 00512ea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512ea1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512ea7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512eaa: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x512eafu); f_004f7220();
    /* 00512eaf: mov byte ptr [ebp - 4], 0x2f */ W8((u32)(r_ebp+0xfffffffcu), 0x2fu);
    /* 00512eb3: lea ecx, [ebp - 0x356] */ r_ecx = (u32)(r_ebp+0xfffffcaau);
    /* 00512eb9: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x512ebeu); f_004a20f0();
    /* 00512ebe: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 00512ec2: lea ecx, [ebp - 0x160] */ r_ecx = (u32)(r_ebp+0xfffffea0u);
    /* 00512ec8: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x512ecdu); f_00484470();
    /* 00512ecd: jmp 0x513041 */ goto L_00513041;
L_00512ed2:; BB(0x00512ed2);
    /* 00512ed2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512ed8: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x512eddu); f_0047d770();
    /* 00512edd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512ee0: jne 0x512f7e */ if (!fZ) goto L_00512f7e;
L_00512ee6:; BB(0x00512ee6);
    /* 00512ee6: lea eax, [ebp - 0x168] */ r_eax = (u32)(r_ebp+0xfffffe98u);
    /* 00512eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512eed: movsx ecx, word ptr [0x79311c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512ef5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512efb: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512f00u); f_0047e3d0();
    /* 00512f00: mov ecx, eax */ r_ecx = r_eax;
    /* 00512f02: call 0x4c8700 */ r_esp -= 4; W32(r_esp, 0x512f07u); f_004c8700();
    /* 00512f07: mov byte ptr [ebp - 4], 0x31 */ W8((u32)(r_ebp+0xfffffffcu), 0x31u);
    /* 00512f0b: lea edx, [ebp - 0x35a] */ r_edx = (u32)(r_ebp+0xfffffca6u);
    /* 00512f11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512f12: lea ecx, [ebp - 0x168] */ r_ecx = (u32)(r_ebp+0xfffffe98u);
    /* 00512f18: call 0x48ccd0 */ r_esp -= 4; W32(r_esp, 0x512f1du); f_0048ccd0();
    /* 00512f1d: mov dword ptr [ebp - 0x600], eax */ W32((u32)(r_ebp+0xfffffa00u), r_eax);
    /* 00512f23: mov eax, dword ptr [ebp - 0x600] */ r_eax = R32((u32)(r_ebp+0xfffffa00u));
    /* 00512f29: mov dword ptr [ebp - 0x604], eax */ W32((u32)(r_ebp+0xfffff9fcu), r_eax);
    /* 00512f2f: mov byte ptr [ebp - 4], 0x32 */ W8((u32)(r_ebp+0xfffffffcu), 0x32u);
    /* 00512f33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512f35: mov ecx, dword ptr [ebp - 0x604] */ r_ecx = R32((u32)(r_ebp+0xfffff9fcu));
    /* 00512f3b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00512f3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512f3e: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00512f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512f45: mov cx, word ptr [0x79311c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x79311cu))) & 0xffffu);
    /* 00512f4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512f4d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512f53: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00512f56: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x512f5bu); f_004f7220();
    /* 00512f5b: mov byte ptr [ebp - 4], 0x31 */ W8((u32)(r_ebp+0xfffffffcu), 0x31u);
    /* 00512f5f: lea ecx, [ebp - 0x35a] */ r_ecx = (u32)(r_ebp+0xfffffca6u);
    /* 00512f65: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x512f6au); f_004a20f0();
    /* 00512f6a: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 00512f6e: lea ecx, [ebp - 0x168] */ r_ecx = (u32)(r_ebp+0xfffffe98u);
    /* 00512f74: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x512f79u); f_00484470();
    /* 00512f79: jmp 0x513041 */ goto L_00513041;
L_00512f7e:; BB(0x00512f7e);
    /* 00512f7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512f84: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x512f89u); f_0047d770();
    /* 00512f89: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00512f8c: jne 0x513026 */ if (!fZ) goto L_00513026;
L_00512f92:; BB(0x00512f92);
    /* 00512f92: lea edx, [ebp - 0x170] */ r_edx = (u32)(r_ebp+0xfffffe90u);
    /* 00512f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512f99: movsx eax, word ptr [0x79311c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 00512fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512fa1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512fa7: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x512facu); f_0047e3d0();
    /* 00512fac: mov ecx, eax */ r_ecx = r_eax;
    /* 00512fae: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x512fb3u); f_004c7c40();
    /* 00512fb3: mov byte ptr [ebp - 4], 0x33 */ W8((u32)(r_ebp+0xfffffffcu), 0x33u);
    /* 00512fb7: lea ecx, [ebp - 0x35e] */ r_ecx = (u32)(r_ebp+0xfffffca2u);
    /* 00512fbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512fbe: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 00512fc4: call 0x48d1c0 */ r_esp -= 4; W32(r_esp, 0x512fc9u); f_0048d1c0();
    /* 00512fc9: mov dword ptr [ebp - 0x608], eax */ W32((u32)(r_ebp+0xfffff9f8u), r_eax);
    /* 00512fcf: mov edx, dword ptr [ebp - 0x608] */ r_edx = R32((u32)(r_ebp+0xfffff9f8u));
    /* 00512fd5: mov dword ptr [ebp - 0x60c], edx */ W32((u32)(r_ebp+0xfffff9f4u), r_edx);
    /* 00512fdb: mov byte ptr [ebp - 4], 0x34 */ W8((u32)(r_ebp+0xfffffffcu), 0x34u);
    /* 00512fdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00512fe1: mov eax, dword ptr [ebp - 0x60c] */ r_eax = R32((u32)(r_ebp+0xfffff9f4u));
    /* 00512fe7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00512fe9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00512fea: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00512ff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00512ff1: mov ax, word ptr [0x79311c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79311cu))) & 0xffffu);
    /* 00512ff7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00512ff8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00512ffe: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513001: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x513006u); f_004f7220();
    /* 00513006: mov byte ptr [ebp - 4], 0x33 */ W8((u32)(r_ebp+0xfffffffcu), 0x33u);
    /* 0051300a: lea ecx, [ebp - 0x35e] */ r_ecx = (u32)(r_ebp+0xfffffca2u);
    /* 00513010: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513015u); f_004a20f0();
    /* 00513015: mov byte ptr [ebp - 4], 0x2e */ W8((u32)(r_ebp+0xfffffffcu), 0x2eu);
    /* 00513019: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 0051301f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x513024u); f_00484470();
    /* 00513024: jmp 0x513041 */ goto L_00513041;
L_00513026:; BB(0x00513026);
    /* 00513026: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00513028: jne 0x513041 */ if (!fZ) goto L_00513041;
L_0051302a:; BB(0x0051302a);
    /* 0051302a: push 0xa45 */ { u32 v = 0xa45u; r_esp -= 4; W32(r_esp, v); }
    /* 0051302f: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513034: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00513039: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51303eu); f_005e9f20();
    /* 0051303e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513041:; BB(0x00513041);
    /* 00513041: mov byte ptr [ebp - 4], 0x2a */ W8((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 00513045: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 0051304b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513050u); f_004a20f0();
    /* 00513050: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513057: lea ecx, [ebp - 0x158] */ r_ecx = (u32)(r_ebp+0xfffffea8u);
    /* 0051305d: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x513062u); f_00484470();
    /* 00513062: jmp 0x5131a3 */ goto L_005131a3;
L_00513067:; BB(0x00513067);
    /* 00513067: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051306d: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x513072u); f_0047e280();
    /* 00513072: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513075: je 0x51308e */ if (fZ) goto L_0051308e;
L_00513077:; BB(0x00513077);
    /* 00513077: push 0xa4a */ { u32 v = 0xa4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051307c: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513081: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513086: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51308bu); f_005e9f20();
    /* 0051308b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051308e:; BB(0x0051308e);
    /* 0051308e: lea ecx, [ebp - 0x180] */ r_ecx = (u32)(r_ebp+0xfffffe80u);
    /* 00513094: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513095: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 0051309c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051309d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005130a3: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5130a8u); f_0047e3d0();
    /* 005130a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005130aa: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x5130afu); f_004c7c40();
    /* 005130af: mov dword ptr [ebp - 4], 0x35 */ W32((u32)(r_ebp+0xfffffffcu), 0x35u);
    /* 005130b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130c4: lea eax, [ebp - 0x174] */ r_eax = (u32)(r_ebp+0xfffffe8cu);
    /* 005130ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005130cb: lea ecx, [ebp - 0x180] */ r_ecx = (u32)(r_ebp+0xfffffe80u);
    /* 005130d1: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5130d6u); f_00485940();
    /* 005130d6: mov byte ptr [ebp - 4], 0x36 */ W8((u32)(r_ebp+0xfffffffcu), 0x36u);
    /* 005130da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e8: lea ecx, [ebp - 0x178] */ r_ecx = (u32)(r_ebp+0xfffffe88u);
    /* 005130ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005130ef: lea ecx, [ebp - 0x180] */ r_ecx = (u32)(r_ebp+0xfffffe80u);
    /* 005130f5: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5130fau); f_00485940();
    /* 005130fa: mov byte ptr [ebp - 4], 0x37 */ W8((u32)(r_ebp+0xfffffffcu), 0x37u);
    /* 005130fe: lea edx, [ebp - 0x35f] */ r_edx = (u32)(r_ebp+0xfffffca1u);
    /* 00513104: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513105: lea ecx, [ebp - 0x174] */ r_ecx = (u32)(r_ebp+0xfffffe8cu);
    /* 0051310b: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x513110u); f_004a2160();
    /* 00513110: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00513112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513113: movsx ecx, word ptr [0x79311c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 0051311a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051311b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513121: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513126u); f_0047e3d0();
    /* 00513126: mov ecx, eax */ r_ecx = r_eax;
    /* 00513128: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x51312du); f_004da4d0();
    /* 0051312d: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00513133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513134: movsx eax, word ptr [0x79311c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 0051313b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051313c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513142: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513147u); f_0047e3d0();
    /* 00513147: mov ecx, eax */ r_ecx = r_eax;
    /* 00513149: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x51314eu); f_004db070();
    /* 0051314e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513150: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00513156: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513157: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0051315d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051315e: mov ax, word ptr [0x79311c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79311cu))) & 0xffffu);
    /* 00513164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513165: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051316b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051316e: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x513173u); f_004f7220();
    /* 00513173: mov byte ptr [ebp - 4], 0x36 */ W8((u32)(r_ebp+0xfffffffcu), 0x36u);
    /* 00513177: lea ecx, [ebp - 0x178] */ r_ecx = (u32)(r_ebp+0xfffffe88u);
    /* 0051317d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513182u); f_004a20f0();
    /* 00513182: mov byte ptr [ebp - 4], 0x35 */ W8((u32)(r_ebp+0xfffffffcu), 0x35u);
    /* 00513186: lea ecx, [ebp - 0x174] */ r_ecx = (u32)(r_ebp+0xfffffe8cu);
    /* 0051318c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513191u); f_004a20f0();
    /* 00513191: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513198: lea ecx, [ebp - 0x180] */ r_ecx = (u32)(r_ebp+0xfffffe80u);
    /* 0051319e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5131a3u); f_00484470();
L_005131a3:; BB(0x005131a3);
    /* 005131a3: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 005131a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005131aa: movsx edx, word ptr [0x79311c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 005131b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005131b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005131b8: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5131bdu); f_0047e3d0();
    /* 005131bd: mov ecx, eax */ r_ecx = r_eax;
    /* 005131bf: call 0x4c8700 */ r_esp -= 4; W32(r_esp, 0x5131c4u); f_004c8700();
    /* 005131c4: mov dword ptr [ebp - 4], 0x38 */ W32((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 005131cb: movsx eax, word ptr [0x79311c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 005131d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005131d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005131d9: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5131deu); f_0047e3d0();
    /* 005131de: mov ecx, eax */ r_ecx = r_eax;
    /* 005131e0: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x5131e5u); f_004c76e0();
    /* 005131e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005131e7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005131ea: mov ecx, esp */ r_ecx = r_esp;
    /* 005131ec: mov dword ptr [ebp - 0x364], esp */ W32((u32)(r_ebp+0xfffffc9cu), r_esp);
    /* 005131f2: lea edx, [ebp - 0x14c] */ r_edx = (u32)(r_ebp+0xfffffeb4u);
    /* 005131f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005131f9: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x5131feu); f_00484320();
    /* 005131fe: mov dword ptr [ebp - 0x610], eax */ W32((u32)(r_ebp+0xfffff9f0u), r_eax);
    /* 00513204: mov eax, dword ptr [ebp - 0x610] */ r_eax = R32((u32)(r_ebp+0xfffff9f0u));
    /* 0051320a: mov dword ptr [ebp - 0x614], eax */ W32((u32)(r_ebp+0xfffff9ecu), r_eax);
    /* 00513210: mov byte ptr [ebp - 4], 0x39 */ W8((u32)(r_ebp+0xfffffffcu), 0x39u);
    /* 00513214: movsx ecx, word ptr [0x79311c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79311cu));
    /* 0051321b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051321c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513222: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513227u); f_0047e3d0();
    /* 00513227: mov byte ptr [ebp - 4], 0x38 */ W8((u32)(r_ebp+0xfffffffcu), 0x38u);
    /* 0051322b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051322d: call 0x4c88a0 */ r_esp -= 4; W32(r_esp, 0x513232u); f_004c88a0();
    /* 00513232: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513239: lea ecx, [ebp - 0x14c] */ r_ecx = (u32)(r_ebp+0xfffffeb4u);
    /* 0051323f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x513244u); f_00484470();
    /* 00513244: jmp 0x51350c */ goto L_0051350c;
L_00513249:; BB(0x00513249);
    /* 00513249: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051324f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x513254u); f_0047e190();
    /* 00513254: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513257: jne 0x5134f1 */ if (!fZ) goto L_005134f1;
L_0051325d:; BB(0x0051325d);
    /* 0051325d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513263: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513266: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x51326bu); f_004f6e70();
    /* 0051326b: mov word ptr [ebp - 0x190], ax */ W16((u32)(r_ebp+0xfffffe70u), (u16)r_eax);
    /* 00513272: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513278: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x51327du); f_0047e280();
    /* 0051327d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513280: je 0x513299 */ if (fZ) goto L_00513299;
L_00513282:; BB(0x00513282);
    /* 00513282: push 0xa59 */ { u32 v = 0xa59u; r_esp -= 4; W32(r_esp, v); }
    /* 00513287: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051328c: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513291: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x513296u); f_005e9f20();
    /* 00513296: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513299:; BB(0x00513299);
    /* 00513299: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051329f: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x5132a4u); f_0047d7f0();
    /* 005132a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005132a7: je 0x5132c0 */ if (fZ) goto L_005132c0;
L_005132a9:; BB(0x005132a9);
    /* 005132a9: push 0xa5a */ { u32 v = 0xa5au; r_esp -= 4; W32(r_esp, v); }
    /* 005132ae: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005132b3: push 0x6be964 */ { u32 v = 0x6be964u; r_esp -= 4; W32(r_esp, v); }
    /* 005132b8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5132bdu); f_005e9f20();
    /* 005132bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005132c0:; BB(0x005132c0);
    /* 005132c0: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 005132c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005132c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005132ce: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5132d3u); f_0047e490();
    /* 005132d3: cmp dword ptr [eax*4 + 0x79307c], 0 */ {  u32 a = R32((u32)(r_eax*4+0x79307cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005132db: jne 0x5132f4 */ if (!fZ) goto L_005132f4;
L_005132dd:; BB(0x005132dd);
    /* 005132dd: push 0xa5b */ { u32 v = 0xa5bu; r_esp -= 4; W32(r_esp, v); }
    /* 005132e2: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005132e7: push 0x6be870 */ { u32 v = 0x6be870u; r_esp -= 4; W32(r_esp, v); }
    /* 005132ec: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5132f1u); f_005e9f20();
    /* 005132f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005132f4:; BB(0x005132f4);
    /* 005132f4: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 005132fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005132fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513302: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x513307u); f_0047e490();
    /* 00513307: cmp dword ptr [eax*4 + 0x79307c], 3 */ {  u32 a = R32((u32)(r_eax*4+0x79307cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051330f: jne 0x513328 */ if (!fZ) goto L_00513328;
L_00513311:; BB(0x00513311);
    /* 00513311: push 0xa5c */ { u32 v = 0xa5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513316: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051331b: push 0x6c10b8 */ { u32 v = 0x6c10b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513320: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x513325u); f_005e9f20();
    /* 00513325: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513328:; BB(0x00513328);
    /* 00513328: lea edx, [ebp - 0x18c] */ r_edx = (u32)(r_ebp+0xfffffe74u);
    /* 0051332e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051332f: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 00513336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513337: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051333d: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x513342u); f_0047e490();
    /* 00513342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513343: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513349: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51334eu); f_0047e390();
    /* 0051334e: mov ecx, eax */ r_ecx = r_eax;
    /* 00513350: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x513355u); f_004c7c40();
    /* 00513355: mov dword ptr [ebp - 4], 0x3a */ W32((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 0051335c: lea ecx, [ebp - 0x184] */ r_ecx = (u32)(r_ebp+0xfffffe7cu);
    /* 00513362: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x513367u); f_004a20d0();
    /* 00513367: mov byte ptr [ebp - 4], 0x3b */ W8((u32)(r_ebp+0xfffffffcu), 0x3bu);
    /* 0051336b: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 00513372: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513373: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513379: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51337eu); f_0047e490();
    /* 0051337e: cmp dword ptr [eax*4 + 0x79307c], 1 */ {  u32 a = R32((u32)(r_eax*4+0x79307cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513386: jne 0x5133fb */ if (!fZ) goto L_005133fb;
L_00513388:; BB(0x00513388);
    /* 00513388: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051338a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051338c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051338e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513390: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513392: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513394: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513396: lea edx, [ebp - 0x368] */ r_edx = (u32)(r_ebp+0xfffffc98u);
    /* 0051339c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051339d: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 005133a3: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5133a8u); f_00485940();
    /* 005133a8: mov dword ptr [ebp - 0x618], eax */ W32((u32)(r_ebp+0xfffff9e8u), r_eax);
    /* 005133ae: mov eax, dword ptr [ebp - 0x618] */ r_eax = R32((u32)(r_ebp+0xfffff9e8u));
    /* 005133b4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005133b6: mov dword ptr [ebp - 0x184], ecx */ W32((u32)(r_ebp+0xfffffe7cu), r_ecx);
    /* 005133bc: lea ecx, [ebp - 0x368] */ r_ecx = (u32)(r_ebp+0xfffffc98u);
    /* 005133c2: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x5133c7u); f_004a20f0();
    /* 005133c7: lea edx, [ebp - 0x369] */ r_edx = (u32)(r_ebp+0xfffffc97u);
    /* 005133cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005133ce: lea ecx, [ebp - 0x184] */ r_ecx = (u32)(r_ebp+0xfffffe7cu);
    /* 005133d4: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x5133d9u); f_004a2160();
    /* 005133d9: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 005133db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005133dc: movsx ecx, word ptr [ebp - 0x190] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 005133e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005133e4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005133ea: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5133efu); f_0047e3d0();
    /* 005133ef: mov ecx, eax */ r_ecx = r_eax;
    /* 005133f1: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x5133f6u); f_004da4d0();
    /* 005133f6: jmp 0x51348f */ goto L_0051348f;
L_005133fb:; BB(0x005133fb);
    /* 005133fb: movsx edx, word ptr [ebp - 0x190] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 00513402: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513403: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513409: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51340eu); f_0047e490();
    /* 0051340e: cmp dword ptr [eax*4 + 0x79307c], 2 */ {  u32 a = R32((u32)(r_eax*4+0x79307cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513416: je 0x51342f */ if (fZ) goto L_0051342f;
L_00513418:; BB(0x00513418);
    /* 00513418: push 0xa66 */ { u32 v = 0xa66u; r_esp -= 4; W32(r_esp, v); }
    /* 0051341d: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513422: push 0x6c1058 */ { u32 v = 0x6c1058u; r_esp -= 4; W32(r_esp, v); }
    /* 00513427: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51342cu); f_005e9f20();
    /* 0051342c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051342f:; BB(0x0051342f);
    /* 0051342f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513431: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513433: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513435: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513439: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051343b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051343d: lea ecx, [ebp - 0x36e] */ r_ecx = (u32)(r_ebp+0xfffffc92u);
    /* 00513443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513444: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 0051344a: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x51344fu); f_00485940();
    /* 0051344f: mov dword ptr [ebp - 0x61c], eax */ W32((u32)(r_ebp+0xfffff9e4u), r_eax);
    /* 00513455: mov edx, dword ptr [ebp - 0x61c] */ r_edx = R32((u32)(r_ebp+0xfffff9e4u));
    /* 0051345b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051345d: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 00513463: lea ecx, [ebp - 0x36e] */ r_ecx = (u32)(r_ebp+0xfffffc92u);
    /* 00513469: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x51346eu); f_004a20f0();
    /* 0051346e: mov ecx, dword ptr [ebp - 0x184] */ r_ecx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 00513474: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513475: movsx edx, word ptr [ebp - 0x190] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 0051347c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051347d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513483: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513488u); f_0047e3d0();
    /* 00513488: mov ecx, eax */ r_ecx = r_eax;
    /* 0051348a: call 0x4db070 */ r_esp -= 4; W32(r_esp, 0x51348fu); f_004db070();
L_0051348f:; BB(0x0051348f);
    /* 0051348f: movsx eax, word ptr [ebp - 0x190] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe70u));
    /* 00513496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513497: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051349d: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5134a2u); f_0047e490();
    /* 005134a2: mov ecx, dword ptr [eax*4 + 0x79307c] */ r_ecx = R32((u32)(r_eax*4+0x79307cu));
    /* 005134a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005134aa: mov edx, dword ptr [ebp - 0x184] */ r_edx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 005134b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005134b1: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 005134b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005134b8: mov cx, word ptr [ebp - 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe70u))) & 0xffffu);
    /* 005134bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005134c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005134c6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005134c9: call 0x4f7220 */ r_esp -= 4; W32(r_esp, 0x5134ceu); f_004f7220();
    /* 005134ce: mov byte ptr [ebp - 4], 0x3a */ W8((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 005134d2: lea ecx, [ebp - 0x184] */ r_ecx = (u32)(r_ebp+0xfffffe7cu);
    /* 005134d8: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x5134ddu); f_004a20f0();
    /* 005134dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005134e4: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 005134ea: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5134efu); f_00484470();
    /* 005134ef: jmp 0x51350c */ goto L_0051350c;
L_005134f1:; BB(0x005134f1);
    /* 005134f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005134f3: jne 0x51350c */ if (!fZ) goto L_0051350c;
L_005134f5:; BB(0x005134f5);
    /* 005134f5: push 0xa6d */ { u32 v = 0xa6du; r_esp -= 4; W32(r_esp, v); }
    /* 005134fa: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005134ff: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00513504: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x513509u); f_005e9f20();
    /* 00513509: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051350c:; BB(0x0051350c);
    /* 0051350c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0051350e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513514: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00513516: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051351c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0051351f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x513521u); call_ind(t); }
    /* 00513521: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00513523: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513529: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051352b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00513531: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00513534: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x513536u); call_ind(t); }
    /* 00513536: jmp 0x516cb0 */ goto L_00516cb0;
L_0051353b:; BB(0x0051353b);
    /* 0051353b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513541: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x513546u); f_0047e280();
    /* 00513546: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513549: je 0x513996 */ if (fZ) goto L_00513996;
L_0051354f:; BB(0x0051354f);
    /* 0051354f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513555: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x51355au); f_0047d770();
    /* 0051355a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051355c: jne 0x513996 */ if (!fZ) goto L_00513996;
L_00513562:; BB(0x00513562);
    /* 00513562: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513564: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051356a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051356d: call 0x4f73d0 */ r_esp -= 4; W32(r_esp, 0x513572u); f_004f73d0();
    /* 00513572: mov word ptr [0x793114], ax */ W16((u32)(0x793114u), (u16)r_eax);
    /* 00513578: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 0051357f: cmp ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513582: jne 0x513769 */ if (!fZ) goto L_00513769;
L_00513588:; BB(0x00513588);
    /* 00513588: mov byte ptr [ebp - 0x191], 1 */ W8((u32)(r_ebp+0xfffffe6fu), 0x1u);
L_0051358f:; BB(0x0051358f);
    /* 0051358f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513595: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513598: call 0x4f7ae0 */ r_esp -= 4; W32(r_esp, 0x51359du); f_004f7ae0();
    /* 0051359d: mov word ptr [0x793114], ax */ W16((u32)(0x793114u), (u16)r_eax);
    /* 005135a3: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005135aa: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005135ad: je 0x513764 */ if (fZ) goto L_00513764;
L_005135b3:; BB(0x005135b3);
    /* 005135b3: mov ax, word ptr [0x793114] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793114u))) & 0xffffu);
    /* 005135b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005135ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005135c0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005135c3: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x5135c8u); f_004f78a0();
    /* 005135c8: mov esi, eax */ r_esi = r_eax;
    /* 005135ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005135d0: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5135d5u); f_0047bc20();
    /* 005135d5: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005135d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005135d9: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005135e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005135e1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005135e7: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5135ecu); f_0047e3d0();
    /* 005135ec: mov ecx, eax */ r_ecx = r_eax;
    /* 005135ee: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x5135f3u); f_004c6b80();
    /* 005135f3: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005135fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005135fb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513601: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513606u); f_0047e3d0();
    /* 00513606: mov ecx, eax */ r_ecx = r_eax;
    /* 00513608: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x51360du); f_004da300();
    /* 0051360d: movsx eax, word ptr [0x793114] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00513614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513615: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051361b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513620u); f_0047e3d0();
    /* 00513620: mov ecx, eax */ r_ecx = r_eax;
    /* 00513622: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x513627u); f_004da360();
    /* 00513627: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 0051362e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051362f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513635: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51363au); f_0047e3d0();
    /* 0051363a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0051363d: mov dword ptr [ebp - 0x1a0], edx */ W32((u32)(r_ebp+0xfffffe60u), r_edx);
    /* 00513643: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513645: mov ax, word ptr [0x793114] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793114u))) & 0xffffu);
    /* 0051364b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051364c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513652: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513655: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x51365au); f_004f78a0();
    /* 0051365a: mov esi, eax */ r_esi = r_eax;
    /* 0051365c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513662: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x513667u); f_0047bc20();
    /* 00513667: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051366a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051366b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x513670u); f_0064c8a0();
    /* 00513670: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513673: mov dword ptr [ebp - 0x378], eax */ W32((u32)(r_ebp+0xfffffc88u), r_eax);
    /* 00513679: mov dword ptr [ebp - 0x374], edx */ W32((u32)(r_ebp+0xfffffc8cu), r_edx);
    /* 0051367f: mov ecx, dword ptr [ebp - 0x378] */ r_ecx = R32((u32)(r_ebp+0xfffffc88u));
    /* 00513685: mov dword ptr [ebp - 0x19c], ecx */ W32((u32)(r_ebp+0xfffffe64u), r_ecx);
    /* 0051368b: mov edx, dword ptr [ebp - 0x374] */ r_edx = R32((u32)(r_ebp+0xfffffc8cu));
    /* 00513691: mov dword ptr [ebp - 0x198], edx */ W32((u32)(r_ebp+0xfffffe68u), r_edx);
    /* 00513697: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 0051369d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051369e: mov ecx, dword ptr [ebp - 0x19c] */ r_ecx = R32((u32)(r_ebp+0xfffffe64u));
    /* 005136a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005136a5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005136a7: mov edx, dword ptr [ebp - 0x1a0] */ r_edx = R32((u32)(r_ebp+0xfffffe60u));
    /* 005136ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005136ae: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005136b4: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5136b9u); f_005e7e40();
    /* 005136b9: movzx eax, byte ptr [ebp - 0x191] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe6fu));
    /* 005136c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005136c2: je 0x51371a */ if (fZ) goto L_0051371a;
L_005136c4:; BB(0x005136c4);
    /* 005136c4: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005136cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005136cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005136d2: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5136d7u); f_0047e3d0();
    /* 005136d7: mov ecx, eax */ r_ecx = r_eax;
    /* 005136d9: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5136deu); f_004c6cb0();
    /* 005136de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005136e1: jne 0x51370e */ if (!fZ) goto L_0051370e;
L_005136e3:; BB(0x005136e3);
    /* 005136e3: mov dword ptr [0x793064], 0xc */ W32((u32)(0x793064u), 0xcu);
    /* 005136ed: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005136f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005136f5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005136fb: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x513700u); f_0047e490();
    /* 00513700: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 00513705: mov byte ptr [ebp - 0x191], 0 */ W8((u32)(r_ebp+0xfffffe6fu), 0x0u);
    /* 0051370c: jmp 0x513718 */ goto L_00513718;
L_0051370e:; BB(0x0051370e);
    /* 0051370e: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_00513718:; BB(0x00513718);
    /* 00513718: jmp 0x51375f */ goto L_0051375f;
L_0051371a:; BB(0x0051371a);
    /* 0051371a: movsx eax, word ptr [0x793114] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00513721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513722: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513728: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51372du); f_0047e3d0();
    /* 0051372d: mov ecx, eax */ r_ecx = r_eax;
    /* 0051372f: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x513734u); f_004c6cb0();
    /* 00513734: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513737: jne 0x51375f */ if (!fZ) goto L_0051375f;
L_00513739:; BB(0x00513739);
    /* 00513739: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051373b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513740u); f_0062fbf0();
    /* 00513740: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513743: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513745: jne 0x51375f */ if (!fZ) goto L_0051375f;
L_00513747:; BB(0x00513747);
    /* 00513747: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 0051374e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051374f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513755: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51375au); f_0047e490();
    /* 0051375a: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
L_0051375f:; BB(0x0051375f);
    /* 0051375f: jmp 0x51358f */ goto L_0051358f;
L_00513764:; BB(0x00513764);
    /* 00513764: jmp 0x513991 */ goto L_00513991;
L_00513769:; BB(0x00513769);
    /* 00513769: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00513770: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00513772: jge 0x51378b */ if ((fS==fO)) goto L_0051378b;
L_00513774:; BB(0x00513774);
    /* 00513774: push 0xa9c */ { u32 v = 0xa9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513779: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051377e: push 0x6bc2f8 */ { u32 v = 0x6bc2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513783: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x513788u); f_005e9f20();
    /* 00513788: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051378b:; BB(0x0051378b);
    /* 0051378b: mov cx, word ptr [0x793114] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793114u))) & 0xffffu);
    /* 00513792: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513793: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513799: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051379c: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x5137a1u); f_004f78a0();
    /* 005137a1: mov esi, eax */ r_esi = r_eax;
    /* 005137a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005137a9: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5137aeu); f_0047bc20();
    /* 005137ae: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005137b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005137b2: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005137b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005137ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005137c0: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5137c5u); f_0047e3d0();
    /* 005137c5: mov ecx, eax */ r_ecx = r_eax;
    /* 005137c7: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x5137ccu); f_004c6b80();
    /* 005137cc: movsx eax, word ptr [0x793114] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005137d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005137d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005137da: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5137dfu); f_0047e3d0();
    /* 005137df: mov ecx, eax */ r_ecx = r_eax;
    /* 005137e1: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x5137e6u); f_004da300();
    /* 005137e6: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005137ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005137ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005137f4: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5137f9u); f_0047e3d0();
    /* 005137f9: mov ecx, eax */ r_ecx = r_eax;
    /* 005137fb: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x513800u); f_004da360();
    /* 00513800: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00513807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513808: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051380e: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513813u); f_0047e3d0();
    /* 00513813: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00513816: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 0051381c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051381e: mov cx, word ptr [0x793114] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793114u))) & 0xffffu);
    /* 00513825: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513826: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051382c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051382f: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x513834u); f_004f78a0();
    /* 00513834: mov esi, eax */ r_esi = r_eax;
    /* 00513836: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051383c: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x513841u); f_0047bc20();
    /* 00513841: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513845: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x51384au); f_0064c8a0();
    /* 0051384a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051384d: mov dword ptr [ebp - 0x380], eax */ W32((u32)(r_ebp+0xfffffc80u), r_eax);
    /* 00513853: mov dword ptr [ebp - 0x37c], edx */ W32((u32)(r_ebp+0xfffffc84u), r_edx);
    /* 00513859: mov edx, dword ptr [ebp - 0x380] */ r_edx = R32((u32)(r_ebp+0xfffffc80u));
    /* 0051385f: mov dword ptr [ebp - 0x1a8], edx */ W32((u32)(r_ebp+0xfffffe58u), r_edx);
    /* 00513865: mov eax, dword ptr [ebp - 0x37c] */ r_eax = R32((u32)(r_ebp+0xfffffc84u));
    /* 0051386b: mov dword ptr [ebp - 0x1a4], eax */ W32((u32)(r_ebp+0xfffffe5cu), r_eax);
    /* 00513871: mov ecx, dword ptr [ebp - 0x1a4] */ r_ecx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 00513877: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513878: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 0051387e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051387f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00513881: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00513887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513888: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 0051388e: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x513893u); f_005e7e40();
    /* 00513893: movzx ecx, byte ptr [0x793031] */ r_ecx = (u32)R8((u32)(0x793031u));
    /* 0051389a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051389c: je 0x5138fb */ if (fZ) goto L_005138fb;
L_0051389e:; BB(0x0051389e);
    /* 0051389e: mov dx, word ptr [0x793114] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793114u))) & 0xffffu);
    /* 005138a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005138a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005138ac: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005138af: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x5138b4u); f_004f78a0();
    /* 005138b4: mov esi, eax */ r_esi = r_eax;
    /* 005138b6: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 005138bb: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005138bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005138be: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5138c3u); f_0062fbf0();
    /* 005138c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005138c6: mov edi, eax */ r_edi = r_eax;
    /* 005138c8: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 005138ce: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005138d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005138d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5138d6u); f_0062fbf0();
    /* 005138d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005138d9: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 005138dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005138e3: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x5138e8u); f_0047bde0();
    /* 005138e8: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005138eb: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005138ed: jle 0x5138fb */ if ((fZ||fS!=fO)) goto L_005138fb;
L_005138ef:; BB(0x005138ef);
    /* 005138ef: mov dword ptr [0x793064], 0xa */ W32((u32)(0x793064u), 0xau);
    /* 005138f9: jmp 0x513979 */ goto L_00513979;
L_005138fb:; BB(0x005138fb);
    /* 005138fb: movzx edx, byte ptr [0x793031] */ r_edx = (u32)R8((u32)(0x793031u));
    /* 00513902: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513904: je 0x51396f */ if (fZ) goto L_0051396f;
L_00513906:; BB(0x00513906);
    /* 00513906: mov ax, word ptr [0x793114] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x793114u))) & 0xffffu);
    /* 0051390c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051390d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513913: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513916: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x51391bu); f_004f78a0();
    /* 0051391b: mov esi, eax */ r_esi = r_eax;
    /* 0051391d: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00513922: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00513923: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00513926: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513928: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0051392b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051392c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513931u); f_0062fbf0();
    /* 00513931: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513934: mov edi, eax */ r_edi = r_eax;
    /* 00513936: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 0051393b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051393c: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0051393f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513941: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00513944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513945: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51394au); f_0062fbf0();
    /* 0051394a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051394d: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 00513951: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513957: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x51395cu); f_0047bce0();
    /* 0051395c: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051395f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513961: jge 0x51396f */ if ((fS==fO)) goto L_0051396f;
L_00513963:; BB(0x00513963);
    /* 00513963: mov dword ptr [0x793064], 9 */ W32((u32)(0x793064u), 0x9u);
    /* 0051396d: jmp 0x513979 */ goto L_00513979;
L_0051396f:; BB(0x0051396f);
    /* 0051396f: mov dword ptr [0x793064], 7 */ W32((u32)(0x793064u), 0x7u);
L_00513979:; BB(0x00513979);
    /* 00513979: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00513980: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513981: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513987: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51398cu); f_0047e490();
    /* 0051398c: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
L_00513991:; BB(0x00513991);
    /* 00513991: jmp 0x5146ff */ goto L_005146ff;
L_00513996:; BB(0x00513996);
    /* 00513996: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051399c: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x5139a1u); f_0047d7f0();
    /* 005139a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005139a4: jne 0x513a1e */ if (!fZ) goto L_00513a1e;
L_005139a6:; BB(0x005139a6);
    /* 005139a6: lea ecx, [ebp - 0x384] */ r_ecx = (u32)(r_ebp+0xfffffc7cu);
    /* 005139ac: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x5139b1u); f_004a20d0();
    /* 005139b1: mov dword ptr [ebp - 0x620], eax */ W32((u32)(r_ebp+0xfffff9e0u), r_eax);
    /* 005139b7: mov edx, dword ptr [ebp - 0x620] */ r_edx = R32((u32)(r_ebp+0xfffff9e0u));
    /* 005139bd: mov dword ptr [ebp - 0x624], edx */ W32((u32)(r_ebp+0xfffff9dcu), r_edx);
    /* 005139c3: mov dword ptr [ebp - 4], 0x3c */ W32((u32)(r_ebp+0xfffffffcu), 0x3cu);
    /* 005139ca: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005139cf: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005139d4: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005139d9: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005139de: mov eax, dword ptr [0x7913f4] */ r_eax = R32((u32)(0x7913f4u));
    /* 005139e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005139e4: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 005139ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005139eb: mov ecx, dword ptr [ebp - 0x624] */ r_ecx = R32((u32)(r_ebp+0xfffff9dcu));
    /* 005139f1: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x5139f6u); f_004a2100();
    /* 005139f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005139f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005139f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005139ff: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513a02: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x513a07u); f_004f7bd0();
    /* 00513a07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513a0e: lea ecx, [ebp - 0x384] */ r_ecx = (u32)(r_ebp+0xfffffc7cu);
    /* 00513a14: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513a19u); f_004a20f0();
    /* 00513a19: jmp 0x513b16 */ goto L_00513b16;
L_00513a1e:; BB(0x00513a1e);
    /* 00513a1e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513a24: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x513a29u); f_0047d770();
    /* 00513a29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513a2b: je 0x513aa3 */ if (fZ) goto L_00513aa3;
L_00513a2d:; BB(0x00513a2d);
    /* 00513a2d: lea ecx, [ebp - 0x388] */ r_ecx = (u32)(r_ebp+0xfffffc78u);
    /* 00513a33: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x513a38u); f_004a20d0();
    /* 00513a38: mov dword ptr [ebp - 0x628], eax */ W32((u32)(r_ebp+0xfffff9d8u), r_eax);
    /* 00513a3e: mov eax, dword ptr [ebp - 0x628] */ r_eax = R32((u32)(r_ebp+0xfffff9d8u));
    /* 00513a44: mov dword ptr [ebp - 0x62c], eax */ W32((u32)(r_ebp+0xfffff9d4u), r_eax);
    /* 00513a4a: mov dword ptr [ebp - 4], 0x3d */ W32((u32)(r_ebp+0xfffffffcu), 0x3du);
    /* 00513a51: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513a56: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513a5b: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513a60: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513a65: mov ecx, dword ptr [0x7913b4] */ r_ecx = R32((u32)(0x7913b4u));
    /* 00513a6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513a6c: mov edx, dword ptr [0x7913b0] */ r_edx = R32((u32)(0x7913b0u));
    /* 00513a72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513a73: mov ecx, dword ptr [ebp - 0x62c] */ r_ecx = R32((u32)(r_ebp+0xfffff9d4u));
    /* 00513a79: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x513a7eu); f_004a2100();
    /* 00513a7e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00513a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513a81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513a87: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513a8a: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x513a8fu); f_004f7bd0();
    /* 00513a8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513a96: lea ecx, [ebp - 0x388] */ r_ecx = (u32)(r_ebp+0xfffffc78u);
    /* 00513a9c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513aa1u); f_004a20f0();
    /* 00513aa1: jmp 0x513b16 */ goto L_00513b16;
L_00513aa3:; BB(0x00513aa3);
    /* 00513aa3: lea ecx, [ebp - 0x38c] */ r_ecx = (u32)(r_ebp+0xfffffc74u);
    /* 00513aa9: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x513aaeu); f_004a20d0();
    /* 00513aae: mov dword ptr [ebp - 0x630], eax */ W32((u32)(r_ebp+0xfffff9d0u), r_eax);
    /* 00513ab4: mov ecx, dword ptr [ebp - 0x630] */ r_ecx = R32((u32)(r_ebp+0xfffff9d0u));
    /* 00513aba: mov dword ptr [ebp - 0x634], ecx */ W32((u32)(r_ebp+0xfffff9ccu), r_ecx);
    /* 00513ac0: mov dword ptr [ebp - 4], 0x3e */ W32((u32)(r_ebp+0xfffffffcu), 0x3eu);
    /* 00513ac7: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513acc: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513ad1: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513ad6: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00513adb: mov edx, dword ptr [0x7913c8] */ r_edx = R32((u32)(0x7913c8u));
    /* 00513ae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ae2: mov eax, dword ptr [0x7913cc] */ r_eax = R32((u32)(0x7913ccu));
    /* 00513ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ae8: mov ecx, dword ptr [ebp - 0x634] */ r_ecx = R32((u32)(r_ebp+0xfffff9ccu));
    /* 00513aee: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x513af3u); f_004a2100();
    /* 00513af3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00513af5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513af6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513afc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513aff: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x513b04u); f_004f7bd0();
    /* 00513b04: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513b0b: lea ecx, [ebp - 0x38c] */ r_ecx = (u32)(r_ebp+0xfffffc74u);
    /* 00513b11: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x513b16u); f_004a20f0();
L_00513b16:; BB(0x00513b16);
    /* 00513b16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513b1e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513b21: call 0x4f8c30 */ r_esp -= 4; W32(r_esp, 0x513b26u); f_004f8c30();
    /* 00513b26: mov word ptr [ebp - 0x1b0], ax */ W16((u32)(r_ebp+0xfffffe50u), (u16)r_eax);
    /* 00513b2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b2f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513b35: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513b38: call 0x4f8c30 */ r_esp -= 4; W32(r_esp, 0x513b3du); f_004f8c30();
    /* 00513b3d: mov word ptr [ebp - 0x1b4], ax */ W16((u32)(r_ebp+0xfffffe4cu), (u16)r_eax);
    /* 00513b44: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513b4b: cmp edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b4e: jne 0x513b73 */ if (!fZ) goto L_00513b73;
L_00513b50:; BB(0x00513b50);
    /* 00513b50: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00513b57: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b5a: jne 0x513b73 */ if (!fZ) goto L_00513b73;
L_00513b5c:; BB(0x00513b5c);
    /* 00513b5c: push 0xac0 */ { u32 v = 0xac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b61: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b66: push 0x6bc2b0 */ { u32 v = 0x6bc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b6b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x513b70u); f_005e9f20();
    /* 00513b70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513b73:; BB(0x00513b73);
    /* 00513b73: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513b7a: cmp edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513b7d: jne 0x513d89 */ if (!fZ) goto L_00513d89;
L_00513b83:; BB(0x00513b83);
    /* 00513b83: mov byte ptr [ebp - 0x1b5], 1 */ W8((u32)(r_ebp+0xfffffe4bu), 0x1u);
L_00513b8a:; BB(0x00513b8a);
    /* 00513b8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513b8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513b92: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513b95: call 0x4f8d90 */ r_esp -= 4; W32(r_esp, 0x513b9au); f_004f8d90();
    /* 00513b9a: mov word ptr [ebp - 0x1b0], ax */ W16((u32)(r_ebp+0xfffffe50u), (u16)r_eax);
    /* 00513ba1: movsx eax, word ptr [ebp - 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513ba8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513bab: je 0x513d84 */ if (fZ) goto L_00513d84;
L_00513bb1:; BB(0x00513bb1);
    /* 00513bb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513bb3: mov cx, word ptr [ebp - 0x1b0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe50u))) & 0xffffu);
    /* 00513bba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513bbb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513bc1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513bc4: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x513bc9u); f_004f79b0();
    /* 00513bc9: mov esi, eax */ r_esi = r_eax;
    /* 00513bcb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513bd1: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x513bd6u); f_0047bc20();
    /* 00513bd6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513bd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513bda: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513be1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513be2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513be8: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513bedu); f_0047e3d0();
    /* 00513bed: mov ecx, eax */ r_ecx = r_eax;
    /* 00513bef: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x513bf4u); f_004c6b80();
    /* 00513bf4: movsx eax, word ptr [ebp - 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513bfc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513c02: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513c07u); f_0047e3d0();
    /* 00513c07: mov ecx, eax */ r_ecx = r_eax;
    /* 00513c09: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x513c0eu); f_004da300();
    /* 00513c0e: movsx ecx, word ptr [ebp - 0x1b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513c1c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513c21u); f_0047e3d0();
    /* 00513c21: mov ecx, eax */ r_ecx = r_eax;
    /* 00513c23: call 0x4da470 */ r_esp -= 4; W32(r_esp, 0x513c28u); f_004da470();
    /* 00513c28: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513c36: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513c3bu); f_0047e3d0();
    /* 00513c3b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00513c3e: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
    /* 00513c44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513c46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513c48: mov cx, word ptr [ebp - 0x1b0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe50u))) & 0xffffu);
    /* 00513c4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513c50: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513c56: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513c59: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x513c5eu); f_004f79b0();
    /* 00513c5e: mov esi, eax */ r_esi = r_eax;
    /* 00513c60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513c66: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x513c6bu); f_0047bc20();
    /* 00513c6b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513c6e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513c6f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x513c74u); f_0064c8a0();
    /* 00513c74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513c77: mov dword ptr [ebp - 0x394], eax */ W32((u32)(r_ebp+0xfffffc6cu), r_eax);
    /* 00513c7d: mov dword ptr [ebp - 0x390], edx */ W32((u32)(r_ebp+0xfffffc70u), r_edx);
    /* 00513c83: mov edx, dword ptr [ebp - 0x394] */ r_edx = R32((u32)(r_ebp+0xfffffc6cu));
    /* 00513c89: mov dword ptr [ebp - 0x1c0], edx */ W32((u32)(r_ebp+0xfffffe40u), r_edx);
    /* 00513c8f: mov eax, dword ptr [ebp - 0x390] */ r_eax = R32((u32)(r_ebp+0xfffffc70u));
    /* 00513c95: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 00513c9b: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 00513ca1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ca2: mov edx, dword ptr [ebp - 0x1c0] */ r_edx = R32((u32)(r_ebp+0xfffffe40u));
    /* 00513ca8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ca9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00513cab: mov eax, dword ptr [ebp - 0x1c4] */ r_eax = R32((u32)(r_ebp+0xfffffe3cu));
    /* 00513cb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513cb2: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00513cb8: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x513cbdu); f_005e7e40();
    /* 00513cbd: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00513cc4: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513cc7: jne 0x513d75 */ if (!fZ) goto L_00513d75;
L_00513ccd:; BB(0x00513ccd);
    /* 00513ccd: movzx edx, byte ptr [ebp - 0x1b5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe4bu));
    /* 00513cd4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513cd6: je 0x513d2e */ if (fZ) goto L_00513d2e;
L_00513cd8:; BB(0x00513cd8);
    /* 00513cd8: movsx eax, word ptr [ebp - 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ce0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513ce6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513cebu); f_0047e3d0();
    /* 00513ceb: mov ecx, eax */ r_ecx = r_eax;
    /* 00513ced: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x513cf2u); f_004c6cb0();
    /* 00513cf2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513cf5: jne 0x513d22 */ if (!fZ) goto L_00513d22;
L_00513cf7:; BB(0x00513cf7);
    /* 00513cf7: mov dword ptr [0x793064], 0xc */ W32((u32)(0x793064u), 0xcu);
    /* 00513d01: movsx ecx, word ptr [ebp - 0x1b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513d08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513d09: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513d0f: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x513d14u); f_0047e490();
    /* 00513d14: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 00513d19: mov byte ptr [ebp - 0x1b5], 0 */ W8((u32)(r_ebp+0xfffffe4bu), 0x0u);
    /* 00513d20: jmp 0x513d2c */ goto L_00513d2c;
L_00513d22:; BB(0x00513d22);
    /* 00513d22: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_00513d2c:; BB(0x00513d2c);
    /* 00513d2c: jmp 0x513d73 */ goto L_00513d73;
L_00513d2e:; BB(0x00513d2e);
    /* 00513d2e: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513d35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513d36: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513d3c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513d41u); f_0047e3d0();
    /* 00513d41: mov ecx, eax */ r_ecx = r_eax;
    /* 00513d43: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x513d48u); f_004c6cb0();
    /* 00513d48: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513d4b: jne 0x513d73 */ if (!fZ) goto L_00513d73;
L_00513d4d:; BB(0x00513d4d);
    /* 00513d4d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513d4f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513d54u); f_0062fbf0();
    /* 00513d54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513d57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513d59: jne 0x513d73 */ if (!fZ) goto L_00513d73;
L_00513d5b:; BB(0x00513d5b);
    /* 00513d5b: movsx eax, word ptr [ebp - 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513d62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513d63: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513d69: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x513d6eu); f_0047e490();
    /* 00513d6e: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
L_00513d73:; BB(0x00513d73);
    /* 00513d73: jmp 0x513d7f */ goto L_00513d7f;
L_00513d75:; BB(0x00513d75);
    /* 00513d75: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_00513d7f:; BB(0x00513d7f);
    /* 00513d7f: jmp 0x513b8a */ goto L_00513b8a;
L_00513d84:; BB(0x00513d84);
    /* 00513d84: jmp 0x514200 */ goto L_00514200;
L_00513d89:; BB(0x00513d89);
    /* 00513d89: movsx ecx, word ptr [ebp - 0x1b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513d90: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513d93: jne 0x513d9a */ if (!fZ) goto L_00513d9a;
L_00513d95:; BB(0x00513d95);
    /* 00513d95: jmp 0x514200 */ goto L_00514200;
L_00513d9a:; BB(0x00513d9a);
    /* 00513d9a: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00513da3: jge 0x513dbc */ if ((fS==fO)) goto L_00513dbc;
L_00513da5:; BB(0x00513da5);
    /* 00513da5: push 0xaf3 */ { u32 v = 0xaf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00513daa: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00513daf: push 0x6bc29c */ { u32 v = 0x6bc29cu; r_esp -= 4; W32(r_esp, v); }
    /* 00513db4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x513db9u); f_005e9f20();
    /* 00513db9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00513dbc:; BB(0x00513dbc);
    /* 00513dbc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513dbe: mov cx, word ptr [ebp - 0x1b0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe50u))) & 0xffffu);
    /* 00513dc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513dc6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513dcc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513dcf: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x513dd4u); f_004f79b0();
    /* 00513dd4: mov esi, eax */ r_esi = r_eax;
    /* 00513dd6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513ddc: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x513de1u); f_0047bc20();
    /* 00513de1: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513de4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513de5: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513dec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ded: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513df3: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513df8u); f_0047e3d0();
    /* 00513df8: mov ecx, eax */ r_ecx = r_eax;
    /* 00513dfa: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x513dffu); f_004c6b80();
    /* 00513dff: movsx eax, word ptr [ebp - 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513e07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513e0d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513e12u); f_0047e3d0();
    /* 00513e12: mov ecx, eax */ r_ecx = r_eax;
    /* 00513e14: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x513e19u); f_004da300();
    /* 00513e19: movsx ecx, word ptr [ebp - 0x1b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513e20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e21: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513e27: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513e2cu); f_0047e3d0();
    /* 00513e2c: mov ecx, eax */ r_ecx = r_eax;
    /* 00513e2e: call 0x4da470 */ r_esp -= 4; W32(r_esp, 0x513e33u); f_004da470();
    /* 00513e33: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513e3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513e41: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x513e46u); f_0047e3d0();
    /* 00513e46: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00513e49: mov dword ptr [ebp - 0x1d0], eax */ W32((u32)(r_ebp+0xfffffe30u), r_eax);
    /* 00513e4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513e51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513e53: mov cx, word ptr [ebp - 0x1b0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe50u))) & 0xffffu);
    /* 00513e5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513e5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513e61: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513e64: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x513e69u); f_004f79b0();
    /* 00513e69: mov esi, eax */ r_esi = r_eax;
    /* 00513e6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513e71: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x513e76u); f_0047bc20();
    /* 00513e76: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513e79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513e7a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x513e7fu); f_0064c8a0();
    /* 00513e7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513e82: mov dword ptr [ebp - 0x39c], eax */ W32((u32)(r_ebp+0xfffffc64u), r_eax);
    /* 00513e88: mov dword ptr [ebp - 0x398], edx */ W32((u32)(r_ebp+0xfffffc68u), r_edx);
    /* 00513e8e: mov edx, dword ptr [ebp - 0x39c] */ r_edx = R32((u32)(r_ebp+0xfffffc64u));
    /* 00513e94: mov dword ptr [ebp - 0x1cc], edx */ W32((u32)(r_ebp+0xfffffe34u), r_edx);
    /* 00513e9a: mov eax, dword ptr [ebp - 0x398] */ r_eax = R32((u32)(r_ebp+0xfffffc68u));
    /* 00513ea0: mov dword ptr [ebp - 0x1c8], eax */ W32((u32)(r_ebp+0xfffffe38u), r_eax);
    /* 00513ea6: mov ecx, dword ptr [ebp - 0x1c8] */ r_ecx = R32((u32)(r_ebp+0xfffffe38u));
    /* 00513eac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513ead: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 00513eb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513eb4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00513eb6: mov eax, dword ptr [ebp - 0x1d0] */ r_eax = R32((u32)(r_ebp+0xfffffe30u));
    /* 00513ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513ebd: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00513ec3: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x513ec8u); f_005e7e40();
    /* 00513ec8: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00513ecf: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513ed2: jne 0x513fe4 */ if (!fZ) goto L_00513fe4;
L_00513ed8:; BB(0x00513ed8);
    /* 00513ed8: movzx edx, byte ptr [0x793031] */ r_edx = (u32)R8((u32)(0x793031u));
    /* 00513edf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513ee1: je 0x513f46 */ if (fZ) goto L_00513f46;
L_00513ee3:; BB(0x00513ee3);
    /* 00513ee3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513ee5: mov ax, word ptr [ebp - 0x1b0] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe50u))) & 0xffffu);
    /* 00513eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513eed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513ef3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513ef6: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x513efbu); f_004f79b0();
    /* 00513efb: mov esi, eax */ r_esi = r_eax;
    /* 00513efd: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 00513f03: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00513f05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f06: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513f0bu); f_0062fbf0();
    /* 00513f0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f0e: mov edi, eax */ r_edi = r_eax;
    /* 00513f10: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00513f16: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00513f18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f19: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513f1eu); f_0062fbf0();
    /* 00513f1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f21: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 00513f25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513f2b: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x513f30u); f_0047bde0();
    /* 00513f30: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513f33: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513f35: jle 0x513f46 */ if ((fZ||fS!=fO)) goto L_00513f46;
L_00513f37:; BB(0x00513f37);
    /* 00513f37: mov dword ptr [0x793064], 0xa */ W32((u32)(0x793064u), 0xau);
    /* 00513f41: jmp 0x513fc7 */ goto L_00513fc7;
L_00513f46:; BB(0x00513f46);
    /* 00513f46: movzx eax, byte ptr [0x793031] */ r_eax = (u32)R8((u32)(0x793031u));
    /* 00513f4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513f4f: je 0x513fbd */ if (fZ) goto L_00513fbd;
L_00513f51:; BB(0x00513f51);
    /* 00513f51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00513f53: mov cx, word ptr [ebp - 0x1b0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe50u))) & 0xffffu);
    /* 00513f5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00513f5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513f61: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00513f64: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x513f69u); f_004f79b0();
    /* 00513f69: mov esi, eax */ r_esi = r_eax;
    /* 00513f6b: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00513f70: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00513f71: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00513f74: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513f76: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00513f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513f7a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513f7fu); f_0062fbf0();
    /* 00513f7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f82: mov edi, eax */ r_edi = r_eax;
    /* 00513f84: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00513f89: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00513f8a: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00513f8d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00513f8f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00513f92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513f93: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x513f98u); f_0062fbf0();
    /* 00513f98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00513f9b: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 00513f9f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513fa5: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x513faau); f_0047bce0();
    /* 00513faa: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00513fad: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00513faf: jge 0x513fbd */ if ((fS==fO)) goto L_00513fbd;
L_00513fb1:; BB(0x00513fb1);
    /* 00513fb1: mov dword ptr [0x793064], 9 */ W32((u32)(0x793064u), 0x9u);
    /* 00513fbb: jmp 0x513fc7 */ goto L_00513fc7;
L_00513fbd:; BB(0x00513fbd);
    /* 00513fbd: mov dword ptr [0x793064], 7 */ W32((u32)(0x793064u), 0x7u);
L_00513fc7:; BB(0x00513fc7);
    /* 00513fc7: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00513fce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00513fcf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00513fd5: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x513fdau); f_0047e490();
    /* 00513fda: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 00513fdf: jmp 0x514200 */ goto L_00514200;
L_00513fe4:; BB(0x00513fe4);
    /* 00513fe4: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00513feb: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513fee: je 0x5141f6 */ if (fZ) goto L_005141f6;
L_00513ff4:; BB(0x00513ff4);
    /* 00513ff4: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00513ffb: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00514002: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514004: jne 0x514073 */ if (!fZ) goto L_00514073;
L_00514006:; BB(0x00514006);
    /* 00514006: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051400c: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x514011u); f_0047d770();
    /* 00514011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514013: je 0x51404c */ if (fZ) goto L_0051404c;
L_00514015:; BB(0x00514015);
    /* 00514015: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 0051401c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051401d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514023: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x514028u); f_0047e490();
    /* 00514028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514029: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051402f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514034u); f_0047e390();
    /* 00514034: mov ecx, eax */ r_ecx = r_eax;
    /* 00514036: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51403bu); f_004c6cb0();
    /* 0051403b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051403e: jne 0x51404c */ if (!fZ) goto L_0051404c;
L_00514040:; BB(0x00514040);
    /* 00514040: mov dword ptr [0x793064], 0xe */ W32((u32)(0x793064u), 0xeu);
    /* 0051404a: jmp 0x514056 */ goto L_00514056;
L_0051404c:; BB(0x0051404c);
    /* 0051404c: mov dword ptr [0x793064], 0xd */ W32((u32)(0x793064u), 0xdu);
L_00514056:; BB(0x00514056);
    /* 00514056: movsx ecx, word ptr [ebp - 0x1b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 0051405d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051405e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514064: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x514069u); f_0047e490();
    /* 00514069: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 0051406e: jmp 0x5141f4 */ goto L_005141f4;
L_00514073:; BB(0x00514073);
    /* 00514073: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 0051407a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051407b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514081: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514086u); f_0047e3d0();
    /* 00514086: mov ecx, eax */ r_ecx = r_eax;
    /* 00514088: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51408du); f_004c6cb0();
    /* 0051408d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514090: jne 0x514149 */ if (!fZ) goto L_00514149;
L_00514096:; BB(0x00514096);
    /* 00514096: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 0051409d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051409e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005140a4: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5140a9u); f_0047e3d0();
    /* 005140a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005140ab: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5140b0u); f_004c6cb0();
    /* 005140b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005140b3: jne 0x514149 */ if (!fZ) goto L_00514149;
L_005140b9:; BB(0x005140b9);
    /* 005140b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005140bf: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x5140c4u); f_0047d770();
    /* 005140c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005140c6: je 0x5140fa */ if (fZ) goto L_005140fa;
L_005140c8:; BB(0x005140c8);
    /* 005140c8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005140ca: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5140cfu); f_0062fbf0();
    /* 005140cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005140d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005140d4: je 0x5140fa */ if (fZ) goto L_005140fa;
L_005140d6:; BB(0x005140d6);
    /* 005140d6: mov dword ptr [0x793064], 0x10 */ W32((u32)(0x793064u), 0x10u);
    /* 005140e0: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005140e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005140e8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005140ee: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5140f3u); f_0047e490();
    /* 005140f3: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 005140f8: jmp 0x514144 */ goto L_00514144;
L_005140fa:; BB(0x005140fa);
    /* 005140fa: mov dword ptr [0x793064], 0xf */ W32((u32)(0x793064u), 0xfu);
    /* 00514104: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00514106: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51410bu); f_0062fbf0();
    /* 0051410b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051410e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514110: jne 0x51412c */ if (!fZ) goto L_0051412c;
L_00514112:; BB(0x00514112);
    /* 00514112: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00514119: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051411a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514120: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x514125u); f_0047e490();
    /* 00514125: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 0051412a: jmp 0x514144 */ goto L_00514144;
L_0051412c:; BB(0x0051412c);
    /* 0051412c: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514134: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051413a: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51413fu); f_0047e490();
    /* 0051413f: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
L_00514144:; BB(0x00514144);
    /* 00514144: jmp 0x5141f4 */ goto L_005141f4;
L_00514149:; BB(0x00514149);
    /* 00514149: movsx ecx, word ptr [ebp - 0x1b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00514150: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514151: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514157: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51415cu); f_0047e3d0();
    /* 0051415c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051415e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x514163u); f_004c6cb0();
    /* 00514163: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514166: jne 0x51418c */ if (!fZ) goto L_0051418c;
L_00514168:; BB(0x00514168);
    /* 00514168: mov dword ptr [0x793064], 0xf */ W32((u32)(0x793064u), 0xfu);
    /* 00514172: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 00514179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051417a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514180: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x514185u); f_0047e490();
    /* 00514185: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 0051418a: jmp 0x5141f4 */ goto L_005141f4;
L_0051418c:; BB(0x0051418c);
    /* 0051418c: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514194: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051419a: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51419fu); f_0047e3d0();
    /* 0051419f: mov ecx, eax */ r_ecx = r_eax;
    /* 005141a1: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5141a6u); f_004c6cb0();
    /* 005141a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005141a9: jne 0x5141ea */ if (!fZ) goto L_005141ea;
L_005141ab:; BB(0x005141ab);
    /* 005141ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005141b1: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x5141b6u); f_0047d770();
    /* 005141b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005141b8: je 0x5141c6 */ if (fZ) goto L_005141c6;
L_005141ba:; BB(0x005141ba);
    /* 005141ba: mov dword ptr [0x793064], 0x10 */ W32((u32)(0x793064u), 0x10u);
    /* 005141c4: jmp 0x5141d0 */ goto L_005141d0;
L_005141c6:; BB(0x005141c6);
    /* 005141c6: mov dword ptr [0x793064], 0xf */ W32((u32)(0x793064u), 0xfu);
L_005141d0:; BB(0x005141d0);
    /* 005141d0: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005141d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005141d8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005141de: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5141e3u); f_0047e490();
    /* 005141e3: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 005141e8: jmp 0x5141f4 */ goto L_005141f4;
L_005141ea:; BB(0x005141ea);
    /* 005141ea: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_005141f4:; BB(0x005141f4);
    /* 005141f4: jmp 0x514200 */ goto L_00514200;
L_005141f6:; BB(0x005141f6);
    /* 005141f6: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_00514200:; BB(0x00514200);
    /* 00514200: movsx edx, word ptr [ebp - 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514207: cmp edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051420a: jne 0x51445a */ if (!fZ) goto L_0051445a;
L_00514210:; BB(0x00514210);
    /* 00514210: mov byte ptr [ebp - 0x1d1], 1 */ W8((u32)(r_ebp+0xfffffe2fu), 0x1u);
L_00514217:; BB(0x00514217);
    /* 00514217: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514219: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051421f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514222: call 0x4f8d90 */ r_esp -= 4; W32(r_esp, 0x514227u); f_004f8d90();
    /* 00514227: mov word ptr [ebp - 0x1b4], ax */ W16((u32)(r_ebp+0xfffffe4cu), (u16)r_eax);
    /* 0051422e: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514235: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514238: je 0x514455 */ if (fZ) goto L_00514455;
L_0051423e:; BB(0x0051423e);
    /* 0051423e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514240: mov cx, word ptr [ebp - 0x1b4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe4cu))) & 0xffffu);
    /* 00514247: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514248: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051424e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514251: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x514256u); f_004f79b0();
    /* 00514256: mov esi, eax */ r_esi = r_eax;
    /* 00514258: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051425e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x514263u); f_0047bc20();
    /* 00514263: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00514266: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514267: movsx edx, word ptr [ebp - 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 0051426e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051426f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514275: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51427au); f_0047e3d0();
    /* 0051427a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051427c: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x514281u); f_004c6b80();
    /* 00514281: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514289: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051428f: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514294u); f_0047e3d0();
    /* 00514294: mov ecx, eax */ r_ecx = r_eax;
    /* 00514296: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x51429bu); f_004da300();
    /* 0051429b: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005142a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005142a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005142a9: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5142aeu); f_0047e3d0();
    /* 005142ae: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005142b1: mov dword ptr [ebp - 0x1e0], edx */ W32((u32)(r_ebp+0xfffffe20u), r_edx);
    /* 005142b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005142b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005142bb: mov ax, word ptr [ebp - 0x1b4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe4cu))) & 0xffffu);
    /* 005142c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005142c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005142c9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005142cc: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x5142d1u); f_004f79b0();
    /* 005142d1: mov esi, eax */ r_esi = r_eax;
    /* 005142d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005142d9: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5142deu); f_0047bc20();
    /* 005142de: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005142e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005142e2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5142e7u); f_0064c8a0();
    /* 005142e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005142ea: mov dword ptr [ebp - 0x3a4], eax */ W32((u32)(r_ebp+0xfffffc5cu), r_eax);
    /* 005142f0: mov dword ptr [ebp - 0x3a0], edx */ W32((u32)(r_ebp+0xfffffc60u), r_edx);
    /* 005142f6: mov ecx, dword ptr [ebp - 0x3a4] */ r_ecx = R32((u32)(r_ebp+0xfffffc5cu));
    /* 005142fc: mov dword ptr [ebp - 0x1dc], ecx */ W32((u32)(r_ebp+0xfffffe24u), r_ecx);
    /* 00514302: mov edx, dword ptr [ebp - 0x3a0] */ r_edx = R32((u32)(r_ebp+0xfffffc60u));
    /* 00514308: mov dword ptr [ebp - 0x1d8], edx */ W32((u32)(r_ebp+0xfffffe28u), r_edx);
    /* 0051430e: mov eax, dword ptr [ebp - 0x1d8] */ r_eax = R32((u32)(r_ebp+0xfffffe28u));
    /* 00514314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514315: mov ecx, dword ptr [ebp - 0x1dc] */ r_ecx = R32((u32)(r_ebp+0xfffffe24u));
    /* 0051431b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051431c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051431e: mov edx, dword ptr [ebp - 0x1e0] */ r_edx = R32((u32)(r_ebp+0xfffffe20u));
    /* 00514324: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514325: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 0051432b: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x514330u); f_005e7e40();
    /* 00514330: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514336: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x51433bu); f_0047d770();
    /* 0051433b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051433e: je 0x514360 */ if (fZ) goto L_00514360;
L_00514340:; BB(0x00514340);
    /* 00514340: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514346: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x51434bu); f_0047d770();
    /* 0051434b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051434e: je 0x514360 */ if (fZ) goto L_00514360;
L_00514350:; BB(0x00514350);
    /* 00514350: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514356: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x51435bu); f_0047d770();
    /* 0051435b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051435e: jne 0x51437e */ if (!fZ) goto L_0051437e;
L_00514360:; BB(0x00514360);
    /* 00514360: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00514362: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051436a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514370: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514375u); f_0047e3d0();
    /* 00514375: mov ecx, eax */ r_ecx = r_eax;
    /* 00514377: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x51437cu); f_004da3c0();
    /* 0051437c: jmp 0x51439a */ goto L_0051439a;
L_0051437e:; BB(0x0051437e);
    /* 0051437e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514380: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514387: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514388: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051438e: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514393u); f_0047e3d0();
    /* 00514393: mov ecx, eax */ r_ecx = r_eax;
    /* 00514395: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x51439au); f_004da3c0();
L_0051439a:; BB(0x0051439a);
    /* 0051439a: movsx edx, word ptr [ebp - 0x1b0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 005143a1: cmp edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005143a4: jne 0x514450 */ if (!fZ) goto L_00514450;
L_005143aa:; BB(0x005143aa);
    /* 005143aa: movzx eax, byte ptr [ebp - 0x1d1] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe2fu));
    /* 005143b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005143b3: je 0x51440b */ if (fZ) goto L_0051440b;
L_005143b5:; BB(0x005143b5);
    /* 005143b5: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005143bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005143bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005143c3: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5143c8u); f_0047e3d0();
    /* 005143c8: mov ecx, eax */ r_ecx = r_eax;
    /* 005143ca: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5143cfu); f_004c6cb0();
    /* 005143cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005143d2: jne 0x5143ff */ if (!fZ) goto L_005143ff;
L_005143d4:; BB(0x005143d4);
    /* 005143d4: mov dword ptr [0x793064], 0xc */ W32((u32)(0x793064u), 0xcu);
    /* 005143de: movsx edx, word ptr [ebp - 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005143e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005143e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005143ec: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5143f1u); f_0047e490();
    /* 005143f1: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 005143f6: mov byte ptr [ebp - 0x1d1], 0 */ W8((u32)(r_ebp+0xfffffe2fu), 0x0u);
    /* 005143fd: jmp 0x514409 */ goto L_00514409;
L_005143ff:; BB(0x005143ff);
    /* 005143ff: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_00514409:; BB(0x00514409);
    /* 00514409: jmp 0x514450 */ goto L_00514450;
L_0051440b:; BB(0x0051440b);
    /* 0051440b: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514413: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514419: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51441eu); f_0047e3d0();
    /* 0051441e: mov ecx, eax */ r_ecx = r_eax;
    /* 00514420: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x514425u); f_004c6cb0();
    /* 00514425: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514428: jne 0x514450 */ if (!fZ) goto L_00514450;
L_0051442a:; BB(0x0051442a);
    /* 0051442a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051442c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514431u); f_0062fbf0();
    /* 00514431: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514436: jne 0x514450 */ if (!fZ) goto L_00514450;
L_00514438:; BB(0x00514438);
    /* 00514438: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 0051443f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514440: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514446: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51444bu); f_0047e490();
    /* 0051444b: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
L_00514450:; BB(0x00514450);
    /* 00514450: jmp 0x514217 */ goto L_00514217;
L_00514455:; BB(0x00514455);
    /* 00514455: jmp 0x5146ff */ goto L_005146ff;
L_0051445a:; BB(0x0051445a);
    /* 0051445a: movsx edx, word ptr [ebp - 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514461: cmp edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514464: jne 0x51446b */ if (!fZ) goto L_0051446b;
L_00514466:; BB(0x00514466);
    /* 00514466: jmp 0x5146ff */ goto L_005146ff;
L_0051446b:; BB(0x0051446b);
    /* 0051446b: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00514474: jge 0x51448d */ if ((fS==fO)) goto L_0051448d;
L_00514476:; BB(0x00514476);
    /* 00514476: push 0xb71 */ { u32 v = 0xb71u; r_esp -= 4; W32(r_esp, v); }
    /* 0051447b: push 0x6c13b8 */ { u32 v = 0x6c13b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00514480: push 0x6bc288 */ { u32 v = 0x6bc288u; r_esp -= 4; W32(r_esp, v); }
    /* 00514485: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x51448au); f_005e9f20();
    /* 0051448a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051448d:; BB(0x0051448d);
    /* 0051448d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051448f: mov dx, word ptr [ebp - 0x1b4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe4cu))) & 0xffffu);
    /* 00514496: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514497: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051449d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005144a0: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x5144a5u); f_004f79b0();
    /* 005144a5: mov esi, eax */ r_esi = r_eax;
    /* 005144a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005144ad: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5144b2u); f_0047bc20();
    /* 005144b2: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005144b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005144b6: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005144bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005144be: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005144c4: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5144c9u); f_0047e3d0();
    /* 005144c9: mov ecx, eax */ r_ecx = r_eax;
    /* 005144cb: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x5144d0u); f_004c6b80();
    /* 005144d0: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005144d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005144d8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005144de: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x5144e3u); f_0047e3d0();
    /* 005144e3: mov ecx, eax */ r_ecx = r_eax;
    /* 005144e5: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x5144eau); f_004da300();
    /* 005144ea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005144f0: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x5144f5u); f_0047d770();
    /* 005144f5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005144f8: je 0x51451a */ if (fZ) goto L_0051451a;
L_005144fa:; BB(0x005144fa);
    /* 005144fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514500: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x514505u); f_0047d770();
    /* 00514505: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514508: je 0x51451a */ if (fZ) goto L_0051451a;
L_0051450a:; BB(0x0051450a);
    /* 0051450a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514510: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x514515u); f_0047d770();
    /* 00514515: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514518: jne 0x514538 */ if (!fZ) goto L_00514538;
L_0051451a:; BB(0x0051451a);
    /* 0051451a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051451c: movsx edx, word ptr [ebp - 0x1b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514523: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514524: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051452a: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51452fu); f_0047e3d0();
    /* 0051452f: mov ecx, eax */ r_ecx = r_eax;
    /* 00514531: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x514536u); f_004da3c0();
    /* 00514536: jmp 0x514554 */ goto L_00514554;
L_00514538:; BB(0x00514538);
    /* 00514538: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051453a: movsx eax, word ptr [ebp - 0x1b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 00514541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514542: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514548: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51454du); f_0047e3d0();
    /* 0051454d: mov ecx, eax */ r_ecx = r_eax;
    /* 0051454f: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x514554u); f_004da3c0();
L_00514554:; BB(0x00514554);
    /* 00514554: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 0051455b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051455c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514562: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514567u); f_0047e3d0();
    /* 00514567: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0051456a: mov dword ptr [ebp - 0x1ec], edx */ W32((u32)(r_ebp+0xfffffe14u), r_edx);
    /* 00514570: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514572: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514574: mov ax, word ptr [ebp - 0x1b4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe4cu))) & 0xffffu);
    /* 0051457b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051457c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514582: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514585: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x51458au); f_004f79b0();
    /* 0051458a: mov esi, eax */ r_esi = r_eax;
    /* 0051458c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514592: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x514597u); f_0047bc20();
    /* 00514597: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051459a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051459b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5145a0u); f_0064c8a0();
    /* 005145a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005145a3: mov dword ptr [ebp - 0x3ac], eax */ W32((u32)(r_ebp+0xfffffc54u), r_eax);
    /* 005145a9: mov dword ptr [ebp - 0x3a8], edx */ W32((u32)(r_ebp+0xfffffc58u), r_edx);
    /* 005145af: mov ecx, dword ptr [ebp - 0x3ac] */ r_ecx = R32((u32)(r_ebp+0xfffffc54u));
    /* 005145b5: mov dword ptr [ebp - 0x1e8], ecx */ W32((u32)(r_ebp+0xfffffe18u), r_ecx);
    /* 005145bb: mov edx, dword ptr [ebp - 0x3a8] */ r_edx = R32((u32)(r_ebp+0xfffffc58u));
    /* 005145c1: mov dword ptr [ebp - 0x1e4], edx */ W32((u32)(r_ebp+0xfffffe1cu), r_edx);
    /* 005145c7: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 005145cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005145ce: mov ecx, dword ptr [ebp - 0x1e8] */ r_ecx = R32((u32)(r_ebp+0xfffffe18u));
    /* 005145d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005145d5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005145d7: mov edx, dword ptr [ebp - 0x1ec] */ r_edx = R32((u32)(r_ebp+0xfffffe14u));
    /* 005145dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005145de: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005145e4: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5145e9u); f_005e7e40();
    /* 005145e9: movsx eax, word ptr [ebp - 0x1b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe50u));
    /* 005145f0: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005145f3: jne 0x5146ff */ if (!fZ) goto L_005146ff;
L_005145f9:; BB(0x005145f9);
    /* 005145f9: movzx ecx, byte ptr [0x793031] */ r_ecx = (u32)R8((u32)(0x793031u));
    /* 00514600: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514602: je 0x514666 */ if (fZ) goto L_00514666;
L_00514604:; BB(0x00514604);
    /* 00514604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514606: mov dx, word ptr [ebp - 0x1b4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe4cu))) & 0xffffu);
    /* 0051460d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051460e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514614: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514617: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x51461cu); f_004f79b0();
    /* 0051461c: mov esi, eax */ r_esi = r_eax;
    /* 0051461e: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00514623: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00514625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514626: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51462bu); f_0062fbf0();
    /* 0051462b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051462e: mov edi, eax */ r_edi = r_eax;
    /* 00514630: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 00514636: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00514638: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514639: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51463eu); f_0062fbf0();
    /* 0051463e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514641: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 00514645: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051464b: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x514650u); f_0047bde0();
    /* 00514650: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00514653: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514655: jle 0x514666 */ if ((fZ||fS!=fO)) goto L_00514666;
L_00514657:; BB(0x00514657);
    /* 00514657: mov dword ptr [0x793064], 0xa */ W32((u32)(0x793064u), 0xau);
    /* 00514661: jmp 0x5146e7 */ goto L_005146e7;
L_00514666:; BB(0x00514666);
    /* 00514666: movzx edx, byte ptr [0x793031] */ r_edx = (u32)R8((u32)(0x793031u));
    /* 0051466d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051466f: je 0x5146dd */ if (fZ) goto L_005146dd;
L_00514671:; BB(0x00514671);
    /* 00514671: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514673: mov ax, word ptr [ebp - 0x1b4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe4cu))) & 0xffffu);
    /* 0051467a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051467b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514681: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514684: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x514689u); f_004f79b0();
    /* 00514689: mov esi, eax */ r_esi = r_eax;
    /* 0051468b: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00514690: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00514691: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00514694: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00514696: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00514699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051469a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51469fu); f_0062fbf0();
    /* 0051469f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005146a2: mov edi, eax */ r_edi = r_eax;
    /* 005146a4: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 005146a9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005146aa: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005146ad: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005146af: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005146b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005146b3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5146b8u); f_0062fbf0();
    /* 005146b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005146bb: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 005146bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005146c5: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x5146cau); f_0047bce0();
    /* 005146ca: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005146cd: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005146cf: jge 0x5146dd */ if ((fS==fO)) goto L_005146dd;
L_005146d1:; BB(0x005146d1);
    /* 005146d1: mov dword ptr [0x793064], 9 */ W32((u32)(0x793064u), 0x9u);
    /* 005146db: jmp 0x5146e7 */ goto L_005146e7;
L_005146dd:; BB(0x005146dd);
    /* 005146dd: mov dword ptr [0x793064], 7 */ W32((u32)(0x793064u), 0x7u);
L_005146e7:; BB(0x005146e7);
    /* 005146e7: movsx ecx, word ptr [ebp - 0x1b4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe4cu));
    /* 005146ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005146ef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005146f5: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5146fau); f_0047e490();
    /* 005146fa: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
L_005146ff:; BB(0x005146ff);
    /* 005146ff: mov byte ptr [0x793031], 0 */ W8((u32)(0x793031u), 0x0u);
    /* 00514706: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00514708: mov edx, dword ptr [ebp - 0x4b4] */ r_edx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051470e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514710: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514716: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00514719: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51471bu); call_ind(t); }
    /* 0051471b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051471d: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514723: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514725: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 0051472b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0051472e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514730u); call_ind(t); }
    /* 00514730: jmp 0x516cb0 */ goto L_00516cb0;
L_00514735:; BB(0x00514735);
    /* 00514735: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051473b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051473e: call 0x4f6540 */ r_esp -= 4; W32(r_esp, 0x514743u); f_004f6540();
    /* 00514743: mov word ptr [0x793114], ax */ W16((u32)(0x793114u), (u16)r_eax);
    /* 00514749: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00514750: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514751: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514757: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51475cu); f_0047e490();
    /* 0051475c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051475d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514763: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514768u); f_0047e390();
    /* 00514768: mov ecx, eax */ r_ecx = r_eax;
    /* 0051476a: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x51476fu); f_004da360();
    /* 0051476f: mov word ptr [0x793118], 0 */ W16((u32)(0x793118u), 0x0u);
    /* 00514778: jmp 0x51478c */ goto L_0051478c;
L_0051477a:; BB(0x0051477a);
    /* 0051477a: mov dx, word ptr [0x793118] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793118u))) & 0xffffu);
    /* 00514781: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00514785: mov word ptr [0x793118], dx */ W16((u32)(0x793118u), (u16)r_edx);
L_0051478c:; BB(0x0051478c);
    /* 0051478c: movsx esi, word ptr [0x793118] */ r_esi = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00514793: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514799: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x51479eu); f_0047f950();
    /* 0051479e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005147a0: jge 0x514910 */ if ((fS==fO)) goto L_00514910;
L_005147a6:; BB(0x005147a6);
    /* 005147a6: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 005147ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005147ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005147b4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5147b9u); f_0047e390();
    /* 005147b9: mov ecx, eax */ r_ecx = r_eax;
    /* 005147bb: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x5147c0u); f_004c6cb0();
    /* 005147c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005147c2: je 0x51490b */ if (fZ) goto L_0051490b;
L_005147c8:; BB(0x005147c8);
    /* 005147c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005147ce: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5147d3u); f_0047e190();
    /* 005147d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005147d6: jne 0x514822 */ if (!fZ) goto L_00514822;
L_005147d8:; BB(0x005147d8);
    /* 005147d8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005147de: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x5147e3u); f_0047e280();
    /* 005147e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005147e5: jne 0x514822 */ if (!fZ) goto L_00514822;
L_005147e7:; BB(0x005147e7);
    /* 005147e7: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 005147ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005147ef: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005147f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005147f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005147fd: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x514802u); f_0047e490();
    /* 00514802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514803: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 0051480a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051480b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514811: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514816u); f_0047e390();
    /* 00514816: mov ecx, eax */ r_ecx = r_eax;
    /* 00514818: call 0x4d71c0 */ r_esp -= 4; W32(r_esp, 0x51481du); f_004d71c0();
    /* 0051481d: jmp 0x51490b */ goto L_0051490b;
L_00514822:; BB(0x00514822);
    /* 00514822: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514828: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51482du); f_0047e190();
    /* 0051482d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514830: jne 0x51487d */ if (!fZ) goto L_0051487d;
L_00514832:; BB(0x00514832);
    /* 00514832: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514838: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x51483du); f_0047e280();
    /* 0051483d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514840: jne 0x51487d */ if (!fZ) goto L_0051487d;
L_00514842:; BB(0x00514842);
    /* 00514842: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 00514849: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051484a: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00514851: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514852: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514858: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x51485du); f_0047e490();
    /* 0051485d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051485e: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00514865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514866: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051486c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514871u); f_0047e390();
    /* 00514871: mov ecx, eax */ r_ecx = r_eax;
    /* 00514873: call 0x4d9550 */ r_esp -= 4; W32(r_esp, 0x514878u); f_004d9550();
    /* 00514878: jmp 0x51490b */ goto L_0051490b;
L_0051487d:; BB(0x0051487d);
    /* 0051487d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514883: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x514888u); f_0047e190();
    /* 00514888: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051488b: jne 0x5148c5 */ if (!fZ) goto L_005148c5;
L_0051488d:; BB(0x0051488d);
    /* 0051488d: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 00514894: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514895: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 0051489c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051489d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005148a3: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5148a8u); f_0047e490();
    /* 005148a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005148a9: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 005148b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005148b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005148b7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5148bcu); f_0047e390();
    /* 005148bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005148be: call 0x4ec570 */ r_esp -= 4; W32(r_esp, 0x5148c3u); f_004ec570();
    /* 005148c3: jmp 0x51490b */ goto L_0051490b;
L_005148c5:; BB(0x005148c5);
    /* 005148c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005148cb: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5148d0u); f_0047e190();
    /* 005148d0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005148d3: jne 0x51490b */ if (!fZ) goto L_0051490b;
L_005148d5:; BB(0x005148d5);
    /* 005148d5: mov cx, word ptr [0x793070] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793070u))) & 0xffffu);
    /* 005148dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005148dd: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 005148e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005148e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005148eb: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x5148f0u); f_0047e490();
    /* 005148f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005148f1: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 005148f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005148f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005148ff: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514904u); f_0047e390();
    /* 00514904: mov ecx, eax */ r_ecx = r_eax;
    /* 00514906: call 0x4f34e0 */ r_esp -= 4; W32(r_esp, 0x51490bu); f_004f34e0();
L_0051490b:; BB(0x0051490b);
    /* 0051490b: jmp 0x51477a */ goto L_0051477a;
L_00514910:; BB(0x00514910);
    /* 00514910: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514916: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514919: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x51491eu); f_004f6840();
    /* 0051491e: mov esi, eax */ r_esi = r_eax;
    /* 00514920: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514926: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x51492bu); f_0047bc20();
    /* 0051492b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051492e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051492f: movsx ecx, word ptr [0x793114] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00514936: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514937: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051493d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514942u); f_0047e3d0();
    /* 00514942: mov ecx, eax */ r_ecx = r_eax;
    /* 00514944: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x514949u); f_004c6b80();
    /* 00514949: movsx edx, word ptr [0x793114] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00514950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514951: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514957: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x51495cu); f_0047e3d0();
    /* 0051495c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051495e: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x514963u); f_004da300();
    /* 00514963: movsx eax, word ptr [0x793114] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 0051496a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051496b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514971: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x514976u); f_0047e3d0();
    /* 00514976: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00514979: mov dword ptr [ebp - 0x1f8], ecx */ W32((u32)(r_ebp+0xfffffe08u), r_ecx);
    /* 0051497f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514981: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514987: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051498a: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x51498fu); f_004f6840();
    /* 0051498f: mov esi, eax */ r_esi = r_eax;
    /* 00514991: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514997: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x51499cu); f_0047bc20();
    /* 0051499c: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051499f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005149a0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5149a5u); f_0064c8a0();
    /* 005149a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005149a8: mov dword ptr [ebp - 0x3b4], eax */ W32((u32)(r_ebp+0xfffffc4cu), r_eax);
    /* 005149ae: mov dword ptr [ebp - 0x3b0], edx */ W32((u32)(r_ebp+0xfffffc50u), r_edx);
    /* 005149b4: mov edx, dword ptr [ebp - 0x3b4] */ r_edx = R32((u32)(r_ebp+0xfffffc4cu));
    /* 005149ba: mov dword ptr [ebp - 0x1f4], edx */ W32((u32)(r_ebp+0xfffffe0cu), r_edx);
    /* 005149c0: mov eax, dword ptr [ebp - 0x3b0] */ r_eax = R32((u32)(r_ebp+0xfffffc50u));
    /* 005149c6: mov dword ptr [ebp - 0x1f0], eax */ W32((u32)(r_ebp+0xfffffe10u), r_eax);
    /* 005149cc: mov ecx, dword ptr [ebp - 0x1f0] */ r_ecx = R32((u32)(r_ebp+0xfffffe10u));
    /* 005149d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005149d3: mov edx, dword ptr [ebp - 0x1f4] */ r_edx = R32((u32)(r_ebp+0xfffffe0cu));
    /* 005149d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005149da: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005149dc: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 005149e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005149e3: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005149e9: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5149eeu); f_005e7e40();
    /* 005149ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005149f4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005149f7: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x5149fcu); f_004f6840();
    /* 005149fc: mov esi, eax */ r_esi = r_eax;
    /* 005149fe: mov ecx, dword ptr [0x793070] */ r_ecx = R32((u32)(0x793070u));
    /* 00514a04: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00514a06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a07: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514a0cu); f_0062fbf0();
    /* 00514a0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a0f: mov edi, eax */ r_edi = r_eax;
    /* 00514a11: mov edx, dword ptr [0x793070] */ r_edx = R32((u32)(0x793070u));
    /* 00514a17: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00514a19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a1a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514a1fu); f_0062fbf0();
    /* 00514a1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a22: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 00514a26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514a2c: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x514a31u); f_0047bde0();
    /* 00514a31: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00514a34: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514a36: jle 0x514a44 */ if ((fZ||fS!=fO)) goto L_00514a44;
L_00514a38:; BB(0x00514a38);
    /* 00514a38: mov dword ptr [0x793064], 0xa */ W32((u32)(0x793064u), 0xau);
    /* 00514a42: jmp 0x514ab0 */ goto L_00514ab0;
L_00514a44:; BB(0x00514a44);
    /* 00514a44: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514a4a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00514a4d: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x514a52u); f_004f6840();
    /* 00514a52: mov esi, eax */ r_esi = r_eax;
    /* 00514a54: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00514a59: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00514a5a: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00514a5d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00514a5f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00514a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514a63: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514a68u); f_0062fbf0();
    /* 00514a68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a6b: mov edi, eax */ r_edi = r_eax;
    /* 00514a6d: mov eax, dword ptr [0x793070] */ r_eax = R32((u32)(0x793070u));
    /* 00514a72: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00514a73: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00514a76: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00514a78: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00514a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514a7c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514a81u); f_0062fbf0();
    /* 00514a81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a84: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 00514a88: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514a8e: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x514a93u); f_0047bce0();
    /* 00514a93: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00514a96: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514a98: jge 0x514aa6 */ if ((fS==fO)) goto L_00514aa6;
L_00514a9a:; BB(0x00514a9a);
    /* 00514a9a: mov dword ptr [0x793064], 9 */ W32((u32)(0x793064u), 0x9u);
    /* 00514aa4: jmp 0x514ab0 */ goto L_00514ab0;
L_00514aa6:; BB(0x00514aa6);
    /* 00514aa6: mov dword ptr [0x793064], 0xb */ W32((u32)(0x793064u), 0xbu);
L_00514ab0:; BB(0x00514ab0);
    /* 00514ab0: movsx eax, word ptr [0x793114] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793114u));
    /* 00514ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514ab8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514abe: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x514ac3u); f_0047e490();
    /* 00514ac3: mov dword ptr [0x793068], eax */ W32((u32)(0x793068u), r_eax);
    /* 00514ac8: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00514aca: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514ad0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00514ad2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514ad8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00514adb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514addu); call_ind(t); }
    /* 00514add: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00514adf: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514ae5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00514ae7: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514aed: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00514af0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514af2u); call_ind(t); }
    /* 00514af2: jmp 0x516cb0 */ goto L_00516cb0;
L_00514af7:; BB(0x00514af7);
    /* 00514af7: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00514afd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x514b02u); f_005da7b0();
    /* 00514b02: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00514b05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514b07: je 0x514c41 */ if (fZ) goto L_00514c41;
L_00514b0d:; BB(0x00514b0d);
    /* 00514b0d: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00514b13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00514b15: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00514b1b: mov edx, dword ptr [eax + 0x2d4] */ r_edx = R32((u32)(r_eax+0x2d4u));
    /* 00514b21: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x514b23u); call_ind(t); }
    /* 00514b23: push 0x793110 */ { u32 v = 0x793110u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b28: push 0x79310c */ { u32 v = 0x79310cu; r_esp -= 4; W32(r_esp, v); }
    /* 00514b2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514b33: call 0x483c30 */ r_esp -= 4; W32(r_esp, 0x514b38u); f_00483c30();
    /* 00514b38: mov dword ptr [0x79309c], eax */ W32((u32)(0x79309cu), r_eax);
    /* 00514b3d: cmp dword ptr [0x79309c], 0 */ {  u32 a = R32((u32)(0x79309cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514b44: jl 0x514b80 */ if ((fS!=fO)) goto L_00514b80;
L_00514b46:; BB(0x00514b46);
    /* 00514b46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514b4c: call 0x47aaa0 */ r_esp -= 4; W32(r_esp, 0x514b51u); f_0047aaa0();
    /* 00514b51: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b53: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514b59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514b5b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514b61: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00514b64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514b66u); call_ind(t); }
    /* 00514b66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514b68: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514b6e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00514b70: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514b76: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00514b79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514b7bu); call_ind(t); }
    /* 00514b7b: jmp 0x516cb0 */ goto L_00516cb0;
L_00514b80:; BB(0x00514b80);
    /* 00514b80: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 00514b86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514b87: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514b8d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514b92u); f_0047e390();
    /* 00514b92: mov ecx, eax */ r_ecx = r_eax;
    /* 00514b94: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x514b99u); f_004c6cb0();
    /* 00514b99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514b9c: jne 0x514c41 */ if (!fZ) goto L_00514c41;
L_00514ba2:; BB(0x00514ba2);
    /* 00514ba2: cmp dword ptr [0x793064], 7 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514ba9: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bab:; BB(0x00514bab);
    /* 00514bab: cmp dword ptr [0x793064], 9 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bb2: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bb4:; BB(0x00514bb4);
    /* 00514bb4: cmp dword ptr [0x793064], 0xa */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bbb: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bbd:; BB(0x00514bbd);
    /* 00514bbd: cmp dword ptr [0x793064], 0xb */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bc4: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bc6:; BB(0x00514bc6);
    /* 00514bc6: cmp dword ptr [0x793064], 0xc */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bcd: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bcf:; BB(0x00514bcf);
    /* 00514bcf: cmp dword ptr [0x793064], 0xd */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bd6: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bd8:; BB(0x00514bd8);
    /* 00514bd8: cmp dword ptr [0x793064], 0xe */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bdf: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514be1:; BB(0x00514be1);
    /* 00514be1: cmp dword ptr [0x793064], 0xf */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514be8: je 0x514bf3 */ if (fZ) goto L_00514bf3;
L_00514bea:; BB(0x00514bea);
    /* 00514bea: cmp dword ptr [0x793064], 0x10 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bf1: jne 0x514c41 */ if (!fZ) goto L_00514c41;
L_00514bf3:; BB(0x00514bf3);
    /* 00514bf3: lea edx, [ebp - 0x1fc] */ r_edx = (u32)(r_ebp+0xfffffe04u);
    /* 00514bf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514bfa: lea eax, [ebp - 0x200] */ r_eax = (u32)(r_ebp+0xfffffe00u);
    /* 00514c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514c01: mov cx, word ptr [0x793068] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x793068u))) & 0xffffu);
    /* 00514c08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c09: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514c0f: call 0x483a70 */ r_esp -= 4; W32(r_esp, 0x514c14u); f_00483a70();
    /* 00514c14: movsx edx, word ptr [ebp - 0x200] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffe00u));
    /* 00514c1b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514c1e: jne 0x514c41 */ if (!fZ) goto L_00514c41;
L_00514c20:; BB(0x00514c20);
    /* 00514c20: cmp dword ptr [ebp - 0x1fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514c27: jge 0x514c41 */ if ((fS==fO)) goto L_00514c41;
L_00514c29:; BB(0x00514c29);
    /* 00514c29: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c2b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514c30u); f_0062fbf0();
    /* 00514c30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514c35: jne 0x514c41 */ if (!fZ) goto L_00514c41;
L_00514c37:; BB(0x00514c37);
    /* 00514c37: mov dword ptr [0x793064], 8 */ W32((u32)(0x793064u), 0x8u);
L_00514c41:; BB(0x00514c41);
    /* 00514c41: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c43: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514c49: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00514c4b: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514c51: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00514c54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514c56u); call_ind(t); }
    /* 00514c56: cmp dword ptr [0x793064], 0 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514c5d: jne 0x514c79 */ if (!fZ) goto L_00514c79;
L_00514c5f:; BB(0x00514c5f);
    /* 00514c5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514c61: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514c67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00514c69: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00514c6f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00514c72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x514c74u); call_ind(t); }
    /* 00514c74: jmp 0x516a92 */ goto L_00516a92;
L_00514c79:; BB(0x00514c79);
    /* 00514c79: cmp dword ptr [0x793064], 8 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514c80: jne 0x514ca4 */ if (!fZ) goto L_00514ca4;
L_00514c82:; BB(0x00514c82);
    /* 00514c82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00514c85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c86: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 00514c8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514c8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514c93: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514c98u); f_0047e390();
    /* 00514c98: mov ecx, eax */ r_ecx = r_eax;
    /* 00514c9a: call 0x4cd3a0 */ r_esp -= 4; W32(r_esp, 0x514c9fu); f_004cd3a0();
    /* 00514c9f: jmp 0x516a92 */ goto L_00516a92;
L_00514ca4:; BB(0x00514ca4);
    /* 00514ca4: mov eax, dword ptr [0x793068] */ r_eax = R32((u32)(0x793068u));
    /* 00514ca9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514caa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514cb0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514cb5u); f_0047e390();
    /* 00514cb5: mov ecx, eax */ r_ecx = r_eax;
    /* 00514cb7: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x514cbcu); f_004c6cb0();
    /* 00514cbc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514cbf: jne 0x5152fb */ if (!fZ) goto L_005152fb;
L_00514cc5:; BB(0x00514cc5);
    /* 00514cc5: cmp dword ptr [0x793064], 7 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514ccc: jne 0x514e7c */ if (!fZ) goto L_00514e7c;
L_00514cd2:; BB(0x00514cd2);
    /* 00514cd2: lea ecx, [ebp - 0x3c0] */ r_ecx = (u32)(r_ebp+0xfffffc40u);
    /* 00514cd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514cd9: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 00514cdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514ce0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514ce6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514cebu); f_0047e390();
    /* 00514ceb: mov ecx, eax */ r_ecx = r_eax;
    /* 00514ced: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x514cf2u); f_004c7c40();
    /* 00514cf2: mov dword ptr [ebp - 0x638], eax */ W32((u32)(r_ebp+0xfffff9c8u), r_eax);
    /* 00514cf8: mov eax, dword ptr [ebp - 0x638] */ r_eax = R32((u32)(r_ebp+0xfffff9c8u));
    /* 00514cfe: mov dword ptr [ebp - 0x63c], eax */ W32((u32)(r_ebp+0xfffff9c4u), r_eax);
    /* 00514d04: mov dword ptr [ebp - 4], 0x3f */ W32((u32)(r_ebp+0xfffffffcu), 0x3fu);
    /* 00514d0b: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514d11: or ecx, 0x400000 */ {  u32 a = r_ecx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00514d17: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 00514d1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d2b: lea edx, [ebp - 0x3c4] */ r_edx = (u32)(r_ebp+0xfffffc3cu);
    /* 00514d31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514d32: mov ecx, dword ptr [ebp - 0x63c] */ r_ecx = R32((u32)(r_ebp+0xfffff9c4u));
    /* 00514d38: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x514d3du); f_00485940();
    /* 00514d3d: mov dword ptr [ebp - 0x640], eax */ W32((u32)(r_ebp+0xfffff9c0u), r_eax);
    /* 00514d43: mov eax, dword ptr [ebp - 0x640] */ r_eax = R32((u32)(r_ebp+0xfffff9c0u));
    /* 00514d49: mov dword ptr [ebp - 0x644], eax */ W32((u32)(r_ebp+0xfffff9bcu), r_eax);
    /* 00514d4f: mov dword ptr [ebp - 4], 0x40 */ W32((u32)(r_ebp+0xfffffffcu), 0x40u);
    /* 00514d56: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514d5c: or ecx, 0x800000 */ {  u32 a = r_ecx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00514d62: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 00514d68: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 00514d6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514d6f: lea eax, [ebp - 0x3c5] */ r_eax = (u32)(r_ebp+0xfffffc3bu);
    /* 00514d75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514d76: mov ecx, dword ptr [ebp - 0x644] */ r_ecx = R32((u32)(r_ebp+0xfffff9bcu));
    /* 00514d7c: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x514d81u); f_004a2160();
    /* 00514d81: mov ecx, eax */ r_ecx = r_eax;
    /* 00514d83: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x514d88u); f_004a1f00();
    /* 00514d88: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00514d8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514d8d: je 0x514dc8 */ if (fZ) goto L_00514dc8;
L_00514d8f:; BB(0x00514d8f);
    /* 00514d8f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d91: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514d96u); f_0062fbf0();
    /* 00514d96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514d9b: jne 0x514dc8 */ if (!fZ) goto L_00514dc8;
L_00514d9d:; BB(0x00514d9d);
    /* 00514d9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514da3: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x514da8u); f_0047e190();
    /* 00514da8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514dab: je 0x514dc8 */ if (fZ) goto L_00514dc8;
L_00514dad:; BB(0x00514dad);
    /* 00514dad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514db3: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x514db8u); f_0047d6f0();
    /* 00514db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514dba: jne 0x514dc8 */ if (!fZ) goto L_00514dc8;
L_00514dbc:; BB(0x00514dbc);
    /* 00514dbc: mov dword ptr [ebp - 0x648], 1 */ W32((u32)(r_ebp+0xfffff9b8u), 0x1u);
    /* 00514dc6: jmp 0x514dd2 */ goto L_00514dd2;
L_00514dc8:; BB(0x00514dc8);
    /* 00514dc8: mov dword ptr [ebp - 0x648], 0 */ W32((u32)(r_ebp+0xfffff9b8u), 0x0u);
L_00514dd2:; BB(0x00514dd2);
    /* 00514dd2: mov dl, byte ptr [ebp - 0x648] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff9b8u))) & 0xffu);
    /* 00514dd8: mov byte ptr [ebp - 0x3b5], dl */ W8((u32)(r_ebp+0xfffffc4bu), (u8)r_edx);
    /* 00514dde: mov dword ptr [ebp - 4], 0x3f */ W32((u32)(r_ebp+0xfffffffcu), 0x3fu);
    /* 00514de5: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514deb: and eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00514df0: je 0x514e07 */ if (fZ) goto L_00514e07;
L_00514df2:; BB(0x00514df2);
    /* 00514df2: and dword ptr [ebp - 0x4ac], 0xff7fffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00514dfc: lea ecx, [ebp - 0x3c4] */ r_ecx = (u32)(r_ebp+0xfffffc3cu);
    /* 00514e02: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x514e07u); f_004a20f0();
L_00514e07:; BB(0x00514e07);
    /* 00514e07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00514e0e: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514e14: and ecx, 0x400000 */ {  u32 a = r_ecx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00514e1a: je 0x514e31 */ if (fZ) goto L_00514e31;
L_00514e1c:; BB(0x00514e1c);
    /* 00514e1c: and dword ptr [ebp - 0x4ac], 0xffbfffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00514e26: lea ecx, [ebp - 0x3c0] */ r_ecx = (u32)(r_ebp+0xfffffc40u);
    /* 00514e2c: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x514e31u); f_00484470();
L_00514e31:; BB(0x00514e31);
    /* 00514e31: movzx edx, byte ptr [ebp - 0x3b5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffc4bu));
    /* 00514e38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e3a: je 0x514e5b */ if (fZ) goto L_00514e5b;
L_00514e3c:; BB(0x00514e3c);
    /* 00514e3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00514e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514e40: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 00514e46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e47: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514e4d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514e52u); f_0047e390();
    /* 00514e52: mov ecx, eax */ r_ecx = r_eax;
    /* 00514e54: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x514e59u); f_004ccba0();
    /* 00514e59: jmp 0x514e77 */ goto L_00514e77;
L_00514e5b:; BB(0x00514e5b);
    /* 00514e5b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00514e5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e5f: mov eax, dword ptr [0x793068] */ r_eax = R32((u32)(0x793068u));
    /* 00514e64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514e65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514e6b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514e70u); f_0047e390();
    /* 00514e70: mov ecx, eax */ r_ecx = r_eax;
    /* 00514e72: call 0x4ccb20 */ r_esp -= 4; W32(r_esp, 0x514e77u); f_004ccb20();
L_00514e77:; BB(0x00514e77);
    /* 00514e77: jmp 0x5152f6 */ goto L_005152f6;
L_00514e7c:; BB(0x00514e7c);
    /* 00514e7c: cmp dword ptr [0x793064], 0xa */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e83: jne 0x515033 */ if (!fZ) goto L_00515033;
L_00514e89:; BB(0x00514e89);
    /* 00514e89: lea ecx, [ebp - 0x3d0] */ r_ecx = (u32)(r_ebp+0xfffffc30u);
    /* 00514e8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e90: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 00514e96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514e9d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x514ea2u); f_0047e390();
    /* 00514ea2: mov ecx, eax */ r_ecx = r_eax;
    /* 00514ea4: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x514ea9u); f_004c7c40();
    /* 00514ea9: mov dword ptr [ebp - 0x64c], eax */ W32((u32)(r_ebp+0xfffff9b4u), r_eax);
    /* 00514eaf: mov eax, dword ptr [ebp - 0x64c] */ r_eax = R32((u32)(r_ebp+0xfffff9b4u));
    /* 00514eb5: mov dword ptr [ebp - 0x650], eax */ W32((u32)(r_ebp+0xfffff9b0u), r_eax);
    /* 00514ebb: mov dword ptr [ebp - 4], 0x41 */ W32((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 00514ec2: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514ec8: or ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00514ece: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 00514ed4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ed6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ed8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514eda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514edc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ede: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ee0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ee2: lea edx, [ebp - 0x3d4] */ r_edx = (u32)(r_ebp+0xfffffc2cu);
    /* 00514ee8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514ee9: mov ecx, dword ptr [ebp - 0x650] */ r_ecx = R32((u32)(r_ebp+0xfffff9b0u));
    /* 00514eef: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x514ef4u); f_00485940();
    /* 00514ef4: mov dword ptr [ebp - 0x654], eax */ W32((u32)(r_ebp+0xfffff9acu), r_eax);
    /* 00514efa: mov eax, dword ptr [ebp - 0x654] */ r_eax = R32((u32)(r_ebp+0xfffff9acu));
    /* 00514f00: mov dword ptr [ebp - 0x658], eax */ W32((u32)(r_ebp+0xfffff9a8u), r_eax);
    /* 00514f06: mov dword ptr [ebp - 4], 0x42 */ W32((u32)(r_ebp+0xfffffffcu), 0x42u);
    /* 00514f0d: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514f13: or ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00514f19: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 00514f1f: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 00514f25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514f26: lea eax, [ebp - 0x3d5] */ r_eax = (u32)(r_ebp+0xfffffc2bu);
    /* 00514f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514f2d: mov ecx, dword ptr [ebp - 0x658] */ r_ecx = R32((u32)(r_ebp+0xfffff9a8u));
    /* 00514f33: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x514f38u); f_004a2160();
    /* 00514f38: mov ecx, eax */ r_ecx = r_eax;
    /* 00514f3a: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x514f3fu); f_004a1f00();
    /* 00514f3f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00514f42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f44: je 0x514f7f */ if (fZ) goto L_00514f7f;
L_00514f46:; BB(0x00514f46);
    /* 00514f46: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f48: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x514f4du); f_0062fbf0();
    /* 00514f4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514f50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f52: jne 0x514f7f */ if (!fZ) goto L_00514f7f;
L_00514f54:; BB(0x00514f54);
    /* 00514f54: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514f5a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x514f5fu); f_0047e190();
    /* 00514f5f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f62: je 0x514f7f */ if (fZ) goto L_00514f7f;
L_00514f64:; BB(0x00514f64);
    /* 00514f64: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00514f6a: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x514f6fu); f_0047d6f0();
    /* 00514f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f71: jne 0x514f7f */ if (!fZ) goto L_00514f7f;
L_00514f73:; BB(0x00514f73);
    /* 00514f73: mov dword ptr [ebp - 0x65c], 1 */ W32((u32)(r_ebp+0xfffff9a4u), 0x1u);
    /* 00514f7d: jmp 0x514f89 */ goto L_00514f89;
L_00514f7f:; BB(0x00514f7f);
    /* 00514f7f: mov dword ptr [ebp - 0x65c], 0 */ W32((u32)(r_ebp+0xfffff9a4u), 0x0u);
L_00514f89:; BB(0x00514f89);
    /* 00514f89: mov dl, byte ptr [ebp - 0x65c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff9a4u))) & 0xffu);
    /* 00514f8f: mov byte ptr [ebp - 0x3c6], dl */ W8((u32)(r_ebp+0xfffffc3au), (u8)r_edx);
    /* 00514f95: mov dword ptr [ebp - 4], 0x41 */ W32((u32)(r_ebp+0xfffffffcu), 0x41u);
    /* 00514f9c: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514fa2: and eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00514fa7: je 0x514fbe */ if (fZ) goto L_00514fbe;
L_00514fa9:; BB(0x00514fa9);
    /* 00514fa9: and dword ptr [ebp - 0x4ac], 0xfdffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00514fb3: lea ecx, [ebp - 0x3d4] */ r_ecx = (u32)(r_ebp+0xfffffc2cu);
    /* 00514fb9: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x514fbeu); f_004a20f0();
L_00514fbe:; BB(0x00514fbe);
    /* 00514fbe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00514fc5: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00514fcb: and ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00514fd1: je 0x514fe8 */ if (fZ) goto L_00514fe8;
L_00514fd3:; BB(0x00514fd3);
    /* 00514fd3: and dword ptr [ebp - 0x4ac], 0xfeffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00514fdd: lea ecx, [ebp - 0x3d0] */ r_ecx = (u32)(r_ebp+0xfffffc30u);
    /* 00514fe3: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x514fe8u); f_00484470();
L_00514fe8:; BB(0x00514fe8);
    /* 00514fe8: movzx edx, byte ptr [ebp - 0x3c6] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffc3au));
    /* 00514fef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514ff1: je 0x515012 */ if (fZ) goto L_00515012;
L_00514ff3:; BB(0x00514ff3);
    /* 00514ff3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00514ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514ff7: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 00514ffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514ffe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515004: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515009u); f_0047e390();
    /* 00515009: mov ecx, eax */ r_ecx = r_eax;
    /* 0051500b: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x515010u); f_004ccba0();
    /* 00515010: jmp 0x51502e */ goto L_0051502e;
L_00515012:; BB(0x00515012);
    /* 00515012: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515015: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515016: mov eax, dword ptr [0x793068] */ r_eax = R32((u32)(0x793068u));
    /* 0051501b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051501c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515022: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515027u); f_0047e390();
    /* 00515027: mov ecx, eax */ r_ecx = r_eax;
    /* 00515029: call 0x4ccc20 */ r_esp -= 4; W32(r_esp, 0x51502eu); f_004ccc20();
L_0051502e:; BB(0x0051502e);
    /* 0051502e: jmp 0x5152f6 */ goto L_005152f6;
L_00515033:; BB(0x00515033);
    /* 00515033: cmp dword ptr [0x793064], 9 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051503a: jne 0x5151ea */ if (!fZ) goto L_005151ea;
L_00515040:; BB(0x00515040);
    /* 00515040: lea ecx, [ebp - 0x3e0] */ r_ecx = (u32)(r_ebp+0xfffffc20u);
    /* 00515046: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515047: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 0051504d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051504e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515054: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515059u); f_0047e390();
    /* 00515059: mov ecx, eax */ r_ecx = r_eax;
    /* 0051505b: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515060u); f_004c7c40();
    /* 00515060: mov dword ptr [ebp - 0x660], eax */ W32((u32)(r_ebp+0xfffff9a0u), r_eax);
    /* 00515066: mov eax, dword ptr [ebp - 0x660] */ r_eax = R32((u32)(r_ebp+0xfffff9a0u));
    /* 0051506c: mov dword ptr [ebp - 0x664], eax */ W32((u32)(r_ebp+0xfffff99cu), r_eax);
    /* 00515072: mov dword ptr [ebp - 4], 0x43 */ W32((u32)(r_ebp+0xfffffffcu), 0x43u);
    /* 00515079: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0051507f: or ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00515085: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0051508b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051508d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051508f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515091: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515093: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515095: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515097: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515099: lea edx, [ebp - 0x3e4] */ r_edx = (u32)(r_ebp+0xfffffc1cu);
    /* 0051509f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005150a0: mov ecx, dword ptr [ebp - 0x664] */ r_ecx = R32((u32)(r_ebp+0xfffff99cu));
    /* 005150a6: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5150abu); f_00485940();
    /* 005150ab: mov dword ptr [ebp - 0x668], eax */ W32((u32)(r_ebp+0xfffff998u), r_eax);
    /* 005150b1: mov eax, dword ptr [ebp - 0x668] */ r_eax = R32((u32)(r_ebp+0xfffff998u));
    /* 005150b7: mov dword ptr [ebp - 0x66c], eax */ W32((u32)(r_ebp+0xfffff994u), r_eax);
    /* 005150bd: mov dword ptr [ebp - 4], 0x44 */ W32((u32)(r_ebp+0xfffffffcu), 0x44u);
    /* 005150c4: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 005150ca: or ecx, 0x8000000 */ {  u32 a = r_ecx; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005150d0: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 005150d6: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 005150dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005150dd: lea eax, [ebp - 0x3e5] */ r_eax = (u32)(r_ebp+0xfffffc1bu);
    /* 005150e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005150e4: mov ecx, dword ptr [ebp - 0x66c] */ r_ecx = R32((u32)(r_ebp+0xfffff994u));
    /* 005150ea: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x5150efu); f_004a2160();
    /* 005150ef: mov ecx, eax */ r_ecx = r_eax;
    /* 005150f1: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x5150f6u); f_004a1f00();
    /* 005150f6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005150f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005150fb: je 0x515136 */ if (fZ) goto L_00515136;
L_005150fd:; BB(0x005150fd);
    /* 005150fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005150ff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515104u); f_0062fbf0();
    /* 00515104: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515109: jne 0x515136 */ if (!fZ) goto L_00515136;
L_0051510b:; BB(0x0051510b);
    /* 0051510b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515111: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x515116u); f_0047e190();
    /* 00515116: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515119: je 0x515136 */ if (fZ) goto L_00515136;
L_0051511b:; BB(0x0051511b);
    /* 0051511b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515121: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x515126u); f_0047d6f0();
    /* 00515126: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515128: jne 0x515136 */ if (!fZ) goto L_00515136;
L_0051512a:; BB(0x0051512a);
    /* 0051512a: mov dword ptr [ebp - 0x670], 1 */ W32((u32)(r_ebp+0xfffff990u), 0x1u);
    /* 00515134: jmp 0x515140 */ goto L_00515140;
L_00515136:; BB(0x00515136);
    /* 00515136: mov dword ptr [ebp - 0x670], 0 */ W32((u32)(r_ebp+0xfffff990u), 0x0u);
L_00515140:; BB(0x00515140);
    /* 00515140: mov dl, byte ptr [ebp - 0x670] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff990u))) & 0xffu);
    /* 00515146: mov byte ptr [ebp - 0x3d6], dl */ W8((u32)(r_ebp+0xfffffc2au), (u8)r_edx);
    /* 0051514c: mov dword ptr [ebp - 4], 0x43 */ W32((u32)(r_ebp+0xfffffffcu), 0x43u);
    /* 00515153: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 00515159: and eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0051515e: je 0x515175 */ if (fZ) goto L_00515175;
L_00515160:; BB(0x00515160);
    /* 00515160: and dword ptr [ebp - 0x4ac], 0xf7ffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0051516a: lea ecx, [ebp - 0x3e4] */ r_ecx = (u32)(r_ebp+0xfffffc1cu);
    /* 00515170: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x515175u); f_004a20f0();
L_00515175:; BB(0x00515175);
    /* 00515175: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051517c: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00515182: and ecx, 0x4000000 */ {  u32 a = r_ecx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00515188: je 0x51519f */ if (fZ) goto L_0051519f;
L_0051518a:; BB(0x0051518a);
    /* 0051518a: and dword ptr [ebp - 0x4ac], 0xfbffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515194: lea ecx, [ebp - 0x3e0] */ r_ecx = (u32)(r_ebp+0xfffffc20u);
    /* 0051519a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x51519fu); f_00484470();
L_0051519f:; BB(0x0051519f);
    /* 0051519f: movzx edx, byte ptr [ebp - 0x3d6] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffc2au));
    /* 005151a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005151a8: je 0x5151c9 */ if (fZ) goto L_005151c9;
L_005151aa:; BB(0x005151aa);
    /* 005151aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005151ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005151ae: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 005151b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005151b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005151bb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5151c0u); f_0047e390();
    /* 005151c0: mov ecx, eax */ r_ecx = r_eax;
    /* 005151c2: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x5151c7u); f_004ccba0();
    /* 005151c7: jmp 0x5151e5 */ goto L_005151e5;
L_005151c9:; BB(0x005151c9);
    /* 005151c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005151cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005151cd: mov eax, dword ptr [0x793068] */ r_eax = R32((u32)(0x793068u));
    /* 005151d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005151d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005151d9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5151deu); f_0047e390();
    /* 005151de: mov ecx, eax */ r_ecx = r_eax;
    /* 005151e0: call 0x4ccbe0 */ r_esp -= 4; W32(r_esp, 0x5151e5u); f_004ccbe0();
L_005151e5:; BB(0x005151e5);
    /* 005151e5: jmp 0x5152f6 */ goto L_005152f6;
L_005151ea:; BB(0x005151ea);
    /* 005151ea: cmp dword ptr [0x793064], 0xb */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005151f1: jne 0x515215 */ if (!fZ) goto L_00515215;
L_005151f3:; BB(0x005151f3);
    /* 005151f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005151f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005151f7: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 005151fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005151fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515204: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515209u); f_0047e390();
    /* 00515209: mov ecx, eax */ r_ecx = r_eax;
    /* 0051520b: call 0x4ccb60 */ r_esp -= 4; W32(r_esp, 0x515210u); f_004ccb60();
    /* 00515210: jmp 0x5152f6 */ goto L_005152f6;
L_00515215:; BB(0x00515215);
    /* 00515215: cmp dword ptr [0x793064], 0xc */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051521c: jne 0x515240 */ if (!fZ) goto L_00515240;
L_0051521e:; BB(0x0051521e);
    /* 0051521e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515221: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515222: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 00515228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515229: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051522f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515234u); f_0047e390();
    /* 00515234: mov ecx, eax */ r_ecx = r_eax;
    /* 00515236: call 0x4ccde0 */ r_esp -= 4; W32(r_esp, 0x51523bu); f_004ccde0();
    /* 0051523b: jmp 0x5152f6 */ goto L_005152f6;
L_00515240:; BB(0x00515240);
    /* 00515240: cmp dword ptr [0x793064], 0xf */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515247: jne 0x51526a */ if (!fZ) goto L_0051526a;
L_00515249:; BB(0x00515249);
    /* 00515249: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051524c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051524d: mov eax, dword ptr [0x793068] */ r_eax = R32((u32)(0x793068u));
    /* 00515252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515253: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515259: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51525eu); f_0047e390();
    /* 0051525e: mov ecx, eax */ r_ecx = r_eax;
    /* 00515260: call 0x4ccf80 */ r_esp -= 4; W32(r_esp, 0x515265u); f_004ccf80();
    /* 00515265: jmp 0x5152f6 */ goto L_005152f6;
L_0051526a:; BB(0x0051526a);
    /* 0051526a: cmp dword ptr [0x793064], 0x10 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515271: jne 0x515292 */ if (!fZ) goto L_00515292;
L_00515273:; BB(0x00515273);
    /* 00515273: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515276: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515277: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 0051527d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051527e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515284: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515289u); f_0047e390();
    /* 00515289: mov ecx, eax */ r_ecx = r_eax;
    /* 0051528b: call 0x4cd280 */ r_esp -= 4; W32(r_esp, 0x515290u); f_004cd280();
    /* 00515290: jmp 0x5152f6 */ goto L_005152f6;
L_00515292:; BB(0x00515292);
    /* 00515292: cmp dword ptr [0x793064], 0xd */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515299: jne 0x5152ba */ if (!fZ) goto L_005152ba;
L_0051529b:; BB(0x0051529b);
    /* 0051529b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051529e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051529f: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 005152a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005152a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005152ac: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5152b1u); f_0047e390();
    /* 005152b1: mov ecx, eax */ r_ecx = r_eax;
    /* 005152b3: call 0x4ccfc0 */ r_esp -= 4; W32(r_esp, 0x5152b8u); f_004ccfc0();
    /* 005152b8: jmp 0x5152f6 */ goto L_005152f6;
L_005152ba:; BB(0x005152ba);
    /* 005152ba: cmp dword ptr [0x793064], 0xe */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005152c1: jne 0x5152e1 */ if (!fZ) goto L_005152e1;
L_005152c3:; BB(0x005152c3);
    /* 005152c3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005152c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005152c7: mov eax, dword ptr [0x793068] */ r_eax = R32((u32)(0x793068u));
    /* 005152cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005152cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005152d3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5152d8u); f_0047e390();
    /* 005152d8: mov ecx, eax */ r_ecx = r_eax;
    /* 005152da: call 0x4cd2b0 */ r_esp -= 4; W32(r_esp, 0x5152dfu); f_004cd2b0();
    /* 005152df: jmp 0x5152f6 */ goto L_005152f6;
L_005152e1:; BB(0x005152e1);
    /* 005152e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005152e3: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005152e9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005152eb: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 005152f1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005152f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5152f6u); call_ind(t); }
L_005152f6:; BB(0x005152f6);
    /* 005152f6: jmp 0x516a92 */ goto L_00516a92;
L_005152fb:; BB(0x005152fb);
    /* 005152fb: mov ecx, dword ptr [0x793068] */ r_ecx = R32((u32)(0x793068u));
    /* 00515301: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515302: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515308: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51530du); f_0047e390();
    /* 0051530d: mov ecx, eax */ r_ecx = r_eax;
    /* 0051530f: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x515314u); f_004c6cb0();
    /* 00515314: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515317: jne 0x516a7d */ if (!fZ) goto L_00516a7d;
L_0051531d:; BB(0x0051531d);
    /* 0051531d: mov dword ptr [ebp - 0x220], 0 */ W32((u32)(r_ebp+0xfffffde0u), 0x0u);
    /* 00515327: mov dword ptr [ebp - 0x21c], 0 */ W32((u32)(r_ebp+0xfffffde4u), 0x0u);
    /* 00515331: mov word ptr [0x793118], 0 */ W16((u32)(0x793118u), 0x0u);
    /* 0051533a: jmp 0x51534e */ goto L_0051534e;
L_0051533c:; BB(0x0051533c);
    /* 0051533c: mov dx, word ptr [0x793118] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x793118u))) & 0xffffu);
    /* 00515343: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00515347: mov word ptr [0x793118], dx */ W16((u32)(0x793118u), (u16)r_edx);
L_0051534e:; BB(0x0051534e);
    /* 0051534e: movsx esi, word ptr [0x793118] */ r_esi = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00515355: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051535b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x515360u); f_0047f950();
    /* 00515360: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515362: jge 0x5153c5 */ if ((fS==fO)) goto L_005153c5;
L_00515364:; BB(0x00515364);
    /* 00515364: movsx eax, word ptr [0x793118] */ r_eax = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 0051536b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051536c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515372: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515377u); f_0047e390();
    /* 00515377: mov ecx, eax */ r_ecx = r_eax;
    /* 00515379: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51537eu); f_004c6cb0();
    /* 0051537e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515381: jne 0x5153c0 */ if (!fZ) goto L_005153c0;
L_00515383:; BB(0x00515383);
    /* 00515383: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 00515389: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051538c: mov dword ptr [ebp - 0x21c], ecx */ W32((u32)(r_ebp+0xfffffde4u), r_ecx);
    /* 00515392: movsx edx, word ptr [0x793118] */ r_edx = (u32)(i32)(i16)R16((u32)(0x793118u));
    /* 00515399: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051539a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005153a0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5153a5u); f_0047e390();
    /* 005153a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005153a7: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5153acu); f_004c7010();
    /* 005153ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005153af: jne 0x5153c0 */ if (!fZ) goto L_005153c0;
L_005153b1:; BB(0x005153b1);
    /* 005153b1: mov eax, dword ptr [ebp - 0x220] */ r_eax = R32((u32)(r_ebp+0xfffffde0u));
    /* 005153b7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005153ba: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
L_005153c0:; BB(0x005153c0);
    /* 005153c0: jmp 0x51533c */ goto L_0051533c;
L_005153c5:; BB(0x005153c5);
    /* 005153c5: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005153cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005153cc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5153d1u); f_0062fbf0();
    /* 005153d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005153d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005153d7: mov dword ptr [ebp - 0x218], eax */ W32((u32)(r_ebp+0xfffffde8u), r_eax);
    /* 005153dd: mov dword ptr [ebp - 0x208], 0 */ W32((u32)(r_ebp+0xfffffdf8u), 0x0u);
    /* 005153e7: mov dword ptr [ebp - 0x210], 0 */ W32((u32)(r_ebp+0xfffffdf0u), 0x0u);
L_005153f1:; BB(0x005153f1);
    /* 005153f1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005153f7: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5153fcu); f_0047f950();
    /* 005153fc: cmp dword ptr [ebp - 0x208], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffdf8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515402: jge 0x5154a9 */ if ((fS==fO)) goto L_005154a9;
L_00515408:; BB(0x00515408);
    /* 00515408: mov edx, dword ptr [ebp - 0x210] */ r_edx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0051540e: cmp edx, dword ptr [ebp - 0x218] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffde8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515414: jge 0x5154a9 */ if ((fS==fO)) goto L_005154a9;
L_0051541a:; BB(0x0051541a);
    /* 0051541a: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 00515420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515421: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515427: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51542cu); f_0047e390();
    /* 0051542c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051542e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x515433u); f_004c6cb0();
    /* 00515433: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515436: jne 0x515495 */ if (!fZ) goto L_00515495;
L_00515438:; BB(0x00515438);
    /* 00515438: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 0051543e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051543f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515445: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51544au); f_0047e390();
    /* 0051544a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051544c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x515451u); f_004c7010();
    /* 00515451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515454: jne 0x515484 */ if (!fZ) goto L_00515484;
L_00515456:; BB(0x00515456);
    /* 00515456: mov edx, dword ptr [ebp - 0x210] */ r_edx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0051545c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051545f: mov dword ptr [ebp - 0x210], edx */ W32((u32)(r_ebp+0xfffffdf0u), r_edx);
    /* 00515465: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0051546b: cmp eax, dword ptr [ebp - 0x218] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffde8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515471: jge 0x515482 */ if ((fS==fO)) goto L_00515482;
L_00515473:; BB(0x00515473);
    /* 00515473: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 00515479: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051547c: mov dword ptr [ebp - 0x208], ecx */ W32((u32)(r_ebp+0xfffffdf8u), r_ecx);
L_00515482:; BB(0x00515482);
    /* 00515482: jmp 0x515493 */ goto L_00515493;
L_00515484:; BB(0x00515484);
    /* 00515484: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 0051548a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051548d: mov dword ptr [ebp - 0x208], edx */ W32((u32)(r_ebp+0xfffffdf8u), r_edx);
L_00515493:; BB(0x00515493);
    /* 00515493: jmp 0x5154a4 */ goto L_005154a4;
L_00515495:; BB(0x00515495);
    /* 00515495: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 0051549b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051549e: mov dword ptr [ebp - 0x208], eax */ W32((u32)(r_ebp+0xfffffdf8u), r_eax);
L_005154a4:; BB(0x005154a4);
    /* 005154a4: jmp 0x5153f1 */ goto L_005153f1;
L_005154a9:; BB(0x005154a9);
    /* 005154a9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005154af: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5154b4u); f_0047f950();
    /* 005154b4: cmp dword ptr [ebp - 0x208], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffdf8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005154ba: jge 0x51550d */ if ((fS==fO)) goto L_0051550d;
L_005154bc:; BB(0x005154bc);
    /* 005154bc: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005154c2: mov dword ptr [ebp - 0x20c], ecx */ W32((u32)(r_ebp+0xfffffdf4u), r_ecx);
    /* 005154c8: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005154ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005154cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005154d5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5154dau); f_0047e390();
    /* 005154da: mov dword ptr [ebp - 0x224], eax */ W32((u32)(r_ebp+0xfffffddcu), r_eax);
    /* 005154e0: cmp dword ptr [ebp - 0x224], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffddcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005154e7: je 0x51550b */ if (fZ) goto L_0051550b;
L_005154e9:; BB(0x005154e9);
    /* 005154e9: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 005154ef: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005154f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005154f3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5154f8u); f_005dcb00();
    /* 005154f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005154fb: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005154ff: je 0x51550b */ if (fZ) goto L_0051550b;
L_00515501:; BB(0x00515501);
    /* 00515501: mov dword ptr [ebp - 0x20c], 0xffffffff */ W32((u32)(r_ebp+0xfffffdf4u), 0xffffffffu);
L_0051550b:; BB(0x0051550b);
    /* 0051550b: jmp 0x515517 */ goto L_00515517;
L_0051550d:; BB(0x0051550d);
    /* 0051550d: mov dword ptr [ebp - 0x20c], 0xffffffff */ W32((u32)(r_ebp+0xfffffdf4u), 0xffffffffu);
L_00515517:; BB(0x00515517);
    /* 00515517: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0051551d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051551e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515523u); f_0062fbf0();
    /* 00515523: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515526: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00515529: mov dword ptr [ebp - 0x204], eax */ W32((u32)(r_ebp+0xfffffdfcu), r_eax);
    /* 0051552f: mov dword ptr [ebp - 0x208], 0 */ W32((u32)(r_ebp+0xfffffdf8u), 0x0u);
    /* 00515539: mov dword ptr [ebp - 0x210], 0 */ W32((u32)(r_ebp+0xfffffdf0u), 0x0u);
L_00515543:; BB(0x00515543);
    /* 00515543: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515549: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x51554eu); f_0047f950();
    /* 0051554e: cmp dword ptr [ebp - 0x208], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffdf8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515554: jge 0x5155c1 */ if ((fS==fO)) goto L_005155c1;
L_00515556:; BB(0x00515556);
    /* 00515556: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0051555c: cmp eax, dword ptr [ebp - 0x204] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdfcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515562: jge 0x5155c1 */ if ((fS==fO)) goto L_005155c1;
L_00515564:; BB(0x00515564);
    /* 00515564: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 0051556a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051556b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515571: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515576u); f_0047e390();
    /* 00515576: mov ecx, eax */ r_ecx = r_eax;
    /* 00515578: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x51557du); f_004c6cb0();
    /* 0051557d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515580: jne 0x5155b0 */ if (!fZ) goto L_005155b0;
L_00515582:; BB(0x00515582);
    /* 00515582: mov edx, dword ptr [ebp - 0x210] */ r_edx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 00515588: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051558b: mov dword ptr [ebp - 0x210], edx */ W32((u32)(r_ebp+0xfffffdf0u), r_edx);
    /* 00515591: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 00515597: cmp eax, dword ptr [ebp - 0x204] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdfcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051559d: jge 0x5155ae */ if ((fS==fO)) goto L_005155ae;
L_0051559f:; BB(0x0051559f);
    /* 0051559f: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005155a5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005155a8: mov dword ptr [ebp - 0x208], ecx */ W32((u32)(r_ebp+0xfffffdf8u), r_ecx);
L_005155ae:; BB(0x005155ae);
    /* 005155ae: jmp 0x5155bf */ goto L_005155bf;
L_005155b0:; BB(0x005155b0);
    /* 005155b0: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005155b6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005155b9: mov dword ptr [ebp - 0x208], edx */ W32((u32)(r_ebp+0xfffffdf8u), r_edx);
L_005155bf:; BB(0x005155bf);
    /* 005155bf: jmp 0x515543 */ goto L_00515543;
L_005155c1:; BB(0x005155c1);
    /* 005155c1: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 005155cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005155d1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5155d6u); f_0047f950();
    /* 005155d6: cmp dword ptr [ebp - 0x208], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffdf8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005155dc: jge 0x5155ec */ if ((fS==fO)) goto L_005155ec;
L_005155de:; BB(0x005155de);
    /* 005155de: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005155e4: mov dword ptr [ebp - 0x214], eax */ W32((u32)(r_ebp+0xfffffdecu), r_eax);
    /* 005155ea: jmp 0x5155f6 */ goto L_005155f6;
L_005155ec:; BB(0x005155ec);
    /* 005155ec: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_005155f6:; BB(0x005155f6);
    /* 005155f6: cmp dword ptr [0x793064], 7 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005155fd: jne 0x515e0f */ if (!fZ) goto L_00515e0f;
L_00515603:; BB(0x00515603);
    /* 00515603: lea ecx, [ebp - 0x3f0] */ r_ecx = (u32)(r_ebp+0xfffffc10u);
    /* 00515609: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051560a: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 00515610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515611: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515617: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51561cu); f_0047e390();
    /* 0051561c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051561e: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515623u); f_004c7c40();
    /* 00515623: mov dword ptr [ebp - 0x674], eax */ W32((u32)(r_ebp+0xfffff98cu), r_eax);
    /* 00515629: mov eax, dword ptr [ebp - 0x674] */ r_eax = R32((u32)(r_ebp+0xfffff98cu));
    /* 0051562f: mov dword ptr [ebp - 0x678], eax */ W32((u32)(r_ebp+0xfffff988u), r_eax);
    /* 00515635: mov dword ptr [ebp - 4], 0x45 */ W32((u32)(r_ebp+0xfffffffcu), 0x45u);
    /* 0051563c: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00515642: or ecx, 0x10000000 */ {  u32 a = r_ecx; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00515648: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 0051564e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515650: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515652: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515654: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515656: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515658: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051565a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051565c: lea edx, [ebp - 0x3f4] */ r_edx = (u32)(r_ebp+0xfffffc0cu);
    /* 00515662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515663: mov ecx, dword ptr [ebp - 0x678] */ r_ecx = R32((u32)(r_ebp+0xfffff988u));
    /* 00515669: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x51566eu); f_00485940();
    /* 0051566e: mov dword ptr [ebp - 0x67c], eax */ W32((u32)(r_ebp+0xfffff984u), r_eax);
    /* 00515674: mov eax, dword ptr [ebp - 0x67c] */ r_eax = R32((u32)(r_ebp+0xfffff984u));
    /* 0051567a: mov dword ptr [ebp - 0x680], eax */ W32((u32)(r_ebp+0xfffff980u), r_eax);
    /* 00515680: mov dword ptr [ebp - 4], 0x46 */ W32((u32)(r_ebp+0xfffffffcu), 0x46u);
    /* 00515687: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 0051568d: or ecx, 0x20000000 */ {  u32 a = r_ecx; u32 b = 0x20000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00515693: mov dword ptr [ebp - 0x4ac], ecx */ W32((u32)(r_ebp+0xfffffb54u), r_ecx);
    /* 00515699: mov edx, dword ptr [0x7913a0] */ r_edx = R32((u32)(0x7913a0u));
    /* 0051569f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005156a0: lea eax, [ebp - 0x3f5] */ r_eax = (u32)(r_ebp+0xfffffc0bu);
    /* 005156a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005156a7: mov ecx, dword ptr [ebp - 0x680] */ r_ecx = R32((u32)(r_ebp+0xfffff980u));
    /* 005156ad: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x5156b2u); f_004a2160();
    /* 005156b2: mov ecx, eax */ r_ecx = r_eax;
    /* 005156b4: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x5156b9u); f_004a1f00();
    /* 005156b9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005156bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005156be: je 0x5156eb */ if (fZ) goto L_005156eb;
L_005156c0:; BB(0x005156c0);
    /* 005156c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005156c6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5156cbu); f_0047e190();
    /* 005156cb: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005156ce: je 0x5156eb */ if (fZ) goto L_005156eb;
L_005156d0:; BB(0x005156d0);
    /* 005156d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005156d6: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x5156dbu); f_0047d6f0();
    /* 005156db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005156dd: jne 0x5156eb */ if (!fZ) goto L_005156eb;
L_005156df:; BB(0x005156df);
    /* 005156df: mov dword ptr [ebp - 0x684], 1 */ W32((u32)(r_ebp+0xfffff97cu), 0x1u);
    /* 005156e9: jmp 0x5156f5 */ goto L_005156f5;
L_005156eb:; BB(0x005156eb);
    /* 005156eb: mov dword ptr [ebp - 0x684], 0 */ W32((u32)(r_ebp+0xfffff97cu), 0x0u);
L_005156f5:; BB(0x005156f5);
    /* 005156f5: mov dl, byte ptr [ebp - 0x684] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff97cu))) & 0xffu);
    /* 005156fb: mov byte ptr [ebp - 0x3e6], dl */ W8((u32)(r_ebp+0xfffffc1au), (u8)r_edx);
    /* 00515701: mov dword ptr [ebp - 4], 0x45 */ W32((u32)(r_ebp+0xfffffffcu), 0x45u);
    /* 00515708: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 0051570e: and eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00515713: je 0x51572a */ if (fZ) goto L_0051572a;
L_00515715:; BB(0x00515715);
    /* 00515715: and dword ptr [ebp - 0x4ac], 0xdfffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xdfffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0051571f: lea ecx, [ebp - 0x3f4] */ r_ecx = (u32)(r_ebp+0xfffffc0cu);
    /* 00515725: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x51572au); f_004a20f0();
L_0051572a:; BB(0x0051572a);
    /* 0051572a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00515731: mov ecx, dword ptr [ebp - 0x4ac] */ r_ecx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00515737: and ecx, 0x10000000 */ {  u32 a = r_ecx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0051573d: je 0x515754 */ if (fZ) goto L_00515754;
L_0051573f:; BB(0x0051573f);
    /* 0051573f: and dword ptr [ebp - 0x4ac], 0xefffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xefffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515749: lea ecx, [ebp - 0x3f0] */ r_ecx = (u32)(r_ebp+0xfffffc10u);
    /* 0051574f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x515754u); f_00484470();
L_00515754:; BB(0x00515754);
    /* 00515754: movzx edx, byte ptr [ebp - 0x3e6] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffc1au));
    /* 0051575b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051575d: je 0x515aa2 */ if (fZ) goto L_00515aa2;
L_00515763:; BB(0x00515763);
    /* 00515763: cmp dword ptr [ebp - 0x20c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051576a: jl 0x515a80 */ if ((fS!=fO)) goto L_00515a80;
L_00515770:; BB(0x00515770);
    /* 00515770: lea eax, [ebp - 0x400] */ r_eax = (u32)(r_ebp+0xfffffc00u);
    /* 00515776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515777: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0051577d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051577e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515784: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515789u); f_0047e390();
    /* 00515789: mov ecx, eax */ r_ecx = r_eax;
    /* 0051578b: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515790u); f_004c7c40();
    /* 00515790: mov dword ptr [ebp - 0x688], eax */ W32((u32)(r_ebp+0xfffff978u), r_eax);
    /* 00515796: mov edx, dword ptr [ebp - 0x688] */ r_edx = R32((u32)(r_ebp+0xfffff978u));
    /* 0051579c: mov dword ptr [ebp - 0x68c], edx */ W32((u32)(r_ebp+0xfffff974u), r_edx);
    /* 005157a2: mov dword ptr [ebp - 4], 0x47 */ W32((u32)(r_ebp+0xfffffffcu), 0x47u);
    /* 005157a9: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 005157af: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005157b4: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 005157ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005157bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005157be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005157c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005157c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005157c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005157c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005157c8: lea ecx, [ebp - 0x404] */ r_ecx = (u32)(r_ebp+0xfffffbfcu);
    /* 005157ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005157cf: mov ecx, dword ptr [ebp - 0x68c] */ r_ecx = R32((u32)(r_ebp+0xfffff974u));
    /* 005157d5: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5157dau); f_00485940();
    /* 005157da: mov dword ptr [ebp - 0x690], eax */ W32((u32)(r_ebp+0xfffff970u), r_eax);
    /* 005157e0: mov edx, dword ptr [ebp - 0x690] */ r_edx = R32((u32)(r_ebp+0xfffff970u));
    /* 005157e6: mov dword ptr [ebp - 0x694], edx */ W32((u32)(r_ebp+0xfffff96cu), r_edx);
    /* 005157ec: mov dword ptr [ebp - 4], 0x48 */ W32((u32)(r_ebp+0xfffffffcu), 0x48u);
    /* 005157f3: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 005157f9: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005157fe: mov dword ptr [ebp - 0x4ac], eax */ W32((u32)(r_ebp+0xfffffb54u), r_eax);
    /* 00515804: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 0051580a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051580b: lea edx, [ebp - 0x405] */ r_edx = (u32)(r_ebp+0xfffffbfbu);
    /* 00515811: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515812: mov ecx, dword ptr [ebp - 0x694] */ r_ecx = R32((u32)(r_ebp+0xfffff96cu));
    /* 00515818: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x51581du); f_004a2160();
    /* 0051581d: mov ecx, eax */ r_ecx = r_eax;
    /* 0051581f: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x515824u); f_004a1f00();
    /* 00515824: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00515827: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515829: je 0x515845 */ if (fZ) goto L_00515845;
L_0051582b:; BB(0x0051582b);
    /* 0051582b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051582d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515832u); f_0062fbf0();
    /* 00515832: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515835: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515837: jne 0x515845 */ if (!fZ) goto L_00515845;
L_00515839:; BB(0x00515839);
    /* 00515839: mov dword ptr [ebp - 0x698], 1 */ W32((u32)(r_ebp+0xfffff968u), 0x1u);
    /* 00515843: jmp 0x51584f */ goto L_0051584f;
L_00515845:; BB(0x00515845);
    /* 00515845: mov dword ptr [ebp - 0x698], 0 */ W32((u32)(r_ebp+0xfffff968u), 0x0u);
L_0051584f:; BB(0x0051584f);
    /* 0051584f: mov cl, byte ptr [ebp - 0x698] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff968u))) & 0xffu);
    /* 00515855: mov byte ptr [ebp - 0x3f6], cl */ W8((u32)(r_ebp+0xfffffc0au), (u8)r_ecx);
    /* 0051585b: mov dword ptr [ebp - 4], 0x47 */ W32((u32)(r_ebp+0xfffffffcu), 0x47u);
    /* 00515862: mov edx, dword ptr [ebp - 0x4ac] */ r_edx = R32((u32)(r_ebp+0xfffffb54u));
    /* 00515868: and edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0051586e: je 0x515885 */ if (fZ) goto L_00515885;
L_00515870:; BB(0x00515870);
    /* 00515870: and dword ptr [ebp - 0x4ac], 0x7fffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0051587a: lea ecx, [ebp - 0x404] */ r_ecx = (u32)(r_ebp+0xfffffbfcu);
    /* 00515880: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x515885u); f_004a20f0();
L_00515885:; BB(0x00515885);
    /* 00515885: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051588c: mov eax, dword ptr [ebp - 0x4ac] */ r_eax = R32((u32)(r_ebp+0xfffffb54u));
    /* 00515892: and eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00515897: je 0x5158ae */ if (fZ) goto L_005158ae;
L_00515899:; BB(0x00515899);
    /* 00515899: and dword ptr [ebp - 0x4ac], 0xbfffffff */ { u32 ad = (u32)(r_ebp+0xfffffb54u);  u32 a = R32(ad); u32 b = 0xbfffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005158a3: lea ecx, [ebp - 0x400] */ r_ecx = (u32)(r_ebp+0xfffffc00u);
    /* 005158a9: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5158aeu); f_00484470();
L_005158ae:; BB(0x005158ae);
    /* 005158ae: movzx ecx, byte ptr [ebp - 0x3f6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffc0au));
    /* 005158b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005158b7: je 0x5158db */ if (fZ) goto L_005158db;
L_005158b9:; BB(0x005158b9);
    /* 005158b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005158bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005158bd: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005158c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005158c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005158ca: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5158cfu); f_0047e390();
    /* 005158cf: mov ecx, eax */ r_ecx = r_eax;
    /* 005158d1: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x5158d6u); f_004cce00();
    /* 005158d6: jmp 0x515a7e */ goto L_00515a7e;
L_005158db:; BB(0x005158db);
    /* 005158db: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 005158e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005158e2: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005158e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005158e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005158ef: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5158f4u); f_0047e390();
    /* 005158f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005158f6: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x5158fbu); f_004c7c40();
    /* 005158fb: mov dword ptr [ebp - 0x69c], eax */ W32((u32)(r_ebp+0xfffff964u), r_eax);
    /* 00515901: mov eax, dword ptr [ebp - 0x69c] */ r_eax = R32((u32)(r_ebp+0xfffff964u));
    /* 00515907: mov dword ptr [ebp - 0x6a0], eax */ W32((u32)(r_ebp+0xfffff960u), r_eax);
    /* 0051590d: mov dword ptr [ebp - 4], 0x49 */ W32((u32)(r_ebp+0xfffffffcu), 0x49u);
    /* 00515914: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051591a: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0051591d: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 00515923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515925: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515929: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051592b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051592d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051592f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515931: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 00515937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515938: mov ecx, dword ptr [ebp - 0x6a0] */ r_ecx = R32((u32)(r_ebp+0xfffff960u));
    /* 0051593e: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x515943u); f_00485940();
    /* 00515943: mov dword ptr [ebp - 0x6a4], eax */ W32((u32)(r_ebp+0xfffff95cu), r_eax);
    /* 00515949: mov eax, dword ptr [ebp - 0x6a4] */ r_eax = R32((u32)(r_ebp+0xfffff95cu));
    /* 0051594f: mov dword ptr [ebp - 0x6a8], eax */ W32((u32)(r_ebp+0xfffff958u), r_eax);
    /* 00515955: mov dword ptr [ebp - 4], 0x4a */ W32((u32)(r_ebp+0xfffffffcu), 0x4au);
    /* 0051595c: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515962: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00515965: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 0051596b: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00515971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515972: lea eax, [ebp - 0x415] */ r_eax = (u32)(r_ebp+0xfffffbebu);
    /* 00515978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515979: mov ecx, dword ptr [ebp - 0x6a8] */ r_ecx = R32((u32)(r_ebp+0xfffff958u));
    /* 0051597f: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x515984u); f_004a2160();
    /* 00515984: mov ecx, eax */ r_ecx = r_eax;
    /* 00515986: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x51598bu); f_004a1e10();
    /* 0051598b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0051598e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515990: je 0x5159ac */ if (fZ) goto L_005159ac;
L_00515992:; BB(0x00515992);
    /* 00515992: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515994: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515999u); f_0062fbf0();
    /* 00515999: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051599c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051599e: jne 0x5159ac */ if (!fZ) goto L_005159ac;
L_005159a0:; BB(0x005159a0);
    /* 005159a0: mov dword ptr [ebp - 0x6ac], 1 */ W32((u32)(r_ebp+0xfffff954u), 0x1u);
    /* 005159aa: jmp 0x5159b6 */ goto L_005159b6;
L_005159ac:; BB(0x005159ac);
    /* 005159ac: mov dword ptr [ebp - 0x6ac], 0 */ W32((u32)(r_ebp+0xfffff954u), 0x0u);
L_005159b6:; BB(0x005159b6);
    /* 005159b6: mov dl, byte ptr [ebp - 0x6ac] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff954u))) & 0xffu);
    /* 005159bc: mov byte ptr [ebp - 0x406], dl */ W8((u32)(r_ebp+0xfffffbfau), (u8)r_edx);
    /* 005159c2: mov dword ptr [ebp - 4], 0x49 */ W32((u32)(r_ebp+0xfffffffcu), 0x49u);
    /* 005159c9: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 005159cf: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005159d2: je 0x5159e6 */ if (fZ) goto L_005159e6;
L_005159d4:; BB(0x005159d4);
    /* 005159d4: and dword ptr [ebp - 0x4b0], 0xfffffffd */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005159db: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 005159e1: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x5159e6u); f_004a20f0();
L_005159e6:; BB(0x005159e6);
    /* 005159e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005159ed: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 005159f3: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005159f6: je 0x515a0a */ if (fZ) goto L_00515a0a;
L_005159f8:; BB(0x005159f8);
    /* 005159f8: and dword ptr [ebp - 0x4b0], 0xfffffffe */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005159ff: lea ecx, [ebp - 0x410] */ r_ecx = (u32)(r_ebp+0xfffffbf0u);
    /* 00515a05: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x515a0au); f_00484470();
L_00515a0a:; BB(0x00515a0a);
    /* 00515a0a: movzx edx, byte ptr [ebp - 0x406] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffbfau));
    /* 00515a11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515a13: je 0x515a34 */ if (fZ) goto L_00515a34;
L_00515a15:; BB(0x00515a15);
    /* 00515a15: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a19: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515a1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a20: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515a26: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515a2bu); f_0047e390();
    /* 00515a2b: mov ecx, eax */ r_ecx = r_eax;
    /* 00515a2d: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x515a32u); f_004cce40();
    /* 00515a32: jmp 0x515a7e */ goto L_00515a7e;
L_00515a34:; BB(0x00515a34);
    /* 00515a34: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00515a36: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515a3bu); f_0062fbf0();
    /* 00515a3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515a3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515a40: jne 0x515a61 */ if (!fZ) goto L_00515a61;
L_00515a42:; BB(0x00515a42);
    /* 00515a42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a46: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a4d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515a53: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515a58u); f_0047e390();
    /* 00515a58: mov ecx, eax */ r_ecx = r_eax;
    /* 00515a5a: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x515a5fu); f_004ccda0();
    /* 00515a5f: jmp 0x515a7e */ goto L_00515a7e;
L_00515a61:; BB(0x00515a61);
    /* 00515a61: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515a64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a65: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515a6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515a72: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515a77u); f_0047e390();
    /* 00515a77: mov ecx, eax */ r_ecx = r_eax;
    /* 00515a79: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x515a7eu); f_004ccce0();
L_00515a7e:; BB(0x00515a7e);
    /* 00515a7e: jmp 0x515a9d */ goto L_00515a9d;
L_00515a80:; BB(0x00515a80);
    /* 00515a80: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515a83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515a84: mov ecx, dword ptr [ebp - 0x214] */ r_ecx = R32((u32)(r_ebp+0xfffffdecu));
    /* 00515a8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515a8b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515a91: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515a96u); f_0047e390();
    /* 00515a96: mov ecx, eax */ r_ecx = r_eax;
    /* 00515a98: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x515a9du); f_004ccce0();
L_00515a9d:; BB(0x00515a9d);
    /* 00515a9d: jmp 0x515e0a */ goto L_00515e0a;
L_00515aa2:; BB(0x00515aa2);
    /* 00515aa2: cmp dword ptr [ebp - 0x20c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515aa9: jl 0x515ded */ if ((fS!=fO)) goto L_00515ded;
L_00515aaf:; BB(0x00515aaf);
    /* 00515aaf: lea edx, [ebp - 0x420] */ r_edx = (u32)(r_ebp+0xfffffbe0u);
    /* 00515ab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515ab6: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515abd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515ac3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515ac8u); f_0047e390();
    /* 00515ac8: mov ecx, eax */ r_ecx = r_eax;
    /* 00515aca: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515acfu); f_004c7c40();
    /* 00515acf: mov dword ptr [ebp - 0x6b0], eax */ W32((u32)(r_ebp+0xfffff950u), r_eax);
    /* 00515ad5: mov ecx, dword ptr [ebp - 0x6b0] */ r_ecx = R32((u32)(r_ebp+0xfffff950u));
    /* 00515adb: mov dword ptr [ebp - 0x6b4], ecx */ W32((u32)(r_ebp+0xfffff94cu), r_ecx);
    /* 00515ae1: mov dword ptr [ebp - 4], 0x4b */ W32((u32)(r_ebp+0xfffffffcu), 0x4bu);
    /* 00515ae8: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515aee: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00515af1: mov dword ptr [ebp - 0x4b0], edx */ W32((u32)(r_ebp+0xfffffb50u), r_edx);
    /* 00515af7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515af9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515afd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515aff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b05: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 00515b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515b0c: mov ecx, dword ptr [ebp - 0x6b4] */ r_ecx = R32((u32)(r_ebp+0xfffff94cu));
    /* 00515b12: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x515b17u); f_00485940();
    /* 00515b17: mov dword ptr [ebp - 0x6b8], eax */ W32((u32)(r_ebp+0xfffff948u), r_eax);
    /* 00515b1d: mov ecx, dword ptr [ebp - 0x6b8] */ r_ecx = R32((u32)(r_ebp+0xfffff948u));
    /* 00515b23: mov dword ptr [ebp - 0x6bc], ecx */ W32((u32)(r_ebp+0xfffff944u), r_ecx);
    /* 00515b29: mov dword ptr [ebp - 4], 0x4c */ W32((u32)(r_ebp+0xfffffffcu), 0x4cu);
    /* 00515b30: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515b36: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00515b39: mov dword ptr [ebp - 0x4b0], edx */ W32((u32)(r_ebp+0xfffffb50u), r_edx);
    /* 00515b3f: mov eax, dword ptr [0x7913d4] */ r_eax = R32((u32)(0x7913d4u));
    /* 00515b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515b45: lea ecx, [ebp - 0x425] */ r_ecx = (u32)(r_ebp+0xfffffbdbu);
    /* 00515b4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515b4c: mov ecx, dword ptr [ebp - 0x6bc] */ r_ecx = R32((u32)(r_ebp+0xfffff944u));
    /* 00515b52: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x515b57u); f_004a2160();
    /* 00515b57: mov ecx, eax */ r_ecx = r_eax;
    /* 00515b59: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x515b5eu); f_004a1f00();
    /* 00515b5e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00515b61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515b63: je 0x515b9e */ if (fZ) goto L_00515b9e;
L_00515b65:; BB(0x00515b65);
    /* 00515b65: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515b67: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515b6cu); f_0062fbf0();
    /* 00515b6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515b71: jne 0x515b9e */ if (!fZ) goto L_00515b9e;
L_00515b73:; BB(0x00515b73);
    /* 00515b73: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515b79: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x515b7eu); f_0047e190();
    /* 00515b7e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515b81: je 0x515b9e */ if (fZ) goto L_00515b9e;
L_00515b83:; BB(0x00515b83);
    /* 00515b83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515b89: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x515b8eu); f_0047d6f0();
    /* 00515b8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515b90: jne 0x515b9e */ if (!fZ) goto L_00515b9e;
L_00515b92:; BB(0x00515b92);
    /* 00515b92: mov dword ptr [ebp - 0x6c0], 1 */ W32((u32)(r_ebp+0xfffff940u), 0x1u);
    /* 00515b9c: jmp 0x515ba8 */ goto L_00515ba8;
L_00515b9e:; BB(0x00515b9e);
    /* 00515b9e: mov dword ptr [ebp - 0x6c0], 0 */ W32((u32)(r_ebp+0xfffff940u), 0x0u);
L_00515ba8:; BB(0x00515ba8);
    /* 00515ba8: mov al, byte ptr [ebp - 0x6c0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff940u))) & 0xffu);
    /* 00515bae: mov byte ptr [ebp - 0x416], al */ W8((u32)(r_ebp+0xfffffbeau), (u8)r_eax);
    /* 00515bb4: mov dword ptr [ebp - 4], 0x4b */ W32((u32)(r_ebp+0xfffffffcu), 0x4bu);
    /* 00515bbb: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515bc1: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00515bc4: je 0x515bd8 */ if (fZ) goto L_00515bd8;
L_00515bc6:; BB(0x00515bc6);
    /* 00515bc6: and dword ptr [ebp - 0x4b0], 0xfffffff7 */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515bcd: lea ecx, [ebp - 0x424] */ r_ecx = (u32)(r_ebp+0xfffffbdcu);
    /* 00515bd3: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x515bd8u); f_004a20f0();
L_00515bd8:; BB(0x00515bd8);
    /* 00515bd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00515bdf: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515be5: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00515be8: je 0x515bfc */ if (fZ) goto L_00515bfc;
L_00515bea:; BB(0x00515bea);
    /* 00515bea: and dword ptr [ebp - 0x4b0], 0xfffffffb */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515bf1: lea ecx, [ebp - 0x420] */ r_ecx = (u32)(r_ebp+0xfffffbe0u);
    /* 00515bf7: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x515bfcu); f_00484470();
L_00515bfc:; BB(0x00515bfc);
    /* 00515bfc: movzx eax, byte ptr [ebp - 0x416] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffbeau));
    /* 00515c03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515c05: je 0x515c29 */ if (fZ) goto L_00515c29;
L_00515c07:; BB(0x00515c07);
    /* 00515c07: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515c0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515c0b: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515c12: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515c18: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515c1du); f_0047e390();
    /* 00515c1d: mov ecx, eax */ r_ecx = r_eax;
    /* 00515c1f: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x515c24u); f_004cce00();
    /* 00515c24: jmp 0x515deb */ goto L_00515deb;
L_00515c29:; BB(0x00515c29);
    /* 00515c29: lea eax, [ebp - 0x430] */ r_eax = (u32)(r_ebp+0xfffffbd0u);
    /* 00515c2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515c30: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515c36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515c37: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515c3d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515c42u); f_0047e390();
    /* 00515c42: mov ecx, eax */ r_ecx = r_eax;
    /* 00515c44: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515c49u); f_004c7c40();
    /* 00515c49: mov dword ptr [ebp - 0x6c4], eax */ W32((u32)(r_ebp+0xfffff93cu), r_eax);
    /* 00515c4f: mov edx, dword ptr [ebp - 0x6c4] */ r_edx = R32((u32)(r_ebp+0xfffff93cu));
    /* 00515c55: mov dword ptr [ebp - 0x6c8], edx */ W32((u32)(r_ebp+0xfffff938u), r_edx);
    /* 00515c5b: mov dword ptr [ebp - 4], 0x4d */ W32((u32)(r_ebp+0xfffffffcu), 0x4du);
    /* 00515c62: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515c68: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00515c6b: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 00515c71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515c7f: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 00515c85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515c86: mov ecx, dword ptr [ebp - 0x6c8] */ r_ecx = R32((u32)(r_ebp+0xfffff938u));
    /* 00515c8c: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x515c91u); f_00485940();
    /* 00515c91: mov dword ptr [ebp - 0x6cc], eax */ W32((u32)(r_ebp+0xfffff934u), r_eax);
    /* 00515c97: mov edx, dword ptr [ebp - 0x6cc] */ r_edx = R32((u32)(r_ebp+0xfffff934u));
    /* 00515c9d: mov dword ptr [ebp - 0x6d0], edx */ W32((u32)(r_ebp+0xfffff930u), r_edx);
    /* 00515ca3: mov dword ptr [ebp - 4], 0x4e */ W32((u32)(r_ebp+0xfffffffcu), 0x4eu);
    /* 00515caa: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515cb0: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00515cb3: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 00515cb9: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 00515cbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515cc0: lea edx, [ebp - 0x435] */ r_edx = (u32)(r_ebp+0xfffffbcbu);
    /* 00515cc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515cc7: mov ecx, dword ptr [ebp - 0x6d0] */ r_ecx = R32((u32)(r_ebp+0xfffff930u));
    /* 00515ccd: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x515cd2u); f_004a2160();
    /* 00515cd2: mov ecx, eax */ r_ecx = r_eax;
    /* 00515cd4: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x515cd9u); f_004a1e10();
    /* 00515cd9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00515cdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515cde: je 0x515d19 */ if (fZ) goto L_00515d19;
L_00515ce0:; BB(0x00515ce0);
    /* 00515ce0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00515ce2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515ce7u); f_0062fbf0();
    /* 00515ce7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515cea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515cec: jne 0x515d19 */ if (!fZ) goto L_00515d19;
L_00515cee:; BB(0x00515cee);
    /* 00515cee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515cf4: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x515cf9u); f_0047e190();
    /* 00515cf9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515cfc: je 0x515d19 */ if (fZ) goto L_00515d19;
L_00515cfe:; BB(0x00515cfe);
    /* 00515cfe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515d04: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x515d09u); f_0047d6f0();
    /* 00515d09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515d0b: jne 0x515d19 */ if (!fZ) goto L_00515d19;
L_00515d0d:; BB(0x00515d0d);
    /* 00515d0d: mov dword ptr [ebp - 0x6d4], 1 */ W32((u32)(r_ebp+0xfffff92cu), 0x1u);
    /* 00515d17: jmp 0x515d23 */ goto L_00515d23;
L_00515d19:; BB(0x00515d19);
    /* 00515d19: mov dword ptr [ebp - 0x6d4], 0 */ W32((u32)(r_ebp+0xfffff92cu), 0x0u);
L_00515d23:; BB(0x00515d23);
    /* 00515d23: mov cl, byte ptr [ebp - 0x6d4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff92cu))) & 0xffu);
    /* 00515d29: mov byte ptr [ebp - 0x426], cl */ W8((u32)(r_ebp+0xfffffbdau), (u8)r_ecx);
    /* 00515d2f: mov dword ptr [ebp - 4], 0x4d */ W32((u32)(r_ebp+0xfffffffcu), 0x4du);
    /* 00515d36: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515d3c: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00515d3f: je 0x515d53 */ if (fZ) goto L_00515d53;
L_00515d41:; BB(0x00515d41);
    /* 00515d41: and dword ptr [ebp - 0x4b0], 0xffffffdf */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515d48: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 00515d4e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x515d53u); f_004a20f0();
L_00515d53:; BB(0x00515d53);
    /* 00515d53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00515d5a: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515d60: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00515d63: je 0x515d77 */ if (fZ) goto L_00515d77;
L_00515d65:; BB(0x00515d65);
    /* 00515d65: and dword ptr [ebp - 0x4b0], 0xffffffef */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515d6c: lea ecx, [ebp - 0x430] */ r_ecx = (u32)(r_ebp+0xfffffbd0u);
    /* 00515d72: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x515d77u); f_00484470();
L_00515d77:; BB(0x00515d77);
    /* 00515d77: movzx ecx, byte ptr [ebp - 0x426] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffbdau));
    /* 00515d7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515d80: je 0x515da1 */ if (fZ) goto L_00515da1;
L_00515d82:; BB(0x00515d82);
    /* 00515d82: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515d85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515d86: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515d8d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515d93: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515d98u); f_0047e390();
    /* 00515d98: mov ecx, eax */ r_ecx = r_eax;
    /* 00515d9a: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x515d9fu); f_004cce40();
    /* 00515d9f: jmp 0x515deb */ goto L_00515deb;
L_00515da1:; BB(0x00515da1);
    /* 00515da1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00515da3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x515da8u); f_0062fbf0();
    /* 00515da8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00515dab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515dad: jne 0x515dce */ if (!fZ) goto L_00515dce;
L_00515daf:; BB(0x00515daf);
    /* 00515daf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515db2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515db3: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515dba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515dc0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515dc5u); f_0047e390();
    /* 00515dc5: mov ecx, eax */ r_ecx = r_eax;
    /* 00515dc7: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x515dccu); f_004ccda0();
    /* 00515dcc: jmp 0x515deb */ goto L_00515deb;
L_00515dce:; BB(0x00515dce);
    /* 00515dce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515dd2: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515dd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515dd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515ddf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515de4u); f_0047e390();
    /* 00515de4: mov ecx, eax */ r_ecx = r_eax;
    /* 00515de6: call 0x4ccc60 */ r_esp -= 4; W32(r_esp, 0x515debu); f_004ccc60();
L_00515deb:; BB(0x00515deb);
    /* 00515deb: jmp 0x515e0a */ goto L_00515e0a;
L_00515ded:; BB(0x00515ded);
    /* 00515ded: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00515df0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515df1: mov eax, dword ptr [ebp - 0x214] */ r_eax = R32((u32)(r_ebp+0xfffffdecu));
    /* 00515df7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515df8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515dfe: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515e03u); f_0047e390();
    /* 00515e03: mov ecx, eax */ r_ecx = r_eax;
    /* 00515e05: call 0x4ccc60 */ r_esp -= 4; W32(r_esp, 0x515e0au); f_004ccc60();
L_00515e0a:; BB(0x00515e0a);
    /* 00515e0a: jmp 0x516a7b */ goto L_00516a7b;
L_00515e0f:; BB(0x00515e0f);
    /* 00515e0f: cmp dword ptr [0x793064], 0xa */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515e16: jne 0x516651 */ if (!fZ) goto L_00516651;
L_00515e1c:; BB(0x00515e1c);
    /* 00515e1c: lea ecx, [ebp - 0x440] */ r_ecx = (u32)(r_ebp+0xfffffbc0u);
    /* 00515e22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515e23: mov edx, dword ptr [0x793068] */ r_edx = R32((u32)(0x793068u));
    /* 00515e29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515e2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515e30: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515e35u); f_0047e390();
    /* 00515e35: mov ecx, eax */ r_ecx = r_eax;
    /* 00515e37: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515e3cu); f_004c7c40();
    /* 00515e3c: mov dword ptr [ebp - 0x6d8], eax */ W32((u32)(r_ebp+0xfffff928u), r_eax);
    /* 00515e42: mov eax, dword ptr [ebp - 0x6d8] */ r_eax = R32((u32)(r_ebp+0xfffff928u));
    /* 00515e48: mov dword ptr [ebp - 0x6dc], eax */ W32((u32)(r_ebp+0xfffff924u), r_eax);
    /* 00515e4e: mov dword ptr [ebp - 4], 0x4f */ W32((u32)(r_ebp+0xfffffffcu), 0x4fu);
    /* 00515e55: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515e5b: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00515e5e: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 00515e64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515e72: lea edx, [ebp - 0x444] */ r_edx = (u32)(r_ebp+0xfffffbbcu);
    /* 00515e78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515e79: mov ecx, dword ptr [ebp - 0x6dc] */ r_ecx = R32((u32)(r_ebp+0xfffff924u));
    /* 00515e7f: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x515e84u); f_00485940();
    /* 00515e84: mov dword ptr [ebp - 0x6e0], eax */ W32((u32)(r_ebp+0xfffff920u), r_eax);
    /* 00515e8a: mov eax, dword ptr [ebp - 0x6e0] */ r_eax = R32((u32)(r_ebp+0xfffff920u));
    /* 00515e90: mov dword ptr [ebp - 0x6e4], eax */ W32((u32)(r_ebp+0xfffff91cu), r_eax);
    /* 00515e96: mov dword ptr [ebp - 4], 0x50 */ W32((u32)(r_ebp+0xfffffffcu), 0x50u);
    /* 00515e9d: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515ea3: or ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00515ea9: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 00515eaf: mov edx, dword ptr [0x7913a0] */ r_edx = R32((u32)(0x7913a0u));
    /* 00515eb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00515eb6: lea eax, [ebp - 0x445] */ r_eax = (u32)(r_ebp+0xfffffbbbu);
    /* 00515ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515ebd: mov ecx, dword ptr [ebp - 0x6e4] */ r_ecx = R32((u32)(r_ebp+0xfffff91cu));
    /* 00515ec3: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x515ec8u); f_004a2160();
    /* 00515ec8: mov ecx, eax */ r_ecx = r_eax;
    /* 00515eca: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x515ecfu); f_004a1f00();
    /* 00515ecf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00515ed2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515ed4: je 0x515f01 */ if (fZ) goto L_00515f01;
L_00515ed6:; BB(0x00515ed6);
    /* 00515ed6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515edc: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x515ee1u); f_0047e190();
    /* 00515ee1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515ee4: je 0x515f01 */ if (fZ) goto L_00515f01;
L_00515ee6:; BB(0x00515ee6);
    /* 00515ee6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515eec: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x515ef1u); f_0047d6f0();
    /* 00515ef1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515ef3: jne 0x515f01 */ if (!fZ) goto L_00515f01;
L_00515ef5:; BB(0x00515ef5);
    /* 00515ef5: mov dword ptr [ebp - 0x6e8], 1 */ W32((u32)(r_ebp+0xfffff918u), 0x1u);
    /* 00515eff: jmp 0x515f0b */ goto L_00515f0b;
L_00515f01:; BB(0x00515f01);
    /* 00515f01: mov dword ptr [ebp - 0x6e8], 0 */ W32((u32)(r_ebp+0xfffff918u), 0x0u);
L_00515f0b:; BB(0x00515f0b);
    /* 00515f0b: mov dl, byte ptr [ebp - 0x6e8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff918u))) & 0xffu);
    /* 00515f11: mov byte ptr [ebp - 0x436], dl */ W8((u32)(r_ebp+0xfffffbcau), (u8)r_edx);
    /* 00515f17: mov dword ptr [ebp - 4], 0x4f */ W32((u32)(r_ebp+0xfffffffcu), 0x4fu);
    /* 00515f1e: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515f24: and eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00515f29: je 0x515f40 */ if (fZ) goto L_00515f40;
L_00515f2b:; BB(0x00515f2b);
    /* 00515f2b: and dword ptr [ebp - 0x4b0], 0xffffff7f */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515f35: lea ecx, [ebp - 0x444] */ r_ecx = (u32)(r_ebp+0xfffffbbcu);
    /* 00515f3b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x515f40u); f_004a20f0();
L_00515f40:; BB(0x00515f40);
    /* 00515f40: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00515f47: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515f4d: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00515f50: je 0x515f64 */ if (fZ) goto L_00515f64;
L_00515f52:; BB(0x00515f52);
    /* 00515f52: and dword ptr [ebp - 0x4b0], 0xffffffbf */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00515f59: lea ecx, [ebp - 0x440] */ r_ecx = (u32)(r_ebp+0xfffffbc0u);
    /* 00515f5f: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x515f64u); f_00484470();
L_00515f64:; BB(0x00515f64);
    /* 00515f64: movzx edx, byte ptr [ebp - 0x436] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffbcau));
    /* 00515f6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00515f6d: je 0x5162c3 */ if (fZ) goto L_005162c3;
L_00515f73:; BB(0x00515f73);
    /* 00515f73: cmp dword ptr [ebp - 0x20c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00515f7a: jl 0x5162a1 */ if ((fS!=fO)) goto L_005162a1;
L_00515f80:; BB(0x00515f80);
    /* 00515f80: lea eax, [ebp - 0x450] */ r_eax = (u32)(r_ebp+0xfffffbb0u);
    /* 00515f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00515f87: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00515f8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515f8e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00515f94: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x515f99u); f_0047e390();
    /* 00515f99: mov ecx, eax */ r_ecx = r_eax;
    /* 00515f9b: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x515fa0u); f_004c7c40();
    /* 00515fa0: mov dword ptr [ebp - 0x6ec], eax */ W32((u32)(r_ebp+0xfffff914u), r_eax);
    /* 00515fa6: mov edx, dword ptr [ebp - 0x6ec] */ r_edx = R32((u32)(r_ebp+0xfffff914u));
    /* 00515fac: mov dword ptr [ebp - 0x6f0], edx */ W32((u32)(r_ebp+0xfffff910u), r_edx);
    /* 00515fb2: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 00515fb9: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00515fbf: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00515fc4: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 00515fca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00515fd8: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 00515fde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00515fdf: mov ecx, dword ptr [ebp - 0x6f0] */ r_ecx = R32((u32)(r_ebp+0xfffff910u));
    /* 00515fe5: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x515feau); f_00485940();
    /* 00515fea: mov dword ptr [ebp - 0x6f4], eax */ W32((u32)(r_ebp+0xfffff90cu), r_eax);
    /* 00515ff0: mov edx, dword ptr [ebp - 0x6f4] */ r_edx = R32((u32)(r_ebp+0xfffff90cu));
    /* 00515ff6: mov dword ptr [ebp - 0x6f8], edx */ W32((u32)(r_ebp+0xfffff908u), r_edx);
    /* 00515ffc: mov dword ptr [ebp - 4], 0x52 */ W32((u32)(r_ebp+0xfffffffcu), 0x52u);
    /* 00516003: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516009: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051600e: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 00516014: mov ecx, dword ptr [0x7913d4] */ r_ecx = R32((u32)(0x7913d4u));
    /* 0051601a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051601b: lea edx, [ebp - 0x455] */ r_edx = (u32)(r_ebp+0xfffffbabu);
    /* 00516021: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516022: mov ecx, dword ptr [ebp - 0x6f8] */ r_ecx = R32((u32)(r_ebp+0xfffff908u));
    /* 00516028: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x51602du); f_004a2160();
    /* 0051602d: mov ecx, eax */ r_ecx = r_eax;
    /* 0051602f: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x516034u); f_004a1f00();
    /* 00516034: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00516037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516039: je 0x516055 */ if (fZ) goto L_00516055;
L_0051603b:; BB(0x0051603b);
    /* 0051603b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051603d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x516042u); f_0062fbf0();
    /* 00516042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516047: jne 0x516055 */ if (!fZ) goto L_00516055;
L_00516049:; BB(0x00516049);
    /* 00516049: mov dword ptr [ebp - 0x6fc], 1 */ W32((u32)(r_ebp+0xfffff904u), 0x1u);
    /* 00516053: jmp 0x51605f */ goto L_0051605f;
L_00516055:; BB(0x00516055);
    /* 00516055: mov dword ptr [ebp - 0x6fc], 0 */ W32((u32)(r_ebp+0xfffff904u), 0x0u);
L_0051605f:; BB(0x0051605f);
    /* 0051605f: mov cl, byte ptr [ebp - 0x6fc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff904u))) & 0xffu);
    /* 00516065: mov byte ptr [ebp - 0x446], cl */ W8((u32)(r_ebp+0xfffffbbau), (u8)r_ecx);
    /* 0051606b: mov dword ptr [ebp - 4], 0x51 */ W32((u32)(r_ebp+0xfffffffcu), 0x51u);
    /* 00516072: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516078: and edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0051607e: je 0x516095 */ if (fZ) goto L_00516095;
L_00516080:; BB(0x00516080);
    /* 00516080: and dword ptr [ebp - 0x4b0], 0xfffffdff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0051608a: lea ecx, [ebp - 0x454] */ r_ecx = (u32)(r_ebp+0xfffffbacu);
    /* 00516090: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x516095u); f_004a20f0();
L_00516095:; BB(0x00516095);
    /* 00516095: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051609c: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 005160a2: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005160a7: je 0x5160be */ if (fZ) goto L_005160be;
L_005160a9:; BB(0x005160a9);
    /* 005160a9: and dword ptr [ebp - 0x4b0], 0xfffffeff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005160b3: lea ecx, [ebp - 0x450] */ r_ecx = (u32)(r_ebp+0xfffffbb0u);
    /* 005160b9: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5160beu); f_00484470();
L_005160be:; BB(0x005160be);
    /* 005160be: movzx ecx, byte ptr [ebp - 0x446] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffbbau));
    /* 005160c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005160c7: je 0x5160eb */ if (fZ) goto L_005160eb;
L_005160c9:; BB(0x005160c9);
    /* 005160c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005160cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005160cd: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005160d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005160d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005160da: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5160dfu); f_0047e390();
    /* 005160df: mov ecx, eax */ r_ecx = r_eax;
    /* 005160e1: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x5160e6u); f_004cce00();
    /* 005160e6: jmp 0x51629f */ goto L_0051629f;
L_005160eb:; BB(0x005160eb);
    /* 005160eb: lea ecx, [ebp - 0x460] */ r_ecx = (u32)(r_ebp+0xfffffba0u);
    /* 005160f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005160f2: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005160f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005160f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005160ff: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516104u); f_0047e390();
    /* 00516104: mov ecx, eax */ r_ecx = r_eax;
    /* 00516106: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x51610bu); f_004c7c40();
    /* 0051610b: mov dword ptr [ebp - 0x700], eax */ W32((u32)(r_ebp+0xfffff900u), r_eax);
    /* 00516111: mov eax, dword ptr [ebp - 0x700] */ r_eax = R32((u32)(r_ebp+0xfffff900u));
    /* 00516117: mov dword ptr [ebp - 0x704], eax */ W32((u32)(r_ebp+0xfffff8fcu), r_eax);
    /* 0051611d: mov dword ptr [ebp - 4], 0x53 */ W32((u32)(r_ebp+0xfffffffcu), 0x53u);
    /* 00516124: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051612a: or ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00516130: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 00516136: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516138: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051613a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051613c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051613e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516140: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516142: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516144: lea edx, [ebp - 0x464] */ r_edx = (u32)(r_ebp+0xfffffb9cu);
    /* 0051614a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051614b: mov ecx, dword ptr [ebp - 0x704] */ r_ecx = R32((u32)(r_ebp+0xfffff8fcu));
    /* 00516151: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x516156u); f_00485940();
    /* 00516156: mov dword ptr [ebp - 0x708], eax */ W32((u32)(r_ebp+0xfffff8f8u), r_eax);
    /* 0051615c: mov eax, dword ptr [ebp - 0x708] */ r_eax = R32((u32)(r_ebp+0xfffff8f8u));
    /* 00516162: mov dword ptr [ebp - 0x70c], eax */ W32((u32)(r_ebp+0xfffff8f4u), r_eax);
    /* 00516168: mov dword ptr [ebp - 4], 0x54 */ W32((u32)(r_ebp+0xfffffffcu), 0x54u);
    /* 0051616f: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516175: or ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0051617b: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 00516181: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00516187: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516188: lea eax, [ebp - 0x465] */ r_eax = (u32)(r_ebp+0xfffffb9bu);
    /* 0051618e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051618f: mov ecx, dword ptr [ebp - 0x70c] */ r_ecx = R32((u32)(r_ebp+0xfffff8f4u));
    /* 00516195: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x51619au); f_004a2160();
    /* 0051619a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051619c: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x5161a1u); f_004a1e10();
    /* 005161a1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005161a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005161a6: je 0x5161c2 */ if (fZ) goto L_005161c2;
L_005161a8:; BB(0x005161a8);
    /* 005161a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005161aa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5161afu); f_0062fbf0();
    /* 005161af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005161b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005161b4: jne 0x5161c2 */ if (!fZ) goto L_005161c2;
L_005161b6:; BB(0x005161b6);
    /* 005161b6: mov dword ptr [ebp - 0x710], 1 */ W32((u32)(r_ebp+0xfffff8f0u), 0x1u);
    /* 005161c0: jmp 0x5161cc */ goto L_005161cc;
L_005161c2:; BB(0x005161c2);
    /* 005161c2: mov dword ptr [ebp - 0x710], 0 */ W32((u32)(r_ebp+0xfffff8f0u), 0x0u);
L_005161cc:; BB(0x005161cc);
    /* 005161cc: mov dl, byte ptr [ebp - 0x710] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8f0u))) & 0xffu);
    /* 005161d2: mov byte ptr [ebp - 0x456], dl */ W8((u32)(r_ebp+0xfffffbaau), (u8)r_edx);
    /* 005161d8: mov dword ptr [ebp - 4], 0x53 */ W32((u32)(r_ebp+0xfffffffcu), 0x53u);
    /* 005161df: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 005161e5: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005161ea: je 0x516201 */ if (fZ) goto L_00516201;
L_005161ec:; BB(0x005161ec);
    /* 005161ec: and dword ptr [ebp - 0x4b0], 0xfffff7ff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005161f6: lea ecx, [ebp - 0x464] */ r_ecx = (u32)(r_ebp+0xfffffb9cu);
    /* 005161fc: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x516201u); f_004a20f0();
L_00516201:; BB(0x00516201);
    /* 00516201: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00516208: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051620e: and ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00516214: je 0x51622b */ if (fZ) goto L_0051622b;
L_00516216:; BB(0x00516216);
    /* 00516216: and dword ptr [ebp - 0x4b0], 0xfffffbff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00516220: lea ecx, [ebp - 0x460] */ r_ecx = (u32)(r_ebp+0xfffffba0u);
    /* 00516226: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x51622bu); f_00484470();
L_0051622b:; BB(0x0051622b);
    /* 0051622b: movzx edx, byte ptr [ebp - 0x456] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffbaau));
    /* 00516232: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516234: je 0x516255 */ if (fZ) goto L_00516255;
L_00516236:; BB(0x00516236);
    /* 00516236: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051623a: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516241: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516247: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x51624cu); f_0047e390();
    /* 0051624c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051624e: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x516253u); f_004cce40();
    /* 00516253: jmp 0x51629f */ goto L_0051629f;
L_00516255:; BB(0x00516255);
    /* 00516255: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00516257: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51625cu); f_0062fbf0();
    /* 0051625c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051625f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516261: jne 0x516282 */ if (!fZ) goto L_00516282;
L_00516263:; BB(0x00516263);
    /* 00516263: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516266: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516267: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0051626d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051626e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516274: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516279u); f_0047e390();
    /* 00516279: mov ecx, eax */ r_ecx = r_eax;
    /* 0051627b: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x516280u); f_004ccda0();
    /* 00516280: jmp 0x51629f */ goto L_0051629f;
L_00516282:; BB(0x00516282);
    /* 00516282: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516285: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516286: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0051628c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051628d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516293: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516298u); f_0047e390();
    /* 00516298: mov ecx, eax */ r_ecx = r_eax;
    /* 0051629a: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x51629fu); f_004ccce0();
L_0051629f:; BB(0x0051629f);
    /* 0051629f: jmp 0x5162be */ goto L_005162be;
L_005162a1:; BB(0x005162a1);
    /* 005162a1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005162a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005162a5: mov ecx, dword ptr [ebp - 0x214] */ r_ecx = R32((u32)(r_ebp+0xfffffdecu));
    /* 005162ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005162ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005162b2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5162b7u); f_0047e390();
    /* 005162b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005162b9: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x5162beu); f_004ccce0();
L_005162be:; BB(0x005162be);
    /* 005162be: jmp 0x51664c */ goto L_0051664c;
L_005162c3:; BB(0x005162c3);
    /* 005162c3: cmp dword ptr [ebp - 0x20c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005162ca: jl 0x51662f */ if ((fS!=fO)) goto L_0051662f;
L_005162d0:; BB(0x005162d0);
    /* 005162d0: lea edx, [ebp - 0x470] */ r_edx = (u32)(r_ebp+0xfffffb90u);
    /* 005162d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005162d7: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005162dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005162de: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005162e4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5162e9u); f_0047e390();
    /* 005162e9: mov ecx, eax */ r_ecx = r_eax;
    /* 005162eb: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x5162f0u); f_004c7c40();
    /* 005162f0: mov dword ptr [ebp - 0x714], eax */ W32((u32)(r_ebp+0xfffff8ecu), r_eax);
    /* 005162f6: mov ecx, dword ptr [ebp - 0x714] */ r_ecx = R32((u32)(r_ebp+0xfffff8ecu));
    /* 005162fc: mov dword ptr [ebp - 0x718], ecx */ W32((u32)(r_ebp+0xfffff8e8u), r_ecx);
    /* 00516302: mov dword ptr [ebp - 4], 0x55 */ W32((u32)(r_ebp+0xfffffffcu), 0x55u);
    /* 00516309: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051630f: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00516315: mov dword ptr [ebp - 0x4b0], edx */ W32((u32)(r_ebp+0xfffffb50u), r_edx);
    /* 0051631b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051631d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051631f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516321: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516323: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516325: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516327: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516329: lea eax, [ebp - 0x474] */ r_eax = (u32)(r_ebp+0xfffffb8cu);
    /* 0051632f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516330: mov ecx, dword ptr [ebp - 0x718] */ r_ecx = R32((u32)(r_ebp+0xfffff8e8u));
    /* 00516336: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x51633bu); f_00485940();
    /* 0051633b: mov dword ptr [ebp - 0x71c], eax */ W32((u32)(r_ebp+0xfffff8e4u), r_eax);
    /* 00516341: mov ecx, dword ptr [ebp - 0x71c] */ r_ecx = R32((u32)(r_ebp+0xfffff8e4u));
    /* 00516347: mov dword ptr [ebp - 0x720], ecx */ W32((u32)(r_ebp+0xfffff8e0u), r_ecx);
    /* 0051634d: mov dword ptr [ebp - 4], 0x56 */ W32((u32)(r_ebp+0xfffffffcu), 0x56u);
    /* 00516354: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051635a: or edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00516360: mov dword ptr [ebp - 0x4b0], edx */ W32((u32)(r_ebp+0xfffffb50u), r_edx);
    /* 00516366: mov eax, dword ptr [0x7913d4] */ r_eax = R32((u32)(0x7913d4u));
    /* 0051636b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051636c: lea ecx, [ebp - 0x475] */ r_ecx = (u32)(r_ebp+0xfffffb8bu);
    /* 00516372: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516373: mov ecx, dword ptr [ebp - 0x720] */ r_ecx = R32((u32)(r_ebp+0xfffff8e0u));
    /* 00516379: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x51637eu); f_004a2160();
    /* 0051637e: mov ecx, eax */ r_ecx = r_eax;
    /* 00516380: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x516385u); f_004a1f00();
    /* 00516385: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00516388: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051638a: je 0x5163c5 */ if (fZ) goto L_005163c5;
L_0051638c:; BB(0x0051638c);
    /* 0051638c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051638e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x516393u); f_0062fbf0();
    /* 00516393: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516398: jne 0x5163c5 */ if (!fZ) goto L_005163c5;
L_0051639a:; BB(0x0051639a);
    /* 0051639a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005163a0: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5163a5u); f_0047e190();
    /* 005163a5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005163a8: je 0x5163c5 */ if (fZ) goto L_005163c5;
L_005163aa:; BB(0x005163aa);
    /* 005163aa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005163b0: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x5163b5u); f_0047d6f0();
    /* 005163b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005163b7: jne 0x5163c5 */ if (!fZ) goto L_005163c5;
L_005163b9:; BB(0x005163b9);
    /* 005163b9: mov dword ptr [ebp - 0x724], 1 */ W32((u32)(r_ebp+0xfffff8dcu), 0x1u);
    /* 005163c3: jmp 0x5163cf */ goto L_005163cf;
L_005163c5:; BB(0x005163c5);
    /* 005163c5: mov dword ptr [ebp - 0x724], 0 */ W32((u32)(r_ebp+0xfffff8dcu), 0x0u);
L_005163cf:; BB(0x005163cf);
    /* 005163cf: mov al, byte ptr [ebp - 0x724] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8dcu))) & 0xffu);
    /* 005163d5: mov byte ptr [ebp - 0x466], al */ W8((u32)(r_ebp+0xfffffb9au), (u8)r_eax);
    /* 005163db: mov dword ptr [ebp - 4], 0x55 */ W32((u32)(r_ebp+0xfffffffcu), 0x55u);
    /* 005163e2: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 005163e8: and ecx, 0x2000 */ {  u32 a = r_ecx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005163ee: je 0x516405 */ if (fZ) goto L_00516405;
L_005163f0:; BB(0x005163f0);
    /* 005163f0: and dword ptr [ebp - 0x4b0], 0xffffdfff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005163fa: lea ecx, [ebp - 0x474] */ r_ecx = (u32)(r_ebp+0xfffffb8cu);
    /* 00516400: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x516405u); f_004a20f0();
L_00516405:; BB(0x00516405);
    /* 00516405: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051640c: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516412: and edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00516418: je 0x51642f */ if (fZ) goto L_0051642f;
L_0051641a:; BB(0x0051641a);
    /* 0051641a: and dword ptr [ebp - 0x4b0], 0xffffefff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00516424: lea ecx, [ebp - 0x470] */ r_ecx = (u32)(r_ebp+0xfffffb90u);
    /* 0051642a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x51642fu); f_00484470();
L_0051642f:; BB(0x0051642f);
    /* 0051642f: movzx eax, byte ptr [ebp - 0x466] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffb9au));
    /* 00516436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516438: je 0x51645c */ if (fZ) goto L_0051645c;
L_0051643a:; BB(0x0051643a);
    /* 0051643a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051643d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051643e: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516444: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516445: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051644b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516450u); f_0047e390();
    /* 00516450: mov ecx, eax */ r_ecx = r_eax;
    /* 00516452: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x516457u); f_004cce00();
    /* 00516457: jmp 0x51662d */ goto L_0051662d;
L_0051645c:; BB(0x0051645c);
    /* 0051645c: lea eax, [ebp - 0x480] */ r_eax = (u32)(r_ebp+0xfffffb80u);
    /* 00516462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516463: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051646a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516470: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516475u); f_0047e390();
    /* 00516475: mov ecx, eax */ r_ecx = r_eax;
    /* 00516477: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x51647cu); f_004c7c40();
    /* 0051647c: mov dword ptr [ebp - 0x728], eax */ W32((u32)(r_ebp+0xfffff8d8u), r_eax);
    /* 00516482: mov edx, dword ptr [ebp - 0x728] */ r_edx = R32((u32)(r_ebp+0xfffff8d8u));
    /* 00516488: mov dword ptr [ebp - 0x72c], edx */ W32((u32)(r_ebp+0xfffff8d4u), r_edx);
    /* 0051648e: mov dword ptr [ebp - 4], 0x57 */ W32((u32)(r_ebp+0xfffffffcu), 0x57u);
    /* 00516495: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051649b: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005164a0: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 005164a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005164a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005164aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005164ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005164ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005164b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005164b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005164b4: lea ecx, [ebp - 0x484] */ r_ecx = (u32)(r_ebp+0xfffffb7cu);
    /* 005164ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005164bb: mov ecx, dword ptr [ebp - 0x72c] */ r_ecx = R32((u32)(r_ebp+0xfffff8d4u));
    /* 005164c1: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5164c6u); f_00485940();
    /* 005164c6: mov dword ptr [ebp - 0x730], eax */ W32((u32)(r_ebp+0xfffff8d0u), r_eax);
    /* 005164cc: mov edx, dword ptr [ebp - 0x730] */ r_edx = R32((u32)(r_ebp+0xfffff8d0u));
    /* 005164d2: mov dword ptr [ebp - 0x734], edx */ W32((u32)(r_ebp+0xfffff8ccu), r_edx);
    /* 005164d8: mov dword ptr [ebp - 4], 0x58 */ W32((u32)(r_ebp+0xfffffffcu), 0x58u);
    /* 005164df: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 005164e5: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005164ea: mov dword ptr [ebp - 0x4b0], eax */ W32((u32)(r_ebp+0xfffffb50u), r_eax);
    /* 005164f0: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 005164f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005164f7: lea edx, [ebp - 0x485] */ r_edx = (u32)(r_ebp+0xfffffb7bu);
    /* 005164fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005164fe: mov ecx, dword ptr [ebp - 0x734] */ r_ecx = R32((u32)(r_ebp+0xfffff8ccu));
    /* 00516504: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x516509u); f_004a2160();
    /* 00516509: mov ecx, eax */ r_ecx = r_eax;
    /* 0051650b: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x516510u); f_004a1e10();
    /* 00516510: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00516513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516515: je 0x516550 */ if (fZ) goto L_00516550;
L_00516517:; BB(0x00516517);
    /* 00516517: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00516519: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51651eu); f_0062fbf0();
    /* 0051651e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516523: jne 0x516550 */ if (!fZ) goto L_00516550;
L_00516525:; BB(0x00516525);
    /* 00516525: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051652b: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x516530u); f_0047e190();
    /* 00516530: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516533: je 0x516550 */ if (fZ) goto L_00516550;
L_00516535:; BB(0x00516535);
    /* 00516535: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051653b: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x516540u); f_0047d6f0();
    /* 00516540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516542: jne 0x516550 */ if (!fZ) goto L_00516550;
L_00516544:; BB(0x00516544);
    /* 00516544: mov dword ptr [ebp - 0x738], 1 */ W32((u32)(r_ebp+0xfffff8c8u), 0x1u);
    /* 0051654e: jmp 0x51655a */ goto L_0051655a;
L_00516550:; BB(0x00516550);
    /* 00516550: mov dword ptr [ebp - 0x738], 0 */ W32((u32)(r_ebp+0xfffff8c8u), 0x0u);
L_0051655a:; BB(0x0051655a);
    /* 0051655a: mov cl, byte ptr [ebp - 0x738] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8c8u))) & 0xffu);
    /* 00516560: mov byte ptr [ebp - 0x476], cl */ W8((u32)(r_ebp+0xfffffb8au), (u8)r_ecx);
    /* 00516566: mov dword ptr [ebp - 4], 0x57 */ W32((u32)(r_ebp+0xfffffffcu), 0x57u);
    /* 0051656d: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516573: and edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00516579: je 0x516590 */ if (fZ) goto L_00516590;
L_0051657b:; BB(0x0051657b);
    /* 0051657b: and dword ptr [ebp - 0x4b0], 0xffff7fff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00516585: lea ecx, [ebp - 0x484] */ r_ecx = (u32)(r_ebp+0xfffffb7cu);
    /* 0051658b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x516590u); f_004a20f0();
L_00516590:; BB(0x00516590);
    /* 00516590: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00516597: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051659d: and eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005165a2: je 0x5165b9 */ if (fZ) goto L_005165b9;
L_005165a4:; BB(0x005165a4);
    /* 005165a4: and dword ptr [ebp - 0x4b0], 0xffffbfff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005165ae: lea ecx, [ebp - 0x480] */ r_ecx = (u32)(r_ebp+0xfffffb80u);
    /* 005165b4: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5165b9u); f_00484470();
L_005165b9:; BB(0x005165b9);
    /* 005165b9: movzx ecx, byte ptr [ebp - 0x476] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffb8au));
    /* 005165c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005165c2: je 0x5165e3 */ if (fZ) goto L_005165e3;
L_005165c4:; BB(0x005165c4);
    /* 005165c4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005165c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005165c8: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005165ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005165cf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005165d5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5165dau); f_0047e390();
    /* 005165da: mov ecx, eax */ r_ecx = r_eax;
    /* 005165dc: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x5165e1u); f_004cce40();
    /* 005165e1: jmp 0x51662d */ goto L_0051662d;
L_005165e3:; BB(0x005165e3);
    /* 005165e3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005165e5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5165eau); f_0062fbf0();
    /* 005165ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005165ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005165ef: jne 0x516610 */ if (!fZ) goto L_00516610;
L_005165f1:; BB(0x005165f1);
    /* 005165f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005165f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005165f5: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005165fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005165fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516602: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516607u); f_0047e390();
    /* 00516607: mov ecx, eax */ r_ecx = r_eax;
    /* 00516609: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x51660eu); f_004ccda0();
    /* 0051660e: jmp 0x51662d */ goto L_0051662d;
L_00516610:; BB(0x00516610);
    /* 00516610: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516614: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0051661a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051661b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516621: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516626u); f_0047e390();
    /* 00516626: mov ecx, eax */ r_ecx = r_eax;
    /* 00516628: call 0x4ccd60 */ r_esp -= 4; W32(r_esp, 0x51662du); f_004ccd60();
L_0051662d:; BB(0x0051662d);
    /* 0051662d: jmp 0x51664c */ goto L_0051664c;
L_0051662f:; BB(0x0051662f);
    /* 0051662f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516632: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516633: mov eax, dword ptr [ebp - 0x214] */ r_eax = R32((u32)(r_ebp+0xfffffdecu));
    /* 00516639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051663a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516640: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516645u); f_0047e390();
    /* 00516645: mov ecx, eax */ r_ecx = r_eax;
    /* 00516647: call 0x4ccd60 */ r_esp -= 4; W32(r_esp, 0x51664cu); f_004ccd60();
L_0051664c:; BB(0x0051664c);
    /* 0051664c: jmp 0x516a7b */ goto L_00516a7b;
L_00516651:; BB(0x00516651);
    /* 00516651: cmp dword ptr [0x793064], 9 */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516658: jne 0x5169ee */ if (!fZ) goto L_005169ee;
L_0051665e:; BB(0x0051665e);
    /* 0051665e: cmp dword ptr [ebp - 0x20c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516665: jl 0x5169cc */ if ((fS!=fO)) goto L_005169cc;
L_0051666b:; BB(0x0051666b);
    /* 0051666b: lea ecx, [ebp - 0x490] */ r_ecx = (u32)(r_ebp+0xfffffb70u);
    /* 00516671: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516672: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516679: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051667f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516684u); f_0047e390();
    /* 00516684: mov ecx, eax */ r_ecx = r_eax;
    /* 00516686: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x51668bu); f_004c7c40();
    /* 0051668b: mov dword ptr [ebp - 0x73c], eax */ W32((u32)(r_ebp+0xfffff8c4u), r_eax);
    /* 00516691: mov eax, dword ptr [ebp - 0x73c] */ r_eax = R32((u32)(r_ebp+0xfffff8c4u));
    /* 00516697: mov dword ptr [ebp - 0x740], eax */ W32((u32)(r_ebp+0xfffff8c0u), r_eax);
    /* 0051669d: mov dword ptr [ebp - 4], 0x59 */ W32((u32)(r_ebp+0xfffffffcu), 0x59u);
    /* 005166a4: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 005166aa: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005166b0: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 005166b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005166b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005166ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005166bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005166be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005166c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005166c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005166c4: lea edx, [ebp - 0x494] */ r_edx = (u32)(r_ebp+0xfffffb6cu);
    /* 005166ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005166cb: mov ecx, dword ptr [ebp - 0x740] */ r_ecx = R32((u32)(r_ebp+0xfffff8c0u));
    /* 005166d1: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x5166d6u); f_00485940();
    /* 005166d6: mov dword ptr [ebp - 0x744], eax */ W32((u32)(r_ebp+0xfffff8bcu), r_eax);
    /* 005166dc: mov eax, dword ptr [ebp - 0x744] */ r_eax = R32((u32)(r_ebp+0xfffff8bcu));
    /* 005166e2: mov dword ptr [ebp - 0x748], eax */ W32((u32)(r_ebp+0xfffff8b8u), r_eax);
    /* 005166e8: mov dword ptr [ebp - 4], 0x5a */ W32((u32)(r_ebp+0xfffffffcu), 0x5au);
    /* 005166ef: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 005166f5: or ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005166fb: mov dword ptr [ebp - 0x4b0], ecx */ W32((u32)(r_ebp+0xfffffb50u), r_ecx);
    /* 00516701: mov edx, dword ptr [0x7913d4] */ r_edx = R32((u32)(0x7913d4u));
    /* 00516707: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516708: lea eax, [ebp - 0x495] */ r_eax = (u32)(r_ebp+0xfffffb6bu);
    /* 0051670e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051670f: mov ecx, dword ptr [ebp - 0x748] */ r_ecx = R32((u32)(r_ebp+0xfffff8b8u));
    /* 00516715: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x51671au); f_004a2160();
    /* 0051671a: mov ecx, eax */ r_ecx = r_eax;
    /* 0051671c: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x516721u); f_004a1f00();
    /* 00516721: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00516724: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516726: je 0x516761 */ if (fZ) goto L_00516761;
L_00516728:; BB(0x00516728);
    /* 00516728: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051672a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x51672fu); f_0062fbf0();
    /* 0051672f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516734: jne 0x516761 */ if (!fZ) goto L_00516761;
L_00516736:; BB(0x00516736);
    /* 00516736: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051673c: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x516741u); f_0047e190();
    /* 00516741: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516744: je 0x516761 */ if (fZ) goto L_00516761;
L_00516746:; BB(0x00516746);
    /* 00516746: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051674c: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x516751u); f_0047d6f0();
    /* 00516751: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516753: jne 0x516761 */ if (!fZ) goto L_00516761;
L_00516755:; BB(0x00516755);
    /* 00516755: mov dword ptr [ebp - 0x74c], 1 */ W32((u32)(r_ebp+0xfffff8b4u), 0x1u);
    /* 0051675f: jmp 0x51676b */ goto L_0051676b;
L_00516761:; BB(0x00516761);
    /* 00516761: mov dword ptr [ebp - 0x74c], 0 */ W32((u32)(r_ebp+0xfffff8b4u), 0x0u);
L_0051676b:; BB(0x0051676b);
    /* 0051676b: mov dl, byte ptr [ebp - 0x74c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8b4u))) & 0xffu);
    /* 00516771: mov byte ptr [ebp - 0x486], dl */ W8((u32)(r_ebp+0xfffffb7au), (u8)r_edx);
    /* 00516777: mov dword ptr [ebp - 4], 0x59 */ W32((u32)(r_ebp+0xfffffffcu), 0x59u);
    /* 0051677e: mov eax, dword ptr [ebp - 0x4b0] */ r_eax = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516784: and eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00516789: je 0x5167a0 */ if (fZ) goto L_005167a0;
L_0051678b:; BB(0x0051678b);
    /* 0051678b: and dword ptr [ebp - 0x4b0], 0xfffdffff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00516795: lea ecx, [ebp - 0x494] */ r_ecx = (u32)(r_ebp+0xfffffb6cu);
    /* 0051679b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x5167a0u); f_004a20f0();
L_005167a0:; BB(0x005167a0);
    /* 005167a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005167a7: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 005167ad: and ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005167b3: je 0x5167ca */ if (fZ) goto L_005167ca;
L_005167b5:; BB(0x005167b5);
    /* 005167b5: and dword ptr [ebp - 0x4b0], 0xfffeffff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005167bf: lea ecx, [ebp - 0x490] */ r_ecx = (u32)(r_ebp+0xfffffb70u);
    /* 005167c5: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x5167cau); f_00484470();
L_005167ca:; BB(0x005167ca);
    /* 005167ca: movzx edx, byte ptr [ebp - 0x486] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffb7au));
    /* 005167d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005167d3: je 0x5167f7 */ if (fZ) goto L_005167f7;
L_005167d5:; BB(0x005167d5);
    /* 005167d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005167d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005167d9: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005167df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005167e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005167e6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5167ebu); f_0047e390();
    /* 005167eb: mov ecx, eax */ r_ecx = r_eax;
    /* 005167ed: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x5167f2u); f_004cce00();
    /* 005167f2: jmp 0x5169ca */ goto L_005169ca;
L_005167f7:; BB(0x005167f7);
    /* 005167f7: lea edx, [ebp - 0x4a0] */ r_edx = (u32)(r_ebp+0xfffffb60u);
    /* 005167fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005167fe: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516805: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051680b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516810u); f_0047e390();
    /* 00516810: mov ecx, eax */ r_ecx = r_eax;
    /* 00516812: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x516817u); f_004c7c40();
    /* 00516817: mov dword ptr [ebp - 0x750], eax */ W32((u32)(r_ebp+0xfffff8b0u), r_eax);
    /* 0051681d: mov ecx, dword ptr [ebp - 0x750] */ r_ecx = R32((u32)(r_ebp+0xfffff8b0u));
    /* 00516823: mov dword ptr [ebp - 0x754], ecx */ W32((u32)(r_ebp+0xfffff8acu), r_ecx);
    /* 00516829: mov dword ptr [ebp - 4], 0x5b */ W32((u32)(r_ebp+0xfffffffcu), 0x5bu);
    /* 00516830: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516836: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0051683c: mov dword ptr [ebp - 0x4b0], edx */ W32((u32)(r_ebp+0xfffffb50u), r_edx);
    /* 00516842: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516844: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516846: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516848: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051684a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051684c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051684e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516850: lea eax, [ebp - 0x4a4] */ r_eax = (u32)(r_ebp+0xfffffb5cu);
    /* 00516856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516857: mov ecx, dword ptr [ebp - 0x754] */ r_ecx = R32((u32)(r_ebp+0xfffff8acu));
    /* 0051685d: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x516862u); f_00485940();
    /* 00516862: mov dword ptr [ebp - 0x758], eax */ W32((u32)(r_ebp+0xfffff8a8u), r_eax);
    /* 00516868: mov ecx, dword ptr [ebp - 0x758] */ r_ecx = R32((u32)(r_ebp+0xfffff8a8u));
    /* 0051686e: mov dword ptr [ebp - 0x75c], ecx */ W32((u32)(r_ebp+0xfffff8a4u), r_ecx);
    /* 00516874: mov dword ptr [ebp - 4], 0x5c */ W32((u32)(r_ebp+0xfffffffcu), 0x5cu);
    /* 0051687b: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516881: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00516887: mov dword ptr [ebp - 0x4b0], edx */ W32((u32)(r_ebp+0xfffffb50u), r_edx);
    /* 0051688d: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 00516892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516893: lea ecx, [ebp - 0x4a5] */ r_ecx = (u32)(r_ebp+0xfffffb5bu);
    /* 00516899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051689a: mov ecx, dword ptr [ebp - 0x75c] */ r_ecx = R32((u32)(r_ebp+0xfffff8a4u));
    /* 005168a0: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x5168a5u); f_004a2160();
    /* 005168a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005168a7: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x5168acu); f_004a1e10();
    /* 005168ac: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005168af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005168b1: je 0x5168ec */ if (fZ) goto L_005168ec;
L_005168b3:; BB(0x005168b3);
    /* 005168b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005168b5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5168bau); f_0062fbf0();
    /* 005168ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005168bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005168bf: jne 0x5168ec */ if (!fZ) goto L_005168ec;
L_005168c1:; BB(0x005168c1);
    /* 005168c1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005168c7: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x5168ccu); f_0047e190();
    /* 005168cc: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005168cf: je 0x5168ec */ if (fZ) goto L_005168ec;
L_005168d1:; BB(0x005168d1);
    /* 005168d1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005168d7: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x5168dcu); f_0047d6f0();
    /* 005168dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005168de: jne 0x5168ec */ if (!fZ) goto L_005168ec;
L_005168e0:; BB(0x005168e0);
    /* 005168e0: mov dword ptr [ebp - 0x760], 1 */ W32((u32)(r_ebp+0xfffff8a0u), 0x1u);
    /* 005168ea: jmp 0x5168f6 */ goto L_005168f6;
L_005168ec:; BB(0x005168ec);
    /* 005168ec: mov dword ptr [ebp - 0x760], 0 */ W32((u32)(r_ebp+0xfffff8a0u), 0x0u);
L_005168f6:; BB(0x005168f6);
    /* 005168f6: mov al, byte ptr [ebp - 0x760] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffff8a0u))) & 0xffu);
    /* 005168fc: mov byte ptr [ebp - 0x496], al */ W8((u32)(r_ebp+0xfffffb6au), (u8)r_eax);
    /* 00516902: mov dword ptr [ebp - 4], 0x5b */ W32((u32)(r_ebp+0xfffffffcu), 0x5bu);
    /* 00516909: mov ecx, dword ptr [ebp - 0x4b0] */ r_ecx = R32((u32)(r_ebp+0xfffffb50u));
    /* 0051690f: and ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00516915: je 0x51692c */ if (fZ) goto L_0051692c;
L_00516917:; BB(0x00516917);
    /* 00516917: and dword ptr [ebp - 0x4b0], 0xfff7ffff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00516921: lea ecx, [ebp - 0x4a4] */ r_ecx = (u32)(r_ebp+0xfffffb5cu);
    /* 00516927: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x51692cu); f_004a20f0();
L_0051692c:; BB(0x0051692c);
    /* 0051692c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00516933: mov edx, dword ptr [ebp - 0x4b0] */ r_edx = R32((u32)(r_ebp+0xfffffb50u));
    /* 00516939: and edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0051693f: je 0x516956 */ if (fZ) goto L_00516956;
L_00516941:; BB(0x00516941);
    /* 00516941: and dword ptr [ebp - 0x4b0], 0xfffbffff */ { u32 ad = (u32)(r_ebp+0xfffffb50u);  u32 a = R32(ad); u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0051694b: lea ecx, [ebp - 0x4a0] */ r_ecx = (u32)(r_ebp+0xfffffb60u);
    /* 00516951: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x516956u); f_00484470();
L_00516956:; BB(0x00516956);
    /* 00516956: movzx eax, byte ptr [ebp - 0x496] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffb6au));
    /* 0051695d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051695f: je 0x516980 */ if (fZ) goto L_00516980;
L_00516961:; BB(0x00516961);
    /* 00516961: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516964: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516965: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0051696b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051696c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516972: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516977u); f_0047e390();
    /* 00516977: mov ecx, eax */ r_ecx = r_eax;
    /* 00516979: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x51697eu); f_004cce40();
    /* 0051697e: jmp 0x5169ca */ goto L_005169ca;
L_00516980:; BB(0x00516980);
    /* 00516980: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00516982: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x516987u); f_0062fbf0();
    /* 00516987: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051698a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051698c: jne 0x5169ad */ if (!fZ) goto L_005169ad;
L_0051698e:; BB(0x0051698e);
    /* 0051698e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516992: mov ecx, dword ptr [ebp - 0x20c] */ r_ecx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516998: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516999: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051699f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5169a4u); f_0047e390();
    /* 005169a4: mov ecx, eax */ r_ecx = r_eax;
    /* 005169a6: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x5169abu); f_004ccda0();
    /* 005169ab: jmp 0x5169ca */ goto L_005169ca;
L_005169ad:; BB(0x005169ad);
    /* 005169ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005169b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005169b1: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005169b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005169b8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005169be: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5169c3u); f_0047e390();
    /* 005169c3: mov ecx, eax */ r_ecx = r_eax;
    /* 005169c5: call 0x4ccd20 */ r_esp -= 4; W32(r_esp, 0x5169cau); f_004ccd20();
L_005169ca:; BB(0x005169ca);
    /* 005169ca: jmp 0x5169e9 */ goto L_005169e9;
L_005169cc:; BB(0x005169cc);
    /* 005169cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005169cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005169d0: mov edx, dword ptr [ebp - 0x214] */ r_edx = R32((u32)(r_ebp+0xfffffdecu));
    /* 005169d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005169d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005169dd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5169e2u); f_0047e390();
    /* 005169e2: mov ecx, eax */ r_ecx = r_eax;
    /* 005169e4: call 0x4ccd20 */ r_esp -= 4; W32(r_esp, 0x5169e9u); f_004ccd20();
L_005169e9:; BB(0x005169e9);
    /* 005169e9: jmp 0x516a7b */ goto L_00516a7b;
L_005169ee:; BB(0x005169ee);
    /* 005169ee: cmp dword ptr [0x793064], 0xb */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005169f5: jne 0x516a16 */ if (!fZ) goto L_00516a16;
L_005169f7:; BB(0x005169f7);
    /* 005169f7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005169fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005169fb: mov ecx, dword ptr [ebp - 0x214] */ r_ecx = R32((u32)(r_ebp+0xfffffdecu));
    /* 00516a01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516a02: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516a08: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516a0du); f_0047e390();
    /* 00516a0d: mov ecx, eax */ r_ecx = r_eax;
    /* 00516a0f: call 0x4ccca0 */ r_esp -= 4; W32(r_esp, 0x516a14u); f_004ccca0();
    /* 00516a14: jmp 0x516a7b */ goto L_00516a7b;
L_00516a16:; BB(0x00516a16);
    /* 00516a16: cmp dword ptr [0x793064], 0xd */ {  u32 a = R32((u32)(0x793064u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516a1d: jne 0x516a66 */ if (!fZ) goto L_00516a66;
L_00516a1f:; BB(0x00516a1f);
    /* 00516a1f: cmp dword ptr [ebp - 0x20c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516a26: jl 0x516a47 */ if ((fS!=fO)) goto L_00516a47;
L_00516a28:; BB(0x00516a28);
    /* 00516a28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516a2c: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 00516a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516a33: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516a39: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516a3eu); f_0047e390();
    /* 00516a3e: mov ecx, eax */ r_ecx = r_eax;
    /* 00516a40: call 0x4ccfe0 */ r_esp -= 4; W32(r_esp, 0x516a45u); f_004ccfe0();
    /* 00516a45: jmp 0x516a64 */ goto L_00516a64;
L_00516a47:; BB(0x00516a47);
    /* 00516a47: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516a4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516a4b: mov edx, dword ptr [ebp - 0x214] */ r_edx = R32((u32)(r_ebp+0xfffffdecu));
    /* 00516a51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516a52: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516a58: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516a5du); f_0047e390();
    /* 00516a5d: mov ecx, eax */ r_ecx = r_eax;
    /* 00516a5f: call 0x4ccfe0 */ r_esp -= 4; W32(r_esp, 0x516a64u); f_004ccfe0();
L_00516a64:; BB(0x00516a64);
    /* 00516a64: jmp 0x516a7b */ goto L_00516a7b;
L_00516a66:; BB(0x00516a66);
    /* 00516a66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516a68: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516a6e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00516a70: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516a76: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00516a79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516a7bu); call_ind(t); }
L_00516a7b:; BB(0x00516a7b);
    /* 00516a7b: jmp 0x516a92 */ goto L_00516a92;
L_00516a7d:; BB(0x00516a7d);
    /* 00516a7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516a7f: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516a85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00516a87: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516a8d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00516a90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516a92u); call_ind(t); }
L_00516a92:; BB(0x00516a92);
    /* 00516a92: jmp 0x516cb0 */ goto L_00516cb0;
L_00516a97:; BB(0x00516a97);
    /* 00516a97: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00516a99: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516a9f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00516aa1: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516aa7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00516aaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516aacu); call_ind(t); }
    /* 00516aac: mov ecx, dword ptr [0x79309c] */ r_ecx = R32((u32)(0x79309cu));
    /* 00516ab2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516ab3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516ab9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516abeu); f_0047e390();
    /* 00516abe: mov ecx, eax */ r_ecx = r_eax;
    /* 00516ac0: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x516ac5u); f_004c6cb0();
    /* 00516ac5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516ac8: jne 0x516b60 */ if (!fZ) goto L_00516b60;
L_00516ace:; BB(0x00516ace);
    /* 00516ace: mov edx, dword ptr [0x79309c] */ r_edx = R32((u32)(0x79309cu));
    /* 00516ad4: mov dword ptr [ebp - 0x228], edx */ W32((u32)(r_ebp+0xfffffdd8u), r_edx);
L_00516ada:; BB(0x00516ada);
    /* 00516ada: mov eax, dword ptr [ebp - 0x228] */ r_eax = R32((u32)(r_ebp+0xfffffdd8u));
    /* 00516ae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516ae1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516ae7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516aecu); f_0047e390();
    /* 00516aec: mov ecx, eax */ r_ecx = r_eax;
    /* 00516aee: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x516af3u); f_004c6cb0();
    /* 00516af3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516af6: je 0x516b14 */ if (fZ) goto L_00516b14;
L_00516af8:; BB(0x00516af8);
    /* 00516af8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516afe: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x516b03u); f_0047f950();
    /* 00516b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516b04: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x516b09u); f_0062fbf0();
    /* 00516b09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516b0c: mov dword ptr [ebp - 0x228], eax */ W32((u32)(r_ebp+0xfffffdd8u), r_eax);
    /* 00516b12: jmp 0x516ada */ goto L_00516ada;
L_00516b14:; BB(0x00516b14);
    /* 00516b14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00516b16: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x516b1bu); f_0062fbf0();
    /* 00516b1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516b20: jne 0x516b41 */ if (!fZ) goto L_00516b41;
L_00516b22:; BB(0x00516b22);
    /* 00516b22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516b25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b26: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 00516b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516b33: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516b38u); f_0047e390();
    /* 00516b38: mov ecx, eax */ r_ecx = r_eax;
    /* 00516b3a: call 0x4cd1b0 */ r_esp -= 4; W32(r_esp, 0x516b3fu); f_004cd1b0();
    /* 00516b3f: jmp 0x516b5e */ goto L_00516b5e;
L_00516b41:; BB(0x00516b41);
    /* 00516b41: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516b45: mov ecx, dword ptr [ebp - 0x228] */ r_ecx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 00516b4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b4c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516b52: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516b57u); f_0047e390();
    /* 00516b57: mov ecx, eax */ r_ecx = r_eax;
    /* 00516b59: call 0x4cd190 */ r_esp -= 4; W32(r_esp, 0x516b5eu); f_004cd190();
L_00516b5e:; BB(0x00516b5e);
    /* 00516b5e: jmp 0x516baa */ goto L_00516baa;
L_00516b60:; BB(0x00516b60);
    /* 00516b60: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00516b62: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x516b67u); f_0062fbf0();
    /* 00516b67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516b6a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516b6d: jne 0x516b8d */ if (!fZ) goto L_00516b8d;
L_00516b6f:; BB(0x00516b6f);
    /* 00516b6f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516b72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b73: mov eax, dword ptr [0x79309c] */ r_eax = R32((u32)(0x79309cu));
    /* 00516b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516b79: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516b7f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516b84u); f_0047e390();
    /* 00516b84: mov ecx, eax */ r_ecx = r_eax;
    /* 00516b86: call 0x4cd1d0 */ r_esp -= 4; W32(r_esp, 0x516b8bu); f_004cd1d0();
    /* 00516b8b: jmp 0x516baa */ goto L_00516baa;
L_00516b8d:; BB(0x00516b8d);
    /* 00516b8d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00516b90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b91: mov edx, dword ptr [0x79309c] */ r_edx = R32((u32)(0x79309cu));
    /* 00516b97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00516b98: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516b9e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x516ba3u); f_0047e390();
    /* 00516ba3: mov ecx, eax */ r_ecx = r_eax;
    /* 00516ba5: call 0x4cd170 */ r_esp -= 4; W32(r_esp, 0x516baau); f_004cd170();
L_00516baa:; BB(0x00516baa);
    /* 00516baa: jmp 0x516cb0 */ goto L_00516cb0;
L_00516baf:; BB(0x00516baf);
    /* 00516baf: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00516bb1: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516bb7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00516bb9: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516bbf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00516bc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516bc4u); call_ind(t); }
    /* 00516bc4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00516bc6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00516bcc: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x516bd1u); f_00637810();
    /* 00516bd1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00516bd4: jge 0x516c05 */ if ((fS==fO)) goto L_00516c05;
L_00516bd6:; BB(0x00516bd6);
    /* 00516bd6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00516bd8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00516bde: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x516be3u); f_00637810();
    /* 00516be3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00516be5: jl 0x516c05 */ if ((fS!=fO)) goto L_00516c05;
L_00516be7:; BB(0x00516be7);
    /* 00516be7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00516be9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00516bef: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x516bf4u); f_00637810();
    /* 00516bf4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00516bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00516bf8: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516bfe: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x516c03u); f_005fc490();
    /* 00516c03: jmp 0x516c12 */ goto L_00516c12;
L_00516c05:; BB(0x00516c05);
    /* 00516c05: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00516c07: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c0d: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x516c12u); f_005fc490();
L_00516c12:; BB(0x00516c12);
    /* 00516c12: jmp 0x516cb0 */ goto L_00516cb0;
L_00516c17:; BB(0x00516c17);
    /* 00516c17: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00516c19: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00516c21: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c27: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00516c2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516c2cu); call_ind(t); }
    /* 00516c2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516c2e: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00516c36: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c3c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00516c3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516c41u); call_ind(t); }
    /* 00516c41: jmp 0x516cb0 */ goto L_00516cb0;
L_00516c43:; BB(0x00516c43);
    /* 00516c43: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00516c45: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00516c4d: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c53: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00516c56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516c58u); call_ind(t); }
    /* 00516c58: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516c5a: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c60: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00516c62: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c68: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00516c6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516c6du); call_ind(t); }
    /* 00516c6d: jmp 0x516cb0 */ goto L_00516cb0;
L_00516c6f:; BB(0x00516c6f);
    /* 00516c6f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516c75: call 0x47aaa0 */ r_esp -= 4; W32(r_esp, 0x516c7au); f_0047aaa0();
    /* 00516c7a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00516c80: call 0x47aa30 */ r_esp -= 4; W32(r_esp, 0x516c85u); f_0047aa30();
    /* 00516c85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516c87: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c8d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00516c90: mov eax, dword ptr [ebp - 0x4b4] */ r_eax = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516c96: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00516c99: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00516c9b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00516c9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x516ca0u); call_ind(t); }
    /* 00516ca0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516ca2: mov ecx, dword ptr [ebp - 0x4b4] */ r_ecx = R32((u32)(r_ebp+0xfffffb4cu));
    /* 00516ca8: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00516cab: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x516cb0u); f_005fc420();
L_00516cb0:; BB(0x00516cb0);
    /* 00516cb0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00516cb3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00516cba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516cbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00516cbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00516cbd: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00516cc3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00516cc5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x516ccau); f_00686d72();
    /* 00516cca: mov esp, ebp */ r_esp = r_ebp;
    /* 00516ccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00516ccd: ret 4 */ FN_RET(0x0050c9a0); r_esp += 8; return;
}

