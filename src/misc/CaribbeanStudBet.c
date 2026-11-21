#include "protos.h"

void f_004278d0(void) /* CaribbeanStudBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004278d0);
    /* 004278d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004278d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004278d3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004278d6: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004278d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004278db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004278dd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4278e2u); f_0064c8a0();
    /* 004278e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004278e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004278e8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004278eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004278ee: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004278f1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004278f4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004278f7: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 004278fd: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00427903: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00427906: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427909: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042790a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x42790fu); f_005dcb00();
    /* 0042790f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427912: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427914: jne 0x42791b */ if (!fZ) goto L_0042791b;
L_00427916:; BB(0x00427916);
    /* 00427916: jmp 0x427ae5 */ goto L_00427ae5;
L_0042791b:; BB(0x0042791b);
    /* 0042791b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042791e: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00427920: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00427923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427925: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427927: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x42792cu); f_0064c8a0();
    /* 0042792c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042792f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00427932: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00427935: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00427938: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042793b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042793e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00427941: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427944: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427947: jne 0x427962 */ if (!fZ) goto L_00427962;
L_00427949:; BB(0x00427949);
    /* 00427949: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0042794c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042794d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427950: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427951: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427956u); f_005dcb00();
    /* 00427956: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427959: mov ecx, eax */ r_ecx = r_eax;
    /* 0042795b: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x427960u); f_005d5de0();
    /* 00427960: jmp 0x427970 */ goto L_00427970;
L_00427962:; BB(0x00427962);
    /* 00427962: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00427965: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00427967: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0042796a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042796d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00427970:; BB(0x00427970);
    /* 00427970: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427974: jne 0x42798f */ if (!fZ) goto L_0042798f;
L_00427976:; BB(0x00427976);
    /* 00427976: mov edx, dword ptr [0x790354] */ r_edx = R32((u32)(0x790354u));
    /* 0042797c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042797e: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00427984: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0042798a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42798cu); call_ind(t); }
    /* 0042798c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0042798f:; BB(0x0042798f);
    /* 0042798f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427993: jle 0x427ad1 */ if ((fZ||fS!=fO)) goto L_00427ad1;
L_00427999:; BB(0x00427999);
    /* 00427999: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0042799c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042799d: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004279a3: call 0x426560 */ r_esp -= 4; W32(r_esp, 0x4279a8u); f_00426560();
    /* 004279a8: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004279ab: jne 0x427a3c */ if (!fZ) goto L_00427a3c;
L_004279b1:; BB(0x004279b1);
    /* 004279b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004279b4: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004279b7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004279ba: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 004279be: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004279c1: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 004279c4: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 004279c8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 004279cb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004279ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004279d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004279d2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004279d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004279d6: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 004279d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004279da: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 004279dd: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4279e2u); f_0064c5c0();
    /* 004279e2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004279e4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004279e7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004279ea: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004279ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004279f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004279f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4279f6u); f_005dcb00();
    /* 004279f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004279f9: mov ecx, eax */ r_ecx = r_eax;
    /* 004279fb: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x427a00u); f_005d5a50();
    /* 00427a00: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00427a03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00427a06: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00427a08: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427a0a: jge 0x427a37 */ if ((fS==fO)) goto L_00427a37;
L_00427a0c:; BB(0x00427a0c);
    /* 00427a0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427a0e: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 00427a13: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x427a18u); f_00630f40();
    /* 00427a18: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427a1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427a1c: push 0x6b691c */ { u32 v = 0x6b691cu; r_esp -= 4; W32(r_esp, v); }
    /* 00427a21: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x427a26u); f_00630f40();
    /* 00427a26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427a29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427a2a: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x427a2fu); f_0062ff10();
    /* 00427a2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427a32: jmp 0x427ae5 */ goto L_00427ae5;
L_00427a37:; BB(0x00427a37);
    /* 00427a37: jmp 0x427ad1 */ goto L_00427ad1;
L_00427a3c:; BB(0x00427a3c);
    /* 00427a3c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00427a3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427a40: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00427a46: call 0x426560 */ r_esp -= 4; W32(r_esp, 0x427a4bu); f_00426560();
    /* 00427a4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00427a4e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00427a51: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427a53: jne 0x427ad1 */ if (!fZ) goto L_00427ad1;
L_00427a55:; BB(0x00427a55);
    /* 00427a55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427a58: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00427a5b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00427a5e: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00427a62: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00427a65: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 00427a68: mov ecx, dword ptr [ecx + edx*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 00427a6c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00427a6f: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00427a72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427a75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427a76: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427a7a: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00427a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427a7e: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 00427a81: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x427a86u); f_0064c5c0();
    /* 00427a86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427a88: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00427a8b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00427a8e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00427a91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427a94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427a95: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x427a9au); f_005dcb00();
    /* 00427a9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427a9d: mov ecx, eax */ r_ecx = r_eax;
    /* 00427a9f: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x427aa4u); f_005d5a50();
    /* 00427aa4: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427aa7: jge 0x427ad1 */ if ((fS==fO)) goto L_00427ad1;
L_00427aa9:; BB(0x00427aa9);
    /* 00427aa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00427aab: push 0x6b6940 */ { u32 v = 0x6b6940u; r_esp -= 4; W32(r_esp, v); }
    /* 00427ab0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x427ab5u); f_00630f40();
    /* 00427ab5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427ab9: push 0x6b691c */ { u32 v = 0x6b691cu; r_esp -= 4; W32(r_esp, v); }
    /* 00427abe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x427ac3u); f_00630f40();
    /* 00427ac3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427ac7: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x427accu); f_0062ff10();
    /* 00427acc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427acf: jmp 0x427ae5 */ goto L_00427ae5;
L_00427ad1:; BB(0x00427ad1);
    /* 00427ad1: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00427ad4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00427ad5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00427ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427ad9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00427adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427add: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00427ae0: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x427ae5u); f_005cba10();
L_00427ae5:; BB(0x00427ae5);
    /* 00427ae5: mov esp, ebp */ r_esp = r_ebp;
    /* 00427ae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427ae8: ret 0xc */ FN_RET(0x004278d0); r_esp += 16; return;
}

void f_00427e40(void) /* CaribbeanStudBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427e40);
    /* 00427e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00427e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00427e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427e47: cmp dword ptr [0x790360], 0 */ {  u32 a = R32((u32)(0x790360u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e4e: je 0x427e68 */ if (fZ) goto L_00427e68;
L_00427e50:; BB(0x00427e50);
    /* 00427e50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00427e53: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x427e58u); f_005f5400();
    /* 00427e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427e59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00427e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00427e5d: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00427e63: call 0x41f6b0 */ r_esp -= 4; W32(r_esp, 0x427e68u); f_0041f6b0();
L_00427e68:; BB(0x00427e68);
    /* 00427e68: mov esp, ebp */ r_esp = r_ebp;
    /* 00427e6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427e6b: ret 8 */ FN_RET(0x00427e40); r_esp += 12; return;
}

void f_00427e70(void) /* CaribbeanStudBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00427e70);
    /* 00427e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00427e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00427e73: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00427e76: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00427e79: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 00427e7e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00427e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00427e87: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427e8b: jne 0x427e94 */ if (!fZ) goto L_00427e94;
L_00427e8d:; BB(0x00427e8d);
    /* 00427e8d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00427e8f: jmp 0x427f53 */ goto L_00427f53;
L_00427e94:; BB(0x00427e94);
    /* 00427e94: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 00427e9a: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 00427ea0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00427ea3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427ea6: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x427eabu); f_005f5400();
    /* 00427eab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00427eac: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00427eae: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00427eb0: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427eb3: jne 0x427f49 */ if (!fZ) goto L_00427f49;
L_00427eb9:; BB(0x00427eb9);
    /* 00427eb9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00427ebc: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x427ec1u); f_005f5400();
    /* 00427ec1: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00427ec6: jns 0x427ecd */ if (!fS) goto L_00427ecd;
L_00427ec8:; BB(0x00427ec8);
    /* 00427ec8: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00427ec9: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00427ecc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00427ecd:; BB(0x00427ecd);
    /* 00427ecd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427ed0: je 0x427f49 */ if (fZ) goto L_00427f49;
L_00427ed2:; BB(0x00427ed2);
    /* 00427ed2: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00427ed8: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x427eddu); f_00426230();
    /* 00427edd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00427ee0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427ee3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x427ee8u); f_0063aac0();
    /* 00427ee8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00427eea: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00427eed: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427ef1: je 0x427f0f */ if (fZ) goto L_00427f0f;
L_00427ef3:; BB(0x00427ef3);
    /* 00427ef3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427ef6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x427efbu); f_0063aac0();
    /* 00427efb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00427efd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00427f00: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427f04: je 0x427f0f */ if (fZ) goto L_00427f0f;
L_00427f06:; BB(0x00427f06);
    /* 00427f06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00427f0d: jmp 0x427f16 */ goto L_00427f16;
L_00427f0f:; BB(0x00427f0f);
    /* 00427f0f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00427f16:; BB(0x00427f16);
    /* 00427f16: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00427f1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427f1c: je 0x427f49 */ if (fZ) goto L_00427f49;
L_00427f1e:; BB(0x00427f1e);
    /* 00427f1e: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 00427f24: call 0x426230 */ r_esp -= 4; W32(r_esp, 0x427f29u); f_00426230();
    /* 00427f29: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00427f2c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427f2f: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00427f35: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 00427f38: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00427f3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00427f3e: jne 0x427f49 */ if (!fZ) goto L_00427f49;
L_00427f40:; BB(0x00427f40);
    /* 00427f40: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00427f47: jmp 0x427f50 */ goto L_00427f50;
L_00427f49:; BB(0x00427f49);
    /* 00427f49: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00427f50:; BB(0x00427f50);
    /* 00427f50: mov al, byte ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
L_00427f53:; BB(0x00427f53);
    /* 00427f53: mov esp, ebp */ r_esp = r_ebp;
    /* 00427f55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00427f56: ret  */ FN_RET(0x00427e70); r_esp += 4; return;
}

