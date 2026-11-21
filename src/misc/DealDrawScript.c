#include "protos.h"

void f_004787e0(void) /* DealDrawScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004787e0);
    /* 004787e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004787e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004787e3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004787e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004787e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004787ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004787ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004787ee: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4787f3u); f_0064c8a0();
    /* 004787f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004787f6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004787f9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004787fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004787ff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00478802: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00478805: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00478808: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047880b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047880c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047880f: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x478814u); f_005fc3a0();
    /* 00478814: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478817: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0047881a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0047881d: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00478821: ja 0x479115 */ if ((!fC&&!fZ)) goto L_00479115;
L_00478827:; BB(0x00478827);
    /* 00478827: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047882a: jmp dword ptr [edx*4 + 0x47911c] */ { u32 t = R32((u32)(r_edx*4+0x47911cu)); switch (t) { case 0x478831u: goto L_00478831; case 0x478c4fu: goto L_00478c4f; case 0x478c8bu: goto L_00478c8b; case 0x478cf1u: goto L_00478cf1; case 0x478d52u: goto L_00478d52; case 0x478d8au: goto L_00478d8a; case 0x478f7eu: goto L_00478f7e; case 0x479115u: goto L_00479115; case 0x4790f3u: goto L_004790f3; default: UNSUP(0x0047882a, "jump table entry is not a known target"); } }
L_00478831:; BB(0x00478831);
    /* 00478831: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00478833: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478839: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x47883eu); f_0047e540();
    /* 0047883e: mov byte ptr [0x7912e8], 0 */ W8((u32)(0x7912e8u), 0x0u);
    /* 00478845: mov dword ptr [0x791308], 0 */ W32((u32)(0x791308u), 0x0u);
    /* 0047884f: mov dword ptr [0x7912f4], 0 */ W32((u32)(0x7912f4u), 0x0u);
    /* 00478859: mov dword ptr [0x79135c], 0 */ W32((u32)(0x79135cu), 0x0u);
    /* 00478863: jmp 0x478872 */ goto L_00478872;
L_00478865:; BB(0x00478865);
    /* 00478865: mov eax, dword ptr [0x79135c] */ r_eax = R32((u32)(0x79135cu));
    /* 0047886a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047886d: mov dword ptr [0x79135c], eax */ W32((u32)(0x79135cu), r_eax);
L_00478872:; BB(0x00478872);
    /* 00478872: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478878: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47887du); f_0047f950();
    /* 0047887d: cmp dword ptr [0x79135c], eax */ {  u32 a = R32((u32)(0x79135cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478883: jge 0x4789c2 */ if ((fS==fO)) goto L_004789c2;
L_00478889:; BB(0x00478889);
    /* 00478889: mov ecx, dword ptr [0x79135c] */ r_ecx = R32((u32)(0x79135cu));
    /* 0047888f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478890: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478896: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47889bu); f_0047e390();
    /* 0047889b: mov byte ptr [eax + 0x1d], 0 */ W8((u32)(r_eax+0x1du), 0x0u);
    /* 0047889f: mov edx, dword ptr [0x79135c] */ r_edx = R32((u32)(0x79135cu));
    /* 004788a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004788a6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004788ac: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4788b1u); f_0047e390();
    /* 004788b1: mov ecx, eax */ r_ecx = r_eax;
    /* 004788b3: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4788b8u); f_004c6cb0();
    /* 004788b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004788ba: je 0x478988 */ if (fZ) goto L_00478988;
L_004788c0:; BB(0x004788c0);
    /* 004788c0: mov eax, dword ptr [0x79135c] */ r_eax = R32((u32)(0x79135cu));
    /* 004788c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004788c6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004788cc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4788d1u); f_0047e390();
    /* 004788d1: mov ecx, eax */ r_ecx = r_eax;
    /* 004788d3: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4788d8u); f_004c6a70();
    /* 004788d8: mov esi, eax */ r_esi = r_eax;
    /* 004788da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004788e0: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4788e5u); f_0047bc20();
    /* 004788e5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004788e7: jl 0x478988 */ if ((fS!=fO)) goto L_00478988;
L_004788ed:; BB(0x004788ed);
    /* 004788ed: mov ecx, dword ptr [0x79135c] */ r_ecx = R32((u32)(0x79135cu));
    /* 004788f3: mov word ptr [ecx*2 + 0x790fb8], 0 */ W16((u32)(r_ecx*2+0x790fb8u), 0x0u);
    /* 004788fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004788ff: mov edx, dword ptr [0x79135c] */ r_edx = R32((u32)(0x79135cu));
    /* 00478905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478906: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047890c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x478911u); f_0047e390();
    /* 00478911: mov ecx, eax */ r_ecx = r_eax;
    /* 00478913: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x478918u); f_004c7030();
    /* 00478918: mov eax, dword ptr [0x791308] */ r_eax = R32((u32)(0x791308u));
    /* 0047891d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047891e: mov ecx, dword ptr [0x79135c] */ r_ecx = R32((u32)(0x79135cu));
    /* 00478924: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478925: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047892b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x478930u); f_0047e390();
    /* 00478930: mov ecx, eax */ r_ecx = r_eax;
    /* 00478932: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x478937u); f_004c7070();
    /* 00478937: mov edx, dword ptr [0x79135c] */ r_edx = R32((u32)(0x79135cu));
    /* 0047893d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047893e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478944: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x478949u); f_0047e390();
    /* 00478949: mov ecx, eax */ r_ecx = r_eax;
    /* 0047894b: call 0x4c9160 */ r_esp -= 4; W32(r_esp, 0x478950u); f_004c9160();
    /* 00478950: mov eax, dword ptr [0x79135c] */ r_eax = R32((u32)(0x79135cu));
    /* 00478955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478956: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047895c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x478961u); f_0047e390();
    /* 00478961: mov ecx, eax */ r_ecx = r_eax;
    /* 00478963: call 0x4dd760 */ r_esp -= 4; W32(r_esp, 0x478968u); f_004dd760();
    /* 00478968: mov ecx, dword ptr [0x791308] */ r_ecx = R32((u32)(0x791308u));
    /* 0047896e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478971: mov dword ptr [0x791308], ecx */ W32((u32)(0x791308u), r_ecx);
    /* 00478977: mov edx, dword ptr [0x7912f4] */ r_edx = R32((u32)(0x7912f4u));
    /* 0047897d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00478980: mov dword ptr [0x7912f4], edx */ W32((u32)(0x7912f4u), r_edx);
    /* 00478986: jmp 0x4789bd */ goto L_004789bd;
L_00478988:; BB(0x00478988);
    /* 00478988: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047898a: mov eax, dword ptr [0x79135c] */ r_eax = R32((u32)(0x79135cu));
    /* 0047898f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478990: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478996: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47899bu); f_0047e390();
    /* 0047899b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047899d: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x4789a2u); f_004c7030();
    /* 004789a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004789a4: mov ecx, dword ptr [0x79135c] */ r_ecx = R32((u32)(0x79135cu));
    /* 004789aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004789ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004789b1: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4789b6u); f_0047e390();
    /* 004789b6: mov ecx, eax */ r_ecx = r_eax;
    /* 004789b8: call 0x4c7070 */ r_esp -= 4; W32(r_esp, 0x4789bdu); f_004c7070();
L_004789bd:; BB(0x004789bd);
    /* 004789bd: jmp 0x478865 */ goto L_00478865;
L_004789c2:; BB(0x004789c2);
    /* 004789c2: cmp dword ptr [0x791308], 2 */ {  u32 a = R32((u32)(0x791308u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004789c9: jge 0x4789ee */ if ((fS==fO)) goto L_004789ee;
L_004789cb:; BB(0x004789cb);
    /* 004789cb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004789cd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004789d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004789d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004789d5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004789d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4789dau); call_ind(t); }
    /* 004789da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004789dc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004789df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004789e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004789e4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004789e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4789e9u); call_ind(t); }
    /* 004789e9: jmp 0x479115 */ goto L_00479115;
L_004789ee:; BB(0x004789ee);
    /* 004789ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004789f4: call 0x47e860 */ r_esp -= 4; W32(r_esp, 0x4789f9u); f_0047e860();
    /* 004789f9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004789ff: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x478a04u); f_0047e170();
    /* 00478a04: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478a07: jne 0x478a0e */ if (!fZ) goto L_00478a0e;
L_00478a09:; BB(0x00478a09);
    /* 00478a09: jmp 0x478be0 */ goto L_00478be0;
L_00478a0e:; BB(0x00478a0e);
    /* 00478a0e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478a14: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x478a19u); f_0047d6b0();
    /* 00478a19: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478a1c: jne 0x478b04 */ if (!fZ) goto L_00478b04;
L_00478a22:; BB(0x00478a22);
    /* 00478a22: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478a28: cmp dword ptr [ecx + 0xd0], -1 */ {  u32 a = R32((u32)(r_ecx+0xd0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478a2f: jne 0x478a70 */ if (!fZ) goto L_00478a70;
L_00478a31:; BB(0x00478a31);
    /* 00478a31: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478a37: cmp dword ptr [edx + 0xd4], -1 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478a3e: je 0x478a59 */ if (fZ) goto L_00478a59;
L_00478a40:; BB(0x00478a40);
    /* 00478a40: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478a46: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478a4bu); f_0047bbc0();
    /* 00478a4b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478a51: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00478a57: jmp 0x478a70 */ goto L_00478a70;
L_00478a59:; BB(0x00478a59);
    /* 00478a59: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478a5f: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00478a64: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00478a6a: mov dword ptr [edx + 0xd0], ecx */ W32((u32)(r_edx+0xd0u), r_ecx);
L_00478a70:; BB(0x00478a70);
    /* 00478a70: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478a76: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00478a7c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00478a7f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478a85: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00478a8b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478a91: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x478a96u); f_0047f950();
    /* 00478a96: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00478a99: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478a9f: cmp dword ptr [edx + 0xd0], eax */ {  u32 a = R32((u32)(r_edx+0xd0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478aa5: jle 0x478ab6 */ if ((fZ||fS!=fO)) goto L_00478ab6;
L_00478aa7:; BB(0x00478aa7);
    /* 00478aa7: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00478aac: mov dword ptr [eax + 0xd0], 0 */ W32((u32)(r_eax+0xd0u), 0x0u);
L_00478ab6:; BB(0x00478ab6);
    /* 00478ab6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478abc: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00478ac2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478ac3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478ac9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x478aceu); f_0047e390();
    /* 00478ace: mov ecx, eax */ r_ecx = r_eax;
    /* 00478ad0: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478ad5u); f_004c7010();
    /* 00478ad5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478ad7: je 0x478a70 */ if (fZ) goto L_00478a70;
L_00478ad9:; BB(0x00478ad9);
    /* 00478ad9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478adf: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478ae4u); f_0047bbc0();
    /* 00478ae4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478aea: cmp eax, dword ptr [ecx + 0xd0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478af0: je 0x478aff */ if (fZ) goto L_00478aff;
L_00478af2:; BB(0x00478af2);
    /* 00478af2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478af8: call 0x47bac0 */ r_esp -= 4; W32(r_esp, 0x478afdu); f_0047bac0();
    /* 00478afd: jmp 0x478ad9 */ goto L_00478ad9;
L_00478aff:; BB(0x00478aff);
    /* 00478aff: jmp 0x478be0 */ goto L_00478be0;
L_00478b04:; BB(0x00478b04);
    /* 00478b04: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478b0a: cmp dword ptr [edx + 0xd4], -1 */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478b11: jne 0x478b51 */ if (!fZ) goto L_00478b51;
L_00478b13:; BB(0x00478b13);
    /* 00478b13: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00478b18: cmp dword ptr [eax + 0xd0], -1 */ {  u32 a = R32((u32)(r_eax+0xd0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478b1f: je 0x478b3a */ if (fZ) goto L_00478b3a;
L_00478b21:; BB(0x00478b21);
    /* 00478b21: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478b27: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478b2cu); f_0047bbc0();
    /* 00478b2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478b32: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00478b38: jmp 0x478b51 */ goto L_00478b51;
L_00478b3a:; BB(0x00478b3a);
    /* 00478b3a: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478b40: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00478b45: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 00478b4b: mov dword ptr [edx + 0xd4], ecx */ W32((u32)(r_edx+0xd4u), r_ecx);
L_00478b51:; BB(0x00478b51);
    /* 00478b51: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478b57: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00478b5d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00478b60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478b66: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00478b6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478b72: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x478b77u); f_0047f950();
    /* 00478b77: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00478b7a: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00478b80: cmp dword ptr [edx + 0xd4], eax */ {  u32 a = R32((u32)(r_edx+0xd4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00478b86: jle 0x478b97 */ if ((fZ||fS!=fO)) goto L_00478b97;
L_00478b88:; BB(0x00478b88);
    /* 00478b88: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00478b8d: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
L_00478b97:; BB(0x00478b97);
    /* 00478b97: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478b9d: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 00478ba3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478ba4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478baa: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x478bafu); f_0047e390();
    /* 00478baf: mov ecx, eax */ r_ecx = r_eax;
    /* 00478bb1: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478bb6u); f_004c7010();
    /* 00478bb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478bb8: je 0x478b51 */ if (fZ) goto L_00478b51;
L_00478bba:; BB(0x00478bba);
    /* 00478bba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478bc0: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478bc5u); f_0047bbc0();
    /* 00478bc5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478bcb: cmp eax, dword ptr [ecx + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478bd1: je 0x478be0 */ if (fZ) goto L_00478be0;
L_00478bd3:; BB(0x00478bd3);
    /* 00478bd3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478bd9: call 0x47bac0 */ r_esp -= 4; W32(r_esp, 0x478bdeu); f_0047bac0();
    /* 00478bde: jmp 0x478bba */ goto L_00478bba;
L_00478be0:; BB(0x00478be0);
    /* 00478be0: mov dword ptr [0x791358], 0 */ W32((u32)(0x791358u), 0x0u);
    /* 00478bea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478bf0: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478bf5u); f_0047bbc0();
    /* 00478bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478bf6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478bfc: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x478c01u); f_0047e400();
L_00478c01:; BB(0x00478c01);
    /* 00478c01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478c07: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x478c0cu); f_0047e440();
    /* 00478c0c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478c12: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478c17u); f_0047e3b0();
    /* 00478c17: mov ecx, eax */ r_ecx = r_eax;
    /* 00478c19: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478c1eu); f_004c7010();
    /* 00478c1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478c20: je 0x478c01 */ if (fZ) goto L_00478c01;
L_00478c22:; BB(0x00478c22);
    /* 00478c22: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c25: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00478c2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00478c2e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00478c33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c36: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00478c39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478c3bu); call_ind(t); }
    /* 00478c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478c3d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c40: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478c42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c45: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00478c48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478c4au); call_ind(t); }
    /* 00478c4a: jmp 0x479115 */ goto L_00479115;
L_00478c4f:; BB(0x00478c4f);
    /* 00478c4f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478c55: call 0x47ecf0 */ r_esp -= 4; W32(r_esp, 0x478c5au); f_0047ecf0();
    /* 00478c5a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478c60: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00478c63: call 0x4654d0 */ r_esp -= 4; W32(r_esp, 0x478c68u); f_004654d0();
    /* 00478c68: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00478c6a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00478c6f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c72: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00478c75: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x478c77u); call_ind(t); }
    /* 00478c77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478c79: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00478c7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478c81: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00478c84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478c86u); call_ind(t); }
    /* 00478c86: jmp 0x479115 */ goto L_00479115;
L_00478c8b:; BB(0x00478c8b);
    /* 00478c8b: mov cx, word ptr [0x791308] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x791308u))) & 0xffffu);
    /* 00478c92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478c93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478c99: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478c9c: call 0x4f4320 */ r_esp -= 4; W32(r_esp, 0x478ca1u); f_004f4320();
    /* 00478ca1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478ca3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478ca9: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x478caeu); f_0047ec90();
    /* 00478cae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478cb4: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x478cb9u); f_0047d6b0();
    /* 00478cb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478cbb: jne 0x478cce */ if (!fZ) goto L_00478cce;
L_00478cbd:; BB(0x00478cbd);
    /* 00478cbd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00478cbf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478cc2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00478cc4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478cc7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00478cca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x478cccu); call_ind(t); }
    /* 00478ccc: jmp 0x478cdd */ goto L_00478cdd;
L_00478cce:; BB(0x00478cce);
    /* 00478cce: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00478cd0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478cd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00478cd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478cd8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00478cdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478cddu); call_ind(t); }
L_00478cdd:; BB(0x00478cdd);
    /* 00478cdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478cdf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478ce2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478ce4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478ce7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00478cea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478cecu); call_ind(t); }
    /* 00478cec: jmp 0x479115 */ goto L_00479115;
L_00478cf1:; BB(0x00478cf1);
    /* 00478cf1: mov dword ptr [0x7912f0], 1 */ W32((u32)(0x7912f0u), 0x1u);
    /* 00478cfb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478d01: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478d06u); f_0047e3b0();
    /* 00478d06: mov ecx, eax */ r_ecx = r_eax;
    /* 00478d08: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x478d0du); f_004c7050();
    /* 00478d0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478d0e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478d14: call 0x47bc60 */ r_esp -= 4; W32(r_esp, 0x478d19u); f_0047bc60();
    /* 00478d19: imul eax, dword ptr [0x7912f0] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x7912f0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00478d20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478d21: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478d27: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478d2a: call 0x4f5110 */ r_esp -= 4; W32(r_esp, 0x478d2fu); f_004f5110();
    /* 00478d2f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00478d31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478d36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d39: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00478d3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478d3eu); call_ind(t); }
    /* 00478d3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478d40: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d43: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478d45: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d48: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00478d4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478d4du); call_ind(t); }
    /* 00478d4d: jmp 0x479115 */ goto L_00479115;
L_00478d52:; BB(0x00478d52);
    /* 00478d52: call 0x477320 */ r_esp -= 4; W32(r_esp, 0x478d57u); f_00477320();
    /* 00478d57: mov dword ptr [0x7912ec], eax */ W32((u32)(0x7912ecu), r_eax);
    /* 00478d5c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478d62: call 0x47e500 */ r_esp -= 4; W32(r_esp, 0x478d67u); f_0047e500();
    /* 00478d67: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00478d69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d6c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478d6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d71: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00478d74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478d76u); call_ind(t); }
    /* 00478d76: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00478d78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d7b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478d7d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478d80: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00478d83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478d85u); call_ind(t); }
    /* 00478d85: jmp 0x479115 */ goto L_00479115;
L_00478d8a:; BB(0x00478d8a);
    /* 00478d8a: cmp dword ptr [0x7912ec], -1 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478d91: jne 0x478ddf */ if (!fZ) goto L_00478ddf;
L_00478d93:; BB(0x00478d93);
    /* 00478d93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478d99: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478d9eu); f_0047bbc0();
    /* 00478d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478d9f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478da5: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x478daau); f_0047e400();
L_00478daa:; BB(0x00478daa);
    /* 00478daa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478db0: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x478db5u); f_0047e440();
    /* 00478db5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478dbb: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478dc0u); f_0047e3b0();
    /* 00478dc0: mov ecx, eax */ r_ecx = r_eax;
    /* 00478dc2: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478dc7u); f_004c7010();
    /* 00478dc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478dc9: je 0x478daa */ if (fZ) goto L_00478daa;
L_00478dcb:; BB(0x00478dcb);
    /* 00478dcb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00478dcd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478dd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478dd2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478dd5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00478dd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478ddau); call_ind(t); }
    /* 00478dda: jmp 0x478f6a */ goto L_00478f6a;
L_00478ddf:; BB(0x00478ddf);
    /* 00478ddf: cmp dword ptr [0x7912ec], -3 */ {  u32 a = R32((u32)(0x7912ecu)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478de6: jne 0x478f3d */ if (!fZ) goto L_00478f3d;
L_00478dec:; BB(0x00478dec);
    /* 00478dec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478df2: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x478df7u); f_0047bbc0();
    /* 00478df7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478df8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478dfe: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x478e03u); f_0047e400();
L_00478e03:; BB(0x00478e03);
    /* 00478e03: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e09: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x478e0eu); f_0047e440();
    /* 00478e0e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e14: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478e19u); f_0047e3b0();
    /* 00478e19: mov ecx, eax */ r_ecx = r_eax;
    /* 00478e1b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478e20u); f_004c7010();
    /* 00478e20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478e22: je 0x478e03 */ if (fZ) goto L_00478e03;
L_00478e24:; BB(0x00478e24);
    /* 00478e24: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e2a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478e2d: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x478e32u); f_004f6420();
    /* 00478e32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00478e34: jle 0x478f25 */ if ((fZ||fS!=fO)) goto L_00478f25;
L_00478e3a:; BB(0x00478e3a);
    /* 00478e3a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e40: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478e43: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x478e48u); f_004f6420();
    /* 00478e48: mov esi, eax */ r_esi = r_eax;
    /* 00478e4a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e50: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x478e55u); f_0047bc20();
    /* 00478e55: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00478e58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00478e59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e5f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478e62: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x478e67u); f_004f64b0();
    /* 00478e67: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00478e6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478e6b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e71: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x478e76u); f_0047e3d0();
    /* 00478e76: mov ecx, eax */ r_ecx = r_eax;
    /* 00478e78: call 0x4c6b80 */ r_esp -= 4; W32(r_esp, 0x478e7du); f_004c6b80();
    /* 00478e7d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e83: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478e86: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x478e8bu); f_004f64b0();
    /* 00478e8b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00478e8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478e8f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478e95: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x478e9au); f_0047e3d0();
    /* 00478e9a: mov ecx, eax */ r_ecx = r_eax;
    /* 00478e9c: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x478ea1u); f_004da300();
    /* 00478ea1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478ea3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478ea9: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x478eaeu); f_0047ec90();
    /* 00478eae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478eb4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478eb7: call 0x4f64b0 */ r_esp -= 4; W32(r_esp, 0x478ebcu); f_004f64b0();
    /* 00478ebc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00478ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478ec0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478ec6: call 0x47e3d0 */ r_esp -= 4; W32(r_esp, 0x478ecbu); f_0047e3d0();
    /* 00478ecb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00478ece: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00478ed1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478ed3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478ed9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00478edc: call 0x4f6420 */ r_esp -= 4; W32(r_esp, 0x478ee1u); f_004f6420();
    /* 00478ee1: mov esi, eax */ r_esi = r_eax;
    /* 00478ee3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478ee9: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x478eeeu); f_0047bc20();
    /* 00478eee: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00478ef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00478ef2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x478ef7u); f_0064c8a0();
    /* 00478ef7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00478efa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00478efd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00478f00: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00478f03: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00478f06: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00478f09: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00478f0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00478f0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478f10: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00478f13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00478f14: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f16: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00478f19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478f1a: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 00478f20: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x478f25u); f_005e7e40();
L_00478f25:; BB(0x00478f25);
    /* 00478f25: mov byte ptr [0x7912e8], 1 */ W8((u32)(0x7912e8u), 0x1u);
    /* 00478f2c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478f31: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00478f33: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478f36: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00478f39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478f3bu); call_ind(t); }
    /* 00478f3b: jmp 0x478f6a */ goto L_00478f6a;
L_00478f3d:; BB(0x00478f3d);
    /* 00478f3d: mov ecx, dword ptr [0x7912ec] */ r_ecx = R32((u32)(0x7912ecu));
    /* 00478f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478f44: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478f4a: call 0x47e490 */ r_esp -= 4; W32(r_esp, 0x478f4fu); f_0047e490();
    /* 00478f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478f50: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478f56: call 0x47e400 */ r_esp -= 4; W32(r_esp, 0x478f5bu); f_0047e400();
    /* 00478f5b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f5d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478f60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00478f62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478f65: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00478f68: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x478f6au); call_ind(t); }
L_00478f6a:; BB(0x00478f6a);
    /* 00478f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f6c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478f6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00478f71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478f74: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00478f77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x478f79u); call_ind(t); }
    /* 00478f79: jmp 0x479115 */ goto L_00479115;
L_00478f7e:; BB(0x00478f7e);
    /* 00478f7e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478f84: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478f89u); f_0047e3b0();
    /* 00478f89: mov ecx, eax */ r_ecx = r_eax;
    /* 00478f8b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478f90u); f_004c7010();
    /* 00478f90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478f92: je 0x479042 */ if (fZ) goto L_00479042;
L_00478f98:; BB(0x00478f98);
    /* 00478f98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478f9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478fa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00478fa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478fa4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00478fa6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478fac: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478fb1u); f_0047e3b0();
    /* 00478fb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478fb2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478fb8: call 0x47b010 */ r_esp -= 4; W32(r_esp, 0x478fbdu); f_0047b010();
L_00478fbd:; BB(0x00478fbd);
    /* 00478fbd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478fc3: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x478fc8u); f_0047e440();
    /* 00478fc8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00478fce: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x478fd3u); f_0047e3b0();
    /* 00478fd3: mov ecx, eax */ r_ecx = r_eax;
    /* 00478fd5: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x478fdau); f_004c7010();
    /* 00478fda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478fdc: je 0x478fbd */ if (fZ) goto L_00478fbd;
L_00478fde:; BB(0x00478fde);
    /* 00478fde: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478fe1: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00478fe4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00478fe7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478fea: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00478fed: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478ff0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00478ff3: cmp eax, dword ptr [0x791308] */ {  u32 a = r_eax; u32 b = R32((u32)(0x791308u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478ff9: jne 0x479014 */ if (!fZ) goto L_00479014;
L_00478ffb:; BB(0x00478ffb);
    /* 00478ffb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00478ffe: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00479005: mov edx, dword ptr [0x791358] */ r_edx = R32((u32)(0x791358u));
    /* 0047900b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047900e: mov dword ptr [0x791358], edx */ W32((u32)(0x791358u), r_edx);
L_00479014:; BB(0x00479014);
    /* 00479014: cmp dword ptr [0x791358], 5 */ {  u32 a = R32((u32)(0x791358u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047901b: jge 0x47902e */ if ((fS==fO)) goto L_0047902e;
L_0047901d:; BB(0x0047901d);
    /* 0047901d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047901f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479022: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00479024: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479027: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047902a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47902cu); call_ind(t); }
    /* 0047902c: jmp 0x47903d */ goto L_0047903d;
L_0047902e:; BB(0x0047902e);
    /* 0047902e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00479030: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479033: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479035: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479038: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047903b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47903du); call_ind(t); }
L_0047903d:; BB(0x0047903d);
    /* 0047903d: jmp 0x4790f1 */ goto L_004790f1;
L_00479042:; BB(0x00479042);
    /* 00479042: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00479048: call 0x47e440 */ r_esp -= 4; W32(r_esp, 0x47904du); f_0047e440();
    /* 0047904d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00479053: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x479058u); f_0047e3b0();
    /* 00479058: mov ecx, eax */ r_ecx = r_eax;
    /* 0047905a: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x47905fu); f_004c7010();
    /* 0047905f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479061: je 0x479042 */ if (fZ) goto L_00479042;
L_00479063:; BB(0x00479063);
    /* 00479063: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479066: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00479069: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047906c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047906f: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00479072: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479075: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00479078: cmp edx, dword ptr [0x791308] */ {  u32 a = r_edx; u32 b = R32((u32)(0x791308u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047907e: jne 0x4790d3 */ if (!fZ) goto L_004790d3;
L_00479080:; BB(0x00479080);
    /* 00479080: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479083: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0047908a: mov ecx, dword ptr [0x791358] */ r_ecx = R32((u32)(0x791358u));
    /* 00479090: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00479093: mov dword ptr [0x791358], ecx */ W32((u32)(0x791358u), r_ecx);
    /* 00479099: cmp dword ptr [0x791358], 5 */ {  u32 a = R32((u32)(0x791358u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004790a0: jge 0x4790b3 */ if ((fS==fO)) goto L_004790b3;
L_004790a2:; BB(0x004790a2);
    /* 004790a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004790a4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004790a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790ac: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004790af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4790b1u); call_ind(t); }
    /* 004790b1: jmp 0x4790d1 */ goto L_004790d1;
L_004790b3:; BB(0x004790b3);
    /* 004790b3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004790b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004790ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790bd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004790c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4790c2u); call_ind(t); }
    /* 004790c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004790c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004790c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790cc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004790cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4790d1u); call_ind(t); }
L_004790d1:; BB(0x004790d1);
    /* 004790d1: jmp 0x4790f1 */ goto L_004790f1;
L_004790d3:; BB(0x004790d3);
    /* 004790d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004790d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004790da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790dd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004790e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4790e2u); call_ind(t); }
    /* 004790e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004790e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004790e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790ec: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004790ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4790f1u); call_ind(t); }
L_004790f1:; BB(0x004790f1);
    /* 004790f1: jmp 0x479115 */ goto L_00479115;
L_004790f3:; BB(0x004790f3);
    /* 004790f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004790f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790f8: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004790fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004790fe: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00479101: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00479103: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00479106: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479108u); call_ind(t); }
    /* 00479108: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047910a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047910d: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00479110: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x479115u); f_005fc420();
L_00479115:; BB(0x00479115);
    /* 00479115: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00479116: mov esp, ebp */ r_esp = r_ebp;
    /* 00479118: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00479119: ret 4 */ FN_RET(0x004787e0); r_esp += 8; return;
}

void f_0047ae60(void) /* DealDrawScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ae60);
    /* 0047ae60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ae61: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ae63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ae65: push 0x69ff08 */ { u32 v = 0x69ff08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ae6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0047ae70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ae71: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ae74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047ae79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047ae7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ae7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0047ae7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0047ae85: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0047ae88: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047ae8b: mov byte ptr [eax + 0x7d2], 0 */ W8((u32)(r_eax+0x7d2u), 0x0u);
    /* 0047ae92: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047ae95: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0047ae98: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x47ae9du); f_005f87d0();
    /* 0047ae9d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047aea0: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x47aea5u); f_0047e1d0();
    /* 0047aea5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0047aea8: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aeac: je 0x47af7f */ if (fZ) goto L_0047af7f;
L_0047aeb2:; BB(0x0047aeb2);
    /* 0047aeb2: cmp dword ptr [ebp - 0x2c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aeb6: je 0x47aec3 */ if (fZ) goto L_0047aec3;
L_0047aeb8:; BB(0x0047aeb8);
    /* 0047aeb8: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aebc: je 0x47af22 */ if (fZ) goto L_0047af22;
L_0047aebe:; BB(0x0047aebe);
    /* 0047aebe: jmp 0x47afdc */ goto L_0047afdc;
L_0047aec3:; BB(0x0047aec3);
    /* 0047aec3: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0047aec5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47aecau); f_00686d82();
    /* 0047aeca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047aecd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047aed0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047aed7: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047aedb: je 0x47aef8 */ if (fZ) goto L_0047aef8;
L_0047aedd:; BB(0x0047aedd);
    /* 0047aedd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047aedf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047aee2: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x47aee7u); f_005fc0d0();
    /* 0047aee7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047aeea: mov dword ptr [edx], 0x6bc75c */ W32((u32)(r_edx), 0x6bc75cu);
    /* 0047aef0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047aef3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0047aef6: jmp 0x47aeff */ goto L_0047aeff;
L_0047aef8:; BB(0x0047aef8);
    /* 0047aef8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0047aeff:; BB(0x0047aeff);
    /* 0047aeff: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047af02: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0047af05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047af0c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047af0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047af10: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 0047af15: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0047af18: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x47af1du); f_005fc420();
    /* 0047af1d: jmp 0x47aff7 */ goto L_0047aff7;
L_0047af22:; BB(0x0047af22);
    /* 0047af22: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0047af24: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47af29u); f_00686d82();
    /* 0047af29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047af2c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0047af2f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0047af36: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047af3a: je 0x47af57 */ if (fZ) goto L_0047af57;
L_0047af3c:; BB(0x0047af3c);
    /* 0047af3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047af3e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047af41: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x47af46u); f_005fc0d0();
    /* 0047af46: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047af49: mov dword ptr [ecx], 0x6bc738 */ W32((u32)(r_ecx), 0x6bc738u);
    /* 0047af4f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047af52: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0047af55: jmp 0x47af5e */ goto L_0047af5e;
L_0047af57:; BB(0x0047af57);
    /* 0047af57: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0047af5e:; BB(0x0047af5e);
    /* 0047af5e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0047af61: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047af64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047af6b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047af6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047af6f: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0047af75: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0047af78: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x47af7du); f_005fc420();
    /* 0047af7d: jmp 0x47aff7 */ goto L_0047aff7;
L_0047af7f:; BB(0x0047af7f);
    /* 0047af7f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0047af81: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47af86u); f_00686d82();
    /* 0047af86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047af89: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0047af8c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0047af93: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047af97: je 0x47afb4 */ if (fZ) goto L_0047afb4;
L_0047af99:; BB(0x0047af99);
    /* 0047af99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047af9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047af9e: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x47afa3u); f_005fc0d0();
    /* 0047afa3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047afa6: mov dword ptr [eax], 0x6bc714 */ W32((u32)(r_eax), 0x6bc714u);
    /* 0047afac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047afaf: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0047afb2: jmp 0x47afbb */ goto L_0047afbb;
L_0047afb4:; BB(0x0047afb4);
    /* 0047afb4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0047afbb:; BB(0x0047afbb);
    /* 0047afbb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0047afbe: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0047afc1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047afc8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047afcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047afcc: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047afd2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0047afd5: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x47afdau); f_005fc420();
    /* 0047afda: jmp 0x47aff7 */ goto L_0047aff7;
L_0047afdc:; BB(0x0047afdc);
    /* 0047afdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0047afde: jne 0x47aff7 */ if (!fZ) goto L_0047aff7;
L_0047afe0:; BB(0x0047afe0);
    /* 0047afe0: push 0x269 */ { u32 v = 0x269u; r_esp -= 4; W32(r_esp, v); }
    /* 0047afe5: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047afea: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047afef: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47aff4u); f_005e9f20();
    /* 0047aff4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047aff7:; BB(0x0047aff7);
    /* 0047aff7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047affa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047b001: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047b002: mov esp, ebp */ r_esp = r_ebp;
    /* 0047b004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047b005: ret  */ FN_RET(0x0047ae60); r_esp += 4; return;
}

