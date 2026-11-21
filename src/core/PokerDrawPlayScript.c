#include "protos.h"

void f_00470b20(void) /* PokerDrawPlayScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470b20);
    /* 00470b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00470b23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00470b25: push 0x69fd19 */ { u32 v = 0x69fd19u; r_esp -= 4; W32(r_esp, v); }
    /* 00470b2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00470b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470b31: sub esp, 0x3c4 */ {  u32 a = r_esp; u32 b = 0x3c4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470b37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00470b38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00470b39: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00470b3e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00470b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470b41: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00470b44: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00470b4a: mov dword ptr [ebp - 0x25c], ecx */ W32((u32)(r_ebp+0xfffffda4u), r_ecx);
    /* 00470b50: mov dword ptr [ebp - 0x258], 0 */ W32((u32)(r_ebp+0xfffffda8u), 0x0u);
    /* 00470b5a: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470b60: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00470b63: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00470b66: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00470b69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470b6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470b6d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x470b72u); f_0064c8a0();
    /* 00470b72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470b75: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00470b7b: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 00470b81: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00470b87: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00470b8a: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00470b90: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00470b93: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00470b96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470b97: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470b9d: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x470ba2u); f_005fc3a0();
    /* 00470ba2: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470ba8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00470bab: mov dword ptr [ebp - 0x260], ecx */ W32((u32)(r_ebp+0xfffffda0u), r_ecx);
    /* 00470bb1: cmp dword ptr [ebp - 0x260], 0x2a */ {  u32 a = R32((u32)(r_ebp+0xfffffda0u)); u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00470bb8: ja 0x477253 */ if ((!fC&&!fZ)) goto L_00477253;
L_00470bbe:; BB(0x00470bbe);
    /* 00470bbe: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 00470bc4: jmp dword ptr [edx*4 + 0x477268] */ { u32 t = R32((u32)(r_edx*4+0x477268u)); switch (t) { case 0x470bcbu: goto L_00470bcb; case 0x470d90u: goto L_00470d90; case 0x470e70u: goto L_00470e70; case 0x471027u: goto L_00471027; case 0x471109u: goto L_00471109; case 0x4711bau: goto L_004711ba; case 0x47196au: goto L_0047196a; case 0x477253u: goto L_00477253; case 0x4715c0u: goto L_004715c0; case 0x471f16u: goto L_00471f16; case 0x471c04u: goto L_00471c04; case 0x472174u: goto L_00472174; case 0x47222eu: goto L_0047222e; case 0x472373u: goto L_00472373; case 0x47241bu: goto L_0047241b; case 0x472562u: goto L_00472562; case 0x47272eu: goto L_0047272e; case 0x472861u: goto L_00472861; case 0x472996u: goto L_00472996; case 0x472aa7u: goto L_00472aa7; case 0x472f55u: goto L_00472f55; case 0x47301fu: goto L_0047301f; case 0x47312du: goto L_0047312d; case 0x473395u: goto L_00473395; case 0x473402u: goto L_00473402; case 0x473431u: goto L_00473431; case 0x473528u: goto L_00473528; case 0x473603u: goto L_00473603; case 0x473674u: goto L_00473674; case 0x473826u: goto L_00473826; case 0x47386au: goto L_0047386a; case 0x473ab0u: goto L_00473ab0; case 0x473bceu: goto L_00473bce; case 0x473bfdu: goto L_00473bfd; case 0x473ca1u: goto L_00473ca1; case 0x474005u: goto L_00474005; case 0x47504fu: goto L_0047504f; case 0x47534fu: goto L_0047534f; case 0x47703au: goto L_0047703a; case 0x477152u: goto L_00477152; case 0x4771bau: goto L_004771ba; case 0x4771e6u: goto L_004771e6; case 0x477212u: goto L_00477212; default: UNSUP(0x00470bc4, "jump table entry is not a known target"); } }
L_00470bcb:; BB(0x00470bcb);
    /* 00470bcb: cmp dword ptr [0x791308], 2 */ {  u32 a = R32((u32)(0x791308u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470bd2: jge 0x470c03 */ if ((fS==fO)) goto L_00470c03;
L_00470bd4:; BB(0x00470bd4);
    /* 00470bd4: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00470bd6: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470bdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470bde: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470be4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00470be7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470be9u); call_ind(t); }
    /* 00470be9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470beb: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470bf1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00470bf3: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470bf9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00470bfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470bfeu); call_ind(t); }
    /* 00470bfe: jmp 0x477253 */ goto L_00477253;
L_00470c03:; BB(0x00470c03);
    /* 00470c03: mov byte ptr [0x7912e9], 0 */ W8((u32)(0x7912e9u), 0x0u);
    /* 00470c0a: mov word ptr [0x791354], 0 */ W16((u32)(0x791354u), 0x0u);
    /* 00470c13: jmp 0x470c27 */ goto L_00470c27;
L_00470c15:; BB(0x00470c15);
    /* 00470c15: mov cx, word ptr [0x791354] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791354u))) & 0xffffu);
    /* 00470c1c: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00470c20: mov word ptr [0x791354], cx */ W16((u32)(0x791354u), (u16)r_ecx);
L_00470c27:; BB(0x00470c27);
    /* 00470c27: movsx esi, word ptr [0x791354] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791354u));
    /* 00470c2e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470c34: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x470c39u); f_0047f950();
    /* 00470c39: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470c3b: jge 0x470d61 */ if ((fS==fO)) goto L_00470d61;
L_00470c41:; BB(0x00470c41);
    /* 00470c41: mov word ptr [0x791350], 0 */ W16((u32)(0x791350u), 0x0u);
    /* 00470c4a: jmp 0x470c5e */ goto L_00470c5e;
L_00470c4c:; BB(0x00470c4c);
    /* 00470c4c: mov dx, word ptr [0x791350] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791350u))) & 0xffffu);
    /* 00470c53: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00470c57: mov word ptr [0x791350], dx */ W16((u32)(0x791350u), (u16)r_edx);
L_00470c5e:; BB(0x00470c5e);
    /* 00470c5e: movsx esi, word ptr [0x791350] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791350u));
    /* 00470c65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470c6b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x470c70u); f_0047f950();
    /* 00470c70: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470c72: jge 0x470d5c */ if ((fS==fO)) goto L_00470d5c;
L_00470c78:; BB(0x00470c78);
    /* 00470c78: movsx eax, word ptr [0x791354] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791354u));
    /* 00470c7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470c80: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470c86: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470c8bu); f_0047e390();
    /* 00470c8b: mov ecx, eax */ r_ecx = r_eax;
    /* 00470c8d: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x470c92u); f_004c6cb0();
    /* 00470c92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470c94: je 0x470d57 */ if (fZ) goto L_00470d57;
L_00470c9a:; BB(0x00470c9a);
    /* 00470c9a: movsx ecx, word ptr [0x791350] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791350u));
    /* 00470ca1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470ca2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470ca8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470cadu); f_0047e390();
    /* 00470cad: mov ecx, eax */ r_ecx = r_eax;
    /* 00470caf: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x470cb4u); f_004c7010();
    /* 00470cb4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470cb7: jne 0x470d57 */ if (!fZ) goto L_00470d57;
L_00470cbd:; BB(0x00470cbd);
    /* 00470cbd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470cc3: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x470cc8u); f_0047e190();
    /* 00470cc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470cca: jne 0x470cf5 */ if (!fZ) goto L_00470cf5;
L_00470ccc:; BB(0x00470ccc);
    /* 00470ccc: mov dx, word ptr [0x791308] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791308u))) & 0xffffu);
    /* 00470cd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470cd4: mov ax, word ptr [0x791350] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791350u))) & 0xffffu);
    /* 00470cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470cdb: movsx ecx, word ptr [0x791354] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791354u));
    /* 00470ce2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470ce3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470ce9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470ceeu); f_0047e390();
    /* 00470cee: mov ecx, eax */ r_ecx = r_eax;
    /* 00470cf0: call 0x4e0600 */ r_esp -= 4; W32(r_esp, 0x470cf5u); f_004e0600();
L_00470cf5:; BB(0x00470cf5);
    /* 00470cf5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00470cf7: movsx edx, word ptr [0x791354] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791354u));
    /* 00470cfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470cff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470d05: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470d0au); f_0047e390();
    /* 00470d0a: mov ecx, eax */ r_ecx = r_eax;
    /* 00470d0c: call 0x4c6ed0 */ r_esp -= 4; W32(r_esp, 0x470d11u); f_004c6ed0();
    /* 00470d11: movsx eax, word ptr [0x791354] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791354u));
    /* 00470d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470d19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470d1f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470d24u); f_0047e390();
    /* 00470d24: mov ecx, eax */ r_ecx = r_eax;
    /* 00470d26: call 0x4c6e70 */ r_esp -= 4; W32(r_esp, 0x470d2bu); f_004c6e70();
    /* 00470d2b: mov esi, eax */ r_esi = r_eax;
    /* 00470d2d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00470d2f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470d34u); f_0062fbf0();
    /* 00470d34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470d37: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470d39: jle 0x470d57 */ if ((fZ||fS!=fO)) goto L_00470d57;
L_00470d3b:; BB(0x00470d3b);
    /* 00470d3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470d3d: movsx ecx, word ptr [0x791354] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791354u));
    /* 00470d44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470d45: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470d4b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470d50u); f_0047e390();
    /* 00470d50: mov ecx, eax */ r_ecx = r_eax;
    /* 00470d52: call 0x4c6ed0 */ r_esp -= 4; W32(r_esp, 0x470d57u); f_004c6ed0();
L_00470d57:; BB(0x00470d57);
    /* 00470d57: jmp 0x470c4c */ goto L_00470c4c;
L_00470d5c:; BB(0x00470d5c);
    /* 00470d5c: jmp 0x470c15 */ goto L_00470c15;
L_00470d61:; BB(0x00470d61);
    /* 00470d61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470d63: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470d69: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00470d6b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470d71: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00470d74: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x470d76u); call_ind(t); }
    /* 00470d76: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00470d78: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470d7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470d80: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470d86: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00470d89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470d8bu); call_ind(t); }
    /* 00470d8b: jmp 0x477253 */ goto L_00477253;
L_00470d90:; BB(0x00470d90);
    /* 00470d90: mov dword ptr [0x79134c], 0 */ W32((u32)(0x79134cu), 0x0u);
    /* 00470d9a: jmp 0x470dab */ goto L_00470dab;
L_00470d9c:; BB(0x00470d9c);
    /* 00470d9c: mov ecx, dword ptr [0x79134c] */ r_ecx = R32((u32)(0x79134cu));
    /* 00470da2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470da5: mov dword ptr [0x79134c], ecx */ W32((u32)(0x79134cu), r_ecx);
L_00470dab:; BB(0x00470dab);
    /* 00470dab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470db1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x470db6u); f_0047f950();
    /* 00470db6: cmp dword ptr [0x79134c], eax */ {  u32 a = R32((u32)(0x79134cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470dbc: jge 0x470e1b */ if ((fS==fO)) goto L_00470e1b;
L_00470dbe:; BB(0x00470dbe);
    /* 00470dbe: mov edx, dword ptr [0x79134c] */ r_edx = R32((u32)(0x79134cu));
    /* 00470dc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470dc5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470dcb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470dd0u); f_0047e390();
    /* 00470dd0: mov ecx, eax */ r_ecx = r_eax;
    /* 00470dd2: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x470dd7u); f_004c6cb0();
    /* 00470dd7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470dda: je 0x470de7 */ if (fZ) goto L_00470de7;
L_00470ddc:; BB(0x00470ddc);
    /* 00470ddc: movzx eax, byte ptr [0x791360] */ r_eax = (u32)R8((u32)(0x791360u));
    /* 00470de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470de5: je 0x470e19 */ if (fZ) goto L_00470e19;
L_00470de7:; BB(0x00470de7);
    /* 00470de7: mov ecx, dword ptr [0x79134c] */ r_ecx = R32((u32)(0x79134cu));
    /* 00470ded: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470dee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470df4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470df9u); f_0047e390();
    /* 00470df9: mov ecx, eax */ r_ecx = r_eax;
    /* 00470dfb: call 0x4c7360 */ r_esp -= 4; W32(r_esp, 0x470e00u); f_004c7360();
    /* 00470e00: mov edx, dword ptr [0x79134c] */ r_edx = R32((u32)(0x79134cu));
    /* 00470e06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470e07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470e0d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470e12u); f_0047e390();
    /* 00470e12: mov ecx, eax */ r_ecx = r_eax;
    /* 00470e14: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x470e19u); f_004c76e0();
L_00470e19:; BB(0x00470e19);
    /* 00470e19: jmp 0x470d9c */ goto L_00470d9c;
L_00470e1b:; BB(0x00470e1b);
    /* 00470e1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470e21: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x470e26u); f_0047d6b0();
    /* 00470e26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470e28: jne 0x470e41 */ if (!fZ) goto L_00470e41;
L_00470e2a:; BB(0x00470e2a);
    /* 00470e2a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00470e2c: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470e32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00470e34: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470e3a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00470e3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470e3fu); call_ind(t); }
    /* 00470e3f: jmp 0x470e56 */ goto L_00470e56;
L_00470e41:; BB(0x00470e41);
    /* 00470e41: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00470e43: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470e49: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00470e4b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470e51: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00470e54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470e56u); call_ind(t); }
L_00470e56:; BB(0x00470e56);
    /* 00470e56: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00470e58: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470e5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00470e60: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470e66: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00470e69: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470e6bu); call_ind(t); }
    /* 00470e6b: jmp 0x477253 */ goto L_00477253;
L_00470e70:; BB(0x00470e70);
    /* 00470e70: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470e76: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 00470e80: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470e86: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x470e8bu); f_0047bbc0();
    /* 00470e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470e8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470e92: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x470e97u); f_0047e400();
L_00470e97:; BB(0x00470e97);
    /* 00470e97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470e9d: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x470ea2u); f_0047e440();
    /* 00470ea2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470ea8: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x470eadu); f_0047e3b0();
    /* 00470ead: mov ecx, eax */ r_ecx = r_eax;
    /* 00470eaf: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x470eb4u); f_004c7010();
    /* 00470eb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470eb6: je 0x470e97 */ if (fZ) goto L_00470e97;
L_00470eb8:; BB(0x00470eb8);
    /* 00470eb8: movsx edx, word ptr [0x71e334] */ r_edx = (u32)(i32)(i16)R16((u32)(0x71e334u));
    /* 00470ebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00470ec1: cmp dword ptr [0x791308], 2 */ {  u32 a = R32((u32)(0x791308u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470ec8: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00470ecb: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00470ecd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470ece: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470ed4: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x470ed9u); f_0047e3b0();
    /* 00470ed9: mov ecx, eax */ r_ecx = r_eax;
    /* 00470edb: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x470ee0u); f_004c7050();
    /* 00470ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470ee1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470ee7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470eea: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x470eefu); f_004f5530();
    /* 00470eef: cmp dword ptr [0x791308], 2 */ {  u32 a = R32((u32)(0x791308u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470ef6: jle 0x470f71 */ if ((fZ||fS!=fO)) goto L_00470f71;
L_00470ef8:; BB(0x00470ef8);
    /* 00470ef8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470efe: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x470f03u); f_0047bca0();
    /* 00470f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470f04: call 0x477bd0 */ r_esp -= 4; W32(r_esp, 0x470f09u); f_00477bd0();
    /* 00470f09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470f0c: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00470f11: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470f17: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x470f1cu); f_0047e500();
    /* 00470f1c: cmp dword ptr [0x7912ec], 0 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470f23: jge 0x470f3c */ if ((fS==fO)) goto L_00470f3c;
L_00470f25:; BB(0x00470f25);
    /* 00470f25: push 0x353 */ { u32 v = 0x353u; r_esp -= 4; W32(r_esp, v); }
    /* 00470f2a: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00470f2f: push 0x6bc628 */ { u32 v = 0x6bc628u; r_esp -= 4; W32(r_esp, v); }
    /* 00470f34: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x470f39u); f_005e9f20();
    /* 00470f39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00470f3c:; BB(0x00470f3c);
    /* 00470f3c: mov edx, dword ptr [0x7912ec] */ r_edx = R32((u32)(0x7912ecu));
    /* 00470f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470f43: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470f49: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x470f4eu); f_0047e490();
    /* 00470f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470f4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470f55: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x470f5au); f_0047e400();
    /* 00470f5a: call 0x477d00 */ r_esp -= 4; W32(r_esp, 0x470f5fu); f_00477d00();
    /* 00470f5f: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00470f64: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470f6a: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x470f6fu); f_0047e500();
    /* 00470f6f: jmp 0x470f95 */ goto L_00470f95;
L_00470f71:; BB(0x00470f71);
    /* 00470f71: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470f77: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x470f7cu); f_0047bce0();
    /* 00470f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470f7d: call 0x477bd0 */ r_esp -= 4; W32(r_esp, 0x470f82u); f_00477bd0();
    /* 00470f82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470f85: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00470f8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470f90: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x470f95u); f_0047e500();
L_00470f95:; BB(0x00470f95);
    /* 00470f95: cmp dword ptr [0x7912ec], 0 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470f9c: jl 0x470fd2 */ if ((fS!=fO)) goto L_00470fd2;
L_00470f9e:; BB(0x00470f9e);
    /* 00470f9e: mov eax, dword ptr [0x7912ec] */ r_eax = R32((u32)(0x7912ecu));
    /* 00470fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470fa4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470faa: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x470fafu); f_0047e490();
    /* 00470faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470fb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470fb6: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x470fbbu); f_0047e400();
    /* 00470fbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00470fbd: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470fc3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00470fc5: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470fcb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00470fce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470fd0u); call_ind(t); }
    /* 00470fd0: jmp 0x47100d */ goto L_0047100d;
L_00470fd2:; BB(0x00470fd2);
    /* 00470fd2: cmp dword ptr [0x7912ec], -3 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470fd9: jne 0x470ff2 */ if (!fZ) goto L_00470ff2;
L_00470fdb:; BB(0x00470fdb);
    /* 00470fdb: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00470fdd: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470fe3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00470fe5: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00470feb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00470fee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x470ff0u); call_ind(t); }
    /* 00470ff0: jmp 0x47100d */ goto L_0047100d;
L_00470ff2:; BB(0x00470ff2);
    /* 00470ff2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00470ff4: jne 0x47100d */ if (!fZ) goto L_0047100d;
L_00470ff6:; BB(0x00470ff6);
    /* 00470ff6: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 00470ffb: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471000: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00471005: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47100au); f_005e9f20();
    /* 0047100a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047100d:; BB(0x0047100d);
    /* 0047100d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047100f: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471015: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471017: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047101d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471020: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471022u); call_ind(t); }
    /* 00471022: jmp 0x477253 */ goto L_00477253;
L_00471027:; BB(0x00471027);
    /* 00471027: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047102d: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 00471037: mov byte ptr [0x791348], 1 */ W8((u32)(0x791348u), 0x1u);
    /* 0047103e: movzx edx, byte ptr [0x7912e8] */ r_edx = (u32)R8((u32)(0x7912e8u));
    /* 00471045: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471047: je 0x471078 */ if (fZ) goto L_00471078;
L_00471049:; BB(0x00471049);
    /* 00471049: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0047104b: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471051: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471053: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471059: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047105c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47105eu); call_ind(t); }
    /* 0047105e: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00471060: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471066: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471068: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047106e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471071: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471073u); call_ind(t); }
    /* 00471073: jmp 0x477253 */ goto L_00477253;
L_00471078:; BB(0x00471078);
    /* 00471078: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047107e: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x471083u); f_0047bbc0();
    /* 00471083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471084: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047108a: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x47108fu); f_0047e400();
L_0047108f:; BB(0x0047108f);
    /* 0047108f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471095: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x47109au); f_0047e440();
    /* 0047109a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004710a0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4710a5u); f_0047e3b0();
    /* 004710a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004710a7: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4710acu); f_004c7010();
    /* 004710ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004710af: jne 0x47108f */ if (!fZ) goto L_0047108f;
L_004710b1:; BB(0x004710b1);
    /* 004710b1: mov cx, word ptr [0x71e334] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x71e334u))) & 0xffffu);
    /* 004710b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004710b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004710bf: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4710c4u); f_0047e3b0();
    /* 004710c4: mov ecx, eax */ r_ecx = r_eax;
    /* 004710c6: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4710cbu); f_004c7050();
    /* 004710cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004710cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004710d2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004710d5: call 0x4f5530 */ r_esp -= 4; W32(r_esp, 0x4710dau); f_004f5530();
    /* 004710da: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004710dc: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004710e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004710e4: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004710ea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004710ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4710efu); call_ind(t); }
    /* 004710ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004710f1: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004710f7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004710f9: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004710ff: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471102: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471104u); call_ind(t); }
    /* 00471104: jmp 0x477253 */ goto L_00477253;
L_00471109:; BB(0x00471109);
    /* 00471109: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047110f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471114u); f_0047e3b0();
    /* 00471114: mov ecx, eax */ r_ecx = r_eax;
    /* 00471116: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47111bu); f_004c6cb0();
    /* 0047111b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047111e: jne 0x471131 */ if (!fZ) goto L_00471131;
L_00471120:; BB(0x00471120);
    /* 00471120: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471126: movzx edx, byte ptr [ecx + 0xc8] */ r_edx = (u32)R8((u32)(r_ecx+0xc8u));
    /* 0047112d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047112f: je 0x471147 */ if (fZ) goto L_00471147;
L_00471131:; BB(0x00471131);
    /* 00471131: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471133: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00471135: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047113b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471140u); f_0047e3b0();
    /* 00471140: mov ecx, eax */ r_ecx = r_eax;
    /* 00471142: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x471147u); f_004dc4d0();
L_00471147:; BB(0x00471147);
    /* 00471147: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0047114c: mov byte ptr [eax + 0xe8], 1 */ W8((u32)(r_eax+0xe8u), 0x1u);
    /* 00471153: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00471155: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047115b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047115d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471163: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00471166: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471168u); call_ind(t); }
    /* 00471168: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047116e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471173u); f_0047e3b0();
    /* 00471173: mov ecx, eax */ r_ecx = r_eax;
    /* 00471175: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47117au); f_004c6cb0();
    /* 0047117a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047117d: jne 0x471196 */ if (!fZ) goto L_00471196;
L_0047117f:; BB(0x0047117f);
    /* 0047117f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471181: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471187: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471189: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047118f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471192: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471194u); call_ind(t); }
    /* 00471194: jmp 0x4711b5 */ goto L_004711b5;
L_00471196:; BB(0x00471196);
    /* 00471196: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047119c: call 0x47cba0 */ r_esp -= 4; W32(r_esp, 0x4711a1u); f_0047cba0();
    /* 004711a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004711a2: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004711a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004711aa: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004711b0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004711b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4711b5u); call_ind(t); }
L_004711b5:; BB(0x004711b5);
    /* 004711b5: jmp 0x477253 */ goto L_00477253;
L_004711ba:; BB(0x004711ba);
    /* 004711ba: movzx ecx, byte ptr [0x791320] */ r_ecx = (u32)R8((u32)(0x791320u));
    /* 004711c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004711c3: je 0x4711d8 */ if (fZ) goto L_004711d8;
L_004711c5:; BB(0x004711c5);
    /* 004711c5: mov byte ptr [0x791320], 0 */ W8((u32)(0x791320u), 0x0u);
    /* 004711cc: mov dword ptr [0x791344], 5 */ W32((u32)(0x791344u), 0x5u);
    /* 004711d6: jmp 0x4711e2 */ goto L_004711e2;
L_004711d8:; BB(0x004711d8);
    /* 004711d8: call 0x477f20 */ r_esp -= 4; W32(r_esp, 0x4711ddu); f_00477f20();
    /* 004711dd: mov dword ptr [0x791344], eax */ W32((u32)(0x791344u), r_eax);
L_004711e2:; BB(0x004711e2);
    /* 004711e2: cmp dword ptr [0x791344], 5 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004711e9: jne 0x4714ea */ if (!fZ) goto L_004714ea;
L_004711ef:; BB(0x004711ef);
    /* 004711ef: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004711f5: cmp dword ptr [0x791318], 5 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004711fc: jne 0x471206 */ if (!fZ) goto L_00471206;
L_004711fe:; BB(0x004711fe);
    /* 004711fe: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00471204: jmp 0x471276 */ goto L_00471276;
L_00471206:; BB(0x00471206);
    /* 00471206: cmp dword ptr [0x791318], 2 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047120d: jne 0x471217 */ if (!fZ) goto L_00471217;
L_0047120f:; BB(0x0047120f);
    /* 0047120f: mov word ptr [ebp - 0x20], 2 */ W16((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 00471215: jmp 0x471276 */ goto L_00471276;
L_00471217:; BB(0x00471217);
    /* 00471217: cmp dword ptr [0x791318], 1 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047121e: jne 0x471228 */ if (!fZ) goto L_00471228;
L_00471220:; BB(0x00471220);
    /* 00471220: mov word ptr [ebp - 0x20], 1 */ W16((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00471226: jmp 0x471276 */ goto L_00471276;
L_00471228:; BB(0x00471228);
    /* 00471228: cmp dword ptr [0x791318], 4 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047122f: jne 0x471239 */ if (!fZ) goto L_00471239;
L_00471231:; BB(0x00471231);
    /* 00471231: mov word ptr [ebp - 0x20], 2 */ W16((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 00471237: jmp 0x471276 */ goto L_00471276;
L_00471239:; BB(0x00471239);
    /* 00471239: cmp dword ptr [0x791318], 3 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471240: jne 0x47124a */ if (!fZ) goto L_0047124a;
L_00471242:; BB(0x00471242);
    /* 00471242: mov word ptr [ebp - 0x20], 1 */ W16((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00471248: jmp 0x471276 */ goto L_00471276;
L_0047124a:; BB(0x0047124a);
    /* 0047124a: cmp dword ptr [0x791318], 0 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471251: jne 0x47125b */ if (!fZ) goto L_0047125b;
L_00471253:; BB(0x00471253);
    /* 00471253: mov word ptr [ebp - 0x20], 3 */ W16((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 00471259: jmp 0x471276 */ goto L_00471276;
L_0047125b:; BB(0x0047125b);
    /* 0047125b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0047125d: jne 0x471276 */ if (!fZ) goto L_00471276;
L_0047125f:; BB(0x0047125f);
    /* 0047125f: push 0x3ad */ { u32 v = 0x3adu; r_esp -= 4; W32(r_esp, v); }
    /* 00471264: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471269: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047126e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x471273u); f_005e9f20();
    /* 00471273: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00471276:; BB(0x00471276);
    /* 00471276: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047127c: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x471281u); f_0047d6b0();
    /* 00471281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471283: jne 0x4712d6 */ if (!fZ) goto L_004712d6;
L_00471285:; BB(0x00471285);
    /* 00471285: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 0047128c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047128e: jne 0x4712b1 */ if (!fZ) goto L_004712b1;
L_00471290:; BB(0x00471290);
    /* 00471290: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 00471294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471297: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471299: call 0x477840 */ r_esp -= 4; W32(r_esp, 0x47129eu); f_00477840();
    /* 0047129e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047129f: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004712a4: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004712aa: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4712afu); f_00467fe0();
    /* 004712af: jmp 0x4712d1 */ goto L_004712d1;
L_004712b1:; BB(0x004712b1);
    /* 004712b1: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004712b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004712b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004712b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004712ba: call 0x477840 */ r_esp -= 4; W32(r_esp, 0x4712bfu); f_00477840();
    /* 004712bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004712c0: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004712c6: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004712cc: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4712d1u); f_00467fe0();
L_004712d1:; BB(0x004712d1);
    /* 004712d1: jmp 0x4714a4 */ goto L_004714a4;
L_004712d6:; BB(0x004712d6);
    /* 004712d6: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 004712dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004712df: jne 0x47141c */ if (!fZ) goto L_0047141c;
L_004712e5:; BB(0x004712e5);
    /* 004712e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004712eb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004712ee: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4712f3u); f_004f6640();
    /* 004712f3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004712f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004712f8: je 0x47141c */ if (fZ) goto L_0047141c;
L_004712fe:; BB(0x004712fe);
    /* 004712fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471304: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x471309u); f_0047d7b0();
    /* 00471309: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047130c: jne 0x47141c */ if (!fZ) goto L_0047141c;
L_00471312:; BB(0x00471312);
    /* 00471312: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00471315: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471316: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047131c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471321u); f_0047e3b0();
    /* 00471321: mov ecx, eax */ r_ecx = r_eax;
    /* 00471323: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x471328u); f_004c7c40();
    /* 00471328: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047132f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471331: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471335: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471337: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471339: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047133b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047133d: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00471340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471341: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00471344: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x471349u); f_00485940();
    /* 00471349: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0047134d: lea ecx, [ebp - 0x102] */ r_ecx = (u32)(r_ebp+0xfffffefeu);
    /* 00471353: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x471358u); f_004a20d0();
    /* 00471358: mov dword ptr [ebp - 0x264], eax */ W32((u32)(r_ebp+0xfffffd9cu), r_eax);
    /* 0047135e: mov ecx, dword ptr [ebp - 0x264] */ r_ecx = R32((u32)(r_ebp+0xfffffd9cu));
    /* 00471364: mov dword ptr [ebp - 0x268], ecx */ W32((u32)(r_ebp+0xfffffd98u), r_ecx);
    /* 0047136a: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0047136e: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471373: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471378: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047137d: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471382: mov edx, dword ptr [0x791400] */ r_edx = R32((u32)(0x791400u));
    /* 00471388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471389: mov eax, dword ptr [0x7913b0] */ r_eax = R32((u32)(0x7913b0u));
    /* 0047138e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047138f: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00471395: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x47139au); f_004a2100();
    /* 0047139a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047139b: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0047139e: call 0x4a24d0 */ r_esp -= 4; W32(r_esp, 0x4713a3u); f_004a24d0();
    /* 004713a3: mov byte ptr [ebp - 0xfd], al */ W8((u32)(r_ebp+0xffffff03u), (u8)r_eax);
    /* 004713a9: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004713ad: lea ecx, [ebp - 0x102] */ r_ecx = (u32)(r_ebp+0xfffffefeu);
    /* 004713b3: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4713b8u); f_004a20f0();
    /* 004713b8: movzx ecx, byte ptr [ebp - 0xfd] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff03u));
    /* 004713bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004713c1: je 0x4713e0 */ if (fZ) goto L_004713e0;
L_004713c3:; BB(0x004713c3);
    /* 004713c3: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004713c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004713c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004713ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004713cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004713ce: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004713d3: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004713d9: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4713deu); f_00467fe0();
    /* 004713de: jmp 0x4713fc */ goto L_004713fc;
L_004713e0:; BB(0x004713e0);
    /* 004713e0: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004713e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004713e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004713e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004713e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004713eb: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004713f1: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 004713f7: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4713fcu); f_00467fe0();
L_004713fc:; BB(0x004713fc);
    /* 004713fc: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00471400: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00471403: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x471408u); f_004a20f0();
    /* 00471408: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047140f: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00471412: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x471417u); f_00484470();
    /* 00471417: jmp 0x4714a4 */ goto L_004714a4;
L_0047141c:; BB(0x0047141c);
    /* 0047141c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471422: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471425: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x47142au); f_004f6640();
    /* 0047142a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047142d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047142f: jne 0x471488 */ if (!fZ) goto L_00471488;
L_00471431:; BB(0x00471431);
    /* 00471431: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471437: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047143a: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x47143fu); f_004f67d0();
    /* 0047143f: mov esi, eax */ r_esi = r_eax;
    /* 00471441: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471447: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47144cu); f_0047e3b0();
    /* 0047144c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047144e: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x471453u); f_004c6a70();
    /* 00471453: mov edi, eax */ r_edi = r_eax;
    /* 00471455: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047145b: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x471460u); f_0047bc20();
    /* 00471460: mov ecx, eax */ r_ecx = r_eax;
    /* 00471462: mov eax, edi */ r_eax = r_edi;
    /* 00471464: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00471465: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00471465, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00471465, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00471467: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471469: jl 0x471488 */ if ((fS!=fO)) goto L_00471488;
L_0047146b:; BB(0x0047146b);
    /* 0047146b: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0047146f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471470: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471472: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471474: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471476: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 0047147b: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00471481: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x471486u); f_00467fe0();
    /* 00471486: jmp 0x4714a4 */ goto L_004714a4;
L_00471488:; BB(0x00471488);
    /* 00471488: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0047148c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047148d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047148f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471491: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471493: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00471499: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 0047149f: call 0x467fe0 */ r_esp -= 4; W32(r_esp, 0x4714a4u); f_00467fe0();
L_004714a4:; BB(0x004714a4);
    /* 004714a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004714aa: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4714afu); f_0047e3b0();
    /* 004714af: mov ecx, eax */ r_ecx = r_eax;
    /* 004714b1: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x4714b6u); f_004dc490();
    /* 004714b6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004714b8: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004714be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004714c0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004714c6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004714c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4714cbu); call_ind(t); }
    /* 004714cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004714cd: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004714d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004714d5: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004714db: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004714de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4714e0u); call_ind(t); }
    /* 004714e0: jmp 0x477253 */ goto L_00477253;
L_004714ea:; BB(0x004714ea);
    /* 004714ea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004714f0: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4714f5u); f_0047d6b0();
    /* 004714f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004714f8: jne 0x471523 */ if (!fZ) goto L_00471523;
L_004714fa:; BB(0x004714fa);
    /* 004714fa: cmp dword ptr [0x791344], 2 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471501: je 0x47150c */ if (fZ) goto L_0047150c;
L_00471503:; BB(0x00471503);
    /* 00471503: cmp dword ptr [0x791344], 4 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047150a: jne 0x471523 */ if (!fZ) goto L_00471523;
L_0047150c:; BB(0x0047150c);
    /* 0047150c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471512: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471517u); f_0047e3b0();
    /* 00471517: mov ecx, eax */ r_ecx = r_eax;
    /* 00471519: call 0x4c7970 */ r_esp -= 4; W32(r_esp, 0x47151eu); f_004c7970();
    /* 0047151e: mov dword ptr [0x7912fc], eax */ W32((u32)(0x7912fcu), r_eax);
L_00471523:; BB(0x00471523);
    /* 00471523: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471529: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47152eu); f_0047e3b0();
    /* 0047152e: mov ecx, eax */ r_ecx = r_eax;
    /* 00471530: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x471535u); f_004dc490();
    /* 00471535: cmp dword ptr [0x791344], 2 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047153c: jne 0x471591 */ if (!fZ) goto L_00471591;
L_0047153e:; BB(0x0047153e);
    /* 0047153e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471544: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x471549u); f_0047d6b0();
    /* 00471549: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047154c: jne 0x471591 */ if (!fZ) goto L_00471591;
L_0047154e:; BB(0x0047154e);
    /* 0047154e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471554: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471559u); f_0047e3b0();
    /* 00471559: mov ecx, eax */ r_ecx = r_eax;
    /* 0047155b: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x471560u); f_004c6a70();
    /* 00471560: mov esi, eax */ r_esi = r_eax;
    /* 00471562: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471568: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x47156du); f_0047bc20();
    /* 0047156d: mov ecx, eax */ r_ecx = r_eax;
    /* 0047156f: mov eax, esi */ r_eax = r_esi;
    /* 00471571: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00471572: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00471572, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00471572, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00471574: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00471577: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047157d: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x471582u); f_0047bd60();
    /* 00471582: cmp dword ptr [ebp - 0x30], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00471585: jge 0x471591 */ if ((fS==fO)) goto L_00471591;
L_00471587:; BB(0x00471587);
    /* 00471587: mov dword ptr [0x791344], 1 */ W32((u32)(0x791344u), 0x1u);
L_00471591:; BB(0x00471591);
    /* 00471591: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00471593: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471599: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047159b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004715a1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004715a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4715a6u); call_ind(t); }
    /* 004715a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004715a8: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004715ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004715b0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004715b6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004715b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4715bbu); call_ind(t); }
    /* 004715bb: jmp 0x477253 */ goto L_00477253;
L_004715c0:; BB(0x004715c0);
    /* 004715c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004715c6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4715cbu); f_0047e190();
    /* 004715cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004715cd: je 0x4715e6 */ if (fZ) goto L_004715e6;
L_004715cf:; BB(0x004715cf);
    /* 004715cf: push 0x3ee */ { u32 v = 0x3eeu; r_esp -= 4; W32(r_esp, v); }
    /* 004715d4: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004715d9: push 0x6bc5fc */ { u32 v = 0x6bc5fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004715de: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4715e3u); f_005e9f20();
    /* 004715e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004715e6:; BB(0x004715e6);
    /* 004715e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004715ec: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4715f1u); f_0047e280();
    /* 004715f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004715f3: jne 0x4717ab */ if (!fZ) goto L_004717ab;
L_004715f9:; BB(0x004715f9);
    /* 004715f9: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 004715fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004715fd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471603: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471608u); f_0047e3b0();
    /* 00471608: mov ecx, eax */ r_ecx = r_eax;
    /* 0047160a: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x47160fu); f_004c7c40();
    /* 0047160f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00471616: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471618: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047161a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047161c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047161e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471620: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471622: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471624: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00471627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471628: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0047162b: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x471630u); f_00485940();
    /* 00471630: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00471634: lea ecx, [ebp - 0x103] */ r_ecx = (u32)(r_ebp+0xfffffefdu);
    /* 0047163a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047163b: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 0047163e: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x471643u); f_004a2160();
    /* 00471643: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00471645: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471646: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047164c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471651u); f_0047e3b0();
    /* 00471651: mov ecx, eax */ r_ecx = r_eax;
    /* 00471653: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x471658u); f_004da4d0();
    /* 00471658: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 0047165f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471661: jne 0x47173f */ if (!fZ) goto L_0047173f;
L_00471667:; BB(0x00471667);
    /* 00471667: push 0x6bc5e4 */ { u32 v = 0x6bc5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047166c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x471671u); f_00630f40();
    /* 00471671: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471675: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047167b: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00471681: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471686: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0047168c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047168e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00471694: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471696u); call_ind(t); }
    /* 00471696: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047169c: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x4716a1u); f_0047d7b0();
    /* 004716a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004716a4: jne 0x4716d7 */ if (!fZ) goto L_004716d7;
L_004716a6:; BB(0x004716a6);
    /* 004716a6: push 0x6bc5cc */ { u32 v = 0x6bc5ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004716ab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4716b0u); f_00630f40();
    /* 004716b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004716b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004716b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004716ba: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004716c0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004716c5: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004716cb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004716cd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004716d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4716d5u); call_ind(t); }
    /* 004716d5: jmp 0x47173d */ goto L_0047173d;
L_004716d7:; BB(0x004716d7);
    /* 004716d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004716dd: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4716e2u); f_0047d6b0();
    /* 004716e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004716e4: jne 0x471717 */ if (!fZ) goto L_00471717;
L_004716e6:; BB(0x004716e6);
    /* 004716e6: push 0x6bc5b0 */ { u32 v = 0x6bc5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004716eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4716f0u); f_00630f40();
    /* 004716f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004716f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004716f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004716fa: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 00471700: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471705: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0047170b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047170d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00471713: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471715u); call_ind(t); }
    /* 00471715: jmp 0x47173d */ goto L_0047173d;
L_00471717:; BB(0x00471717);
    /* 00471717: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047171c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471722: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 00471728: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0047172d: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00471733: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00471735: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047173b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47173du); call_ind(t); }
L_0047173d:; BB(0x0047173d);
    /* 0047173d: jmp 0x47178b */ goto L_0047178b;
L_0047173f:; BB(0x0047173f);
    /* 0047173f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00471744: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047174a: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00471750: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471755: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0047175b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047175d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00471763: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471765u); call_ind(t); }
    /* 00471765: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047176a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471770: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 00471776: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0047177b: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00471781: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00471783: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00471789: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47178bu); call_ind(t); }
L_0047178b:; BB(0x0047178b);
    /* 0047178b: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0047178f: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00471792: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x471797u); f_004a20f0();
    /* 00471797: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047179e: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 004717a1: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4717a6u); f_00484470();
    /* 004717a6: jmp 0x47193b */ goto L_0047193b;
L_004717ab:; BB(0x004717ab);
    /* 004717ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004717b1: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4717b6u); f_0047e280();
    /* 004717b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004717b9: je 0x4717d2 */ if (fZ) goto L_004717d2;
L_004717bb:; BB(0x004717bb);
    /* 004717bb: push 0x40b */ { u32 v = 0x40bu; r_esp -= 4; W32(r_esp, v); }
    /* 004717c0: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004717c5: push 0x6bc58c */ { u32 v = 0x6bc58cu; r_esp -= 4; W32(r_esp, v); }
    /* 004717ca: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4717cfu); f_005e9f20();
    /* 004717cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004717d2:; BB(0x004717d2);
    /* 004717d2: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 004717d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004717d6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004717dc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4717e1u); f_0047e3b0();
    /* 004717e1: mov ecx, eax */ r_ecx = r_eax;
    /* 004717e3: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4717e8u); f_004c7c40();
    /* 004717e8: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004717ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004717f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004717f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004717f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004717f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004717f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004717fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004717fd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00471800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471801: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00471804: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x471809u); f_00485940();
    /* 00471809: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0047180d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00471810: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471811: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471817: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47181cu); f_0047e3b0();
    /* 0047181c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047181e: call 0x4da8d0 */ r_esp -= 4; W32(r_esp, 0x471823u); f_004da8d0();
    /* 00471823: movzx edx, byte ptr [0x7912e9] */ r_edx = (u32)R8((u32)(0x7912e9u));
    /* 0047182a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047182c: jne 0x4718d4 */ if (!fZ) goto L_004718d4;
L_00471832:; BB(0x00471832);
    /* 00471832: push 0x6bc5e4 */ { u32 v = 0x6bc5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00471837: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47183cu); f_00630f40();
    /* 0047183c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047183f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471840: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471845: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 0047184b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00471851: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00471857: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471859: mov ecx, eax */ r_ecx = r_eax;
    /* 0047185b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00471861: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471863u); call_ind(t); }
    /* 00471863: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471869: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x47186eu); f_0047d6b0();
    /* 0047186e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471870: jne 0x4718a3 */ if (!fZ) goto L_004718a3;
L_00471872:; BB(0x00471872);
    /* 00471872: push 0x6bc5b0 */ { u32 v = 0x6bc5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471877: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47187cu); f_00630f40();
    /* 0047187c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047187f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471880: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471886: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0047188c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471891: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00471897: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00471899: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047189f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4718a1u); call_ind(t); }
    /* 004718a1: jmp 0x4718d2 */ goto L_004718d2;
L_004718a3:; BB(0x004718a3);
    /* 004718a3: push 0x6bc574 */ { u32 v = 0x6bc574u; r_esp -= 4; W32(r_esp, v); }
    /* 004718a8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4718adu); f_00630f40();
    /* 004718ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004718b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004718b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004718b7: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 004718bd: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004718c2: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 004718c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004718ca: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004718d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4718d2u); call_ind(t); }
L_004718d2:; BB(0x004718d2);
    /* 004718d2: jmp 0x471920 */ goto L_00471920;
L_004718d4:; BB(0x004718d4);
    /* 004718d4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004718d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004718df: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004718e5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004718ea: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 004718f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004718f2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004718f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4718fau); call_ind(t); }
    /* 004718fa: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004718ff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471905: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0047190b: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471910: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 00471916: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00471918: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047191e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471920u); call_ind(t); }
L_00471920:; BB(0x00471920);
    /* 00471920: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00471924: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00471927: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x47192cu); f_004a20f0();
    /* 0047192c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00471933: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00471936: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x47193bu); f_00484470();
L_0047193b:; BB(0x0047193b);
    /* 0047193b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047193d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471943: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471945: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047194b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047194e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471950u); call_ind(t); }
    /* 00471950: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471952: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471958: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047195a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471960: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471963: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471965u); call_ind(t); }
    /* 00471965: jmp 0x477253 */ goto L_00477253;
L_0047196a:; BB(0x0047196a);
    /* 0047196a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00471970: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00471976: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x47197bu); f_00519a20();
    /* 0047197b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047197d: je 0x471bd0 */ if (fZ) goto L_00471bd0;
L_00471983:; BB(0x00471983);
    /* 00471983: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00471989: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 0047198f: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x471994u); f_00519a20();
    /* 00471994: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471997: jne 0x471b06 */ if (!fZ) goto L_00471b06;
L_0047199d:; BB(0x0047199d);
    /* 0047199d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004719a3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004719a6: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4719abu); f_004f6640();
    /* 004719ab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004719ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004719b0: je 0x4719be */ if (fZ) goto L_004719be;
L_004719b2:; BB(0x004719b2);
    /* 004719b2: mov dword ptr [0x791344], 2 */ W32((u32)(0x791344u), 0x2u);
    /* 004719bc: jmp 0x4719c8 */ goto L_004719c8;
L_004719be:; BB(0x004719be);
    /* 004719be: mov dword ptr [0x791344], 4 */ W32((u32)(0x791344u), 0x4u);
L_004719c8:; BB(0x004719c8);
    /* 004719c8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004719ce: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4719d3u); f_0047d6b0();
    /* 004719d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004719d6: jne 0x471b01 */ if (!fZ) goto L_00471b01;
L_004719dc:; BB(0x004719dc);
    /* 004719dc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004719e2: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4719e7u); f_0047bd60();
    /* 004719e7: mov esi, eax */ r_esi = r_eax;
    /* 004719e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004719ef: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4719f4u); f_0047bc20();
    /* 004719f4: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004719f7: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 004719fa: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00471a01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471a03: je 0x471a25 */ if (fZ) goto L_00471a25;
L_00471a05:; BB(0x00471a05);
    /* 00471a05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a0b: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x471a10u); f_0047bde0();
    /* 00471a10: mov esi, eax */ r_esi = r_eax;
    /* 00471a12: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a18: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x471a1du); f_0047bc20();
    /* 00471a1d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00471a20: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00471a23: jmp 0x471a43 */ goto L_00471a43;
L_00471a25:; BB(0x00471a25);
    /* 00471a25: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a2b: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x471a30u); f_0047bda0();
    /* 00471a30: mov esi, eax */ r_esi = r_eax;
    /* 00471a32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a38: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x471a3du); f_0047bc20();
    /* 00471a3d: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00471a40: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
L_00471a43:; BB(0x00471a43);
    /* 00471a43: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00471a4a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a50: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x471a55u); f_0047d6b0();
    /* 00471a55: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471a58: jne 0x471a91 */ if (!fZ) goto L_00471a91;
L_00471a5a:; BB(0x00471a5a);
    /* 00471a5a: cmp dword ptr [0x791318], 2 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471a61: je 0x471a6c */ if (fZ) goto L_00471a6c;
L_00471a63:; BB(0x00471a63);
    /* 00471a63: cmp dword ptr [0x791318], 4 */ {  u32 a = R32((u32)(0x791318u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471a6a: jne 0x471a91 */ if (!fZ) goto L_00471a91;
L_00471a6c:; BB(0x00471a6c);
    /* 00471a6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a72: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471a77u); f_0047e3b0();
    /* 00471a77: mov ecx, eax */ r_ecx = r_eax;
    /* 00471a79: call 0x4c7970 */ r_esp -= 4; W32(r_esp, 0x471a7eu); f_004c7970();
    /* 00471a7e: mov esi, eax */ r_esi = r_eax;
    /* 00471a80: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a86: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x471a8bu); f_0047bc20();
    /* 00471a8b: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00471a8e: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
L_00471a91:; BB(0x00471a91);
    /* 00471a91: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471a97: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471a9a: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x471a9fu); f_004f6690();
    /* 00471a9f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00471aa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471aa4: je 0x471ad2 */ if (fZ) goto L_00471ad2;
L_00471aa6:; BB(0x00471aa6);
    /* 00471aa6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471aac: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471aaf: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x471ab4u); f_004f66e0();
    /* 00471ab4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00471ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471ab9: jne 0x471ad2 */ if (!fZ) goto L_00471ad2;
L_00471abb:; BB(0x00471abb);
    /* 00471abb: push 0x450 */ { u32 v = 0x450u; r_esp -= 4; W32(r_esp, v); }
    /* 00471ac0: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471ac5: push 0x6bc550 */ { u32 v = 0x6bc550u; r_esp -= 4; W32(r_esp, v); }
    /* 00471aca: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x471acfu); f_005e9f20();
    /* 00471acf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00471ad2:; BB(0x00471ad2);
    /* 00471ad2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00471ad4: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471ada: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471adc: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471ae2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00471ae5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x471ae7u); call_ind(t); }
    /* 00471ae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471ae9: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471aef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471af1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471af7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471afa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471afcu); call_ind(t); }
    /* 00471afc: jmp 0x477253 */ goto L_00477253;
L_00471b01:; BB(0x00471b01);
    /* 00471b01: jmp 0x471b99 */ goto L_00471b99;
L_00471b06:; BB(0x00471b06);
    /* 00471b06: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00471b0c: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00471b12: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x471b17u); f_00519a20();
    /* 00471b17: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b1a: jne 0x471b49 */ if (!fZ) goto L_00471b49;
L_00471b1c:; BB(0x00471b1c);
    /* 00471b1c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471b22: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471b25: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x471b2au); f_004f6640();
    /* 00471b2a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00471b2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b2f: je 0x471b3d */ if (fZ) goto L_00471b3d;
L_00471b31:; BB(0x00471b31);
    /* 00471b31: mov dword ptr [0x791344], 1 */ W32((u32)(0x791344u), 0x1u);
    /* 00471b3b: jmp 0x471b47 */ goto L_00471b47;
L_00471b3d:; BB(0x00471b3d);
    /* 00471b3d: mov dword ptr [0x791344], 3 */ W32((u32)(0x791344u), 0x3u);
L_00471b47:; BB(0x00471b47);
    /* 00471b47: jmp 0x471b99 */ goto L_00471b99;
L_00471b49:; BB(0x00471b49);
    /* 00471b49: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 00471b4e: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00471b54: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x471b59u); f_00519a20();
    /* 00471b59: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471b5c: jne 0x471b6a */ if (!fZ) goto L_00471b6a;
L_00471b5e:; BB(0x00471b5e);
    /* 00471b5e: mov dword ptr [0x791344], 0 */ W32((u32)(0x791344u), 0x0u);
    /* 00471b68: jmp 0x471b99 */ goto L_00471b99;
L_00471b6a:; BB(0x00471b6a);
    /* 00471b6a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00471b6c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471b72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471b74: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471b7a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00471b7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471b7fu); call_ind(t); }
    /* 00471b7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471b81: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471b87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471b89: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471b8f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471b92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471b94u); call_ind(t); }
    /* 00471b94: jmp 0x477253 */ goto L_00477253;
L_00471b99:; BB(0x00471b99);
    /* 00471b99: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00471b9b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471ba1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471ba3: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471ba9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00471bac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471baeu); call_ind(t); }
    /* 00471bae: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471bb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471bb5: mov edx, dword ptr [0x791344] */ r_edx = R32((u32)(0x791344u));
    /* 00471bbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00471bbc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471bc2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471bc7u); f_0047e3b0();
    /* 00471bc7: mov ecx, eax */ r_ecx = r_eax;
    /* 00471bc9: call 0x4cc890 */ r_esp -= 4; W32(r_esp, 0x471bceu); f_004cc890();
    /* 00471bce: jmp 0x471bfa */ goto L_00471bfa;
L_00471bd0:; BB(0x00471bd0);
    /* 00471bd0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00471bd2: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471bd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471bda: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471be0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00471be3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471be5u); call_ind(t); }
    /* 00471be5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471be7: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471bed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471bef: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471bf5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471bf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471bfau); call_ind(t); }
L_00471bfa:; BB(0x00471bfa);
    /* 00471bfa: jmp 0x477253 */ goto L_00477253;
L_00471c04:; BB(0x00471c04);
    /* 00471c04: movzx ecx, byte ptr [0x7912e9] */ r_ecx = (u32)R8((u32)(0x7912e9u));
    /* 00471c0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471c0d: jne 0x471c1e */ if (!fZ) goto L_00471c1e;
L_00471c0f:; BB(0x00471c0f);
    /* 00471c0f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471c15: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471c1au); f_0047e3b0();
    /* 00471c1a: mov byte ptr [eax + 0x1c], 0 */ W8((u32)(r_eax+0x1cu), 0x0u);
L_00471c1e:; BB(0x00471c1e);
    /* 00471c1e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471c24: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471c29u); f_0047e3b0();
    /* 00471c29: mov ecx, eax */ r_ecx = r_eax;
    /* 00471c2b: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x471c30u); f_004da890();
    /* 00471c30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471c36: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471c3bu); f_0047e3b0();
    /* 00471c3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00471c3d: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x471c42u); f_004db610();
    /* 00471c42: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471c48: call 0x47ec50 */ r_esp -= 4; W32(r_esp, 0x471c4du); f_0047ec50();
    /* 00471c4d: cmp dword ptr [0x791344], 1 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471c54: jne 0x471c88 */ if (!fZ) goto L_00471c88;
L_00471c56:; BB(0x00471c56);
    /* 00471c56: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471c5c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471c5f: call 0x4f5760 */ r_esp -= 4; W32(r_esp, 0x471c64u); f_004f5760();
    /* 00471c64: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00471c67: mov dword ptr [0x7912ec], edx */ W32((u32)(0x7912ecu), r_edx);
    /* 00471c6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471c6f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00471c71: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471c77: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471c7cu); f_0047e3b0();
    /* 00471c7c: mov ecx, eax */ r_ecx = r_eax;
    /* 00471c7e: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x471c83u); f_004dc4d0();
    /* 00471c83: jmp 0x471ee7 */ goto L_00471ee7;
L_00471c88:; BB(0x00471c88);
    /* 00471c88: cmp dword ptr [0x791344], 2 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471c8f: jne 0x471cfb */ if (!fZ) goto L_00471cfb;
L_00471c91:; BB(0x00471c91);
    /* 00471c91: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 00471c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471c9a: jne 0x471cab */ if (!fZ) goto L_00471cab;
L_00471c9c:; BB(0x00471c9c);
    /* 00471c9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471ca2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471ca7u); f_0047e3b0();
    /* 00471ca7: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00471cab:; BB(0x00471cab);
    /* 00471cab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471cb1: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x471cb6u); f_0047d6b0();
    /* 00471cb6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471cb9: jne 0x471cd3 */ if (!fZ) goto L_00471cd3;
L_00471cbb:; BB(0x00471cbb);
    /* 00471cbb: mov ecx, dword ptr [0x7912fc] */ r_ecx = R32((u32)(0x7912fcu));
    /* 00471cc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471cc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471cc4: call 0x4775b0 */ r_esp -= 4; W32(r_esp, 0x471cc9u); f_004775b0();
    /* 00471cc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471ccc: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00471cd1: jmp 0x471ce4 */ goto L_00471ce4;
L_00471cd3:; BB(0x00471cd3);
    /* 00471cd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471cd7: call 0x4775b0 */ r_esp -= 4; W32(r_esp, 0x471cdcu); f_004775b0();
    /* 00471cdc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471cdf: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
L_00471ce4:; BB(0x00471ce4);
    /* 00471ce4: mov byte ptr [0x791348], 0 */ W8((u32)(0x791348u), 0x0u);
    /* 00471ceb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471cf1: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x471cf6u); f_0047e500();
    /* 00471cf6: jmp 0x471ee7 */ goto L_00471ee7;
L_00471cfb:; BB(0x00471cfb);
    /* 00471cfb: cmp dword ptr [0x791344], 3 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d02: jne 0x471d3d */ if (!fZ) goto L_00471d3d;
L_00471d04:; BB(0x00471d04);
    /* 00471d04: movzx edx, byte ptr [0x7912e9] */ r_edx = (u32)R8((u32)(0x7912e9u));
    /* 00471d0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d0d: jne 0x471d1e */ if (!fZ) goto L_00471d1e;
L_00471d0f:; BB(0x00471d0f);
    /* 00471d0f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471d15: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471d1au); f_0047e3b0();
    /* 00471d1a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00471d1e:; BB(0x00471d1e);
    /* 00471d1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471d20: call 0x477450 */ r_esp -= 4; W32(r_esp, 0x471d25u); f_00477450();
    /* 00471d25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471d28: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00471d2d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471d33: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x471d38u); f_0047e500();
    /* 00471d38: jmp 0x471ee7 */ goto L_00471ee7;
L_00471d3d:; BB(0x00471d3d);
    /* 00471d3d: cmp dword ptr [0x791344], 4 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d44: jne 0x471da9 */ if (!fZ) goto L_00471da9;
L_00471d46:; BB(0x00471d46);
    /* 00471d46: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 00471d4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d4f: jne 0x471d60 */ if (!fZ) goto L_00471d60;
L_00471d51:; BB(0x00471d51);
    /* 00471d51: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471d57: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471d5cu); f_0047e3b0();
    /* 00471d5c: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_00471d60:; BB(0x00471d60);
    /* 00471d60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471d66: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x471d6bu); f_0047d6b0();
    /* 00471d6b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471d6e: jne 0x471d88 */ if (!fZ) goto L_00471d88;
L_00471d70:; BB(0x00471d70);
    /* 00471d70: mov ecx, dword ptr [0x7912fc] */ r_ecx = R32((u32)(0x7912fcu));
    /* 00471d76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00471d77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471d79: call 0x477900 */ r_esp -= 4; W32(r_esp, 0x471d7eu); f_00477900();
    /* 00471d7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471d81: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00471d86: jmp 0x471d99 */ goto L_00471d99;
L_00471d88:; BB(0x00471d88);
    /* 00471d88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471d8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471d8c: call 0x477900 */ r_esp -= 4; W32(r_esp, 0x471d91u); f_00477900();
    /* 00471d91: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471d94: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
L_00471d99:; BB(0x00471d99);
    /* 00471d99: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471d9f: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x471da4u); f_0047e500();
    /* 00471da4: jmp 0x471ee7 */ goto L_00471ee7;
L_00471da9:; BB(0x00471da9);
    /* 00471da9: cmp dword ptr [0x791344], 0 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471db0: jne 0x471ecc */ if (!fZ) goto L_00471ecc;
L_00471db6:; BB(0x00471db6);
    /* 00471db6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00471db8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471dbe: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471dc3u); f_0047e3b0();
    /* 00471dc3: mov ecx, eax */ r_ecx = r_eax;
    /* 00471dc5: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x471dcau); f_004c7030();
    /* 00471dca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471dd0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471dd5u); f_0047e3b0();
    /* 00471dd5: mov ecx, eax */ r_ecx = r_eax;
    /* 00471dd7: call 0x4c7230 */ r_esp -= 4; W32(r_esp, 0x471ddcu); f_004c7230();
    /* 00471ddc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471dde: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00471de0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471de6: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471debu); f_0047e3b0();
    /* 00471deb: mov ecx, eax */ r_ecx = r_eax;
    /* 00471ded: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x471df2u); f_004dc4d0();
    /* 00471df2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00471df4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471dfa: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471dffu); f_0047e3b0();
    /* 00471dff: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00471e02: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x471e07u); f_0060ca40();
    /* 00471e07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471e08: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00471e0e: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00471e11: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x471e16u); f_0060c840();
    /* 00471e16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00471e18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471e1e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471e23u); f_0047e3b0();
    /* 00471e23: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00471e26: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x471e2bu); f_0060ca40();
    /* 00471e2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471e2c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471e31: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00471e34: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x471e39u); f_0060c840();
    /* 00471e39: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00471e3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471e41: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471e46u); f_0047e3b0();
    /* 00471e46: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00471e49: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x471e4eu); f_0060ca40();
    /* 00471e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471e4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471e55: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00471e58: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x471e5du); f_0060c840();
    /* 00471e5d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471e5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471e65: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471e6au); f_0047e3b0();
    /* 00471e6a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00471e6d: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x471e72u); f_0060ca40();
    /* 00471e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471e73: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00471e79: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00471e7c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x471e81u); f_0060c840();
    /* 00471e81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471e83: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471e89: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471e8eu); f_0047e3b0();
    /* 00471e8e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00471e91: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x471e96u); f_0060ca40();
    /* 00471e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471e97: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00471e9c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00471e9f: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x471ea4u); f_0060c840();
    /* 00471ea4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471eaa: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00471ead: call 0x4f62e0 */ r_esp -= 4; W32(r_esp, 0x471eb2u); f_004f62e0();
    /* 00471eb2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00471eb5: mov dword ptr [0x7912ec], ecx */ W32((u32)(0x7912ecu), r_ecx);
    /* 00471ebb: mov edx, dword ptr [0x7912f4] */ r_edx = R32((u32)(0x7912f4u));
    /* 00471ec1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00471ec4: mov dword ptr [0x7912f4], edx */ W32((u32)(0x7912f4u), r_edx);
    /* 00471eca: jmp 0x471ee7 */ goto L_00471ee7;
L_00471ecc:; BB(0x00471ecc);
    /* 00471ecc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00471ece: jne 0x471ee7 */ if (!fZ) goto L_00471ee7;
L_00471ed0:; BB(0x00471ed0);
    /* 00471ed0: push 0x4d5 */ { u32 v = 0x4d5u; r_esp -= 4; W32(r_esp, v); }
    /* 00471ed5: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471eda: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00471edf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x471ee4u); f_005e9f20();
    /* 00471ee4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00471ee7:; BB(0x00471ee7);
    /* 00471ee7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00471ee9: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471eef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00471ef1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471ef7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00471efa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x471efcu); call_ind(t); }
    /* 00471efc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00471efe: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471f04: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471f06: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471f0c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471f0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471f11u); call_ind(t); }
    /* 00471f11: jmp 0x477253 */ goto L_00477253;
L_00471f16:; BB(0x00471f16);
    /* 00471f16: cmp dword ptr [0x791344], 1 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f1d: jne 0x471f2b */ if (!fZ) goto L_00471f2b;
L_00471f1f:; BB(0x00471f1f);
    /* 00471f1f: mov dword ptr [0x791300], 2 */ W32((u32)(0x791300u), 0x2u);
    /* 00471f29: jmp 0x471f9e */ goto L_00471f9e;
L_00471f2b:; BB(0x00471f2b);
    /* 00471f2b: cmp dword ptr [0x791344], 2 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f32: jne 0x471f42 */ if (!fZ) goto L_00471f42;
L_00471f34:; BB(0x00471f34);
    /* 00471f34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f38: call 0x4775b0 */ r_esp -= 4; W32(r_esp, 0x471f3du); f_004775b0();
    /* 00471f3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471f40: jmp 0x471f9e */ goto L_00471f9e;
L_00471f42:; BB(0x00471f42);
    /* 00471f42: cmp dword ptr [0x791344], 3 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f49: jne 0x471f57 */ if (!fZ) goto L_00471f57;
L_00471f4b:; BB(0x00471f4b);
    /* 00471f4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f4d: call 0x477450 */ r_esp -= 4; W32(r_esp, 0x471f52u); f_00477450();
    /* 00471f52: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471f55: jmp 0x471f9e */ goto L_00471f9e;
L_00471f57:; BB(0x00471f57);
    /* 00471f57: cmp dword ptr [0x791344], 4 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f5e: jne 0x471f6e */ if (!fZ) goto L_00471f6e;
L_00471f60:; BB(0x00471f60);
    /* 00471f60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f64: call 0x477900 */ r_esp -= 4; W32(r_esp, 0x471f69u); f_00477900();
    /* 00471f69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00471f6c: jmp 0x471f9e */ goto L_00471f9e;
L_00471f6e:; BB(0x00471f6e);
    /* 00471f6e: cmp dword ptr [0x791344], 0 */ {  u32 a = R32((u32)(0x791344u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471f75: jne 0x471f83 */ if (!fZ) goto L_00471f83;
L_00471f77:; BB(0x00471f77);
    /* 00471f77: mov dword ptr [0x791300], 1 */ W32((u32)(0x791300u), 0x1u);
    /* 00471f81: jmp 0x471f9e */ goto L_00471f9e;
L_00471f83:; BB(0x00471f83);
    /* 00471f83: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00471f85: jne 0x471f9e */ if (!fZ) goto L_00471f9e;
L_00471f87:; BB(0x00471f87);
    /* 00471f87: push 0x4e6 */ { u32 v = 0x4e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f8c: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00471f91: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00471f96: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x471f9bu); f_005e9f20();
    /* 00471f9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00471f9e:; BB(0x00471f9e);
    /* 00471f9e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00471fa0: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471fa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00471fa8: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471fae: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00471fb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471fb3u); call_ind(t); }
    /* 00471fb3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00471fb9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x471fbeu); f_0047e3b0();
    /* 00471fbe: mov ecx, eax */ r_ecx = r_eax;
    /* 00471fc0: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x471fc5u); f_004c6cb0();
    /* 00471fc5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471fc8: jne 0x47215a */ if (!fZ) goto L_0047215a;
L_00471fce:; BB(0x00471fce);
    /* 00471fce: cmp dword ptr [0x791300], 0 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471fd5: jne 0x471ff1 */ if (!fZ) goto L_00471ff1;
L_00471fd7:; BB(0x00471fd7);
    /* 00471fd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471fd9: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471fdf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00471fe1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00471fe7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00471fea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x471fecu); call_ind(t); }
    /* 00471fec: jmp 0x472158 */ goto L_00472158;
L_00471ff1:; BB(0x00471ff1);
    /* 00471ff1: cmp dword ptr [0x791300], 1 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471ff8: jne 0x472077 */ if (!fZ) goto L_00472077;
L_00471ffa:; BB(0x00471ffa);
    /* 00471ffa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472000: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472003: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x472008u); f_004f6840();
    /* 00472008: mov esi, eax */ r_esi = r_eax;
    /* 0047200a: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 00472010: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00472012: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472013: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x472018u); f_0062fbf0();
    /* 00472018: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047201b: mov edi, eax */ r_edi = r_eax;
    /* 0047201d: mov edx, dword ptr [0x791308] */ r_edx = R32((u32)(0x791308u));
    /* 00472023: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00472025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472026: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47202bu); f_0062fbf0();
    /* 0047202b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047202e: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 00472032: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472038: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x47203du); f_0047bde0();
    /* 0047203d: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00472040: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472042: jle 0x47205c */ if ((fZ||fS!=fO)) goto L_0047205c;
L_00472044:; BB(0x00472044);
    /* 00472044: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472048: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047204e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472053u); f_0047e3b0();
    /* 00472053: mov ecx, eax */ r_ecx = r_eax;
    /* 00472055: call 0x4cc9c0 */ r_esp -= 4; W32(r_esp, 0x47205au); f_004cc9c0();
    /* 0047205a: jmp 0x472072 */ goto L_00472072;
L_0047205c:; BB(0x0047205c);
    /* 0047205c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047205f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472060: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472066: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47206bu); f_0047e3b0();
    /* 0047206b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047206d: call 0x4cc980 */ r_esp -= 4; W32(r_esp, 0x472072u); f_004cc980();
L_00472072:; BB(0x00472072);
    /* 00472072: jmp 0x472158 */ goto L_00472158;
L_00472077:; BB(0x00472077);
    /* 00472077: cmp dword ptr [0x791300], 2 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047207e: jne 0x47209b */ if (!fZ) goto L_0047209b;
L_00472080:; BB(0x00472080);
    /* 00472080: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472083: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472084: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047208a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47208fu); f_0047e3b0();
    /* 0047208f: mov ecx, eax */ r_ecx = r_eax;
    /* 00472091: call 0x4cc9e0 */ r_esp -= 4; W32(r_esp, 0x472096u); f_004cc9e0();
    /* 00472096: jmp 0x472158 */ goto L_00472158;
L_0047209b:; BB(0x0047209b);
    /* 0047209b: cmp dword ptr [0x791300], 3 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004720a2: jne 0x4720bf */ if (!fZ) goto L_004720bf;
L_004720a4:; BB(0x004720a4);
    /* 004720a4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004720a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004720a8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004720ae: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4720b3u); f_0047e3b0();
    /* 004720b3: mov ecx, eax */ r_ecx = r_eax;
    /* 004720b5: call 0x4ccae0 */ r_esp -= 4; W32(r_esp, 0x4720bau); f_004ccae0();
    /* 004720ba: jmp 0x472158 */ goto L_00472158;
L_004720bf:; BB(0x004720bf);
    /* 004720bf: cmp dword ptr [0x791300], 4 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004720c6: jne 0x4720e0 */ if (!fZ) goto L_004720e0;
L_004720c8:; BB(0x004720c8);
    /* 004720c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004720cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004720cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004720d2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4720d7u); f_0047e3b0();
    /* 004720d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004720d9: call 0x4cca60 */ r_esp -= 4; W32(r_esp, 0x4720deu); f_004cca60();
    /* 004720de: jmp 0x472158 */ goto L_00472158;
L_004720e0:; BB(0x004720e0);
    /* 004720e0: cmp dword ptr [0x791300], 5 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004720e7: jne 0x472101 */ if (!fZ) goto L_00472101;
L_004720e9:; BB(0x004720e9);
    /* 004720e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004720ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004720ed: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004720f3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4720f8u); f_0047e3b0();
    /* 004720f8: mov ecx, eax */ r_ecx = r_eax;
    /* 004720fa: call 0x4cd310 */ r_esp -= 4; W32(r_esp, 0x4720ffu); f_004cd310();
    /* 004720ff: jmp 0x472158 */ goto L_00472158;
L_00472101:; BB(0x00472101);
    /* 00472101: cmp dword ptr [0x791300], 6 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472108: jne 0x472122 */ if (!fZ) goto L_00472122;
L_0047210a:; BB(0x0047210a);
    /* 0047210a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047210d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047210e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472114: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472119u); f_0047e3b0();
    /* 00472119: mov ecx, eax */ r_ecx = r_eax;
    /* 0047211b: call 0x4cca00 */ r_esp -= 4; W32(r_esp, 0x472120u); f_004cca00();
    /* 00472120: jmp 0x472158 */ goto L_00472158;
L_00472122:; BB(0x00472122);
    /* 00472122: cmp dword ptr [0x791300], 7 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472129: jne 0x472143 */ if (!fZ) goto L_00472143;
L_0047212b:; BB(0x0047212b);
    /* 0047212b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047212e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047212f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472135: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47213au); f_0047e3b0();
    /* 0047213a: mov ecx, eax */ r_ecx = r_eax;
    /* 0047213c: call 0x4cca90 */ r_esp -= 4; W32(r_esp, 0x472141u); f_004cca90();
    /* 00472141: jmp 0x472158 */ goto L_00472158;
L_00472143:; BB(0x00472143);
    /* 00472143: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472145: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047214b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047214d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472153: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00472156: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472158u); call_ind(t); }
L_00472158:; BB(0x00472158);
    /* 00472158: jmp 0x47216f */ goto L_0047216f;
L_0047215a:; BB(0x0047215a);
    /* 0047215a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047215c: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472162: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472164: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047216a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047216d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47216fu); call_ind(t); }
L_0047216f:; BB(0x0047216f);
    /* 0047216f: jmp 0x477253 */ goto L_00477253;
L_00472174:; BB(0x00472174);
    /* 00472174: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047217a: mov byte ptr [ecx + 0xe8], 0 */ W8((u32)(r_ecx+0xe8u), 0x0u);
    /* 00472181: cmp dword ptr [0x7912ec], -1 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472188: jne 0x4721a1 */ if (!fZ) goto L_004721a1;
L_0047218a:; BB(0x0047218a);
    /* 0047218a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0047218c: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472192: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472194: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047219a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0047219d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47219fu); call_ind(t); }
    /* 0047219f: jmp 0x472214 */ goto L_00472214;
L_004721a1:; BB(0x004721a1);
    /* 004721a1: cmp dword ptr [0x7912ec], -2 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004721a8: jne 0x4721c1 */ if (!fZ) goto L_004721c1;
L_004721aa:; BB(0x004721aa);
    /* 004721aa: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004721ac: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004721b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004721b4: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004721ba: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004721bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4721bfu); call_ind(t); }
    /* 004721bf: jmp 0x472214 */ goto L_00472214;
L_004721c1:; BB(0x004721c1);
    /* 004721c1: cmp dword ptr [0x7912ec], -3 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004721c8: jne 0x4721e1 */ if (!fZ) goto L_004721e1;
L_004721ca:; BB(0x004721ca);
    /* 004721ca: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004721cc: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004721d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004721d4: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004721da: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004721dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4721dfu); call_ind(t); }
    /* 004721df: jmp 0x472214 */ goto L_00472214;
L_004721e1:; BB(0x004721e1);
    /* 004721e1: mov ecx, dword ptr [0x7912ec] */ r_ecx = R32((u32)(0x7912ecu));
    /* 004721e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004721e8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004721ee: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4721f3u); f_0047e490();
    /* 004721f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004721f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004721fa: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x4721ffu); f_0047e400();
    /* 004721ff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00472201: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472207: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472209: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047220f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00472212: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472214u); call_ind(t); }
L_00472214:; BB(0x00472214);
    /* 00472214: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472216: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047221c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047221e: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472224: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00472227: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472229u); call_ind(t); }
    /* 00472229: jmp 0x477253 */ goto L_00477253;
L_0047222e:; BB(0x0047222e);
    /* 0047222e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472234: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472237: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x47223cu); f_004f6420();
    /* 0047223c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0047223e: jle 0x47233d */ if ((fZ||fS!=fO)) goto L_0047233d;
L_00472244:; BB(0x00472244);
    /* 00472244: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047224a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047224d: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x472252u); f_004f64b0();
    /* 00472252: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00472255: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00472258: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047225e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472261: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x472266u); f_004f6420();
    /* 00472266: mov esi, eax */ r_esi = r_eax;
    /* 00472268: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047226e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x472273u); f_0047bc20();
    /* 00472273: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00472276: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00472277: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0047227a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047227b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472281: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x472286u); f_0047e3d0();
    /* 00472286: mov ecx, eax */ r_ecx = r_eax;
    /* 00472288: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x47228du); f_004c6b80();
    /* 0047228d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00472290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472291: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472297: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47229cu); f_0047e3d0();
    /* 0047229c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047229e: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4722a3u); f_004da300();
    /* 004722a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004722a9: call 0x47ecd0 */ r_esp -= 4; W32(r_esp, 0x4722aeu); f_0047ecd0();
    /* 004722ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004722b4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004722b7: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4722bcu); f_004f6840();
    /* 004722bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004722bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004722c3: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4722c8u); f_0047ec90();
    /* 004722c8: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004722cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004722cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004722d2: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4722d7u); f_0047e3d0();
    /* 004722d7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004722da: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004722dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004722df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004722e5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004722e8: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4722edu); f_004f6420();
    /* 004722ed: mov esi, eax */ r_esi = r_eax;
    /* 004722ef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004722f5: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4722fau); f_0047bc20();
    /* 004722fa: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004722fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004722fe: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x472303u); f_0064c8a0();
    /* 00472303: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472306: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0047230c: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 00472312: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00472318: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0047231b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00472321: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00472324: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00472327: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472328: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047232b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047232c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0047232e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00472331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472332: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00472338: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x47233du); f_005e7e40();
L_0047233d:; BB(0x0047233d);
    /* 0047233d: mov byte ptr [0x7912e8], 1 */ W8((u32)(0x7912e8u), 0x1u);
    /* 00472344: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00472346: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047234c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047234e: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472354: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00472357: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472359u); call_ind(t); }
    /* 00472359: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047235b: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472361: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472363: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472369: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047236c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47236eu); call_ind(t); }
    /* 0047236e: jmp 0x477253 */ goto L_00477253;
L_00472373:; BB(0x00472373);
    /* 00472373: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472379: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 00472383: movzx edx, byte ptr [0x7912e8] */ r_edx = (u32)R8((u32)(0x7912e8u));
    /* 0047238a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047238c: jne 0x4723cb */ if (!fZ) goto L_004723cb;
L_0047238e:; BB(0x0047238e);
    /* 0047238e: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 00472395: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472397: jne 0x4723cb */ if (!fZ) goto L_004723cb;
L_00472399:; BB(0x00472399);
    /* 00472399: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047239f: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x4723a4u); f_0047d7b0();
    /* 004723a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004723a7: jne 0x4723cb */ if (!fZ) goto L_004723cb;
L_004723a9:; BB(0x004723a9);
    /* 004723a9: movzx ecx, byte ptr [0x791348] */ r_ecx = (u32)R8((u32)(0x791348u));
    /* 004723b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004723b2: je 0x4723cb */ if (fZ) goto L_004723cb;
L_004723b4:; BB(0x004723b4);
    /* 004723b4: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004723b6: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004723bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004723be: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004723c4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004723c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4723c9u); call_ind(t); }
    /* 004723c9: jmp 0x472409 */ goto L_00472409;
L_004723cb:; BB(0x004723cb);
    /* 004723cb: movzx eax, byte ptr [0x7912e9] */ r_eax = (u32)R8((u32)(0x7912e9u));
    /* 004723d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004723d4: je 0x4723f4 */ if (fZ) goto L_004723f4;
L_004723d6:; BB(0x004723d6);
    /* 004723d6: mov byte ptr [0x7912ea], 1 */ W8((u32)(0x7912eau), 0x1u);
    /* 004723dd: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004723df: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004723e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004723e7: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004723ed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004723f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4723f2u); call_ind(t); }
    /* 004723f2: jmp 0x472409 */ goto L_00472409;
L_004723f4:; BB(0x004723f4);
    /* 004723f4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004723f6: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004723fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004723fe: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472404: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472407: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472409u); call_ind(t); }
L_00472409:; BB(0x00472409);
    /* 00472409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047240b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472411: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x472416u); f_005fc490();
    /* 00472416: jmp 0x477253 */ goto L_00477253;
L_0047241b:; BB(0x0047241b);
    /* 0047241b: mov dword ptr [0x791340], 0 */ W32((u32)(0x791340u), 0x0u);
    /* 00472425: jmp 0x472436 */ goto L_00472436;
L_00472427:; BB(0x00472427);
    /* 00472427: mov ecx, dword ptr [0x791340] */ r_ecx = R32((u32)(0x791340u));
    /* 0047242d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472430: mov dword ptr [0x791340], ecx */ W32((u32)(0x791340u), r_ecx);
L_00472436:; BB(0x00472436);
    /* 00472436: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047243c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x472441u); f_0047f950();
    /* 00472441: cmp dword ptr [0x791340], eax */ {  u32 a = R32((u32)(0x791340u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472447: jge 0x47247c */ if ((fS==fO)) goto L_0047247c;
L_00472449:; BB(0x00472449);
    /* 00472449: mov edx, dword ptr [0x791340] */ r_edx = R32((u32)(0x791340u));
    /* 0047244f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472450: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472456: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47245bu); f_0047e390();
    /* 0047245b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047245d: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x472462u); f_004dc490();
    /* 00472462: mov eax, dword ptr [0x791340] */ r_eax = R32((u32)(0x791340u));
    /* 00472467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472468: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047246e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x472473u); f_0047e390();
    /* 00472473: mov dword ptr [eax + 0x18], 0xffffffff */ W32((u32)(r_eax+0x18u), 0xffffffffu);
    /* 0047247a: jmp 0x472427 */ goto L_00472427;
L_0047247c:; BB(0x0047247c);
    /* 0047247c: mov byte ptr [0x7912e9], 1 */ W8((u32)(0x7912e9u), 0x1u);
    /* 00472483: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472489: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47248eu); f_0047bbc0();
    /* 0047248e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047248f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472495: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x47249au); f_0047e400();
    /* 0047249a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004724a0: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4724a5u); f_0047e440();
    /* 004724a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004724ab: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4724b0u); f_0047e3b0();
    /* 004724b0: mov dword ptr [0x7912f8], eax */ W32((u32)(0x7912f8u), r_eax);
L_004724b5:; BB(0x004724b5);
    /* 004724b5: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004724bb: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4724c0u); f_004c6cb0();
    /* 004724c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004724c2: je 0x4724e3 */ if (fZ) goto L_004724e3;
L_004724c4:; BB(0x004724c4);
    /* 004724c4: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004724ca: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4724cfu); f_004c7010();
    /* 004724cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004724d1: je 0x4724e3 */ if (fZ) goto L_004724e3;
L_004724d3:; BB(0x004724d3);
    /* 004724d3: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004724d9: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4724deu); f_004c7010();
    /* 004724de: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004724e1: jne 0x472533 */ if (!fZ) goto L_00472533;
L_004724e3:; BB(0x004724e3);
    /* 004724e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004724e9: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4724eeu); f_0047e420();
    /* 004724ee: mov esi, eax */ r_esi = r_eax;
    /* 004724f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004724f6: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4724fbu); f_0047bbc0();
    /* 004724fb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004724fd: jne 0x472516 */ if (!fZ) goto L_00472516;
L_004724ff:; BB(0x004724ff);
    /* 004724ff: push 0x54b */ { u32 v = 0x54bu; r_esp -= 4; W32(r_esp, v); }
    /* 00472504: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00472509: push 0x6bc518 */ { u32 v = 0x6bc518u; r_esp -= 4; W32(r_esp, v); }
    /* 0047250e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x472513u); f_005e9f20();
    /* 00472513: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00472516:; BB(0x00472516);
    /* 00472516: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047251c: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x472521u); f_0047e440();
    /* 00472521: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472527: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47252cu); f_0047e3b0();
    /* 0047252c: mov dword ptr [0x7912f8], eax */ W32((u32)(0x7912f8u), r_eax);
    /* 00472531: jmp 0x4724b5 */ goto L_004724b5;
L_00472533:; BB(0x00472533);
    /* 00472533: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00472535: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047253b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047253d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472543: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00472546: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472548u); call_ind(t); }
    /* 00472548: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047254a: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472550: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472552: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472558: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047255b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47255du); call_ind(t); }
    /* 0047255d: jmp 0x477253 */ goto L_00477253;
L_00472562:; BB(0x00472562);
    /* 00472562: mov dword ptr [0x79133c], 0 */ W32((u32)(0x79133cu), 0x0u);
    /* 0047256c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472572: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472577u); f_0047e3b0();
    /* 00472577: mov ecx, eax */ r_ecx = r_eax;
    /* 00472579: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47257eu); f_004c6cb0();
    /* 0047257e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472581: jne 0x47263c */ if (!fZ) goto L_0047263c;
L_00472587:; BB(0x00472587);
    /* 00472587: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047258d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472592u); f_0047e3b0();
    /* 00472592: mov ecx, eax */ r_ecx = r_eax;
    /* 00472594: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x472599u); f_004c7010();
    /* 00472599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047259b: je 0x47263c */ if (fZ) goto L_0047263c;
L_004725a1:; BB(0x004725a1);
    /* 004725a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004725a7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4725acu); f_0047e3b0();
    /* 004725ac: mov ecx, eax */ r_ecx = r_eax;
    /* 004725ae: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4725b3u); f_004c7010();
    /* 004725b3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004725b6: je 0x47263c */ if (fZ) goto L_0047263c;
L_004725bc:; BB(0x004725bc);
    /* 004725bc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004725c2: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4725c7u); f_0047e280();
    /* 004725c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004725c9: jne 0x4725e1 */ if (!fZ) goto L_004725e1;
L_004725cb:; BB(0x004725cb);
    /* 004725cb: mov ecx, dword ptr [0x7912f4] */ r_ecx = R32((u32)(0x7912f4u));
    /* 004725d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004725d2: push 0x79130c */ { u32 v = 0x79130cu; r_esp -= 4; W32(r_esp, v); }
    /* 004725d7: call 0x46e990 */ r_esp -= 4; W32(r_esp, 0x4725dcu); f_0046e990();
    /* 004725dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004725df: jmp 0x4725f5 */ goto L_004725f5;
L_004725e1:; BB(0x004725e1);
    /* 004725e1: mov edx, dword ptr [0x7912f4] */ r_edx = R32((u32)(0x7912f4u));
    /* 004725e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004725e8: push 0x79130c */ { u32 v = 0x79130cu; r_esp -= 4; W32(r_esp, v); }
    /* 004725ed: call 0x470a60 */ r_esp -= 4; W32(r_esp, 0x4725f2u); f_00470a60();
    /* 004725f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004725f5:; BB(0x004725f5);
    /* 004725f5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 004725f7: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004725fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004725ff: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472605: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472608: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47260au); call_ind(t); }
    /* 0047260a: push 0x79130c */ { u32 v = 0x79130cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047260f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00472611: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00472617: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0047261d: call 0x46b950 */ r_esp -= 4; W32(r_esp, 0x472622u); f_0046b950();
    /* 00472622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472624: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047262a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047262c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472632: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00472635: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472637u); call_ind(t); }
    /* 00472637: jmp 0x472729 */ goto L_00472729;
L_0047263c:; BB(0x0047263c);
    /* 0047263c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472642: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472647u); f_0047e3b0();
    /* 00472647: mov ecx, eax */ r_ecx = r_eax;
    /* 00472649: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47264eu); f_004c6cb0();
    /* 0047264e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472651: jne 0x4726ac */ if (!fZ) goto L_004726ac;
L_00472653:; BB(0x00472653);
    /* 00472653: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472659: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47265eu); f_0047e3b0();
    /* 0047265e: mov ecx, eax */ r_ecx = r_eax;
    /* 00472660: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x472665u); f_004c7010();
    /* 00472665: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472667: je 0x4726ac */ if (fZ) goto L_004726ac;
L_00472669:; BB(0x00472669);
    /* 00472669: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047266f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472674u); f_0047e3b0();
    /* 00472674: mov ecx, eax */ r_ecx = r_eax;
    /* 00472676: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47267bu); f_004c7010();
    /* 0047267b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047267e: je 0x4726ac */ if (fZ) goto L_004726ac;
L_00472680:; BB(0x00472680);
    /* 00472680: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00472682: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472688: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047268a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472690: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472693: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472695u); call_ind(t); }
    /* 00472695: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472697: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047269d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047269f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004726a5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004726a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4726aau); call_ind(t); }
    /* 004726aa: jmp 0x472729 */ goto L_00472729;
L_004726ac:; BB(0x004726ac);
    /* 004726ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004726b2: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4726b7u); f_0047e420();
    /* 004726b7: mov esi, eax */ r_esi = r_eax;
    /* 004726b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004726bf: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4726c4u); f_0047bbc0();
    /* 004726c4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004726c6: jne 0x4726f4 */ if (!fZ) goto L_004726f4;
L_004726c8:; BB(0x004726c8);
    /* 004726c8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004726ca: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004726d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004726d2: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004726d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004726db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4726ddu); call_ind(t); }
    /* 004726dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004726df: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004726e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004726e7: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004726ed: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004726f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4726f2u); call_ind(t); }
    /* 004726f2: jmp 0x472729 */ goto L_00472729;
L_004726f4:; BB(0x004726f4);
    /* 004726f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004726fa: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4726ffu); f_0047e440();
    /* 004726ff: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00472701: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472707: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472709: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047270f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472712: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472714u); call_ind(t); }
    /* 00472714: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472716: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047271c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047271e: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472724: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00472727: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472729u); call_ind(t); }
L_00472729:; BB(0x00472729);
    /* 00472729: jmp 0x477253 */ goto L_00477253;
L_0047272e:; BB(0x0047272e);
    /* 0047272e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472734: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472739u); f_0047e3b0();
    /* 00472739: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00472740: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472746: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x47274bu); f_0047e280();
    /* 0047274b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047274d: jne 0x4727c2 */ if (!fZ) goto L_004727c2;
L_0047274f:; BB(0x0047274f);
    /* 0047274f: mov ecx, dword ptr [0x7912f4] */ r_ecx = R32((u32)(0x7912f4u));
    /* 00472755: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472756: push 0x79130c */ { u32 v = 0x79130cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047275b: call 0x46e990 */ r_esp -= 4; W32(r_esp, 0x472760u); f_0046e990();
    /* 00472760: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00472763: mov dword ptr [0x791340], 4 */ W32((u32)(0x791340u), 0x4u);
    /* 0047276d: jmp 0x47277e */ goto L_0047277e;
L_0047276f:; BB(0x0047276f);
    /* 0047276f: mov edx, dword ptr [0x791340] */ r_edx = R32((u32)(0x791340u));
    /* 00472775: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00472778: mov dword ptr [0x791340], edx */ W32((u32)(0x791340u), r_edx);
L_0047277e:; BB(0x0047277e);
    /* 0047277e: cmp dword ptr [0x791340], 0 */ {  u32 a = R32((u32)(0x791340u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472785: jl 0x4727c0 */ if ((fS!=fO)) goto L_004727c0;
L_00472787:; BB(0x00472787);
    /* 00472787: mov eax, dword ptr [0x791340] */ r_eax = R32((u32)(0x791340u));
    /* 0047278c: movzx ecx, byte ptr [eax + 0x79130c] */ r_ecx = (u32)R8((u32)(r_eax+0x79130cu));
    /* 00472793: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472795: je 0x4727be */ if (fZ) goto L_004727be;
L_00472797:; BB(0x00472797);
    /* 00472797: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047279d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4727a2u); f_0047e3b0();
    /* 004727a2: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004727a5: mov dword ptr [ebp - 0x26c], eax */ W32((u32)(r_ebp+0xfffffd94u), r_eax);
    /* 004727ab: mov edx, dword ptr [ebp - 0x26c] */ r_edx = R32((u32)(r_ebp+0xfffffd94u));
    /* 004727b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004727b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004727b6: mov ecx, dword ptr [ebp - 0x26c] */ r_ecx = R32((u32)(r_ebp+0xfffffd94u));
    /* 004727bc: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_004727be:; BB(0x004727be);
    /* 004727be: jmp 0x47276f */ goto L_0047276f;
L_004727c0:; BB(0x004727c0);
    /* 004727c0: jmp 0x472832 */ goto L_00472832;
L_004727c2:; BB(0x004727c2);
    /* 004727c2: mov edx, dword ptr [0x7912f4] */ r_edx = R32((u32)(0x7912f4u));
    /* 004727c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004727c9: push 0x79130c */ { u32 v = 0x79130cu; r_esp -= 4; W32(r_esp, v); }
    /* 004727ce: call 0x470a60 */ r_esp -= 4; W32(r_esp, 0x4727d3u); f_00470a60();
    /* 004727d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004727d6: mov dword ptr [0x791340], 4 */ W32((u32)(0x791340u), 0x4u);
    /* 004727e0: jmp 0x4727ef */ goto L_004727ef;
L_004727e2:; BB(0x004727e2);
    /* 004727e2: mov eax, dword ptr [0x791340] */ r_eax = R32((u32)(0x791340u));
    /* 004727e7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004727ea: mov dword ptr [0x791340], eax */ W32((u32)(0x791340u), r_eax);
L_004727ef:; BB(0x004727ef);
    /* 004727ef: cmp dword ptr [0x791340], 0 */ {  u32 a = R32((u32)(0x791340u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004727f6: jl 0x472832 */ if ((fS!=fO)) goto L_00472832;
L_004727f8:; BB(0x004727f8);
    /* 004727f8: mov ecx, dword ptr [0x791340] */ r_ecx = R32((u32)(0x791340u));
    /* 004727fe: movzx edx, byte ptr [ecx + 0x79130c] */ r_edx = (u32)R8((u32)(r_ecx+0x79130cu));
    /* 00472805: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472807: je 0x472830 */ if (fZ) goto L_00472830;
L_00472809:; BB(0x00472809);
    /* 00472809: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047280f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472814u); f_0047e3b0();
    /* 00472814: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472817: mov dword ptr [ebp - 0x270], eax */ W32((u32)(r_ebp+0xfffffd90u), r_eax);
    /* 0047281d: mov eax, dword ptr [ebp - 0x270] */ r_eax = R32((u32)(r_ebp+0xfffffd90u));
    /* 00472823: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00472825: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472828: mov edx, dword ptr [ebp - 0x270] */ r_edx = R32((u32)(r_ebp+0xfffffd90u));
    /* 0047282e: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_00472830:; BB(0x00472830);
    /* 00472830: jmp 0x4727e2 */ goto L_004727e2;
L_00472832:; BB(0x00472832);
    /* 00472832: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00472834: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047283a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047283c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472842: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472845: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472847u); call_ind(t); }
    /* 00472847: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472849: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047284f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472851: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472857: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047285a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47285cu); call_ind(t); }
    /* 0047285c: jmp 0x477253 */ goto L_00477253;
L_00472861:; BB(0x00472861);
    /* 00472861: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00472863: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472869: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047286b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472871: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472874: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472876u); call_ind(t); }
    /* 00472876: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047287c: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x472881u); f_0047e280();
    /* 00472881: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472884: jne 0x4728a0 */ if (!fZ) goto L_004728a0;
L_00472886:; BB(0x00472886);
    /* 00472886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472888: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047288e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472890: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472896: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00472899: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47289bu); call_ind(t); }
    /* 0047289b: jmp 0x472991 */ goto L_00472991;
L_004728a0:; BB(0x004728a0);
    /* 004728a0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004728a6: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4728abu); f_0047e3b0();
    /* 004728ab: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004728af: jne 0x4728cb */ if (!fZ) goto L_004728cb;
L_004728b1:; BB(0x004728b1);
    /* 004728b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004728b3: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004728b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004728bb: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004728c1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004728c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4728c6u); call_ind(t); }
    /* 004728c6: jmp 0x472991 */ goto L_00472991;
L_004728cb:; BB(0x004728cb);
    /* 004728cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004728d1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4728d6u); f_0047e3b0();
    /* 004728d6: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004728da: jne 0x4728f6 */ if (!fZ) goto L_004728f6;
L_004728dc:; BB(0x004728dc);
    /* 004728dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004728de: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004728e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004728e6: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004728ec: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004728ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4728f1u); call_ind(t); }
    /* 004728f1: jmp 0x472991 */ goto L_00472991;
L_004728f6:; BB(0x004728f6);
    /* 004728f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004728fc: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x472901u); f_0047e420();
    /* 00472901: mov esi, eax */ r_esi = r_eax;
    /* 00472903: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472909: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47290eu); f_0047bbc0();
    /* 0047290e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472910: jne 0x472929 */ if (!fZ) goto L_00472929;
L_00472912:; BB(0x00472912);
    /* 00472912: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472914: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047291a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047291c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472922: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00472925: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472927u); call_ind(t); }
    /* 00472927: jmp 0x472991 */ goto L_00472991;
L_00472929:; BB(0x00472929);
    /* 00472929: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047292f: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472934u); f_0047e3b0();
    /* 00472934: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472938: jne 0x472952 */ if (!fZ) goto L_00472952;
L_0047293a:; BB(0x0047293a);
    /* 0047293a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047293d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047293e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472944: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472949u); f_0047e3b0();
    /* 00472949: mov ecx, eax */ r_ecx = r_eax;
    /* 0047294b: call 0x4cce80 */ r_esp -= 4; W32(r_esp, 0x472950u); f_004cce80();
    /* 00472950: jmp 0x472991 */ goto L_00472991;
L_00472952:; BB(0x00472952);
    /* 00472952: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472958: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47295du); f_0047e3b0();
    /* 0047295d: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472961: jne 0x47297b */ if (!fZ) goto L_0047297b;
L_00472963:; BB(0x00472963);
    /* 00472963: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00472966: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00472967: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047296d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472972u); f_0047e3b0();
    /* 00472972: mov ecx, eax */ r_ecx = r_eax;
    /* 00472974: call 0x4cced0 */ r_esp -= 4; W32(r_esp, 0x472979u); f_004cced0();
    /* 00472979: jmp 0x472991 */ goto L_00472991;
L_0047297b:; BB(0x0047297b);
    /* 0047297b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047297e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047297f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472985: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47298au); f_0047e3b0();
    /* 0047298a: mov ecx, eax */ r_ecx = r_eax;
    /* 0047298c: call 0x4ccea0 */ r_esp -= 4; W32(r_esp, 0x472991u); f_004ccea0();
L_00472991:; BB(0x00472991);
    /* 00472991: jmp 0x477253 */ goto L_00477253;
L_00472996:; BB(0x00472996);
    /* 00472996: mov dword ptr [0x791340], 4 */ W32((u32)(0x791340u), 0x4u);
    /* 004729a0: jmp 0x4729b1 */ goto L_004729b1;
L_004729a2:; BB(0x004729a2);
    /* 004729a2: mov ecx, dword ptr [0x791340] */ r_ecx = R32((u32)(0x791340u));
    /* 004729a8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004729ab: mov dword ptr [0x791340], ecx */ W32((u32)(0x791340u), r_ecx);
L_004729b1:; BB(0x004729b1);
    /* 004729b1: cmp dword ptr [0x791340], 0 */ {  u32 a = R32((u32)(0x791340u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004729b8: jl 0x472a64 */ if ((fS!=fO)) goto L_00472a64;
L_004729be:; BB(0x004729be);
    /* 004729be: mov edx, dword ptr [0x791340] */ r_edx = R32((u32)(0x791340u));
    /* 004729c4: movzx eax, byte ptr [edx + 0x79130c] */ r_eax = (u32)R8((u32)(r_edx+0x79130cu));
    /* 004729cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004729cd: je 0x472a5f */ if (fZ) goto L_00472a5f;
L_004729d3:; BB(0x004729d3);
    /* 004729d3: mov ecx, dword ptr [0x791340] */ r_ecx = R32((u32)(0x791340u));
    /* 004729d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004729da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004729e0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4729e5u); f_0047e3b0();
    /* 004729e5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004729e8: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4729edu); f_0060ca40();
    /* 004729ed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004729f0: mov dword ptr [ebp - 0x274], edx */ W32((u32)(r_ebp+0xfffffd8cu), r_edx);
    /* 004729f6: mov eax, dword ptr [ebp - 0x274] */ r_eax = R32((u32)(r_ebp+0xfffffd8cu));
    /* 004729fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004729fe: mov ecx, dword ptr [ebp - 0x274] */ r_ecx = R32((u32)(r_ebp+0xfffffd8cu));
    /* 00472a04: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00472a07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472a09u); call_ind(t); }
    /* 00472a09: mov ecx, dword ptr [0x791340] */ r_ecx = R32((u32)(0x791340u));
    /* 00472a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472a10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472a16: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472a1bu); f_0047e3b0();
    /* 00472a1b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472a1e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472a23u); f_0060ca40();
    /* 00472a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472a24: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00472a2a: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00472a2d: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x472a32u); f_0060c840();
    /* 00472a32: mov eax, dword ptr [0x791340] */ r_eax = R32((u32)(0x791340u));
    /* 00472a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472a38: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472a3e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472a43u); f_0047e3b0();
    /* 00472a43: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472a46: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472a4bu); f_0060ca40();
    /* 00472a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472a4c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472a52: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472a57u); f_0047e3b0();
    /* 00472a57: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472a5a: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x472a5fu); f_0060c890();
L_00472a5f:; BB(0x00472a5f);
    /* 00472a5f: jmp 0x4729a2 */ goto L_004729a2;
L_00472a64:; BB(0x00472a64);
    /* 00472a64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472a66: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472a6c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472a71u); f_0047e3b0();
    /* 00472a71: mov ecx, eax */ r_ecx = r_eax;
    /* 00472a73: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x472a78u); f_004c7820();
    /* 00472a78: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00472a7a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472a80: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472a82: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472a88: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472a8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472a8du); call_ind(t); }
    /* 00472a8d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00472a8f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472a95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472a97: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472a9d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00472aa0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472aa2u); call_ind(t); }
    /* 00472aa2: jmp 0x477253 */ goto L_00477253;
L_00472aa7:; BB(0x00472aa7);
    /* 00472aa7: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00472aad: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 00472ab3: call 0x519a20 */ r_esp -= 4; W32(r_esp, 0x472ab8u); f_00519a20();
    /* 00472ab8: cmp eax, 0x7fbc */ {  u32 a = r_eax; u32 b = 0x7fbcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472abd: jne 0x472f26 */ if (!fZ) goto L_00472f26;
L_00472ac3:; BB(0x00472ac3);
    /* 00472ac3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00472ac5: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472acb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472acd: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472ad3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00472ad6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472ad8u); call_ind(t); }
    /* 00472ad8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472ade: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472ae3u); f_0047e3b0();
    /* 00472ae3: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00472aea: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 00472aef: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00472af5: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00472afb: movzx eax, byte ptr [edx + 0x1dc] */ r_eax = (u32)R8((u32)(r_edx+0x1dcu));
    /* 00472b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472b04: je 0x472bae */ if (fZ) goto L_00472bae;
L_00472b0a:; BB(0x00472b0a);
    /* 00472b0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00472b0c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472b12: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472b17u); f_0047e3b0();
    /* 00472b17: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472b1a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472b1fu); f_0060ca40();
    /* 00472b1f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472b22: mov dword ptr [ebp - 0x278], ecx */ W32((u32)(r_ebp+0xfffffd88u), r_ecx);
    /* 00472b28: mov edx, dword ptr [ebp - 0x278] */ r_edx = R32((u32)(r_ebp+0xfffffd88u));
    /* 00472b2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472b30: mov ecx, dword ptr [ebp - 0x278] */ r_ecx = R32((u32)(r_ebp+0xfffffd88u));
    /* 00472b36: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00472b39: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x472b3bu); call_ind(t); }
    /* 00472b3b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00472b3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472b43: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472b48u); f_0047e3b0();
    /* 00472b48: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472b4b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472b50u); f_0060ca40();
    /* 00472b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472b51: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00472b56: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00472b59: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x472b5eu); f_0060c840();
    /* 00472b5e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00472b60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472b66: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472b6bu); f_0047e3b0();
    /* 00472b6b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472b6e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472b73u); f_0060ca40();
    /* 00472b73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472b74: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472b7a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472b7fu); f_0047e3b0();
    /* 00472b7f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472b82: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x472b87u); f_0060c890();
    /* 00472b87: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472b8d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472b92u); f_0047e3b0();
    /* 00472b92: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472b95: mov dword ptr [ebp - 0x27c], eax */ W32((u32)(r_ebp+0xfffffd84u), r_eax);
    /* 00472b9b: mov ecx, dword ptr [ebp - 0x27c] */ r_ecx = R32((u32)(r_ebp+0xfffffd84u));
    /* 00472ba1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472ba3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00472ba6: mov eax, dword ptr [ebp - 0x27c] */ r_eax = R32((u32)(r_ebp+0xfffffd84u));
    /* 00472bac: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00472bae:; BB(0x00472bae);
    /* 00472bae: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00472bb4: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 00472bba: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00472bc0: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 00472bc7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472bc9: je 0x472c74 */ if (fZ) goto L_00472c74;
L_00472bcf:; BB(0x00472bcf);
    /* 00472bcf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00472bd1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472bd7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472bdcu); f_0047e3b0();
    /* 00472bdc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472bdf: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472be4u); f_0060ca40();
    /* 00472be4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00472be7: mov dword ptr [ebp - 0x280], edx */ W32((u32)(r_ebp+0xfffffd80u), r_edx);
    /* 00472bed: mov eax, dword ptr [ebp - 0x280] */ r_eax = R32((u32)(r_ebp+0xfffffd80u));
    /* 00472bf3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00472bf5: mov ecx, dword ptr [ebp - 0x280] */ r_ecx = R32((u32)(r_ebp+0xfffffd80u));
    /* 00472bfb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00472bfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472c00u); call_ind(t); }
    /* 00472c00: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00472c02: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472c08: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472c0du); f_0047e3b0();
    /* 00472c0d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472c10: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472c15u); f_0060ca40();
    /* 00472c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472c16: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472c1c: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00472c1f: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x472c24u); f_0060c840();
    /* 00472c24: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00472c26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472c2c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472c31u); f_0047e3b0();
    /* 00472c31: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472c34: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472c39u); f_0060ca40();
    /* 00472c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472c3a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472c40: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472c45u); f_0047e3b0();
    /* 00472c45: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472c48: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x472c4du); f_0060c890();
    /* 00472c4d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472c53: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472c58u); f_0047e3b0();
    /* 00472c58: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472c5b: mov dword ptr [ebp - 0x284], eax */ W32((u32)(r_ebp+0xfffffd7cu), r_eax);
    /* 00472c61: mov edx, dword ptr [ebp - 0x284] */ r_edx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 00472c67: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472c69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472c6c: mov ecx, dword ptr [ebp - 0x284] */ r_ecx = R32((u32)(r_ebp+0xfffffd7cu));
    /* 00472c72: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00472c74:; BB(0x00472c74);
    /* 00472c74: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00472c7a: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00472c80: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00472c86: movzx edx, byte ptr [ecx + 0x1dc] */ r_edx = (u32)R8((u32)(r_ecx+0x1dcu));
    /* 00472c8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472c8f: je 0x472d3a */ if (fZ) goto L_00472d3a;
L_00472c95:; BB(0x00472c95);
    /* 00472c95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00472c97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472c9d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472ca2u); f_0047e3b0();
    /* 00472ca2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472ca5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472caau); f_0060ca40();
    /* 00472caa: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00472cad: mov dword ptr [ebp - 0x288], eax */ W32((u32)(r_ebp+0xfffffd78u), r_eax);
    /* 00472cb3: mov ecx, dword ptr [ebp - 0x288] */ r_ecx = R32((u32)(r_ebp+0xfffffd78u));
    /* 00472cb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472cbb: mov ecx, dword ptr [ebp - 0x288] */ r_ecx = R32((u32)(r_ebp+0xfffffd78u));
    /* 00472cc1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00472cc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472cc6u); call_ind(t); }
    /* 00472cc6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00472cc8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472cce: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472cd3u); f_0047e3b0();
    /* 00472cd3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472cd6: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472cdbu); f_0060ca40();
    /* 00472cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472cdc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472ce2: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00472ce5: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x472ceau); f_0060c840();
    /* 00472cea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00472cec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472cf2: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472cf7u); f_0047e3b0();
    /* 00472cf7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472cfa: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472cffu); f_0060ca40();
    /* 00472cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472d00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472d06: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472d0bu); f_0047e3b0();
    /* 00472d0b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472d0e: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x472d13u); f_0060c890();
    /* 00472d13: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472d19: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472d1eu); f_0047e3b0();
    /* 00472d1e: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472d21: mov dword ptr [ebp - 0x28c], eax */ W32((u32)(r_ebp+0xfffffd74u), r_eax);
    /* 00472d27: mov edx, dword ptr [ebp - 0x28c] */ r_edx = R32((u32)(r_ebp+0xfffffd74u));
    /* 00472d2d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472d2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472d32: mov ecx, dword ptr [ebp - 0x28c] */ r_ecx = R32((u32)(r_ebp+0xfffffd74u));
    /* 00472d38: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00472d3a:; BB(0x00472d3a);
    /* 00472d3a: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00472d40: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00472d46: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00472d4c: movzx edx, byte ptr [ecx + 0x1dc] */ r_edx = (u32)R8((u32)(r_ecx+0x1dcu));
    /* 00472d53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472d55: je 0x472e00 */ if (fZ) goto L_00472e00;
L_00472d5b:; BB(0x00472d5b);
    /* 00472d5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00472d5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472d63: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472d68u); f_0047e3b0();
    /* 00472d68: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472d6b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472d70u); f_0060ca40();
    /* 00472d70: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00472d73: mov dword ptr [ebp - 0x290], eax */ W32((u32)(r_ebp+0xfffffd70u), r_eax);
    /* 00472d79: mov ecx, dword ptr [ebp - 0x290] */ r_ecx = R32((u32)(r_ebp+0xfffffd70u));
    /* 00472d7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472d81: mov ecx, dword ptr [ebp - 0x290] */ r_ecx = R32((u32)(r_ebp+0xfffffd70u));
    /* 00472d87: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00472d8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472d8cu); call_ind(t); }
    /* 00472d8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00472d8e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472d94: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472d99u); f_0047e3b0();
    /* 00472d99: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472d9c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472da1u); f_0060ca40();
    /* 00472da1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472da2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472da8: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00472dab: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x472db0u); f_0060c840();
    /* 00472db0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00472db2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472db8: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472dbdu); f_0047e3b0();
    /* 00472dbd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472dc0: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472dc5u); f_0060ca40();
    /* 00472dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472dc6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472dcc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472dd1u); f_0047e3b0();
    /* 00472dd1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472dd4: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x472dd9u); f_0060c890();
    /* 00472dd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472ddf: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472de4u); f_0047e3b0();
    /* 00472de4: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472de7: mov dword ptr [ebp - 0x294], eax */ W32((u32)(r_ebp+0xfffffd6cu), r_eax);
    /* 00472ded: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00472df3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472df5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472df8: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00472dfe: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00472e00:; BB(0x00472e00);
    /* 00472e00: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00472e06: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00472e0c: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00472e12: movzx edx, byte ptr [ecx + 0x1dc] */ r_edx = (u32)R8((u32)(r_ecx+0x1dcu));
    /* 00472e19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472e1b: je 0x472ec6 */ if (fZ) goto L_00472ec6;
L_00472e21:; BB(0x00472e21);
    /* 00472e21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472e23: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472e29: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472e2eu); f_0047e3b0();
    /* 00472e2e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472e31: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472e36u); f_0060ca40();
    /* 00472e36: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00472e39: mov dword ptr [ebp - 0x298], eax */ W32((u32)(r_ebp+0xfffffd68u), r_eax);
    /* 00472e3f: mov ecx, dword ptr [ebp - 0x298] */ r_ecx = R32((u32)(r_ebp+0xfffffd68u));
    /* 00472e45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472e47: mov ecx, dword ptr [ebp - 0x298] */ r_ecx = R32((u32)(r_ebp+0xfffffd68u));
    /* 00472e4d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00472e50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472e52u); call_ind(t); }
    /* 00472e52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472e54: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472e5a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472e5fu); f_0047e3b0();
    /* 00472e5f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472e62: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472e67u); f_0060ca40();
    /* 00472e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472e68: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472e6e: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00472e71: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x472e76u); f_0060c840();
    /* 00472e76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472e78: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472e7e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472e83u); f_0047e3b0();
    /* 00472e83: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472e86: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x472e8bu); f_0060ca40();
    /* 00472e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472e8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472e92: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472e97u); f_0047e3b0();
    /* 00472e97: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00472e9a: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x472e9fu); f_0060c890();
    /* 00472e9f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472ea5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472eaau); f_0047e3b0();
    /* 00472eaa: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472ead: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
    /* 00472eb3: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 00472eb9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472ebb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00472ebe: mov ecx, dword ptr [ebp - 0x29c] */ r_ecx = R32((u32)(r_ebp+0xfffffd64u));
    /* 00472ec4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00472ec6:; BB(0x00472ec6);
    /* 00472ec6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472ecc: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472ed1u); f_0047e3b0();
    /* 00472ed1: mov ecx, eax */ r_ecx = r_eax;
    /* 00472ed3: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x472ed8u); f_004c6cb0();
    /* 00472ed8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472edb: je 0x472ee8 */ if (fZ) goto L_00472ee8;
L_00472edd:; BB(0x00472edd);
    /* 00472edd: movzx edx, byte ptr [0x791360] */ r_edx = (u32)R8((u32)(0x791360u));
    /* 00472ee4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472ee6: je 0x472efe */ if (fZ) goto L_00472efe;
L_00472ee8:; BB(0x00472ee8);
    /* 00472ee8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00472eea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472ef0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472ef5u); f_0047e3b0();
    /* 00472ef5: mov ecx, eax */ r_ecx = r_eax;
    /* 00472ef7: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x472efcu); f_004c7820();
    /* 00472efc: jmp 0x472f12 */ goto L_00472f12;
L_00472efe:; BB(0x00472efe);
    /* 00472efe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472f00: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472f06: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472f0bu); f_0047e3b0();
    /* 00472f0b: mov ecx, eax */ r_ecx = r_eax;
    /* 00472f0d: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x472f12u); f_004c7820();
L_00472f12:; BB(0x00472f12);
    /* 00472f12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472f14: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 00472f19: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00472f1f: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x472f24u); f_00519a40();
    /* 00472f24: jmp 0x472f3b */ goto L_00472f3b;
L_00472f26:; BB(0x00472f26);
    /* 00472f26: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00472f28: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472f2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472f30: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472f36: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472f39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472f3bu); call_ind(t); }
L_00472f3b:; BB(0x00472f3b);
    /* 00472f3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472f3d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472f43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472f45: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472f4b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00472f4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472f50u); call_ind(t); }
    /* 00472f50: jmp 0x477253 */ goto L_00477253;
L_00472f55:; BB(0x00472f55);
    /* 00472f55: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00472f57: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472f5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00472f5f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472f65: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00472f68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x472f6au); call_ind(t); }
    /* 00472f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472f6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472f72: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472f77u); f_0047e3b0();
    /* 00472f77: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00472f7a: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00472f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00472f7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472f84: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472f89u); f_0047e3b0();
    /* 00472f89: mov ecx, eax */ r_ecx = r_eax;
    /* 00472f8b: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x472f90u); f_004dc4d0();
    /* 00472f90: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472f96: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472f9bu); f_0047e3b0();
    /* 00472f9b: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00472f9f: je 0x473005 */ if (fZ) goto L_00473005;
L_00472fa1:; BB(0x00472fa1);
    /* 00472fa1: mov edx, dword ptr [0x79133c] */ r_edx = R32((u32)(0x79133cu));
    /* 00472fa7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00472faa: mov dword ptr [0x79133c], edx */ W32((u32)(0x79133cu), r_edx);
    /* 00472fb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472fb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472fb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472fb6: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472fbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00472fbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00472fc1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472fc7: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472fccu); f_0047e3b0();
    /* 00472fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00472fcd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472fd3: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x472fd8u); f_0047b010();
    /* 00472fd8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00472fde: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x472fe3u); f_0047e3b0();
    /* 00472fe3: mov ecx, dword ptr [0x79133c] */ r_ecx = R32((u32)(0x79133cu));
    /* 00472fe9: cmp ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00472fec: jge 0x473003 */ if ((fS==fO)) goto L_00473003;
L_00472fee:; BB(0x00472fee);
    /* 00472fee: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00472ff0: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472ff6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00472ff8: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00472ffe: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00473001: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x473003u); call_ind(t); }
L_00473003:; BB(0x00473003);
    /* 00473003: jmp 0x47301a */ goto L_0047301a;
L_00473005:; BB(0x00473005);
    /* 00473005: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00473007: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047300d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047300f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473015: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473018: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47301au); call_ind(t); }
L_0047301a:; BB(0x0047301a);
    /* 0047301a: jmp 0x477253 */ goto L_00477253;
L_0047301f:; BB(0x0047301f);
    /* 0047301f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473025: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47302au); f_0047e3b0();
    /* 0047302a: mov dword ptr [0x7912f8], eax */ W32((u32)(0x7912f8u), r_eax);
    /* 0047302f: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 00473035: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47303au); f_004c6cb0();
    /* 0047303a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047303d: jne 0x47305f */ if (!fZ) goto L_0047305f;
L_0047303f:; BB(0x0047303f);
    /* 0047303f: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 00473045: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47304au); f_004c7010();
    /* 0047304a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047304d: je 0x47306a */ if (fZ) goto L_0047306a;
L_0047304f:; BB(0x0047304f);
    /* 0047304f: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 00473055: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47305au); f_004c7010();
    /* 0047305a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047305d: je 0x47306a */ if (fZ) goto L_0047306a;
L_0047305f:; BB(0x0047305f);
    /* 0047305f: movzx ecx, byte ptr [0x791360] */ r_ecx = (u32)R8((u32)(0x791360u));
    /* 00473066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473068: je 0x473080 */ if (fZ) goto L_00473080;
L_0047306a:; BB(0x0047306a);
    /* 0047306a: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 00473070: call 0x4c7360 */ r_esp -= 4; W32(r_esp, 0x473075u); f_004c7360();
    /* 00473075: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 0047307b: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x473080u); f_004c76e0();
L_00473080:; BB(0x00473080);
    /* 00473080: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 00473086: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47308bu); f_004c6cb0();
    /* 0047308b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047308e: je 0x47309b */ if (fZ) goto L_0047309b;
L_00473090:; BB(0x00473090);
    /* 00473090: movzx edx, byte ptr [0x791360] */ r_edx = (u32)R8((u32)(0x791360u));
    /* 00473097: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473099: je 0x4730aa */ if (fZ) goto L_004730aa;
L_0047309b:; BB(0x0047309b);
    /* 0047309b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047309d: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004730a3: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x4730a8u); f_004c7820();
    /* 004730a8: jmp 0x4730b7 */ goto L_004730b7;
L_004730aa:; BB(0x004730aa);
    /* 004730aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004730ac: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004730b2: call 0x4c7820 */ r_esp -= 4; W32(r_esp, 0x4730b7u); f_004c7820();
L_004730b7:; BB(0x004730b7);
    /* 004730b7: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004730bd: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4730c2u); f_004c6cb0();
    /* 004730c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004730c5: jne 0x4730fe */ if (!fZ) goto L_004730fe;
L_004730c7:; BB(0x004730c7);
    /* 004730c7: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004730cd: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4730d2u); f_004c7010();
    /* 004730d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004730d5: jne 0x4730fe */ if (!fZ) goto L_004730fe;
L_004730d7:; BB(0x004730d7);
    /* 004730d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004730dd: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4730e2u); f_0047e280();
    /* 004730e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004730e5: je 0x4730fe */ if (fZ) goto L_004730fe;
L_004730e7:; BB(0x004730e7);
    /* 004730e7: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004730e9: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004730ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004730f1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004730f7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004730fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4730fcu); call_ind(t); }
    /* 004730fc: jmp 0x473113 */ goto L_00473113;
L_004730fe:; BB(0x004730fe);
    /* 004730fe: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00473100: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473106: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473108: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047310e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473111: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473113u); call_ind(t); }
L_00473113:; BB(0x00473113);
    /* 00473113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473115: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047311b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047311d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473123: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473126: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473128u); call_ind(t); }
    /* 00473128: jmp 0x477253 */ goto L_00477253;
L_0047312d:; BB(0x0047312d);
    /* 0047312d: mov word ptr [ebp - 0x60], 0 */ W16((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00473133: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00473139: jmp 0x473147 */ goto L_00473147;
L_0047313b:; BB(0x0047313b);
    /* 0047313b: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0047313f: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00473143: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_00473147:; BB(0x00473147);
    /* 00473147: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047314b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473151: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473156u); f_0047f950();
    /* 00473156: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473158: jge 0x4731a0 */ if ((fS==fO)) goto L_004731a0;
L_0047315a:; BB(0x0047315a);
    /* 0047315a: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047315e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047315f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473165: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47316au); f_0047e390();
    /* 0047316a: mov ecx, eax */ r_ecx = r_eax;
    /* 0047316c: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x473171u); f_004c6cb0();
    /* 00473171: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473174: jne 0x47319e */ if (!fZ) goto L_0047319e;
L_00473176:; BB(0x00473176);
    /* 00473176: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047317a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047317b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473181: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473186u); f_0047e390();
    /* 00473186: mov ecx, eax */ r_ecx = r_eax;
    /* 00473188: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47318du); f_004c7010();
    /* 0047318d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473190: jne 0x47319e */ if (!fZ) goto L_0047319e;
L_00473192:; BB(0x00473192);
    /* 00473192: mov cx, word ptr [ebp - 0x60] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffa0u))) & 0xffffu);
    /* 00473196: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047319a: mov word ptr [ebp - 0x60], cx */ W16((u32)(r_ebp+0xffffffa0u), (u16)r_ecx);
L_0047319e:; BB(0x0047319e);
    /* 0047319e: jmp 0x47313b */ goto L_0047313b;
L_004731a0:; BB(0x004731a0);
    /* 004731a0: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004731a2: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004731a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004731aa: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004731b0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004731b3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4731b5u); call_ind(t); }
    /* 004731b5: movsx eax, word ptr [ebp - 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004731b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004731bb: jne 0x4731d7 */ if (!fZ) goto L_004731d7;
L_004731bd:; BB(0x004731bd);
    /* 004731bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004731bf: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004731c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004731c7: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004731cd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004731d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4731d2u); call_ind(t); }
    /* 004731d2: jmp 0x473390 */ goto L_00473390;
L_004731d7:; BB(0x004731d7);
    /* 004731d7: movsx ecx, word ptr [ebp - 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004731db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004731dc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4731e1u); f_0062fbf0();
    /* 004731e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004731e4: mov word ptr [ebp - 0x64], ax */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_eax);
    /* 004731e8: mov word ptr [ebp - 0x68], 0 */ W16((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 004731ee: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004731f4: jmp 0x473202 */ goto L_00473202;
L_004731f6:; BB(0x004731f6);
    /* 004731f6: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 004731fa: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004731fe: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_00473202:; BB(0x00473202);
    /* 00473202: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00473206: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047320c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473211u); f_0047f950();
    /* 00473211: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473213: jge 0x473343 */ if ((fS==fO)) goto L_00473343;
L_00473219:; BB(0x00473219);
    /* 00473219: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047321d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047321e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473224: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473229u); f_0047e390();
    /* 00473229: mov ecx, eax */ r_ecx = r_eax;
    /* 0047322b: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x473230u); f_004c6cb0();
    /* 00473230: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473233: jne 0x473251 */ if (!fZ) goto L_00473251;
L_00473235:; BB(0x00473235);
    /* 00473235: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00473239: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047323a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473240: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473245u); f_0047e390();
    /* 00473245: mov ecx, eax */ r_ecx = r_eax;
    /* 00473247: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47324cu); f_004c7010();
    /* 0047324c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047324f: je 0x473258 */ if (fZ) goto L_00473258;
L_00473251:; BB(0x00473251);
    /* 00473251: jmp 0x4731f6 */ goto L_004731f6;
L_00473258:; BB(0x00473258);
    /* 00473258: movsx edx, word ptr [ebp - 0x68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 0047325c: movsx eax, word ptr [ebp - 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 00473260: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473262: jne 0x473332 */ if (!fZ) goto L_00473332;
L_00473268:; BB(0x00473268);
    /* 00473268: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047326e: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x473273u); f_0047e420();
    /* 00473273: mov esi, eax */ r_esi = r_eax;
    /* 00473275: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047327b: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x473280u); f_0047bbc0();
    /* 00473280: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473282: jne 0x47329e */ if (!fZ) goto L_0047329e;
L_00473284:; BB(0x00473284);
    /* 00473284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473286: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047328c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047328e: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473294: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473299u); call_ind(t); }
    /* 00473299: jmp 0x47332e */ goto L_0047332e;
L_0047329e:; BB(0x0047329e);
    /* 0047329e: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004732a4: cmp dword ptr [ecx + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004732a8: jne 0x4732c7 */ if (!fZ) goto L_004732c7;
L_004732aa:; BB(0x004732aa);
    /* 004732aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004732ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004732ae: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004732b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004732b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004732b9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4732beu); f_0047e390();
    /* 004732be: mov ecx, eax */ r_ecx = r_eax;
    /* 004732c0: call 0x4ccf40 */ r_esp -= 4; W32(r_esp, 0x4732c5u); f_004ccf40();
    /* 004732c5: jmp 0x47332e */ goto L_0047332e;
L_004732c7:; BB(0x004732c7);
    /* 004732c7: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004732cd: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004732d1: jne 0x4732f0 */ if (!fZ) goto L_004732f0;
L_004732d3:; BB(0x004732d3);
    /* 004732d3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004732d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004732d7: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004732db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004732dc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004732e2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4732e7u); f_0047e390();
    /* 004732e7: mov ecx, eax */ r_ecx = r_eax;
    /* 004732e9: call 0x4ccef0 */ r_esp -= 4; W32(r_esp, 0x4732eeu); f_004ccef0();
    /* 004732ee: jmp 0x47332e */ goto L_0047332e;
L_004732f0:; BB(0x004732f0);
    /* 004732f0: mov ecx, dword ptr [0x7912f8] */ r_ecx = R32((u32)(0x7912f8u));
    /* 004732f6: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004732fa: jl 0x473319 */ if ((fS!=fO)) goto L_00473319;
L_004732fc:; BB(0x004732fc);
    /* 004732fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004732ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473300: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00473304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473305: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047330b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473310u); f_0047e390();
    /* 00473310: mov ecx, eax */ r_ecx = r_eax;
    /* 00473312: call 0x4ccf10 */ r_esp -= 4; W32(r_esp, 0x473317u); f_004ccf10();
    /* 00473317: jmp 0x47332e */ goto L_0047332e;
L_00473319:; BB(0x00473319);
    /* 00473319: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047331b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473321: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473323: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473329: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047332c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47332eu); call_ind(t); }
L_0047332e:; BB(0x0047332e);
    /* 0047332e: jmp 0x473343 */ goto L_00473343;
L_00473332:; BB(0x00473332);
    /* 00473332: mov cx, word ptr [ebp - 0x68] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff98u))) & 0xffffu);
    /* 00473336: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047333a: mov word ptr [ebp - 0x68], cx */ W16((u32)(r_ebp+0xffffff98u), (u16)r_ecx);
    /* 0047333e: jmp 0x4731f6 */ goto L_004731f6;
L_00473343:; BB(0x00473343);
    /* 00473343: movsx edx, word ptr [ebp - 0x68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 00473347: movsx eax, word ptr [ebp - 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 0047334b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047334d: je 0x473366 */ if (fZ) goto L_00473366;
L_0047334f:; BB(0x0047334f);
    /* 0047334f: push 0x63f */ { u32 v = 0x63fu; r_esp -= 4; W32(r_esp, v); }
    /* 00473354: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473359: push 0x6bc4fc */ { u32 v = 0x6bc4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047335e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473363u); f_005e9f20();
    /* 00473363: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473366:; BB(0x00473366);
    /* 00473366: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047336a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473370: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473375u); f_0047f950();
    /* 00473375: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473377: jl 0x473390 */ if ((fS!=fO)) goto L_00473390;
L_00473379:; BB(0x00473379);
    /* 00473379: push 0x640 */ { u32 v = 0x640u; r_esp -= 4; W32(r_esp, v); }
    /* 0047337e: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473383: push 0x6bc4c8 */ { u32 v = 0x6bc4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00473388: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47338du); f_005e9f20();
    /* 0047338d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473390:; BB(0x00473390);
    /* 00473390: jmp 0x477253 */ goto L_00477253;
L_00473395:; BB(0x00473395);
    /* 00473395: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047339b: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4733a0u); f_0047e420();
    /* 004733a0: mov esi, eax */ r_esi = r_eax;
    /* 004733a2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004733a8: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4733adu); f_0047bbc0();
    /* 004733ad: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004733af: jne 0x4733c8 */ if (!fZ) goto L_004733c8;
L_004733b1:; BB(0x004733b1);
    /* 004733b1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004733b3: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004733b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004733bb: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004733c1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004733c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4733c6u); call_ind(t); }
    /* 004733c6: jmp 0x4733e8 */ goto L_004733e8;
L_004733c8:; BB(0x004733c8);
    /* 004733c8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004733ca: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004733d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004733d2: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004733d8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004733db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4733ddu); call_ind(t); }
    /* 004733dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004733e3: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4733e8u); f_0047e440();
L_004733e8:; BB(0x004733e8);
    /* 004733e8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004733ea: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004733f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004733f2: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004733f8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004733fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4733fdu); call_ind(t); }
    /* 004733fd: jmp 0x477253 */ goto L_00477253;
L_00473402:; BB(0x00473402);
    /* 00473402: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00473404: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047340a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047340c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473412: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473415: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473417u); call_ind(t); }
    /* 00473417: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00473419: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047341f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473421: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473427: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047342a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47342cu); call_ind(t); }
    /* 0047342c: jmp 0x477253 */ goto L_00477253;
L_00473431:; BB(0x00473431);
    /* 00473431: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473437: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047343a: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x47343fu); f_004f9110();
    /* 0047343f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00473442: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473445: jge 0x47345e */ if ((fS==fO)) goto L_0047345e;
L_00473447:; BB(0x00473447);
    /* 00473447: push 0x656 */ { u32 v = 0x656u; r_esp -= 4; W32(r_esp, v); }
    /* 0047344c: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473451: push 0x6bc49c */ { u32 v = 0x6bc49cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473456: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47345bu); f_005e9f20();
    /* 0047345b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047345e:; BB(0x0047345e);
    /* 0047345e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473464: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473467: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x47346cu); f_004f91a0();
    /* 0047346c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0047346f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473472: jge 0x47348b */ if ((fS==fO)) goto L_0047348b;
L_00473474:; BB(0x00473474);
    /* 00473474: push 0x657 */ { u32 v = 0x657u; r_esp -= 4; W32(r_esp, v); }
    /* 00473479: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047347e: push 0x6bc470 */ { u32 v = 0x6bc470u; r_esp -= 4; W32(r_esp, v); }
    /* 00473483: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473488u); f_005e9f20();
    /* 00473488: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047348b:; BB(0x0047348b);
    /* 0047348b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047348d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473493: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x473498u); f_0047e540();
    /* 00473498: mov dword ptr [0x791340], 0 */ W32((u32)(0x791340u), 0x0u);
    /* 004734a2: jmp 0x4734b3 */ goto L_004734b3;
L_004734a4:; BB(0x004734a4);
    /* 004734a4: mov edx, dword ptr [0x791340] */ r_edx = R32((u32)(0x791340u));
    /* 004734aa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004734ad: mov dword ptr [0x791340], edx */ W32((u32)(0x791340u), r_edx);
L_004734b3:; BB(0x004734b3);
    /* 004734b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004734b9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4734beu); f_0047f950();
    /* 004734be: cmp dword ptr [0x791340], eax */ {  u32 a = R32((u32)(0x791340u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004734c4: jge 0x4734d7 */ if ((fS==fO)) goto L_004734d7;
L_004734c6:; BB(0x004734c6);
    /* 004734c6: mov eax, dword ptr [0x791340] */ r_eax = R32((u32)(0x791340u));
    /* 004734cb: mov word ptr [eax*2 + 0x790fb8], 0 */ W16((u32)(r_eax*2+0x790fb8u), 0x0u);
    /* 004734d5: jmp 0x4734a4 */ goto L_004734a4;
L_004734d7:; BB(0x004734d7);
    /* 004734d7: mov dword ptr [0x791338], 0 */ W32((u32)(0x791338u), 0x0u);
    /* 004734e1: mov dword ptr [0x791334], 0 */ W32((u32)(0x791334u), 0x0u);
    /* 004734eb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004734f1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004734f4: call 0x4f4c80 */ r_esp -= 4; W32(r_esp, 0x4734f9u); f_004f4c80();
    /* 004734f9: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004734fb: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473501: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473503: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473509: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047350c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47350eu); call_ind(t); }
    /* 0047350e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473510: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473516: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473518: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047351e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473521: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473523u); call_ind(t); }
    /* 00473523: jmp 0x477253 */ goto L_00477253;
L_00473528:; BB(0x00473528);
    /* 00473528: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047352e: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00473531: call 0x4654d0 */ r_esp -= 4; W32(r_esp, 0x473536u); f_004654d0();
    /* 00473536: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047353c: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x473541u); f_0047bbc0();
    /* 00473541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473542: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473548: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x47354du); f_0047e400();
    /* 0047354d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473553: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473556: call 0x4f9110 */ r_esp -= 4; W32(r_esp, 0x47355bu); f_004f9110();
    /* 0047355b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0047355e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473561: jge 0x4735b2 */ if ((fS==fO)) goto L_004735b2;
L_00473563:; BB(0x00473563);
    /* 00473563: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473569: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x47356eu); f_0047e440();
    /* 0047356e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473574: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473579u); f_0047e3b0();
    /* 00473579: mov ecx, eax */ r_ecx = r_eax;
    /* 0047357b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473580u); f_004c7010();
    /* 00473580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473582: je 0x473563 */ if (fZ) goto L_00473563;
L_00473584:; BB(0x00473584);
    /* 00473584: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047358a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47358fu); f_0047e3b0();
    /* 0047358f: mov ecx, eax */ r_ecx = r_eax;
    /* 00473591: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473596u); f_004c7010();
    /* 00473596: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473599: je 0x473563 */ if (fZ) goto L_00473563;
L_0047359b:; BB(0x0047359b);
    /* 0047359b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047359d: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004735a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004735a5: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004735ab: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004735ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4735b0u); call_ind(t); }
    /* 004735b0: jmp 0x4735e9 */ goto L_004735e9;
L_004735b2:; BB(0x004735b2);
    /* 004735b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004735b8: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x4735bdu); f_0047e440();
    /* 004735bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004735c3: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4735c8u); f_0047e3b0();
    /* 004735c8: mov ecx, eax */ r_ecx = r_eax;
    /* 004735ca: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4735cfu); f_004c7010();
    /* 004735cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004735d2: jne 0x4735b2 */ if (!fZ) goto L_004735b2;
L_004735d4:; BB(0x004735d4);
    /* 004735d4: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004735d6: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004735dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004735de: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004735e4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004735e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4735e9u); call_ind(t); }
L_004735e9:; BB(0x004735e9);
    /* 004735e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004735eb: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004735f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004735f3: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004735f9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004735fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4735feu); call_ind(t); }
    /* 004735fe: jmp 0x477253 */ goto L_00477253;
L_00473603:; BB(0x00473603);
    /* 00473603: mov ecx, dword ptr [0x7912f0] */ r_ecx = R32((u32)(0x7912f0u));
    /* 00473609: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0047360b: mov dword ptr [0x7912f0], ecx */ W32((u32)(0x7912f0u), r_ecx);
    /* 00473611: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473617: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47361cu); f_0047e3b0();
    /* 0047361c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047361e: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x473623u); f_004c7050();
    /* 00473623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473624: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047362a: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x47362fu); f_0047bc60();
    /* 0047362f: imul eax, dword ptr [0x7912f0] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x7912f0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00473636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473637: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047363d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473640: call 0x4f5110 */ r_esp -= 4; W32(r_esp, 0x473645u); f_004f5110();
    /* 00473645: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473647: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047364d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047364f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473655: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00473658: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47365au); call_ind(t); }
    /* 0047365a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047365c: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473662: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00473664: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047366a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047366d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47366fu); call_ind(t); }
    /* 0047366f: jmp 0x477253 */ goto L_00477253;
L_00473674:; BB(0x00473674);
    /* 00473674: mov word ptr [ebp - 0x6c], 0 */ W16((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0047367a: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00473680: jmp 0x47368e */ goto L_0047368e;
L_00473682:; BB(0x00473682);
    /* 00473682: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00473686: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047368a: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
L_0047368e:; BB(0x0047368e);
    /* 0047368e: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00473692: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473698: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47369du); f_0047f950();
    /* 0047369d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047369f: jge 0x4736e7 */ if ((fS==fO)) goto L_004736e7;
L_004736a1:; BB(0x004736a1);
    /* 004736a1: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004736a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004736a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004736ac: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4736b1u); f_0047e390();
    /* 004736b1: mov ecx, eax */ r_ecx = r_eax;
    /* 004736b3: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4736b8u); f_004c6cb0();
    /* 004736b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004736bb: jne 0x4736e5 */ if (!fZ) goto L_004736e5;
L_004736bd:; BB(0x004736bd);
    /* 004736bd: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004736c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004736c2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004736c8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4736cdu); f_0047e390();
    /* 004736cd: mov ecx, eax */ r_ecx = r_eax;
    /* 004736cf: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4736d4u); f_004c7010();
    /* 004736d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004736d7: jne 0x4736e5 */ if (!fZ) goto L_004736e5;
L_004736d9:; BB(0x004736d9);
    /* 004736d9: mov cx, word ptr [ebp - 0x6c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff94u))) & 0xffffu);
    /* 004736dd: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004736e1: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
L_004736e5:; BB(0x004736e5);
    /* 004736e5: jmp 0x473682 */ goto L_00473682;
L_004736e7:; BB(0x004736e7);
    /* 004736e7: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004736e9: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004736ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004736f1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004736f7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004736fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4736fcu); call_ind(t); }
    /* 004736fc: movsx eax, word ptr [ebp - 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00473700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473702: jne 0x47371e */ if (!fZ) goto L_0047371e;
L_00473704:; BB(0x00473704);
    /* 00473704: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473706: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047370c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047370e: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473714: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473717: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473719u); call_ind(t); }
    /* 00473719: jmp 0x473821 */ goto L_00473821;
L_0047371e:; BB(0x0047371e);
    /* 0047371e: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 00473722: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473723: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x473728u); f_0062fbf0();
    /* 00473728: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047372b: mov word ptr [ebp - 0x70], ax */ W16((u32)(r_ebp+0xffffff90u), (u16)r_eax);
    /* 0047372f: mov word ptr [ebp - 0x74], 0 */ W16((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00473735: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0047373b: jmp 0x473749 */ goto L_00473749;
L_0047373d:; BB(0x0047373d);
    /* 0047373d: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00473741: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00473745: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_00473749:; BB(0x00473749);
    /* 00473749: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047374d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473753: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473758u); f_0047f950();
    /* 00473758: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047375a: jge 0x4737d4 */ if ((fS==fO)) goto L_004737d4;
L_0047375c:; BB(0x0047375c);
    /* 0047375c: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00473760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473761: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473767: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47376cu); f_0047e390();
    /* 0047376c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047376e: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x473773u); f_004c6cb0();
    /* 00473773: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473776: jne 0x473794 */ if (!fZ) goto L_00473794;
L_00473778:; BB(0x00473778);
    /* 00473778: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047377c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047377d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473783: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473788u); f_0047e390();
    /* 00473788: mov ecx, eax */ r_ecx = r_eax;
    /* 0047378a: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47378fu); f_004c7010();
    /* 0047378f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473792: je 0x473798 */ if (fZ) goto L_00473798;
L_00473794:; BB(0x00473794);
    /* 00473794: jmp 0x47373d */ goto L_0047373d;
L_00473798:; BB(0x00473798);
    /* 00473798: movsx edx, word ptr [ebp - 0x74] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff8cu));
    /* 0047379c: movsx eax, word ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004737a0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004737a2: jne 0x4737c3 */ if (!fZ) goto L_004737c3;
L_004737a4:; BB(0x004737a4);
    /* 004737a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004737a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004737a8: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004737ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004737ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004737b3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4737b8u); f_0047e390();
    /* 004737b8: mov ecx, eax */ r_ecx = r_eax;
    /* 004737ba: call 0x4cd340 */ r_esp -= 4; W32(r_esp, 0x4737bfu); f_004cd340();
    /* 004737bf: jmp 0x4737d4 */ goto L_004737d4;
L_004737c3:; BB(0x004737c3);
    /* 004737c3: mov ax, word ptr [ebp - 0x74] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff8cu))) & 0xffffu);
    /* 004737c7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004737cb: mov word ptr [ebp - 0x74], ax */ W16((u32)(r_ebp+0xffffff8cu), (u16)r_eax);
    /* 004737cf: jmp 0x47373d */ goto L_0047373d;
L_004737d4:; BB(0x004737d4);
    /* 004737d4: movsx ecx, word ptr [ebp - 0x74] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff8cu));
    /* 004737d8: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004737dc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004737de: je 0x4737f7 */ if (fZ) goto L_004737f7;
L_004737e0:; BB(0x004737e0);
    /* 004737e0: push 0x6a7 */ { u32 v = 0x6a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004737e5: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004737ea: push 0x6bc4fc */ { u32 v = 0x6bc4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004737ef: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4737f4u); f_005e9f20();
    /* 004737f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004737f7:; BB(0x004737f7);
    /* 004737f7: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004737fb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473801: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473806u); f_0047f950();
    /* 00473806: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473808: jl 0x473821 */ if ((fS!=fO)) goto L_00473821;
L_0047380a:; BB(0x0047380a);
    /* 0047380a: push 0x6a8 */ { u32 v = 0x6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047380f: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473814: push 0x6bc4c8 */ { u32 v = 0x6bc4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00473819: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47381eu); f_005e9f20();
    /* 0047381e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473821:; BB(0x00473821);
    /* 00473821: jmp 0x477253 */ goto L_00477253;
L_00473826:; BB(0x00473826);
    /* 00473826: call 0x477320 */ r_esp -= 4; W32(r_esp, 0x47382bu); f_00477320();
    /* 0047382b: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00473830: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473836: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x47383bu); f_0047e500();
    /* 0047383b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047383d: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473843: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00473845: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047384b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0047384e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x473850u); call_ind(t); }
    /* 00473850: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00473852: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473858: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047385a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473860: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473863: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473865u); call_ind(t); }
    /* 00473865: jmp 0x477253 */ goto L_00477253;
L_0047386a:; BB(0x0047386a);
    /* 0047386a: cmp dword ptr [0x7912ec], -1 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473871: jne 0x4738dc */ if (!fZ) goto L_004738dc;
L_00473873:; BB(0x00473873);
    /* 00473873: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473879: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47387eu); f_0047bbc0();
    /* 0047387e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047387f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473885: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x47388au); f_0047e400();
L_0047388a:; BB(0x0047388a);
    /* 0047388a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473890: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x473895u); f_0047e440();
    /* 00473895: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047389b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4738a0u); f_0047e3b0();
    /* 004738a0: mov ecx, eax */ r_ecx = r_eax;
    /* 004738a2: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4738a7u); f_004c7010();
    /* 004738a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004738a9: je 0x47388a */ if (fZ) goto L_0047388a;
L_004738ab:; BB(0x004738ab);
    /* 004738ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004738b1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4738b6u); f_0047e3b0();
    /* 004738b6: mov ecx, eax */ r_ecx = r_eax;
    /* 004738b8: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4738bdu); f_004c7010();
    /* 004738bd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004738c0: je 0x47388a */ if (fZ) goto L_0047388a;
L_004738c2:; BB(0x004738c2);
    /* 004738c2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004738c4: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004738ca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004738cc: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004738d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004738d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4738d7u); call_ind(t); }
    /* 004738d7: jmp 0x473a96 */ goto L_00473a96;
L_004738dc:; BB(0x004738dc);
    /* 004738dc: cmp dword ptr [0x7912ec], -3 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004738e3: jne 0x473a63 */ if (!fZ) goto L_00473a63;
L_004738e9:; BB(0x004738e9);
    /* 004738e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004738ef: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x4738f4u); f_0047bbc0();
    /* 004738f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004738f5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004738fb: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x473900u); f_0047e400();
L_00473900:; BB(0x00473900);
    /* 00473900: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473906: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x47390bu); f_0047e440();
    /* 0047390b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473911: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473916u); f_0047e3b0();
    /* 00473916: mov ecx, eax */ r_ecx = r_eax;
    /* 00473918: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47391du); f_004c7010();
    /* 0047391d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047391f: je 0x473900 */ if (fZ) goto L_00473900;
L_00473921:; BB(0x00473921);
    /* 00473921: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473927: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x47392cu); f_0047e3b0();
    /* 0047392c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047392e: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473933u); f_004c7010();
    /* 00473933: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473936: je 0x473900 */ if (fZ) goto L_00473900;
L_00473938:; BB(0x00473938);
    /* 00473938: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047393e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473941: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x473946u); f_004f6420();
    /* 00473946: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00473948: jle 0x473a45 */ if ((fZ||fS!=fO)) goto L_00473a45;
L_0047394e:; BB(0x0047394e);
    /* 0047394e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473954: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473957: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x47395cu); f_004f6420();
    /* 0047395c: mov esi, eax */ r_esi = r_eax;
    /* 0047395e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473964: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x473969u); f_0047bc20();
    /* 00473969: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047396c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0047396d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473973: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473976: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x47397bu); f_004f64b0();
    /* 0047397b: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0047397e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047397f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473985: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47398au); f_0047e3d0();
    /* 0047398a: mov ecx, eax */ r_ecx = r_eax;
    /* 0047398c: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x473991u); f_004c6b80();
    /* 00473991: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473997: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047399a: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x47399fu); f_004f64b0();
    /* 0047399f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004739a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004739a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004739a9: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4739aeu); f_0047e3d0();
    /* 004739ae: mov ecx, eax */ r_ecx = r_eax;
    /* 004739b0: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4739b5u); f_004da300();
    /* 004739b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004739b7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004739bd: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x4739c2u); f_0047ec90();
    /* 004739c2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004739c8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004739cb: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x4739d0u); f_004f64b0();
    /* 004739d0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004739d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004739d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004739da: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4739dfu); f_0047e3d0();
    /* 004739df: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004739e2: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 004739e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004739e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004739ed: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004739f0: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x4739f5u); f_004f6420();
    /* 004739f5: mov esi, eax */ r_esi = r_eax;
    /* 004739f7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004739fd: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x473a02u); f_0047bc20();
    /* 00473a02: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00473a05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00473a06: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x473a0bu); f_0064c8a0();
    /* 00473a0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00473a0e: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00473a14: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 00473a1a: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00473a20: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00473a23: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 00473a29: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00473a2c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00473a2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473a30: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00473a33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473a34: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00473a36: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00473a39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473a3a: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00473a40: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x473a45u); f_005e7e40();
L_00473a45:; BB(0x00473a45);
    /* 00473a45: mov byte ptr [0x7912e8], 1 */ W8((u32)(0x7912e8u), 0x1u);
    /* 00473a4c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00473a4e: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473a54: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473a56: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473a5c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473a5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473a61u); call_ind(t); }
    /* 00473a61: jmp 0x473a96 */ goto L_00473a96;
L_00473a63:; BB(0x00473a63);
    /* 00473a63: mov ecx, dword ptr [0x7912ec] */ r_ecx = R32((u32)(0x7912ecu));
    /* 00473a69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473a6a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473a70: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x473a75u); f_0047e490();
    /* 00473a75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473a76: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473a7c: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x473a81u); f_0047e400();
    /* 00473a81: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00473a83: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473a89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00473a8b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473a91: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00473a94: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x473a96u); call_ind(t); }
L_00473a96:; BB(0x00473a96);
    /* 00473a96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473a98: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473a9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00473aa0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473aa6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473aa9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473aabu); call_ind(t); }
    /* 00473aab: jmp 0x477253 */ goto L_00477253;
L_00473ab0:; BB(0x00473ab0);
    /* 00473ab0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473ab6: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473abbu); f_0047e3b0();
    /* 00473abb: mov ecx, eax */ r_ecx = r_eax;
    /* 00473abd: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473ac2u); f_004c7010();
    /* 00473ac2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473ac5: je 0x473af5 */ if (fZ) goto L_00473af5;
L_00473ac7:; BB(0x00473ac7);
    /* 00473ac7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473acd: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473ad2u); f_0047e3b0();
    /* 00473ad2: mov ecx, eax */ r_ecx = r_eax;
    /* 00473ad4: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473ad9u); f_004c7010();
    /* 00473ad9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473adc: je 0x473af5 */ if (fZ) goto L_00473af5;
L_00473ade:; BB(0x00473ade);
    /* 00473ade: push 0x6e1 */ { u32 v = 0x6e1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473ae3: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473ae8: push 0x6bc3e8 */ { u32 v = 0x6bc3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00473aed: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473af2u); f_005e9f20();
    /* 00473af2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473af5:; BB(0x00473af5);
    /* 00473af5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473af7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473af9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473afb: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473b01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473b02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473b06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473b0c: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473b11u); f_0047e3b0();
    /* 00473b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473b12: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473b18: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x473b1du); f_0047b010();
L_00473b1d:; BB(0x00473b1d);
    /* 00473b1d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473b23: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x473b28u); f_0047e440();
    /* 00473b28: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473b2e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473b33u); f_0047e3b0();
    /* 00473b33: mov ecx, eax */ r_ecx = r_eax;
    /* 00473b35: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473b3au); f_004c7010();
    /* 00473b3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473b3c: je 0x473b1d */ if (fZ) goto L_00473b1d;
L_00473b3e:; BB(0x00473b3e);
    /* 00473b3e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473b44: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x473b49u); f_0047e3b0();
    /* 00473b49: mov ecx, eax */ r_ecx = r_eax;
    /* 00473b4b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473b50u); f_004c7010();
    /* 00473b50: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473b53: je 0x473b1d */ if (fZ) goto L_00473b1d;
L_00473b55:; BB(0x00473b55);
    /* 00473b55: mov eax, dword ptr [0x791338] */ r_eax = R32((u32)(0x791338u));
    /* 00473b5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00473b5d: mov dword ptr [0x791338], eax */ W32((u32)(0x791338u), r_eax);
    /* 00473b62: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473b68: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473b6b: call 0x4f91a0 */ r_esp -= 4; W32(r_esp, 0x473b70u); f_004f91a0();
    /* 00473b70: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00473b73: cmp dword ptr [0x791338], ecx */ {  u32 a = R32((u32)(0x791338u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473b79: jne 0x473b94 */ if (!fZ) goto L_00473b94;
L_00473b7b:; BB(0x00473b7b);
    /* 00473b7b: mov dword ptr [0x791338], 0 */ W32((u32)(0x791338u), 0x0u);
    /* 00473b85: mov edx, dword ptr [0x791334] */ r_edx = R32((u32)(0x791334u));
    /* 00473b8b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00473b8e: mov dword ptr [0x791334], edx */ W32((u32)(0x791334u), r_edx);
L_00473b94:; BB(0x00473b94);
    /* 00473b94: cmp dword ptr [0x791334], 5 */ {  u32 a = R32((u32)(0x791334u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473b9b: jge 0x473bb4 */ if ((fS==fO)) goto L_00473bb4;
L_00473b9d:; BB(0x00473b9d);
    /* 00473b9d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00473b9f: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473ba5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00473ba7: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473bad: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473bb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473bb2u); call_ind(t); }
    /* 00473bb2: jmp 0x473bc9 */ goto L_00473bc9;
L_00473bb4:; BB(0x00473bb4);
    /* 00473bb4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00473bb6: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473bbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473bbe: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473bc4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473bc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473bc9u); call_ind(t); }
L_00473bc9:; BB(0x00473bc9);
    /* 00473bc9: jmp 0x477253 */ goto L_00477253;
L_00473bce:; BB(0x00473bce);
    /* 00473bce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473bd0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473bd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473bd8: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473bde: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473be1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473be3u); call_ind(t); }
    /* 00473be3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473be5: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473beb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473bed: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473bf3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473bf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473bf8u); call_ind(t); }
    /* 00473bf8: jmp 0x477253 */ goto L_00477253;
L_00473bfd:; BB(0x00473bfd);
    /* 00473bfd: mov dword ptr [0x791340], 0 */ W32((u32)(0x791340u), 0x0u);
    /* 00473c07: jmp 0x473c18 */ goto L_00473c18;
L_00473c09:; BB(0x00473c09);
    /* 00473c09: mov ecx, dword ptr [0x791340] */ r_ecx = R32((u32)(0x791340u));
    /* 00473c0f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473c12: mov dword ptr [0x791340], ecx */ W32((u32)(0x791340u), r_ecx);
L_00473c18:; BB(0x00473c18);
    /* 00473c18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473c1e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473c23u); f_0047f950();
    /* 00473c23: cmp dword ptr [0x791340], eax */ {  u32 a = R32((u32)(0x791340u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473c29: jge 0x473c46 */ if ((fS==fO)) goto L_00473c46;
L_00473c2b:; BB(0x00473c2b);
    /* 00473c2b: mov edx, dword ptr [0x791340] */ r_edx = R32((u32)(0x791340u));
    /* 00473c31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473c32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473c38: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473c3du); f_0047e390();
    /* 00473c3d: mov ecx, eax */ r_ecx = r_eax;
    /* 00473c3f: call 0x4dc490 */ r_esp -= 4; W32(r_esp, 0x473c44u); f_004dc490();
    /* 00473c44: jmp 0x473c09 */ goto L_00473c09;
L_00473c46:; BB(0x00473c46);
    /* 00473c46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473c4c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473c4f: call 0x4f6c80 */ r_esp -= 4; W32(r_esp, 0x473c54u); f_004f6c80();
    /* 00473c54: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00473c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473c59: je 0x473c72 */ if (fZ) goto L_00473c72;
L_00473c5b:; BB(0x00473c5b);
    /* 00473c5b: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00473c5d: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473c63: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473c65: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473c6b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473c6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473c70u); call_ind(t); }
    /* 00473c70: jmp 0x473c87 */ goto L_00473c87;
L_00473c72:; BB(0x00473c72);
    /* 00473c72: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00473c74: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473c7a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473c7c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473c82: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00473c85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473c87u); call_ind(t); }
L_00473c87:; BB(0x00473c87);
    /* 00473c87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473c89: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473c8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00473c91: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473c97: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473c9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473c9cu); call_ind(t); }
    /* 00473c9c: jmp 0x477253 */ goto L_00477253;
L_00473ca1:; BB(0x00473ca1);
    /* 00473ca1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473ca7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473caa: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x473cafu); f_004f6e70();
    /* 00473caf: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00473cb2: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473cb5: jne 0x473ce6 */ if (!fZ) goto L_00473ce6;
L_00473cb7:; BB(0x00473cb7);
    /* 00473cb7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00473cb9: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473cbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00473cc1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473cc7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00473cca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x473cccu); call_ind(t); }
    /* 00473ccc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00473cce: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473cd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00473cd6: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473cdc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473cdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x473ce1u); call_ind(t); }
    /* 00473ce1: jmp 0x477253 */ goto L_00477253;
L_00473ce6:; BB(0x00473ce6);
    /* 00473ce6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473cec: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473cef: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x473cf4u); f_004f6e70();
    /* 00473cf4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00473cf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473cf8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473cfe: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473d03u); f_0047e3d0();
    /* 00473d03: mov ecx, eax */ r_ecx = r_eax;
    /* 00473d05: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473d0au); f_004c7010();
    /* 00473d0a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473d0d: jne 0x473d26 */ if (!fZ) goto L_00473d26;
L_00473d0f:; BB(0x00473d0f);
    /* 00473d0f: push 0x70f */ { u32 v = 0x70fu; r_esp -= 4; W32(r_esp, v); }
    /* 00473d14: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473d19: push 0x6bc378 */ { u32 v = 0x6bc378u; r_esp -= 4; W32(r_esp, v); }
    /* 00473d1e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473d23u); f_005e9f20();
    /* 00473d23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473d26:; BB(0x00473d26);
    /* 00473d26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473d2c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473d2f: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x473d34u); f_004f6e70();
    /* 00473d34: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00473d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473d38: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473d3e: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473d43u); f_0047e3d0();
    /* 00473d43: mov ecx, eax */ r_ecx = r_eax;
    /* 00473d45: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x473d4au); f_004c7010();
    /* 00473d4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473d4c: jne 0x473d65 */ if (!fZ) goto L_00473d65;
L_00473d4e:; BB(0x00473d4e);
    /* 00473d4e: push 0x710 */ { u32 v = 0x710u; r_esp -= 4; W32(r_esp, v); }
    /* 00473d53: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473d58: push 0x6bc308 */ { u32 v = 0x6bc308u; r_esp -= 4; W32(r_esp, v); }
    /* 00473d5d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473d62u); f_005e9f20();
    /* 00473d62: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473d65:; BB(0x00473d65);
    /* 00473d65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473d6b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473d6e: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x473d73u); f_004f6e70();
    /* 00473d73: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00473d76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473d77: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473d7d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473d82u); f_0047e3d0();
    /* 00473d82: mov ecx, eax */ r_ecx = r_eax;
    /* 00473d84: call 0x4c76c0 */ r_esp -= 4; W32(r_esp, 0x473d89u); f_004c76c0();
    /* 00473d89: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473d8f: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x473d94u); f_0047e190();
    /* 00473d94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473d96: jne 0x473fbb */ if (!fZ) goto L_00473fbb;
L_00473d9c:; BB(0x00473d9c);
    /* 00473d9c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473da2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473da5: call 0x4f6e70 */ r_esp -= 4; W32(r_esp, 0x473daau); f_004f6e70();
    /* 00473daa: mov word ptr [ebp - 0x7c], ax */ W16((u32)(r_ebp+0xffffff84u), (u16)r_eax);
    /* 00473dae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473db4: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x473db9u); f_0047e280();
    /* 00473db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473dbb: jne 0x473ef0 */ if (!fZ) goto L_00473ef0;
L_00473dc1:; BB(0x00473dc1);
    /* 00473dc1: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 00473dc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473dc8: movsx ecx, word ptr [ebp - 0x7c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00473dcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473dcd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473dd3: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473dd8u); f_0047e3d0();
    /* 00473dd8: mov ecx, eax */ r_ecx = r_eax;
    /* 00473dda: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x473ddfu); f_004c7c40();
    /* 00473ddf: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00473de6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473de8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473dea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473dec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473dee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473df0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473df2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473df4: lea edx, [ebp - 0x80] */ r_edx = (u32)(r_ebp+0xffffff80u);
    /* 00473df7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473df8: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 00473dfe: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x473e03u); f_00485940();
    /* 00473e03: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00473e07: lea eax, [ebp - 0x115] */ r_eax = (u32)(r_ebp+0xfffffeebu);
    /* 00473e0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473e0e: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00473e11: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x473e16u); f_004a2160();
    /* 00473e16: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00473e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473e19: movsx edx, word ptr [ebp - 0x7c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00473e1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473e1e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473e24: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473e29u); f_0047e3d0();
    /* 00473e29: mov ecx, eax */ r_ecx = r_eax;
    /* 00473e2b: call 0x4da4d0 */ r_esp -= 4; W32(r_esp, 0x473e30u); f_004da4d0();
    /* 00473e30: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00473e33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473e34: mov cx, word ptr [ebp - 0x7c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff84u))) & 0xffffu);
    /* 00473e38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473e39: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473e3f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473e42: call 0x4f7050 */ r_esp -= 4; W32(r_esp, 0x473e47u); f_004f7050();
    /* 00473e47: mov word ptr [0x791330], 0 */ W16((u32)(0x791330u), 0x0u);
    /* 00473e50: jmp 0x473e64 */ goto L_00473e64;
L_00473e52:; BB(0x00473e52);
    /* 00473e52: mov dx, word ptr [0x791330] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791330u))) & 0xffffu);
    /* 00473e59: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00473e5d: mov word ptr [0x791330], dx */ W16((u32)(0x791330u), (u16)r_edx);
L_00473e64:; BB(0x00473e64);
    /* 00473e64: movsx esi, word ptr [0x791330] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00473e6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473e71: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x473e76u); f_0047f950();
    /* 00473e76: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00473e78: jge 0x473ecd */ if ((fS==fO)) goto L_00473ecd;
L_00473e7a:; BB(0x00473e7a);
    /* 00473e7a: movsx eax, word ptr [0x791330] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00473e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473e82: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473e88: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473e8du); f_0047e390();
    /* 00473e8d: mov ecx, eax */ r_ecx = r_eax;
    /* 00473e8f: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x473e94u); f_004c6cb0();
    /* 00473e94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473e96: je 0x473ecb */ if (fZ) goto L_00473ecb;
L_00473e98:; BB(0x00473e98);
    /* 00473e98: mov cx, word ptr [0x791308] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791308u))) & 0xffffu);
    /* 00473e9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473ea0: movsx edx, word ptr [ebp - 0x7c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00473ea4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473ea5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473eab: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x473eb0u); f_0047e490();
    /* 00473eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473eb1: movsx eax, word ptr [0x791330] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00473eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473eb9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473ebf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x473ec4u); f_0047e390();
    /* 00473ec4: mov ecx, eax */ r_ecx = r_eax;
    /* 00473ec6: call 0x4e0bc0 */ r_esp -= 4; W32(r_esp, 0x473ecbu); f_004e0bc0();
L_00473ecb:; BB(0x00473ecb);
    /* 00473ecb: jmp 0x473e52 */ goto L_00473e52;
L_00473ecd:; BB(0x00473ecd);
    /* 00473ecd: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00473ed1: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 00473ed4: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x473ed9u); f_004a20f0();
    /* 00473ed9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00473ee0: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 00473ee6: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x473eebu); f_00484470();
    /* 00473eeb: jmp 0x473fb9 */ goto L_00473fb9;
L_00473ef0:; BB(0x00473ef0);
    /* 00473ef0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473ef6: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x473efbu); f_0047e280();
    /* 00473efb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00473efe: je 0x473f17 */ if (fZ) goto L_00473f17;
L_00473f00:; BB(0x00473f00);
    /* 00473f00: push 0x729 */ { u32 v = 0x729u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f05: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473f0a: push 0x6bc58c */ { u32 v = 0x6bc58cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473f0f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473f14u); f_005e9f20();
    /* 00473f14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473f17:; BB(0x00473f17);
    /* 00473f17: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 00473f1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473f1e: movsx eax, word ptr [ebp - 0x7c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00473f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473f23: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473f29: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473f2eu); f_0047e3d0();
    /* 00473f2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00473f30: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x473f35u); f_004c7c40();
    /* 00473f35: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00473f3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00473f4a: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00473f50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473f51: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00473f57: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x473f5cu); f_00485940();
    /* 00473f5c: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00473f60: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00473f66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473f67: movsx eax, word ptr [ebp - 0x7c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 00473f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00473f6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473f72: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x473f77u); f_0047e3d0();
    /* 00473f77: mov ecx, eax */ r_ecx = r_eax;
    /* 00473f79: call 0x4da8d0 */ r_esp -= 4; W32(r_esp, 0x473f7eu); f_004da8d0();
    /* 00473f7e: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00473f84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00473f85: mov dx, word ptr [ebp - 0x7c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff84u))) & 0xffffu);
    /* 00473f89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00473f8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00473f90: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00473f93: call 0x4f7050 */ r_esp -= 4; W32(r_esp, 0x473f98u); f_004f7050();
    /* 00473f98: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00473f9c: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00473fa2: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x473fa7u); f_004a20f0();
    /* 00473fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00473fae: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00473fb4: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x473fb9u); f_00484470();
L_00473fb9:; BB(0x00473fb9);
    /* 00473fb9: jmp 0x473fd6 */ goto L_00473fd6;
L_00473fbb:; BB(0x00473fbb);
    /* 00473fbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00473fbd: jne 0x473fd6 */ if (!fZ) goto L_00473fd6;
L_00473fbf:; BB(0x00473fbf);
    /* 00473fbf: push 0x731 */ { u32 v = 0x731u; r_esp -= 4; W32(r_esp, v); }
    /* 00473fc4: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00473fc9: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00473fce: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x473fd3u); f_005e9f20();
    /* 00473fd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00473fd6:; BB(0x00473fd6);
    /* 00473fd6: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00473fd8: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473fde: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00473fe0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473fe6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00473fe9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x473febu); call_ind(t); }
    /* 00473feb: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00473fed: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473ff3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00473ff5: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00473ffb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00473ffe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x474000u); call_ind(t); }
    /* 00474000: jmp 0x477253 */ goto L_00477253;
L_00474005:; BB(0x00474005);
    /* 00474005: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047400b: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x474010u); f_0047e280();
    /* 00474010: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474013: je 0x47445c */ if (fZ) goto L_0047445c;
L_00474019:; BB(0x00474019);
    /* 00474019: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047401f: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x474024u); f_0047e280();
    /* 00474024: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474026: jne 0x474040 */ if (!fZ) goto L_00474040;
L_00474028:; BB(0x00474028);
    /* 00474028: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047402a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474030: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474033: call 0x4f73d0 */ r_esp -= 4; W32(r_esp, 0x474038u); f_004f73d0();
    /* 00474038: mov word ptr [0x79132c], ax */ W16((u32)(0x79132cu), (u16)r_eax);
    /* 0047403e: jmp 0x474056 */ goto L_00474056;
L_00474040:; BB(0x00474040);
    /* 00474040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474042: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474048: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047404b: call 0x4f73d0 */ r_esp -= 4; W32(r_esp, 0x474050u); f_004f73d0();
    /* 00474050: mov word ptr [0x79132c], ax */ W16((u32)(0x79132cu), (u16)r_eax);
L_00474056:; BB(0x00474056);
    /* 00474056: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047405d: cmp ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474060: jne 0x47423b */ if (!fZ) goto L_0047423b;
L_00474066:; BB(0x00474066);
    /* 00474066: mov byte ptr [ebp - 0x95], 1 */ W8((u32)(r_ebp+0xffffff6bu), 0x1u);
L_0047406d:; BB(0x0047406d);
    /* 0047406d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474073: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474076: call 0x4f7ae0 */ r_esp -= 4; W32(r_esp, 0x47407bu); f_004f7ae0();
    /* 0047407b: mov word ptr [0x79132c], ax */ W16((u32)(0x79132cu), (u16)r_eax);
    /* 00474081: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 00474088: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047408b: je 0x474236 */ if (fZ) goto L_00474236;
L_00474091:; BB(0x00474091);
    /* 00474091: mov ax, word ptr [0x79132c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79132cu))) & 0xffffu);
    /* 00474097: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474098: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047409e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004740a1: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4740a6u); f_004f78a0();
    /* 004740a6: mov esi, eax */ r_esi = r_eax;
    /* 004740a8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004740ae: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4740b3u); f_0047bc20();
    /* 004740b3: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004740b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004740b7: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004740be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004740bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004740c5: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4740cau); f_0047e3d0();
    /* 004740ca: mov ecx, eax */ r_ecx = r_eax;
    /* 004740cc: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4740d1u); f_004c6b80();
    /* 004740d1: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004740d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004740d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004740df: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4740e4u); f_0047e3d0();
    /* 004740e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004740e6: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4740ebu); f_004da300();
    /* 004740eb: movsx eax, word ptr [0x79132c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004740f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004740f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004740f9: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4740feu); f_0047e3d0();
    /* 004740fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00474100: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x474105u); f_004da360();
    /* 00474105: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047410c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047410d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474113: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474118u); f_0047e3d0();
    /* 00474118: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0047411b: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00474121: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474123: mov ax, word ptr [0x79132c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79132cu))) & 0xffffu);
    /* 00474129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047412a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474130: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474133: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x474138u); f_004f78a0();
    /* 00474138: mov esi, eax */ r_esi = r_eax;
    /* 0047413a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474140: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474145u); f_0047bc20();
    /* 00474145: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474148: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474149: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x47414eu); f_0064c8a0();
    /* 0047414e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474151: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 00474157: mov dword ptr [ebp - 0x11c], edx */ W32((u32)(r_ebp+0xfffffee4u), r_edx);
    /* 0047415d: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 00474163: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00474166: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0047416c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0047416f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00474172: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474173: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00474176: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474177: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00474179: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0047417f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474180: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00474186: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x47418bu); f_005e7e40();
    /* 0047418b: movzx eax, byte ptr [ebp - 0x95] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff6bu));
    /* 00474192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474194: je 0x4741ec */ if (fZ) goto L_004741ec;
L_00474196:; BB(0x00474196);
    /* 00474196: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047419d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047419e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004741a4: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4741a9u); f_0047e3d0();
    /* 004741a9: mov ecx, eax */ r_ecx = r_eax;
    /* 004741ab: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4741b0u); f_004c6cb0();
    /* 004741b0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004741b3: jne 0x4741e0 */ if (!fZ) goto L_004741e0;
L_004741b5:; BB(0x004741b5);
    /* 004741b5: mov dword ptr [0x791300], 0xd */ W32((u32)(0x791300u), 0xdu);
    /* 004741bf: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004741c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004741c7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004741cd: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4741d2u); f_0047e490();
    /* 004741d2: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 004741d7: mov byte ptr [ebp - 0x95], 0 */ W8((u32)(r_ebp+0xffffff6bu), 0x0u);
    /* 004741de: jmp 0x4741ea */ goto L_004741ea;
L_004741e0:; BB(0x004741e0);
    /* 004741e0: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_004741ea:; BB(0x004741ea);
    /* 004741ea: jmp 0x474231 */ goto L_00474231;
L_004741ec:; BB(0x004741ec);
    /* 004741ec: movsx eax, word ptr [0x79132c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004741f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004741f4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004741fa: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4741ffu); f_0047e3d0();
    /* 004741ff: mov ecx, eax */ r_ecx = r_eax;
    /* 00474201: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474206u); f_004c6cb0();
    /* 00474206: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474209: jne 0x474231 */ if (!fZ) goto L_00474231;
L_0047420b:; BB(0x0047420b);
    /* 0047420b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047420d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474212u); f_0062fbf0();
    /* 00474212: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474217: jne 0x474231 */ if (!fZ) goto L_00474231;
L_00474219:; BB(0x00474219);
    /* 00474219: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 00474220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474221: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474227: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x47422cu); f_0047e490();
    /* 0047422c: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
L_00474231:; BB(0x00474231);
    /* 00474231: jmp 0x47406d */ goto L_0047406d;
L_00474236:; BB(0x00474236);
    /* 00474236: jmp 0x474457 */ goto L_00474457;
L_0047423b:; BB(0x0047423b);
    /* 0047423b: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 00474242: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00474244: jge 0x47425d */ if ((fS==fO)) goto L_0047425d;
L_00474246:; BB(0x00474246);
    /* 00474246: push 0x762 */ { u32 v = 0x762u; r_esp -= 4; W32(r_esp, v); }
    /* 0047424b: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00474250: push 0x6bc2f8 */ { u32 v = 0x6bc2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00474255: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47425au); f_005e9f20();
    /* 0047425a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047425d:; BB(0x0047425d);
    /* 0047425d: mov cx, word ptr [0x79132c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x79132cu))) & 0xffffu);
    /* 00474264: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474265: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047426b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047426e: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x474273u); f_004f78a0();
    /* 00474273: mov esi, eax */ r_esi = r_eax;
    /* 00474275: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047427b: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474280u); f_0047bc20();
    /* 00474280: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474283: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474284: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047428b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047428c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474292: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474297u); f_0047e3d0();
    /* 00474297: mov ecx, eax */ r_ecx = r_eax;
    /* 00474299: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x47429eu); f_004c6b80();
    /* 0047429e: movsx eax, word ptr [0x79132c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004742a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004742a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004742ac: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4742b1u); f_0047e3d0();
    /* 004742b1: mov ecx, eax */ r_ecx = r_eax;
    /* 004742b3: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4742b8u); f_004da300();
    /* 004742b8: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004742bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004742c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004742c6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4742cbu); f_0047e3d0();
    /* 004742cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004742cd: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x4742d2u); f_004da360();
    /* 004742d2: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004742d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004742da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004742e0: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4742e5u); f_0047e3d0();
    /* 004742e5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004742e8: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004742ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004742f0: mov cx, word ptr [0x79132c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x79132cu))) & 0xffffu);
    /* 004742f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004742f8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004742fe: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474301: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x474306u); f_004f78a0();
    /* 00474306: mov esi, eax */ r_esi = r_eax;
    /* 00474308: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047430e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474313u); f_0047bc20();
    /* 00474313: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474316: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474317: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x47431cu); f_0064c8a0();
    /* 0047431c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047431f: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00474325: mov dword ptr [ebp - 0x124], edx */ W32((u32)(r_ebp+0xfffffedcu), r_edx);
    /* 0047432b: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00474331: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00474334: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0047433a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047433d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00474340: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474341: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00474344: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474345: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00474347: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0047434d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047434e: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00474354: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x474359u); f_005e7e40();
    /* 00474359: movzx ecx, byte ptr [0x7912ea] */ r_ecx = (u32)R8((u32)(0x7912eau));
    /* 00474360: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474362: je 0x4743c1 */ if (fZ) goto L_004743c1;
L_00474364:; BB(0x00474364);
    /* 00474364: mov dx, word ptr [0x79132c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x79132cu))) & 0xffffu);
    /* 0047436b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047436c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474372: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474375: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x47437au); f_004f78a0();
    /* 0047437a: mov esi, eax */ r_esi = r_eax;
    /* 0047437c: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00474381: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00474383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474384: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474389u); f_0062fbf0();
    /* 00474389: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047438c: mov edi, eax */ r_edi = r_eax;
    /* 0047438e: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 00474394: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00474396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474397: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47439cu); f_0062fbf0();
    /* 0047439c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047439f: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 004743a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004743a9: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4743aeu); f_0047bde0();
    /* 004743ae: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004743b1: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004743b3: jle 0x4743c1 */ if ((fZ||fS!=fO)) goto L_004743c1;
L_004743b5:; BB(0x004743b5);
    /* 004743b5: mov dword ptr [0x791300], 0xb */ W32((u32)(0x791300u), 0xbu);
    /* 004743bf: jmp 0x47443f */ goto L_0047443f;
L_004743c1:; BB(0x004743c1);
    /* 004743c1: movzx edx, byte ptr [0x7912ea] */ r_edx = (u32)R8((u32)(0x7912eau));
    /* 004743c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004743ca: je 0x474435 */ if (fZ) goto L_00474435;
L_004743cc:; BB(0x004743cc);
    /* 004743cc: mov ax, word ptr [0x79132c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79132cu))) & 0xffffu);
    /* 004743d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004743d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004743d9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004743dc: call 0x4f78a0 */ r_esp -= 4; W32(r_esp, 0x4743e1u); f_004f78a0();
    /* 004743e1: mov esi, eax */ r_esi = r_eax;
    /* 004743e3: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 004743e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004743e9: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004743ec: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004743ee: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004743f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004743f2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4743f7u); f_0062fbf0();
    /* 004743f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004743fa: mov edi, eax */ r_edi = r_eax;
    /* 004743fc: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00474401: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00474402: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00474405: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00474407: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0047440a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047440b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474410u); f_0062fbf0();
    /* 00474410: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474413: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 00474417: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047441d: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x474422u); f_0047bce0();
    /* 00474422: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474425: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00474427: jge 0x474435 */ if ((fS==fO)) goto L_00474435;
L_00474429:; BB(0x00474429);
    /* 00474429: mov dword ptr [0x791300], 0xa */ W32((u32)(0x791300u), 0xau);
    /* 00474433: jmp 0x47443f */ goto L_0047443f;
L_00474435:; BB(0x00474435);
    /* 00474435: mov dword ptr [0x791300], 8 */ W32((u32)(0x791300u), 0x8u);
L_0047443f:; BB(0x0047443f);
    /* 0047443f: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 00474446: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474447: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047444d: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474452u); f_0047e490();
    /* 00474452: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
L_00474457:; BB(0x00474457);
    /* 00474457: jmp 0x475019 */ goto L_00475019;
L_0047445c:; BB(0x0047445c);
    /* 0047445c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474462: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x474467u); f_0047d7f0();
    /* 00474467: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047446a: jne 0x4744e1 */ if (!fZ) goto L_004744e1;
L_0047446c:; BB(0x0047446c);
    /* 0047446c: lea ecx, [ebp - 0x12c] */ r_ecx = (u32)(r_ebp+0xfffffed4u);
    /* 00474472: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x474477u); f_004a20d0();
    /* 00474477: mov dword ptr [ebp - 0x2a0], eax */ W32((u32)(r_ebp+0xfffffd60u), r_eax);
    /* 0047447d: mov edx, dword ptr [ebp - 0x2a0] */ r_edx = R32((u32)(r_ebp+0xfffffd60u));
    /* 00474483: mov dword ptr [ebp - 0x2a4], edx */ W32((u32)(r_ebp+0xfffffd5cu), r_edx);
    /* 00474489: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00474490: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00474495: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047449a: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047449f: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 004744a4: mov eax, dword ptr [0x7913f4] */ r_eax = R32((u32)(0x7913f4u));
    /* 004744a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004744aa: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 004744b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004744b1: mov ecx, dword ptr [ebp - 0x2a4] */ r_ecx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 004744b7: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x4744bcu); f_004a2100();
    /* 004744bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004744be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004744bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004744c5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004744c8: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x4744cdu); f_004f7bd0();
    /* 004744cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004744d4: lea ecx, [ebp - 0x12c] */ r_ecx = (u32)(r_ebp+0xfffffed4u);
    /* 004744da: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4744dfu); f_004a20f0();
    /* 004744df: jmp 0x474555 */ goto L_00474555;
L_004744e1:; BB(0x004744e1);
    /* 004744e1: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 004744e7: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x4744ecu); f_004a20d0();
    /* 004744ec: mov dword ptr [ebp - 0x2a8], eax */ W32((u32)(r_ebp+0xfffffd58u), r_eax);
    /* 004744f2: mov eax, dword ptr [ebp - 0x2a8] */ r_eax = R32((u32)(r_ebp+0xfffffd58u));
    /* 004744f8: mov dword ptr [ebp - 0x2ac], eax */ W32((u32)(r_ebp+0xfffffd54u), r_eax);
    /* 004744fe: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00474505: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047450a: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047450f: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00474514: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00474519: mov ecx, dword ptr [0x7913c8] */ r_ecx = R32((u32)(0x7913c8u));
    /* 0047451f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474520: mov edx, dword ptr [0x7913cc] */ r_edx = R32((u32)(0x7913ccu));
    /* 00474526: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474527: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 0047452d: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x474532u); f_004a2100();
    /* 00474532: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00474534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474535: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047453b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047453e: call 0x4f7bd0 */ r_esp -= 4; W32(r_esp, 0x474543u); f_004f7bd0();
    /* 00474543: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047454a: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 00474550: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x474555u); f_004a20f0();
L_00474555:; BB(0x00474555);
    /* 00474555: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00474557: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047455d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474560: call 0x4f8c30 */ r_esp -= 4; W32(r_esp, 0x474565u); f_004f8c30();
    /* 00474565: mov word ptr [ebp - 0xa4], ax */ W16((u32)(r_ebp+0xffffff5cu), (u16)r_eax);
    /* 0047456c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047456e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474574: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474577: call 0x4f8c30 */ r_esp -= 4; W32(r_esp, 0x47457cu); f_004f8c30();
    /* 0047457c: mov word ptr [ebp - 0xa8], ax */ W16((u32)(r_ebp+0xffffff58u), (u16)r_eax);
    /* 00474583: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0047458a: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047458d: jne 0x4745b2 */ if (!fZ) goto L_004745b2;
L_0047458f:; BB(0x0047458f);
    /* 0047458f: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474596: cmp edx, -5 */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474599: jne 0x4745b2 */ if (!fZ) goto L_004745b2;
L_0047459b:; BB(0x0047459b);
    /* 0047459b: push 0x784 */ { u32 v = 0x784u; r_esp -= 4; W32(r_esp, v); }
    /* 004745a0: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004745a5: push 0x6bc2b0 */ { u32 v = 0x6bc2b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004745aa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4745afu); f_005e9f20();
    /* 004745af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004745b2:; BB(0x004745b2);
    /* 004745b2: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 004745b9: cmp ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004745bc: jne 0x4747bc */ if (!fZ) goto L_004747bc;
L_004745c2:; BB(0x004745c2);
    /* 004745c2: mov byte ptr [ebp - 0xa9], 1 */ W8((u32)(r_ebp+0xffffff57u), 0x1u);
L_004745c9:; BB(0x004745c9);
    /* 004745c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004745cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004745d1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004745d4: call 0x4f8d90 */ r_esp -= 4; W32(r_esp, 0x4745d9u); f_004f8d90();
    /* 004745d9: mov word ptr [ebp - 0xa4], ax */ W16((u32)(r_ebp+0xffffff5cu), (u16)r_eax);
    /* 004745e0: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 004745e7: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004745ea: je 0x4747b7 */ if (fZ) goto L_004747b7;
L_004745f0:; BB(0x004745f0);
    /* 004745f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004745f2: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 004745f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004745fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474600: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474603: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474608u); f_004f79b0();
    /* 00474608: mov esi, eax */ r_esi = r_eax;
    /* 0047460a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474610: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474615u); f_0047bc20();
    /* 00474615: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474618: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474619: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474620: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474621: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474627: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47462cu); f_0047e3d0();
    /* 0047462c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047462e: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x474633u); f_004c6b80();
    /* 00474633: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0047463a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047463b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474641: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474646u); f_0047e3d0();
    /* 00474646: mov ecx, eax */ r_ecx = r_eax;
    /* 00474648: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x47464du); f_004da300();
    /* 0047464d: movsx eax, word ptr [ebp - 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474655: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047465b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474660u); f_0047e3d0();
    /* 00474660: mov ecx, eax */ r_ecx = r_eax;
    /* 00474662: call 0x4da470 */ r_esp -= 4; W32(r_esp, 0x474667u); f_004da470();
    /* 00474667: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0047466e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047466f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474675: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47467au); f_0047e3d0();
    /* 0047467a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0047467d: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00474683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474685: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00474687: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 0047468e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047468f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474695: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474698: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x47469du); f_004f79b0();
    /* 0047469d: mov esi, eax */ r_esi = r_eax;
    /* 0047469f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004746a5: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4746aau); f_0047bc20();
    /* 004746aa: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004746ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004746ae: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4746b3u); f_0064c8a0();
    /* 004746b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004746b6: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 004746bc: mov dword ptr [ebp - 0x134], edx */ W32((u32)(r_ebp+0xfffffeccu), r_edx);
    /* 004746c2: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 004746c8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004746cb: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 004746d1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004746d4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004746d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004746d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004746db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004746dc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004746de: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 004746e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004746e5: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004746eb: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4746f0u); f_005e7e40();
    /* 004746f0: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 004746f7: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004746fa: jne 0x4747a8 */ if (!fZ) goto L_004747a8;
L_00474700:; BB(0x00474700);
    /* 00474700: movzx ecx, byte ptr [ebp - 0xa9] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff57u));
    /* 00474707: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474709: je 0x474761 */ if (fZ) goto L_00474761;
L_0047470b:; BB(0x0047470b);
    /* 0047470b: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474712: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474713: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474719: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47471eu); f_0047e3d0();
    /* 0047471e: mov ecx, eax */ r_ecx = r_eax;
    /* 00474720: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474725u); f_004c6cb0();
    /* 00474725: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474728: jne 0x474755 */ if (!fZ) goto L_00474755;
L_0047472a:; BB(0x0047472a);
    /* 0047472a: mov dword ptr [0x791300], 0xd */ W32((u32)(0x791300u), 0xdu);
    /* 00474734: movsx eax, word ptr [ebp - 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0047473b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047473c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474742: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474747u); f_0047e490();
    /* 00474747: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 0047474c: mov byte ptr [ebp - 0xa9], 0 */ W8((u32)(r_ebp+0xffffff57u), 0x0u);
    /* 00474753: jmp 0x47475f */ goto L_0047475f;
L_00474755:; BB(0x00474755);
    /* 00474755: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_0047475f:; BB(0x0047475f);
    /* 0047475f: jmp 0x4747a6 */ goto L_004747a6;
L_00474761:; BB(0x00474761);
    /* 00474761: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474768: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474769: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047476f: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474774u); f_0047e3d0();
    /* 00474774: mov ecx, eax */ r_ecx = r_eax;
    /* 00474776: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x47477bu); f_004c6cb0();
    /* 0047477b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047477e: jne 0x4747a6 */ if (!fZ) goto L_004747a6;
L_00474780:; BB(0x00474780);
    /* 00474780: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00474782: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474787u); f_0062fbf0();
    /* 00474787: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047478a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047478c: jne 0x4747a6 */ if (!fZ) goto L_004747a6;
L_0047478e:; BB(0x0047478e);
    /* 0047478e: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474796: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047479c: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x4747a1u); f_0047e490();
    /* 004747a1: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
L_004747a6:; BB(0x004747a6);
    /* 004747a6: jmp 0x4747b2 */ goto L_004747b2;
L_004747a8:; BB(0x004747a8);
    /* 004747a8: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_004747b2:; BB(0x004747b2);
    /* 004747b2: jmp 0x4745c9 */ goto L_004745c9;
L_004747b7:; BB(0x004747b7);
    /* 004747b7: jmp 0x474b7c */ goto L_00474b7c;
L_004747bc:; BB(0x004747bc);
    /* 004747bc: movsx eax, word ptr [ebp - 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 004747c3: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004747c6: jne 0x4747cd */ if (!fZ) goto L_004747cd;
L_004747c8:; BB(0x004747c8);
    /* 004747c8: jmp 0x474b7c */ goto L_00474b7c;
L_004747cd:; BB(0x004747cd);
    /* 004747cd: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 004747d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004747d6: jge 0x4747ef */ if ((fS==fO)) goto L_004747ef;
L_004747d8:; BB(0x004747d8);
    /* 004747d8: push 0x7b7 */ { u32 v = 0x7b7u; r_esp -= 4; W32(r_esp, v); }
    /* 004747dd: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 004747e2: push 0x6bc29c */ { u32 v = 0x6bc29cu; r_esp -= 4; W32(r_esp, v); }
    /* 004747e7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4747ecu); f_005e9f20();
    /* 004747ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004747ef:; BB(0x004747ef);
    /* 004747ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004747f1: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 004747f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004747f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004747ff: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474802: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474807u); f_004f79b0();
    /* 00474807: mov esi, eax */ r_esi = r_eax;
    /* 00474809: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047480f: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474814u); f_0047bc20();
    /* 00474814: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474817: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474818: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0047481f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474820: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474826: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47482bu); f_0047e3d0();
    /* 0047482b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047482d: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x474832u); f_004c6b80();
    /* 00474832: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474839: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047483a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474840: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474845u); f_0047e3d0();
    /* 00474845: mov ecx, eax */ r_ecx = r_eax;
    /* 00474847: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x47484cu); f_004da300();
    /* 0047484c: movsx eax, word ptr [ebp - 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474854: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047485a: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x47485fu); f_0047e3d0();
    /* 0047485f: mov ecx, eax */ r_ecx = r_eax;
    /* 00474861: call 0x4da470 */ r_esp -= 4; W32(r_esp, 0x474866u); f_004da470();
    /* 00474866: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 0047486d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047486e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474874: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474879u); f_0047e3d0();
    /* 00474879: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0047487c: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00474882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474884: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00474886: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 0047488d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047488e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474894: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474897: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x47489cu); f_004f79b0();
    /* 0047489c: mov esi, eax */ r_esi = r_eax;
    /* 0047489e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004748a4: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4748a9u); f_0047bc20();
    /* 004748a9: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004748ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004748ad: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4748b2u); f_0064c8a0();
    /* 004748b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004748b5: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 004748bb: mov dword ptr [ebp - 0x13c], edx */ W32((u32)(r_ebp+0xfffffec4u), r_edx);
    /* 004748c1: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 004748c7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004748ca: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 004748d0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004748d3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004748d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004748d7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004748da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004748db: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004748dd: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004748e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004748e4: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 004748ea: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x4748efu); f_005e7e40();
    /* 004748ef: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 004748f6: cmp eax, -5 */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004748f9: jne 0x474a0a */ if (!fZ) goto L_00474a0a;
L_004748ff:; BB(0x004748ff);
    /* 004748ff: movzx ecx, byte ptr [0x7912ea] */ r_ecx = (u32)R8((u32)(0x7912eau));
    /* 00474906: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474908: je 0x47496c */ if (fZ) goto L_0047496c;
L_0047490a:; BB(0x0047490a);
    /* 0047490a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047490c: mov dx, word ptr [ebp - 0xa4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 00474913: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474914: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047491a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047491d: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474922u); f_004f79b0();
    /* 00474922: mov esi, eax */ r_esi = r_eax;
    /* 00474924: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00474929: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0047492b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047492c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474931u); f_0062fbf0();
    /* 00474931: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474934: mov edi, eax */ r_edi = r_eax;
    /* 00474936: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 0047493c: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0047493e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047493f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474944u); f_0062fbf0();
    /* 00474944: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474947: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 0047494b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474951: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x474956u); f_0047bde0();
    /* 00474956: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474959: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047495b: jle 0x47496c */ if ((fZ||fS!=fO)) goto L_0047496c;
L_0047495d:; BB(0x0047495d);
    /* 0047495d: mov dword ptr [0x791300], 0xb */ W32((u32)(0x791300u), 0xbu);
    /* 00474967: jmp 0x4749ed */ goto L_004749ed;
L_0047496c:; BB(0x0047496c);
    /* 0047496c: movzx edx, byte ptr [0x7912ea] */ r_edx = (u32)R8((u32)(0x7912eau));
    /* 00474973: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474975: je 0x4749e3 */ if (fZ) goto L_004749e3;
L_00474977:; BB(0x00474977);
    /* 00474977: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00474979: mov ax, word ptr [ebp - 0xa4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff5cu))) & 0xffffu);
    /* 00474980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474981: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474987: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047498a: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x47498fu); f_004f79b0();
    /* 0047498f: mov esi, eax */ r_esi = r_eax;
    /* 00474991: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00474996: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00474997: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0047499a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047499c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0047499f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004749a0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4749a5u); f_0062fbf0();
    /* 004749a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004749a8: mov edi, eax */ r_edi = r_eax;
    /* 004749aa: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 004749af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004749b0: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004749b3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004749b5: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004749b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004749b9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4749beu); f_0062fbf0();
    /* 004749be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004749c1: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 004749c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004749cb: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4749d0u); f_0047bce0();
    /* 004749d0: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004749d3: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004749d5: jge 0x4749e3 */ if ((fS==fO)) goto L_004749e3;
L_004749d7:; BB(0x004749d7);
    /* 004749d7: mov dword ptr [0x791300], 0xa */ W32((u32)(0x791300u), 0xau);
    /* 004749e1: jmp 0x4749ed */ goto L_004749ed;
L_004749e3:; BB(0x004749e3);
    /* 004749e3: mov dword ptr [0x791300], 8 */ W32((u32)(0x791300u), 0x8u);
L_004749ed:; BB(0x004749ed);
    /* 004749ed: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 004749f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004749f5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004749fb: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474a00u); f_0047e490();
    /* 00474a00: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00474a05: jmp 0x474b7c */ goto L_00474b7c;
L_00474a0a:; BB(0x00474a0a);
    /* 00474a0a: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474a11: cmp edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474a14: je 0x474b72 */ if (fZ) goto L_00474b72;
L_00474a1a:; BB(0x00474a1a);
    /* 00474a1a: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474a21: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474a28: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474a2a: jne 0x474a53 */ if (!fZ) goto L_00474a53;
L_00474a2c:; BB(0x00474a2c);
    /* 00474a2c: mov dword ptr [0x791300], 0xe */ W32((u32)(0x791300u), 0xeu);
    /* 00474a36: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474a3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474a3e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474a44: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474a49u); f_0047e490();
    /* 00474a49: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00474a4e: jmp 0x474b70 */ goto L_00474b70;
L_00474a53:; BB(0x00474a53);
    /* 00474a53: movsx eax, word ptr [ebp - 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474a5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474a5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474a61: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474a66u); f_0047e3d0();
    /* 00474a66: mov ecx, eax */ r_ecx = r_eax;
    /* 00474a68: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474a6du); f_004c6cb0();
    /* 00474a6d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474a70: jne 0x474ae0 */ if (!fZ) goto L_00474ae0;
L_00474a72:; BB(0x00474a72);
    /* 00474a72: movsx ecx, word ptr [ebp - 0xa8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474a79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474a7a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474a80: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474a85u); f_0047e3d0();
    /* 00474a85: mov ecx, eax */ r_ecx = r_eax;
    /* 00474a87: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474a8cu); f_004c6cb0();
    /* 00474a8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474a8f: jne 0x474ae0 */ if (!fZ) goto L_00474ae0;
L_00474a91:; BB(0x00474a91);
    /* 00474a91: mov dword ptr [0x791300], 0xf */ W32((u32)(0x791300u), 0xfu);
    /* 00474a9b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00474a9d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474aa2u); f_0062fbf0();
    /* 00474aa2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474aa7: jne 0x474ac3 */ if (!fZ) goto L_00474ac3;
L_00474aa9:; BB(0x00474aa9);
    /* 00474aa9: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474ab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474ab1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474ab7: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474abcu); f_0047e490();
    /* 00474abc: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00474ac1: jmp 0x474adb */ goto L_00474adb;
L_00474ac3:; BB(0x00474ac3);
    /* 00474ac3: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474acb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474ad1: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474ad6u); f_0047e490();
    /* 00474ad6: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
L_00474adb:; BB(0x00474adb);
    /* 00474adb: jmp 0x474b70 */ goto L_00474b70;
L_00474ae0:; BB(0x00474ae0);
    /* 00474ae0: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474ae7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474ae8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474aee: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474af3u); f_0047e3d0();
    /* 00474af3: mov ecx, eax */ r_ecx = r_eax;
    /* 00474af5: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474afau); f_004c6cb0();
    /* 00474afa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474afd: jne 0x474b23 */ if (!fZ) goto L_00474b23;
L_00474aff:; BB(0x00474aff);
    /* 00474aff: mov dword ptr [0x791300], 0xf */ W32((u32)(0x791300u), 0xfu);
    /* 00474b09: movsx edx, word ptr [ebp - 0xa4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474b11: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474b17: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474b1cu); f_0047e490();
    /* 00474b1c: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00474b21: jmp 0x474b70 */ goto L_00474b70;
L_00474b23:; BB(0x00474b23);
    /* 00474b23: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474b2b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474b31: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474b36u); f_0047e3d0();
    /* 00474b36: mov ecx, eax */ r_ecx = r_eax;
    /* 00474b38: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474b3du); f_004c6cb0();
    /* 00474b3d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474b40: jne 0x474b66 */ if (!fZ) goto L_00474b66;
L_00474b42:; BB(0x00474b42);
    /* 00474b42: mov dword ptr [0x791300], 0xf */ W32((u32)(0x791300u), 0xfu);
    /* 00474b4c: movsx ecx, word ptr [ebp - 0xa8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474b54: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474b5a: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474b5fu); f_0047e490();
    /* 00474b5f: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00474b64: jmp 0x474b70 */ goto L_00474b70;
L_00474b66:; BB(0x00474b66);
    /* 00474b66: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_00474b70:; BB(0x00474b70);
    /* 00474b70: jmp 0x474b7c */ goto L_00474b7c;
L_00474b72:; BB(0x00474b72);
    /* 00474b72: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_00474b7c:; BB(0x00474b7c);
    /* 00474b7c: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474b83: cmp edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474b86: jne 0x474d7c */ if (!fZ) goto L_00474d7c;
L_00474b8c:; BB(0x00474b8c);
    /* 00474b8c: mov byte ptr [ebp - 0xb5], 1 */ W8((u32)(r_ebp+0xffffff4bu), 0x1u);
L_00474b93:; BB(0x00474b93);
    /* 00474b93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474b95: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474b9b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474b9e: call 0x4f8d90 */ r_esp -= 4; W32(r_esp, 0x474ba3u); f_004f8d90();
    /* 00474ba3: mov word ptr [ebp - 0xa8], ax */ W16((u32)(r_ebp+0xffffff58u), (u16)r_eax);
    /* 00474baa: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474bb1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474bb4: je 0x474d77 */ if (fZ) goto L_00474d77;
L_00474bba:; BB(0x00474bba);
    /* 00474bba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474bbc: mov cx, word ptr [ebp - 0xa8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474bc4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474bca: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474bcd: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474bd2u); f_004f79b0();
    /* 00474bd2: mov esi, eax */ r_esi = r_eax;
    /* 00474bd4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474bda: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474bdfu); f_0047bc20();
    /* 00474bdf: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474be2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474be3: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474bea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474beb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474bf1: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474bf6u); f_0047e3d0();
    /* 00474bf6: mov ecx, eax */ r_ecx = r_eax;
    /* 00474bf8: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x474bfdu); f_004c6b80();
    /* 00474bfd: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474c05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474c0b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474c10u); f_0047e3d0();
    /* 00474c10: mov ecx, eax */ r_ecx = r_eax;
    /* 00474c12: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x474c17u); f_004da300();
    /* 00474c17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474c19: movsx ecx, word ptr [ebp - 0xa8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474c20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474c21: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474c27: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474c2cu); f_0047e3d0();
    /* 00474c2c: mov ecx, eax */ r_ecx = r_eax;
    /* 00474c2e: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x474c33u); f_004da3c0();
    /* 00474c33: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474c3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474c3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474c41: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474c46u); f_0047e3d0();
    /* 00474c46: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00474c49: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00474c4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474c51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474c53: mov cx, word ptr [ebp - 0xa8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474c5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474c5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474c61: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474c64: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474c69u); f_004f79b0();
    /* 00474c69: mov esi, eax */ r_esi = r_eax;
    /* 00474c6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474c71: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474c76u); f_0047bc20();
    /* 00474c76: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474c79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474c7a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x474c7fu); f_0064c8a0();
    /* 00474c7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474c82: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 00474c88: mov dword ptr [ebp - 0x144], edx */ W32((u32)(r_ebp+0xfffffebcu), r_edx);
    /* 00474c8e: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00474c94: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00474c97: mov eax, dword ptr [ebp - 0x144] */ r_eax = R32((u32)(r_ebp+0xfffffebcu));
    /* 00474c9d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00474ca0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00474ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474ca4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00474ca7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474ca8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00474caa: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 00474cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474cb1: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00474cb7: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x474cbcu); f_005e7e40();
    /* 00474cbc: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474cc3: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474cc6: jne 0x474d72 */ if (!fZ) goto L_00474d72;
L_00474ccc:; BB(0x00474ccc);
    /* 00474ccc: movzx edx, byte ptr [ebp - 0xb5] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff4bu));
    /* 00474cd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474cd5: je 0x474d2d */ if (fZ) goto L_00474d2d;
L_00474cd7:; BB(0x00474cd7);
    /* 00474cd7: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474cde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474cdf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474ce5: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474ceau); f_0047e3d0();
    /* 00474cea: mov ecx, eax */ r_ecx = r_eax;
    /* 00474cec: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474cf1u); f_004c6cb0();
    /* 00474cf1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474cf4: jne 0x474d21 */ if (!fZ) goto L_00474d21;
L_00474cf6:; BB(0x00474cf6);
    /* 00474cf6: mov dword ptr [0x791300], 0xd */ W32((u32)(0x791300u), 0xdu);
    /* 00474d00: movsx ecx, word ptr [ebp - 0xa8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474d07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474d08: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474d0e: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474d13u); f_0047e490();
    /* 00474d13: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00474d18: mov byte ptr [ebp - 0xb5], 0 */ W8((u32)(r_ebp+0xffffff4bu), 0x0u);
    /* 00474d1f: jmp 0x474d2b */ goto L_00474d2b;
L_00474d21:; BB(0x00474d21);
    /* 00474d21: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_00474d2b:; BB(0x00474d2b);
    /* 00474d2b: jmp 0x474d72 */ goto L_00474d72;
L_00474d2d:; BB(0x00474d2d);
    /* 00474d2d: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474d34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474d35: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474d3b: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474d40u); f_0047e3d0();
    /* 00474d40: mov ecx, eax */ r_ecx = r_eax;
    /* 00474d42: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x474d47u); f_004c6cb0();
    /* 00474d47: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474d4a: jne 0x474d72 */ if (!fZ) goto L_00474d72;
L_00474d4c:; BB(0x00474d4c);
    /* 00474d4c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00474d4e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474d53u); f_0062fbf0();
    /* 00474d53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474d56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474d58: jne 0x474d72 */ if (!fZ) goto L_00474d72;
L_00474d5a:; BB(0x00474d5a);
    /* 00474d5a: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474d61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474d62: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474d68: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x474d6du); f_0047e490();
    /* 00474d6d: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
L_00474d72:; BB(0x00474d72);
    /* 00474d72: jmp 0x474b93 */ goto L_00474b93;
L_00474d77:; BB(0x00474d77);
    /* 00474d77: jmp 0x475019 */ goto L_00475019;
L_00474d7c:; BB(0x00474d7c);
    /* 00474d7c: movsx ecx, word ptr [ebp - 0xa8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474d83: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474d86: jne 0x474d8d */ if (!fZ) goto L_00474d8d;
L_00474d88:; BB(0x00474d88);
    /* 00474d88: jmp 0x475019 */ goto L_00475019;
L_00474d8d:; BB(0x00474d8d);
    /* 00474d8d: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474d94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00474d96: jge 0x474daf */ if ((fS==fO)) goto L_00474daf;
L_00474d98:; BB(0x00474d98);
    /* 00474d98: push 0x820 */ { u32 v = 0x820u; r_esp -= 4; W32(r_esp, v); }
    /* 00474d9d: push 0x6bc63c */ { u32 v = 0x6bc63cu; r_esp -= 4; W32(r_esp, v); }
    /* 00474da2: push 0x6bc288 */ { u32 v = 0x6bc288u; r_esp -= 4; W32(r_esp, v); }
    /* 00474da7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x474dacu); f_005e9f20();
    /* 00474dac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00474daf:; BB(0x00474daf);
    /* 00474daf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474db1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474db3: mov cx, word ptr [ebp - 0xa8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474dba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474dbb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474dc1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474dc4: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474dc9u); f_004f79b0();
    /* 00474dc9: mov esi, eax */ r_esi = r_eax;
    /* 00474dcb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474dd1: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474dd6u); f_0047bc20();
    /* 00474dd6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474dd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474dda: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x474ddfu); f_0064c8a0();
    /* 00474ddf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474de2: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 00474de8: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 00474dee: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 00474df4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00474df7: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00474dfd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00474e00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474e02: mov cx, word ptr [ebp - 0xa8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474e09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474e0a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474e10: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474e13: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474e18u); f_004f79b0();
    /* 00474e18: mov esi, eax */ r_esi = r_eax;
    /* 00474e1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474e20: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474e25u); f_0047bc20();
    /* 00474e25: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474e28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474e29: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474e30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474e31: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474e37: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474e3cu); f_0047e3d0();
    /* 00474e3c: mov ecx, eax */ r_ecx = r_eax;
    /* 00474e3e: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x474e43u); f_004c6b80();
    /* 00474e43: movsx eax, word ptr [ebp - 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474e4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474e4b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474e51: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474e56u); f_0047e3d0();
    /* 00474e56: mov ecx, eax */ r_ecx = r_eax;
    /* 00474e58: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x474e5du); f_004da300();
    /* 00474e5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474e5f: movsx ecx, word ptr [ebp - 0xa8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474e66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474e67: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474e6d: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474e72u); f_0047e3d0();
    /* 00474e72: mov ecx, eax */ r_ecx = r_eax;
    /* 00474e74: call 0x4da3c0 */ r_esp -= 4; W32(r_esp, 0x474e79u); f_004da3c0();
    /* 00474e79: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00474e80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474e81: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474e87: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x474e8cu); f_0047e3d0();
    /* 00474e8c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00474e8f: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00474e95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474e97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474e99: mov cx, word ptr [ebp - 0xa8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474ea0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474ea1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474ea7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474eaa: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474eafu); f_004f79b0();
    /* 00474eaf: mov esi, eax */ r_esi = r_eax;
    /* 00474eb1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474eb7: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x474ebcu); f_0047bc20();
    /* 00474ebc: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474ebf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00474ec0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x474ec5u); f_0064c8a0();
    /* 00474ec5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474ec8: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 00474ece: mov dword ptr [ebp - 0x154], edx */ W32((u32)(r_ebp+0xfffffeacu), r_edx);
    /* 00474ed4: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00474eda: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00474edd: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 00474ee3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00474ee6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00474ee9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474eea: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00474eed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474eee: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00474ef0: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 00474ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474ef7: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00474efd: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x474f02u); f_005e7e40();
    /* 00474f02: movsx ecx, word ptr [ebp - 0xa4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff5cu));
    /* 00474f09: cmp ecx, -5 */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474f0c: jne 0x475019 */ if (!fZ) goto L_00475019;
L_00474f12:; BB(0x00474f12);
    /* 00474f12: movzx edx, byte ptr [0x7912ea] */ r_edx = (u32)R8((u32)(0x7912eau));
    /* 00474f19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474f1b: je 0x474f80 */ if (fZ) goto L_00474f80;
L_00474f1d:; BB(0x00474f1d);
    /* 00474f1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474f1f: mov ax, word ptr [ebp - 0xa8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474f26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474f27: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474f2d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474f30: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474f35u); f_004f79b0();
    /* 00474f35: mov esi, eax */ r_esi = r_eax;
    /* 00474f37: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 00474f3d: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00474f3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474f40: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474f45u); f_0062fbf0();
    /* 00474f45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474f48: mov edi, eax */ r_edi = r_eax;
    /* 00474f4a: mov edx, dword ptr [0x791308] */ r_edx = R32((u32)(0x791308u));
    /* 00474f50: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00474f52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00474f53: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474f58u); f_0062fbf0();
    /* 00474f58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474f5b: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 00474f5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474f65: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x474f6au); f_0047bde0();
    /* 00474f6a: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474f6d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00474f6f: jle 0x474f80 */ if ((fZ||fS!=fO)) goto L_00474f80;
L_00474f71:; BB(0x00474f71);
    /* 00474f71: mov dword ptr [0x791300], 0xb */ W32((u32)(0x791300u), 0xbu);
    /* 00474f7b: jmp 0x475001 */ goto L_00475001;
L_00474f80:; BB(0x00474f80);
    /* 00474f80: movzx eax, byte ptr [0x7912ea] */ r_eax = (u32)R8((u32)(0x7912eau));
    /* 00474f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00474f89: je 0x474ff7 */ if (fZ) goto L_00474ff7;
L_00474f8b:; BB(0x00474f8b);
    /* 00474f8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00474f8d: mov cx, word ptr [ebp - 0xa8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff58u))) & 0xffffu);
    /* 00474f94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00474f95: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474f9b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00474f9e: call 0x4f79b0 */ r_esp -= 4; W32(r_esp, 0x474fa3u); f_004f79b0();
    /* 00474fa3: mov esi, eax */ r_esi = r_eax;
    /* 00474fa5: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00474faa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00474fab: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00474fae: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00474fb0: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00474fb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474fb4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474fb9u); f_0062fbf0();
    /* 00474fb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474fbc: mov edi, eax */ r_edi = r_eax;
    /* 00474fbe: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 00474fc3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00474fc4: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00474fc7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00474fc9: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00474fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00474fcd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x474fd2u); f_0062fbf0();
    /* 00474fd2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00474fd5: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 00474fd9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00474fdf: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x474fe4u); f_0047bce0();
    /* 00474fe4: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00474fe7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00474fe9: jge 0x474ff7 */ if ((fS==fO)) goto L_00474ff7;
L_00474feb:; BB(0x00474feb);
    /* 00474feb: mov dword ptr [0x791300], 0xa */ W32((u32)(0x791300u), 0xau);
    /* 00474ff5: jmp 0x475001 */ goto L_00475001;
L_00474ff7:; BB(0x00474ff7);
    /* 00474ff7: mov dword ptr [0x791300], 8 */ W32((u32)(0x791300u), 0x8u);
L_00475001:; BB(0x00475001);
    /* 00475001: movsx edx, word ptr [ebp - 0xa8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff58u));
    /* 00475008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475009: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047500f: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x475014u); f_0047e490();
    /* 00475014: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
L_00475019:; BB(0x00475019);
    /* 00475019: mov byte ptr [0x7912ea], 0 */ W8((u32)(0x7912eau), 0x0u);
    /* 00475020: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00475022: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475028: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047502a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475030: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00475033: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x475035u); call_ind(t); }
    /* 00475035: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00475037: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047503d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047503f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475045: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00475048: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47504au); call_ind(t); }
    /* 0047504a: jmp 0x477253 */ goto L_00477253;
L_0047504f:; BB(0x0047504f);
    /* 0047504f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475055: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00475058: call 0x4f6540 */ r_esp -= 4; W32(r_esp, 0x47505du); f_004f6540();
    /* 0047505d: mov word ptr [0x79132c], ax */ W16((u32)(0x79132cu), (u16)r_eax);
    /* 00475063: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475069: call 0x47d7b0 */ r_esp -= 4; W32(r_esp, 0x47506eu); f_0047d7b0();
    /* 0047506e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475071: jne 0x4750c2 */ if (!fZ) goto L_004750c2;
L_00475073:; BB(0x00475073);
    /* 00475073: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047507a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047507b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475081: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x475086u); f_0047e3d0();
    /* 00475086: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0047508a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047508c: je 0x4750c2 */ if (fZ) goto L_004750c2;
L_0047508e:; BB(0x0047508e);
    /* 0047508e: movsx eax, word ptr [0x79132c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 00475095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475096: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047509c: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4750a1u); f_0047e3d0();
    /* 004750a1: mov ecx, eax */ r_ecx = r_eax;
    /* 004750a3: call 0x4c7360 */ r_esp -= 4; W32(r_esp, 0x4750a8u); f_004c7360();
    /* 004750a8: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004750af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004750b0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004750b6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4750bbu); f_0047e3d0();
    /* 004750bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004750bd: call 0x4c76e0 */ r_esp -= 4; W32(r_esp, 0x4750c2u); f_004c76e0();
L_004750c2:; BB(0x004750c2);
    /* 004750c2: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004750c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004750ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004750d0: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4750d5u); f_0047e3d0();
    /* 004750d5: mov ecx, eax */ r_ecx = r_eax;
    /* 004750d7: call 0x4da360 */ r_esp -= 4; W32(r_esp, 0x4750dcu); f_004da360();
    /* 004750dc: mov word ptr [0x791330], 0 */ W16((u32)(0x791330u), 0x0u);
    /* 004750e5: jmp 0x4750f7 */ goto L_004750f7;
L_004750e7:; BB(0x004750e7);
    /* 004750e7: mov ax, word ptr [0x791330] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x791330u))) & 0xffffu);
    /* 004750ed: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004750f1: mov word ptr [0x791330], ax */ W16((u32)(0x791330u), (u16)r_eax);
L_004750f7:; BB(0x004750f7);
    /* 004750f7: movsx esi, word ptr [0x791330] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 004750fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475104: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x475109u); f_0047f950();
    /* 00475109: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047510b: jge 0x475175 */ if ((fS==fO)) goto L_00475175;
L_0047510d:; BB(0x0047510d);
    /* 0047510d: movsx ecx, word ptr [0x791330] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00475114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475115: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047511b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475120u); f_0047e390();
    /* 00475120: mov ecx, eax */ r_ecx = r_eax;
    /* 00475122: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x475127u); f_004c6cb0();
    /* 00475127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475129: je 0x475170 */ if (fZ) goto L_00475170;
L_0047512b:; BB(0x0047512b);
    /* 0047512b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475131: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x475136u); f_0047e190();
    /* 00475136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475138: jne 0x475170 */ if (!fZ) goto L_00475170;
L_0047513a:; BB(0x0047513a);
    /* 0047513a: mov dx, word ptr [0x791308] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791308u))) & 0xffffu);
    /* 00475141: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475142: movsx eax, word ptr [0x79132c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 00475149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047514a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475150: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x475155u); f_0047e490();
    /* 00475155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475156: movsx ecx, word ptr [0x791330] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 0047515d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047515e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475164: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475169u); f_0047e390();
    /* 00475169: mov ecx, eax */ r_ecx = r_eax;
    /* 0047516b: call 0x4e08e0 */ r_esp -= 4; W32(r_esp, 0x475170u); f_004e08e0();
L_00475170:; BB(0x00475170);
    /* 00475170: jmp 0x4750e7 */ goto L_004750e7;
L_00475175:; BB(0x00475175);
    /* 00475175: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047517b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047517e: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x475183u); f_004f6840();
    /* 00475183: mov esi, eax */ r_esi = r_eax;
    /* 00475185: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047518b: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x475190u); f_0047bc20();
    /* 00475190: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00475193: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00475194: movsx edx, word ptr [0x79132c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047519b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047519c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004751a2: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4751a7u); f_0047e3d0();
    /* 004751a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004751a9: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x4751aeu); f_004c6b80();
    /* 004751ae: movsx eax, word ptr [0x79132c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004751b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004751b6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004751bc: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4751c1u); f_0047e3d0();
    /* 004751c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004751c3: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x4751c8u); f_004da300();
    /* 004751c8: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 004751cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004751d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004751d6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x4751dbu); f_0047e3d0();
    /* 004751db: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004751de: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 004751e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004751e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004751ec: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004751ef: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4751f4u); f_004f6840();
    /* 004751f4: mov esi, eax */ r_esi = r_eax;
    /* 004751f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004751fc: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x475201u); f_0047bc20();
    /* 00475201: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00475204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00475205: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x47520au); f_0064c8a0();
    /* 0047520a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047520d: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 00475213: mov dword ptr [ebp - 0x15c], edx */ W32((u32)(r_ebp+0xfffffea4u), r_edx);
    /* 00475219: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 0047521f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00475222: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 00475228: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047522b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047522e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047522f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00475232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475233: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00475235: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0047523b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047523c: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00475242: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x475247u); f_005e7e40();
    /* 00475247: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047524d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00475250: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x475255u); f_004f6840();
    /* 00475255: mov esi, eax */ r_esi = r_eax;
    /* 00475257: mov edx, dword ptr [0x791308] */ r_edx = R32((u32)(0x791308u));
    /* 0047525d: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0047525f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475260: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x475265u); f_0062fbf0();
    /* 00475265: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475268: mov edi, eax */ r_edi = r_eax;
    /* 0047526a: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 0047526f: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00475271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475272: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x475277u); f_0062fbf0();
    /* 00475277: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047527a: lea edi, [edi + eax + 5] */ r_edi = (u32)(r_edi+r_eax+0x5u);
    /* 0047527e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475284: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x475289u); f_0047bde0();
    /* 00475289: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047528c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047528e: jle 0x47529c */ if ((fZ||fS!=fO)) goto L_0047529c;
L_00475290:; BB(0x00475290);
    /* 00475290: mov dword ptr [0x791300], 0xb */ W32((u32)(0x791300u), 0xbu);
    /* 0047529a: jmp 0x475308 */ goto L_00475308;
L_0047529c:; BB(0x0047529c);
    /* 0047529c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004752a2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004752a5: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4752aau); f_004f6840();
    /* 004752aa: mov esi, eax */ r_esi = r_eax;
    /* 004752ac: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 004752b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004752b2: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004752b5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004752b7: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004752ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004752bb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4752c0u); f_0062fbf0();
    /* 004752c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004752c3: mov edi, eax */ r_edi = r_eax;
    /* 004752c5: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 004752ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004752cb: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004752ce: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004752d0: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004752d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004752d4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4752d9u); f_0062fbf0();
    /* 004752d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004752dc: lea edi, [edi + eax + 3] */ r_edi = (u32)(r_edi+r_eax+0x3u);
    /* 004752e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004752e6: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x4752ebu); f_0047bce0();
    /* 004752eb: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004752ee: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004752f0: jge 0x4752fe */ if ((fS==fO)) goto L_004752fe;
L_004752f2:; BB(0x004752f2);
    /* 004752f2: mov dword ptr [0x791300], 0xa */ W32((u32)(0x791300u), 0xau);
    /* 004752fc: jmp 0x475308 */ goto L_00475308;
L_004752fe:; BB(0x004752fe);
    /* 004752fe: mov dword ptr [0x791300], 0xc */ W32((u32)(0x791300u), 0xcu);
L_00475308:; BB(0x00475308);
    /* 00475308: movsx ecx, word ptr [0x79132c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79132cu));
    /* 0047530f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475310: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475316: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x47531bu); f_0047e490();
    /* 0047531b: mov dword ptr [0x791304], eax */ W32((u32)(0x791304u), r_eax);
    /* 00475320: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00475322: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475328: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047532a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475330: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00475333: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x475335u); call_ind(t); }
    /* 00475335: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00475337: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047533d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047533f: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475345: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00475348: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47534au); call_ind(t); }
    /* 0047534a: jmp 0x477253 */ goto L_00477253;
L_0047534f:; BB(0x0047534f);
    /* 0047534f: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00475355: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47535au); f_005da7b0();
    /* 0047535a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0047535d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047535f: je 0x475487 */ if (fZ) goto L_00475487;
L_00475365:; BB(0x00475365);
    /* 00475365: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0047536b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047536d: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00475373: mov edx, dword ptr [eax + 0x2d4] */ r_edx = R32((u32)(r_eax+0x2d4u));
    /* 00475379: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47537bu); call_ind(t); }
    /* 0047537b: push 0x791328 */ { u32 v = 0x791328u; r_esp -= 4; W32(r_esp, v); }
    /* 00475380: push 0x791324 */ { u32 v = 0x791324u; r_esp -= 4; W32(r_esp, v); }
    /* 00475385: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047538b: call 0x483c30 */ r_esp -= 4; W32(r_esp, 0x475390u); f_00483c30();
    /* 00475390: mov dword ptr [0x791314], eax */ W32((u32)(0x791314u), r_eax);
    /* 00475395: cmp dword ptr [0x791314], 0 */ {  u32 a = R32((u32)(0x791314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047539c: jl 0x4753d8 */ if ((fS!=fO)) goto L_004753d8;
L_0047539e:; BB(0x0047539e);
    /* 0047539e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004753a4: call 0x47aaa0 */ r_esp -= 4; W32(r_esp, 0x4753a9u); f_0047aaa0();
    /* 004753a9: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 004753ab: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 004753b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004753b3: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004753b9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004753bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4753beu); call_ind(t); }
    /* 004753be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004753c0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004753c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004753c8: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004753ce: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004753d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4753d3u); call_ind(t); }
    /* 004753d3: jmp 0x477253 */ goto L_00477253;
L_004753d8:; BB(0x004753d8);
    /* 004753d8: mov ecx, dword ptr [0x791304] */ r_ecx = R32((u32)(0x791304u));
    /* 004753de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004753df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004753e5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4753eau); f_0047e390();
    /* 004753ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004753ec: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4753f1u); f_004c6cb0();
    /* 004753f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004753f4: jne 0x475487 */ if (!fZ) goto L_00475487;
L_004753fa:; BB(0x004753fa);
    /* 004753fa: cmp dword ptr [0x791300], 8 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475401: je 0x475439 */ if (fZ) goto L_00475439;
L_00475403:; BB(0x00475403);
    /* 00475403: cmp dword ptr [0x791300], 0xa */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047540a: je 0x475439 */ if (fZ) goto L_00475439;
L_0047540c:; BB(0x0047540c);
    /* 0047540c: cmp dword ptr [0x791300], 0xb */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475413: je 0x475439 */ if (fZ) goto L_00475439;
L_00475415:; BB(0x00475415);
    /* 00475415: cmp dword ptr [0x791300], 0xc */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047541c: je 0x475439 */ if (fZ) goto L_00475439;
L_0047541e:; BB(0x0047541e);
    /* 0047541e: cmp dword ptr [0x791300], 0xd */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475425: je 0x475439 */ if (fZ) goto L_00475439;
L_00475427:; BB(0x00475427);
    /* 00475427: cmp dword ptr [0x791300], 0xe */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047542e: je 0x475439 */ if (fZ) goto L_00475439;
L_00475430:; BB(0x00475430);
    /* 00475430: cmp dword ptr [0x791300], 0xf */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475437: jne 0x475487 */ if (!fZ) goto L_00475487;
L_00475439:; BB(0x00475439);
    /* 00475439: lea edx, [ebp - 0xc8] */ r_edx = (u32)(r_ebp+0xffffff38u);
    /* 0047543f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475440: lea eax, [ebp - 0xcc] */ r_eax = (u32)(r_ebp+0xffffff34u);
    /* 00475446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475447: mov cx, word ptr [0x791304] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791304u))) & 0xffffu);
    /* 0047544e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047544f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475455: call 0x483a70 */ r_esp -= 4; W32(r_esp, 0x47545au); f_00483a70();
    /* 0047545a: movsx edx, word ptr [ebp - 0xcc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff34u));
    /* 00475461: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475464: jne 0x475487 */ if (!fZ) goto L_00475487;
L_00475466:; BB(0x00475466);
    /* 00475466: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047546d: jge 0x475487 */ if ((fS==fO)) goto L_00475487;
L_0047546f:; BB(0x0047546f);
    /* 0047546f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00475471: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x475476u); f_0062fbf0();
    /* 00475476: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475479: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047547b: jne 0x475487 */ if (!fZ) goto L_00475487;
L_0047547d:; BB(0x0047547d);
    /* 0047547d: mov dword ptr [0x791300], 9 */ W32((u32)(0x791300u), 0x9u);
L_00475487:; BB(0x00475487);
    /* 00475487: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00475489: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047548f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00475491: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475497: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047549a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47549cu); call_ind(t); }
    /* 0047549c: cmp dword ptr [0x791300], 0 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004754a3: jne 0x4754bf */ if (!fZ) goto L_004754bf;
L_004754a5:; BB(0x004754a5);
    /* 004754a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004754a7: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004754ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004754af: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004754b5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004754b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4754bau); call_ind(t); }
    /* 004754ba: jmp 0x477035 */ goto L_00477035;
L_004754bf:; BB(0x004754bf);
    /* 004754bf: cmp dword ptr [0x791300], 9 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004754c6: jne 0x4754ea */ if (!fZ) goto L_004754ea;
L_004754c8:; BB(0x004754c8);
    /* 004754c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004754cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004754cc: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 004754d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004754d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004754d9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4754deu); f_0047e390();
    /* 004754de: mov ecx, eax */ r_ecx = r_eax;
    /* 004754e0: call 0x4cd3a0 */ r_esp -= 4; W32(r_esp, 0x4754e5u); f_004cd3a0();
    /* 004754e5: jmp 0x477035 */ goto L_00477035;
L_004754ea:; BB(0x004754ea);
    /* 004754ea: mov eax, dword ptr [0x791304] */ r_eax = R32((u32)(0x791304u));
    /* 004754ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004754f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004754f6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4754fbu); f_0047e390();
    /* 004754fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004754fd: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x475502u); f_004c6cb0();
    /* 00475502: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475505: jne 0x475a5c */ if (!fZ) goto L_00475a5c;
L_0047550b:; BB(0x0047550b);
    /* 0047550b: cmp dword ptr [0x791300], 8 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475512: jne 0x475692 */ if (!fZ) goto L_00475692;
L_00475518:; BB(0x00475518);
    /* 00475518: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 0047551e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047551f: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 00475525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475526: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047552c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475531u); f_0047e390();
    /* 00475531: mov ecx, eax */ r_ecx = r_eax;
    /* 00475533: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x475538u); f_004c7c40();
    /* 00475538: mov dword ptr [ebp - 0x2b0], eax */ W32((u32)(r_ebp+0xfffffd50u), r_eax);
    /* 0047553e: mov eax, dword ptr [ebp - 0x2b0] */ r_eax = R32((u32)(r_ebp+0xfffffd50u));
    /* 00475544: mov dword ptr [ebp - 0x2b4], eax */ W32((u32)(r_ebp+0xfffffd4cu), r_eax);
    /* 0047554a: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00475551: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475557: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0047555a: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 00475560: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475564: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475566: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475568: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047556a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047556c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047556e: lea edx, [ebp - 0x170] */ r_edx = (u32)(r_ebp+0xfffffe90u);
    /* 00475574: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475575: mov ecx, dword ptr [ebp - 0x2b4] */ r_ecx = R32((u32)(r_ebp+0xfffffd4cu));
    /* 0047557b: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x475580u); f_00485940();
    /* 00475580: mov dword ptr [ebp - 0x2b8], eax */ W32((u32)(r_ebp+0xfffffd48u), r_eax);
    /* 00475586: mov eax, dword ptr [ebp - 0x2b8] */ r_eax = R32((u32)(r_ebp+0xfffffd48u));
    /* 0047558c: mov dword ptr [ebp - 0x2bc], eax */ W32((u32)(r_ebp+0xfffffd44u), r_eax);
    /* 00475592: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00475599: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047559f: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004755a2: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 004755a8: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 004755ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004755af: lea eax, [ebp - 0x171] */ r_eax = (u32)(r_ebp+0xfffffe8fu);
    /* 004755b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004755b6: mov ecx, dword ptr [ebp - 0x2bc] */ r_ecx = R32((u32)(r_ebp+0xfffffd44u));
    /* 004755bc: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4755c1u); f_004a2160();
    /* 004755c1: mov ecx, eax */ r_ecx = r_eax;
    /* 004755c3: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4755c8u); f_004a1f00();
    /* 004755c8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004755cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004755cd: je 0x4755e9 */ if (fZ) goto L_004755e9;
L_004755cf:; BB(0x004755cf);
    /* 004755cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004755d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4755d6u); f_0062fbf0();
    /* 004755d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004755d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004755db: jne 0x4755e9 */ if (!fZ) goto L_004755e9;
L_004755dd:; BB(0x004755dd);
    /* 004755dd: mov dword ptr [ebp - 0x2c0], 1 */ W32((u32)(r_ebp+0xfffffd40u), 0x1u);
    /* 004755e7: jmp 0x4755f3 */ goto L_004755f3;
L_004755e9:; BB(0x004755e9);
    /* 004755e9: mov dword ptr [ebp - 0x2c0], 0 */ W32((u32)(r_ebp+0xfffffd40u), 0x0u);
L_004755f3:; BB(0x004755f3);
    /* 004755f3: mov dl, byte ptr [ebp - 0x2c0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd40u))) & 0xffu);
    /* 004755f9: mov byte ptr [ebp - 0x161], dl */ W8((u32)(r_ebp+0xfffffe9fu), (u8)r_edx);
    /* 004755ff: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00475606: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047560c: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047560f: je 0x475623 */ if (fZ) goto L_00475623;
L_00475611:; BB(0x00475611);
    /* 00475611: and dword ptr [ebp - 0x258], 0xfffffffd */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00475618: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 0047561e: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x475623u); f_004a20f0();
L_00475623:; BB(0x00475623);
    /* 00475623: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047562a: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475630: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00475633: je 0x475647 */ if (fZ) goto L_00475647;
L_00475635:; BB(0x00475635);
    /* 00475635: and dword ptr [ebp - 0x258], 0xfffffffe */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0047563c: lea ecx, [ebp - 0x16c] */ r_ecx = (u32)(r_ebp+0xfffffe94u);
    /* 00475642: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x475647u); f_00484470();
L_00475647:; BB(0x00475647);
    /* 00475647: movzx edx, byte ptr [ebp - 0x161] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe9fu));
    /* 0047564e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475650: je 0x475671 */ if (fZ) goto L_00475671;
L_00475652:; BB(0x00475652);
    /* 00475652: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00475655: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475656: mov ecx, dword ptr [0x791304] */ r_ecx = R32((u32)(0x791304u));
    /* 0047565c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047565d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475663: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475668u); f_0047e390();
    /* 00475668: mov ecx, eax */ r_ecx = r_eax;
    /* 0047566a: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x47566fu); f_004ccba0();
    /* 0047566f: jmp 0x47568d */ goto L_0047568d;
L_00475671:; BB(0x00475671);
    /* 00475671: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00475674: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475675: mov eax, dword ptr [0x791304] */ r_eax = R32((u32)(0x791304u));
    /* 0047567a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047567b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475681: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475686u); f_0047e390();
    /* 00475686: mov ecx, eax */ r_ecx = r_eax;
    /* 00475688: call 0x4ccb20 */ r_esp -= 4; W32(r_esp, 0x47568du); f_004ccb20();
L_0047568d:; BB(0x0047568d);
    /* 0047568d: jmp 0x475a57 */ goto L_00475a57;
L_00475692:; BB(0x00475692);
    /* 00475692: cmp dword ptr [0x791300], 0xb */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475699: jne 0x475819 */ if (!fZ) goto L_00475819;
L_0047569f:; BB(0x0047569f);
    /* 0047569f: lea ecx, [ebp - 0x17c] */ r_ecx = (u32)(r_ebp+0xfffffe84u);
    /* 004756a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004756a6: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 004756ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004756ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004756b3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4756b8u); f_0047e390();
    /* 004756b8: mov ecx, eax */ r_ecx = r_eax;
    /* 004756ba: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4756bfu); f_004c7c40();
    /* 004756bf: mov dword ptr [ebp - 0x2c4], eax */ W32((u32)(r_ebp+0xfffffd3cu), r_eax);
    /* 004756c5: mov eax, dword ptr [ebp - 0x2c4] */ r_eax = R32((u32)(r_ebp+0xfffffd3cu));
    /* 004756cb: mov dword ptr [ebp - 0x2c8], eax */ W32((u32)(r_ebp+0xfffffd38u), r_eax);
    /* 004756d1: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 004756d8: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004756de: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004756e1: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 004756e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004756e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004756eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004756ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004756ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004756f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004756f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004756f5: lea edx, [ebp - 0x180] */ r_edx = (u32)(r_ebp+0xfffffe80u);
    /* 004756fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004756fc: mov ecx, dword ptr [ebp - 0x2c8] */ r_ecx = R32((u32)(r_ebp+0xfffffd38u));
    /* 00475702: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x475707u); f_00485940();
    /* 00475707: mov dword ptr [ebp - 0x2cc], eax */ W32((u32)(r_ebp+0xfffffd34u), r_eax);
    /* 0047570d: mov eax, dword ptr [ebp - 0x2cc] */ r_eax = R32((u32)(r_ebp+0xfffffd34u));
    /* 00475713: mov dword ptr [ebp - 0x2d0], eax */ W32((u32)(r_ebp+0xfffffd30u), r_eax);
    /* 00475719: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00475720: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475726: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00475729: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 0047572f: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 00475735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475736: lea eax, [ebp - 0x181] */ r_eax = (u32)(r_ebp+0xfffffe7fu);
    /* 0047573c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047573d: mov ecx, dword ptr [ebp - 0x2d0] */ r_ecx = R32((u32)(r_ebp+0xfffffd30u));
    /* 00475743: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x475748u); f_004a2160();
    /* 00475748: mov ecx, eax */ r_ecx = r_eax;
    /* 0047574a: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x47574fu); f_004a1f00();
    /* 0047574f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00475752: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475754: je 0x475770 */ if (fZ) goto L_00475770;
L_00475756:; BB(0x00475756);
    /* 00475756: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00475758: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47575du); f_0062fbf0();
    /* 0047575d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475762: jne 0x475770 */ if (!fZ) goto L_00475770;
L_00475764:; BB(0x00475764);
    /* 00475764: mov dword ptr [ebp - 0x2d4], 1 */ W32((u32)(r_ebp+0xfffffd2cu), 0x1u);
    /* 0047576e: jmp 0x47577a */ goto L_0047577a;
L_00475770:; BB(0x00475770);
    /* 00475770: mov dword ptr [ebp - 0x2d4], 0 */ W32((u32)(r_ebp+0xfffffd2cu), 0x0u);
L_0047577a:; BB(0x0047577a);
    /* 0047577a: mov dl, byte ptr [ebp - 0x2d4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd2cu))) & 0xffu);
    /* 00475780: mov byte ptr [ebp - 0x172], dl */ W8((u32)(r_ebp+0xfffffe8eu), (u8)r_edx);
    /* 00475786: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0047578d: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475793: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00475796: je 0x4757aa */ if (fZ) goto L_004757aa;
L_00475798:; BB(0x00475798);
    /* 00475798: and dword ptr [ebp - 0x258], 0xfffffff7 */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0047579f: lea ecx, [ebp - 0x180] */ r_ecx = (u32)(r_ebp+0xfffffe80u);
    /* 004757a5: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4757aau); f_004a20f0();
L_004757aa:; BB(0x004757aa);
    /* 004757aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004757b1: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004757b7: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004757ba: je 0x4757ce */ if (fZ) goto L_004757ce;
L_004757bc:; BB(0x004757bc);
    /* 004757bc: and dword ptr [ebp - 0x258], 0xfffffffb */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004757c3: lea ecx, [ebp - 0x17c] */ r_ecx = (u32)(r_ebp+0xfffffe84u);
    /* 004757c9: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4757ceu); f_00484470();
L_004757ce:; BB(0x004757ce);
    /* 004757ce: movzx edx, byte ptr [ebp - 0x172] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe8eu));
    /* 004757d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004757d7: je 0x4757f8 */ if (fZ) goto L_004757f8;
L_004757d9:; BB(0x004757d9);
    /* 004757d9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004757dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004757dd: mov ecx, dword ptr [0x791304] */ r_ecx = R32((u32)(0x791304u));
    /* 004757e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004757e4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004757ea: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4757efu); f_0047e390();
    /* 004757ef: mov ecx, eax */ r_ecx = r_eax;
    /* 004757f1: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x4757f6u); f_004ccba0();
    /* 004757f6: jmp 0x475814 */ goto L_00475814;
L_004757f8:; BB(0x004757f8);
    /* 004757f8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004757fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004757fc: mov eax, dword ptr [0x791304] */ r_eax = R32((u32)(0x791304u));
    /* 00475801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475802: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475808: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47580du); f_0047e390();
    /* 0047580d: mov ecx, eax */ r_ecx = r_eax;
    /* 0047580f: call 0x4ccc20 */ r_esp -= 4; W32(r_esp, 0x475814u); f_004ccc20();
L_00475814:; BB(0x00475814);
    /* 00475814: jmp 0x475a57 */ goto L_00475a57;
L_00475819:; BB(0x00475819);
    /* 00475819: cmp dword ptr [0x791300], 0xa */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475820: jne 0x4759a0 */ if (!fZ) goto L_004759a0;
L_00475826:; BB(0x00475826);
    /* 00475826: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 0047582c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047582d: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 00475833: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475834: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047583a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47583fu); f_0047e390();
    /* 0047583f: mov ecx, eax */ r_ecx = r_eax;
    /* 00475841: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x475846u); f_004c7c40();
    /* 00475846: mov dword ptr [ebp - 0x2d8], eax */ W32((u32)(r_ebp+0xfffffd28u), r_eax);
    /* 0047584c: mov eax, dword ptr [ebp - 0x2d8] */ r_eax = R32((u32)(r_ebp+0xfffffd28u));
    /* 00475852: mov dword ptr [ebp - 0x2dc], eax */ W32((u32)(r_ebp+0xfffffd24u), r_eax);
    /* 00475858: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0047585f: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475865: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00475868: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 0047586e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475870: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475874: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475876: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475878: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047587a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047587c: lea edx, [ebp - 0x190] */ r_edx = (u32)(r_ebp+0xfffffe70u);
    /* 00475882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475883: mov ecx, dword ptr [ebp - 0x2dc] */ r_ecx = R32((u32)(r_ebp+0xfffffd24u));
    /* 00475889: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x47588eu); f_00485940();
    /* 0047588e: mov dword ptr [ebp - 0x2e0], eax */ W32((u32)(r_ebp+0xfffffd20u), r_eax);
    /* 00475894: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0047589a: mov dword ptr [ebp - 0x2e4], eax */ W32((u32)(r_ebp+0xfffffd1cu), r_eax);
    /* 004758a0: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 004758a7: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004758ad: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004758b0: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 004758b6: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 004758bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004758bd: lea eax, [ebp - 0x191] */ r_eax = (u32)(r_ebp+0xfffffe6fu);
    /* 004758c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004758c4: mov ecx, dword ptr [ebp - 0x2e4] */ r_ecx = R32((u32)(r_ebp+0xfffffd1cu));
    /* 004758ca: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4758cfu); f_004a2160();
    /* 004758cf: mov ecx, eax */ r_ecx = r_eax;
    /* 004758d1: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4758d6u); f_004a1f00();
    /* 004758d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004758d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004758db: je 0x4758f7 */ if (fZ) goto L_004758f7;
L_004758dd:; BB(0x004758dd);
    /* 004758dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004758df: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4758e4u); f_0062fbf0();
    /* 004758e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004758e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004758e9: jne 0x4758f7 */ if (!fZ) goto L_004758f7;
L_004758eb:; BB(0x004758eb);
    /* 004758eb: mov dword ptr [ebp - 0x2e8], 1 */ W32((u32)(r_ebp+0xfffffd18u), 0x1u);
    /* 004758f5: jmp 0x475901 */ goto L_00475901;
L_004758f7:; BB(0x004758f7);
    /* 004758f7: mov dword ptr [ebp - 0x2e8], 0 */ W32((u32)(r_ebp+0xfffffd18u), 0x0u);
L_00475901:; BB(0x00475901);
    /* 00475901: mov dl, byte ptr [ebp - 0x2e8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffd18u))) & 0xffu);
    /* 00475907: mov byte ptr [ebp - 0x182], dl */ W8((u32)(r_ebp+0xfffffe7eu), (u8)r_edx);
    /* 0047590d: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 00475914: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047591a: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047591d: je 0x475931 */ if (fZ) goto L_00475931;
L_0047591f:; BB(0x0047591f);
    /* 0047591f: and dword ptr [ebp - 0x258], 0xffffffdf */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00475926: lea ecx, [ebp - 0x190] */ r_ecx = (u32)(r_ebp+0xfffffe70u);
    /* 0047592c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x475931u); f_004a20f0();
L_00475931:; BB(0x00475931);
    /* 00475931: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00475938: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047593e: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00475941: je 0x475955 */ if (fZ) goto L_00475955;
L_00475943:; BB(0x00475943);
    /* 00475943: and dword ptr [ebp - 0x258], 0xffffffef */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0047594a: lea ecx, [ebp - 0x18c] */ r_ecx = (u32)(r_ebp+0xfffffe74u);
    /* 00475950: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x475955u); f_00484470();
L_00475955:; BB(0x00475955);
    /* 00475955: movzx edx, byte ptr [ebp - 0x182] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe7eu));
    /* 0047595c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047595e: je 0x47597f */ if (fZ) goto L_0047597f;
L_00475960:; BB(0x00475960);
    /* 00475960: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00475963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475964: mov ecx, dword ptr [0x791304] */ r_ecx = R32((u32)(0x791304u));
    /* 0047596a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047596b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475971: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475976u); f_0047e390();
    /* 00475976: mov ecx, eax */ r_ecx = r_eax;
    /* 00475978: call 0x4ccba0 */ r_esp -= 4; W32(r_esp, 0x47597du); f_004ccba0();
    /* 0047597d: jmp 0x47599b */ goto L_0047599b;
L_0047597f:; BB(0x0047597f);
    /* 0047597f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00475982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475983: mov eax, dword ptr [0x791304] */ r_eax = R32((u32)(0x791304u));
    /* 00475988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475989: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047598f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475994u); f_0047e390();
    /* 00475994: mov ecx, eax */ r_ecx = r_eax;
    /* 00475996: call 0x4ccbe0 */ r_esp -= 4; W32(r_esp, 0x47599bu); f_004ccbe0();
L_0047599b:; BB(0x0047599b);
    /* 0047599b: jmp 0x475a57 */ goto L_00475a57;
L_004759a0:; BB(0x004759a0);
    /* 004759a0: cmp dword ptr [0x791300], 0xc */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004759a7: jne 0x4759cb */ if (!fZ) goto L_004759cb;
L_004759a9:; BB(0x004759a9);
    /* 004759a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004759ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004759ad: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 004759b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004759b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004759ba: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4759bfu); f_0047e390();
    /* 004759bf: mov ecx, eax */ r_ecx = r_eax;
    /* 004759c1: call 0x4ccb60 */ r_esp -= 4; W32(r_esp, 0x4759c6u); f_004ccb60();
    /* 004759c6: jmp 0x475a57 */ goto L_00475a57;
L_004759cb:; BB(0x004759cb);
    /* 004759cb: cmp dword ptr [0x791300], 0xd */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004759d2: jne 0x4759f3 */ if (!fZ) goto L_004759f3;
L_004759d4:; BB(0x004759d4);
    /* 004759d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004759d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004759d8: mov ecx, dword ptr [0x791304] */ r_ecx = R32((u32)(0x791304u));
    /* 004759de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004759df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004759e5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4759eau); f_0047e390();
    /* 004759ea: mov ecx, eax */ r_ecx = r_eax;
    /* 004759ec: call 0x4ccde0 */ r_esp -= 4; W32(r_esp, 0x4759f1u); f_004ccde0();
    /* 004759f1: jmp 0x475a57 */ goto L_00475a57;
L_004759f3:; BB(0x004759f3);
    /* 004759f3: cmp dword ptr [0x791300], 0xf */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004759fa: jne 0x475a1a */ if (!fZ) goto L_00475a1a;
L_004759fc:; BB(0x004759fc);
    /* 004759fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004759ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475a00: mov eax, dword ptr [0x791304] */ r_eax = R32((u32)(0x791304u));
    /* 00475a05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475a06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475a0c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475a11u); f_0047e390();
    /* 00475a11: mov ecx, eax */ r_ecx = r_eax;
    /* 00475a13: call 0x4ccf80 */ r_esp -= 4; W32(r_esp, 0x475a18u); f_004ccf80();
    /* 00475a18: jmp 0x475a57 */ goto L_00475a57;
L_00475a1a:; BB(0x00475a1a);
    /* 00475a1a: cmp dword ptr [0x791300], 0xe */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475a21: jne 0x475a42 */ if (!fZ) goto L_00475a42;
L_00475a23:; BB(0x00475a23);
    /* 00475a23: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00475a26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475a27: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 00475a2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475a2e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475a34: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475a39u); f_0047e390();
    /* 00475a39: mov ecx, eax */ r_ecx = r_eax;
    /* 00475a3b: call 0x4ccfc0 */ r_esp -= 4; W32(r_esp, 0x475a40u); f_004ccfc0();
    /* 00475a40: jmp 0x475a57 */ goto L_00475a57;
L_00475a42:; BB(0x00475a42);
    /* 00475a42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475a44: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475a4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00475a4c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00475a52: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00475a55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x475a57u); call_ind(t); }
L_00475a57:; BB(0x00475a57);
    /* 00475a57: jmp 0x477035 */ goto L_00477035;
L_00475a5c:; BB(0x00475a5c);
    /* 00475a5c: mov ecx, dword ptr [0x791304] */ r_ecx = R32((u32)(0x791304u));
    /* 00475a62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475a63: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475a69: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475a6eu); f_0047e390();
    /* 00475a6e: mov ecx, eax */ r_ecx = r_eax;
    /* 00475a70: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x475a75u); f_004c6cb0();
    /* 00475a75: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475a78: jne 0x477020 */ if (!fZ) goto L_00477020;
L_00475a7e:; BB(0x00475a7e);
    /* 00475a7e: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 00475a88: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 00475a92: mov word ptr [0x791330], 0 */ W16((u32)(0x791330u), 0x0u);
    /* 00475a9b: jmp 0x475aaf */ goto L_00475aaf;
L_00475a9d:; BB(0x00475a9d);
    /* 00475a9d: mov dx, word ptr [0x791330] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x791330u))) & 0xffffu);
    /* 00475aa4: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00475aa8: mov word ptr [0x791330], dx */ W16((u32)(0x791330u), (u16)r_edx);
L_00475aaf:; BB(0x00475aaf);
    /* 00475aaf: movsx esi, word ptr [0x791330] */ r_esi = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00475ab6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475abc: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x475ac1u); f_0047f950();
    /* 00475ac1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475ac3: jge 0x475b26 */ if ((fS==fO)) goto L_00475b26;
L_00475ac5:; BB(0x00475ac5);
    /* 00475ac5: movsx eax, word ptr [0x791330] */ r_eax = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00475acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475acd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475ad3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475ad8u); f_0047e390();
    /* 00475ad8: mov ecx, eax */ r_ecx = r_eax;
    /* 00475ada: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x475adfu); f_004c6cb0();
    /* 00475adf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475ae2: jne 0x475b21 */ if (!fZ) goto L_00475b21;
L_00475ae4:; BB(0x00475ae4);
    /* 00475ae4: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00475aea: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00475aed: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 00475af3: movsx edx, word ptr [0x791330] */ r_edx = (u32)(i32)(i16)R16((u32)(0x791330u));
    /* 00475afa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475afb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475b01: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475b06u); f_0047e390();
    /* 00475b06: mov ecx, eax */ r_ecx = r_eax;
    /* 00475b08: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x475b0du); f_004c7010();
    /* 00475b0d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475b10: jne 0x475b21 */ if (!fZ) goto L_00475b21;
L_00475b12:; BB(0x00475b12);
    /* 00475b12: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 00475b18: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00475b1b: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
L_00475b21:; BB(0x00475b21);
    /* 00475b21: jmp 0x475a9d */ goto L_00475a9d;
L_00475b26:; BB(0x00475b26);
    /* 00475b26: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 00475b2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475b2d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x475b32u); f_0062fbf0();
    /* 00475b32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475b35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00475b38: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00475b3e: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 00475b48: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00475b52:; BB(0x00475b52);
    /* 00475b52: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475b58: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x475b5du); f_0047f950();
    /* 00475b5d: cmp dword ptr [ebp - 0xd4], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475b63: jge 0x475c0a */ if ((fS==fO)) goto L_00475c0a;
L_00475b69:; BB(0x00475b69);
    /* 00475b69: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00475b6f: cmp edx, dword ptr [ebp - 0xe4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475b75: jge 0x475c0a */ if ((fS==fO)) goto L_00475c0a;
L_00475b7b:; BB(0x00475b7b);
    /* 00475b7b: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475b81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475b82: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475b88: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475b8du); f_0047e390();
    /* 00475b8d: mov ecx, eax */ r_ecx = r_eax;
    /* 00475b8f: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x475b94u); f_004c6cb0();
    /* 00475b94: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475b97: jne 0x475bf6 */ if (!fZ) goto L_00475bf6;
L_00475b99:; BB(0x00475b99);
    /* 00475b99: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475b9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475ba0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475ba6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475babu); f_0047e390();
    /* 00475bab: mov ecx, eax */ r_ecx = r_eax;
    /* 00475bad: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x475bb2u); f_004c7010();
    /* 00475bb2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475bb5: jne 0x475be5 */ if (!fZ) goto L_00475be5;
L_00475bb7:; BB(0x00475bb7);
    /* 00475bb7: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00475bbd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00475bc0: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00475bc6: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00475bcc: cmp eax, dword ptr [ebp - 0xe4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475bd2: jge 0x475be3 */ if ((fS==fO)) goto L_00475be3;
L_00475bd4:; BB(0x00475bd4);
    /* 00475bd4: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475bda: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00475bdd: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
L_00475be3:; BB(0x00475be3);
    /* 00475be3: jmp 0x475bf4 */ goto L_00475bf4;
L_00475be5:; BB(0x00475be5);
    /* 00475be5: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475beb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00475bee: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
L_00475bf4:; BB(0x00475bf4);
    /* 00475bf4: jmp 0x475c05 */ goto L_00475c05;
L_00475bf6:; BB(0x00475bf6);
    /* 00475bf6: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475bfc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00475bff: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
L_00475c05:; BB(0x00475c05);
    /* 00475c05: jmp 0x475b52 */ goto L_00475b52;
L_00475c0a:; BB(0x00475c0a);
    /* 00475c0a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475c10: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x475c15u); f_0047f950();
    /* 00475c15: cmp dword ptr [ebp - 0xd4], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475c1b: jge 0x475c6e */ if ((fS==fO)) goto L_00475c6e;
L_00475c1d:; BB(0x00475c1d);
    /* 00475c1d: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475c23: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 00475c29: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00475c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475c30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475c36: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475c3bu); f_0047e390();
    /* 00475c3b: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00475c41: cmp dword ptr [ebp - 0xf0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475c48: je 0x475c6c */ if (fZ) goto L_00475c6c;
L_00475c4a:; BB(0x00475c4a);
    /* 00475c4a: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00475c50: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00475c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475c54: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x475c59u); f_005dcb00();
    /* 00475c59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475c5c: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475c60: je 0x475c6c */ if (fZ) goto L_00475c6c;
L_00475c62:; BB(0x00475c62);
    /* 00475c62: mov dword ptr [ebp - 0xd8], 0xffffffff */ W32((u32)(r_ebp+0xffffff28u), 0xffffffffu);
L_00475c6c:; BB(0x00475c6c);
    /* 00475c6c: jmp 0x475c78 */ goto L_00475c78;
L_00475c6e:; BB(0x00475c6e);
    /* 00475c6e: mov dword ptr [ebp - 0xd8], 0xffffffff */ W32((u32)(r_ebp+0xffffff28u), 0xffffffffu);
L_00475c78:; BB(0x00475c78);
    /* 00475c78: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00475c7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475c7f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x475c84u); f_0062fbf0();
    /* 00475c84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475c87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00475c8a: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00475c90: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 00475c9a: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00475ca4:; BB(0x00475ca4);
    /* 00475ca4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475caa: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x475cafu); f_0047f950();
    /* 00475caf: cmp dword ptr [ebp - 0xd4], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475cb5: jge 0x475d22 */ if ((fS==fO)) goto L_00475d22;
L_00475cb7:; BB(0x00475cb7);
    /* 00475cb7: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00475cbd: cmp eax, dword ptr [ebp - 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475cc3: jge 0x475d22 */ if ((fS==fO)) goto L_00475d22;
L_00475cc5:; BB(0x00475cc5);
    /* 00475cc5: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475ccb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475ccc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475cd2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475cd7u); f_0047e390();
    /* 00475cd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00475cd9: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x475cdeu); f_004c6cb0();
    /* 00475cde: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475ce1: jne 0x475d11 */ if (!fZ) goto L_00475d11;
L_00475ce3:; BB(0x00475ce3);
    /* 00475ce3: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00475ce9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00475cec: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00475cf2: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00475cf8: cmp eax, dword ptr [ebp - 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475cfe: jge 0x475d0f */ if ((fS==fO)) goto L_00475d0f;
L_00475d00:; BB(0x00475d00);
    /* 00475d00: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475d06: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00475d09: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
L_00475d0f:; BB(0x00475d0f);
    /* 00475d0f: jmp 0x475d20 */ goto L_00475d20;
L_00475d11:; BB(0x00475d11);
    /* 00475d11: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475d17: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00475d1a: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
L_00475d20:; BB(0x00475d20);
    /* 00475d20: jmp 0x475ca4 */ goto L_00475ca4;
L_00475d22:; BB(0x00475d22);
    /* 00475d22: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 00475d2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475d32: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x475d37u); f_0047f950();
    /* 00475d37: cmp dword ptr [ebp - 0xd4], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475d3d: jge 0x475d4d */ if ((fS==fO)) goto L_00475d4d;
L_00475d3f:; BB(0x00475d3f);
    /* 00475d3f: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00475d45: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00475d4b: jmp 0x475d57 */ goto L_00475d57;
L_00475d4d:; BB(0x00475d4d);
    /* 00475d4d: mov dword ptr [0x791300], 0 */ W32((u32)(0x791300u), 0x0u);
L_00475d57:; BB(0x00475d57);
    /* 00475d57: cmp dword ptr [0x791300], 8 */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475d5e: jne 0x4764c1 */ if (!fZ) goto L_004764c1;
L_00475d64:; BB(0x00475d64);
    /* 00475d64: lea ecx, [ebp - 0x19c] */ r_ecx = (u32)(r_ebp+0xfffffe64u);
    /* 00475d6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475d6b: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 00475d71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475d72: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475d78: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475d7du); f_0047e390();
    /* 00475d7d: mov ecx, eax */ r_ecx = r_eax;
    /* 00475d7f: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x475d84u); f_004c7c40();
    /* 00475d84: mov dword ptr [ebp - 0x2ec], eax */ W32((u32)(r_ebp+0xfffffd14u), r_eax);
    /* 00475d8a: mov eax, dword ptr [ebp - 0x2ec] */ r_eax = R32((u32)(r_ebp+0xfffffd14u));
    /* 00475d90: mov dword ptr [ebp - 0x2f0], eax */ W32((u32)(r_ebp+0xfffffd10u), r_eax);
    /* 00475d96: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 00475d9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475d9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475da1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475da3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475da5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475da7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475da9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475dab: lea ecx, [ebp - 0x1a0] */ r_ecx = (u32)(r_ebp+0xfffffe60u);
    /* 00475db1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475db2: mov ecx, dword ptr [ebp - 0x2f0] */ r_ecx = R32((u32)(r_ebp+0xfffffd10u));
    /* 00475db8: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x475dbdu); f_00485940();
    /* 00475dbd: mov dword ptr [ebp - 0x2f4], eax */ W32((u32)(r_ebp+0xfffffd0cu), r_eax);
    /* 00475dc3: mov edx, dword ptr [ebp - 0x2f4] */ r_edx = R32((u32)(r_ebp+0xfffffd0cu));
    /* 00475dc9: mov dword ptr [ebp - 0x2f8], edx */ W32((u32)(r_ebp+0xfffffd08u), r_edx);
    /* 00475dcf: mov byte ptr [ebp - 4], 0x14 */ W8((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 00475dd3: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 00475dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475dd9: lea ecx, [ebp - 0x1a1] */ r_ecx = (u32)(r_ebp+0xfffffe5fu);
    /* 00475ddf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475de0: mov ecx, dword ptr [ebp - 0x2f8] */ r_ecx = R32((u32)(r_ebp+0xfffffd08u));
    /* 00475de6: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x475debu); f_004a2160();
    /* 00475deb: mov ecx, eax */ r_ecx = r_eax;
    /* 00475ded: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x475df2u); f_004a1f00();
    /* 00475df2: mov byte ptr [ebp - 0x192], al */ W8((u32)(r_ebp+0xfffffe6eu), (u8)r_eax);
    /* 00475df8: mov byte ptr [ebp - 4], 0x13 */ W8((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 00475dfc: lea ecx, [ebp - 0x1a0] */ r_ecx = (u32)(r_ebp+0xfffffe60u);
    /* 00475e02: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x475e07u); f_004a20f0();
    /* 00475e07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00475e0e: lea ecx, [ebp - 0x19c] */ r_ecx = (u32)(r_ebp+0xfffffe64u);
    /* 00475e14: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x475e19u); f_00484470();
    /* 00475e19: movzx edx, byte ptr [ebp - 0x192] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe6eu));
    /* 00475e20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475e22: je 0x476171 */ if (fZ) goto L_00476171;
L_00475e28:; BB(0x00475e28);
    /* 00475e28: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00475e2f: jl 0x47614f */ if ((fS!=fO)) goto L_0047614f;
L_00475e35:; BB(0x00475e35);
    /* 00475e35: lea eax, [ebp - 0x1ac] */ r_eax = (u32)(r_ebp+0xfffffe54u);
    /* 00475e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475e3c: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00475e42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475e43: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475e49: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475e4eu); f_0047e390();
    /* 00475e4e: mov ecx, eax */ r_ecx = r_eax;
    /* 00475e50: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x475e55u); f_004c7c40();
    /* 00475e55: mov dword ptr [ebp - 0x2fc], eax */ W32((u32)(r_ebp+0xfffffd04u), r_eax);
    /* 00475e5b: mov edx, dword ptr [ebp - 0x2fc] */ r_edx = R32((u32)(r_ebp+0xfffffd04u));
    /* 00475e61: mov dword ptr [ebp - 0x300], edx */ W32((u32)(r_ebp+0xfffffd00u), r_edx);
    /* 00475e67: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 00475e6e: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475e74: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00475e77: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00475e7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475e8b: lea ecx, [ebp - 0x1b0] */ r_ecx = (u32)(r_ebp+0xfffffe50u);
    /* 00475e91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475e92: mov ecx, dword ptr [ebp - 0x300] */ r_ecx = R32((u32)(r_ebp+0xfffffd00u));
    /* 00475e98: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x475e9du); f_00485940();
    /* 00475e9d: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 00475ea3: mov edx, dword ptr [ebp - 0x304] */ r_edx = R32((u32)(r_ebp+0xfffffcfcu));
    /* 00475ea9: mov dword ptr [ebp - 0x308], edx */ W32((u32)(r_ebp+0xfffffcf8u), r_edx);
    /* 00475eaf: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 00475eb6: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475ebc: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00475ec1: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00475ec7: mov ecx, dword ptr [0x79140c] */ r_ecx = R32((u32)(0x79140cu));
    /* 00475ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475ece: lea edx, [ebp - 0x1b1] */ r_edx = (u32)(r_ebp+0xfffffe4fu);
    /* 00475ed4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475ed5: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 00475edb: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x475ee0u); f_004a2160();
    /* 00475ee0: mov ecx, eax */ r_ecx = r_eax;
    /* 00475ee2: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x475ee7u); f_004a1f00();
    /* 00475ee7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00475eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475eec: je 0x475f08 */ if (fZ) goto L_00475f08;
L_00475eee:; BB(0x00475eee);
    /* 00475eee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00475ef0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x475ef5u); f_0062fbf0();
    /* 00475ef5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00475ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475efa: jne 0x475f08 */ if (!fZ) goto L_00475f08;
L_00475efc:; BB(0x00475efc);
    /* 00475efc: mov dword ptr [ebp - 0x30c], 1 */ W32((u32)(r_ebp+0xfffffcf4u), 0x1u);
    /* 00475f06: jmp 0x475f12 */ goto L_00475f12;
L_00475f08:; BB(0x00475f08);
    /* 00475f08: mov dword ptr [ebp - 0x30c], 0 */ W32((u32)(r_ebp+0xfffffcf4u), 0x0u);
L_00475f12:; BB(0x00475f12);
    /* 00475f12: mov cl, byte ptr [ebp - 0x30c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcf4u))) & 0xffu);
    /* 00475f18: mov byte ptr [ebp - 0x1a2], cl */ W8((u32)(r_ebp+0xfffffe5eu), (u8)r_ecx);
    /* 00475f1e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 00475f25: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475f2b: and edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00475f31: je 0x475f48 */ if (fZ) goto L_00475f48;
L_00475f33:; BB(0x00475f33);
    /* 00475f33: and dword ptr [ebp - 0x258], 0xffffff7f */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00475f3d: lea ecx, [ebp - 0x1b0] */ r_ecx = (u32)(r_ebp+0xfffffe50u);
    /* 00475f43: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x475f48u); f_004a20f0();
L_00475f48:; BB(0x00475f48);
    /* 00475f48: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00475f4f: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475f55: and eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00475f58: je 0x475f6c */ if (fZ) goto L_00475f6c;
L_00475f5a:; BB(0x00475f5a);
    /* 00475f5a: and dword ptr [ebp - 0x258], 0xffffffbf */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00475f61: lea ecx, [ebp - 0x1ac] */ r_ecx = (u32)(r_ebp+0xfffffe54u);
    /* 00475f67: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x475f6cu); f_00484470();
L_00475f6c:; BB(0x00475f6c);
    /* 00475f6c: movzx ecx, byte ptr [ebp - 0x1a2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe5eu));
    /* 00475f73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00475f75: je 0x475f99 */ if (fZ) goto L_00475f99;
L_00475f77:; BB(0x00475f77);
    /* 00475f77: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00475f7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475f7b: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00475f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00475f82: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475f88: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475f8du); f_0047e390();
    /* 00475f8d: mov ecx, eax */ r_ecx = r_eax;
    /* 00475f8f: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x475f94u); f_004cce00();
    /* 00475f94: jmp 0x47614d */ goto L_0047614d;
L_00475f99:; BB(0x00475f99);
    /* 00475f99: lea ecx, [ebp - 0x1bc] */ r_ecx = (u32)(r_ebp+0xfffffe44u);
    /* 00475f9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00475fa0: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00475fa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475fa7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00475fad: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x475fb2u); f_0047e390();
    /* 00475fb2: mov ecx, eax */ r_ecx = r_eax;
    /* 00475fb4: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x475fb9u); f_004c7c40();
    /* 00475fb9: mov dword ptr [ebp - 0x310], eax */ W32((u32)(r_ebp+0xfffffcf0u), r_eax);
    /* 00475fbf: mov eax, dword ptr [ebp - 0x310] */ r_eax = R32((u32)(r_ebp+0xfffffcf0u));
    /* 00475fc5: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 00475fcb: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 00475fd2: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00475fd8: or ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00475fde: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 00475fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475fe6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475fe8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475fea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475fec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475fee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475ff0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00475ff2: lea edx, [ebp - 0x1c0] */ r_edx = (u32)(r_ebp+0xfffffe40u);
    /* 00475ff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00475ff9: mov ecx, dword ptr [ebp - 0x314] */ r_ecx = R32((u32)(r_ebp+0xfffffcecu));
    /* 00475fff: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476004u); f_00485940();
    /* 00476004: mov dword ptr [ebp - 0x318], eax */ W32((u32)(r_ebp+0xfffffce8u), r_eax);
    /* 0047600a: mov eax, dword ptr [ebp - 0x318] */ r_eax = R32((u32)(r_ebp+0xfffffce8u));
    /* 00476010: mov dword ptr [ebp - 0x31c], eax */ W32((u32)(r_ebp+0xfffffce4u), r_eax);
    /* 00476016: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 0047601d: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476023: or ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00476029: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 0047602f: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00476035: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476036: lea eax, [ebp - 0x1c1] */ r_eax = (u32)(r_ebp+0xfffffe3fu);
    /* 0047603c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047603d: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 00476043: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x476048u); f_004a2160();
    /* 00476048: mov ecx, eax */ r_ecx = r_eax;
    /* 0047604a: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x47604fu); f_004a1e10();
    /* 0047604f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00476052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476054: je 0x476070 */ if (fZ) goto L_00476070;
L_00476056:; BB(0x00476056);
    /* 00476056: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00476058: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47605du); f_0062fbf0();
    /* 0047605d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476062: jne 0x476070 */ if (!fZ) goto L_00476070;
L_00476064:; BB(0x00476064);
    /* 00476064: mov dword ptr [ebp - 0x320], 1 */ W32((u32)(r_ebp+0xfffffce0u), 0x1u);
    /* 0047606e: jmp 0x47607a */ goto L_0047607a;
L_00476070:; BB(0x00476070);
    /* 00476070: mov dword ptr [ebp - 0x320], 0 */ W32((u32)(r_ebp+0xfffffce0u), 0x0u);
L_0047607a:; BB(0x0047607a);
    /* 0047607a: mov dl, byte ptr [ebp - 0x320] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffce0u))) & 0xffu);
    /* 00476080: mov byte ptr [ebp - 0x1b2], dl */ W8((u32)(r_ebp+0xfffffe4eu), (u8)r_edx);
    /* 00476086: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 0047608d: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476093: and eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00476098: je 0x4760af */ if (fZ) goto L_004760af;
L_0047609a:; BB(0x0047609a);
    /* 0047609a: and dword ptr [ebp - 0x258], 0xfffffdff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004760a4: lea ecx, [ebp - 0x1c0] */ r_ecx = (u32)(r_ebp+0xfffffe40u);
    /* 004760aa: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4760afu); f_004a20f0();
L_004760af:; BB(0x004760af);
    /* 004760af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004760b6: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004760bc: and ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004760c2: je 0x4760d9 */ if (fZ) goto L_004760d9;
L_004760c4:; BB(0x004760c4);
    /* 004760c4: and dword ptr [ebp - 0x258], 0xfffffeff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004760ce: lea ecx, [ebp - 0x1bc] */ r_ecx = (u32)(r_ebp+0xfffffe44u);
    /* 004760d4: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4760d9u); f_00484470();
L_004760d9:; BB(0x004760d9);
    /* 004760d9: movzx edx, byte ptr [ebp - 0x1b2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe4eu));
    /* 004760e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004760e2: je 0x476103 */ if (fZ) goto L_00476103;
L_004760e4:; BB(0x004760e4);
    /* 004760e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004760e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004760e8: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 004760ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004760ef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004760f5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4760fau); f_0047e390();
    /* 004760fa: mov ecx, eax */ r_ecx = r_eax;
    /* 004760fc: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x476101u); f_004cce40();
    /* 00476101: jmp 0x47614d */ goto L_0047614d;
L_00476103:; BB(0x00476103);
    /* 00476103: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00476105: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47610au); f_0062fbf0();
    /* 0047610a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047610d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047610f: jne 0x476130 */ if (!fZ) goto L_00476130;
L_00476111:; BB(0x00476111);
    /* 00476111: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476115: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 0047611b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047611c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476122: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476127u); f_0047e390();
    /* 00476127: mov ecx, eax */ r_ecx = r_eax;
    /* 00476129: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x47612eu); f_004ccda0();
    /* 0047612e: jmp 0x47614d */ goto L_0047614d;
L_00476130:; BB(0x00476130);
    /* 00476130: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476134: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 0047613a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047613b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476141: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476146u); f_0047e390();
    /* 00476146: mov ecx, eax */ r_ecx = r_eax;
    /* 00476148: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x47614du); f_004ccce0();
L_0047614d:; BB(0x0047614d);
    /* 0047614d: jmp 0x47616c */ goto L_0047616c;
L_0047614f:; BB(0x0047614f);
    /* 0047614f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476152: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476153: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 00476159: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047615a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476160: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476165u); f_0047e390();
    /* 00476165: mov ecx, eax */ r_ecx = r_eax;
    /* 00476167: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x47616cu); f_004ccce0();
L_0047616c:; BB(0x0047616c);
    /* 0047616c: jmp 0x4764bc */ goto L_004764bc;
L_00476171:; BB(0x00476171);
    /* 00476171: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00476178: jl 0x47649f */ if ((fS!=fO)) goto L_0047649f;
L_0047617e:; BB(0x0047617e);
    /* 0047617e: lea edx, [ebp - 0x1cc] */ r_edx = (u32)(r_ebp+0xfffffe34u);
    /* 00476184: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476185: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 0047618b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047618c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476192: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476197u); f_0047e390();
    /* 00476197: mov ecx, eax */ r_ecx = r_eax;
    /* 00476199: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x47619eu); f_004c7c40();
    /* 0047619e: mov dword ptr [ebp - 0x324], eax */ W32((u32)(r_ebp+0xfffffcdcu), r_eax);
    /* 004761a4: mov ecx, dword ptr [ebp - 0x324] */ r_ecx = R32((u32)(r_ebp+0xfffffcdcu));
    /* 004761aa: mov dword ptr [ebp - 0x328], ecx */ W32((u32)(r_ebp+0xfffffcd8u), r_ecx);
    /* 004761b0: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 004761b7: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004761bd: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004761c3: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 004761c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004761cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004761cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004761cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004761d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004761d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004761d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004761d7: lea eax, [ebp - 0x1d0] */ r_eax = (u32)(r_ebp+0xfffffe30u);
    /* 004761dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004761de: mov ecx, dword ptr [ebp - 0x328] */ r_ecx = R32((u32)(r_ebp+0xfffffcd8u));
    /* 004761e4: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4761e9u); f_00485940();
    /* 004761e9: mov dword ptr [ebp - 0x32c], eax */ W32((u32)(r_ebp+0xfffffcd4u), r_eax);
    /* 004761ef: mov ecx, dword ptr [ebp - 0x32c] */ r_ecx = R32((u32)(r_ebp+0xfffffcd4u));
    /* 004761f5: mov dword ptr [ebp - 0x330], ecx */ W32((u32)(r_ebp+0xfffffcd0u), r_ecx);
    /* 004761fb: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 00476202: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476208: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0047620e: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 00476214: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 00476219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047621a: lea ecx, [ebp - 0x1d1] */ r_ecx = (u32)(r_ebp+0xfffffe2fu);
    /* 00476220: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476221: mov ecx, dword ptr [ebp - 0x330] */ r_ecx = R32((u32)(r_ebp+0xfffffcd0u));
    /* 00476227: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x47622cu); f_004a2160();
    /* 0047622c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047622e: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x476233u); f_004a1f00();
    /* 00476233: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00476236: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476238: je 0x476254 */ if (fZ) goto L_00476254;
L_0047623a:; BB(0x0047623a);
    /* 0047623a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047623c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476241u); f_0062fbf0();
    /* 00476241: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476244: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476246: jne 0x476254 */ if (!fZ) goto L_00476254;
L_00476248:; BB(0x00476248);
    /* 00476248: mov dword ptr [ebp - 0x334], 1 */ W32((u32)(r_ebp+0xfffffcccu), 0x1u);
    /* 00476252: jmp 0x47625e */ goto L_0047625e;
L_00476254:; BB(0x00476254);
    /* 00476254: mov dword ptr [ebp - 0x334], 0 */ W32((u32)(r_ebp+0xfffffcccu), 0x0u);
L_0047625e:; BB(0x0047625e);
    /* 0047625e: mov al, byte ptr [ebp - 0x334] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcccu))) & 0xffu);
    /* 00476264: mov byte ptr [ebp - 0x1c2], al */ W8((u32)(r_ebp+0xfffffe3eu), (u8)r_eax);
    /* 0047626a: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 00476271: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476277: and ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0047627d: je 0x476294 */ if (fZ) goto L_00476294;
L_0047627f:; BB(0x0047627f);
    /* 0047627f: and dword ptr [ebp - 0x258], 0xfffff7ff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476289: lea ecx, [ebp - 0x1d0] */ r_ecx = (u32)(r_ebp+0xfffffe30u);
    /* 0047628f: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476294u); f_004a20f0();
L_00476294:; BB(0x00476294);
    /* 00476294: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047629b: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004762a1: and edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004762a7: je 0x4762be */ if (fZ) goto L_004762be;
L_004762a9:; BB(0x004762a9);
    /* 004762a9: and dword ptr [ebp - 0x258], 0xfffffbff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004762b3: lea ecx, [ebp - 0x1cc] */ r_ecx = (u32)(r_ebp+0xfffffe34u);
    /* 004762b9: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4762beu); f_00484470();
L_004762be:; BB(0x004762be);
    /* 004762be: movzx eax, byte ptr [ebp - 0x1c2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe3eu));
    /* 004762c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004762c7: je 0x4762eb */ if (fZ) goto L_004762eb;
L_004762c9:; BB(0x004762c9);
    /* 004762c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004762cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004762cd: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 004762d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004762d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004762da: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4762dfu); f_0047e390();
    /* 004762df: mov ecx, eax */ r_ecx = r_eax;
    /* 004762e1: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x4762e6u); f_004cce00();
    /* 004762e6: jmp 0x47649d */ goto L_0047649d;
L_004762eb:; BB(0x004762eb);
    /* 004762eb: lea eax, [ebp - 0x1dc] */ r_eax = (u32)(r_ebp+0xfffffe24u);
    /* 004762f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004762f2: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 004762f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004762f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004762ff: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476304u); f_0047e390();
    /* 00476304: mov ecx, eax */ r_ecx = r_eax;
    /* 00476306: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x47630bu); f_004c7c40();
    /* 0047630b: mov dword ptr [ebp - 0x338], eax */ W32((u32)(r_ebp+0xfffffcc8u), r_eax);
    /* 00476311: mov edx, dword ptr [ebp - 0x338] */ r_edx = R32((u32)(r_ebp+0xfffffcc8u));
    /* 00476317: mov dword ptr [ebp - 0x33c], edx */ W32((u32)(r_ebp+0xfffffcc4u), r_edx);
    /* 0047631d: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 00476324: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047632a: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0047632f: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00476335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476339: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047633b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047633d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047633f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476341: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476343: lea ecx, [ebp - 0x1e0] */ r_ecx = (u32)(r_ebp+0xfffffe20u);
    /* 00476349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047634a: mov ecx, dword ptr [ebp - 0x33c] */ r_ecx = R32((u32)(r_ebp+0xfffffcc4u));
    /* 00476350: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476355u); f_00485940();
    /* 00476355: mov dword ptr [ebp - 0x340], eax */ W32((u32)(r_ebp+0xfffffcc0u), r_eax);
    /* 0047635b: mov edx, dword ptr [ebp - 0x340] */ r_edx = R32((u32)(r_ebp+0xfffffcc0u));
    /* 00476361: mov dword ptr [ebp - 0x344], edx */ W32((u32)(r_ebp+0xfffffcbcu), r_edx);
    /* 00476367: mov dword ptr [ebp - 4], 0x1c */ W32((u32)(r_ebp+0xfffffffcu), 0x1cu);
    /* 0047636e: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476374: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00476379: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 0047637f: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 00476385: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476386: lea edx, [ebp - 0x1e1] */ r_edx = (u32)(r_ebp+0xfffffe1fu);
    /* 0047638c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047638d: mov ecx, dword ptr [ebp - 0x344] */ r_ecx = R32((u32)(r_ebp+0xfffffcbcu));
    /* 00476393: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x476398u); f_004a2160();
    /* 00476398: mov ecx, eax */ r_ecx = r_eax;
    /* 0047639a: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x47639fu); f_004a1e10();
    /* 0047639f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004763a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004763a4: je 0x4763c0 */ if (fZ) goto L_004763c0;
L_004763a6:; BB(0x004763a6);
    /* 004763a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004763a8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4763adu); f_0062fbf0();
    /* 004763ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004763b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004763b2: jne 0x4763c0 */ if (!fZ) goto L_004763c0;
L_004763b4:; BB(0x004763b4);
    /* 004763b4: mov dword ptr [ebp - 0x348], 1 */ W32((u32)(r_ebp+0xfffffcb8u), 0x1u);
    /* 004763be: jmp 0x4763ca */ goto L_004763ca;
L_004763c0:; BB(0x004763c0);
    /* 004763c0: mov dword ptr [ebp - 0x348], 0 */ W32((u32)(r_ebp+0xfffffcb8u), 0x0u);
L_004763ca:; BB(0x004763ca);
    /* 004763ca: mov cl, byte ptr [ebp - 0x348] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcb8u))) & 0xffu);
    /* 004763d0: mov byte ptr [ebp - 0x1d2], cl */ W8((u32)(r_ebp+0xfffffe2eu), (u8)r_ecx);
    /* 004763d6: mov dword ptr [ebp - 4], 0x1b */ W32((u32)(r_ebp+0xfffffffcu), 0x1bu);
    /* 004763dd: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004763e3: and edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004763e9: je 0x476400 */ if (fZ) goto L_00476400;
L_004763eb:; BB(0x004763eb);
    /* 004763eb: and dword ptr [ebp - 0x258], 0xffffdfff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffdfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004763f5: lea ecx, [ebp - 0x1e0] */ r_ecx = (u32)(r_ebp+0xfffffe20u);
    /* 004763fb: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476400u); f_004a20f0();
L_00476400:; BB(0x00476400);
    /* 00476400: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476407: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047640d: and eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00476412: je 0x476429 */ if (fZ) goto L_00476429;
L_00476414:; BB(0x00476414);
    /* 00476414: and dword ptr [ebp - 0x258], 0xffffefff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0047641e: lea ecx, [ebp - 0x1dc] */ r_ecx = (u32)(r_ebp+0xfffffe24u);
    /* 00476424: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x476429u); f_00484470();
L_00476429:; BB(0x00476429);
    /* 00476429: movzx ecx, byte ptr [ebp - 0x1d2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe2eu));
    /* 00476430: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476432: je 0x476453 */ if (fZ) goto L_00476453;
L_00476434:; BB(0x00476434);
    /* 00476434: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476437: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476438: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 0047643e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047643f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476445: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47644au); f_0047e390();
    /* 0047644a: mov ecx, eax */ r_ecx = r_eax;
    /* 0047644c: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x476451u); f_004cce40();
    /* 00476451: jmp 0x47649d */ goto L_0047649d;
L_00476453:; BB(0x00476453);
    /* 00476453: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00476455: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47645au); f_0062fbf0();
    /* 0047645a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047645d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047645f: jne 0x476480 */ if (!fZ) goto L_00476480;
L_00476461:; BB(0x00476461);
    /* 00476461: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476464: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476465: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 0047646b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047646c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476472: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476477u); f_0047e390();
    /* 00476477: mov ecx, eax */ r_ecx = r_eax;
    /* 00476479: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x47647eu); f_004ccda0();
    /* 0047647e: jmp 0x47649d */ goto L_0047649d;
L_00476480:; BB(0x00476480);
    /* 00476480: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476484: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0047648a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047648b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476491: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476496u); f_0047e390();
    /* 00476496: mov ecx, eax */ r_ecx = r_eax;
    /* 00476498: call 0x4ccc60 */ r_esp -= 4; W32(r_esp, 0x47649du); f_004ccc60();
L_0047649d:; BB(0x0047649d);
    /* 0047649d: jmp 0x4764bc */ goto L_004764bc;
L_0047649f:; BB(0x0047649f);
    /* 0047649f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004764a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004764a3: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 004764a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004764aa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004764b0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4764b5u); f_0047e390();
    /* 004764b5: mov ecx, eax */ r_ecx = r_eax;
    /* 004764b7: call 0x4ccc60 */ r_esp -= 4; W32(r_esp, 0x4764bcu); f_004ccc60();
L_004764bc:; BB(0x004764bc);
    /* 004764bc: jmp 0x47701e */ goto L_0047701e;
L_004764c1:; BB(0x004764c1);
    /* 004764c1: cmp dword ptr [0x791300], 0xb */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004764c8: jne 0x476c32 */ if (!fZ) goto L_00476c32;
L_004764ce:; BB(0x004764ce);
    /* 004764ce: lea ecx, [ebp - 0x1ec] */ r_ecx = (u32)(r_ebp+0xfffffe14u);
    /* 004764d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004764d5: mov edx, dword ptr [0x791304] */ r_edx = R32((u32)(0x791304u));
    /* 004764db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004764dc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004764e2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4764e7u); f_0047e390();
    /* 004764e7: mov ecx, eax */ r_ecx = r_eax;
    /* 004764e9: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4764eeu); f_004c7c40();
    /* 004764ee: mov dword ptr [ebp - 0x34c], eax */ W32((u32)(r_ebp+0xfffffcb4u), r_eax);
    /* 004764f4: mov eax, dword ptr [ebp - 0x34c] */ r_eax = R32((u32)(r_ebp+0xfffffcb4u));
    /* 004764fa: mov dword ptr [ebp - 0x350], eax */ W32((u32)(r_ebp+0xfffffcb0u), r_eax);
    /* 00476500: mov dword ptr [ebp - 4], 0x1d */ W32((u32)(r_ebp+0xfffffffcu), 0x1du);
    /* 00476507: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047650b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047650d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047650f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476511: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476513: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476515: lea ecx, [ebp - 0x1f0] */ r_ecx = (u32)(r_ebp+0xfffffe10u);
    /* 0047651b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047651c: mov ecx, dword ptr [ebp - 0x350] */ r_ecx = R32((u32)(r_ebp+0xfffffcb0u));
    /* 00476522: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476527u); f_00485940();
    /* 00476527: mov dword ptr [ebp - 0x354], eax */ W32((u32)(r_ebp+0xfffffcacu), r_eax);
    /* 0047652d: mov edx, dword ptr [ebp - 0x354] */ r_edx = R32((u32)(r_ebp+0xfffffcacu));
    /* 00476533: mov dword ptr [ebp - 0x358], edx */ W32((u32)(r_ebp+0xfffffca8u), r_edx);
    /* 00476539: mov byte ptr [ebp - 4], 0x1e */ W8((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 0047653d: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 00476542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476543: lea ecx, [ebp - 0x1f1] */ r_ecx = (u32)(r_ebp+0xfffffe0fu);
    /* 00476549: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047654a: mov ecx, dword ptr [ebp - 0x358] */ r_ecx = R32((u32)(r_ebp+0xfffffca8u));
    /* 00476550: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x476555u); f_004a2160();
    /* 00476555: mov ecx, eax */ r_ecx = r_eax;
    /* 00476557: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x47655cu); f_004a1f00();
    /* 0047655c: mov byte ptr [ebp - 0x1e2], al */ W8((u32)(r_ebp+0xfffffe1eu), (u8)r_eax);
    /* 00476562: mov byte ptr [ebp - 4], 0x1d */ W8((u32)(r_ebp+0xfffffffcu), 0x1du);
    /* 00476566: lea ecx, [ebp - 0x1f0] */ r_ecx = (u32)(r_ebp+0xfffffe10u);
    /* 0047656c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476571u); f_004a20f0();
    /* 00476571: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476578: lea ecx, [ebp - 0x1ec] */ r_ecx = (u32)(r_ebp+0xfffffe14u);
    /* 0047657e: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x476583u); f_00484470();
    /* 00476583: movzx edx, byte ptr [ebp - 0x1e2] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe1eu));
    /* 0047658a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047658c: je 0x4768e2 */ if (fZ) goto L_004768e2;
L_00476592:; BB(0x00476592);
    /* 00476592: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00476599: jl 0x4768c0 */ if ((fS!=fO)) goto L_004768c0;
L_0047659f:; BB(0x0047659f);
    /* 0047659f: lea eax, [ebp - 0x1fc] */ r_eax = (u32)(r_ebp+0xfffffe04u);
    /* 004765a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004765a6: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 004765ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004765ad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004765b3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4765b8u); f_0047e390();
    /* 004765b8: mov ecx, eax */ r_ecx = r_eax;
    /* 004765ba: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4765bfu); f_004c7c40();
    /* 004765bf: mov dword ptr [ebp - 0x35c], eax */ W32((u32)(r_ebp+0xfffffca4u), r_eax);
    /* 004765c5: mov edx, dword ptr [ebp - 0x35c] */ r_edx = R32((u32)(r_ebp+0xfffffca4u));
    /* 004765cb: mov dword ptr [ebp - 0x360], edx */ W32((u32)(r_ebp+0xfffffca0u), r_edx);
    /* 004765d1: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 004765d8: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 004765de: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004765e3: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 004765e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004765eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004765ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004765ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004765f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004765f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004765f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004765f7: lea ecx, [ebp - 0x200] */ r_ecx = (u32)(r_ebp+0xfffffe00u);
    /* 004765fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004765fe: mov ecx, dword ptr [ebp - 0x360] */ r_ecx = R32((u32)(r_ebp+0xfffffca0u));
    /* 00476604: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476609u); f_00485940();
    /* 00476609: mov dword ptr [ebp - 0x364], eax */ W32((u32)(r_ebp+0xfffffc9cu), r_eax);
    /* 0047660f: mov edx, dword ptr [ebp - 0x364] */ r_edx = R32((u32)(r_ebp+0xfffffc9cu));
    /* 00476615: mov dword ptr [ebp - 0x368], edx */ W32((u32)(r_ebp+0xfffffc98u), r_edx);
    /* 0047661b: mov dword ptr [ebp - 4], 0x20 */ W32((u32)(r_ebp+0xfffffffcu), 0x20u);
    /* 00476622: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476628: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0047662d: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00476633: mov ecx, dword ptr [0x79140c] */ r_ecx = R32((u32)(0x79140cu));
    /* 00476639: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047663a: lea edx, [ebp - 0x201] */ r_edx = (u32)(r_ebp+0xfffffdffu);
    /* 00476640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476641: mov ecx, dword ptr [ebp - 0x368] */ r_ecx = R32((u32)(r_ebp+0xfffffc98u));
    /* 00476647: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x47664cu); f_004a2160();
    /* 0047664c: mov ecx, eax */ r_ecx = r_eax;
    /* 0047664e: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x476653u); f_004a1f00();
    /* 00476653: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00476656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476658: je 0x476674 */ if (fZ) goto L_00476674;
L_0047665a:; BB(0x0047665a);
    /* 0047665a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047665c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476661u); f_0062fbf0();
    /* 00476661: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476666: jne 0x476674 */ if (!fZ) goto L_00476674;
L_00476668:; BB(0x00476668);
    /* 00476668: mov dword ptr [ebp - 0x36c], 1 */ W32((u32)(r_ebp+0xfffffc94u), 0x1u);
    /* 00476672: jmp 0x47667e */ goto L_0047667e;
L_00476674:; BB(0x00476674);
    /* 00476674: mov dword ptr [ebp - 0x36c], 0 */ W32((u32)(r_ebp+0xfffffc94u), 0x0u);
L_0047667e:; BB(0x0047667e);
    /* 0047667e: mov cl, byte ptr [ebp - 0x36c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc94u))) & 0xffu);
    /* 00476684: mov byte ptr [ebp - 0x1f2], cl */ W8((u32)(r_ebp+0xfffffe0eu), (u8)r_ecx);
    /* 0047668a: mov dword ptr [ebp - 4], 0x1f */ W32((u32)(r_ebp+0xfffffffcu), 0x1fu);
    /* 00476691: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476697: and edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0047669d: je 0x4766b4 */ if (fZ) goto L_004766b4;
L_0047669f:; BB(0x0047669f);
    /* 0047669f: and dword ptr [ebp - 0x258], 0xffff7fff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004766a9: lea ecx, [ebp - 0x200] */ r_ecx = (u32)(r_ebp+0xfffffe00u);
    /* 004766af: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4766b4u); f_004a20f0();
L_004766b4:; BB(0x004766b4);
    /* 004766b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004766bb: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 004766c1: and eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004766c6: je 0x4766dd */ if (fZ) goto L_004766dd;
L_004766c8:; BB(0x004766c8);
    /* 004766c8: and dword ptr [ebp - 0x258], 0xffffbfff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004766d2: lea ecx, [ebp - 0x1fc] */ r_ecx = (u32)(r_ebp+0xfffffe04u);
    /* 004766d8: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4766ddu); f_00484470();
L_004766dd:; BB(0x004766dd);
    /* 004766dd: movzx ecx, byte ptr [ebp - 0x1f2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe0eu));
    /* 004766e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004766e6: je 0x47670a */ if (fZ) goto L_0047670a;
L_004766e8:; BB(0x004766e8);
    /* 004766e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004766eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004766ec: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 004766f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004766f3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004766f9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4766feu); f_0047e390();
    /* 004766fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00476700: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x476705u); f_004cce00();
    /* 00476705: jmp 0x4768be */ goto L_004768be;
L_0047670a:; BB(0x0047670a);
    /* 0047670a: lea ecx, [ebp - 0x20c] */ r_ecx = (u32)(r_ebp+0xfffffdf4u);
    /* 00476710: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476711: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476718: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047671e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476723u); f_0047e390();
    /* 00476723: mov ecx, eax */ r_ecx = r_eax;
    /* 00476725: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x47672au); f_004c7c40();
    /* 0047672a: mov dword ptr [ebp - 0x370], eax */ W32((u32)(r_ebp+0xfffffc90u), r_eax);
    /* 00476730: mov eax, dword ptr [ebp - 0x370] */ r_eax = R32((u32)(r_ebp+0xfffffc90u));
    /* 00476736: mov dword ptr [ebp - 0x374], eax */ W32((u32)(r_ebp+0xfffffc8cu), r_eax);
    /* 0047673c: mov dword ptr [ebp - 4], 0x21 */ W32((u32)(r_ebp+0xfffffffcu), 0x21u);
    /* 00476743: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476749: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0047674f: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 00476755: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476757: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476759: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047675b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047675d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047675f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476761: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476763: lea edx, [ebp - 0x210] */ r_edx = (u32)(r_ebp+0xfffffdf0u);
    /* 00476769: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047676a: mov ecx, dword ptr [ebp - 0x374] */ r_ecx = R32((u32)(r_ebp+0xfffffc8cu));
    /* 00476770: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476775u); f_00485940();
    /* 00476775: mov dword ptr [ebp - 0x378], eax */ W32((u32)(r_ebp+0xfffffc88u), r_eax);
    /* 0047677b: mov eax, dword ptr [ebp - 0x378] */ r_eax = R32((u32)(r_ebp+0xfffffc88u));
    /* 00476781: mov dword ptr [ebp - 0x37c], eax */ W32((u32)(r_ebp+0xfffffc84u), r_eax);
    /* 00476787: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
    /* 0047678e: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476794: or ecx, 0x20000 */ {  u32 a = r_ecx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0047679a: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 004767a0: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 004767a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004767a7: lea eax, [ebp - 0x211] */ r_eax = (u32)(r_ebp+0xfffffdefu);
    /* 004767ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004767ae: mov ecx, dword ptr [ebp - 0x37c] */ r_ecx = R32((u32)(r_ebp+0xfffffc84u));
    /* 004767b4: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x4767b9u); f_004a2160();
    /* 004767b9: mov ecx, eax */ r_ecx = r_eax;
    /* 004767bb: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x4767c0u); f_004a1e10();
    /* 004767c0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004767c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004767c5: je 0x4767e1 */ if (fZ) goto L_004767e1;
L_004767c7:; BB(0x004767c7);
    /* 004767c7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004767c9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4767ceu); f_0062fbf0();
    /* 004767ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004767d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004767d3: jne 0x4767e1 */ if (!fZ) goto L_004767e1;
L_004767d5:; BB(0x004767d5);
    /* 004767d5: mov dword ptr [ebp - 0x380], 1 */ W32((u32)(r_ebp+0xfffffc80u), 0x1u);
    /* 004767df: jmp 0x4767eb */ goto L_004767eb;
L_004767e1:; BB(0x004767e1);
    /* 004767e1: mov dword ptr [ebp - 0x380], 0 */ W32((u32)(r_ebp+0xfffffc80u), 0x0u);
L_004767eb:; BB(0x004767eb);
    /* 004767eb: mov dl, byte ptr [ebp - 0x380] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc80u))) & 0xffu);
    /* 004767f1: mov byte ptr [ebp - 0x202], dl */ W8((u32)(r_ebp+0xfffffdfeu), (u8)r_edx);
    /* 004767f7: mov dword ptr [ebp - 4], 0x21 */ W32((u32)(r_ebp+0xfffffffcu), 0x21u);
    /* 004767fe: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476804: and eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00476809: je 0x476820 */ if (fZ) goto L_00476820;
L_0047680b:; BB(0x0047680b);
    /* 0047680b: and dword ptr [ebp - 0x258], 0xfffdffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476815: lea ecx, [ebp - 0x210] */ r_ecx = (u32)(r_ebp+0xfffffdf0u);
    /* 0047681b: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476820u); f_004a20f0();
L_00476820:; BB(0x00476820);
    /* 00476820: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476827: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047682d: and ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00476833: je 0x47684a */ if (fZ) goto L_0047684a;
L_00476835:; BB(0x00476835);
    /* 00476835: and dword ptr [ebp - 0x258], 0xfffeffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0047683f: lea ecx, [ebp - 0x20c] */ r_ecx = (u32)(r_ebp+0xfffffdf4u);
    /* 00476845: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x47684au); f_00484470();
L_0047684a:; BB(0x0047684a);
    /* 0047684a: movzx edx, byte ptr [ebp - 0x202] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffdfeu));
    /* 00476851: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476853: je 0x476874 */ if (fZ) goto L_00476874;
L_00476855:; BB(0x00476855);
    /* 00476855: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476859: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0047685f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476860: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476866: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47686bu); f_0047e390();
    /* 0047686b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047686d: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x476872u); f_004cce40();
    /* 00476872: jmp 0x4768be */ goto L_004768be;
L_00476874:; BB(0x00476874);
    /* 00476874: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00476876: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47687bu); f_0062fbf0();
    /* 0047687b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047687e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476880: jne 0x4768a1 */ if (!fZ) goto L_004768a1;
L_00476882:; BB(0x00476882);
    /* 00476882: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476885: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476886: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 0047688c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047688d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476893: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476898u); f_0047e390();
    /* 00476898: mov ecx, eax */ r_ecx = r_eax;
    /* 0047689a: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x47689fu); f_004ccda0();
    /* 0047689f: jmp 0x4768be */ goto L_004768be;
L_004768a1:; BB(0x004768a1);
    /* 004768a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004768a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004768a5: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 004768ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004768ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004768b2: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4768b7u); f_0047e390();
    /* 004768b7: mov ecx, eax */ r_ecx = r_eax;
    /* 004768b9: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x4768beu); f_004ccce0();
L_004768be:; BB(0x004768be);
    /* 004768be: jmp 0x4768dd */ goto L_004768dd;
L_004768c0:; BB(0x004768c0);
    /* 004768c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004768c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004768c4: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 004768ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004768cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004768d1: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4768d6u); f_0047e390();
    /* 004768d6: mov ecx, eax */ r_ecx = r_eax;
    /* 004768d8: call 0x4ccce0 */ r_esp -= 4; W32(r_esp, 0x4768ddu); f_004ccce0();
L_004768dd:; BB(0x004768dd);
    /* 004768dd: jmp 0x476c2d */ goto L_00476c2d;
L_004768e2:; BB(0x004768e2);
    /* 004768e2: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004768e9: jl 0x476c10 */ if ((fS!=fO)) goto L_00476c10;
L_004768ef:; BB(0x004768ef);
    /* 004768ef: lea edx, [ebp - 0x21c] */ r_edx = (u32)(r_ebp+0xfffffde4u);
    /* 004768f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004768f6: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 004768fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004768fd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476903: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476908u); f_0047e390();
    /* 00476908: mov ecx, eax */ r_ecx = r_eax;
    /* 0047690a: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x47690fu); f_004c7c40();
    /* 0047690f: mov dword ptr [ebp - 0x384], eax */ W32((u32)(r_ebp+0xfffffc7cu), r_eax);
    /* 00476915: mov ecx, dword ptr [ebp - 0x384] */ r_ecx = R32((u32)(r_ebp+0xfffffc7cu));
    /* 0047691b: mov dword ptr [ebp - 0x388], ecx */ W32((u32)(r_ebp+0xfffffc78u), r_ecx);
    /* 00476921: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 00476928: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 0047692e: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00476934: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 0047693a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047693c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047693e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476940: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476942: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476944: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476946: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476948: lea eax, [ebp - 0x220] */ r_eax = (u32)(r_ebp+0xfffffde0u);
    /* 0047694e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047694f: mov ecx, dword ptr [ebp - 0x388] */ r_ecx = R32((u32)(r_ebp+0xfffffc78u));
    /* 00476955: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x47695au); f_00485940();
    /* 0047695a: mov dword ptr [ebp - 0x38c], eax */ W32((u32)(r_ebp+0xfffffc74u), r_eax);
    /* 00476960: mov ecx, dword ptr [ebp - 0x38c] */ r_ecx = R32((u32)(r_ebp+0xfffffc74u));
    /* 00476966: mov dword ptr [ebp - 0x390], ecx */ W32((u32)(r_ebp+0xfffffc70u), r_ecx);
    /* 0047696c: mov dword ptr [ebp - 4], 0x24 */ W32((u32)(r_ebp+0xfffffffcu), 0x24u);
    /* 00476973: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476979: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0047697f: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 00476985: mov eax, dword ptr [0x79140c] */ r_eax = R32((u32)(0x79140cu));
    /* 0047698a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047698b: lea ecx, [ebp - 0x221] */ r_ecx = (u32)(r_ebp+0xfffffddfu);
    /* 00476991: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476992: mov ecx, dword ptr [ebp - 0x390] */ r_ecx = R32((u32)(r_ebp+0xfffffc70u));
    /* 00476998: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x47699du); f_004a2160();
    /* 0047699d: mov ecx, eax */ r_ecx = r_eax;
    /* 0047699f: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x4769a4u); f_004a1f00();
    /* 004769a4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004769a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004769a9: je 0x4769c5 */ if (fZ) goto L_004769c5;
L_004769ab:; BB(0x004769ab);
    /* 004769ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004769ad: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4769b2u); f_0062fbf0();
    /* 004769b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004769b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004769b7: jne 0x4769c5 */ if (!fZ) goto L_004769c5;
L_004769b9:; BB(0x004769b9);
    /* 004769b9: mov dword ptr [ebp - 0x394], 1 */ W32((u32)(r_ebp+0xfffffc6cu), 0x1u);
    /* 004769c3: jmp 0x4769cf */ goto L_004769cf;
L_004769c5:; BB(0x004769c5);
    /* 004769c5: mov dword ptr [ebp - 0x394], 0 */ W32((u32)(r_ebp+0xfffffc6cu), 0x0u);
L_004769cf:; BB(0x004769cf);
    /* 004769cf: mov al, byte ptr [ebp - 0x394] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc6cu))) & 0xffu);
    /* 004769d5: mov byte ptr [ebp - 0x212], al */ W8((u32)(r_ebp+0xfffffdeeu), (u8)r_eax);
    /* 004769db: mov dword ptr [ebp - 4], 0x23 */ W32((u32)(r_ebp+0xfffffffcu), 0x23u);
    /* 004769e2: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 004769e8: and ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004769ee: je 0x476a05 */ if (fZ) goto L_00476a05;
L_004769f0:; BB(0x004769f0);
    /* 004769f0: and dword ptr [ebp - 0x258], 0xfff7ffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004769fa: lea ecx, [ebp - 0x220] */ r_ecx = (u32)(r_ebp+0xfffffde0u);
    /* 00476a00: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476a05u); f_004a20f0();
L_00476a05:; BB(0x00476a05);
    /* 00476a05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476a0c: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476a12: and edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00476a18: je 0x476a2f */ if (fZ) goto L_00476a2f;
L_00476a1a:; BB(0x00476a1a);
    /* 00476a1a: and dword ptr [ebp - 0x258], 0xfffbffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476a24: lea ecx, [ebp - 0x21c] */ r_ecx = (u32)(r_ebp+0xfffffde4u);
    /* 00476a2a: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x476a2fu); f_00484470();
L_00476a2f:; BB(0x00476a2f);
    /* 00476a2f: movzx eax, byte ptr [ebp - 0x212] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffdeeu));
    /* 00476a36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476a38: je 0x476a5c */ if (fZ) goto L_00476a5c;
L_00476a3a:; BB(0x00476a3a);
    /* 00476a3a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476a3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476a3e: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476a44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476a45: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476a4b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476a50u); f_0047e390();
    /* 00476a50: mov ecx, eax */ r_ecx = r_eax;
    /* 00476a52: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x476a57u); f_004cce00();
    /* 00476a57: jmp 0x476c0e */ goto L_00476c0e;
L_00476a5c:; BB(0x00476a5c);
    /* 00476a5c: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 00476a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476a63: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476a69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476a6a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476a70: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476a75u); f_0047e390();
    /* 00476a75: mov ecx, eax */ r_ecx = r_eax;
    /* 00476a77: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x476a7cu); f_004c7c40();
    /* 00476a7c: mov dword ptr [ebp - 0x398], eax */ W32((u32)(r_ebp+0xfffffc68u), r_eax);
    /* 00476a82: mov edx, dword ptr [ebp - 0x398] */ r_edx = R32((u32)(r_ebp+0xfffffc68u));
    /* 00476a88: mov dword ptr [ebp - 0x39c], edx */ W32((u32)(r_ebp+0xfffffc64u), r_edx);
    /* 00476a8e: mov dword ptr [ebp - 4], 0x25 */ W32((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 00476a95: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476a9b: or eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00476aa0: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00476aa6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476aa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476aaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476aac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476aae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476ab0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476ab2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476ab4: lea ecx, [ebp - 0x230] */ r_ecx = (u32)(r_ebp+0xfffffdd0u);
    /* 00476aba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476abb: mov ecx, dword ptr [ebp - 0x39c] */ r_ecx = R32((u32)(r_ebp+0xfffffc64u));
    /* 00476ac1: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476ac6u); f_00485940();
    /* 00476ac6: mov dword ptr [ebp - 0x3a0], eax */ W32((u32)(r_ebp+0xfffffc60u), r_eax);
    /* 00476acc: mov edx, dword ptr [ebp - 0x3a0] */ r_edx = R32((u32)(r_ebp+0xfffffc60u));
    /* 00476ad2: mov dword ptr [ebp - 0x3a4], edx */ W32((u32)(r_ebp+0xfffffc5cu), r_edx);
    /* 00476ad8: mov dword ptr [ebp - 4], 0x26 */ W32((u32)(r_ebp+0xfffffffcu), 0x26u);
    /* 00476adf: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476ae5: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00476aea: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00476af0: mov ecx, dword ptr [0x791390] */ r_ecx = R32((u32)(0x791390u));
    /* 00476af6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476af7: lea edx, [ebp - 0x231] */ r_edx = (u32)(r_ebp+0xfffffdcfu);
    /* 00476afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476afe: mov ecx, dword ptr [ebp - 0x3a4] */ r_ecx = R32((u32)(r_ebp+0xfffffc5cu));
    /* 00476b04: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x476b09u); f_004a2160();
    /* 00476b09: mov ecx, eax */ r_ecx = r_eax;
    /* 00476b0b: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x476b10u); f_004a1e10();
    /* 00476b10: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00476b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476b15: je 0x476b31 */ if (fZ) goto L_00476b31;
L_00476b17:; BB(0x00476b17);
    /* 00476b17: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00476b19: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476b1eu); f_0062fbf0();
    /* 00476b1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476b21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476b23: jne 0x476b31 */ if (!fZ) goto L_00476b31;
L_00476b25:; BB(0x00476b25);
    /* 00476b25: mov dword ptr [ebp - 0x3a8], 1 */ W32((u32)(r_ebp+0xfffffc58u), 0x1u);
    /* 00476b2f: jmp 0x476b3b */ goto L_00476b3b;
L_00476b31:; BB(0x00476b31);
    /* 00476b31: mov dword ptr [ebp - 0x3a8], 0 */ W32((u32)(r_ebp+0xfffffc58u), 0x0u);
L_00476b3b:; BB(0x00476b3b);
    /* 00476b3b: mov cl, byte ptr [ebp - 0x3a8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc58u))) & 0xffu);
    /* 00476b41: mov byte ptr [ebp - 0x222], cl */ W8((u32)(r_ebp+0xfffffddeu), (u8)r_ecx);
    /* 00476b47: mov dword ptr [ebp - 4], 0x25 */ W32((u32)(r_ebp+0xfffffffcu), 0x25u);
    /* 00476b4e: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476b54: and edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00476b5a: je 0x476b71 */ if (fZ) goto L_00476b71;
L_00476b5c:; BB(0x00476b5c);
    /* 00476b5c: and dword ptr [ebp - 0x258], 0xffdfffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476b66: lea ecx, [ebp - 0x230] */ r_ecx = (u32)(r_ebp+0xfffffdd0u);
    /* 00476b6c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476b71u); f_004a20f0();
L_00476b71:; BB(0x00476b71);
    /* 00476b71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476b78: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476b7e: and eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00476b83: je 0x476b9a */ if (fZ) goto L_00476b9a;
L_00476b85:; BB(0x00476b85);
    /* 00476b85: and dword ptr [ebp - 0x258], 0xffefffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476b8f: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 00476b95: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x476b9au); f_00484470();
L_00476b9a:; BB(0x00476b9a);
    /* 00476b9a: movzx ecx, byte ptr [ebp - 0x222] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffddeu));
    /* 00476ba1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476ba3: je 0x476bc4 */ if (fZ) goto L_00476bc4;
L_00476ba5:; BB(0x00476ba5);
    /* 00476ba5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476ba8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476ba9: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00476baf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476bb0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476bb6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476bbbu); f_0047e390();
    /* 00476bbb: mov ecx, eax */ r_ecx = r_eax;
    /* 00476bbd: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x476bc2u); f_004cce40();
    /* 00476bc2: jmp 0x476c0e */ goto L_00476c0e;
L_00476bc4:; BB(0x00476bc4);
    /* 00476bc4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00476bc6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476bcbu); f_0062fbf0();
    /* 00476bcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476bce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476bd0: jne 0x476bf1 */ if (!fZ) goto L_00476bf1;
L_00476bd2:; BB(0x00476bd2);
    /* 00476bd2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476bd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476bd6: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476bdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476bdd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476be3: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476be8u); f_0047e390();
    /* 00476be8: mov ecx, eax */ r_ecx = r_eax;
    /* 00476bea: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x476befu); f_004ccda0();
    /* 00476bef: jmp 0x476c0e */ goto L_00476c0e;
L_00476bf1:; BB(0x00476bf1);
    /* 00476bf1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476bf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476bf5: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476bfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476bfc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476c02: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476c07u); f_0047e390();
    /* 00476c07: mov ecx, eax */ r_ecx = r_eax;
    /* 00476c09: call 0x4ccd60 */ r_esp -= 4; W32(r_esp, 0x476c0eu); f_004ccd60();
L_00476c0e:; BB(0x00476c0e);
    /* 00476c0e: jmp 0x476c2d */ goto L_00476c2d;
L_00476c10:; BB(0x00476c10);
    /* 00476c10: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476c13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476c14: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00476c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476c1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476c21: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476c26u); f_0047e390();
    /* 00476c26: mov ecx, eax */ r_ecx = r_eax;
    /* 00476c28: call 0x4ccd60 */ r_esp -= 4; W32(r_esp, 0x476c2du); f_004ccd60();
L_00476c2d:; BB(0x00476c2d);
    /* 00476c2d: jmp 0x47701e */ goto L_0047701e;
L_00476c32:; BB(0x00476c32);
    /* 00476c32: cmp dword ptr [0x791300], 0xa */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476c39: jne 0x476f91 */ if (!fZ) goto L_00476f91;
L_00476c3f:; BB(0x00476c3f);
    /* 00476c3f: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00476c46: jl 0x476f6f */ if ((fS!=fO)) goto L_00476f6f;
L_00476c4c:; BB(0x00476c4c);
    /* 00476c4c: lea ecx, [ebp - 0x23c] */ r_ecx = (u32)(r_ebp+0xfffffdc4u);
    /* 00476c52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476c53: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476c59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476c5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476c60: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476c65u); f_0047e390();
    /* 00476c65: mov ecx, eax */ r_ecx = r_eax;
    /* 00476c67: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x476c6cu); f_004c7c40();
    /* 00476c6c: mov dword ptr [ebp - 0x3ac], eax */ W32((u32)(r_ebp+0xfffffc54u), r_eax);
    /* 00476c72: mov eax, dword ptr [ebp - 0x3ac] */ r_eax = R32((u32)(r_ebp+0xfffffc54u));
    /* 00476c78: mov dword ptr [ebp - 0x3b0], eax */ W32((u32)(r_ebp+0xfffffc50u), r_eax);
    /* 00476c7e: mov dword ptr [ebp - 4], 0x27 */ W32((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 00476c85: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476c8b: or ecx, 0x400000 */ {  u32 a = r_ecx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00476c91: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 00476c97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476c99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476c9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476c9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476c9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476ca1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476ca3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476ca5: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 00476cab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476cac: mov ecx, dword ptr [ebp - 0x3b0] */ r_ecx = R32((u32)(r_ebp+0xfffffc50u));
    /* 00476cb2: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476cb7u); f_00485940();
    /* 00476cb7: mov dword ptr [ebp - 0x3b4], eax */ W32((u32)(r_ebp+0xfffffc4cu), r_eax);
    /* 00476cbd: mov eax, dword ptr [ebp - 0x3b4] */ r_eax = R32((u32)(r_ebp+0xfffffc4cu));
    /* 00476cc3: mov dword ptr [ebp - 0x3b8], eax */ W32((u32)(r_ebp+0xfffffc48u), r_eax);
    /* 00476cc9: mov dword ptr [ebp - 4], 0x28 */ W32((u32)(r_ebp+0xfffffffcu), 0x28u);
    /* 00476cd0: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476cd6: or ecx, 0x800000 */ {  u32 a = r_ecx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00476cdc: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 00476ce2: mov edx, dword ptr [0x79140c] */ r_edx = R32((u32)(0x79140cu));
    /* 00476ce8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476ce9: lea eax, [ebp - 0x241] */ r_eax = (u32)(r_ebp+0xfffffdbfu);
    /* 00476cef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476cf0: mov ecx, dword ptr [ebp - 0x3b8] */ r_ecx = R32((u32)(r_ebp+0xfffffc48u));
    /* 00476cf6: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x476cfbu); f_004a2160();
    /* 00476cfb: mov ecx, eax */ r_ecx = r_eax;
    /* 00476cfd: call 0x4a1f00 */ r_esp -= 4; W32(r_esp, 0x476d02u); f_004a1f00();
    /* 00476d02: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00476d05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476d07: je 0x476d23 */ if (fZ) goto L_00476d23;
L_00476d09:; BB(0x00476d09);
    /* 00476d09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00476d0b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476d10u); f_0062fbf0();
    /* 00476d10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476d13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476d15: jne 0x476d23 */ if (!fZ) goto L_00476d23;
L_00476d17:; BB(0x00476d17);
    /* 00476d17: mov dword ptr [ebp - 0x3bc], 1 */ W32((u32)(r_ebp+0xfffffc44u), 0x1u);
    /* 00476d21: jmp 0x476d2d */ goto L_00476d2d;
L_00476d23:; BB(0x00476d23);
    /* 00476d23: mov dword ptr [ebp - 0x3bc], 0 */ W32((u32)(r_ebp+0xfffffc44u), 0x0u);
L_00476d2d:; BB(0x00476d2d);
    /* 00476d2d: mov dl, byte ptr [ebp - 0x3bc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc44u))) & 0xffu);
    /* 00476d33: mov byte ptr [ebp - 0x232], dl */ W8((u32)(r_ebp+0xfffffdceu), (u8)r_edx);
    /* 00476d39: mov dword ptr [ebp - 4], 0x27 */ W32((u32)(r_ebp+0xfffffffcu), 0x27u);
    /* 00476d40: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476d46: and eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00476d4b: je 0x476d62 */ if (fZ) goto L_00476d62;
L_00476d4d:; BB(0x00476d4d);
    /* 00476d4d: and dword ptr [ebp - 0x258], 0xff7fffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476d57: lea ecx, [ebp - 0x240] */ r_ecx = (u32)(r_ebp+0xfffffdc0u);
    /* 00476d5d: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476d62u); f_004a20f0();
L_00476d62:; BB(0x00476d62);
    /* 00476d62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476d69: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476d6f: and ecx, 0x400000 */ {  u32 a = r_ecx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00476d75: je 0x476d8c */ if (fZ) goto L_00476d8c;
L_00476d77:; BB(0x00476d77);
    /* 00476d77: and dword ptr [ebp - 0x258], 0xffbfffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476d81: lea ecx, [ebp - 0x23c] */ r_ecx = (u32)(r_ebp+0xfffffdc4u);
    /* 00476d87: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x476d8cu); f_00484470();
L_00476d8c:; BB(0x00476d8c);
    /* 00476d8c: movzx edx, byte ptr [ebp - 0x232] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffdceu));
    /* 00476d93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476d95: je 0x476db9 */ if (fZ) goto L_00476db9;
L_00476d97:; BB(0x00476d97);
    /* 00476d97: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476d9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476d9b: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476da1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476da2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476da8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476dadu); f_0047e390();
    /* 00476dad: mov ecx, eax */ r_ecx = r_eax;
    /* 00476daf: call 0x4cce00 */ r_esp -= 4; W32(r_esp, 0x476db4u); f_004cce00();
    /* 00476db4: jmp 0x476f6d */ goto L_00476f6d;
L_00476db9:; BB(0x00476db9);
    /* 00476db9: lea edx, [ebp - 0x24c] */ r_edx = (u32)(r_ebp+0xfffffdb4u);
    /* 00476dbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476dc0: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00476dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476dc7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476dcd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476dd2u); f_0047e390();
    /* 00476dd2: mov ecx, eax */ r_ecx = r_eax;
    /* 00476dd4: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x476dd9u); f_004c7c40();
    /* 00476dd9: mov dword ptr [ebp - 0x3c0], eax */ W32((u32)(r_ebp+0xfffffc40u), r_eax);
    /* 00476ddf: mov ecx, dword ptr [ebp - 0x3c0] */ r_ecx = R32((u32)(r_ebp+0xfffffc40u));
    /* 00476de5: mov dword ptr [ebp - 0x3c4], ecx */ W32((u32)(r_ebp+0xfffffc3cu), r_ecx);
    /* 00476deb: mov dword ptr [ebp - 4], 0x29 */ W32((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 00476df2: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476df8: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00476dfe: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 00476e04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e12: lea eax, [ebp - 0x250] */ r_eax = (u32)(r_ebp+0xfffffdb0u);
    /* 00476e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476e19: mov ecx, dword ptr [ebp - 0x3c4] */ r_ecx = R32((u32)(r_ebp+0xfffffc3cu));
    /* 00476e1f: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x476e24u); f_00485940();
    /* 00476e24: mov dword ptr [ebp - 0x3c8], eax */ W32((u32)(r_ebp+0xfffffc38u), r_eax);
    /* 00476e2a: mov ecx, dword ptr [ebp - 0x3c8] */ r_ecx = R32((u32)(r_ebp+0xfffffc38u));
    /* 00476e30: mov dword ptr [ebp - 0x3cc], ecx */ W32((u32)(r_ebp+0xfffffc34u), r_ecx);
    /* 00476e36: mov dword ptr [ebp - 4], 0x2a */ W32((u32)(r_ebp+0xfffffffcu), 0x2au);
    /* 00476e3d: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476e43: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00476e49: mov dword ptr [ebp - 0x258], edx */ W32((u32)(r_ebp+0xfffffda8u), r_edx);
    /* 00476e4f: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 00476e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476e55: lea ecx, [ebp - 0x251] */ r_ecx = (u32)(r_ebp+0xfffffdafu);
    /* 00476e5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476e5c: mov ecx, dword ptr [ebp - 0x3cc] */ r_ecx = R32((u32)(r_ebp+0xfffffc34u));
    /* 00476e62: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x476e67u); f_004a2160();
    /* 00476e67: mov ecx, eax */ r_ecx = r_eax;
    /* 00476e69: call 0x4a1e10 */ r_esp -= 4; W32(r_esp, 0x476e6eu); f_004a1e10();
    /* 00476e6e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00476e71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476e73: je 0x476e8f */ if (fZ) goto L_00476e8f;
L_00476e75:; BB(0x00476e75);
    /* 00476e75: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00476e77: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476e7cu); f_0062fbf0();
    /* 00476e7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476e7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476e81: jne 0x476e8f */ if (!fZ) goto L_00476e8f;
L_00476e83:; BB(0x00476e83);
    /* 00476e83: mov dword ptr [ebp - 0x3d0], 1 */ W32((u32)(r_ebp+0xfffffc30u), 0x1u);
    /* 00476e8d: jmp 0x476e99 */ goto L_00476e99;
L_00476e8f:; BB(0x00476e8f);
    /* 00476e8f: mov dword ptr [ebp - 0x3d0], 0 */ W32((u32)(r_ebp+0xfffffc30u), 0x0u);
L_00476e99:; BB(0x00476e99);
    /* 00476e99: mov al, byte ptr [ebp - 0x3d0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffc30u))) & 0xffu);
    /* 00476e9f: mov byte ptr [ebp - 0x242], al */ W8((u32)(r_ebp+0xfffffdbeu), (u8)r_eax);
    /* 00476ea5: mov dword ptr [ebp - 4], 0x29 */ W32((u32)(r_ebp+0xfffffffcu), 0x29u);
    /* 00476eac: mov ecx, dword ptr [ebp - 0x258] */ r_ecx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476eb2: and ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00476eb8: je 0x476ecf */ if (fZ) goto L_00476ecf;
L_00476eba:; BB(0x00476eba);
    /* 00476eba: and dword ptr [ebp - 0x258], 0xfdffffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476ec4: lea ecx, [ebp - 0x250] */ r_ecx = (u32)(r_ebp+0xfffffdb0u);
    /* 00476eca: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x476ecfu); f_004a20f0();
L_00476ecf:; BB(0x00476ecf);
    /* 00476ecf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00476ed6: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 00476edc: and edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00476ee2: je 0x476ef9 */ if (fZ) goto L_00476ef9;
L_00476ee4:; BB(0x00476ee4);
    /* 00476ee4: and dword ptr [ebp - 0x258], 0xfeffffff */ { u32 ad = (u32)(r_ebp+0xfffffda8u);  u32 a = R32(ad); u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00476eee: lea ecx, [ebp - 0x24c] */ r_ecx = (u32)(r_ebp+0xfffffdb4u);
    /* 00476ef4: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x476ef9u); f_00484470();
L_00476ef9:; BB(0x00476ef9);
    /* 00476ef9: movzx eax, byte ptr [ebp - 0x242] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffdbeu));
    /* 00476f00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476f02: je 0x476f23 */ if (fZ) goto L_00476f23;
L_00476f04:; BB(0x00476f04);
    /* 00476f04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476f07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476f08: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476f0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476f0f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476f15: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476f1au); f_0047e390();
    /* 00476f1a: mov ecx, eax */ r_ecx = r_eax;
    /* 00476f1c: call 0x4cce40 */ r_esp -= 4; W32(r_esp, 0x476f21u); f_004cce40();
    /* 00476f21: jmp 0x476f6d */ goto L_00476f6d;
L_00476f23:; BB(0x00476f23);
    /* 00476f23: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00476f25: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x476f2au); f_0062fbf0();
    /* 00476f2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00476f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476f2f: jne 0x476f50 */ if (!fZ) goto L_00476f50;
L_00476f31:; BB(0x00476f31);
    /* 00476f31: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476f35: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00476f3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476f3c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476f42: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476f47u); f_0047e390();
    /* 00476f47: mov ecx, eax */ r_ecx = r_eax;
    /* 00476f49: call 0x4ccda0 */ r_esp -= 4; W32(r_esp, 0x476f4eu); f_004ccda0();
    /* 00476f4e: jmp 0x476f6d */ goto L_00476f6d;
L_00476f50:; BB(0x00476f50);
    /* 00476f50: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476f53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476f54: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00476f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476f5b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476f61: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476f66u); f_0047e390();
    /* 00476f66: mov ecx, eax */ r_ecx = r_eax;
    /* 00476f68: call 0x4ccd20 */ r_esp -= 4; W32(r_esp, 0x476f6du); f_004ccd20();
L_00476f6d:; BB(0x00476f6d);
    /* 00476f6d: jmp 0x476f8c */ goto L_00476f8c;
L_00476f6f:; BB(0x00476f6f);
    /* 00476f6f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476f72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476f73: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00476f79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476f7a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476f80: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476f85u); f_0047e390();
    /* 00476f85: mov ecx, eax */ r_ecx = r_eax;
    /* 00476f87: call 0x4ccd20 */ r_esp -= 4; W32(r_esp, 0x476f8cu); f_004ccd20();
L_00476f8c:; BB(0x00476f8c);
    /* 00476f8c: jmp 0x47701e */ goto L_0047701e;
L_00476f91:; BB(0x00476f91);
    /* 00476f91: cmp dword ptr [0x791300], 0xc */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476f98: jne 0x476fb9 */ if (!fZ) goto L_00476fb9;
L_00476f9a:; BB(0x00476f9a);
    /* 00476f9a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476f9e: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 00476fa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476fa5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476fab: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476fb0u); f_0047e390();
    /* 00476fb0: mov ecx, eax */ r_ecx = r_eax;
    /* 00476fb2: call 0x4ccca0 */ r_esp -= 4; W32(r_esp, 0x476fb7u); f_004ccca0();
    /* 00476fb7: jmp 0x47701e */ goto L_0047701e;
L_00476fb9:; BB(0x00476fb9);
    /* 00476fb9: cmp dword ptr [0x791300], 0xe */ {  u32 a = R32((u32)(0x791300u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00476fc0: jne 0x477009 */ if (!fZ) goto L_00477009;
L_00476fc2:; BB(0x00476fc2);
    /* 00476fc2: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00476fc9: jl 0x476fea */ if ((fS!=fO)) goto L_00476fea;
L_00476fcb:; BB(0x00476fcb);
    /* 00476fcb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476fce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476fcf: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00476fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00476fd6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476fdc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x476fe1u); f_0047e390();
    /* 00476fe1: mov ecx, eax */ r_ecx = r_eax;
    /* 00476fe3: call 0x4ccfe0 */ r_esp -= 4; W32(r_esp, 0x476fe8u); f_004ccfe0();
    /* 00476fe8: jmp 0x477007 */ goto L_00477007;
L_00476fea:; BB(0x00476fea);
    /* 00476fea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00476fed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00476fee: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00476ff4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00476ff5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00476ffb: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x477000u); f_0047e390();
    /* 00477000: mov ecx, eax */ r_ecx = r_eax;
    /* 00477002: call 0x4ccfe0 */ r_esp -= 4; W32(r_esp, 0x477007u); f_004ccfe0();
L_00477007:; BB(0x00477007);
    /* 00477007: jmp 0x47701e */ goto L_0047701e;
L_00477009:; BB(0x00477009);
    /* 00477009: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047700b: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477011: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00477013: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477019: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047701c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47701eu); call_ind(t); }
L_0047701e:; BB(0x0047701e);
    /* 0047701e: jmp 0x477035 */ goto L_00477035;
L_00477020:; BB(0x00477020);
    /* 00477020: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00477022: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477028: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047702a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477030: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00477033: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x477035u); call_ind(t); }
L_00477035:; BB(0x00477035);
    /* 00477035: jmp 0x477253 */ goto L_00477253;
L_0047703a:; BB(0x0047703a);
    /* 0047703a: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0047703c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477042: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00477044: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047704a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047704d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47704fu); call_ind(t); }
    /* 0047704f: mov ecx, dword ptr [0x791314] */ r_ecx = R32((u32)(0x791314u));
    /* 00477055: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477056: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047705c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x477061u); f_0047e390();
    /* 00477061: mov ecx, eax */ r_ecx = r_eax;
    /* 00477063: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x477068u); f_004c6cb0();
    /* 00477068: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047706b: jne 0x477103 */ if (!fZ) goto L_00477103;
L_00477071:; BB(0x00477071);
    /* 00477071: mov edx, dword ptr [0x791314] */ r_edx = R32((u32)(0x791314u));
    /* 00477077: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
L_0047707d:; BB(0x0047707d);
    /* 0047707d: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 00477083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00477084: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047708a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47708fu); f_0047e390();
    /* 0047708f: mov ecx, eax */ r_ecx = r_eax;
    /* 00477091: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x477096u); f_004c6cb0();
    /* 00477096: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477099: je 0x4770b7 */ if (fZ) goto L_004770b7;
L_0047709b:; BB(0x0047709b);
    /* 0047709b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004770a1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4770a6u); f_0047f950();
    /* 004770a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004770a7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4770acu); f_0062fbf0();
    /* 004770ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004770af: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 004770b5: jmp 0x47707d */ goto L_0047707d;
L_004770b7:; BB(0x004770b7);
    /* 004770b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004770b9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4770beu); f_0062fbf0();
    /* 004770be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004770c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004770c3: jne 0x4770e4 */ if (!fZ) goto L_004770e4;
L_004770c5:; BB(0x004770c5);
    /* 004770c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004770c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004770c9: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 004770cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004770d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004770d6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4770dbu); f_0047e390();
    /* 004770db: mov ecx, eax */ r_ecx = r_eax;
    /* 004770dd: call 0x4cd1b0 */ r_esp -= 4; W32(r_esp, 0x4770e2u); f_004cd1b0();
    /* 004770e2: jmp 0x477101 */ goto L_00477101;
L_004770e4:; BB(0x004770e4);
    /* 004770e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004770e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004770e8: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 004770ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004770ef: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004770f5: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4770fau); f_0047e390();
    /* 004770fa: mov ecx, eax */ r_ecx = r_eax;
    /* 004770fc: call 0x4cd190 */ r_esp -= 4; W32(r_esp, 0x477101u); f_004cd190();
L_00477101:; BB(0x00477101);
    /* 00477101: jmp 0x47714d */ goto L_0047714d;
L_00477103:; BB(0x00477103);
    /* 00477103: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00477105: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47710au); f_0062fbf0();
    /* 0047710a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047710d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00477110: jne 0x477130 */ if (!fZ) goto L_00477130;
L_00477112:; BB(0x00477112);
    /* 00477112: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00477115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00477116: mov eax, dword ptr [0x791314] */ r_eax = R32((u32)(0x791314u));
    /* 0047711b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047711c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477122: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x477127u); f_0047e390();
    /* 00477127: mov ecx, eax */ r_ecx = r_eax;
    /* 00477129: call 0x4cd1d0 */ r_esp -= 4; W32(r_esp, 0x47712eu); f_004cd1d0();
    /* 0047712e: jmp 0x47714d */ goto L_0047714d;
L_00477130:; BB(0x00477130);
    /* 00477130: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00477133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00477134: mov edx, dword ptr [0x791314] */ r_edx = R32((u32)(0x791314u));
    /* 0047713a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047713b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477141: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x477146u); f_0047e390();
    /* 00477146: mov ecx, eax */ r_ecx = r_eax;
    /* 00477148: call 0x4cd170 */ r_esp -= 4; W32(r_esp, 0x47714du); f_004cd170();
L_0047714d:; BB(0x0047714d);
    /* 0047714d: jmp 0x477253 */ goto L_00477253;
L_00477152:; BB(0x00477152);
    /* 00477152: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00477154: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047715a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047715c: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477162: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00477165: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x477167u); call_ind(t); }
    /* 00477167: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00477169: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047716f: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x477174u); f_00637810();
    /* 00477174: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00477177: jge 0x4771a8 */ if ((fS==fO)) goto L_004771a8;
L_00477179:; BB(0x00477179);
    /* 00477179: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047717b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00477181: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x477186u); f_00637810();
    /* 00477186: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00477188: jl 0x4771a8 */ if ((fS!=fO)) goto L_004771a8;
L_0047718a:; BB(0x0047718a);
    /* 0047718a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047718c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00477192: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x477197u); f_00637810();
    /* 00477197: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047719a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047719b: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771a1: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x4771a6u); f_005fc490();
    /* 004771a6: jmp 0x4771b5 */ goto L_004771b5;
L_004771a8:; BB(0x004771a8);
    /* 004771a8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004771aa: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771b0: call 0x5fc490 */ r_esp -= 4; W32(r_esp, 0x4771b5u); f_005fc490();
L_004771b5:; BB(0x004771b5);
    /* 004771b5: jmp 0x477253 */ goto L_00477253;
L_004771ba:; BB(0x004771ba);
    /* 004771ba: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 004771bc: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004771c4: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771ca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004771cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4771cfu); call_ind(t); }
    /* 004771cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004771d1: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004771d9: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771df: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004771e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4771e4u); call_ind(t); }
    /* 004771e4: jmp 0x477253 */ goto L_00477253;
L_004771e6:; BB(0x004771e6);
    /* 004771e6: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 004771e8: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004771f0: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 004771f6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004771f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4771fbu); call_ind(t); }
    /* 004771fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004771fd: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477203: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00477205: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047720b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0047720e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x477210u); call_ind(t); }
    /* 00477210: jmp 0x477253 */ goto L_00477253;
L_00477212:; BB(0x00477212);
    /* 00477212: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477218: call 0x47aaa0 */ r_esp -= 4; W32(r_esp, 0x47721du); f_0047aaa0();
    /* 0047721d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00477223: call 0x47aa30 */ r_esp -= 4; W32(r_esp, 0x477228u); f_0047aa30();
    /* 00477228: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047722a: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477230: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00477233: mov eax, dword ptr [ebp - 0x25c] */ r_eax = R32((u32)(r_ebp+0xfffffda4u));
    /* 00477239: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0047723c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047723e: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00477241: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x477243u); call_ind(t); }
    /* 00477243: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00477245: mov ecx, dword ptr [ebp - 0x25c] */ r_ecx = R32((u32)(r_ebp+0xfffffda4u));
    /* 0047724b: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0047724e: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x477253u); f_005fc420();
L_00477253:; BB(0x00477253);
    /* 00477253: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00477256: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047725d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047725e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0047725f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00477260: mov esp, ebp */ r_esp = r_ebp;
    /* 00477262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00477263: ret 4 */ FN_RET(0x00470b20); r_esp += 8; return;
}

