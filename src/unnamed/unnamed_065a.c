#include "protos.h"

void f_0065a0b0(void) /* sub_65A0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a0b0);
    /* 0065a0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a0b3: sub esp, 0x418 */ {  u32 a = r_esp; u32 b = 0x418u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a0b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065a0be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065a0c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065a0c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0c5: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 0065a0cb: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0065a0d2: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0d9: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 0065a0df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0e0: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x65a0e5u); f_00686fa2();
    /* 0065a0e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a0e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065a0eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0ec: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0f1: push 0x795fc0 */ { u32 v = 0x795fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0f6: push 0x6de52c */ { u32 v = 0x6de52cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a0fb: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0065a101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a102: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x65a108u); call_ind(t); }
    /* 0065a108: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a10b: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a110: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0065a116: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a117: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x65a11cu); f_005ea9c0();
    /* 0065a11c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a11f: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 0065a125: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a12c: jne 0x65a135 */ if (!fZ) goto L_0065a135;
L_0065a12e:; BB(0x0065a12e);
    /* 0065a12e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065a130: jmp 0x65a27e */ goto L_0065a27e;
L_0065a135:; BB(0x0065a135);
    /* 0065a135: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0065a13b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a13c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a13e: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a140: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a146: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 0065a14c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065a14f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a150: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x65a156u); call_ind(t); }
    /* 0065a156: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a159: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0065a15f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a160: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x65a166u); call_ind(t); }
    /* 0065a166: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a169: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 0065a173: jmp 0x65a184 */ goto L_0065a184;
L_0065a175:; BB(0x0065a175);
    /* 0065a175: mov edx, dword ptr [ebp - 0x410] */ r_edx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0065a17b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a17e: mov dword ptr [ebp - 0x410], edx */ W32((u32)(r_ebp+0xfffffbf0u), r_edx);
L_0065a184:; BB(0x0065a184);
    /* 0065a184: cmp dword ptr [ebp - 0x410], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065a18b: jge 0x65a18f */ if ((fS==fO)) goto L_0065a18f;
L_0065a18d:; BB(0x0065a18d);
    /* 0065a18d: jmp 0x65a175 */ goto L_0065a175;
L_0065a18f:; BB(0x0065a18f);
    /* 0065a18f: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a195: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 0065a19b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a19c: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a1a2: call 0x657500 */ r_esp -= 4; W32(r_esp, 0x65a1a7u); f_00657500();
    /* 0065a1a7: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a1ad: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0065a1b3: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x65a1b8u); f_00664630();
    /* 0065a1b8: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a1be: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065a1c4: movsx edx, byte ptr [ecx + 0x40] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x40u));
    /* 0065a1c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1c9: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a1cf: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x65a1d4u); f_006595e0();
    /* 0065a1d4: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1d9: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a1df: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65a1e4u); f_005fb5e0();
    /* 0065a1e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a1e6: je 0x65a228 */ if (fZ) goto L_0065a228;
L_0065a1e8:; BB(0x0065a1e8);
    /* 0065a1e8: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a1ed: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a1f3: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65a1f8u); f_005fb5e0();
    /* 0065a1f8: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0065a1fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a200: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065a203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a204: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x65a209u); f_00665800();
    /* 0065a209: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a20c: add eax, 0x186bf */ {  u32 a = r_eax; u32 b = 0x186bfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065a211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a212: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0065a218: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065a21a: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0065a220: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0065a226: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a228u); call_ind(t); }
L_0065a228:; BB(0x0065a228);
    /* 0065a228: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065a22b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a22c: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a232: add edx, 0x1bc */ {  u32 a = r_edx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a239: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65a23eu); f_00686d8e();
    /* 0065a23e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a241: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a247: mov esi, dword ptr [eax + 0x1dc] */ r_esi = R32((u32)(r_eax+0x1dcu));
    /* 0065a24d: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065a250: mov edi, dword ptr [ebp - 0x414] */ r_edi = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a256: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a25c: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065a261: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065a263: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a267: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0065a26d: add ecx, 0x22c */ {  u32 a = r_ecx; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a274: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x65a279u); f_00686fa2();
    /* 0065a279: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a27c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0065a27e:; BB(0x0065a27e);
    /* 0065a27e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065a27f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065a280: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a283: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a285: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65a28au); f_00686d72();
    /* 0065a28a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a28c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a28d: ret 4 */ FN_RET(0x0065a0b0); r_esp += 8; return;
}

void f_0065a290(void) /* sub_65A290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a290);
    /* 0065a290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a291: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a294: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a295: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a296: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a299: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a29c: call 0x657430 */ r_esp -= 4; W32(r_esp, 0x65a2a1u); f_00657430();
    /* 0065a2a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a2a4: mov byte ptr [eax + 0x1bc], 0 */ W8((u32)(r_eax+0x1bcu), 0x0u);
    /* 0065a2ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a2ae: mov esi, dword ptr [ecx + 0x1dc] */ r_esi = R32((u32)(r_ecx+0x1dcu));
    /* 0065a2b4: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065a2b7: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a2ba: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a2c0: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065a2c5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065a2c7: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a2ce: add edx, 0x22c */ {  u32 a = r_edx; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a2d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2d5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x65a2dau); f_00686fa2();
    /* 0065a2da: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a2dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065a2de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065a2df: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a2e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a2e2: ret  */ FN_RET(0x0065a290); r_esp += 4; return;
}

void f_0065a2f0(void) /* sub_65A2F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a2f0);
    /* 0065a2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a2f3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a2f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065a2f8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065a2fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a302: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a305: call 0x657430 */ r_esp -= 4; W32(r_esp, 0x65a30au); f_00657430();
    /* 0065a30a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a30c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x65a311u); f_0062fbf0();
    /* 0065a311: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a315: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a318: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0065a31e: call 0x664c90 */ r_esp -= 4; W32(r_esp, 0x65a323u); f_00664c90();
    /* 0065a323: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0065a32a: jmp 0x65a335 */ goto L_0065a335;
L_0065a32c:; BB(0x0065a32c);
    /* 0065a32c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a32f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a332: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0065a335:; BB(0x0065a335);
    /* 0065a335: cmp dword ptr [ebp - 0xc], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065a339: jge 0x65a426 */ if ((fS==fO)) goto L_0065a426;
L_0065a33f:; BB(0x0065a33f);
    /* 0065a33f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a341: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x65a346u); f_0062fbf0();
    /* 0065a346: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a34b: je 0x65a35b */ if (fZ) goto L_0065a35b;
L_0065a34d:; BB(0x0065a34d);
    /* 0065a34d: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a351: je 0x65a359 */ if (fZ) goto L_0065a359;
L_0065a353:; BB(0x0065a353);
    /* 0065a353: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a357: jne 0x65a35b */ if (!fZ) goto L_0065a35b;
L_0065a359:; BB(0x0065a359);
    /* 0065a359: jmp 0x65a32c */ goto L_0065a32c;
L_0065a35b:; BB(0x0065a35b);
    /* 0065a35b: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a35f: jne 0x65a399 */ if (!fZ) goto L_0065a399;
L_0065a361:; BB(0x0065a361);
    /* 0065a361: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a364: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a365: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a369: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a36c: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065a372: call 0x675ca0 */ r_esp -= 4; W32(r_esp, 0x65a377u); f_00675ca0();
    /* 0065a377: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065a37a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a37d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a37e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a381: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a385: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a386: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a389: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065a38f: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65a394u); f_00675b40();
    /* 0065a394: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065a397: jmp 0x65a3cb */ goto L_0065a3cb;
L_0065a399:; BB(0x0065a399);
    /* 0065a399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a39b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a39e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a39f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a3a2: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065a3a8: call 0x675ca0 */ r_esp -= 4; W32(r_esp, 0x65a3adu); f_00675ca0();
    /* 0065a3ad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065a3b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a3b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a3b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a3bd: mov ecx, dword ptr [ecx + 0x63c] */ r_ecx = R32((u32)(r_ecx+0x63cu));
    /* 0065a3c3: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65a3c8u); f_00675b40();
    /* 0065a3c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065a3cb:; BB(0x0065a3cb);
    /* 0065a3cb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a3ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a3d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a3d6: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 0065a3dc: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65a3e1u); f_00664730();
    /* 0065a3e1: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a3e5: je 0x65a3ed */ if (fZ) goto L_0065a3ed;
L_0065a3e7:; BB(0x0065a3e7);
    /* 0065a3e7: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a3eb: jne 0x65a421 */ if (!fZ) goto L_0065a421;
L_0065a3ed:; BB(0x0065a3ed);
    /* 0065a3ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a3f0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065a3f3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0065a3f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a3fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a3fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a3ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a400: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a403: mov ecx, dword ptr [edx + 0x63c] */ r_ecx = R32((u32)(r_edx+0x63cu));
    /* 0065a409: call 0x675b40 */ r_esp -= 4; W32(r_esp, 0x65a40eu); f_00675b40();
    /* 0065a40e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a40f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a412: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a413: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a416: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 0065a41c: call 0x664730 */ r_esp -= 4; W32(r_esp, 0x65a421u); f_00664730();
L_0065a421:; BB(0x0065a421);
    /* 0065a421: jmp 0x65a32c */ goto L_0065a32c;
L_0065a426:; BB(0x0065a426);
    /* 0065a426: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a428: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a42a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a42d: call 0x657e60 */ r_esp -= 4; W32(r_esp, 0x65a432u); f_00657e60();
    /* 0065a432: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a435: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 0065a43b: call 0x664cb0 */ r_esp -= 4; W32(r_esp, 0x65a440u); f_00664cb0();
    /* 0065a440: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0065a443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a444: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a447: call 0x6595e0 */ r_esp -= 4; W32(r_esp, 0x65a44cu); f_006595e0();
    /* 0065a44c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a44f: mov byte ptr [ecx + 0x1bc], 0 */ W8((u32)(r_ecx+0x1bcu), 0x0u);
    /* 0065a456: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a459: mov esi, dword ptr [edx + 0x1dc] */ r_esi = R32((u32)(r_edx+0x1dcu));
    /* 0065a45f: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065a462: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a465: add edi, 0x1e0 */ {  u32 a = r_edi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a46b: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065a470: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065a472: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a475: mov esi, dword ptr [eax + 0x1dc] */ r_esi = R32((u32)(r_eax+0x1dcu));
    /* 0065a47b: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065a47e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a481: add edi, 0x22c */ {  u32 a = r_edi; u32 b = 0x22cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065a487: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065a48c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065a48e: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a493: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a496: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65a49bu); f_005fb5e0();
    /* 0065a49b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a49d: je 0x65a530 */ if (fZ) goto L_0065a530;
L_0065a4a3:; BB(0x0065a4a3);
    /* 0065a4a3: mov dword ptr [ebp - 0x18], 0x21 */ W32((u32)(r_ebp+0xffffffe8u), 0x21u);
    /* 0065a4aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065a4b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065a4b2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065a4b8: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0065a4be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a4c0u); call_ind(t); }
    /* 0065a4c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065a4c3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a4c7: je 0x65a504 */ if (fZ) goto L_0065a504;
L_0065a4c9:; BB(0x0065a4c9);
    /* 0065a4c9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0065a4d0: jmp 0x65a4db */ goto L_0065a4db;
L_0065a4d2:; BB(0x0065a4d2);
    /* 0065a4d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a4d5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a4d8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0065a4db:; BB(0x0065a4db);
    /* 0065a4db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a4de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a4e1: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a4e5: je 0x65a4e9 */ if (fZ) goto L_0065a4e9;
L_0065a4e7:; BB(0x0065a4e7);
    /* 0065a4e7: jmp 0x65a4d2 */ goto L_0065a4d2;
L_0065a4e9:; BB(0x0065a4e9);
    /* 0065a4e9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a4ed: je 0x65a504 */ if (fZ) goto L_0065a504;
L_0065a4ef:; BB(0x0065a4ef);
    /* 0065a4ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065a4f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a4f3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x65a4f8u); f_0062fbf0();
    /* 0065a4f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a4fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a4fe: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0065a501: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0065a504:; BB(0x0065a504);
    /* 0065a504: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a509: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a50c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x65a511u); f_005fb5e0();
    /* 0065a511: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065a514: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a516: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065a519: add ecx, 0x186bf */ {  u32 a = r_ecx; u32 b = 0x186bfu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065a51f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a520: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a523: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a525: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065a528: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 0065a52e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65a530u); call_ind(t); }
L_0065a530:; BB(0x0065a530);
    /* 0065a530: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065a531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065a532: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a535: ret  */ FN_RET(0x0065a2f0); r_esp += 4; return;
}

void f_0065a540(void) /* sub_65A540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a540);
    /* 0065a540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a541: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a545: push 0x6ac6b3 */ { u32 v = 0x6ac6b3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a54a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a551: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a554: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065a559: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065a55b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a55c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065a55f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065a565: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065a568: cmp dword ptr [0x16306a8], 0 */ {  u32 a = R32((u32)(0x16306a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a56f: jne 0x65a5b8 */ if (!fZ) goto L_0065a5b8;
L_0065a571:; BB(0x0065a571);
    /* 0065a571: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a576: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65a57bu); f_00686d82();
    /* 0065a57b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a57e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065a581: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a588: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a58c: je 0x65a59b */ if (fZ) goto L_0065a59b;
L_0065a58e:; BB(0x0065a58e);
    /* 0065a58e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a591: call 0x65d1e0 */ r_esp -= 4; W32(r_esp, 0x65a596u); f_0065d1e0();
    /* 0065a596: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065a599: jmp 0x65a5a2 */ goto L_0065a5a2;
L_0065a59b:; BB(0x0065a59b);
    /* 0065a59b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0065a5a2:; BB(0x0065a5a2);
    /* 0065a5a2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a5a5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065a5a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065a5af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a5b2: mov dword ptr [0x16306a8], ecx */ W32((u32)(0x16306a8u), r_ecx);
L_0065a5b8:; BB(0x0065a5b8);
    /* 0065a5b8: mov edx, dword ptr [0x16306a8] */ r_edx = R32((u32)(0x16306a8u));
    /* 0065a5be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065a5c0: mov ecx, dword ptr [0x16306a8] */ r_ecx = R32((u32)(0x16306a8u));
    /* 0065a5c6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0065a5c9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65a5cbu); call_ind(t); }
    /* 0065a5cb: cmp dword ptr [0x16306a8], 0 */ {  u32 a = R32((u32)(0x16306a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a5d2: je 0x65a5df */ if (fZ) goto L_0065a5df;
L_0065a5d4:; BB(0x0065a5d4);
    /* 0065a5d4: mov ecx, dword ptr [0x16306a8] */ r_ecx = R32((u32)(0x16306a8u));
    /* 0065a5da: call 0x65c4d0 */ r_esp -= 4; W32(r_esp, 0x65a5dfu); f_0065c4d0();
L_0065a5df:; BB(0x0065a5df);
    /* 0065a5df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a5e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a5e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a5ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a5ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a5ed: ret  */ FN_RET(0x0065a540); r_esp += 4; return;
}

void f_0065a5f0(void) /* sub_65A5F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a5f0);
    /* 0065a5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a5f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a5f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a5f7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a5fb: je 0x65a609 */ if (fZ) goto L_0065a609;
L_0065a5fd:; BB(0x0065a5fd);
    /* 0065a5fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065a600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a601: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065a604: call 0x65a0b0 */ r_esp -= 4; W32(r_esp, 0x65a609u); f_0065a0b0();
L_0065a609:; BB(0x0065a609);
    /* 0065a609: mov ecx, dword ptr [0x16306a8] */ r_ecx = R32((u32)(0x16306a8u));
    /* 0065a60f: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x65a614u); f_005f87d0();
    /* 0065a614: mov ecx, dword ptr [0x16306a8] */ r_ecx = R32((u32)(0x16306a8u));
    /* 0065a61a: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x65a61fu); f_005f8990();
    /* 0065a61f: mov dword ptr [0x16306a8], 0 */ W32((u32)(0x16306a8u), 0x0u);
    /* 0065a629: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a62b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a62c: ret 4 */ FN_RET(0x0065a5f0); r_esp += 8; return;
}

void f_0065a630(void) /* sub_65A630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a630);
    /* 0065a630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a631: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065a635: push 0x6ac6d9 */ { u32 v = 0x6ac6d9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a63a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065a640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a641: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065a644: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065a649: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065a64b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a64c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065a64f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065a655: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065a658: cmp dword ptr [0x16306ac], 0 */ {  u32 a = R32((u32)(0x16306acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a65f: jne 0x65a6ac */ if (!fZ) goto L_0065a6ac;
L_0065a661:; BB(0x0065a661);
    /* 0065a661: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a666: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65a66bu); f_00686d82();
    /* 0065a66b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a66e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065a671: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065a678: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065a67c: je 0x65a68f */ if (fZ) goto L_0065a68f;
L_0065a67e:; BB(0x0065a67e);
    /* 0065a67e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065a681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065a682: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065a685: call 0x65d520 */ r_esp -= 4; W32(r_esp, 0x65a68au); f_0065d520();
    /* 0065a68a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065a68d: jmp 0x65a696 */ goto L_0065a696;
L_0065a68f:; BB(0x0065a68f);
    /* 0065a68f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0065a696:; BB(0x0065a696);
    /* 0065a696: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065a699: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065a69c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065a6a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065a6a6: mov dword ptr [0x16306ac], edx */ W32((u32)(0x16306acu), r_edx);
L_0065a6ac:; BB(0x0065a6ac);
    /* 0065a6ac: mov eax, dword ptr [0x16306ac] */ r_eax = R32((u32)(0x16306acu));
    /* 0065a6b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065a6b3: mov ecx, dword ptr [0x16306ac] */ r_ecx = R32((u32)(0x16306acu));
    /* 0065a6b9: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0065a6bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65a6beu); call_ind(t); }
    /* 0065a6be: mov ecx, dword ptr [0x16306ac] */ r_ecx = R32((u32)(0x16306acu));
    /* 0065a6c4: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x65a6c9u); f_005f85d0();
    /* 0065a6c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065a6cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065a6d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065a6d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a6d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a6d7: ret 4 */ FN_RET(0x0065a630); r_esp += 8; return;
}

void f_0065a6e0(void) /* sub_65A6E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a6e0);
    /* 0065a6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a6e7: mov ecx, dword ptr [0x16306ac] */ r_ecx = R32((u32)(0x16306acu));
    /* 0065a6ed: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x65a6f2u); f_005f87d0();
    /* 0065a6f2: mov ecx, dword ptr [0x16306ac] */ r_ecx = R32((u32)(0x16306acu));
    /* 0065a6f8: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x65a6fdu); f_005f8990();
    /* 0065a6fd: mov dword ptr [0x16306ac], 0 */ W32((u32)(0x16306acu), 0x0u);
    /* 0065a707: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a70a: ret  */ FN_RET(0x0065a6e0); r_esp += 4; return;
}

void f_0065a710(void) /* sub_65A710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a710);
    /* 0065a710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a711: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a717: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065a71d: call 0x64f600 */ r_esp -= 4; W32(r_esp, 0x65a722u); f_0064f600();
    /* 0065a722: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a725: ret  */ FN_RET(0x0065a710); r_esp += 4; return;
}

void f_0065a730(void) /* sub_65A730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065a730);
    /* 0065a730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065a731: mov ebp, esp */ r_ebp = r_esp;
    /* 0065a733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065a734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065a737: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065a739: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x65a73eu); f_0060cce0();
    /* 0065a73e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065a741: mov esp, ebp */ r_esp = r_ebp;
    /* 0065a743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065a744: ret  */ FN_RET(0x0065a730); r_esp += 4; return;
}

void f_0065adb0(void) /* sub_65ADB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065adb0);
    /* 0065adb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065adb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065adb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065adb5: push 0x6ac74e */ { u32 v = 0x6ac74eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065adba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065adc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065adc1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065adc4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065adc9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065adcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065adcc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065adcf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065add5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0065add8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065addf: jmp 0x65adea */ goto L_0065adea;
L_0065ade1:; BB(0x0065ade1);
    /* 0065ade1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ade4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065ade7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0065adea:; BB(0x0065adea);
    /* 0065adea: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065adee: jge 0x65b05d */ if ((fS==fO)) goto L_0065b05d;
L_0065adf4:; BB(0x0065adf4);
    /* 0065adf4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065adf7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065adfa: cmp dword ptr [edx + ecx*4 + 0x218], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x218u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ae02: jne 0x65ae8d */ if (!fZ) goto L_0065ae8d;
L_0065ae08:; BB(0x0065ae08);
    /* 0065ae08: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae0d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65ae12u); f_00686d82();
    /* 0065ae12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065ae15: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065ae18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065ae1f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ae23: je 0x65ae32 */ if (fZ) goto L_0065ae32;
L_0065ae25:; BB(0x0065ae25);
    /* 0065ae25: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065ae28: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x65ae2du); f_005eaaf0();
    /* 0065ae2d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0065ae30: jmp 0x65ae39 */ goto L_0065ae39;
L_0065ae32:; BB(0x0065ae32);
    /* 0065ae32: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0065ae39:; BB(0x0065ae39);
    /* 0065ae39: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065ae3c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ae3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065ae46: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ae49: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ae4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ae4f: mov dword ptr [edx + ecx*4 + 0x218], eax */ W32((u32)(r_edx+r_ecx*4+0x218u), r_eax);
    /* 0065ae56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ae59: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ae5c: mov eax, dword ptr [edx + ecx*4 + 0x218] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065ae63: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ae66: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0065ae69: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0065ae6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ae6f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ae72: mov edx, dword ptr [ecx + eax*4 + 0x218] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065ae79: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ae7c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ae7f: mov ecx, dword ptr [ecx + eax*4 + 0x218] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065ae86: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065ae88: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0065ae8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ae8du); call_ind(t); }
L_0065ae8d:; BB(0x0065ae8d);
    /* 0065ae8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ae8f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ae92: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065ae95: mov eax, dword ptr [edx + ecx*4 + 0x218] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065ae9c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ae9f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aea2: mov ecx, dword ptr [edx + ecx*4 + 0x218] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065aea9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065aeab: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0065aeb1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65aeb3u); call_ind(t); }
    /* 0065aeb3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aeb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065aeb8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aebb: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065aebe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65aec0u); call_ind(t); }
    /* 0065aec0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065aec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aec4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aec7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065aec9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aecc: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065aecf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65aed1u); call_ind(t); }
    /* 0065aed1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065aed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aed5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065aed8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aedb: mov eax, dword ptr [edx + ecx*4 + 0x218] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065aee2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065aee5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aee8: mov ecx, dword ptr [edx + ecx*4 + 0x218] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x218u));
    /* 0065aeef: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065aef1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0065aef4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65aef6u); call_ind(t); }
    /* 0065aef6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aef9: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x65aefeu); f_005f53c0();
    /* 0065aefe: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065af01: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065af04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065af05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065af08: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065af0b: mov edx, dword ptr [ecx + eax*4 + 0x218] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065af12: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065af15: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065af18: mov ecx, dword ptr [ecx + eax*4 + 0x218] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x218u));
    /* 0065af1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065af21: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0065af24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65af26u); call_ind(t); }
    /* 0065af26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065af29: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065af2c: cmp dword ptr [edx + ecx*4 + 0x224], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x224u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065af34: jne 0x65afbf */ if (!fZ) goto L_0065afbf;
L_0065af3a:; BB(0x0065af3a);
    /* 0065af3a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0065af3f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65af44u); f_00686d82();
    /* 0065af44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065af47: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065af4a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065af51: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065af55: je 0x65af64 */ if (fZ) goto L_0065af64;
L_0065af57:; BB(0x0065af57);
    /* 0065af57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065af5a: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x65af5fu); f_005eaaf0();
    /* 0065af5f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0065af62: jmp 0x65af6b */ goto L_0065af6b;
L_0065af64:; BB(0x0065af64);
    /* 0065af64: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0065af6b:; BB(0x0065af6b);
    /* 0065af6b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065af6e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065af71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065af78: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065af7b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065af7e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065af81: mov dword ptr [edx + ecx*4 + 0x224], eax */ W32((u32)(r_edx+r_ecx*4+0x224u), r_eax);
    /* 0065af88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065af8b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065af8e: mov eax, dword ptr [edx + ecx*4 + 0x224] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065af95: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065af98: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0065af9b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0065af9e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065afa1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065afa4: mov edx, dword ptr [ecx + eax*4 + 0x224] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065afab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065afae: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065afb1: mov ecx, dword ptr [ecx + eax*4 + 0x224] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065afb8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065afba: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0065afbd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65afbfu); call_ind(t); }
L_0065afbf:; BB(0x0065afbf);
    /* 0065afbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065afc1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065afc4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065afc7: mov eax, dword ptr [edx + ecx*4 + 0x224] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065afce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065afd1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065afd4: mov ecx, dword ptr [edx + ecx*4 + 0x224] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065afdb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065afdd: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0065afe3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65afe5u); call_ind(t); }
    /* 0065afe5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065afe8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065afea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065afed: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065aff0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65aff2u); call_ind(t); }
    /* 0065aff2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065aff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065aff6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065aff9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065affb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065affe: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065b001: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b003u); call_ind(t); }
    /* 0065b003: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b007: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065b00a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b00d: mov eax, dword ptr [edx + ecx*4 + 0x224] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b014: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065b017: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b01a: mov ecx, dword ptr [edx + ecx*4 + 0x224] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x224u));
    /* 0065b021: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0065b023: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0065b026: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65b028u); call_ind(t); }
    /* 0065b028: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b02b: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x65b030u); f_005f53c0();
    /* 0065b030: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065b033: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065b036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065b037: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065b03a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b03d: mov edx, dword ptr [ecx + eax*4 + 0x224] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065b044: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065b047: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b04a: mov ecx, dword ptr [ecx + eax*4 + 0x224] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x224u));
    /* 0065b051: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065b053: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0065b056: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65b058u); call_ind(t); }
    /* 0065b058: jmp 0x65ade1 */ goto L_0065ade1;
L_0065b05d:; BB(0x0065b05d);
    /* 0065b05d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b060: cmp dword ptr [ecx + 0x230], 0 */ {  u32 a = R32((u32)(r_ecx+0x230u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b067: jne 0x65b0c5 */ if (!fZ) goto L_0065b0c5;
L_0065b069:; BB(0x0065b069);
    /* 0065b069: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b06e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65b073u); f_00686d82();
    /* 0065b073: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065b076: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065b079: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0065b080: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b084: je 0x65b093 */ if (fZ) goto L_0065b093;
L_0065b086:; BB(0x0065b086);
    /* 0065b086: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065b089: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x65b08eu); f_005eaaf0();
    /* 0065b08e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0065b091: jmp 0x65b09a */ goto L_0065b09a;
L_0065b093:; BB(0x0065b093);
    /* 0065b093: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0065b09a:; BB(0x0065b09a);
    /* 0065b09a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065b09d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065b0a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b0a7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b0aa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065b0ad: mov dword ptr [eax + 0x230], ecx */ W32((u32)(r_eax+0x230u), r_ecx);
    /* 0065b0b3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b0b6: mov eax, dword ptr [edx + 0x230] */ r_eax = R32((u32)(r_edx+0x230u));
    /* 0065b0bc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b0bf: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0065b0c2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0065b0c5:; BB(0x0065b0c5);
    /* 0065b0c5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b0c8: cmp dword ptr [eax + 0x234], 0 */ {  u32 a = R32((u32)(r_eax+0x234u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b0cf: jne 0x65b12d */ if (!fZ) goto L_0065b12d;
L_0065b0d1:; BB(0x0065b0d1);
    /* 0065b0d1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b0d6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65b0dbu); f_00686d82();
    /* 0065b0db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065b0de: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065b0e1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0065b0e8: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b0ec: je 0x65b0fb */ if (fZ) goto L_0065b0fb;
L_0065b0ee:; BB(0x0065b0ee);
    /* 0065b0ee: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065b0f1: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x65b0f6u); f_005eaaf0();
    /* 0065b0f6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0065b0f9: jmp 0x65b102 */ goto L_0065b102;
L_0065b0fb:; BB(0x0065b0fb);
    /* 0065b0fb: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0065b102:; BB(0x0065b102);
    /* 0065b102: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065b105: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0065b108: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b10f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b112: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065b115: mov dword ptr [edx + 0x234], eax */ W32((u32)(r_edx+0x234u), r_eax);
    /* 0065b11b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b11e: mov edx, dword ptr [ecx + 0x234] */ r_edx = R32((u32)(r_ecx+0x234u));
    /* 0065b124: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b127: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0065b12a: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_0065b12d:; BB(0x0065b12d);
    /* 0065b12d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b130: cmp dword ptr [edx + 0x238], 0 */ {  u32 a = R32((u32)(r_edx+0x238u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b137: jne 0x65b195 */ if (!fZ) goto L_0065b195;
L_0065b139:; BB(0x0065b139);
    /* 0065b139: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0065b13e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65b143u); f_00686d82();
    /* 0065b143: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065b146: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0065b149: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0065b150: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065b154: je 0x65b163 */ if (fZ) goto L_0065b163;
L_0065b156:; BB(0x0065b156);
    /* 0065b156: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065b159: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x65b15eu); f_005eaaf0();
    /* 0065b15e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0065b161: jmp 0x65b16a */ goto L_0065b16a;
L_0065b163:; BB(0x0065b163);
    /* 0065b163: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0065b16a:; BB(0x0065b16a);
    /* 0065b16a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065b16d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065b170: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065b177: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b17a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065b17d: mov dword ptr [ecx + 0x238], edx */ W32((u32)(r_ecx+0x238u), r_edx);
    /* 0065b183: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b186: mov ecx, dword ptr [eax + 0x238] */ r_ecx = R32((u32)(r_eax+0x238u));
    /* 0065b18c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065b18f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065b192: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0065b195:; BB(0x0065b195);
    /* 0065b195: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065b198: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065b19f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065b1a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0065b1a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065b1a3: ret  */ FN_RET(0x0065adb0); r_esp += 4; return;
}

